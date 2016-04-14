//Including the gui library
use gtk;

//Global variables
var boardMatrix: [1..9] int;
var output: c_ptr(GtkWidget);
var playCounter: int = 0;
var button_array: [1..9] c_ptr(GtkWidget);
var board: c_ptr(GtkWidget);
var gameOver:bool = false;

//This module contains functions for the game
module Functions{
	//This is the defend function for the computer
	proc defend(boardMatrix: []int, moves: []int){

		var position:int = moves[1];
		var playerOneWon: int = 0;

		//If the center of the board is free, the computer occupies it to gain more control of the game
		if(boardMatrix[5] == 0){
			return 5;
		}
			
		//Checking for positions that will let the player win
		for i in 1..moves.size{
			
			//Based on some assumptions of his next move, moves[i]
			playerOneWon = analyseBoard(boardMatrix, 1, moves[i]);
			if( playerOneWon){
				position = moves[i];
				break;
			}
		}

		return position;
	}
	
	proc attack(boardMatrix: []int, moves: []int){

		var position: int = 0;
		var computerWon: int = 0;
		
		//If the center of the board is free, the computer occupies it to gain more control of the game
		if(boardMatrix[5] == 0){
			return 5;
		}
		
		//Checking for positions that will let the computer win
		for i in 1..moves.size{
			
			//Based on some assumptions of its next move
			computerWon = analyseBoard(boardMatrix, 2, moves[i]);
			if(computerWon){
				position = moves[i];
				break;
			}
		}
		return position;
	}
	
	proc computersMind( boardMatrix: []int): int{

		var availableMoves: int = 9 - playCounter;
		
		var moves: [1..availableMoves]int;
		var counter: int = 1;
		
		//Getting all the available positions
		for i in 1..9{
			if( boardMatrix[i] == 0){
				moves[counter] = i;
				counter += 1;
			}
		}
		
		var position:int = attack(boardMatrix, moves);
		
		//If a spot is found where the computer can win, the computer wins
		if(position){
			return position;
		}
		else{ //Else computer defends
			position = defend(boardMatrix, moves);
			return position;
		}
		
	}
	
	//This function checks if a player with id = key has won.
	//It also checks for a win base on an assumption if the assumeIndex is set
	proc analyseBoard( a: []int, key: int, assumeIndex:int = 0): int{	
		var result = 0;
		
		if( assumeIndex){
			a[assumeIndex] = key;
		}
		
		//Condition for winning
		if( (a[1] == key && a[2] == key && a[3] == key) || (a[4] == key && a[5] == key && a[6] == key) || (a[7] == key && a[8] == key && a[9] == key) || 
			(a[1] == key && a[5] == key && a[9] == key) || (a[1] == key && a[4] == key && a[7] == key) || (a[2] == key && a[5] == key && a[8] == key) || 
			(a[3] == key && a[6] == key && a[9] == key) || (a[7] == key && a[5] == key && a[3] == key) ){
				
			result = key;	
		}
		
		if( assumeIndex ){
			a[assumeIndex] = 0;
		}
		
		return result; 
	}
	
	export proc resetGame(btn: c_ptr(GtkWidget), data: c_void_ptr): void{
	
		playCounter = 0;
		gameOver = false;
		
		for i in 1..9{
			boardMatrix[i] = 0;
			gtk_button_set_label(GTK_BUTTON(button_array[i]), "");  
		}
		gtk_label_set_text(GTK_LABEL(output), "Click on a button to start play.");
	}
	
	export proc record_move (button: c_ptr(GtkWidget), numPtr: c_ptr(int)): void{
		
		var num = numPtr.deref();
		var ptr: c_void_ptr; //Variable passed to resetGame() method
		
				
		if( gameOver ){
			resetGame(button, ptr);  
			gameOver = false;
		}
		else if( boardMatrix[num] != 0){          
			//Not a valid play
			if(playCounter % 2 == 0){
				gtk_label_set_text(GTK_LABEL(output), "   Invalid move, spot occupied, Play again");
			}

		}
		else{ //Move was valid
		
			//Player one played
			if(playCounter % 2 == 0){
				boardMatrix[num] = 1;
				gtk_button_set_label(GTK_BUTTON(button), "O");
				playCounter += 1;
				
				var player: int = analyseBoard(boardMatrix, 1);
				
				if( player ){ 
					gtk_label_set_text(GTK_LABEL(output), "  Game Over: You win!!");
					gameOver = true;
				}
				else{ //If player doesn't win, the computer plays
					//Clears the output label's text
					if(playCounter >= 1){
						gtk_label_set_text(GTK_LABEL(output), "");
					}
					
					//If computer still has a chance to play
					if( playCounter < 9){
						var computersMove = computersMind(boardMatrix);
						boardMatrix[computersMove] = 2;
						gtk_button_set_label(GTK_BUTTON(button_array[computersMove]), "X");
						
						var computer: int = analyseBoard(boardMatrix, 2);
				
						if( computer){ //if computer wins
							gtk_label_set_text(GTK_LABEL(output), "  Game Over: You lose!!");
							gameOver = true;
						}
						playCounter += 1;
					}
					else{ //All available spots have been occupied, hence game over.
						gameOver = true;
						gtk_label_set_text(GTK_LABEL(output), "  Game Over: Draw");
					}
					
				}
				
			}
		}
	}
}

module FunctionSysbols{
	
	extern var callMe: opaque;
    extern var record_move: opaque;
    extern var resetGame: opaque;
}

//Beginning of main
proc main( args: [] string){

	use FunctionSysbols;
	var num:int;
	
	const HIEGHT:c_int = 100;
	const WIDTH:c_int = 150;
	
	//Initialises all widgets
	gtk_init(args);    
	
	var window: c_ptr(GtkWidget) = chpl_window_new("Tic Tac Toe Game", 400, 400);
	gtk_window_set_resizable(GTK_WINDOW(window), false);
   
	//Declaring and initialising a table to hold widgets  
	board = gtk_grid_new();
	
	//Declaring resetBtn and stopBtn to reset and stop game respectively
	var resetBtn: c_ptr(GtkWidget) = gtk_button_new_with_mnemonic("Reset game");
	g_signal_connect(resetBtn, "clicked", G_CALLBACK(resetGame), nil);
	
	var stopBtn: c_ptr(GtkWidget) = gtk_button_new_with_mnemonic("Quit game");
	g_signal_connect_swapped(stopBtn, "clicked", G_CALLBACK(gtk_widget_destroy), window);
	 
	//outputLabel is used to display game status at any moment
	output = gtk_label_new("Click on a button to start play.");
	
	//These nested for loops add buttons to the board
	var counter = 1;
	
	var one = 1, two = 2, three = 3, four = 4, five = 5, six = 6, seven = 7, eight = 8, nine = 9;
	for i in 1..3{
		for j in 1..3{  
			button_array[counter] = gtk_button_new_with_label(" ");
			
			select(counter){
				when 1 do
					g_signal_connect(button_array[counter], "clicked", G_CALLBACK(record_move), c_ptrTo(one));
				when 2 do
					g_signal_connect(button_array[counter], "clicked", G_CALLBACK(record_move), c_ptrTo(two));
				when 3 do
					g_signal_connect(button_array[counter], "clicked", G_CALLBACK(record_move), c_ptrTo(three));
				when 4 do
					g_signal_connect(button_array[counter], "clicked", G_CALLBACK(record_move), c_ptrTo(four));
				when 5 do
					g_signal_connect(button_array[counter], "clicked", G_CALLBACK(record_move), c_ptrTo(five));
				when 6 do
					g_signal_connect(button_array[counter], "clicked", G_CALLBACK(record_move), c_ptrTo(six));
				when 7 do
					g_signal_connect(button_array[counter], "clicked", G_CALLBACK(record_move), c_ptrTo(seven));
				when 8 do
					g_signal_connect(button_array[counter], "clicked", G_CALLBACK(record_move), c_ptrTo(eight));
				when 9 do
					g_signal_connect(button_array[counter], "clicked", G_CALLBACK(record_move), c_ptrTo(nine));
			}
			
			gtk_widget_set_size_request(button_array[counter], WIDTH, HIEGHT);
			gtk_grid_attach(GTK_GRID(board), button_array[counter], (j-1):c_int, (i-1):c_int, 1:c_int, 1:c_int); 
			counter += 1;
		}
	}
	
	//Attaching buttons to the board(a table)
	gtk_widget_set_size_request(output, WIDTH, HIEGHT);
	gtk_grid_attach(GTK_GRID(board), output, 0:c_int, 3:c_int, 3:c_int, 1:c_int);
	
	gtk_widget_set_size_request(resetBtn, WIDTH, HIEGHT);
	gtk_grid_attach(GTK_GRID(board), resetBtn, 0:c_int, 4:c_int, 1:c_int, 1:c_int);
	
	gtk_widget_set_size_request(stopBtn, WIDTH, HIEGHT);
	gtk_grid_attach(GTK_GRID(board), stopBtn, 2:c_int, 4:c_int, 1:c_int, 1:c_int);
	
	//Adds the board to the window
	gtk_container_add(GTK_CONTAINER(window), board);
	 
	//Linking close signal of window to its callback function
	link_close_signal(window);  
	gtk_widget_show_all(window);

	gtk_main(); 
}

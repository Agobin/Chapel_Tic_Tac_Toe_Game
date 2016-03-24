use gtk;

var boardMatrix: [1..9] int;
var output: c_ptr(GtkWidget);
var playerTime: int = 0;
var button_array: [1..9] c_ptr(GtkWidget);
var board: c_ptr(GtkWidget);
var gameOver:bool = false;

//This is a callback function that changes the label on a button
//when it is clicked
var timesClicked: int = 0;
export proc callMe( btn:c_ptr(GtkWidget), data: c_string){
	
	if (timesClicked % 2 == 0){
		gtk_button_set_label(GTK_BUTTON(btn), "Normal text");
	}
	else{
		gtk_button_set_label(GTK_BUTTON(btn), "Text changed"); 
	}
	
	timesClicked += 1;
	gtk_widget_show(btn);
}

//extended function from gtk
extern var g_print: opaque;

//Beginning of main
proc main( args: [] string){

    extern var callMe: opaque;
      
	//Initialises all widgets
	gtk_init(args);    
	
	var window: c_ptr(GtkWidget) = chpl_window_new("Tic Tac Toe Game", 600, 500);
	gtk_window_set_resizable(GTK_WINDOW(window), false);
   
	//Declaring and initialising a table to hold widgets  
	board = gtk_table_new(5, 3, true);
	
	//Declaring resetBtn and stopBtn to reset and stop game respectively
	var resetBtn: c_ptr(GtkWidget) = gtk_button_new_with_mnemonic("Reset game");
	var stopBtn: c_ptr(GtkWidget) = gtk_button_new_with_mnemonic("Quit game");
	
	//Linking callback functions to buttons
	//g_print() prints it arguments to the terminal
	g_signal_connect(resetBtn, "clicked", G_CALLBACK(g_print), "Reset game");
	g_signal_connect_swapped(stopBtn, "clicked", G_CALLBACK(gtk_widget_destroy), window);
	 
	//outputLabel is used to display game status at any moment
	output = gtk_label_new("Player one start play");
	
	//These nested for loops add buttons to the board
	var counter = 1;
	 var one = 1, two = 2, three = 3, four = 4, five = 5, six = 6, seven = 7, eight = 8, nine = 9;
	for i in 1..3{
		for j in 1..3{
			var btn: c_ptr(GtkWidget) = gtk_button_new_with_label(" ");
			button_array[counter] = btn;
			gtk_table_attach_defaults(GTK_TABLE(board), button_array[counter], (i-1):c_int, i:c_int, (j-1):c_int, j:c_int); 
			counter += 1;
		}
	}
	
	//Attaching buttons to the board(a table)
	gtk_table_attach_defaults(GTK_TABLE(board), output, 0:c_int, 3:c_int, 3:c_int, 4:c_int);
	gtk_table_attach_defaults(GTK_TABLE(board), resetBtn, 0:c_int, 1:c_int, 4:c_int, 5:c_int);
	gtk_table_attach_defaults(GTK_TABLE(board), stopBtn, 2:c_int, 3:c_int, 4:c_int, 5:c_int);
	
	//Adds the board to the window
	gtk_container_add(GTK_CONTAINER(window), board);
	
	//Linking close signal of window to its callback function
	link_close_signal(window);  
	gtk_widget_show_all(window);

	gtk_main(); 
}
proc record_move(button: c_ptr(GtkWidget), num){
	
	
	if( gameOver ){
		//resetGame(NULL, NULL);
		gameOver = false;
	}
	else if( boardMatrix[num] != 0){
		//Not a valid play
		if(playerTime % 2 == 0){
			gtk_label_set_label(GTK_LABEL(output), "   Invalid move, spot occupied, Player one play again");
		}
		else{
			gtk_label_set_label(GTK_LABEL(output), "   Invalid move, spot occupied, Player two play again");
		}

	}
	else{ //Move was valid
	
		if(playerTime % 2 == 0){
			boardMatrix[num] = 1;
			gtk_button_set_label(GTK_BUTTON(button), "X");
		}
		else{
			boardMatrix[num] = 2;
			gtk_button_set_label(GTK_BUTTON(button), "O");
		}
		
		var gameWon1: int = analyseBoard(boardMatrix, 9, 1);
		var gameWon2: int = analyseBoard(boardMatrix, 9, 2);
		
		if( gameWon1 ){ 
			gtk_label_set_text(GTK_LABEL(output), "  Game Over\nPlayer one won!!");
			gameOver = true;
		}
		else if( gameWon2){
			gtk_label_set_text(GTK_LABEL(output), "  Game Over\nPlayer two won!!");
			gameOver = true;
		}
		else if(playerTime == 8){
			gtk_label_set_text(GTK_LABEL(output), "  Game Over\nNobody won");
		}
		else if(playerTime < 8){
		
			if(playerTime % 2 == 0){
				gtk_label_set_text(GTK_LABEL(output), "Player two's time to play");
			}
			else{
				gtk_label_set_text(GTK_LABEL(output), "Player one's time to play");
			}
			
			playerTime += 1;
		}
	}
}

proc analyseBoard( a: [] int, n: int, key: int){
	
	if( (a[0] == key && a[1] == key && a[2] == key) || (a[3] == key && a[4] == key && a[5] == key) || (a[6] == key && a[7] == key && a[8] == key) || 
	    (a[0] == key && a[4] == key && a[8] == key) || (a[0] == key && a[3] == key && a[6] == key) || (a[1] == key && a[4] == key && a[7] == key) || 
	    (a[2] == key && a[5] == key && a[8] == key) || (a[6] == key && a[4] == key && a[2] == key) ){
	    
		return key;	
	}
	else{
		return 0;
	}
}

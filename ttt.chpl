use gtk;

var boardMatrix: [1..9] int;

//This is a callback function that changes the label on a button
//when it is clicked
proc callMe( btn:c_ptr(GtkWidget), data: c_void_ptr){
	gtk_button_set_label(GTK_BUTTON(btn), "Changed");
	gtk_widget_show(btn);
}

//extended function from gtk
extern var g_print: opaque;

//Beginning of main
proc main( args: [] string){
	
	gtk_init(args);  //Initialises all widgets
	
	var window: c_ptr(GtkWidget) = chpl_window_new("Tic Tac Toe Game", 600, 500);
	gtk_window_set_resizable(GTK_WINDOW(window), false);
  
	//Declaring and initialising a table to hold widgets
	var board: c_ptr(GtkWidget) = gtk_table_new(5, 3, true);
	
	//Declaring resetBtn and stopBtn to reset and stop game respectively
	var resetBtn: c_ptr(GtkWidget) = gtk_button_new_with_mnemonic("This button works");
	var stopBtn: c_ptr(GtkWidget) = gtk_button_new_with_mnemonic("This button doesn't work'");
	
	//Linking callback functions to buttons
	//g_print() prints it arguments to the terminal
	g_signal_connect(resetBtn, "clicked", G_CALLBACK(g_print), "Test");
	g_signal_connect(stopBtn, "clicked", G_CALLBACK(callMe), nil);
	
	//outputLabel is used to display game status at any moment
	var outputLabel = gtk_label_new("Output label");
	
	//These nested for loops add buttons to the board	
	for i in 1..3{
		for j in 1..3{
			var btn: c_ptr(GtkWidget) = gtk_button_new_with_label(" ");
			gtk_table_attach_defaults(GTK_TABLE(board), btn, (i-1):c_int, i:c_int, (j-1):c_int, j:c_int); 
		}
	}
	
	//Attaching buttons to the board(a table)
	gtk_table_attach_defaults(GTK_TABLE(board), outputLabel, 0:c_int, 1:c_int, 3:c_int, 4:c_int);
	gtk_table_attach_defaults(GTK_TABLE(board), resetBtn, 0:c_int, 1:c_int, 4:c_int, 5:c_int);
	gtk_table_attach_defaults(GTK_TABLE(board), stopBtn, 2:c_int, 3:c_int, 4:c_int, 5:c_int);
	
	//Adds the board to the window
	gtk_container_add(GTK_CONTAINER(window), board);
	
	link_close_signal(window);
	gtk_widget_show_all(window);

	gtk_main(); 
}

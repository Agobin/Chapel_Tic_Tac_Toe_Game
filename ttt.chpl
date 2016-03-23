use gtk;

<<<<<<< HEAD
var boardMatrix: [1..9] int;

//This is a callback function
proc callMe( btn:c_ptr(GtkWidget), data: c_void_ptr){
	gtk_button_set_label(GTK_BUTTON(btn), "Changed");
	gtk_widget_show(btn);
}

//extended function from gtk
extern var g_print: opaque;
=======
extern proc G_CALLBACK(f): GCallback;
extern proc G_OBJECT(f): c_ptr(GObject);

//Test functions
extern var g_signal_connect: opaque;
extern var g_print: opaque;
extern proc GTK_BUTTON(obj): c_ptr(GtkButton);
extern proc gtk_button_new_with_label(str: c_string): c_ptr(GtkWidget);
extern proc gtk_button_set_label(btn: c_ptr(GtkButton), text: c_string): void;

//Callback funstion
proc callMe( btn: c_ptr(GtkWidget), data){
	gtk_button_set_label(GTK_BUTTON(btn), "Button label was changed");
}
>>>>>>> 70f17a5a2bd24ee8cd1731192c6ae41f7ab8525f

//Beginning of main
proc main( args: [] string){
	
	gtk_init(args);  //Initialises all widgets
	
	var window: c_ptr(GtkWidget) = chpl_window_new("Tic Tac Toe Game", 600, 500);
	gtk_window_set_resizable(GTK_WINDOW(window), false);
  
<<<<<<< HEAD
	var board: c_ptr(GtkWidget) = gtk_table_new(5, 3, true);
	var resetBtn: c_ptr(GtkWidget) = gtk_button_new_with_mnemonic("This button works");
	var stopBtn: c_ptr(GtkWidget) = gtk_button_new_with_mnemonic("This button doesn't work'");
	
	//Linking callback functions to buttons
	//g_print() prints it arguments to the terminal
	g_signal_connect(resetBtn, "clicked", G_CALLBACK(g_print), "Test");
	g_signal_connect(stopBtn, "clicked", G_CALLBACK(callMe), nil);
	
	var outputLabel = gtk_label_new("Output label");
	
		
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
=======
	gtk_init(args);
 
	var window: c_ptr(GtkWidget) = chpl_window_new("Tic Tac Toe Game", 500, 500);
	var btn: c_ptr(GtkWidget) = gtk_button_new_with_label("The test btn");
	gtk_widget_set_size_request(btn, 50, 50);
	g_signal_connect(btn, "clicked", G_CALLBACK(g_print), "It was called");
	//g_signal_connect(btn, "clicked", G_CALLBACK(callMe), nil); //This doesn't work
  
	gtk_container_add(GTK_CONTAINER(window), btn);
>>>>>>> 70f17a5a2bd24ee8cd1731192c6ae41f7ab8525f
	
	link_close_signal(window);
	gtk_widget_show_all(window);

	gtk_main(); 
}

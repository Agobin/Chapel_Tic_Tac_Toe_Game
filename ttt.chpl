use gtk;

var boardMatrix: [1..9] int;

proc callMe(btn, data){
	//gtk_button_set_label(GTK_BUTTON(btn), "Changed");
	//gtk_widget_show(btn);
}
proc main( args: [] string){
  
	gtk_init(args);
 
	var window: c_ptr(GtkWidget) = chpl_window_new("Tic Tac Toe Game", 500, 500);
	gtk_window_set_resizable(GTK_WINDOW(window), false);
  
	var board: c_ptr(GtkWidget) = gtk_table_new(5, 3, true);
	var rBtn: c_ptr(GtkWidget) = gtk_button_new_with_mnemonic("R_eset game");
	//g_signal_connect(rBtn, "clicked", G_CALLBACK(callMe), rBtn);
		
	for i in 1..3{
		for j in 1..3{
			var btn: c_ptr(GtkWidget) = gtk_button_new_with_label(" ");
			gtk_table_attach_defaults(GTK_TABLE(board), btn, (i-1):c_int, i:c_int, (j-1):c_int, j:c_int);
		}
	}
	
	gtk_table_attach_defaults(GTK_TABLE(board), rBtn, 0:c_int, 3:c_int, 4:c_int, 5:c_int);
	gtk_container_add(GTK_CONTAINER(window), board);
	
	link_close_signal(window);
	gtk_widget_show_all(window);

	gtk_main(); 
}

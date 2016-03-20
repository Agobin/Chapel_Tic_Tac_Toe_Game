use gtk;



//Beginning of main
proc main( args: [] string){
  
	gtk_init(args);
 
	var window: c_ptr(GtkWidget) = chpl_window_new("Tic Tac Toe Game", 500, 500);
  
	var board: c_ptr(GtkWidget) = gtk_table_new(3, 3, true);
	for i in 1..3{
		for j in 1..3{
			var btn: c_ptr(GtkWidget) = gtk_button_new_with_label("The test btn");
			gtk_table_attach_defaults(GTK_TABLE(table), btn, (i-1):c_int, i:c_int, (j-1):c_int, j:c_int);
		}
	}
	
	gtk_container_add(GTK_CONTAINER(window), table);
	
	link_close_signal(window);
	gtk_widget_show_all(window);

	gtk_main(); 
}
   

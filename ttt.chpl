use gtk;

extern proc G_CALLBACK(f): GCallback;
extern proc G_OBJECT(f): c_ptr(GObject);

//Test functions
extern var g_signal_connect: opaque;
extern var g_print: opaque;
extern proc GTK_BUTTON(obj): c_ptr(GtkButton);
extern proc gtk_button_set_label(btn: c_ptr(GtkButton), text: c_string): void;

//Callback funstion
proc callMe( btn: c_ptr(GtkWidget), data){
	gtk_button_set_label(GTK_BUTTON(btn), "Button label was changed");
}

//Beginning of main
proc main( args: [] string){
  
	gtk_init(args);
 
	var window: c_ptr(GtkWidget) = chpl_window_new("Tic Tac Toe Game", 500, 500);
	var btn: c_ptr(GtkWidget) = gtk_button_new_with_label("The test btn");
	gtk_widget_set_size_request(btn, 50, 50);
	g_signal_connect(btn, "clicked", G_CALLBACK(g_print), "It was called");
	//g_signal_connect(btn, "clicked", G_CALLBACK(callMe), nil); //This doesn't work
  
	gtk_container_add(GTK_CONTAINER(window), btn);
	//g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(destroy_c), nil );
	//g_signal_connect(G_OBJECT(window), "delete_event", G_CALLBACK(delete_event), nil);
	
	link_close_signal(window);
	gtk_widget_show_all(window);

	gtk_main();
}
   

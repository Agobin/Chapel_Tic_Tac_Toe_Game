use gtk;


extern proc G_CALLBACK(f): GCallback;
extern proc G_OBJECT(f): c_ptr(GObject);


extern proc g_signal_connect(widget , signal_name: c_string, call_fxn: GCallback, data);

extern proc gtk_button_new_with_label( a: c_string): c_ptr(GtkWidget);
extern proc GTK_BUTTON(obj): c_ptr(GtkButton);
extern proc gtk_button_set_label(b: c_ptr(GtkButton), str: c_string) : void;
extern proc g_print(args...): void;

 
extern proc destroy_c( a:c_ptr(GtkWidget) , b:gpointer): void;

extern proc delete_event(a: c_ptr(GtkWidget), b: c_ptr(GdkEvent), c: gpointer): bool;


//Beginning of main
proc main( args: [] string){
  
	gtk_init(args);
 
	var window: c_ptr(GtkWidget) = chpl_window_new("Tic Tac Toe Game", 500, 500);
	var btn: c_ptr(GtkWidget) = gtk_button_new_with_label("The test btn");
	gtk_widget_set_size_request(btn, 50, 50);
	g_signal_connect(btn, "clicked", G_CALLBACK(g_print), "It was called");
  
	gtk_container_add(GTK_CONTAINER(window), btn);
	//g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(destroy_c), nil );
	//g_signal_connect(G_OBJECT(window), "delete_event", G_CALLBACK(delete_event), nil);
	
	link_close_signal(window);
	gtk_widget_show_all(window);

	gtk_main();
}
   

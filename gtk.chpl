//This adds the required files needed to compile the program
require "gtk/gtk.h", "gtk_gui.c", "gtk_gui.h";

use gtk_types;


//This function initialises gtk components(gives them their default value) before their us
extern proc chpl_init(ref argc: c_int, ref argv: c_string) : void;

//This function returns a window with title = title( the first argument) and of width and hiegth the second
// and third arguments respectively
extern proc chpl_window_new( title: c_string,  width: c_int, height: c_int) : c_ptr(GtkWidget);

//This function sets the visibility of a widget to true
extern proc gtk_widget_show( object: c_ptr(GtkWidget)): void;

//This function sets the visibility of all widgets in a container to true
extern proc gtk_widget_show_all( object: c_ptr(GtkWidget)): void;

//This function calls indicates the end of the program
extern proc gtk_main(): void;
extern proc gtk_main_quit();

//This function returns a label widget
extern proc gtk_label_new( str: c_string): c_ptr(GtkWidget);

//This function adds a widget into a container
extern proc gtk_container_add( wid: c_ptr(GtkContainer), child: c_ptr(GtkWidget));

//This function links a widget to a callback function
extern proc link_close_signal(ref window: c_ptr(GtkWidget)) :void;

//This function hides a window
extern proc link_hide_signal(ref window: c_ptr(GtkWidget)) :void;

//Miscellaneous
extern proc g_print(args...): void;


//Widgets
extern proc gtk_widget_set_size_request( widget: c_ptr(GtkWidget), wid: c_int, h: c_int): void;

//Function macros
extern proc G_CALLBACK(f): GCallback;
extern proc G_OBJECT(f): c_ptr(GObject);
extern proc GTK_BUTTON(obj): c_ptr(GtkButton);
extern proc GTK_LABEL(obj): c_ptr(GtkLabel);
extern proc GTK_TABLE(obj): c_ptr(GtkTable);
extern proc GTK_CONTAINER( a: c_ptr(GtkWidget)) : c_ptr(GtkContainer);


//signals
extern proc g_signal_connect(widget , signal_name: c_string, call_fxn: GCallback, data);
extern proc g_signal_connect_swapped(widget , signal_name: c_string, call_fxn: GCallback, data);

//Buttons
extern proc gtk_button_new(): c_ptr(GtkWidget);
extern proc gtk_button_new_with_label( a: c_string): c_ptr(GtkWidget);
extern proc gtk_button_new_with_mnemonic(str: c_string): c_ptr(GtkWidget);
extern proc gtk_button_new_from_stock(str: c_string): c_ptr(GtkWidget);
extern proc gtk_button_set_label(b: c_ptr(GtkButton), str: c_string) : void;
extern proc gtk_button_set_relief(butn: c_ptr(GtkButton), style: GtkReliefStyle): void;
extern proc gtk_button_new_with_mnemonic(str: c_string): c_ptr(GtkWidget);


//Tables
extern proc gtk_table_new(r: c_int, c: c_int, h: bool): c_ptr(GtkWidget);
extern proc gtk_table_attach(table: c_ptr(GtkTable), widget: c_ptr(GtkWidget),
							attachLeft: c_int, attachRight: c_int, attachTop: c_int,
							attachBottom: c_int, op1: GtkAttachOptions, op2: GtkAttachOptions,
							xpadding: c_int, ypadding: c_int): void;
extern proc	gtk_table_attach_defaults(table: c_ptr(GtkTable), widget: c_ptr(GtkWidget),
							attachLeft: c_int, attachRight: c_int,
							attachTop: c_int, attachBottom: c_int): void;
extern proc gtk_table_get_col_spacing(table: c_ptr(GtkTable), col: c_int): c_int;
extern proc gtk_table_get_row_spacing(table: c_ptr(GtkTable), row: c_int): c_int;
extern proc gtk_table_get_default_col_spacing(table: c_ptr(GtkTable)): c_int;
extern proc gtk_table_get_default_row_spacing(table: c_ptr(GtkTable)): c_int;
extern proc gtk_table_get_homogeneous(table: c_ptr(GtkTable)): bool;
extern proc gtk_table_get_size(table: c_ptr(GtkTable), row: c_ptr(c_int), col: c_ptr(c_int)): void;
extern proc gtk_table_get_type(): GType;
extern proc gtk_table_resize(table: c_ptr(GtkTable), row: c_int, col: c_int): void;
extern proc gtk_table_set_col_spacing(table: c_ptr(GtkTable), col: c_int, spacing: c_int): void;
extern proc gtk_table_set_col_spacings(table: c_ptr(GtkTable), spacing: c_int): void;
extern proc gtk_table_set_homogeneous(table: c_ptr(GtkTable), homogeneous: bool): void;
extern proc gtk_table_set_row_spacing(table: c_ptr(GtkTable), row: c_int, spacing: c_int): void;
extern proc gtk_table_set_row_spacings(table: c_ptr(GtkTable), spacing: c_int): void;


 
//Custom defined functions 
extern proc destroy_c( a:c_ptr(GtkWidget) , b:gpointer): void;

extern proc delete_event(a: c_ptr(GtkWidget), b: c_ptr(GdkEvent), c: gpointer): bool;


//This function shows a dialog
proc showDialog( title: c_string = "Title", message: c_string = "", wid: c_int = 300, h: c_int = 100){
  var window: c_ptr(GtkWidget);
  var lab: c_ptr(GtkWidget);

  lab = gtk_label_new(message);
  window = chpl_window_new(title, wid, h);
  gtk_container_add(GTK_CONTAINER(window), lab);
  link_hide_signal(window);
  gtk_widget_show_all(window);

}

//This function initialises gtk components
proc gtk_init(args: [] string): void{
  var argc: c_int = 1;
  var cStr: c_string = args[0];
  chpl_init(argc, cStr);
}


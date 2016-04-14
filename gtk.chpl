//This adds the required files needed to compile the program
require "gtk/gtk.h", "gtk_gui.c", "gtk_gui.h";

use gtk_types;


//This function initialises gtk components(gives them their default value) before their us
extern proc chpl_init(ref argc: c_int, ref argv: c_string) : void;

//This function returns a window with title = title( the first argument) and of width and hiegth the second
// and third arguments respectively
extern proc chpl_window_new( title: c_string,  width: c_int, height: c_int) : c_ptr(GtkWidget);

//Widgets
extern proc gtk_widget_show( object: c_ptr(GtkWidget)): void;
extern proc gtk_widget_show_all( object: c_ptr(GtkWidget)): void;
extern proc gtk_widget_set_size_request( widget: c_ptr(GtkWidget), wid: c_int, h: c_int): void;
extern var gtk_widget_destroy: opaque;

//This function calls indicates the end of the program
extern proc gtk_main(): void;
extern proc gtk_main_quit();

//Label
extern proc gtk_label_new( str: c_string): c_ptr(GtkWidget);
extern proc gtk_label_set_text( wid: c_ptr(GtkLabel), text: c_string): void;

//Container
extern proc gtk_container_add( wid: c_ptr(GtkContainer), child: c_ptr(GtkWidget));

//Miscellaneous
//extern proc g_print(args...): void;


//Function macros
extern proc G_CALLBACK(f): GCallback;
extern proc G_OBJECT(f): c_ptr(GObject);
extern proc GTK_WINDOW(obj): c_ptr(GtkWindow);
extern proc GTK_BUTTON(obj): c_ptr(GtkButton);
extern proc GTK_LABEL(obj): c_ptr(GtkLabel);
extern proc GTK_TABLE(obj): c_ptr(GtkTable);
extern proc GTK_CONTAINER( a: c_ptr(GtkWidget)) : c_ptr(GtkContainer);


//signals
extern proc g_signal_connect(widget , signal_name: c_string, call_fxn: GCallback, data): void;
extern proc g_signal_connect_swapped(widget , signal_name: c_string, call_fxn: GCallback, data): void;

//Window
extern proc gtk_window_set_title(win: c_ptr(GtkWindow), str: c_string): void;
extern proc gtk_window_set_resizable(win: c_ptr(GtkWindow), resizable: bool): void;
extern proc gtk_window_set_icon_from_file(win: c_ptr(GtkWindow), filename: c_string,ref err: c_ptr(GError)): void;

//Buttons
extern proc gtk_button_new(): c_ptr(GtkWidget);
extern proc gtk_button_new_with_label( a: c_string): c_ptr(GtkWidget);
extern proc gtk_button_new_with_mnemonic(str: c_string): c_ptr(GtkWidget);
extern proc gtk_button_new_from_stock(str: c_string): c_ptr(GtkWidget);
extern proc gtk_button_set_label(b: c_ptr(GtkButton), str: c_string) : void;
extern proc gtk_button_set_relief(butn: c_ptr(GtkButton), style: GtkReliefStyle): void;


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

//GtkGrid
extern proc gtk_grid_new(): c_ptr(GtkWidget);
extern proc gtk_grid_attach(grid: c_ptr(GtkGrid), widget: c_ptr(GtkWidget),
							attachLeft: c_int, attachTop: c_int,
							width: c_int, height: c_int): void;
extern proc GTK_GRID(grid:c_ptr(GtkWidget)): c_ptr(GtkGrid);
 
//Custom defined functions 
extern proc destroy_c( a:c_ptr(GtkWidget) , b:gpointer): void;
extern proc delete_event(a: c_ptr(GtkWidget), b: c_ptr(GdkEvent), c: gpointer): bool;
extern proc link_close_signal(ref window: c_ptr(GtkWidget)) :void;
extern proc link_hide_signal(ref window: c_ptr(GtkWidget)) :void;


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


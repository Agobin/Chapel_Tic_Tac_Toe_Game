
//This file contains gtk types externded into chapel

extern type gpointer;
extern type GCallback;
extern type GObject;
extern type GdkEvent;

//Individual Widget Gallery
	//Windows
extern type GtkDialog; 		// Create popup windows
extern type GtkInvisible; 	// A widget which is not displayed
extern type GtkMessageDialog; //- A convenient message window
extern type GtkWindow;  	//Toplevel which can contain other widgets
extern type GtkWindowGroup; //- Limit the effect of grabs
extern type GtkAboutDialog; //- Display information about an application

	//Display Widgets
extern type GtkAccelLabel; 	//- A label which displays an accelerator key on the right of the text
extern type GtkImage;  		//A widget displaying an image
extern type GtkLabel; 		//- A widget that displays a small to medium amount of text
extern type GtkProgressBar; //- A widget which indicates progress visually
extern type GtkStatusbar; 	//- Report messages of minor importance to the user

	//Buttons and Toggles
extern type GtkButton; 			//- A widget that creates a signal when clicked on
extern type GtkCheckButton; 	//- Create widgets with a discrete toggle button
extern type GtkRadioButton; 	//- A choice from multiple check buttons
extern type GtkToggleButton; 	//- Create buttons which retain their state

	//Numeric/Text Data Entry
extern type GtkEntry; 			//- A single line text entry field
extern type GtkEntryCompletion; //- Completion functionality for GtkEntry
extern type GtkHScale; 			//- A horizontal slider widget for selecting a value from a range
extern type GtkVScale; 			//- A vertical slider widget for selecting a value from a range
extern type GtkSpinButton;		//- Retrieve an integer or floating-point number from the user
extern type GtkEditable; 		//- Interface for text-editing widgets

	//Multiline Text Editor
//Text Widget Overview - Overview of GtkTextBuffer, GtkTextView, and friends
extern type GtkTextIter; 		//- Text buffer iterator
extern type GtkTextMark; 		//- A position in the buffer preserved across buffer modifications
extern type GtkTextBuffer; 		//- Stores attributed text for display in a GtkTextView
extern type GtkTextTag; 		//- A tag that can be applied to text in a GtkTextBuffer
extern type GtkTextTagTable; 	//- Collection of tags that can be used together
extern type GtkTextView; 		//- Widget that displays a GtkTextBuffer

	//Tree, List and Icon Grid Widgets
//Tree and List Widget Overview - Overview of GtkTreeModel, GtkTreeView, and other
//associated widgets
extern type GtkTreeModel; 			//- The tree interface used by GtkTreeView
extern type GtkTreeSelection; 		//- The selection object for GtkTreeView
extern type GtkTreeViewColumn; 		//- A visible column in a GtkTreeView widget
extern type GtkTreeView; 			//- A widget for displaying both trees and lists
extern type GtkCellView; 			//- A widget displaying a single row of a GtkTreeModel
extern type GtkIconView; 			//- A widget which displays a list of icons in a grid
extern type GtkTreeSortable; 		//- The interface for sortable models used by GtkTreeView
extern type GtkTreeModelSort; 		//- A GtkTreeModel which makes an underlying tree model sortable
extern type GtkTreeModelFilter; 	//- A GtkTreeModel which hides parts of an underlying tree model
extern type GtkCellLayout; 			//- An interface for packing cells
extern type GtkCellRenderer; 		//- An object for rendering a single cell on a GdkDrawable
extern type GtkCellEditable; 		//- Interface for widgets which can are used for editing cells
extern type GtkCellRendererCombo; 
extern type GtkCellRendererPixbuf; 	//- Renders a pixbuf in a cell
extern type GtkCellRendererProgress;//- Renders numbers as progress bars
extern type GtkCellRendererText; 	//- Renders text in a cell
extern type GtkCellRendererToggle; 	//- Renders a toggle button in a cell
extern type GtkListStore;			//- A list-like data structure that can be used with the GtkTreeView
extern type GtkTreeStore; 			//- A tree-like data structure that can be used with the GtkTreeView

	//Menus, Combo Box, Toolbar
extern type GtkComboBox; 			//- A widget used to choose from a list of items
extern type GtkComboBoxEntry; 		//- A text entry field with a dropdown list
extern type GtkMenu; 				//- A menu widget
extern type GtkMenuBar; 			//- A subclass widget for GtkMenuShell which holds GtkMenuItem widgets
extern type GtkMenuItem; 			//- The widget used for item in menus
extern type GtkMenuShell; 			//- A base class for menu objects
extern type GtkImageMenuItem; 		//- A menu item with an icon
extern type GtkRadioMenuItem; 		//- A choice from multiple check menu items
extern type GtkCheckMenuItem; 		//- A menu item with a check box
extern type GtkSeparatorMenuItem; 	//- A separator used in menus
extern type GtkTearoffMenuItem; 	//- A menu item used to tear off and reattach its menu
extern type GtkToolbar; 			//- Create bars of buttons and other widgets
extern type GtkToolItem; 			//- The base class of widgets that can be added to GtkToolbar
extern type GtkSeparatorToolItem; 	//- A toolbar item that separates groups of other toolbar items
extern type GtkToolButton; 			//- A GtkToolItem subclass that displays buttons
extern type GtkMenuToolButton; 		//- A GtkToolItem containing a button with an additional dropdown
	
	//Menu
extern type GtkToggleToolButton; 	//- A GtkToolItem containing a toggle button
extern type GtkRadioToolButton; 	//- A toolbar item that contains a radio button
	
	//Action-based menus and toolbars
extern type GtkUIManager; 		//- Constructing menus and toolbars from an XML description
extern type GtkActionGroup; 	//- A group of actions
extern type GtkAction; 			//- An action which can be triggered by a menu or toolbar item
extern type GtkToggleAction; 	//- An action which can be toggled between two states
extern type GtkRadioAction; 	//- An action of which only one in a group can be active
	
	//Selectors (File/Font/Color/Input Devices)
extern type GtkColorButton; 			//- A button to launch a color selection dialog
extern type GtkColorSelection; 			//- A widget used to select a color
extern type GtkColorSelectionDialog;	//- A standard dialog box for selecting a color
extern type GtkFileSelection; 			//- Prompt the user for a file or directory name
extern type GtkFileChooser; 			//- File chooser interface used by GtkFileChooserWidget and
extern type GtkFileChooserButton; 		//- A button to launch a file selection dialog
extern type GtkFileChooserDialog;	 	//- A file chooser dialog, suitable for "File/Open" or "File/Save"

extern type GtkFileChooserWidget;	 	//- File chooser widget that can be embedded in other widgets
extern type GtkFileFilter; 				//- A filter for selecting a file subset
extern type GtkFontButton; 				//- A button to launch a font selection dialog
extern type GtkFontSelection; 			//- A widget for selecting fonts
extern type GtkFontSelectionDialog;	 	//- A dialog box for selecting fonts
extern type GtkInputDialog; 			//- Configure devices for the XInput extension
	
	//Layout Containers
extern type GtkAlignment; 		//- A widget which controls the alignment and size of its child
extern type GtkAspectFrame; 	//- A frame that constrains its child to a particular aspect ratio
extern type GtkHBox; 			//- A horizontal container box
extern type GtkVBox; 			//- A vertical container box
extern type GtkHButtonBox; 		//- A container for arranging buttons horizontally
extern type GtkVButtonBox; 		//- A container for arranging buttons vertically
extern type GtkFixed; 			//- A container which allows you to position widgets at fixed coordinates
extern type GtkHPaned; 			//- A container with two panes arranged horizontally
extern type GtkVPaned; 			//- A container with two panes arranged vertically
extern type GtkLayout; 			//- Infinite scrollable area containing child widgets and/or custom drawing
extern type GtkNotebook; 		//- A tabbed notebook container
extern type GtkTable; 			//- Pack widgets in regular patterns
extern type GtkExpander; 		//- A container which can hide its child
	
	//Ornaments
extern type GtkFrame; 			//- A bin with a decorative frame and optional label
extern type GtkHSeparator; 		//- A horizontal separator
extern type GtkVSeparator; 		//- A vertical separator

	//Scrolling
extern type GtkHScrollbar; 		//- A horizontal scrollbar
extern type GtkVScrollbar; 		//- A vertical scrollbar
extern type GtkScrolledWindow; 	//- Adds scrollbars to its child widget

	//Miscellaneous
extern type GtkAdjustment; 		//- A GtkObject representing an adjustable bounded value
extern type GtkArrow; 			//- Displays an arrow
extern type GtkCalendar; 		//- Displays a calendar and allows the user to select a date
extern type GtkDrawingArea; 	//- A widget for custom user interface elements
extern type GtkEventBox; 		//- A widget used to catch events for widgets which do not have their own
	
	//window
extern type GtkHandleBox; 		//- a widget for detachable window portions
extern type GtkIMContextSimple; //- An input method context supporting table-based input methods
extern type GtkIMMulticontext; 	//- An input method context supporting multiple, loadable input
	
	//methods
extern type GtkSizeGroup; 		//- Grouping widgets so they request the same size
extern type GtkTooltips; 		//- Add tips to your widgets
extern type GtkViewport; 		//- An adapter which makes widgets scrollable
extern type GtkAccessible; 		//- Accessibility support for widgets

	//Abstract Base Classes
extern type GtkBin; 			//- A container with just one child
extern type GtkBox; 			//- Base class for box containers
extern type GtkButtonBox; 		//- Base class for GtkHButtonBox and GtkVButtonBox
extern type GtkContainer; 		//- Base class for widgets which contain other widgets
extern type GtkItem; 			//- Abstract base class for GtkMenuItem, GtkListItem and GtkTreeItem
extern type GtkMisc; 			//- Base class for widgets with alignments and padding
extern type GtkObject; 			//- The base class of the GTK+ type hierarchy
extern type GtkPaned; 			//- Base class for widgets with two adjustable panes
extern type GtkRange; 			//- Base class for widgets which visualize an adjustment
extern type GtkScale; 			//- Base class for GtkHScale and GtkVScale
extern type GtkScrollbar; 		//- Base class for GtkHScrollbar and GtkVScrollbar
extern type GtkSeparator;		//- Base class for GtkHSeparator and GtkVSeparator
extern type GtkWidget; 			//- Base class for all widgets
extern type GtkIMContext; 		//- Base class for input method contexts

	//Cross-process Embedding
extern type GtkPlug; 			//- Toplevel for embedding into other processes
extern type GtkSocket; 			//- Container for widgets from other processes
	
	//Special-purpose features
extern type GtkCurve; 			//- Allows direct editing of a curve
extern type GtkGammaCurve; 		//- a subclass of GtkCurve for editing gamma curves.
extern type GtkRuler; 			//- Base class for horizontal or vertical rulers
extern type GtkHRuler;			//- A horizontal ruler.
extern type GtkVRuler; 			//- A vertical ruler.
	
	//Deprecated
extern type GtkCList; 			//- A multi-columned scrolling list widget
extern type GtkCTree; 			//- A widget displaying a hierarchical tree
extern type GtkCombo; 			//- A text entry field with a dropdown list
extern type GtkItemFactory; 	//- A factory for menus
extern type GtkList; 			//- Widget for packing a list of selectable items
extern type GtkListItem;		//- An item in a GtkList
extern type GtkOldEditable;		//- Base class for text-editing widgets
extern type GtkOptionMenu; 		//- A widget used to choose from a list of valid choices
extern type GtkPixmap; 			//- A widget displaying a graphical image or icon
extern type GtkPreview; 		//- A widget to display RGB or grayscale data
extern type GtkProgress; 		//- Base class for GtkProgressBar
extern type GtkText; 			//- A text widget
extern type GtkTipsQuery; 		//- Displays help about widgets in the user interface
extern type GtkTree; 			//- A tree widget
extern type GtkTreeItem; 		//- The widget used for items in a GtkTree

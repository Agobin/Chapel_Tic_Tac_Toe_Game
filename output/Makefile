CHPL_MAKE_HOME = /home/agobin/Documents/GitHub/chapel-1.12.0

TMPDIRNAME = output
BINNAME = ttt

TMPBINNAME = output/ttt.tmp
COMP_GEN_WARN = 0
COMP_GEN_DEBUG = 1
COMP_GEN_OPT = 0
COMP_GEN_SPECIALIZE = 0
COMP_GEN_FLOAT_OPT = 0
COMP_GEN_USER_CFLAGS = -I/usr/include/gtk-2.0 -I/usr/lib64/gtk-2.0/include -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/libdrm -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16 -pthread
COMP_GEN_LFLAGS = 
TAGS_COMMAND = 
CHPLSRC = \
	output/_main.c \

CHPL_CL_C_SRCS = \
	gtk_gui.c \

CHPL_CL_OBJS = \
	output/gtk_gui.c.o \


LIBS = -lgtk-x11-2.0 -lgdk-x11-2.0 -lpangocairo-1.0 -latk-1.0 -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lpangoft2-1.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lfontconfig -lfreetype


include $(CHPL_MAKE_HOME)/runtime/etc/Makefile.exe

output/gtk_gui.c.o: gtk_gui.c FORCE
	$(CC) -c -o $@ $(GEN_CFLAGS) $(COMP_GEN_CFLAGS) $<



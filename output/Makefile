CHPL_MAKE_HOME = /home/agobin/Documents/chapel-1.13.0

TMPDIRNAME = output


CHPL_MAKE_ALL_VARS = CHPL_ATOMICS=intrinsics CHPL_AUX_FILESYS=none CHPL_COMM=none CHPL_COMM_SUBSTRATE=none CHPL_GASNET_SEGMENT=none CHPL_GMP=gmp CHPL_HOME=/home/agobin/Documents/chapel-1.13.0 CHPL_HOST_COMPILER=gnu CHPL_HOST_PLATFORM=linux64 CHPL_HWLOC=hwloc CHPL_LAUNCHER=none CHPL_LLVM=none CHPL_LOCALE_MODEL=flat CHPL_MAKE=gmake CHPL_MEM=jemalloc CHPL_NETWORK_ATOMICS=none CHPL_REGEXP=re2 CHPL_TARGET_ARCH=native CHPL_TARGET_COMPILER=gnu CHPL_TARGET_PLATFORM=linux64 CHPL_TASKS=qthreads CHPL_TIMERS=generic CHPL_WIDE_POINTERS=struct 
BINNAME = ttt

TMPBINNAME = output/ttt.tmp
COMP_GEN_WARN = 0
COMP_GEN_DEBUG = 1
COMP_GEN_OPT = 0
COMP_GEN_SPECIALIZE = 0
COMP_GEN_FLOAT_OPT = 0
COMP_GEN_USER_CFLAGS = -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib64/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libdrm -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -pthread
COMP_GEN_LFLAGS = 
TAGS_COMMAND = 
CHPLSRC = \
	output/_main.c \

CHPL_CL_C_SRCS = \
	gtk_gui.c \

CHPL_CL_OBJS = \
	output/gtk_gui.c.o \


LIBS = -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0


include $(CHPL_MAKE_HOME)/runtime/etc/Makefile.exe

output/gtk_gui.c.o: gtk_gui.c FORCE
	$(CC) -c -o $@ $(GEN_CFLAGS) $(COMP_GEN_CFLAGS) $<



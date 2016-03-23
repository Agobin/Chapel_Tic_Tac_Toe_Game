/*** Compilation Info ***/


#include <stdio.h>
const char* chpl_compileCommand = "chpl -g --savec output -o ttt ttt.chpl --ccflags -pthread -I/usr/include/gtk-2.0 -I/usr/lib64/gtk-2.0/include -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/libdrm -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16 -lgtk-x11-2.0 -lgdk-x11-2.0 -lpangocairo-1.0 -latk-1.0 -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lpangoft2-1.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lfontconfig -lfreetype ";
const char* chpl_compileVersion = "1.12.0";
const char* CHPL_HOME = "/home/agobin/Documents/GitHub/chapel-1.12.0";
const char* CHPL_HOST_PLATFORM = "linux64";
const char* CHPL_HOST_COMPILER = "gnu";
const char* CHPL_TARGET_PLATFORM = "linux64";
const char* CHPL_TARGET_COMPILER = "gnu";
const char* CHPL_TARGET_ARCH = "native";
const char* CHPL_LOCALE_MODEL = "flat";
const char* CHPL_COMM = "none";
const char* CHPL_COMM_SUBSTRATE = "none";
const char* CHPL_GASNET_SEGMENT = "none";
const char* CHPL_TASKS = "qthreads";
const char* CHPL_THREADS = "none";
const char* CHPL_LAUNCHER = "none";
const char* CHPL_TIMERS = "generic";
const char* CHPL_MEM = "cstdlib";
const char* CHPL_MAKE = "gmake";
const char* CHPL_ATOMICS = "intrinsics";
const char* CHPL_NETWORK_ATOMICS = "none";
const char* CHPL_GMP = "none";
const char* CHPL_HWLOC = "hwloc";
const char* CHPL_REGEXP = "re2";
const char* CHPL_WIDE_POINTERS = "struct";
const char* CHPL_LLVM = "none";
const char* CHPL_AUX_FILESYS = "none";
const int CHPL_STACK_CHECKS = 1;
const int CHPL_CACHE_REMOTE = 0;

void chpl_program_about(void);

void chpl_program_about() {
  printf("%s", "Compilation command: chpl -g --savec output -o ttt ttt.chpl --ccflags -pthread -I/usr/include/gtk-2.0 -I/usr/lib64/gtk-2.0/include -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/libdrm -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libpng16 -lgtk-x11-2.0 -lgdk-x11-2.0 -lpangocairo-1.0 -latk-1.0 -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lpangoft2-1.0 -lpango-1.0 -lgobject-2.0 -lglib-2.0 -lfontconfig -lfreetype \n");
  printf("%s", "Chapel compiler version: 1.12.0\n");
  printf("Chapel environment:\n");
  printf("%s", "  CHPL_HOME: /home/agobin/Documents/GitHub/chapel-1.12.0\n");
  printf("%s", "  CHPL_HOST_PLATFORM: linux64\n");
  printf("%s", "  CHPL_HOST_COMPILER: gnu\n");
  printf("%s", "  CHPL_TARGET_PLATFORM: linux64\n");
  printf("%s", "  CHPL_TARGET_COMPILER: gnu\n");
  printf("%s", "  CHPL_TARGET_ARCH: native\n");
  printf("%s", "  CHPL_LOCALE_MODEL: flat\n");
  printf("%s", "  CHPL_COMM: none\n");
  printf("%s", "  CHPL_COMM_SUBSTRATE: none\n");
  printf("%s", "  CHPL_GASNET_SEGMENT: none\n");
  printf("%s", "  CHPL_TASKS: qthreads\n");
  printf("%s", "  CHPL_THREADS: none\n");
  printf("%s", "  CHPL_LAUNCHER: none\n");
  printf("%s", "  CHPL_TIMERS: generic\n");
  printf("%s", "  CHPL_MEM: cstdlib\n");
  printf("%s", "  CHPL_MAKE: gmake\n");
  printf("%s", "  CHPL_ATOMICS: intrinsics\n");
  printf("%s", "  CHPL_NETWORK_ATOMICS: none\n");
  printf("%s", "  CHPL_GMP: none\n");
  printf("%s", "  CHPL_HWLOC: hwloc\n");
  printf("%s", "  CHPL_REGEXP: re2\n");
  printf("%s", "  CHPL_WIDE_POINTERS: struct\n");
  printf("%s", "  CHPL_LLVM: none\n");
  printf("%s", "  CHPL_AUX_FILESYS: none\n");
}

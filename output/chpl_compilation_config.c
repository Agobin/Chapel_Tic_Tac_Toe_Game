/*** Compilation Info ***/


#include <stdio.h>

#include "chpltypes.h"
const char* chpl_compileCommand = "chpl -g --savec output -o ttt ttt.chpl --ccflags -pthread -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib64/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libdrm -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0 ";
const char* chpl_compileVersion = "1.13.0";
const char* CHPL_HOME = "/home/agobin/Documents/chapel-1.13.0";
const int CHPL_STACK_CHECKS = 1;
const int CHPL_CACHE_REMOTE = 0;
const char* CHPL_ATOMICS = "intrinsics";
const char* CHPL_AUX_FILESYS = "none";
const char* CHPL_COMM = "none";
const char* CHPL_COMM_SUBSTRATE = "none";
const char* CHPL_GASNET_SEGMENT = "none";
const char* CHPL_GMP = "gmp";
const char* CHPL_HOST_COMPILER = "gnu";
const char* CHPL_HOST_PLATFORM = "linux64";
const char* CHPL_HWLOC = "hwloc";
const char* CHPL_LAUNCHER = "none";
const char* CHPL_LLVM = "none";
const char* CHPL_LOCALE_MODEL = "flat";
const char* CHPL_MAKE = "gmake";
const char* CHPL_MEM = "jemalloc";
const char* CHPL_NETWORK_ATOMICS = "none";
const char* CHPL_REGEXP = "re2";
const char* CHPL_TARGET_ARCH = "native";
const char* CHPL_TARGET_COMPILER = "gnu";
const char* CHPL_TARGET_PLATFORM = "linux64";
const char* CHPL_TASKS = "qthreads";
const char* CHPL_TIMERS = "generic";
const char* CHPL_WIDE_POINTERS = "struct";

void chpl_program_about(void);

void chpl_program_about() {
  printf("%s", "Compilation command: chpl -g --savec output -o ttt ttt.chpl --ccflags -pthread -I/usr/include/gtk-3.0 -I/usr/include/at-spi2-atk/2.0 -I/usr/include/at-spi-2.0 -I/usr/include/dbus-1.0 -I/usr/lib64/dbus-1.0/include -I/usr/include/gtk-3.0 -I/usr/include/gio-unix-2.0/ -I/usr/include/cairo -I/usr/include/pango-1.0 -I/usr/include/harfbuzz -I/usr/include/pango-1.0 -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/pixman-1 -I/usr/include/freetype2 -I/usr/include/libpng16 -I/usr/include/freetype2 -I/usr/include/libdrm -I/usr/include/libpng16 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/libpng16 -I/usr/include/glib-2.0 -I/usr/lib64/glib-2.0/include -lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0 \n");
  printf("%s", "Chapel compiler version: 1.13.0\n");
  printf("Chapel environment:\n");
  printf("%s", "  CHPL_HOME: /home/agobin/Documents/chapel-1.13.0\n");
  printf("%s", "  CHPL_ATOMICS: intrinsics\n");
  printf("%s", "  CHPL_AUX_FILESYS: none\n");
  printf("%s", "  CHPL_COMM: none\n");
  printf("%s", "  CHPL_COMM_SUBSTRATE: none\n");
  printf("%s", "  CHPL_GASNET_SEGMENT: none\n");
  printf("%s", "  CHPL_GMP: gmp\n");
  printf("%s", "  CHPL_HOST_COMPILER: gnu\n");
  printf("%s", "  CHPL_HOST_PLATFORM: linux64\n");
  printf("%s", "  CHPL_HWLOC: hwloc\n");
  printf("%s", "  CHPL_LAUNCHER: none\n");
  printf("%s", "  CHPL_LLVM: none\n");
  printf("%s", "  CHPL_LOCALE_MODEL: flat\n");
  printf("%s", "  CHPL_MAKE: gmake\n");
  printf("%s", "  CHPL_MEM: jemalloc\n");
  printf("%s", "  CHPL_NETWORK_ATOMICS: none\n");
  printf("%s", "  CHPL_REGEXP: re2\n");
  printf("%s", "  CHPL_TARGET_ARCH: native\n");
  printf("%s", "  CHPL_TARGET_COMPILER: gnu\n");
  printf("%s", "  CHPL_TARGET_PLATFORM: linux64\n");
  printf("%s", "  CHPL_TASKS: qthreads\n");
  printf("%s", "  CHPL_TIMERS: generic\n");
  printf("%s", "  CHPL_WIDE_POINTERS: struct\n");
}
/*** Filename Lookup Table ***/

c_string chpl_filenameTable[] = {
  "",
  "<internal>",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelStandard.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/PrintModuleInitOrder.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/startInitCommDiags.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/CPtr.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/CString.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelEnv.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/MemConsistency.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/Atomics.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/NetworkAtomics.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/NetworkAtomicTypes.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/AtomicsCommon.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelIteratorSupport.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelThreads.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelThreadsInternal.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelTasksInternal.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelTuple.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelReduce.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelSyncvar.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/LocalesArray.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelIO.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/LocaleTree.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultAssociative.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultSparse.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultOpaque.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelTaskID.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/tasktable/off/ChapelTaskTable.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelUtil.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDynDispHack.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/stopInitCommDiags.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/StringCasts.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelNumLocales.chpl",
  "ttt.chpl",
  "./gtk.chpl",
  "./gtk_types.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/Assert.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/Types.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/Math.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/CommDiagnostics.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/gen/linux64-gnu/SysCTypes.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/Sys.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/SysBasic.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/packages/Sort.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/packages/Search.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/Error.chpl",
  "/home/agobin/Documents/chapel-1.13.0/modules/standard/Regexp.chpl"
};
const int32_t chpl_filenameTableSize = 59;

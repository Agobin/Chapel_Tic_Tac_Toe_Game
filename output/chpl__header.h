
#define CHPL_GEN_CODE

#include "sys_basic.h"
#include "gtk/gtk.h"
#include "gtk_gui.h"
#include "stdchpl.h"
#include "chpl_compilation_config.c"
/*** Class Type Identification Numbers ***/

const chpl__class_id chpl__cid_c_ptr_GtkButton = 0;
const chpl__class_id chpl__cid_c_ptr_GtkContainer = 1;
const chpl__class_id chpl__cid_c_ptr_GtkGrid = 2;
const chpl__class_id chpl__cid_c_ptr_GtkLabel = 3;
const chpl__class_id chpl__cid_c_ptr_GtkWidget = 4;
const chpl__class_id chpl__cid_c_ptr_GtkWindow = 5;
const chpl__class_id chpl__cid_c_ptr_int64_t = 6;
const chpl__class_id chpl__cid_c_ptr_uint8_t = 7;
const chpl__class_id chpl__cid__class_localscoforall_fn = 8;
const chpl__class_id chpl__cid__ddata_c_ptr_GtkWidget = 9;
const chpl__class_id chpl__cid__ddata_int64_t = 10;
const chpl__class_id chpl__cid__ddata_locale = 11;
const chpl__class_id chpl__cid__ddata_localesSignal = 12;
const chpl__class_id chpl__cid__ddata_string = 13;
const chpl__class_id chpl__cid_chpl___EndCount_atomic_int64_int64_t = 14;
const chpl__class_id chpl__cid_BaseDist = 15;
const chpl__class_id chpl__cid_BaseDom = 16;
const chpl__class_id chpl__cid_BaseRectangularDom = 17;
const chpl__class_id chpl__cid_BaseArr = 18;
const chpl__class_id chpl__cid_locale = 19;
const chpl__class_id chpl__cid_AbstractLocaleModel = 20;
const chpl__class_id chpl__cid_AbstractRootLocale = 21;
const chpl__class_id chpl__cid_localesSignal = 22;
const chpl__class_id chpl__cid_DefaultDist = 23;
const chpl__class_id chpl__cid_DefaultRectangularDom_1_int64_t_F = 24;
const chpl__class_id chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F = 25;
const chpl__class_id chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F = 26;
const chpl__class_id chpl__cid_DefaultRectangularArr_locale_1_int64_t_F = 27;
const chpl__class_id chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F = 28;
const chpl__class_id chpl__cid_DefaultRectangularArr_string_1_int64_t_F = 29;
const chpl__class_id chpl__cid_LocaleModel = 30;
const chpl__class_id chpl__cid_RootLocale = 31;
const chpl__class_id chpl__cid__class_localscoforall_fn2 = 32;
const chpl__class_id chpl__cid_object = 33;
const chpl__class_id chpl__cid_listNode_BaseArr_chpl = 34;
const chpl__class_id chpl__cid_listNode_BaseDom_chpl = 35;
/*** Class Prototypes ***/

typedef struct chpl__class_localscoforall_fn_s* _class_localscoforall_fn;
typedef struct chpl_chpl___EndCount_atomic_int64_int64_t_s* chpl___EndCount_atomic_int64_int64_t;
typedef struct chpl_BaseDist_s* BaseDist;
typedef struct chpl_BaseDom_s* BaseDom;
typedef struct chpl_BaseRectangularDom_s* BaseRectangularDom;
typedef struct chpl_BaseArr_s* BaseArr;
typedef struct chpl_locale_s* locale;
typedef struct chpl_AbstractLocaleModel_s* AbstractLocaleModel;
typedef struct chpl_AbstractRootLocale_s* AbstractRootLocale;
typedef struct chpl_localesSignal_s* localesSignal;
typedef struct chpl_DefaultDist_s* DefaultDist;
typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s* DefaultRectangularDom_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F_s* DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_int64_t_1_int64_t_F_s* DefaultRectangularArr_int64_t_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s* DefaultRectangularArr_locale_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s* DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_string_1_int64_t_F_s* DefaultRectangularArr_string_1_int64_t_F;
typedef struct chpl_LocaleModel_s* LocaleModel;
typedef struct chpl_RootLocale_s* RootLocale;
typedef struct chpl__class_localscoforall_fn2_s* _class_localscoforall_fn2;
typedef struct chpl_object_s* object;
typedef struct chpl_listNode_BaseArr_chpl_s* listNode_BaseArr_chpl;
typedef struct chpl_listNode_BaseDom_chpl_s* listNode_BaseDom_chpl;
/*** Enumerated Types ***/

typedef enum {iterKind_leader = UINT32(1), iterKind_follower = UINT32(2), iterKind_standalone = UINT32(3)} iterKind;
typedef enum {BoundedRangeType_bounded = UINT32(1), BoundedRangeType_boundedLow = UINT32(2), BoundedRangeType_boundedHigh = UINT32(3), BoundedRangeType_boundedNone = UINT32(4)} BoundedRangeType;
typedef enum {chpl__hash_status_empty = UINT32(1), chpl__hash_status_full = UINT32(2), chpl__hash_status_deleted = UINT32(3)} chpl__hash_status;
typedef enum {iomode_chpl_r_chpl = INT64(1), iomode_chpl_cw_chpl = INT64(2), iomode_chpl_rw_chpl = INT64(3), iomode_chpl_cwr_chpl = INT64(4)} iomode_chpl;
typedef enum {iokind_chpl_dynamic_chpl = INT64(0), iokind_chpl_native_chpl = INT64(1), iokind_chpl_big_chpl = INT64(2), iokind_chpl_little_chpl = INT64(3)} iokind_chpl;
typedef enum {iostringstyle_chpl_len1b_data_chpl = INT64(-1), iostringstyle_chpl_len2b_data_chpl = INT64(-2), iostringstyle_chpl_len4b_data_chpl = INT64(-4), iostringstyle_chpl_len8b_data_chpl = INT64(-8), iostringstyle_chpl_lenVb_data_chpl = INT64(-10), iostringstyle_chpl_data_toeof_chpl = INT64(-65280), iostringstyle_chpl_data_null_chpl = INT64(-256)} iostringstyle_chpl;
/*** Records, Unions, Data Class, References (Hierarchically) ***/

typedef struct chpl_atomicflag_s {
  atomic_flag _v;
} atomicflag;

typedef struct chpl_atomic_int64_s {
  atomic_int_least64_t _v;
} atomic_int64;

typedef struct chpl_atomic_refcnt_s {
  atomic_int64 _cnt;
} atomic_refcnt;

typedef GtkButton *c_ptr_GtkButton;
typedef GtkContainer *c_ptr_GtkContainer;
typedef GtkGrid *c_ptr_GtkGrid;
typedef GtkLabel *c_ptr_GtkLabel;
typedef GtkWidget *c_ptr_GtkWidget;
typedef GtkWindow *c_ptr_GtkWindow;
typedef int64_t *c_ptr_int64_t;
typedef uint8_t *c_ptr_uint8_t;
typedef c_ptr_GtkWidget *_ddata_c_ptr_GtkWidget;
typedef int64_t *_ddata_int64_t;
typedef locale *_ddata_locale;
typedef localesSignal *_ddata_localesSignal;
typedef struct chpl_string_s {
  int64_t len;
  int64_t _size;
  c_ptr_uint8_t buff;
  chpl_bool owned;
  int32_t locale_id;
} string;

typedef string *_ddata_string;
typedef AbstractLocaleModel *_ref_AbstractLocaleModel;
typedef AbstractRootLocale *_ref_AbstractRootLocale;
typedef BaseArr *_ref_BaseArr;
typedef BaseDist *_ref_BaseDist;
typedef BaseDom *_ref_BaseDom;
typedef BaseRectangularDom *_ref_BaseRectangularDom;
typedef DefaultDist *_ref_DefaultDist;
typedef DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F *_ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F;
typedef DefaultRectangularArr_int64_t_1_int64_t_F *_ref_DefaultRectangularArr_int64_t_1_int64_t_F;
typedef DefaultRectangularArr_locale_1_int64_t_F *_ref_DefaultRectangularArr_locale_1_int64_t_F;
typedef DefaultRectangularArr_localesSignal_1_int64_t_F *_ref_DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef DefaultRectangularArr_string_1_int64_t_F *_ref_DefaultRectangularArr_string_1_int64_t_F;
typedef DefaultRectangularDom_1_int64_t_F *_ref_DefaultRectangularDom_1_int64_t_F;
typedef LocaleModel *_ref_LocaleModel;
typedef RootLocale *_ref_RootLocale;
typedef chpl___EndCount_atomic_int64_int64_t *_ref__EndCount_atomic_int64_int64_t;
typedef struct chpl_chpl___RuntimeTypeInfo_s {
  DefaultDist d;
} chpl___RuntimeTypeInfo;

typedef chpl___RuntimeTypeInfo *_ref__RuntimeTypeInfo;
typedef struct chpl_chpl___RuntimeTypeInfo2_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo2;

typedef chpl___RuntimeTypeInfo2 *_ref__RuntimeTypeInfo2;
typedef struct chpl_chpl___RuntimeTypeInfo3_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo3;

typedef chpl___RuntimeTypeInfo3 *_ref__RuntimeTypeInfo3;
typedef struct chpl_chpl___RuntimeTypeInfo4_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo4;

typedef chpl___RuntimeTypeInfo4 *_ref__RuntimeTypeInfo4;
typedef struct chpl_chpl___RuntimeTypeInfo5_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo5;

typedef chpl___RuntimeTypeInfo5 *_ref__RuntimeTypeInfo5;
typedef struct chpl_chpl___RuntimeTypeInfo6_s {
  DefaultRectangularDom_1_int64_t_F dom;
} chpl___RuntimeTypeInfo6;

typedef chpl___RuntimeTypeInfo6 *_ref__RuntimeTypeInfo6;
typedef _ddata_c_ptr_GtkWidget *_ref__ddata_c_ptr_GtkWidget;
typedef _ddata_int64_t *_ref__ddata_int64_t;
typedef _ddata_locale *_ref__ddata_locale;
typedef _ddata_localesSignal *_ref__ddata_localesSignal;
typedef _ddata_string *_ref__ddata_string;
typedef _nilType *_ref__nilType;
typedef int64_t _tuple_1_star_int64_t[1];

typedef _tuple_1_star_int64_t *_ref__tuple_1_star_int64_t;
typedef struct chpl_range_int64_t_bounded_F_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
  chpl_bool _aligned;
} range_int64_t_bounded_F;

typedef range_int64_t_bounded_F _tuple_1_star_range_int64_t_bounded_F[1];

typedef _tuple_1_star_range_int64_t_bounded_F *_ref__tuple_1_star_range_int64_t_bounded_F;
typedef int64_t _tuple_2_star_int64_t[2];

typedef _tuple_2_star_int64_t *_ref__tuple_2_star_int64_t;
typedef string _tuple_6_star_string[6];

typedef _tuple_6_star_string *_ref__tuple_6_star_string;
typedef atomic_flag *_ref_atomic_flag;
typedef atomic_int64 *_ref_atomic_int64;
typedef atomic_int_least64_t *_ref_atomic_int_least64_t;
typedef atomic_refcnt *_ref_atomic_refcnt;
typedef atomicflag *_ref_atomicflag;
typedef c_ptr_GtkButton *_ref_c_ptr_GtkButton;
typedef c_ptr_GtkContainer *_ref_c_ptr_GtkContainer;
typedef c_ptr_GtkGrid *_ref_c_ptr_GtkGrid;
typedef c_ptr_GtkLabel *_ref_c_ptr_GtkLabel;
typedef c_ptr_GtkWidget *_ref_c_ptr_GtkWidget;
typedef c_ptr_GtkWindow *_ref_c_ptr_GtkWindow;
typedef c_ptr_int64_t *_ref_c_ptr_int64_t;
typedef c_ptr_uint8_t *_ref_c_ptr_uint8_t;
typedef c_string *_ref_c_string;
typedef c_string_copy *_ref_c_string_copy;
typedef c_void_ptr *_ref_c_void_ptr;
typedef struct chpl_channel_F_dynamic_T_chpl_s {
  locale home_chpl;
  qio_channel_ptr_t _channel_internal_chpl;
} channel_F_dynamic_T_chpl;

typedef channel_F_dynamic_T_chpl *_ref_channel_F_dynamic_T;
typedef struct chpl_channel_T_dynamic_T_chpl_s {
  locale home_chpl;
  qio_channel_ptr_t _channel_internal_chpl;
} channel_T_dynamic_T_chpl;

typedef channel_T_dynamic_T_chpl *_ref_channel_T_dynamic_T;
typedef chpl_bool *_ref_chpl_bool;
typedef chpl_localeID_t *_ref_chpl_localeID_t;
typedef struct chpl_chpl_localeTreeRecord_s {
  locale left;
  locale right;
} chpl_localeTreeRecord;

typedef chpl_localeTreeRecord *_ref_chpl_localeTreeRecord;
typedef chpl_main_argument *_ref_chpl_main_argument;
typedef struct chpl_file_chpl_s {
  locale home_chpl;
  qio_file_ptr_t _file_internal_chpl;
} file_chpl;

typedef file_chpl *_ref_file;
typedef int32_t *_ref_int32_t;
typedef int64_t *_ref_int64_t;
typedef iostyle *_ref_iostyle;
typedef listNode_BaseArr_chpl *_ref_listNode_BaseArr;
typedef listNode_BaseDom_chpl *_ref_listNode_BaseDom;
typedef struct chpl_list_BaseArr_chpl_s {
  listNode_BaseArr_chpl first_chpl;
  listNode_BaseArr_chpl last_chpl;
  int64_t length_chpl;
} list_BaseArr_chpl;

typedef list_BaseArr_chpl *_ref_list_BaseArr;
typedef struct chpl_list_BaseDom_chpl_s {
  listNode_BaseDom_chpl first_chpl;
  listNode_BaseDom_chpl last_chpl;
  int64_t length_chpl;
} list_BaseDom_chpl;

typedef list_BaseDom_chpl *_ref_list_BaseDom;
typedef locale *_ref_locale;
typedef struct chpl_localesBarrier_s {
  uint8_t dummyFieldToAvoidWarning;
} localesBarrier;

typedef localesBarrier *_ref_localesBarrier;
typedef localesSignal *_ref_localesSignal;
typedef object *_ref_object;
typedef qio_channel_ptr_t *_ref_qio_channel_ptr_t;
typedef qio_file_ptr_t *_ref_qio_file_ptr_t;
typedef struct chpl_range_int64_t_boundedLow_F_s {
  int64_t _low;
  int64_t _high;
  int64_t _stride;
  int64_t _alignment;
  chpl_bool _aligned;
} range_int64_t_boundedLow_F;

typedef range_int64_t_boundedLow_F *_ref_range_int64_t_boundedLow_F;
typedef range_int64_t_bounded_F *_ref_range_int64_t_bounded_F;
typedef string *_ref_string;
typedef syserr *_ref_syserr;
typedef uint64_t *_ref_uint64_t;
typedef uint8_t *_ref_uint8_t;
/*** Classes ***/

typedef struct chpl__class_localscoforall_fn_s {
  _ddata_int64_t _0_x1_tet;
  chpl___EndCount_atomic_int64_int64_t _1_rvfDerefTmp;
  int64_t _2_len;
  int64_t _3_numChunks;
  int64_t _4__yieldedIndex;
  _ref_range_int64_t_bounded_F _5_this;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn_object;

typedef struct chpl__class_localscoforall_fn2_s {
  localesBarrier _0_b;
  DefaultRectangularArr_localesSignal_1_int64_t_F _1_flags;
  int64_t _2__yieldedIndex;
  chpl___EndCount_atomic_int64_int64_t _3_rvfDerefTmp;
  RootLocale _4_this;
  int64_t _ln;
  int32_t _fn;
} chpl__class_localscoforall_fn2_object;

typedef struct chpl_object_s {
  chpl__class_id chpl__cid;
} chpl_object_object;

typedef struct chpl_chpl___EndCount_atomic_int64_int64_t_s /* : object */ {
  chpl_object_object super;
  atomic_int64 i;
  int64_t taskCnt;
  c_void_ptr taskList;
} chpl_chpl___EndCount_atomic_int64_int64_t_object;

typedef struct chpl_BaseDist_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _distCnt;
  list_BaseDom_chpl _doms;
  atomicflag _domsLock;
} chpl_BaseDist_object;

typedef struct chpl_BaseDom_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _domCnt;
  list_BaseArr_chpl _arrs;
  atomicflag _arrsLock;
} chpl_BaseDom_object;

typedef struct chpl_BaseArr_s /* : object */ {
  chpl_object_object super;
  atomic_refcnt _arrCnt;
  BaseArr _arrAlias;
} chpl_BaseArr_object;

typedef struct chpl_locale_s /* : object */ {
  chpl_object_object super;
  locale parent;
  int64_t nPUsLogAcc;
  int64_t nPUsLogAll;
  int64_t nPUsPhysAcc;
  int64_t nPUsPhysAll;
  int64_t maxTaskPar;
  uint64_t callStackSize;
  atomic_int64 runningTaskCounter;
} chpl_locale_object;

typedef struct chpl_localesSignal_s /* : object */ {
  chpl_object_object super;
  atomicflag s;
} chpl_localesSignal_object;

typedef struct chpl_listNode_BaseArr_chpl_s /* : object */ {
  chpl_object_object super_chpl;
  BaseArr data_chpl;
  listNode_BaseArr_chpl next_chpl;
} chpl_listNode_BaseArr_chpl_object;

typedef struct chpl_listNode_BaseDom_chpl_s /* : object */ {
  chpl_object_object super_chpl;
  BaseDom data_chpl;
  listNode_BaseDom_chpl next_chpl;
} chpl_listNode_BaseDom_chpl_object;

typedef struct chpl_BaseRectangularDom_s /* : BaseDom */ {
  chpl_BaseDom_object super;
} chpl_BaseRectangularDom_object;

typedef struct chpl_AbstractLocaleModel_s /* : locale */ {
  chpl_locale_object super;
} chpl_AbstractLocaleModel_object;

typedef struct chpl_AbstractRootLocale_s /* : locale */ {
  chpl_locale_object super;
} chpl_AbstractRootLocale_object;

typedef struct chpl_DefaultDist_s /* : BaseDist */ {
  chpl_BaseDist_object super;
} chpl_DefaultDist_object;

typedef struct chpl_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_c_ptr_GtkWidget data;
  _ddata_c_ptr_GtkWidget shiftedData;
  chpl_bool noinit_data;
  range_int64_t_bounded_F dataAllocRange;
} chpl_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_int64_t_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_int64_t data;
  _ddata_int64_t shiftedData;
  chpl_bool noinit_data;
  range_int64_t_bounded_F dataAllocRange;
} chpl_DefaultRectangularArr_int64_t_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_locale data;
  _ddata_locale shiftedData;
  chpl_bool noinit_data;
  range_int64_t_bounded_F dataAllocRange;
} chpl_DefaultRectangularArr_locale_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_localesSignal data;
  _ddata_localesSignal shiftedData;
  chpl_bool noinit_data;
  range_int64_t_bounded_F dataAllocRange;
} chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_string_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_string data;
  _ddata_string shiftedData;
  chpl_bool noinit_data;
  range_int64_t_bounded_F dataAllocRange;
} chpl_DefaultRectangularArr_string_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s /* : BaseRectangularDom */ {
  chpl_BaseRectangularDom_object super;
  DefaultDist dist;
  _tuple_1_star_range_int64_t_bounded_F ranges;
} chpl_DefaultRectangularDom_1_int64_t_F_object;

typedef struct chpl_LocaleModel_s /* : AbstractLocaleModel */ {
  chpl_AbstractLocaleModel_object super;
  int64_t _node_id;
  string local_name;
} chpl_LocaleModel_object;

typedef struct chpl_RootLocale_s /* : AbstractRootLocale */ {
  chpl_AbstractRootLocale_object super;
  DefaultRectangularDom_1_int64_t_F myLocaleSpace;
  DefaultRectangularArr_locale_1_int64_t_F myLocales;
} chpl_RootLocale_object;

/*** Function Prototypes ***/

static void chpl__init_Atomics(int64_t _ln, int32_t _fn);
static void atomic_fence(memory_order order, int64_t _ln, int32_t _fn);
static atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme, int64_t _ln, int32_t _fn);
static atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme, int64_t _ln, int32_t _fn);
static void chpl__init_AtomicsCommon(int64_t _ln, int32_t _fn);
static void _construct_atomic_refcnt(atomic_int64* const _cnt, atomic_refcnt* const meme, _ref_atomic_refcnt _retArg, int64_t _ln, int32_t _fn);
static void chpl__init_BaseStringType(int64_t _ln, int32_t _fn);
static void chpl__init_CPtr(int64_t _ln, int32_t _fn);
static void chpl__init_CString(int64_t _ln, int32_t _fn);
static void chpl__init_ChapelArray(int64_t _ln, int32_t _fn);
static void _newArray(DefaultRectangularArr_int64_t_1_int64_t_F value, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void _newArray2(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F value, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void _newArray3(DefaultRectangularArr_string_1_int64_t_F value, _ref_DefaultRectangularArr_string_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void _newArray4(DefaultRectangularArr_localesSignal_1_int64_t_F value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void _newArray5(DefaultRectangularArr_locale_1_int64_t_F value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void _getDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void _newDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, int32_t _fn);
static void _getDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, int32_t _fn);
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(DefaultDist d, int64_t _ln, int32_t _fn);
static void chpl__convertRuntimeTypeToValue(DefaultDist d, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn);
static chpl___RuntimeTypeInfo4 chpl__buildArrayRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn);
static chpl___RuntimeTypeInfo5 chpl__buildArrayRuntimeType2(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn);
static chpl___RuntimeTypeInfo2 chpl__buildArrayRuntimeType3(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn);
static chpl___RuntimeTypeInfo3 chpl__buildArrayRuntimeType4(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn);
static chpl___RuntimeTypeInfo6 chpl__buildArrayRuntimeType5(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn);
static void chpl__convertRuntimeTypeToValue2(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void chpl__convertRuntimeTypeToValue3(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void chpl__convertRuntimeTypeToValue4(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_string_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void chpl__convertRuntimeTypeToValue5(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void chpl__convertRuntimeTypeToValue6(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void chpl_incRefCountsForDomainsInArrayEltTypes(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes2(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes3(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes4(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes5(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes2(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes3(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes4(void);
static void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void chpl__ensureDomainExpr(DefaultRectangularDom_1_int64_t_F x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void chpl__ensureDomainExpr2(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, int32_t _fn);
static DefaultDist _construct__distribution(DefaultDist _value, DefaultDist meme, int64_t _ln, int32_t _fn);
static DefaultDist _distribution(DefaultDist _value, int64_t _ln, int32_t _fn);
static void chpl___TILDE__distribution(DefaultDist this5, int64_t _ln, int32_t _fn);
static void clone2(DefaultDist this5, _ref_DefaultDist _retArg, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F newRectangularDom(DefaultDist this5, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F _construct__domain(DefaultRectangularDom_1_int64_t_F _value, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static void chpl___TILDE__domain(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void dist(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultDist _retArg, int64_t _ln, int32_t _fn);
static void this2(DefaultRectangularDom_1_int64_t_F this5, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void buildArray(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void buildArray2(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void buildArray3(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_string_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void buildArray4(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void buildArray5(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void help(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x, int64_t _ln, int32_t _fn);
static void help2(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, int32_t _fn);
static void help3(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_string_1_int64_t_F x, int64_t _ln, int32_t _fn);
static void help4(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, int32_t _fn);
static void help5(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, int32_t _fn);
static int64_t numIndices(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void setIndices(DefaultRectangularDom_1_int64_t_F this5, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, int32_t _fn);
static void getIndices(DefaultRectangularDom_1_int64_t_F this5, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_int64_t_1_int64_t_F _construct__array(DefaultRectangularArr_int64_t_1_int64_t_F _value, DefaultRectangularArr_int64_t_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _construct__array2(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _value, DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_string_1_int64_t_F _construct__array3(DefaultRectangularArr_string_1_int64_t_F _value, DefaultRectangularArr_string_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_locale_1_int64_t_F _construct__array4(DefaultRectangularArr_locale_1_int64_t_F _value, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array5(DefaultRectangularArr_localesSignal_1_int64_t_F _value, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static void initialize(DefaultRectangularArr_locale_1_int64_t_F this5);
static void initialize2(DefaultRectangularArr_int64_t_1_int64_t_F this5);
static void initialize3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5);
static void initialize4(DefaultRectangularArr_localesSignal_1_int64_t_F this5);
static void initialize5(DefaultRectangularArr_string_1_int64_t_F this5);
static void chpl___TILDE__array(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void chpl___TILDE__array2(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void chpl___TILDE__array3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void chpl___TILDE__array4(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void _dom(DefaultRectangularArr_locale_1_int64_t_F this5, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static int64_t numElements(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static int64_t size(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void newAlias(DefaultRectangularArr_locale_1_int64_t_F this5, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static void chpl___ASSIGN_(DefaultRectangularDom_1_int64_t_F a, DefaultRectangularDom_1_int64_t_F b, int64_t _ln, int32_t _fn);
static DefaultDist chpl__initCopy(DefaultDist a, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F chpl__initCopy2(DefaultRectangularDom_1_int64_t_F a, int64_t _ln, int32_t _fn);
static void chpl__init_ChapelBase(int64_t _ln, int32_t _fn);
static void compilerAssert(void);
static void init_elts(_ddata_int64_t x, int64_t s, int64_t _ln, int32_t _fn);
static void init_elts2(_ddata_locale x, int64_t s, int64_t _ln, int32_t _fn);
static void init_elts3(_ddata_string x, int64_t s, int64_t _ln, int32_t _fn);
static void init_elts4(_ddata_c_ptr_GtkWidget x, int64_t s, int64_t _ln, int32_t _fn);
static void init_elts5(_ddata_localesSignal x, int64_t s, int64_t _ln, int32_t _fn);
static void coforall_fn(_ddata_int64_t x1_tet, chpl___EndCount_atomic_int64_int64_t _coforallCount, int64_t len, int64_t numChunks, int64_t chunk, _ref_range_int64_t_bounded_F this5, int64_t _ln, int32_t _fn);
static void wrapcoforall_fn(_class_localscoforall_fn dummy_c);
static chpl___EndCount_atomic_int64_int64_t _construct__EndCount(atomic_int64* const i, int64_t taskCnt, c_void_ptr taskList, chpl___EndCount_atomic_int64_int64_t meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy__EndCount(chpl___EndCount_atomic_int64_int64_t this5, int64_t _ln, int32_t _fn);
static void _upEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, int32_t _fn);
static void _downEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, int32_t _fn);
static void _waitEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, int32_t _fn);
static void _waitEndCount2(chpl___EndCount_atomic_int64_int64_t _endCount, int64_t _ln, int32_t _fn);
static chpl_bool _command_line_cast(c_string x, int64_t _ln, int32_t _fn);
static void _command_line_cast2(c_string x, _ref_string _retArg, int64_t _ln, int32_t _fn);
static void _command_line_cast3(c_string x, _ref_string _retArg, int64_t _ln, int32_t _fn);
static void _command_line_cast4(c_string x, _ref_string _retArg, int64_t _ln, int32_t _fn);
static uint64_t _command_line_cast5(c_string x, int64_t _ln, int32_t _fn);
static uint64_t _command_line_cast6(c_string x, int64_t _ln, int32_t _fn);
static chpl_bool _command_line_cast7(c_string x, int64_t _ln, int32_t _fn);
static chpl_bool _command_line_cast8(c_string x, int64_t _ln, int32_t _fn);
static chpl_bool _command_line_cast9(c_string x, int64_t _ln, int32_t _fn);
static chpl_bool _command_line_cast10(c_string x, int64_t _ln, int32_t _fn);
static chpl_bool _command_line_cast11(c_string x, int64_t _ln, int32_t _fn);
static int64_t _command_line_cast12(c_string x, int64_t _ln, int32_t _fn);
static int64_t _command_line_cast13(c_string x, int64_t _ln, int32_t _fn);
static int64_t _command_line_cast14(c_string x, int64_t _ln, int32_t _fn);
static DefaultDist chpl__autoCopy(DefaultDist x, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy3(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy4(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_int64_t_1_int64_t_F chpl__autoCopy5(DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_string_1_int64_t_F chpl__autoCopy6(DefaultRectangularArr_string_1_int64_t_F x, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F chpl__autoCopy7(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x, int64_t _ln, int32_t _fn);
static void chpl__autoDestroy(DefaultDist x, int64_t _ln, int32_t _fn);
static void chpl__autoDestroy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, int32_t _fn);
static void chpl__autoDestroy3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x, int64_t _ln, int32_t _fn);
static void chpl__autoDestroy4(DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, int32_t _fn);
static void chpl__autoDestroy5(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, int32_t _fn);
static void chpl__autoDestroy6(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, int32_t _fn);
static void chpl__init_ChapelDistribution(int64_t _ln, int32_t _fn);
static BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, BaseDist meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_BaseDist(BaseDist this5, int64_t _ln, int32_t _fn);
static int64_t destroyDist(BaseDist this5, int64_t _ln, int32_t _fn);
static void dsiDestroyDistClass(BaseDist this5);
static BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseDom meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_BaseDom(BaseDom this5, int64_t _ln, int32_t _fn);
static BaseDist dsiMyDist(BaseDom this5, int64_t _ln, int32_t _fn);
static int64_t destroyDom(BaseDom this5, int64_t _ln, int32_t _fn);
static chpl_bool dsiLinksDistribution(BaseDom this5);
static BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this5, int64_t _ln, int32_t _fn);
static BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_BaseArr(BaseArr this5, int64_t _ln, int32_t _fn);
static BaseDom dsiGetBaseDom(BaseArr this5, int64_t _ln, int32_t _fn);
static int64_t destroyArr(BaseArr this5, int64_t _ln, int32_t _fn);
static void dsiDestroyData(BaseArr this5, int64_t _ln, int32_t _fn);
static void dsiReallocate(BaseArr this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn);
static void dsiPostReallocate(BaseArr this5);
static void chpl__init_ChapelDynDispHack(int64_t _ln, int32_t _fn);
static void chpl__init_ChapelIO(int64_t _ln, int32_t _fn);
static void _stringify_index(_tuple_1_star_int64_t* const tup, _ref_string _retArg, int64_t _ln, int32_t _fn);
static void halt(string* const s, int64_t _ln, int32_t _fn);
static void halt2(c_string s, int64_t _ln, int32_t _fn);
static void halt3(string* const _e0_args, int64_t _e1_args, int64_t _ln, int32_t _fn);
static void chpl__init_ChapelLocale(int64_t _ln, int32_t _fn);
static locale _construct_locale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, locale meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_locale(locale this5, int64_t _ln, int32_t _fn);
static locale locale2(int64_t _ln, int32_t _fn);
static int64_t id(locale this5, int64_t _ln, int32_t _fn);
static int64_t chpl_id(locale this5, int64_t _ln, int32_t _fn);
static locale getChild(locale this5, int64_t idx, int64_t _ln, int32_t _fn);
static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this5, int64_t _ln, int32_t _fn);
static AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, AbstractRootLocale meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this5, int64_t _ln, int32_t _fn);
static locale localeIDtoLocale(AbstractRootLocale this5, chpl_localeID_t* const id2, int64_t _ln, int32_t _fn);
static localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_localesSignal(localesSignal this5, int64_t _ln, int32_t _fn);
static void _construct_localesBarrier(localesBarrier* const meme, _ref_localesBarrier _retArg, int64_t _ln, int32_t _fn);
static void wait5(_ref_localesBarrier this5, int64_t locIdx, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t _ln, int32_t _fn);
static void chpl_init_rootLocale(int64_t _ln, int32_t _fn);
static void chpl_rootLocaleInitPrivate(int64_t locIdx, int64_t _ln, int32_t _fn);
void chpl_getLocaleID(_ref_chpl_localeID_t localeID, int64_t _ln, int32_t _fn);
static locale chpl_localeID_to_locale(chpl_localeID_t* const id2, int64_t _ln, int32_t _fn);
static int64_t runningTasks(locale this5, int64_t _ln, int32_t _fn);
void chpl_taskRunningCntInc(int64_t _ln, int32_t _fn);
void chpl_taskRunningCntDec(int64_t _ln, int32_t _fn);
static void chpl__init_ChapelNumLocales(int64_t _ln, int32_t _fn);
static void chpl__init_ChapelRange(int64_t _ln, int32_t _fn);
static range_int64_t_boundedLow_F _construct_range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme, int64_t _ln, int32_t _fn);
static range_int64_t_bounded_F _construct_range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_F* const meme, int64_t _ln, int32_t _fn);
static range_int64_t_boundedLow_F range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, int32_t _fn);
static range_int64_t_bounded_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, int32_t _fn);
static void chpl_build_bounded_range(int64_t low, int64_t high, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn);
static void chpl_build_low_bounded_range(int64_t low, _ref_range_int64_t_boundedLow_F _retArg, int64_t _ln, int32_t _fn);
static int64_t length(_ref_range_int64_t_bounded_F this5, int64_t _ln, int32_t _fn);
static void this3(_ref_range_int64_t_bounded_F this5, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn);
static void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn);
static void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn);
static chpl_bool chpl_checkIfRangeIterWillOverflow(int64_t low, int64_t high, int64_t stride, int64_t first, int64_t last, chpl_bool shouldHalt, int64_t _ln, int32_t _fn);
static chpl_bool checkIfIterWillOverflow(_ref_range_int64_t_bounded_F this5, chpl_bool shouldHalt, int64_t _ln, int32_t _fn);
static int64_t chpl__add(int64_t a, int64_t b, int64_t _ln, int32_t _fn);
void chpl__init_ChapelStandard(int64_t _ln, int32_t _fn);
static void chpl__init_ChapelStringLiterals(int64_t _ln, int32_t _fn);
void chpl__initStringLiterals(void);
static void chpl__init_ChapelTaskTable(int64_t _ln, int32_t _fn);
void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, int32_t filename, uint64_t tl_info);
void chpldev_taskTable_remove(chpl_taskID_t taskID);
void chpldev_taskTable_set_active(chpl_taskID_t taskID);
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID);
void chpldev_taskTable_get_tl_info(chpl_taskID_t taskID);
void chpldev_taskTable_print(void);
static void chpl__init_ChapelThreads(int64_t _ln, int32_t _fn);
static void chpl__init_ChapelTuple(int64_t _ln, int32_t _fn);
static _ref_range_int64_t_bounded_F this4(_ref__tuple_1_star_range_int64_t_bounded_F this5, int64_t i, int64_t _ln, int32_t _fn);
static void chpl__init_ChapelUtil(int64_t _ln, int32_t _fn);
static DefaultRectangularArr_string_1_int64_t_F chpl_convert_args(chpl_main_argument* const arg, int64_t _ln, int32_t _fn);
static void chpl__init_DefaultAssociative(int64_t _ln, int32_t _fn);
static void chpl__init_DefaultRectangular(int64_t _ln, int32_t _fn);
static DefaultDist _construct_DefaultDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, DefaultDist meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_DefaultDist(DefaultDist this5, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F dsiNewRectangularDom(DefaultDist this5, int64_t _ln, int32_t _fn);
static DefaultDist dsiClone(DefaultDist this5);
static void chpl_defaultDistInitPrivate(int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F _construct_DefaultRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_1_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static chpl_bool dsiLinksDistribution2(DefaultRectangularDom_1_int64_t_F this5);
static DefaultRectangularDom_1_int64_t_F DefaultRectangularDom(DefaultDist dist2, int64_t _ln, int32_t _fn);
static void dsiGetIndices(DefaultRectangularDom_1_int64_t_F this5, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn);
static void dsiSetIndices(DefaultRectangularDom_1_int64_t_F this5, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, int32_t _fn);
static chpl_bool dsiMember(DefaultRectangularDom_1_int64_t_F this5, _tuple_1_star_int64_t* const ind, int64_t _ln, int32_t _fn);
static void dsiDim(DefaultRectangularDom_1_int64_t_F this5, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn);
static int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static int64_t dsiLow(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_string_1_int64_t_F dsiBuildArray(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F dsiBuildArray2(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_locale_1_int64_t_F dsiBuildArray3(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F dsiBuildArray4(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_int64_t_1_int64_t_F dsiBuildArray5(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F dsiBuildRectangularDom(DefaultRectangularDom_1_int64_t_F this5, _tuple_1_star_range_int64_t_bounded_F* const ranges, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _construct_DefaultRectangularArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_c_ptr_GtkWidget data, _ddata_c_ptr_GtkWidget shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_int64_t_1_int64_t_F _construct_DefaultRectangularArr2(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_int64_t data, _ddata_int64_t shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_int64_t_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_string_1_int64_t_F _construct_DefaultRectangularArr3(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_string data, _ddata_string shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_string_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct_DefaultRectangularArr4(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_localesSignal data, _ddata_localesSignal shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_locale_1_int64_t_F _construct_DefaultRectangularArr5(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_locale data, _ddata_locale shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_DefaultRectangularArr3(DefaultRectangularArr_string_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_DefaultRectangularArr4(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_DefaultRectangularArr5(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom2(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom3(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom4(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom5(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom6(DefaultRectangularArr_string_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void dsiDestroyData2(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void dsiDestroyData3(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void dsiDestroyData4(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void dsiDestroyData5(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void dsiDestroyData6(DefaultRectangularArr_string_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void computeFactoredOffs(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void computeFactoredOffs2(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void computeFactoredOffs3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void computeFactoredOffs4(DefaultRectangularArr_string_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void computeFactoredOffs5(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void initialize6(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void initialize7(DefaultRectangularArr_string_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void initialize8(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void initialize9(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void initialize10(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn);
static void dsiReallocate2(DefaultRectangularArr_int64_t_1_int64_t_F this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn);
static void dsiReallocate3(DefaultRectangularArr_localesSignal_1_int64_t_F this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn);
static void dsiReallocate4(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn);
static void dsiReallocate5(DefaultRectangularArr_string_1_int64_t_F this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn);
static void dsiReallocate6(DefaultRectangularArr_locale_1_int64_t_F this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn);
static void chpl__init_LocaleModel(int64_t _ln, int32_t _fn);
static void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, int32_t _fn);
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, int32_t _fn);
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, int32_t _fn);
static LocaleModel _construct_LocaleModel(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, int64_t _node_id, string* const local_name, LocaleModel meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_LocaleModel(LocaleModel this5, int64_t _ln, int32_t _fn);
static LocaleModel LocaleModel2(locale parent_loc, int64_t _ln, int32_t _fn);
static int64_t chpl_id2(LocaleModel this5, int64_t _ln, int32_t _fn);
static locale getChild2(LocaleModel this5, int64_t idx, int64_t _ln, int32_t _fn);
static void init(LocaleModel this5, int64_t _ln, int32_t _fn);
static RootLocale _construct_RootLocale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, DefaultRectangularDom_1_int64_t_F myLocaleSpace, DefaultRectangularArr_locale_1_int64_t_F myLocales, RootLocale meme, int64_t _ln, int32_t _fn);
static void chpl__auto_destroy_RootLocale(RootLocale this5, int64_t _ln, int32_t _fn);
static RootLocale RootLocale2(int64_t _ln, int32_t _fn);
static void init2(RootLocale this5, int64_t _ln, int32_t _fn);
static void coforall_fn2(localesBarrier* const b, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t locIdx, chpl___EndCount_atomic_int64_int64_t _coforallCount, RootLocale this5, int64_t _ln, int32_t _fn);
static void wrapcoforall_fn2(_class_localscoforall_fn2 dummy_c);
static int64_t chpl_id3(RootLocale this5, int64_t _ln, int32_t _fn);
static locale getChild3(RootLocale this5, int64_t idx, int64_t _ln, int32_t _fn);
static void getDefaultLocaleArray(RootLocale this5, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, int32_t _fn);
static DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray2(RootLocale this5, int64_t _ln, int32_t _fn);
static locale localeIDtoLocale2(RootLocale this5, chpl_localeID_t* const id2, int64_t _ln, int32_t _fn);
static c_void_ptr chpl_here_alloc(int64_t size2, int16_t md, int64_t _ln, int32_t _fn);
static c_void_ptr chpl_here_realloc(c_void_ptr ptr, int64_t size2, int16_t md, int64_t _ln, int32_t _fn);
static int64_t chpl_here_good_alloc_size(int64_t min_size, int64_t _ln, int32_t _fn);
static void chpl_here_free(c_void_ptr ptr, int64_t _ln, int32_t _fn);
void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn);
void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn);
void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn);
void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_c_void_ptr tlist, int64_t tlist_node_id, int64_t _ln, int32_t _fn);
void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_c_void_ptr tlist, int64_t tlist_node_id, int64_t _ln, int32_t _fn);
void chpl_taskListExecute(_ref_c_void_ptr task_list, int64_t _ln, int32_t _fn);
static void chpl__init_LocaleTree(int64_t _ln, int32_t _fn);
static void _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme, _ref_chpl_localeTreeRecord _retArg, int64_t _ln, int32_t _fn);
static void chpl_initLocaleTree(int64_t _ln, int32_t _fn);
static void chpl__init_LocalesArray(int64_t _ln, int32_t _fn);
static void chpl__init_MemConsistency(int64_t _ln, int32_t _fn);
static void chpl__init_MemTracking(int64_t _ln, int32_t _fn);
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaksByType, _ref_c_string ret_memLeaksByDesc, _ref_chpl_bool ret_memLeaks, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog);
void chpl__init_PrintModuleInitOrder(int64_t _ln, int32_t _fn);
static void printModuleInit(c_string s1, c_string s2, int64_t len, int64_t _ln, int32_t _fn);
static void initPrint(void);
static void chpl__init_String(int64_t _ln, int32_t _fn);
static void _construct_string(int64_t len, int64_t _size, c_ptr_uint8_t buff, chpl_bool owned, int32_t locale_id, string* const meme, _ref_string _retArg, int64_t _ln, int32_t _fn);
static void string2(string* const s, chpl_bool owned, _ref_string _retArg, int64_t _ln, int32_t _fn);
static void string3(c_string cs, chpl_bool owned, chpl_bool needToCopy, _ref_string _retArg, int64_t _ln, int32_t _fn);
static void string4(c_ptr_uint8_t buff, int64_t length2, int64_t size2, chpl_bool owned, chpl_bool needToCopy, _ref_string _retArg, int64_t _ln, int32_t _fn);
static void chpl___TILDE_string(_ref_string this5, int64_t _ln, int32_t _fn);
static void reinitString(_ref_string this5, c_ptr_uint8_t buf, int64_t s_len, int64_t size2, chpl_bool needToCopy, int64_t _ln, int32_t _fn);
static string chpl__autoCopy8(string* const s, int64_t _ln, int32_t _fn);
static string chpl__initCopy3(string* const s, int64_t _ln, int32_t _fn);
static void chpl___ASSIGN_2(_ref_string lhs, string* const rhs, int64_t _ln, int32_t _fn);
static void chpl___PLUS_(string* const s0, string* const s1, _ref_string _retArg, int64_t _ln, int32_t _fn);
static void chpl___PLUS__ASSIGN_(_ref_string lhs, _ref_string rhs, int64_t _ln, int32_t _fn);
static chpl_bool chpl___EQUALS__(string* const a, string* const b, int64_t _ln, int32_t _fn);
static void _cast(c_string cs, _ref_string _retArg, int64_t _ln, int32_t _fn);
static void chpl__init_StringCasts(int64_t _ln, int32_t _fn);
static chpl_bool _cast2(string* const x, int64_t _ln, int32_t _fn);
static void _cast3(int64_t x, _ref_string _retArg, int64_t _ln, int32_t _fn);
static object _construct_object(object meme);
static void chpl__auto_destroy_object(object this5, int64_t _ln, int32_t _fn);
void chpl__heapAllocateGlobals(void);
void chpl__init_preInit(int64_t _ln, int32_t _fn);
static void chpl__init_Assert(int64_t _ln_chpl, int32_t _fn_chpl);
static void assert_chpl(chpl_bool test_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_CommDiagnostics(int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_DSIUtil(int64_t _ln_chpl, int32_t _fn_chpl);
static void createTuple_chpl(int64_t val_chpl, _ref__tuple_1_star_int64_t _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static int64_t _computeNumChunks_chpl(int64_t maxTasks_chpl, chpl_bool ignoreRunning_chpl, int64_t minSize_chpl, int64_t numElems_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static int64_t _computeNumChunks_chpl2(int64_t numElems_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static uint64_t intCeilXDivByY_chpl(uint64_t x_chpl, uint64_t y_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void _computeBlock_chpl(int64_t numelems_chpl, int64_t numblocks_chpl, int64_t blocknum_chpl, int64_t wayhi_chpl, int64_t waylo_chpl, int64_t lo_chpl, _ref__tuple_2_star_int64_t _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_Error(int64_t _ln_chpl, int32_t _fn_chpl);
static c_string quote_string_chpl(string* const s_chpl, int64_t len_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void ioerror_chpl(syserr error_chpl, string* const msg_chpl, string* const path_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_IO(int64_t _ln_chpl, int32_t _fn_chpl);
static void defaultIOStyle_chpl(_ref_iostyle _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void _construct_file_chpl(locale home_chpl, qio_file_ptr_t _file_internal_chpl, file_chpl* const meme_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void check_chpl(_ref_file this_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl___TILDE_file(_ref_file this_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void _style_chpl(_ref_file this_chpl, _ref_iostyle _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void getPath_chpl(_ref_file this_chpl, _ref_syserr error_chpl, _ref_string _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void tryGetPath_chpl(_ref_file this_chpl, _ref_string _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void openfd_chpl(int32_t fd_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void openfd_chpl2(int32_t fd_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void openfp_chpl(_cfile fp_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void openfp_chpl2(_cfile fp_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void _construct_channel_chpl(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_T_dynamic_T_chpl* const meme_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void _construct_channel_chpl2(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_F_dynamic_T_chpl* const meme_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl___ASSIGN_3(_ref_channel_F_dynamic_T ret_chpl, channel_F_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl___ASSIGN_4(_ref_channel_T_dynamic_T ret_chpl, channel_T_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void channel_chpl(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void channel_chpl2(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl___TILDE_channel(_ref_channel_F_dynamic_T this_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl___TILDE_channel2(_ref_channel_T_dynamic_T this_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void reader_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void reader_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void writer_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void writer_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void stringify_chpl(string* const _e0_args_chpl, int64_t _e1_args_chpl, _ref_string _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_List(int64_t _ln_chpl, int32_t _fn_chpl);
static listNode_BaseArr_chpl _construct_listNode_chpl(BaseArr data_chpl, listNode_BaseArr_chpl next_chpl, listNode_BaseArr_chpl meme_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__auto_destroy_listNode(listNode_BaseArr_chpl this_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__auto_destroy_listNode2(listNode_BaseDom_chpl this_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void _construct_list_chpl(listNode_BaseDom_chpl first_chpl, listNode_BaseDom_chpl last_chpl, int64_t length_chpl, list_BaseDom_chpl* const meme_chpl, _ref_list_BaseDom _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void _construct_list_chpl2(listNode_BaseArr_chpl first_chpl, listNode_BaseArr_chpl last_chpl, int64_t length_chpl, list_BaseArr_chpl* const meme_chpl, _ref_list_BaseArr _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void append_chpl(_ref_list_BaseArr this_chpl, BaseArr e_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void remove_chpl(_ref_list_BaseArr this_chpl, BaseArr x_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void remove_chpl2(_ref_list_BaseDom this_chpl, BaseDom x_chpl, int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_Regexp(int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_Sys(int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_SysBasic(int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_SysCTypes(int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_FunctionSysbols(int64_t _ln_chpl, int32_t _fn_chpl);
static int64_t defend_chpl(DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl2, DefaultRectangularArr_int64_t_1_int64_t_F moves_chpl);
static int64_t attack_chpl(DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl2, DefaultRectangularArr_int64_t_1_int64_t_F moves_chpl);
static int64_t computersMind_chpl(DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl2);
static int64_t analyseBoard_chpl(DefaultRectangularArr_int64_t_1_int64_t_F a_chpl, int64_t key_chpl, int64_t assumeIndex_chpl);
void resetGame(c_ptr_GtkWidget btn, c_void_ptr data);
void record_move(c_ptr_GtkWidget button, c_ptr_int64_t numPtr);
static void chpl__init_gtk(int64_t _ln_chpl, int32_t _fn_chpl);
static void gtk_init_chpl(DefaultRectangularArr_string_1_int64_t_F args_chpl);
static void chpl__init_gtk_types(int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__init_ttt(int64_t _ln_chpl, int32_t _fn_chpl);
static void chpl__autoDestroyGlobals(void);
int64_t chpl_gen_main(chpl_main_argument* const _arg);
static void chpl_user_main(DefaultRectangularArr_string_1_int64_t_F args_chpl);
/*** Function Pointer Table ***/

chpl_fn_p chpl_ftable[] = {
  (chpl_fn_p)wrapcoforall_fn,
  (chpl_fn_p)wrapcoforall_fn2
};
/*** Virtual Method Table ***/

chpl_fn_p chpl_vmtable[] = {
  /* c_ptr_GtkButton */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkContainer */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkGrid */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkLabel */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkWidget */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkWindow */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_int64_t */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_uint8_t */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_c_ptr_GtkWidget */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_int64_t */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_locale */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_localesSignal */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_string */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* chpl___EndCount_atomic_int64_int64_t */
  (chpl_fn_p)chpl__auto_destroy__EndCount,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseDist */
  (chpl_fn_p)chpl__auto_destroy_BaseDist,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseDom */
  (chpl_fn_p)chpl__auto_destroy_BaseDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseRectangularDom */
  (chpl_fn_p)chpl__auto_destroy_BaseRectangularDom,
  (chpl_fn_p)dsiLinksDistribution,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* BaseArr */
  (chpl_fn_p)chpl__auto_destroy_BaseArr,
  (chpl_fn_p)dsiDestroyData,
  (chpl_fn_p)dsiReallocate,
  (chpl_fn_p)dsiGetBaseDom,
  /* locale */
  (chpl_fn_p)chpl__auto_destroy_locale,
  (chpl_fn_p)getChild,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)NULL,
  /* AbstractLocaleModel */
  (chpl_fn_p)chpl__auto_destroy_AbstractLocaleModel,
  (chpl_fn_p)getChild,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)NULL,
  /* AbstractRootLocale */
  (chpl_fn_p)chpl__auto_destroy_AbstractRootLocale,
  (chpl_fn_p)getChild,
  (chpl_fn_p)chpl_id,
  (chpl_fn_p)localeIDtoLocale,
  /* localesSignal */
  (chpl_fn_p)chpl__auto_destroy_localesSignal,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultDist */
  (chpl_fn_p)chpl__auto_destroy_DefaultDist,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularDom_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularDom,
  (chpl_fn_p)dsiLinksDistribution2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr,
  (chpl_fn_p)dsiDestroyData5,
  (chpl_fn_p)dsiReallocate4,
  (chpl_fn_p)dsiGetBaseDom4,
  /* DefaultRectangularArr_int64_t_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr2,
  (chpl_fn_p)dsiDestroyData2,
  (chpl_fn_p)dsiReallocate2,
  (chpl_fn_p)dsiGetBaseDom3,
  /* DefaultRectangularArr_locale_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr4,
  (chpl_fn_p)dsiDestroyData3,
  (chpl_fn_p)dsiReallocate6,
  (chpl_fn_p)dsiGetBaseDom5,
  /* DefaultRectangularArr_localesSignal_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr5,
  (chpl_fn_p)dsiDestroyData4,
  (chpl_fn_p)dsiReallocate3,
  (chpl_fn_p)dsiGetBaseDom2,
  /* DefaultRectangularArr_string_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr3,
  (chpl_fn_p)dsiDestroyData6,
  (chpl_fn_p)dsiReallocate5,
  (chpl_fn_p)dsiGetBaseDom6,
  /* LocaleModel */
  (chpl_fn_p)chpl__auto_destroy_LocaleModel,
  (chpl_fn_p)getChild2,
  (chpl_fn_p)chpl_id2,
  (chpl_fn_p)NULL,
  /* RootLocale */
  (chpl_fn_p)chpl__auto_destroy_RootLocale,
  (chpl_fn_p)getChild3,
  (chpl_fn_p)chpl_id3,
  (chpl_fn_p)localeIDtoLocale2,
  /* _class_localscoforall_fn2 */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* object */
  (chpl_fn_p)chpl__auto_destroy_object,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* listNode_BaseArr_chpl */
  (chpl_fn_p)chpl__auto_destroy_listNode,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* listNode_BaseDom_chpl */
  (chpl_fn_p)chpl__auto_destroy_listNode2,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL
};
/*** Global Variables ***/

static c_ptr_uint8_t bufferType;
static atomic_int64 numPrivateObjects;
static chpl___EndCount_atomic_int64_int64_t _remoteEndCountType;
static chpl_bool chpl__testParOn;
static int32_t chpl_nodeID_t;
static int32_t chpl_sublocID_t;
static locale rootLocale;
static locale origRootLocale;
static locale dummyLocale;
static int64_t numLocales;
static string _str_literal_2592;
static string _str_literal_2603;
static string _str_literal_889;
static string _str_literal_891;
static string _str_literal_1669;
static string _str_literal_32;
static string _str_literal_1671;
static string _str_literal_1664;
static string _str_literal_789;
static string _str_literal_1442;
static string _str_literal_842;
static string _str_literal_2277;
static string _str_literal_1444;
static string _str_literal_846;
static string _str_literal_502;
static string _str_literal_512;
static string _str_literal_1450;
static string _str_literal_533;
static string _str_literal_1456;
static string _str_literal_302;
static string _str_literal_1459;
static string _str_literal_1477;
static string _str_literal_1508;
static string _str_literal_332;
static string _str_literal_974;
static string _str_literal_664;
static string _str_literal_679;
static string _str_literal_369;
static string _str_literal_381;
static string _str_literal_1846;
static string _str_literal_1855;
static string _str_literal_1862;
static string _str_literal_1864;
static string _str_literal_1866;
static string _str_literal_1868;
static string _str_literal_1924;
static string _str_literal_1926;
static string _str_literal_1971;
static string _str_literal_1978;
static string _str_literal_2014;
static string _str_literal_2017;
static string _str_literal_2019;
static string _str_literal_2021;
static string _str_literal_2023;
static string _str_literal_2025;
static int64_t numThreadsPerLocale;
static int64_t chpl_table_index_type;
static int64_t dataParTasksPerLocale;
static chpl_bool dataParIgnoreRunningTasks;
static int64_t dataParMinGranularity;
static DefaultDist defaultDist;
static chpl_bool doneCreatingLocales;
static DefaultRectangularDom_1_int64_t_F chpl_emptyLocaleSpace;
static DefaultRectangularArr_locale_1_int64_t_F chpl_emptyLocales;
static chpl_localeTreeRecord chpl_localeTree;
static DefaultRectangularArr_locale_1_int64_t_F Locales;
static DefaultRectangularDom_1_int64_t_F LocaleSpace;
static chpl_bool memTrack;
static chpl_bool memStats;
static chpl_bool memLeaksByType;
static chpl_bool memLeaks;
static uint64_t memMax;
static uint64_t memThreshold;
static string memLog;
static string memLeaksLog;
static string memLeaksByDesc;
static uint64_t cMemMax;
static uint64_t cMemThreshold;
static chpl_bool printModuleInitOrder;
static int32_t moduleInitLevel;
static chpl_bool chpl__init_ChapelStringLiterals_p;
static chpl_bool chpl__init_DSIUtil_p;
static chpl_bool chpl__init_SysCTypes_p;
static chpl_bool chpl__init_gtk_p;
static chpl_bool chpl__init_gtk_types_p;
static chpl_bool chpl__init_ttt_p;
static chpl_bool chpl__init_AtomicsCommon_p;
static chpl_bool chpl__init_CPtr_p;
static chpl_bool chpl__init_ChapelDistribution_p;
static chpl_bool chpl__init_ChapelDynDispHack_p;
static chpl_bool chpl__init_MemConsistency_p;
static chpl_bool chpl__init_StringCasts_p;
static chpl_bool chpl__init_ChapelNumLocales_p;
static chpl_bool chpl__init_ChapelTaskTable_p;
static chpl_bool chpl__init_DefaultAssociative_p;
static chpl_bool chpl__init_DefaultRectangular_p;
static chpl_bool chpl__init_MemTracking_p;
static chpl_bool chpl__init_ChapelBase_p;
static chpl_bool chpl__init_ChapelStandard_p;
static chpl_bool chpl__init_ChapelUtil_p;
static chpl_bool chpl__init_LocaleTree_p;
static chpl_bool chpl__init_List_p;
static chpl_bool chpl__init_ChapelThreads_p;
static chpl_bool chpl__init_LocaleModel_p;
static chpl_bool chpl__init_PrintModuleInitOrder_p;
static chpl_bool chpl__init_Assert_p;
static chpl_bool chpl__init_BaseStringType_p;
static chpl_bool chpl__init_Error_p;
static chpl_bool chpl__init_ChapelTuple_p;
static chpl_bool chpl__init_LocalesArray_p;
static chpl_bool chpl__init_CString_p;
static chpl_bool chpl__init_SysBasic_p;
static chpl_bool chpl__init_Sys_p;
static chpl_bool chpl__init_String_p;
static chpl_bool chpl__init_ChapelLocale_p;
static chpl_bool chpl__init_Atomics_p;
static chpl_bool chpl__init_ChapelRange_p;
static chpl_bool chpl__init_ChapelArray_p;
static chpl_bool chpl__init_CommDiagnostics_p;
static chpl_bool chpl__init_ChapelIO_p;
static chpl_bool chpl__init_FunctionSysbols_p;
static chpl_bool chpl__init_Regexp_p;
static chpl_bool chpl__init_IO_p;
static int32_t IOHINT_NONE_chpl;
static int32_t IOHINT_RANDOM_chpl;
static int32_t IOHINT_SEQUENTIAL_chpl;
static int32_t IOHINT_CACHED_chpl;
static int32_t IOHINT_PARALLEL_chpl;
static string _r_chpl;
static string _rw_chpl;
static string _cw_chpl;
static string _cwr_chpl;
static _tuple_6_star_string _arg_to_proto_names_chpl;
static channel_F_dynamic_T_chpl stdin_chpl;
static channel_T_dynamic_T_chpl stdout_chpl;
static channel_T_dynamic_T_chpl stderr_chpl;
static DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl;
static c_ptr_GtkWidget output_chpl;
static int64_t playCounter_chpl;
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F button_array_chpl;
static c_ptr_GtkWidget board_chpl;
static chpl_bool gameOver_chpl;
const int chpl_numGlobalsOnHeap = 0;

ptr_wide_ptr_t chpl_globals_registry[1];
const int chpl_heterogeneous = 0;

const char* chpl_mem_descs[] = {
  "this",
  "c_ptr(uint(8))",
  "_EndCount(atomic_int64,int(64))",
  "locale",
  "listNode(BaseArr)",
  "listNode(BaseDom)",
  "DefaultDist",
  "domain(1,int(64),false)",
  "_ic_these__ref_string",
  "_ic_these__ref_list_BaseArr",
  "_ddata(locale)",
  "[domain(1,int(64),false)] locale",
  "_ic_chpl_direct_param_stride_range_iter",
  "_ic_chpl_direct_range_iter",
  "RootLocale",
  "_ic_these__ref_range_int64_t_bounded_F",
  "_ic_these_DefaultRectangularDom_1_int64_t_F",
  "_ic_chpl_initOnLocales_AbstractRootLocale",
  "_ddata(localesSignal)",
  "[domain(1,int(64),false)] localesSignal",
  "_ic_chpl_direct_pos_stride_range_iter",
  "_ic_these_DefaultRectangularArr_localesSignal_1_int64_t_F",
  "localesSignal",
  "LocaleModel",
  "_ddata(int(64))",
  "[domain(1,int(64),false)] int(64)",
  "c_ptr(GtkWidget)",
  "_ddata(c_ptr(GtkWidget))",
  "[domain(1,int(64),false)] c_ptr(GtkWidget)",
  "_ddata(string)",
  "[domain(1,int(64),false)] string",
  "c_ptr(GtkWindow)",
  "c_ptr(int(64))",
  "c_ptr(GtkGrid)",
  "c_ptr(GtkContainer)",
  "c_ptr(GtkButton)",
  "c_ptr(GtkLabel)",
  "bundled args"
};
const int chpl_mem_numDescs = 38;

void* const chpl_private_broadcast_table[] = {
  &chpl_verbose_comm,
  &chpl_comm_diagnostics,
  &chpl_verbose_mem
};
#include "chpl-gen-includes.h"

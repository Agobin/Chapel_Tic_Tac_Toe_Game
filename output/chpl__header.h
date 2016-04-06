
#define CHPL_GEN_CODE

#include "sys_basic.h"
#include "gtk/gtk.h"
#include "gtk_gui.h"
#include "stdchpl.h"
#include "chpl_compilation_config.c"
/*** Class Type Identification Numbers ***/

const chpl__class_id chpl__cid__ddata_c_ptr_GtkWidget = 0;
const chpl__class_id chpl__cid__ddata_chpl_string = 1;
const chpl__class_id chpl__cid__ddata_int64_t = 2;
const chpl__class_id chpl__cid__ddata_locale = 3;
const chpl__class_id chpl__cid__ddata_localesSignal = 4;
const chpl__class_id chpl__cid_chpl___EndCount_atomic_int64_int64_t = 5;
const chpl__class_id chpl__cid__class_localscoforall_fn = 6;
const chpl__class_id chpl__cid_BaseDist = 7;
const chpl__class_id chpl__cid_BaseDom = 8;
const chpl__class_id chpl__cid_BaseRectangularDom = 9;
const chpl__class_id chpl__cid_BaseArr = 10;
const chpl__class_id chpl__cid_Writer = 11;
const chpl__class_id chpl__cid_Reader = 12;
const chpl__class_id chpl__cid_StringWriter = 13;
const chpl__class_id chpl__cid_locale = 14;
const chpl__class_id chpl__cid_AbstractLocaleModel = 15;
const chpl__class_id chpl__cid_AbstractRootLocale = 16;
const chpl__class_id chpl__cid_localesSignal = 17;
const chpl__class_id chpl__cid_DefaultDist = 18;
const chpl__class_id chpl__cid_DefaultRectangularDom_1_int64_t_F = 19;
const chpl__class_id chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F = 20;
const chpl__class_id chpl__cid_DefaultRectangularArr_chpl_string_1_int64_t_F = 21;
const chpl__class_id chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F = 22;
const chpl__class_id chpl__cid_DefaultRectangularArr_locale_1_int64_t_F = 23;
const chpl__class_id chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F = 24;
const chpl__class_id chpl__cid_LocaleModel = 25;
const chpl__class_id chpl__cid_RootLocale = 26;
const chpl__class_id chpl__cid__class_localscoforall_fn2 = 27;
const chpl__class_id chpl__cid_object = 28;
const chpl__class_id chpl__cid_listNode_BaseArr_chpl = 29;
const chpl__class_id chpl__cid_listNode_BaseDom_chpl = 30;
const chpl__class_id chpl__cid_string_refcnt_chpl = 31;
const chpl__class_id chpl__cid_c_ptr_GtkButton_chpl = 32;
const chpl__class_id chpl__cid_c_ptr_GtkContainer_chpl = 33;
const chpl__class_id chpl__cid_c_ptr_GtkLabel_chpl = 34;
const chpl__class_id chpl__cid_c_ptr_GtkTable_chpl = 35;
const chpl__class_id chpl__cid_c_ptr_GtkWidget_chpl = 36;
const chpl__class_id chpl__cid_c_ptr_GtkWindow_chpl = 37;
const chpl__class_id chpl__cid_c_ptr_int64_t_chpl = 38;
/*** Class Prototypes ***/

typedef struct chpl_chpl___EndCount_atomic_int64_int64_t_s* chpl___EndCount_atomic_int64_int64_t;
typedef struct chpl__class_localscoforall_fn_s* _class_localscoforall_fn;
typedef struct chpl_BaseDist_s* BaseDist;
typedef struct chpl_BaseDom_s* BaseDom;
typedef struct chpl_BaseRectangularDom_s* BaseRectangularDom;
typedef struct chpl_BaseArr_s* BaseArr;
typedef struct chpl_Writer_s* Writer;
typedef struct chpl_Reader_s* Reader;
typedef struct chpl_StringWriter_s* StringWriter;
typedef struct chpl_locale_s* locale;
typedef struct chpl_AbstractLocaleModel_s* AbstractLocaleModel;
typedef struct chpl_AbstractRootLocale_s* AbstractRootLocale;
typedef struct chpl_localesSignal_s* localesSignal;
typedef struct chpl_DefaultDist_s* DefaultDist;
typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s* DefaultRectangularDom_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F_s* DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_chpl_string_1_int64_t_F_s* DefaultRectangularArr_chpl_string_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_int64_t_1_int64_t_F_s* DefaultRectangularArr_int64_t_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_locale_1_int64_t_F_s* DefaultRectangularArr_locale_1_int64_t_F;
typedef struct chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_s* DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef struct chpl_LocaleModel_s* LocaleModel;
typedef struct chpl_RootLocale_s* RootLocale;
typedef struct chpl__class_localscoforall_fn2_s* _class_localscoforall_fn2;
typedef struct chpl_object_s* object;
typedef struct chpl_listNode_BaseArr_chpl_s* listNode_BaseArr_chpl;
typedef struct chpl_listNode_BaseDom_chpl_s* listNode_BaseDom_chpl;
typedef struct chpl_string_refcnt_chpl_s* string_refcnt_chpl;
/*** Enumerated Types ***/

typedef enum {iterKind_leader = UINT32(1), iterKind_follower = UINT32(2), iterKind_standalone = UINT32(3)} iterKind;
typedef enum {BoundedRangeType_bounded = UINT32(1), BoundedRangeType_boundedLow = UINT32(2), BoundedRangeType_boundedHigh = UINT32(3), BoundedRangeType_boundedNone = UINT32(4)} BoundedRangeType;
typedef enum {chpl__hash_status_empty = UINT32(1), chpl__hash_status_full = UINT32(2), chpl__hash_status_deleted = UINT32(3)} chpl__hash_status;
typedef enum {iomode_chpl_r_chpl = INT64(1), iomode_chpl_cw_chpl = INT64(2), iomode_chpl_rw_chpl = INT64(3), iomode_chpl_cwr_chpl = INT64(4)} iomode_chpl;
typedef enum {iokind_chpl_dynamic_chpl = INT64(0), iokind_chpl_native_chpl = INT64(1), iokind_chpl_big_chpl = INT64(2), iokind_chpl_little_chpl = INT64(3)} iokind_chpl;
typedef enum {iostringstyle_chpl_len1b_data_chpl = INT64(-1), iostringstyle_chpl_len2b_data_chpl = INT64(-2), iostringstyle_chpl_len4b_data_chpl = INT64(-4), iostringstyle_chpl_len8b_data_chpl = INT64(-8), iostringstyle_chpl_lenVb_data_chpl = INT64(-10), iostringstyle_chpl_data_toeof_chpl = INT64(-65280), iostringstyle_chpl_data_null_chpl = INT64(-256)} iostringstyle_chpl;
typedef enum {relType_chpl_eq_chpl = INT64(1), relType_chpl_neq_chpl = UINT32(2), relType_chpl_lt_chpl = UINT32(3), relType_chpl_lte_chpl = UINT32(4), relType_chpl_gt_chpl = UINT32(5), relType_chpl_gte_chpl = UINT32(6)} relType_chpl;
typedef enum {TimeUnits_chpl_microseconds_chpl = UINT32(1), TimeUnits_chpl_milliseconds_chpl = UINT32(2), TimeUnits_chpl_seconds_chpl = UINT32(3), TimeUnits_chpl_minutes_chpl = UINT32(4), TimeUnits_chpl_hours_chpl = UINT32(5)} TimeUnits_chpl;
typedef enum {Day_chpl_sunday_chpl = INT64(0), Day_chpl_monday_chpl = UINT32(1), Day_chpl_tuesday_chpl = UINT32(2), Day_chpl_wednesday_chpl = UINT32(3), Day_chpl_thursday_chpl = UINT32(4), Day_chpl_friday_chpl = UINT32(5), Day_chpl_saturday_chpl = UINT32(6)} Day_chpl;
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

typedef GtkWidget *c_ptr_GtkWidget_chpl;
typedef c_ptr_GtkWidget_chpl *_ddata_c_ptr_GtkWidget;
typedef chpl_string *_ddata_chpl_string;
typedef int64_t *_ddata_int64_t;
typedef locale *_ddata_locale;
typedef localesSignal *_ddata_localesSignal;
typedef AbstractLocaleModel *_ref_AbstractLocaleModel;
typedef AbstractRootLocale *_ref_AbstractRootLocale;
typedef BaseArr *_ref_BaseArr;
typedef BaseDist *_ref_BaseDist;
typedef BaseDom *_ref_BaseDom;
typedef BaseRectangularDom *_ref_BaseRectangularDom;
typedef DefaultDist *_ref_DefaultDist;
typedef DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F *_ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F;
typedef DefaultRectangularArr_chpl_string_1_int64_t_F *_ref_DefaultRectangularArr_chpl_string_1_int64_t_F;
typedef DefaultRectangularArr_int64_t_1_int64_t_F *_ref_DefaultRectangularArr_int64_t_1_int64_t_F;
typedef DefaultRectangularArr_locale_1_int64_t_F *_ref_DefaultRectangularArr_locale_1_int64_t_F;
typedef DefaultRectangularArr_localesSignal_1_int64_t_F *_ref_DefaultRectangularArr_localesSignal_1_int64_t_F;
typedef DefaultRectangularDom_1_int64_t_F *_ref_DefaultRectangularDom_1_int64_t_F;
typedef LocaleModel *_ref_LocaleModel;
typedef Reader *_ref_Reader;
typedef RootLocale *_ref_RootLocale;
typedef struct chpl_SeedGenerators_chpl_s {
  int dummyFieldToAvoidWarning;
} SeedGenerators_chpl;

typedef SeedGenerators_chpl *_ref_SeedGenerators;
typedef StringWriter *_ref_StringWriter;
typedef Writer *_ref_Writer;
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
typedef _ddata_chpl_string *_ref__ddata_chpl_string;
typedef _ddata_int64_t *_ref__ddata_int64_t;
typedef _ddata_locale *_ref__ddata_locale;
typedef _ddata_localesSignal *_ref__ddata_localesSignal;
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
typedef chpl_string _tuple_6_star_chpl_string[6];

typedef _tuple_6_star_chpl_string *_ref__tuple_6_star_chpl_string;
typedef atomic_flag *_ref_atomic_flag;
typedef atomic_int64 *_ref_atomic_int64;
typedef atomic_int_least64_t *_ref_atomic_int_least64_t;
typedef atomic_refcnt *_ref_atomic_refcnt;
typedef atomicflag *_ref_atomicflag;
typedef GtkButton *c_ptr_GtkButton_chpl;
typedef c_ptr_GtkButton_chpl *_ref_c_ptr_GtkButton;
typedef GtkContainer *c_ptr_GtkContainer_chpl;
typedef c_ptr_GtkContainer_chpl *_ref_c_ptr_GtkContainer;
typedef GtkLabel *c_ptr_GtkLabel_chpl;
typedef c_ptr_GtkLabel_chpl *_ref_c_ptr_GtkLabel;
typedef GtkTable *c_ptr_GtkTable_chpl;
typedef c_ptr_GtkTable_chpl *_ref_c_ptr_GtkTable;
typedef c_ptr_GtkWidget_chpl *_ref_c_ptr_GtkWidget;
typedef GtkWindow *c_ptr_GtkWindow_chpl;
typedef c_ptr_GtkWindow_chpl *_ref_c_ptr_GtkWindow;
typedef int64_t *c_ptr_int64_t_chpl;
typedef c_ptr_int64_t_chpl *_ref_c_ptr_int64_t;
typedef c_string *_ref_c_string;
typedef c_string_copy *_ref_c_string_copy;
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
typedef chpl_string *_ref_chpl_string;
typedef chpl_task_list_p *_ref_chpl_task_list_p;
typedef struct chpl_file_chpl_s {
  locale home_chpl;
  qio_file_ptr_t _file_internal_chpl;
} file_chpl;

typedef file_chpl *_ref_file;
typedef int32_t *_ref_int32_t;
typedef int64_t *_ref_int64_t;
typedef struct chpl_ioLiteral_chpl_s {
  c_string val_chpl;
  chpl_bool ignoreWhiteSpace_chpl;
} ioLiteral_chpl;

typedef ioLiteral_chpl *_ref_ioLiteral;
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
  int dummyFieldToAvoidWarning;
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
typedef struct chpl_string_rec_chpl_s {
  c_string base_chpl;
  int64_t len_chpl;
  locale home_chpl;
  string_refcnt_chpl refCnt_chpl;
  string_refcnt_chpl aliasRefCnt_chpl;
} string_rec_chpl;

typedef string_rec_chpl *_ref_string_rec;
typedef string_refcnt_chpl *_ref_string_refcnt;
typedef syserr *_ref_syserr;
typedef uint64_t *_ref_uint64_t;
/*** Classes ***/

typedef struct chpl__class_localscoforall_fn_s {
  _ddata_int64_t _0_x1_tet;
  int64_t _1__yieldedIndex;
  int64_t _2_numChunks;
  chpl___EndCount_atomic_int64_int64_t _3_rvfDerefTmp;
  int64_t _4_len;
  _ref_range_int64_t_bounded_F _5_this;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn_object;

typedef struct chpl__class_localscoforall_fn2_s {
  localesBarrier _0_b;
  DefaultRectangularArr_localesSignal_1_int64_t_F _1_flags;
  int64_t _2__yieldedIndex;
  chpl___EndCount_atomic_int64_int64_t _3_rvfDerefTmp;
  RootLocale _4_this;
  int64_t _ln;
  c_string _fn;
} chpl__class_localscoforall_fn2_object;

typedef struct chpl_object_s {
  chpl__class_id chpl__cid;
} chpl_object_object;

typedef struct chpl_chpl___EndCount_atomic_int64_int64_t_s /* : object */ {
  chpl_object_object super;
  atomic_int64 i;
  int64_t taskCnt;
  chpl_task_list_p taskList;
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

typedef struct chpl_Writer_s /* : object */ {
  chpl_object_object super;
} chpl_Writer_object;

typedef struct chpl_Reader_s /* : object */ {
  chpl_object_object super;
} chpl_Reader_object;

typedef struct chpl_locale_s /* : object */ {
  chpl_object_object super;
  locale parent;
  int64_t numCores;
  int64_t maxTaskPar;
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

typedef struct chpl_string_refcnt_chpl_s /* : object */ {
  chpl_object_object super_chpl;
  atomic_refcnt val_chpl;
} chpl_string_refcnt_chpl_object;

typedef struct chpl_BaseRectangularDom_s /* : BaseDom */ {
  chpl_BaseDom_object super;
} chpl_BaseRectangularDom_object;

typedef struct chpl_StringWriter_s /* : Writer */ {
  chpl_Writer_object super;
  c_string_copy s;
} chpl_StringWriter_object;

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
} chpl_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularArr_chpl_string_1_int64_t_F_s /* : BaseArr */ {
  chpl_BaseArr_object super;
  DefaultRectangularDom_1_int64_t_F dom;
  _tuple_1_star_int64_t off;
  _tuple_1_star_int64_t blk;
  _tuple_1_star_int64_t str;
  int64_t origin;
  int64_t factoredOffs;
  _ddata_chpl_string data;
  _ddata_chpl_string shiftedData;
  chpl_bool noinit_data;
} chpl_DefaultRectangularArr_chpl_string_1_int64_t_F_object;

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
} chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object;

typedef struct chpl_DefaultRectangularDom_1_int64_t_F_s /* : BaseRectangularDom */ {
  chpl_BaseRectangularDom_object super;
  DefaultDist dist;
  _tuple_1_star_range_int64_t_bounded_F ranges;
} chpl_DefaultRectangularDom_1_int64_t_F_object;

typedef struct chpl_LocaleModel_s /* : AbstractLocaleModel */ {
  chpl_AbstractLocaleModel_object super;
  uint64_t callStackSize;
  int64_t _node_id;
  chpl_string local_name;
} chpl_LocaleModel_object;

typedef struct chpl_RootLocale_s /* : AbstractRootLocale */ {
  chpl_AbstractRootLocale_object super;
  DefaultRectangularDom_1_int64_t_F myLocaleSpace;
  DefaultRectangularArr_locale_1_int64_t_F myLocales;
} chpl_RootLocale_object;

/*** Function Prototypes ***/

static void chpl__init_Atomics(int64_t _ln, c_string _fn);
static void atomic_fence(memory_order order, int64_t _ln, c_string _fn);
static atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme, int64_t _ln, c_string _fn);
static atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme, int64_t _ln, c_string _fn);
static void chpl__init_AtomicsCommon(int64_t _ln, c_string _fn);
static atomic_refcnt _construct_atomic_refcnt(atomic_int64* const _cnt, atomic_refcnt* const meme, int64_t _ln, c_string _fn);
static void chpl__init_CString(int64_t _ln, c_string _fn);
static void chpl__init_ChapelArray(int64_t _ln, c_string _fn);
static void _newArray(DefaultRectangularArr_locale_1_int64_t_F value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newArray2(DefaultRectangularArr_localesSignal_1_int64_t_F value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newArray3(DefaultRectangularArr_int64_t_1_int64_t_F value, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newArray4(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F value, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newArray5(DefaultRectangularArr_chpl_string_1_int64_t_F value, _ref_DefaultRectangularArr_chpl_string_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _getDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void _newDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static void _getDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(DefaultDist d, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue(DefaultDist d, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo2 chpl__buildArrayRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo3 chpl__buildArrayRuntimeType2(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo5 chpl__buildArrayRuntimeType3(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo4 chpl__buildArrayRuntimeType4(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static chpl___RuntimeTypeInfo6 chpl__buildArrayRuntimeType5(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue2(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue3(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_chpl_string_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue4(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue5(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__convertRuntimeTypeToValue6(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl_incRefCountsForDomainsInArrayEltTypes(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes2(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes3(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes4(void);
static void chpl_incRefCountsForDomainsInArrayEltTypes5(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes2(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes3(void);
static void chpl_decRefCountsForDomainsInArrayEltTypes4(void);
static void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__ensureDomainExpr(DefaultRectangularDom_1_int64_t_F x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__ensureDomainExpr2(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static DefaultDist _construct__distribution(DefaultDist _value, DefaultDist meme, int64_t _ln, c_string _fn);
static DefaultDist _distribution(DefaultDist _value, int64_t _ln, c_string _fn);
static void chpl___TILDE__distribution(DefaultDist this6, int64_t _ln, c_string _fn);
static void clone2(DefaultDist this6, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F newRectangularDom(DefaultDist this6, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F _construct__domain(DefaultRectangularDom_1_int64_t_F _value, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn);
static void chpl___TILDE__domain(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void dist(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn);
static void this2(DefaultRectangularDom_1_int64_t_F this6, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_chpl_string_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray2(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray3(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray4(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void buildArray5(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void help(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_chpl_string_1_int64_t_F x, int64_t _ln, c_string _fn);
static void help2(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn);
static void help3(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn);
static void help4(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x, int64_t _ln, c_string _fn);
static void help5(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, c_string _fn);
static int64_t numIndices(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void setIndices(DefaultRectangularDom_1_int64_t_F this6, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn);
static void getIndices(DefaultRectangularDom_1_int64_t_F this6, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpl_string_1_int64_t_F _construct__array(DefaultRectangularArr_chpl_string_1_int64_t_F _value, DefaultRectangularArr_chpl_string_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_locale_1_int64_t_F _construct__array2(DefaultRectangularArr_locale_1_int64_t_F _value, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array3(DefaultRectangularArr_localesSignal_1_int64_t_F _value, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_int64_t_1_int64_t_F _construct__array4(DefaultRectangularArr_int64_t_1_int64_t_F _value, DefaultRectangularArr_int64_t_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _construct__array5(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _value, DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F meme, int64_t _ln, c_string _fn);
static void initialize(DefaultRectangularArr_locale_1_int64_t_F this6);
static void initialize2(DefaultRectangularArr_chpl_string_1_int64_t_F this6);
static void initialize3(DefaultRectangularArr_localesSignal_1_int64_t_F this6);
static void initialize4(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6);
static void initialize5(DefaultRectangularArr_int64_t_1_int64_t_F this6);
static void chpl___TILDE__array(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void chpl___TILDE__array2(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void chpl___TILDE__array3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void chpl___TILDE__array4(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void _dom(DefaultRectangularArr_locale_1_int64_t_F this6, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static int64_t numElements(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn);
static int64_t size(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void newAlias(DefaultRectangularArr_locale_1_int64_t_F this6, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static void chpl___ASSIGN_(DefaultRectangularDom_1_int64_t_F a, DefaultRectangularDom_1_int64_t_F b, int64_t _ln, c_string _fn);
static DefaultDist chpl__initCopy(DefaultDist a, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F chpl__initCopy2(DefaultRectangularDom_1_int64_t_F a, int64_t _ln, c_string _fn);
static void chpl__init_ChapelBase(int64_t _ln, c_string _fn);
static void compilerAssert(void);
static void init_elts(_ddata_localesSignal x, int64_t s, int64_t _ln, c_string _fn);
static void init_elts2(_ddata_chpl_string x, int64_t s, int64_t _ln, c_string _fn);
static void init_elts3(_ddata_locale x, int64_t s, int64_t _ln, c_string _fn);
static void init_elts4(_ddata_c_ptr_GtkWidget x, int64_t s, int64_t _ln, c_string _fn);
static void init_elts5(_ddata_int64_t x, int64_t s, int64_t _ln, c_string _fn);
static void wrapcoforall_fn(_class_localscoforall_fn c);
static chpl___EndCount_atomic_int64_int64_t _construct__EndCount(atomic_int64* const i, int64_t taskCnt, chpl_task_list_p taskList, chpl___EndCount_atomic_int64_int64_t meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy__EndCount(chpl___EndCount_atomic_int64_int64_t this6, int64_t _ln, c_string _fn);
static void _upEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, c_string _fn);
static void _downEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, c_string _fn);
static void _waitEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, c_string _fn);
static void _waitEndCount2(chpl___EndCount_atomic_int64_int64_t _endCount, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast(c_string x, int64_t _ln, c_string _fn);
static int64_t _command_line_cast2(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast3(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast4(c_string x, int64_t _ln, c_string _fn);
static int64_t _command_line_cast5(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast6(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast7(c_string x, int64_t _ln, c_string _fn);
static int64_t _command_line_cast8(c_string x, int64_t _ln, c_string _fn);
static c_string _command_line_cast9(c_string x);
static c_string _command_line_cast10(c_string x);
static c_string _command_line_cast11(c_string x);
static uint64_t _command_line_cast12(c_string x, int64_t _ln, c_string _fn);
static uint64_t _command_line_cast13(c_string x, int64_t _ln, c_string _fn);
static chpl_bool _command_line_cast14(c_string x, int64_t _ln, c_string _fn);
static DefaultDist chpl__autoCopy(DefaultDist x, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy3(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F chpl__autoCopy4(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularArr_int64_t_1_int64_t_F chpl__autoCopy5(DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpl_string_1_int64_t_F chpl__autoCopy6(DefaultRectangularArr_chpl_string_1_int64_t_F x, int64_t _ln, c_string _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy7(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy(DefaultDist x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy3(DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy4(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy5(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn);
static void chpl__autoDestroy6(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x, int64_t _ln, c_string _fn);
static void coforall_fn(_ddata_int64_t x1_tet, int64_t chunk, int64_t numChunks, chpl___EndCount_atomic_int64_int64_t _coforallCount, int64_t len, _ref_range_int64_t_bounded_F this6, int64_t _ln, c_string _fn);
static void chpl__init_ChapelDistribution(int64_t _ln, c_string _fn);
static BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, BaseDist meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_BaseDist(BaseDist this6, int64_t _ln, c_string _fn);
static int64_t destroyDist(BaseDist this6, int64_t _ln, c_string _fn);
static void dsiDestroyDistClass(BaseDist this6);
static BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseDom meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_BaseDom(BaseDom this6, int64_t _ln, c_string _fn);
static BaseDist dsiMyDist(BaseDom this6, int64_t _ln, c_string _fn);
static int64_t destroyDom(BaseDom this6, int64_t _ln, c_string _fn);
static chpl_bool dsiLinksDistribution(BaseDom this6);
static BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this6, int64_t _ln, c_string _fn);
static BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_BaseArr(BaseArr this6, int64_t _ln, c_string _fn);
static BaseDom dsiGetBaseDom(BaseArr this6, int64_t _ln, c_string _fn);
static int64_t destroyArr(BaseArr this6, int64_t _ln, c_string _fn);
static void dsiDestroyData(BaseArr this6, int64_t _ln, c_string _fn);
static void dsiReallocate(BaseArr this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void dsiPostReallocate(BaseArr this6);
static void chpl__init_ChapelDynDispHack(int64_t _ln, c_string _fn);
static void chpl__init_ChapelIO(int64_t _ln, c_string _fn);
static Writer _construct_Writer(Writer meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_Writer(Writer this6, int64_t _ln, c_string _fn);
static chpl_bool binary(Writer this6);
static int64_t styleElement(Writer this6, int64_t element);
static void writePrimitive(Writer this6, ioLiteral_chpl* const x, int64_t _ln, c_string _fn);
static void writePrimitive2(Writer this6, chpl_string x, int64_t _ln, c_string _fn);
static void writePrimitive3(Writer this6, int64_t x, int64_t _ln, c_string _fn);
static void writeIt(Writer this6, chpl_string x, int64_t _ln, c_string _fn);
static void writeIt2(Writer this6, ioLiteral_chpl* const x, int64_t _ln, c_string _fn);
static void writeIt3(Writer this6, int64_t x, int64_t _ln, c_string _fn);
static void writeIt4(Writer this6, _tuple_1_star_int64_t* const x, int64_t _ln, c_string _fn);
static void readwrite(Writer this6, ioLiteral_chpl* const x, int64_t _ln, c_string _fn);
static void readwrite2(Writer this6, int64_t x, int64_t _ln, c_string _fn);
static void write2(Writer this6, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
static void write3(Writer this6, chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_Reader(Reader this6, int64_t _ln, c_string _fn);
static void halt(c_string s, int64_t _ln, c_string _fn);
static void halt2(chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
static void halt3(chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn);
static StringWriter _construct_StringWriter(c_string_copy s, StringWriter meme, int64_t _ln, c_string _fn);
static StringWriter StringWriter2(c_string x, int64_t _ln, c_string _fn);
static void writePrimitive4(StringWriter this6, ioLiteral_chpl* const x, int64_t _ln, c_string _fn);
static void writePrimitive5(StringWriter this6, int64_t x, int64_t _ln, c_string _fn);
static void writePrimitive6(StringWriter this6, chpl_string x, int64_t _ln, c_string _fn);
static void chpl___TILDE_StringWriter(StringWriter this6, int64_t _ln, c_string _fn);
static void write4(_ref_c_string this6, chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn);
static void write5(_ref_c_string this6, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn);
static void chpl__init_ChapelLocale(int64_t _ln, c_string _fn);
static locale _construct_locale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, locale meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_locale(locale this6, int64_t _ln, c_string _fn);
static locale locale2(int64_t _ln, c_string _fn);
static int64_t id(locale this6, int64_t _ln, c_string _fn);
static int64_t chpl_id(locale this6, int64_t _ln, c_string _fn);
static locale getChild(locale this6, int64_t idx, int64_t _ln, c_string _fn);
static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this6, int64_t _ln, c_string _fn);
static AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractRootLocale meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this6, int64_t _ln, c_string _fn);
static locale localeIDtoLocale(AbstractRootLocale this6, chpl_localeID_t* const id2, int64_t _ln, c_string _fn);
static localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_localesSignal(localesSignal this6, int64_t _ln, c_string _fn);
static localesBarrier _construct_localesBarrier(localesBarrier* const meme);
static void wait5(_ref_localesBarrier this6, int64_t locIdx, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t _ln, c_string _fn);
static void chpl_init_rootLocale(int64_t _ln, c_string _fn);
static void chpl_rootLocaleInitPrivate(int64_t locIdx, int64_t _ln, c_string _fn);
void chpl_getLocaleID(_ref_chpl_localeID_t localeID, int64_t _ln, c_string _fn);
static locale chpl_localeID_to_locale(chpl_localeID_t* const id2, int64_t _ln, c_string _fn);
static int64_t runningTasks(locale this6, int64_t _ln, c_string _fn);
void chpl_taskRunningCntInc(int64_t _ln, c_string _fn);
void chpl_taskRunningCntDec(int64_t _ln, c_string _fn);
static void chpl__init_ChapelNumLocales(int64_t _ln, c_string _fn);
static void chpl__init_ChapelRange(int64_t _ln, c_string _fn);
static range_int64_t_bounded_F _construct_range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_F* const meme, int64_t _ln, c_string _fn);
static range_int64_t_boundedLow_F _construct_range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme, int64_t _ln, c_string _fn);
static range_int64_t_bounded_F range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn);
static range_int64_t_boundedLow_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn);
static void chpl_build_bounded_range(int64_t low, int64_t high, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void chpl_build_partially_bounded_range(int64_t bound, _ref_range_int64_t_boundedLow_F _retArg, int64_t _ln, c_string _fn);
static int64_t length(_ref_range_int64_t_bounded_F this6, int64_t _ln, c_string _fn);
static void this3(_ref_range_int64_t_bounded_F this6, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static chpl_bool chpl_checkIfRangeIterWillOverflow(int64_t low, int64_t high, int64_t stride, int64_t first, int64_t last, chpl_bool shouldHalt, int64_t _ln, c_string _fn);
static chpl_bool checkIfIterWillOverflow(_ref_range_int64_t_bounded_F this6, chpl_bool shouldHalt, int64_t _ln, c_string _fn);
static int64_t chpl__add(int64_t a, int64_t b, int64_t _ln, c_string _fn);
void chpl__init_ChapelStandard(int64_t _ln, c_string _fn);
static void chpl__init_ChapelTaskTable(int64_t _ln, c_string _fn);
void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, c_string filename, uint64_t tl_info);
void chpldev_taskTable_remove(chpl_taskID_t taskID);
void chpldev_taskTable_set_active(chpl_taskID_t taskID);
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID);
void chpldev_taskTable_get_tl_info(chpl_taskID_t taskID);
void chpldev_taskTable_print(int64_t _ln, c_string _fn);
static void chpl__init_ChapelThreads(int64_t _ln, c_string _fn);
static void chpl__init_ChapelTuple(int64_t _ln, c_string _fn);
static void this4(_ref__tuple_1_star_range_int64_t_bounded_F this6, int64_t i, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static _ref_range_int64_t_bounded_F this5(_ref__tuple_1_star_range_int64_t_bounded_F this6, int64_t i, int64_t _ln, c_string _fn);
static void readWriteThis(_ref__tuple_1_star_int64_t this6, Writer f, int64_t _ln, c_string _fn);
static void chpl__init_ChapelUtil(int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpl_string_1_int64_t_F chpl_convert_args(chpl_main_argument* const arg, int64_t _ln, c_string _fn);
static void chpl__init_DefaultAssociative(int64_t _ln, c_string _fn);
static void chpl__init_DefaultRectangular(int64_t _ln, c_string _fn);
static DefaultDist _construct_DefaultDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, DefaultDist meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultDist(DefaultDist this6, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiNewRectangularDom(DefaultDist this6, int64_t _ln, c_string _fn);
static DefaultDist dsiClone(DefaultDist this6);
static void chpl_defaultDistInitPrivate(int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F _construct_DefaultRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_1_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn);
static chpl_bool dsiLinksDistribution2(DefaultRectangularDom_1_int64_t_F this6);
static DefaultRectangularDom_1_int64_t_F DefaultRectangularDom(DefaultDist dist2, int64_t _ln, c_string _fn);
static void dsiGetIndices(DefaultRectangularDom_1_int64_t_F this6, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static void dsiSetIndices(DefaultRectangularDom_1_int64_t_F this6, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn);
static chpl_bool dsiMember(DefaultRectangularDom_1_int64_t_F this6, _tuple_1_star_int64_t* const ind, int64_t _ln, c_string _fn);
static void dsiDim(DefaultRectangularDom_1_int64_t_F this6, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn);
static int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn);
static int64_t dsiLow(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F dsiBuildArray(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularArr_locale_1_int64_t_F dsiBuildArray2(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpl_string_1_int64_t_F dsiBuildArray3(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularArr_int64_t_1_int64_t_F dsiBuildArray4(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F dsiBuildArray5(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiBuildRectangularDom(DefaultRectangularDom_1_int64_t_F this6, _tuple_1_star_range_int64_t_bounded_F* const ranges, int64_t _ln, c_string _fn);
static DefaultRectangularArr_chpl_string_1_int64_t_F _construct_DefaultRectangularArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_chpl_string data, _ddata_chpl_string shiftedData, chpl_bool noinit_data, DefaultRectangularArr_chpl_string_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_locale_1_int64_t_F _construct_DefaultRectangularArr2(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_locale data, _ddata_locale shiftedData, chpl_bool noinit_data, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _construct_DefaultRectangularArr3(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_c_ptr_GtkWidget data, _ddata_c_ptr_GtkWidget shiftedData, chpl_bool noinit_data, DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_int64_t_1_int64_t_F _construct_DefaultRectangularArr4(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_int64_t data, _ddata_int64_t shiftedData, chpl_bool noinit_data, DefaultRectangularArr_int64_t_1_int64_t_F meme, int64_t _ln, c_string _fn);
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct_DefaultRectangularArr5(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_localesSignal data, _ddata_localesSignal shiftedData, chpl_bool noinit_data, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_chpl_string_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularArr3(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularArr4(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_DefaultRectangularArr5(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom2(DefaultRectangularArr_chpl_string_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom4(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom5(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn);
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom6(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void dsiDestroyData2(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void dsiDestroyData3(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void dsiDestroyData4(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void dsiDestroyData5(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void dsiDestroyData6(DefaultRectangularArr_chpl_string_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void computeFactoredOffs(DefaultRectangularArr_chpl_string_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void computeFactoredOffs2(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void computeFactoredOffs3(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void computeFactoredOffs4(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void computeFactoredOffs5(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void initialize6(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void initialize7(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void initialize8(DefaultRectangularArr_chpl_string_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void initialize9(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void initialize10(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn);
static void dsiReallocate2(DefaultRectangularArr_int64_t_1_int64_t_F this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void dsiReallocate3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void dsiReallocate4(DefaultRectangularArr_chpl_string_1_int64_t_F this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void dsiReallocate5(DefaultRectangularArr_locale_1_int64_t_F this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void dsiReallocate6(DefaultRectangularArr_localesSignal_1_int64_t_F this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn);
static void chpl__init_LocaleModel(int64_t _ln, c_string _fn);
static void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, c_string _fn);
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn);
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn);
static LocaleModel _construct_LocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, uint64_t callStackSize, int64_t _node_id, chpl_string local_name, LocaleModel meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_LocaleModel(LocaleModel this6, int64_t _ln, c_string _fn);
static LocaleModel LocaleModel2(locale parent_loc, int64_t _ln, c_string _fn);
static int64_t chpl_id2(LocaleModel this6, int64_t _ln, c_string _fn);
static locale getChild2(LocaleModel this6, int64_t idx, int64_t _ln, c_string _fn);
static void init(LocaleModel this6, int64_t _ln, c_string _fn);
static RootLocale _construct_RootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, DefaultRectangularDom_1_int64_t_F myLocaleSpace, DefaultRectangularArr_locale_1_int64_t_F myLocales, RootLocale meme, int64_t _ln, c_string _fn);
static void chpl__auto_destroy_RootLocale(RootLocale this6, int64_t _ln, c_string _fn);
static RootLocale RootLocale2(int64_t _ln, c_string _fn);
static void init2(RootLocale this6, int64_t _ln, c_string _fn);
static void wrapcoforall_fn2(_class_localscoforall_fn2 c);
static int64_t chpl_id3(RootLocale this6, int64_t _ln, c_string _fn);
static void coforall_fn2(localesBarrier* const b, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t locIdx, chpl___EndCount_atomic_int64_int64_t _coforallCount, RootLocale this6, int64_t _ln, c_string _fn);
static locale getChild3(RootLocale this6, int64_t idx, int64_t _ln, c_string _fn);
static void getDefaultLocaleArray(RootLocale this6, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn);
static DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray2(RootLocale this6, int64_t _ln, c_string _fn);
static locale localeIDtoLocale2(RootLocale this6, chpl_localeID_t* const id2, int64_t _ln, c_string _fn);
static chpl_opaque chpl_here_alloc(int64_t size2, int16_t md, int64_t _ln, c_string _fn);
static void chpl_here_free(chpl_opaque ptr, int64_t _ln, c_string _fn);
void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, c_string _fn);
void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, c_string _fn);
void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, c_string _fn);
void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn);
void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn);
void chpl_taskListProcess(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
void chpl_taskListExecute(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
void chpl_taskListFree(chpl_task_list_p task_list, int64_t _ln, c_string _fn);
static void chpl__init_LocaleTree(int64_t _ln, c_string _fn);
static chpl_localeTreeRecord _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme, int64_t _ln, c_string _fn);
static void chpl_initLocaleTree(int64_t _ln, c_string _fn);
static void chpl__init_LocalesArray(int64_t _ln, c_string _fn);
static void chpl__init_MemConsistency(int64_t _ln, c_string _fn);
static void chpl__init_MemTracking(int64_t _ln, c_string _fn);
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaksByType, _ref_c_string ret_memLeaksByDesc, _ref_chpl_bool ret_memLeaks, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog, int64_t _ln, c_string _fn);
void chpl__init_PrintModuleInitOrder(int64_t _ln, c_string _fn);
static void printModuleInit(c_string s1, c_string s2, int64_t len, int64_t _ln, c_string _fn);
static void initPrint(void);
static void chpl__init_String(int64_t _ln, c_string _fn);
static object _construct_object(object meme);
static void chpl__auto_destroy_object(object this6, int64_t _ln, c_string _fn);
void chpl__heapAllocateGlobals(void);
void chpl__init_preInit(int64_t _ln, c_string _fn);
static void chpl__init_Assert(int64_t _ln_chpl, c_string _fn_chpl);
static void assert_chpl(chpl_bool test_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_BaseStringType(int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_CommDiagnostics(int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_DSIUtil(int64_t _ln_chpl, c_string _fn_chpl);
static void createTuple_chpl(int64_t val_chpl, _ref__tuple_1_star_int64_t _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static int64_t _computeNumChunks_chpl(int64_t maxTasks_chpl, chpl_bool ignoreRunning_chpl, int64_t minSize_chpl, int64_t numElems_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static int64_t _computeNumChunks_chpl2(int64_t numElems_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static uint64_t intCeilXDivByY_chpl(uint64_t x_chpl, uint64_t y_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void _computeBlock_chpl(int64_t numelems_chpl, int64_t numblocks_chpl, int64_t blocknum_chpl, int64_t wayhi_chpl, int64_t waylo_chpl, int64_t lo_chpl, _ref__tuple_2_star_int64_t _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_Error(int64_t _ln_chpl, c_string _fn_chpl);
static c_string quote_string_chpl(chpl_string s_chpl, int64_t len_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void ioerror_chpl(syserr error_chpl, chpl_string msg_chpl, chpl_string path_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_IO(int64_t _ln_chpl, c_string _fn_chpl);
static void defaultIOStyle_chpl(_ref_iostyle _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static file_chpl _construct_file_chpl(locale home_chpl, qio_file_ptr_t _file_internal_chpl, file_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static file_chpl chpl__initCopy3(file_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl___ASSIGN_2(_ref_file ret_chpl, file_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void check_chpl(_ref_file this_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl___TILDE_file(_ref_file this_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void _style_chpl(_ref_file this_chpl, _ref_iostyle _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static chpl_string getPath_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static chpl_string tryGetPath_chpl(_ref_file this_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void openfd_chpl(int32_t fd_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void openfd_chpl2(int32_t fd_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void openfp_chpl(_cfile fp_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void openfp_chpl2(_cfile fp_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static channel_F_dynamic_T_chpl _construct_channel_chpl(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_F_dynamic_T_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static channel_T_dynamic_T_chpl _construct_channel_chpl2(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_T_dynamic_T_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static channel_T_dynamic_T_chpl chpl__initCopy4(channel_T_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static channel_F_dynamic_T_chpl chpl__initCopy5(channel_F_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl___ASSIGN_3(_ref_channel_F_dynamic_T ret_chpl, channel_F_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl___ASSIGN_4(_ref_channel_T_dynamic_T ret_chpl, channel_T_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static channel_F_dynamic_T_chpl channel_chpl(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static channel_T_dynamic_T_chpl channel_chpl2(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl___TILDE_channel(_ref_channel_F_dynamic_T this_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl___TILDE_channel2(_ref_channel_T_dynamic_T this_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static ioLiteral_chpl _construct_ioLiteral_chpl(c_string val_chpl, chpl_bool ignoreWhiteSpace_chpl, ioLiteral_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl___ASSIGN_5(_ref_ioLiteral _arg1_chpl, ioLiteral_chpl* const _arg2_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void reader_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void reader_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void writer_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void writer_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_List(int64_t _ln_chpl, c_string _fn_chpl);
static listNode_BaseArr_chpl _construct_listNode_chpl(BaseArr data_chpl, listNode_BaseArr_chpl next_chpl, listNode_BaseArr_chpl meme_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__auto_destroy_listNode(listNode_BaseArr_chpl this_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__auto_destroy_listNode2(listNode_BaseDom_chpl this_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static list_BaseArr_chpl _construct_list_chpl(listNode_BaseArr_chpl first_chpl, listNode_BaseArr_chpl last_chpl, int64_t length_chpl, list_BaseArr_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static list_BaseDom_chpl _construct_list_chpl2(listNode_BaseDom_chpl first_chpl, listNode_BaseDom_chpl last_chpl, int64_t length_chpl, list_BaseDom_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void append_chpl(_ref_list_BaseArr this_chpl, BaseArr e_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void remove_chpl(_ref_list_BaseArr this_chpl, BaseArr x_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void remove_chpl2(_ref_list_BaseDom this_chpl, BaseDom x_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_NewString(int64_t _ln_chpl, c_string _fn_chpl);
static string_refcnt_chpl _construct_string_refcnt_chpl(atomic_refcnt* const val_chpl, string_refcnt_chpl meme_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__auto_destroy_string_refcnt(string_refcnt_chpl this_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static string_rec_chpl _construct_string_rec_chpl(c_string base_chpl, int64_t len_chpl, locale home_chpl, string_refcnt_chpl refCnt_chpl, string_refcnt_chpl aliasRefCnt_chpl, string_rec_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static string_rec_chpl string_rec_chpl2(int64_t _ln_chpl, c_string _fn_chpl);
static void chpl___TILDE_string_rec(_ref_string_rec this_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void reinitString_chpl(_ref_string_rec this_chpl, c_string s_chpl, int64_t slen_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl___ASSIGN_6(_ref_string_rec lhs_chpl, c_string rhs_c_chpl, int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_Random(int64_t _ln_chpl, c_string _fn_chpl);
static SeedGenerators_chpl _construct_SeedGenerators_chpl(SeedGenerators_chpl* const meme_chpl);
static void chpl__init_Regexp(int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_Sys(int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_SysBasic(int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_SysCTypes(int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_Time(int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_FunctionSysbols(int64_t _ln_chpl, c_string _fn_chpl);
static int64_t defend_chpl(DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl2, DefaultRectangularArr_int64_t_1_int64_t_F moves_chpl);
static int64_t attack_chpl(DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl2, DefaultRectangularArr_int64_t_1_int64_t_F moves_chpl);
static int64_t computersMind_chpl(DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl2);
static int64_t analyseBoard_chpl(DefaultRectangularArr_int64_t_1_int64_t_F a_chpl, int64_t key_chpl, int64_t assumeIndex_chpl);
void resetGame(c_ptr_GtkWidget_chpl btn, c_void_ptr data);
void record_move(c_ptr_GtkWidget_chpl button, c_ptr_int64_t_chpl numPtr);
static void chpl__init_gtk(int64_t _ln_chpl, c_string _fn_chpl);
static void showDialog_chpl(c_string title_chpl, c_string message_chpl, int32_t wid_chpl, int32_t h_chpl);
static void gtk_init_chpl(DefaultRectangularArr_chpl_string_1_int64_t_F args_chpl);
static void chpl__init_gtk_types(int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__init_ttt(int64_t _ln_chpl, c_string _fn_chpl);
static void chpl__autoDestroyGlobals(void);
int64_t chpl_gen_main(chpl_main_argument* const _arg);
static void chpl_user_main(DefaultRectangularArr_chpl_string_1_int64_t_F args_chpl);
/*** Function Pointer Table ***/

chpl_fn_p chpl_ftable[] = {
  (chpl_fn_p)wrapcoforall_fn,
  (chpl_fn_p)wrapcoforall_fn2
};
/*** Virtual Method Table ***/

chpl_fn_p chpl_vmtable[] = {
  /* _ddata_c_ptr_GtkWidget */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _ddata_chpl_string */
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
  /* chpl___EndCount_atomic_int64_int64_t */
  (chpl_fn_p)chpl__auto_destroy__EndCount,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* _class_localscoforall_fn */
  (chpl_fn_p)chpl__auto_destroy_object,
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
  (chpl_fn_p)dsiReallocate,
  (chpl_fn_p)dsiDestroyData,
  (chpl_fn_p)dsiGetBaseDom,
  /* Writer */
  (chpl_fn_p)chpl__auto_destroy_Writer,
  (chpl_fn_p)writePrimitive3,
  (chpl_fn_p)writePrimitive2,
  (chpl_fn_p)writePrimitive,
  /* Reader */
  (chpl_fn_p)chpl__auto_destroy_Reader,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* StringWriter */
  (chpl_fn_p)chpl___TILDE_StringWriter,
  (chpl_fn_p)writePrimitive5,
  (chpl_fn_p)writePrimitive6,
  (chpl_fn_p)writePrimitive4,
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
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr2,
  (chpl_fn_p)dsiReallocate3,
  (chpl_fn_p)dsiDestroyData5,
  (chpl_fn_p)dsiGetBaseDom3,
  /* DefaultRectangularArr_chpl_string_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr,
  (chpl_fn_p)dsiReallocate4,
  (chpl_fn_p)dsiDestroyData6,
  (chpl_fn_p)dsiGetBaseDom2,
  /* DefaultRectangularArr_int64_t_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr5,
  (chpl_fn_p)dsiReallocate2,
  (chpl_fn_p)dsiDestroyData3,
  (chpl_fn_p)dsiGetBaseDom4,
  /* DefaultRectangularArr_locale_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr3,
  (chpl_fn_p)dsiReallocate5,
  (chpl_fn_p)dsiDestroyData4,
  (chpl_fn_p)dsiGetBaseDom6,
  /* DefaultRectangularArr_localesSignal_1_int64_t_F */
  (chpl_fn_p)chpl__auto_destroy_DefaultRectangularArr4,
  (chpl_fn_p)dsiReallocate6,
  (chpl_fn_p)dsiDestroyData2,
  (chpl_fn_p)dsiGetBaseDom5,
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
  (chpl_fn_p)NULL,
  /* string_refcnt_chpl */
  (chpl_fn_p)chpl__auto_destroy_string_refcnt,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkButton_chpl */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkContainer_chpl */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkLabel_chpl */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkTable_chpl */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkWidget_chpl */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_GtkWindow_chpl */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  /* c_ptr_int64_t_chpl */
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL,
  (chpl_fn_p)NULL
};
/*** Global Variables ***/

static atomic_int64 numPrivateObjects;
static chpl___EndCount_atomic_int64_int64_t _remoteEndCountType;
static chpl_bool chpl__testParOn;
static int32_t chpl_nodeID_t;
static int32_t chpl_sublocID_t;
static locale rootLocale;
static locale origRootLocale;
static locale dummyLocale;
static int64_t numLocales;
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
static c_string memLog;
static c_string memLeaksLog;
static c_string memLeaksByDesc;
static uint64_t cMemMax;
static uint64_t cMemThreshold;
static string_rec_chpl s_memLeaksByDesc;
static string_rec_chpl s_memLog;
static string_rec_chpl s_memLeaksLog;
static chpl_bool printModuleInitOrder;
static int32_t moduleInitLevel;
static chpl_bool chpl__init_DSIUtil_p;
static chpl_bool chpl__init_SysCTypes_p;
static chpl_bool chpl__init_gtk_p;
static chpl_bool chpl__init_gtk_types_p;
static chpl_bool chpl__init_ttt_p;
static chpl_bool chpl__init_AtomicsCommon_p;
static chpl_bool chpl__init_ChapelDistribution_p;
static chpl_bool chpl__init_ChapelDynDispHack_p;
static chpl_bool chpl__init_MemConsistency_p;
static chpl_bool chpl__init_String_p;
static chpl_bool chpl__init_ChapelLocale_p;
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
static chpl_bool chpl__init_Assert_p;
static chpl_bool chpl__init_ChapelThreads_p;
static chpl_bool chpl__init_LocaleModel_p;
static chpl_bool chpl__init_PrintModuleInitOrder_p;
static chpl_bool chpl__init_Time_p;
static chpl_bool chpl__init_Error_p;
static chpl_bool chpl__init_ChapelTuple_p;
static chpl_bool chpl__init_LocalesArray_p;
static chpl_bool chpl__init_SysBasic_p;
static chpl_bool chpl__init_Sys_p;
static chpl_bool chpl__init_Atomics_p;
static chpl_bool chpl__init_BaseStringType_p;
static chpl_bool chpl__init_Random_p;
static chpl_bool chpl__init_ChapelRange_p;
static chpl_bool chpl__init_NewString_p;
static chpl_bool chpl__init_ChapelArray_p;
static chpl_bool chpl__init_CommDiagnostics_p;
static chpl_bool chpl__init_FunctionSysbols_p;
static chpl_bool chpl__init_ChapelIO_p;
static chpl_bool chpl__init_CString_p;
static chpl_bool chpl__init_Regexp_p;
static chpl_bool chpl__init_IO_p;
static c_string baseType_chpl;
static int32_t IOHINT_NONE_chpl;
static int32_t IOHINT_RANDOM_chpl;
static int32_t IOHINT_SEQUENTIAL_chpl;
static int32_t IOHINT_CACHED_chpl;
static int32_t IOHINT_PARALLEL_chpl;
static chpl_string _r_chpl;
static chpl_string _rw_chpl;
static chpl_string _cw_chpl;
static chpl_string _cwr_chpl;
static _tuple_6_star_chpl_string _arg_to_proto_names_chpl;
static channel_F_dynamic_T_chpl stdin_chpl;
static channel_T_dynamic_T_chpl stdout_chpl;
static channel_T_dynamic_T_chpl stderr_chpl;
static SeedGenerators_chpl SeedGenerator_chpl;
static _real64 r23_chpl;
static _real64 t23_chpl;
static _real64 r46_chpl;
static _real64 t46_chpl;
static _real64 arand_chpl;
static DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl;
static c_ptr_GtkWidget_chpl output_chpl;
static int64_t playCounter_chpl;
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F button_array_chpl;
static c_ptr_GtkWidget_chpl board_chpl;
static chpl_bool gameOver_chpl;
const int chpl_numGlobalsOnHeap = 0;

ptr_wide_ptr_t chpl_globals_registry[1];
const int chpl_heterogeneous = 0;

const char* chpl_mem_descs[] = {
  "this",
  "_EndCount(atomic_int64,int(64))",
  "locale",
  "listNode(BaseArr)",
  "listNode(BaseDom)",
  "DefaultDist",
  "domain(1,int(64),false)",
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
  "_ic_these_DefaultRectangularArr_localesSignal_1_int64_t_F",
  "localesSignal",
  "StringWriter",
  "LocaleModel",
  "string_refcnt",
  "_ddata(int(64))",
  "[domain(1,int(64),false)] int(64)",
  "c_ptr(GtkWidget)",
  "_ddata(c_ptr(GtkWidget))",
  "[domain(1,int(64),false)] c_ptr(GtkWidget)",
  "_ddata(string)",
  "[domain(1,int(64),false)] string",
  "c_ptr(GtkWindow)",
  "c_ptr(int(64))",
  "c_ptr(GtkTable)",
  "c_ptr(GtkContainer)",
  "c_ptr(GtkButton)",
  "c_ptr(GtkLabel)",
  "bundled args"
};
const int chpl_mem_numDescs = 37;

void* const chpl_private_broadcast_table[] = {
  &chpl_verbose_comm,
  &chpl_comm_diagnostics,
  &chpl_verbose_mem
};
#include "chpl-gen-includes.h"

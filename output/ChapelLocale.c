/* ChapelLocale.chpl:22 */
static void chpl__init_ChapelLocale(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  locale type_tmp = NULL;
  locale type_tmp2 = NULL;
  locale const_tmp = NULL;
#line 22 "ChapelLocale.chpl"
  if (chpl__init_ChapelLocale_p) /* ZLINE: 22 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 22 "ChapelLocale.chpl"
  {
#line 22 "ChapelLocale.chpl"
    goto _exit_chpl__init_ChapelLocale;
#line 22 "ChapelLocale.chpl"
  }
#line 22 "ChapelLocale.chpl"
  modFormatStr = "%*s\n";
#line 22 "ChapelLocale.chpl"
  modStr = "ChapelLocale";
#line 22 "ChapelLocale.chpl"
  printModuleInit(modFormatStr, modStr, INT64(12), _ln, _fn);
#line 22 "ChapelLocale.chpl"
  refIndentLevel = &moduleInitLevel;
#line 22 "ChapelLocale.chpl"
  *(refIndentLevel) += INT64(1);
#line 22 "ChapelLocale.chpl"
  chpl__init_ChapelLocale_p = true;
#line 22 "ChapelLocale.chpl"
  {
#line 22 "ChapelLocale.chpl"
    chpl__init_LocaleModel(_ln, _fn);
#line 22 "ChapelLocale.chpl"
  }
#line 171 "ChapelLocale.chpl"
  type_tmp = nil;
#line 171 "ChapelLocale.chpl"
  rootLocale = type_tmp;
#line 185 "ChapelLocale.chpl"
  type_tmp2 = nil;
#line 185 "ChapelLocale.chpl"
  origRootLocale = type_tmp2;
#line 356 "ChapelLocale.chpl"
  const_tmp = locale2(_ln, _fn);
#line 356 "ChapelLocale.chpl"
  dummyLocale = const_tmp;
#line 22 "ChapelLocale.chpl"
  *(refIndentLevel) -= INT64(1);
#line 22 "ChapelLocale.chpl"
  _exit_chpl__init_ChapelLocale:;
#line 22 "ChapelLocale.chpl"
  return;
#line 22 "ChapelLocale.chpl"
}

#line 22 "ChapelLocale.chpl"
/* ChapelLocale.chpl:39 */
#line 22 "ChapelLocale.chpl"
static locale _construct_locale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, locale meme, int64_t _ln, c_string _fn) {
#line 22 "ChapelLocale.chpl"
  locale this6 = NULL;
#line 22 "ChapelLocale.chpl"
  object T = NULL;
#line 39 "ChapelLocale.chpl"
  this6 = meme;
#line 39 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(39), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 39 "ChapelLocale.chpl"
  T = &((this6)->super);
#line 39 "ChapelLocale.chpl"
  _construct_object(T);
#line 49 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(49), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 49 "ChapelLocale.chpl"
  (this6)->parent = parent;
#line 53 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(53), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 53 "ChapelLocale.chpl"
  (this6)->numCores = numCores;
#line 55 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(55), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 55 "ChapelLocale.chpl"
  (this6)->maxTaskPar = maxTaskPar;
#line 78 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(78), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 78 "ChapelLocale.chpl"
  (this6)->runningTaskCounter = *(runningTaskCounter);
#line 39 "ChapelLocale.chpl"
  return this6;
#line 39 "ChapelLocale.chpl"
}

#line 39 "ChapelLocale.chpl"
/* ChapelLocale.chpl:39 */
#line 39 "ChapelLocale.chpl"
static void chpl__auto_destroy_locale(locale this6, int64_t _ln, c_string _fn) {
#line 39 "ChapelLocale.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 39 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 78 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(78), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 78 "ChapelLocale.chpl"
  _field_destructor_tmp_ = &((this6)->runningTaskCounter);
#line 78 "ChapelLocale.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(78), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 78 "ChapelLocale.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 78 "ChapelLocale.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 39 "ChapelLocale.chpl"
  return;
#line 39 "ChapelLocale.chpl"
}

#line 39 "ChapelLocale.chpl"
/* ChapelLocale.chpl:41 */
#line 39 "ChapelLocale.chpl"
static locale locale2(int64_t _ln, c_string _fn) {
#line 39 "ChapelLocale.chpl"
  locale this6 = NULL;
#line 39 "ChapelLocale.chpl"
  locale this7 = NULL;
#line 39 "ChapelLocale.chpl"
  int64_t call_tmp;
#line 39 "ChapelLocale.chpl"
  chpl_opaque cast_tmp;
#line 39 "ChapelLocale.chpl"
  atomic_int64 _init_class_tmp_;
#line 39 "ChapelLocale.chpl"
  locale call_tmp2 = NULL;
#line 39 "ChapelLocale.chpl"
  atomic_int64 this8;
#line 39 "ChapelLocale.chpl"
  atomic_int_least64_t ret;
#line 39 "ChapelLocale.chpl"
  atomic_int_least64_t type_tmp;
#line 39 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 39 "ChapelLocale.chpl"
  atomic_int64 wrap_call_tmp;
#line 39 "ChapelLocale.chpl"
  locale wrap_call_tmp2 = NULL;
#line 41 "ChapelLocale.chpl"
  call_tmp = sizeof(chpl_locale_object);
#line 41 "ChapelLocale.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(2), _ln, _fn);
#line 41 "ChapelLocale.chpl"
  this7 = ((locale)(cast_tmp));
#line 41 "ChapelLocale.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_locale;
#line 41 "ChapelLocale.chpl"
  chpl_check_nil(this7, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 41 "ChapelLocale.chpl"
  (this7)->parent = nil;
#line 41 "ChapelLocale.chpl"
  chpl_check_nil(this7, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 41 "ChapelLocale.chpl"
  (this7)->numCores = INT64(0);
#line 41 "ChapelLocale.chpl"
  chpl_check_nil(this7, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 41 "ChapelLocale.chpl"
  (this7)->maxTaskPar = INT64(0);
#line 41 "ChapelLocale.chpl"
  chpl_check_nil(this7, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 41 "ChapelLocale.chpl"
  (this7)->runningTaskCounter = _init_class_tmp_;
#line 41 "ChapelLocale.chpl"
  call_tmp2 = ((locale)(nil));
#line 41 "ChapelLocale.chpl"
  chpl_check_nil(this7, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 41 "ChapelLocale.chpl"
  (this7)->parent = call_tmp2;
#line 41 "ChapelLocale.chpl"
  chpl_check_nil(this7, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 41 "ChapelLocale.chpl"
  (this7)->numCores = INT64(0);
#line 41 "ChapelLocale.chpl"
  chpl_check_nil(this7, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 41 "ChapelLocale.chpl"
  (this7)->maxTaskPar = INT64(0);
#line 41 "ChapelLocale.chpl"
  ret = type_tmp;
#line 41 "ChapelLocale.chpl"
  _ref_tmp_ = &ret;
#line 41 "ChapelLocale.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 41 "ChapelLocale.chpl"
  (&this8)->_v = ret;
#line 41 "ChapelLocale.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 41 "ChapelLocale.chpl"
  chpl_check_nil(this7, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 41 "ChapelLocale.chpl"
  (this7)->runningTaskCounter = wrap_call_tmp;
#line 41 "ChapelLocale.chpl"
  wrap_call_tmp2 = _construct_locale(call_tmp2, INT64(0), INT64(0), &wrap_call_tmp, this7, _ln, _fn);
#line 41 "ChapelLocale.chpl"
  return wrap_call_tmp2;
#line 41 "ChapelLocale.chpl"
}

#line 41 "ChapelLocale.chpl"
/* ChapelLocale.chpl:57 */
#line 41 "ChapelLocale.chpl"
static int64_t id(locale this6, int64_t _ln, c_string _fn) {
#line 41 "ChapelLocale.chpl"
  int64_t call_tmp;
#line 41 "ChapelLocale.chpl"
  int32_t _virtual_method_tmp_;
#line 57 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(57), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 57 "ChapelLocale.chpl"
  _virtual_method_tmp_ = ((object)(this6))->chpl__cid;
#line 57 "ChapelLocale.chpl"
  call_tmp = ((int64_t(*)(locale, int64_t, c_string))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(1))])(this6, _ln, _fn);
#line 57 "ChapelLocale.chpl"
  return call_tmp;
#line 57 "ChapelLocale.chpl"
}

#line 57 "ChapelLocale.chpl"
/* ChapelLocale.chpl:104 */
#line 57 "ChapelLocale.chpl"
static int64_t chpl_id(locale this6, int64_t _ln, c_string _fn) {
#line 105 "ChapelLocale.chpl"
  halt("Pure virtual function called.", _ln, _fn);
#line 104 "ChapelLocale.chpl"
  return INT64(-1);
#line 104 "ChapelLocale.chpl"
}

#line 104 "ChapelLocale.chpl"
/* ChapelLocale.chpl:141 */
#line 104 "ChapelLocale.chpl"
static locale getChild(locale this6, int64_t idx, int64_t _ln, c_string _fn) {
#line 142 "ChapelLocale.chpl"
  halt("Pure virtual function called.", _ln, _fn);
#line 141 "ChapelLocale.chpl"
  return this6;
#line 141 "ChapelLocale.chpl"
}

#line 141 "ChapelLocale.chpl"
/* ChapelLocale.chpl:156 */
#line 141 "ChapelLocale.chpl"
static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme, int64_t _ln, c_string _fn) {
#line 141 "ChapelLocale.chpl"
  AbstractLocaleModel this6 = NULL;
#line 141 "ChapelLocale.chpl"
  locale T = NULL;
#line 156 "ChapelLocale.chpl"
  this6 = meme;
#line 156 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(156), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 156 "ChapelLocale.chpl"
  T = &((this6)->super);
#line 156 "ChapelLocale.chpl"
  _construct_locale(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
#line 156 "ChapelLocale.chpl"
  return meme;
#line 156 "ChapelLocale.chpl"
}

#line 156 "ChapelLocale.chpl"
/* ChapelLocale.chpl:156 */
#line 156 "ChapelLocale.chpl"
static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this6, int64_t _ln, c_string _fn) {
#line 156 "ChapelLocale.chpl"
  locale _parent_destructor_tmp_ = NULL;
#line 156 "ChapelLocale.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 156 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 156 "ChapelLocale.chpl"
  _parent_destructor_tmp_ = ((locale)(this6));
#line 156 "ChapelLocale.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(156), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 156 "ChapelLocale.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
#line 156 "ChapelLocale.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(156), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 156 "ChapelLocale.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 156 "ChapelLocale.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 156 "ChapelLocale.chpl"
  return;
#line 156 "ChapelLocale.chpl"
}

#line 156 "ChapelLocale.chpl"
/* ChapelLocale.chpl:187 */
#line 156 "ChapelLocale.chpl"
static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this6, int64_t _ln, c_string _fn) {
#line 156 "ChapelLocale.chpl"
  locale _parent_destructor_tmp_ = NULL;
#line 156 "ChapelLocale.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 156 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 187 "ChapelLocale.chpl"
  _parent_destructor_tmp_ = ((locale)(this6));
#line 187 "ChapelLocale.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(187), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 187 "ChapelLocale.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
#line 187 "ChapelLocale.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(187), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 187 "ChapelLocale.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 187 "ChapelLocale.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 187 "ChapelLocale.chpl"
  return;
#line 187 "ChapelLocale.chpl"
}

#line 187 "ChapelLocale.chpl"
/* ChapelLocale.chpl:187 */
#line 187 "ChapelLocale.chpl"
static AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, AbstractRootLocale meme, int64_t _ln, c_string _fn) {
#line 187 "ChapelLocale.chpl"
  AbstractRootLocale this6 = NULL;
#line 187 "ChapelLocale.chpl"
  locale T = NULL;
#line 187 "ChapelLocale.chpl"
  this6 = meme;
#line 187 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(187), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 187 "ChapelLocale.chpl"
  T = &((this6)->super);
#line 187 "ChapelLocale.chpl"
  _construct_locale(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
#line 187 "ChapelLocale.chpl"
  return meme;
#line 187 "ChapelLocale.chpl"
}

#line 187 "ChapelLocale.chpl"
/* ChapelLocale.chpl:205 */
#line 187 "ChapelLocale.chpl"
static locale localeIDtoLocale(AbstractRootLocale this6, chpl_localeID_t* const id2, int64_t _ln, c_string _fn) {
#line 187 "ChapelLocale.chpl"
  locale call_tmp = NULL;
#line 206 "ChapelLocale.chpl"
  halt("Pure virtual function called.", _ln, _fn);
#line 207 "ChapelLocale.chpl"
  call_tmp = ((locale)(this6));
#line 205 "ChapelLocale.chpl"
  return call_tmp;
#line 205 "ChapelLocale.chpl"
}

#line 205 "ChapelLocale.chpl"
/* ChapelLocale.chpl:261 */
#line 205 "ChapelLocale.chpl"
static localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme, int64_t _ln, c_string _fn) {
#line 205 "ChapelLocale.chpl"
  localesSignal this6 = NULL;
#line 205 "ChapelLocale.chpl"
  object T = NULL;
#line 261 "ChapelLocale.chpl"
  this6 = meme;
#line 261 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(261), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 261 "ChapelLocale.chpl"
  T = &((this6)->super);
#line 261 "ChapelLocale.chpl"
  _construct_object(T);
#line 262 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(262), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 262 "ChapelLocale.chpl"
  (this6)->s = *(s);
#line 261 "ChapelLocale.chpl"
  return this6;
#line 261 "ChapelLocale.chpl"
}

#line 261 "ChapelLocale.chpl"
/* ChapelLocale.chpl:261 */
#line 261 "ChapelLocale.chpl"
static void chpl__auto_destroy_localesSignal(localesSignal this6, int64_t _ln, c_string _fn) {
#line 261 "ChapelLocale.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 261 "ChapelLocale.chpl"
  _ref_atomic_flag call_tmp = NULL;
#line 262 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(262), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 262 "ChapelLocale.chpl"
  _field_destructor_tmp_ = &((this6)->s);
#line 262 "ChapelLocale.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(262), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 262 "ChapelLocale.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 262 "ChapelLocale.chpl"
  atomic_destroy_flag(call_tmp);
#line 261 "ChapelLocale.chpl"
  return;
#line 261 "ChapelLocale.chpl"
}

#line 261 "ChapelLocale.chpl"
/* ChapelLocale.chpl:264 */
#line 261 "ChapelLocale.chpl"
static localesBarrier _construct_localesBarrier(localesBarrier* const meme) {
#line 261 "ChapelLocale.chpl"
  localesBarrier this6;
#line 264 "ChapelLocale.chpl"
  return *(meme);
#line 264 "ChapelLocale.chpl"
}

#line 264 "ChapelLocale.chpl"
/* ChapelLocale.chpl:265 */
#line 264 "ChapelLocale.chpl"
static void wait5(_ref_localesBarrier this6, int64_t locIdx, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t _ln, c_string _fn) {
#line 264 "ChapelLocale.chpl"
  memory_order local_memory_order_relaxed;
#line 264 "ChapelLocale.chpl"
  int64_t local_numLocales;
#line 264 "ChapelLocale.chpl"
  memory_order local_memory_order_seq_cst;
#line 264 "ChapelLocale.chpl"
  chpl_bool call_tmp;
#line 264 "ChapelLocale.chpl"
  chpl_bool T;
#line 264 "ChapelLocale.chpl"
  memory_order default_argorder;
#line 264 "ChapelLocale.chpl"
  int64_t count;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t i;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this7 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp2;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this8 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t sum;
#line 264 "ChapelLocale.chpl"
  int64_t ret_x1;
#line 264 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp3;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this9 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp4;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp5;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this10 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t sum2;
#line 264 "ChapelLocale.chpl"
  int64_t ret_x12;
#line 264 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t ret_2 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp6;
#line 264 "ChapelLocale.chpl"
  int64_t step;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp7;
#line 264 "ChapelLocale.chpl"
  int64_t last;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this11 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp8;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp9;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp10;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp11;
#line 264 "ChapelLocale.chpl"
  _ddata_localesSignal T2 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this12 = NULL;
#line 264 "ChapelLocale.chpl"
  _ddata_localesSignal ret5 = NULL;
#line 264 "ChapelLocale.chpl"
  _ref_localesSignal call_tmp12 = NULL;
#line 264 "ChapelLocale.chpl"
  localesSignal coerce_tmp = NULL;
#line 264 "ChapelLocale.chpl"
  object call_tmp13 = NULL;
#line 264 "ChapelLocale.chpl"
  chpl_bool call_tmp14;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp15;
#line 264 "ChapelLocale.chpl"
  chpl_bool call_tmp16;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret6 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this2 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t i2;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this13 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F ret7 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp17;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this14 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t sum3;
#line 264 "ChapelLocale.chpl"
  int64_t ret_x13;
#line 264 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t ret_3 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp18;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this15 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F ret8 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp19;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp20;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this16 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t sum4;
#line 264 "ChapelLocale.chpl"
  int64_t ret_x14;
#line 264 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t ret_4 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp21;
#line 264 "ChapelLocale.chpl"
  int64_t step2;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp22;
#line 264 "ChapelLocale.chpl"
  int64_t last2;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this17 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F ret9 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp23;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp24;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp25;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp26;
#line 264 "ChapelLocale.chpl"
  _ddata_localesSignal T3 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this18 = NULL;
#line 264 "ChapelLocale.chpl"
  _ddata_localesSignal ret10 = NULL;
#line 264 "ChapelLocale.chpl"
  _ref_localesSignal call_tmp27 = NULL;
#line 264 "ChapelLocale.chpl"
  localesSignal coerce_tmp2 = NULL;
#line 264 "ChapelLocale.chpl"
  _ref_atomicflag call_tmp28 = NULL;
#line 264 "ChapelLocale.chpl"
  memory_order default_argorder2;
#line 264 "ChapelLocale.chpl"
  _ref_atomic_flag call_tmp29 = NULL;
#line 264 "ChapelLocale.chpl"
  localesSignal f = NULL;
#line 264 "ChapelLocale.chpl"
  localesSignal this19 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp30;
#line 264 "ChapelLocale.chpl"
  chpl_opaque cast_tmp;
#line 264 "ChapelLocale.chpl"
  atomicflag _init_class_tmp_;
#line 264 "ChapelLocale.chpl"
  atomicflag this20;
#line 264 "ChapelLocale.chpl"
  atomic_flag ret11;
#line 264 "ChapelLocale.chpl"
  atomic_flag type_tmp;
#line 264 "ChapelLocale.chpl"
  _ref_atomic_flag _ref_tmp_ = NULL;
#line 264 "ChapelLocale.chpl"
  atomicflag wrap_call_tmp;
#line 264 "ChapelLocale.chpl"
  localesSignal wrap_call_tmp2 = NULL;
#line 264 "ChapelLocale.chpl"
  _tuple_1_star_int64_t i3;
#line 264 "ChapelLocale.chpl"
  _tuple_1_star_int64_t this21;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp31 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret12 = NULL;
#line 264 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F ret13 = NULL;
#line 264 "ChapelLocale.chpl"
  chpl_bool call_tmp32;
#line 264 "ChapelLocale.chpl"
  chpl_bool call_tmp33;
#line 264 "ChapelLocale.chpl"
  chpl_string call_tmp34;
#line 264 "ChapelLocale.chpl"
  int64_t sum5;
#line 264 "ChapelLocale.chpl"
  int64_t ret_x15;
#line 264 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t ret_5 = NULL;
#line 264 "ChapelLocale.chpl"
  int64_t coerce_tmp3;
#line 264 "ChapelLocale.chpl"
  int64_t call_tmp35;
#line 264 "ChapelLocale.chpl"
  _ddata_localesSignal ret14 = NULL;
#line 264 "ChapelLocale.chpl"
  _ddata_localesSignal coerce_tmp4 = NULL;
#line 264 "ChapelLocale.chpl"
  _ref_localesSignal call_tmp36 = NULL;
#line 264 "ChapelLocale.chpl"
  _ref_atomicflag call_tmp37 = NULL;
#line 264 "ChapelLocale.chpl"
  memory_order default_argorder3;
#line 264 "ChapelLocale.chpl"
  chpl_bool T4;
#line 264 "ChapelLocale.chpl"
  _ref_atomic_flag call_tmp38 = NULL;
#line 264 "ChapelLocale.chpl"
  chpl_bool call_tmp39;
#line 264 "ChapelLocale.chpl"
  chpl_bool call_tmp40;
#line 264 "ChapelLocale.chpl"
  _ref_atomic_flag call_tmp41 = NULL;
#line 264 "ChapelLocale.chpl"
  chpl_bool call_tmp42;
#line 264 "ChapelLocale.chpl"
  chpl_bool call_tmp43;
#line 264 "ChapelLocale.chpl"
  localesSignal delete_tmp = NULL;
#line 264 "ChapelLocale.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 264 "ChapelLocale.chpl"
  _ref_atomic_flag call_tmp44 = NULL;
#line 264 "ChapelLocale.chpl"
  chpl_opaque call_tmp45;
#line 292 "ChapelLocale.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 279 "ChapelLocale.chpl"
  local_numLocales = numLocales;
#line 275 "ChapelLocale.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 266 "ChapelLocale.chpl"
  call_tmp = (locIdx == INT64(0));
#line 266 "ChapelLocale.chpl"
  if (call_tmp) /* ZLINE: 268 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 266 "ChapelLocale.chpl"
  {
#line 268 "ChapelLocale.chpl"
    T = true;
#line 277 "ChapelLocale.chpl"
    ret = flags;
#line 277 "ChapelLocale.chpl"
    _ic__F0_this = ret;
#line 277 "ChapelLocale.chpl"
    this7 = ret;
#line 277 "ChapelLocale.chpl"
    this8 = ret;
#line 277 "ChapelLocale.chpl"
    chpl_check_nil(this8, INT64(277), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 277 "ChapelLocale.chpl"
    ret_ = &((this8)->blk);
#line 277 "ChapelLocale.chpl"
    ret_x1 = *(*(ret_) + INT64(0));
#line 277 "ChapelLocale.chpl"
    this9 = ret;
#line 277 "ChapelLocale.chpl"
    this10 = ret;
#line 277 "ChapelLocale.chpl"
    chpl_check_nil(this10, INT64(277), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 277 "ChapelLocale.chpl"
    ret_2 = &((this10)->blk);
#line 277 "ChapelLocale.chpl"
    ret_x12 = *(*(ret_2) + INT64(0));
#line 277 "ChapelLocale.chpl"
    this11 = ret;
#line 279 "ChapelLocale.chpl"
    call_tmp15 = (local_numLocales - INT64(1));
#line 268 "ChapelLocale.chpl"
    while (T) {
#line 275 "ChapelLocale.chpl"
      default_argorder = local_memory_order_seq_cst;
#line 275 "ChapelLocale.chpl"
      atomic_fence(default_argorder, _ln, _fn);
#line 276 "ChapelLocale.chpl"
      count = INT64(0);
#line 277 "ChapelLocale.chpl"
      chpl_check_nil(this7, INT64(277), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 277 "ChapelLocale.chpl"
      ret2 = (this7)->dom;
#line 277 "ChapelLocale.chpl"
      chpl_check_nil(ret2, INT64(277), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 277 "ChapelLocale.chpl"
      call_tmp2 = dsiLow(ret2, _ln, _fn);
#line 277 "ChapelLocale.chpl"
      sum = INT64(0);
#line 277 "ChapelLocale.chpl"
      call_tmp3 = (call_tmp2 * ret_x1);
#line 277 "ChapelLocale.chpl"
      sum += call_tmp3;
#line 277 "ChapelLocale.chpl"
      chpl_check_nil(this9, INT64(277), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 277 "ChapelLocale.chpl"
      ret3 = (this9)->dom;
#line 277 "ChapelLocale.chpl"
      chpl_check_nil(ret3, INT64(277), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 277 "ChapelLocale.chpl"
      call_tmp4 = dsiLow(ret3, _ln, _fn);
#line 277 "ChapelLocale.chpl"
      call_tmp5 = (call_tmp4 + INT64(1));
#line 277 "ChapelLocale.chpl"
      sum2 = INT64(0);
#line 277 "ChapelLocale.chpl"
      call_tmp6 = (call_tmp5 * ret_x12);
#line 277 "ChapelLocale.chpl"
      sum2 += call_tmp6;
#line 277 "ChapelLocale.chpl"
      call_tmp7 = (sum2 - sum);
#line 277 "ChapelLocale.chpl"
      step = call_tmp7;
#line 277 "ChapelLocale.chpl"
      chpl_check_nil(this11, INT64(277), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 277 "ChapelLocale.chpl"
      ret4 = (this11)->dom;
#line 277 "ChapelLocale.chpl"
      chpl_check_nil(ret4, INT64(277), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 277 "ChapelLocale.chpl"
      call_tmp8 = dsiNumIndices(ret4, _ln, _fn);
#line 277 "ChapelLocale.chpl"
      call_tmp9 = (call_tmp8 - INT64(1));
#line 277 "ChapelLocale.chpl"
      call_tmp10 = (call_tmp9 * call_tmp7);
#line 277 "ChapelLocale.chpl"
      call_tmp11 = (sum + call_tmp10);
#line 277 "ChapelLocale.chpl"
      last = call_tmp11;
#line 277 "ChapelLocale.chpl"
      this12 = _ic__F0_this;
#line 277 "ChapelLocale.chpl"
      chpl_check_nil(this12, INT64(277), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 277 "ChapelLocale.chpl"
      ret5 = (this12)->shiftedData;
#line 277 "ChapelLocale.chpl"
      T2 = ret5;
#line 277 "ChapelLocale.chpl"
      for (i = sum; ((i <= last)); i += step) {
#line 277 "ChapelLocale.chpl"
        call_tmp12 = (T2 + i);
#line 278 "ChapelLocale.chpl"
        coerce_tmp = *(call_tmp12);
#line 278 "ChapelLocale.chpl"
        call_tmp13 = ((object)(coerce_tmp));
#line 278 "ChapelLocale.chpl"
        call_tmp14 = (call_tmp13 != nil);
#line 278 "ChapelLocale.chpl"
        if (call_tmp14) /* ZLINE: 278 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 278 "ChapelLocale.chpl"
        {
#line 278 "ChapelLocale.chpl"
          count += INT64(1);
#line 278 "ChapelLocale.chpl"
        }
#line 278 "ChapelLocale.chpl"
      }
#line 279 "ChapelLocale.chpl"
      call_tmp16 = (count == call_tmp15);
#line 279 "ChapelLocale.chpl"
      if (call_tmp16) /* ZLINE: 279 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 279 "ChapelLocale.chpl"
      {
#line 279 "ChapelLocale.chpl"
        goto _breakLabel;
#line 279 "ChapelLocale.chpl"
      }
#line 282 "ChapelLocale.chpl"
      chpl_task_yield();
#line 268 "ChapelLocale.chpl"
      T = true;
#line 268 "ChapelLocale.chpl"
    }
#line 268 "ChapelLocale.chpl"
    _breakLabel:;
#line 285 "ChapelLocale.chpl"
    ret6 = flags;
#line 285 "ChapelLocale.chpl"
    _ic__F0_this2 = ret6;
#line 285 "ChapelLocale.chpl"
    this13 = ret6;
#line 285 "ChapelLocale.chpl"
    chpl_check_nil(this13, INT64(285), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 285 "ChapelLocale.chpl"
    ret7 = (this13)->dom;
#line 285 "ChapelLocale.chpl"
    chpl_check_nil(ret7, INT64(285), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 285 "ChapelLocale.chpl"
    call_tmp17 = dsiLow(ret7, _ln, _fn);
#line 285 "ChapelLocale.chpl"
    this14 = ret6;
#line 285 "ChapelLocale.chpl"
    sum3 = INT64(0);
#line 285 "ChapelLocale.chpl"
    chpl_check_nil(this14, INT64(285), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 285 "ChapelLocale.chpl"
    ret_3 = &((this14)->blk);
#line 285 "ChapelLocale.chpl"
    ret_x13 = *(*(ret_3) + INT64(0));
#line 285 "ChapelLocale.chpl"
    call_tmp18 = (call_tmp17 * ret_x13);
#line 285 "ChapelLocale.chpl"
    sum3 += call_tmp18;
#line 285 "ChapelLocale.chpl"
    this15 = ret6;
#line 285 "ChapelLocale.chpl"
    chpl_check_nil(this15, INT64(285), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 285 "ChapelLocale.chpl"
    ret8 = (this15)->dom;
#line 285 "ChapelLocale.chpl"
    chpl_check_nil(ret8, INT64(285), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 285 "ChapelLocale.chpl"
    call_tmp19 = dsiLow(ret8, _ln, _fn);
#line 285 "ChapelLocale.chpl"
    call_tmp20 = (call_tmp19 + INT64(1));
#line 285 "ChapelLocale.chpl"
    this16 = ret6;
#line 285 "ChapelLocale.chpl"
    sum4 = INT64(0);
#line 285 "ChapelLocale.chpl"
    chpl_check_nil(this16, INT64(285), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 285 "ChapelLocale.chpl"
    ret_4 = &((this16)->blk);
#line 285 "ChapelLocale.chpl"
    ret_x14 = *(*(ret_4) + INT64(0));
#line 285 "ChapelLocale.chpl"
    call_tmp21 = (call_tmp20 * ret_x14);
#line 285 "ChapelLocale.chpl"
    sum4 += call_tmp21;
#line 285 "ChapelLocale.chpl"
    call_tmp22 = (sum4 - sum3);
#line 285 "ChapelLocale.chpl"
    step2 = call_tmp22;
#line 285 "ChapelLocale.chpl"
    this17 = ret6;
#line 285 "ChapelLocale.chpl"
    chpl_check_nil(this17, INT64(285), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 285 "ChapelLocale.chpl"
    ret9 = (this17)->dom;
#line 285 "ChapelLocale.chpl"
    chpl_check_nil(ret9, INT64(285), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 285 "ChapelLocale.chpl"
    call_tmp23 = dsiNumIndices(ret9, _ln, _fn);
#line 285 "ChapelLocale.chpl"
    call_tmp24 = (call_tmp23 - INT64(1));
#line 285 "ChapelLocale.chpl"
    call_tmp25 = (call_tmp24 * call_tmp22);
#line 285 "ChapelLocale.chpl"
    call_tmp26 = (sum3 + call_tmp25);
#line 285 "ChapelLocale.chpl"
    last2 = call_tmp26;
#line 285 "ChapelLocale.chpl"
    for (i2 = sum3; ((i2 <= last2)); i2 += step2) {
#line 285 "ChapelLocale.chpl"
      this18 = _ic__F0_this2;
#line 285 "ChapelLocale.chpl"
      chpl_check_nil(this18, INT64(285), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 285 "ChapelLocale.chpl"
      ret10 = (this18)->shiftedData;
#line 285 "ChapelLocale.chpl"
      T3 = ret10;
#line 285 "ChapelLocale.chpl"
      call_tmp27 = (T3 + i2);
#line 286 "ChapelLocale.chpl"
      coerce_tmp2 = *(call_tmp27);
#line 286 "ChapelLocale.chpl"
      chpl_check_nil(coerce_tmp2, INT64(286), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 286 "ChapelLocale.chpl"
      call_tmp28 = &((coerce_tmp2)->s);
#line 286 "ChapelLocale.chpl"
      default_argorder2 = local_memory_order_seq_cst;
#line 286 "ChapelLocale.chpl"
      chpl_check_nil(call_tmp28, INT64(286), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 286 "ChapelLocale.chpl"
      call_tmp29 = &((call_tmp28)->_v);
#line 286 "ChapelLocale.chpl"
      atomic_flag_test_and_set_explicit(call_tmp29, default_argorder2);
#line 286 "ChapelLocale.chpl"
    }
#line 286 "ChapelLocale.chpl"
  } else /* ZLINE: 288 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 286 "ChapelLocale.chpl"
  {
#line 288 "ChapelLocale.chpl"
    call_tmp30 = sizeof(chpl_localesSignal_object);
#line 288 "ChapelLocale.chpl"
    cast_tmp = chpl_here_alloc(call_tmp30, INT16(19), _ln, _fn);
#line 288 "ChapelLocale.chpl"
    this19 = ((localesSignal)(cast_tmp));
#line 288 "ChapelLocale.chpl"
    ((object)(this19))->chpl__cid = chpl__cid_localesSignal;
#line 288 "ChapelLocale.chpl"
    chpl_check_nil(this19, INT64(288), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 288 "ChapelLocale.chpl"
    (this19)->s = _init_class_tmp_;
#line 288 "ChapelLocale.chpl"
    ret11 = type_tmp;
#line 288 "ChapelLocale.chpl"
    _ref_tmp_ = &ret11;
#line 288 "ChapelLocale.chpl"
    atomic_init_flag(_ref_tmp_, false);
#line 288 "ChapelLocale.chpl"
    (&this20)->_v = ret11;
#line 288 "ChapelLocale.chpl"
    wrap_call_tmp = _construct_atomicflag(ret11, &this20, _ln, _fn);
#line 288 "ChapelLocale.chpl"
    chpl_check_nil(this19, INT64(288), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 288 "ChapelLocale.chpl"
    (this19)->s = wrap_call_tmp;
#line 288 "ChapelLocale.chpl"
    wrap_call_tmp2 = _construct_localesSignal(&wrap_call_tmp, this19, _ln, _fn);
#line 288 "ChapelLocale.chpl"
    f = wrap_call_tmp2;
#line 290 "ChapelLocale.chpl"
    *(this21 + INT64(0)) = locIdx;
#line 290 "ChapelLocale.chpl"
    *(i3 + INT64(0)) = *(this21 + INT64(0));
#line 290 "ChapelLocale.chpl"
    ret12 = flags;
#line 290 "ChapelLocale.chpl"
    call_tmp31 = ret12;
#line 290 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp31, INT64(290), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 290 "ChapelLocale.chpl"
    ret13 = (call_tmp31)->dom;
#line 290 "ChapelLocale.chpl"
    chpl_check_nil(ret13, INT64(290), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 290 "ChapelLocale.chpl"
    call_tmp32 = dsiMember(ret13, &this21, _ln, _fn);
#line 290 "ChapelLocale.chpl"
    call_tmp33 = (! call_tmp32);
#line 290 "ChapelLocale.chpl"
    if (call_tmp33) /* ZLINE: 290 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 290 "ChapelLocale.chpl"
    {
#line 290 "ChapelLocale.chpl"
      string_from_c_string(&call_tmp34, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 290 "ChapelLocale.chpl"
      halt2(call_tmp34, &this21, _ln, _fn);
#line 290 "ChapelLocale.chpl"
    }
#line 290 "ChapelLocale.chpl"
    sum5 = INT64(0);
#line 290 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp31, INT64(290), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 290 "ChapelLocale.chpl"
    ret_5 = &((call_tmp31)->blk);
#line 290 "ChapelLocale.chpl"
    ret_x15 = *(*(ret_5) + INT64(0));
#line 290 "ChapelLocale.chpl"
    coerce_tmp3 = *(i3 + INT64(0));
#line 290 "ChapelLocale.chpl"
    call_tmp35 = (coerce_tmp3 * ret_x15);
#line 290 "ChapelLocale.chpl"
    sum5 += call_tmp35;
#line 290 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp31, INT64(290), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 290 "ChapelLocale.chpl"
    ret14 = (call_tmp31)->shiftedData;
#line 290 "ChapelLocale.chpl"
    coerce_tmp4 = ret14;
#line 290 "ChapelLocale.chpl"
    call_tmp36 = (coerce_tmp4 + sum5);
#line 290 "ChapelLocale.chpl"
    *(call_tmp36) = wrap_call_tmp2;
#line 292 "ChapelLocale.chpl"
    chpl_check_nil(f, INT64(292), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 292 "ChapelLocale.chpl"
    call_tmp37 = &((f)->s);
#line 292 "ChapelLocale.chpl"
    default_argorder3 = local_memory_order_seq_cst;
#line 292 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp37, INT64(292), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 292 "ChapelLocale.chpl"
    call_tmp38 = &((call_tmp37)->_v);
#line 292 "ChapelLocale.chpl"
    call_tmp39 = atomic_load_explicit_flag(call_tmp38, local_memory_order_relaxed);
#line 292 "ChapelLocale.chpl"
    call_tmp40 = (call_tmp39 != true);
#line 292 "ChapelLocale.chpl"
    T4 = call_tmp40;
#line 292 "ChapelLocale.chpl"
    while (T4) {
#line 292 "ChapelLocale.chpl"
      chpl_task_yield();
#line 292 "ChapelLocale.chpl"
      chpl_check_nil(call_tmp37, INT64(292), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 292 "ChapelLocale.chpl"
      call_tmp41 = &((call_tmp37)->_v);
#line 292 "ChapelLocale.chpl"
      call_tmp42 = atomic_load_explicit_flag(call_tmp41, local_memory_order_relaxed);
#line 292 "ChapelLocale.chpl"
      call_tmp43 = (call_tmp42 != true);
#line 292 "ChapelLocale.chpl"
      T4 = call_tmp43;
#line 292 "ChapelLocale.chpl"
    }
#line 292 "ChapelLocale.chpl"
    atomic_thread_fence(default_argorder3);
#line 294 "ChapelLocale.chpl"
    delete_tmp = f;
#line 294 "ChapelLocale.chpl"
    chpl_check_nil(delete_tmp, INT64(294), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 294 "ChapelLocale.chpl"
    _field_destructor_tmp_ = &((delete_tmp)->s);
#line 294 "ChapelLocale.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(294), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 294 "ChapelLocale.chpl"
    call_tmp44 = &((_field_destructor_tmp_)->_v);
#line 294 "ChapelLocale.chpl"
    atomic_destroy_flag(call_tmp44);
#line 294 "ChapelLocale.chpl"
    call_tmp45 = ((void*)(delete_tmp));
#line 294 "ChapelLocale.chpl"
    chpl_here_free(call_tmp45, _ln, _fn);
#line 294 "ChapelLocale.chpl"
  }
#line 265 "ChapelLocale.chpl"
  return;
#line 265 "ChapelLocale.chpl"
}

#line 265 "ChapelLocale.chpl"
/* ChapelLocale.chpl:307 */
#line 265 "ChapelLocale.chpl"
static void chpl_init_rootLocale(int64_t _ln, c_string _fn) {
#line 265 "ChapelLocale.chpl"
  RootLocale call_tmp = NULL;
#line 265 "ChapelLocale.chpl"
  locale call_tmp2 = NULL;
#line 265 "ChapelLocale.chpl"
  RootLocale _formal_type_tmp_ = NULL;
#line 265 "ChapelLocale.chpl"
  RootLocale T = NULL;
#line 265 "ChapelLocale.chpl"
  object call_tmp3 = NULL;
#line 265 "ChapelLocale.chpl"
  chpl_bool call_tmp4;
#line 265 "ChapelLocale.chpl"
  RootLocale call_tmp5 = NULL;
#line 265 "ChapelLocale.chpl"
  RootLocale call_tmp6 = NULL;
#line 308 "ChapelLocale.chpl"
  call_tmp = RootLocale2(_ln, _fn);
#line 308 "ChapelLocale.chpl"
  call_tmp2 = ((locale)(call_tmp));
#line 308 "ChapelLocale.chpl"
  origRootLocale = call_tmp2;
#line 309 "ChapelLocale.chpl"
  call_tmp3 = ((object)(origRootLocale));
#line 309 "ChapelLocale.chpl"
  call_tmp4 = (call_tmp3 != nil);
#line 309 "ChapelLocale.chpl"
  if (call_tmp4) /* ZLINE: 309 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 309 "ChapelLocale.chpl"
  {
#line 309 "ChapelLocale.chpl"
    call_tmp5 = ((((object)(origRootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(origRootLocale))):(((RootLocale)(NULL)));
#line 309 "ChapelLocale.chpl"
    T = call_tmp5;
#line 309 "ChapelLocale.chpl"
  } else /* ZLINE: 309 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 309 "ChapelLocale.chpl"
  {
#line 309 "ChapelLocale.chpl"
    call_tmp6 = ((RootLocale)(nil));
#line 309 "ChapelLocale.chpl"
    T = call_tmp6;
#line 309 "ChapelLocale.chpl"
  }
#line 309 "ChapelLocale.chpl"
  chpl_check_nil(T, INT64(309), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 309 "ChapelLocale.chpl"
  init2(T, _ln, _fn);
#line 307 "ChapelLocale.chpl"
  return;
#line 307 "ChapelLocale.chpl"
}

#line 307 "ChapelLocale.chpl"
/* ChapelLocale.chpl:316 */
#line 307 "ChapelLocale.chpl"
static void chpl_rootLocaleInitPrivate(int64_t locIdx, int64_t _ln, c_string _fn) {
#line 307 "ChapelLocale.chpl"
  int64_t local_numLocales;
#line 307 "ChapelLocale.chpl"
  chpl_bool call_tmp;
#line 307 "ChapelLocale.chpl"
  RootLocale newRootLocale = NULL;
#line 307 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F origLocales = NULL;
#line 307 "ChapelLocale.chpl"
  RootLocale _formal_type_tmp_ = NULL;
#line 307 "ChapelLocale.chpl"
  RootLocale T = NULL;
#line 307 "ChapelLocale.chpl"
  object call_tmp2 = NULL;
#line 307 "ChapelLocale.chpl"
  chpl_bool call_tmp3;
#line 307 "ChapelLocale.chpl"
  RootLocale call_tmp4 = NULL;
#line 307 "ChapelLocale.chpl"
  RootLocale call_tmp5 = NULL;
#line 307 "ChapelLocale.chpl"
  _ddata_locale origRL = NULL;
#line 307 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp6 = NULL;
#line 307 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 307 "ChapelLocale.chpl"
  _ddata_locale ret2 = NULL;
#line 307 "ChapelLocale.chpl"
  _ddata_locale newRL = NULL;
#line 307 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp7 = NULL;
#line 307 "ChapelLocale.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 307 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp8 = NULL;
#line 307 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret3 = NULL;
#line 307 "ChapelLocale.chpl"
  _ddata_locale ret4 = NULL;
#line 307 "ChapelLocale.chpl"
  _ref_locale call_tmp9 = NULL;
#line 307 "ChapelLocale.chpl"
  _ref_locale call_tmp10 = NULL;
#line 307 "ChapelLocale.chpl"
  chpl_bool call_tmp11;
#line 307 "ChapelLocale.chpl"
  uint64_t call_tmp12;
#line 307 "ChapelLocale.chpl"
  locale call_tmp13 = NULL;
#line 307 "ChapelLocale.chpl"
  chpl_bool call_tmp14;
#line 307 "ChapelLocale.chpl"
  RootLocale _formal_type_tmp_2 = NULL;
#line 307 "ChapelLocale.chpl"
  RootLocale T2 = NULL;
#line 307 "ChapelLocale.chpl"
  object call_tmp15 = NULL;
#line 307 "ChapelLocale.chpl"
  chpl_bool call_tmp16;
#line 307 "ChapelLocale.chpl"
  RootLocale call_tmp17 = NULL;
#line 307 "ChapelLocale.chpl"
  RootLocale call_tmp18 = NULL;
#line 338 "ChapelLocale.chpl"
  local_numLocales = numLocales;
#line 320 "ChapelLocale.chpl"
  rootLocale = origRootLocale;
#line 321 "ChapelLocale.chpl"
  call_tmp = (locIdx != INT64(0));
#line 321 "ChapelLocale.chpl"
  if (call_tmp) /* ZLINE: 323 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 321 "ChapelLocale.chpl"
  {
#line 323 "ChapelLocale.chpl"
    newRootLocale = RootLocale2(_ln, _fn);
#line 328 "ChapelLocale.chpl"
    call_tmp2 = ((object)(origRootLocale));
#line 328 "ChapelLocale.chpl"
    call_tmp3 = (call_tmp2 != nil);
#line 328 "ChapelLocale.chpl"
    if (call_tmp3) /* ZLINE: 328 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 328 "ChapelLocale.chpl"
    {
#line 328 "ChapelLocale.chpl"
      call_tmp4 = ((((object)(origRootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(origRootLocale))):(((RootLocale)(NULL)));
#line 328 "ChapelLocale.chpl"
      T = call_tmp4;
#line 328 "ChapelLocale.chpl"
    } else /* ZLINE: 328 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 328 "ChapelLocale.chpl"
    {
#line 328 "ChapelLocale.chpl"
      call_tmp5 = ((RootLocale)(nil));
#line 328 "ChapelLocale.chpl"
      T = call_tmp5;
#line 328 "ChapelLocale.chpl"
    }
#line 328 "ChapelLocale.chpl"
    chpl_check_nil(T, INT64(328), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 328 "ChapelLocale.chpl"
    origLocales = getDefaultLocaleArray(T, _ln, _fn);
#line 329 "ChapelLocale.chpl"
    ret = origLocales;
#line 329 "ChapelLocale.chpl"
    call_tmp6 = ret;
#line 329 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp6, INT64(329), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 329 "ChapelLocale.chpl"
    ret2 = (call_tmp6)->shiftedData;
#line 329 "ChapelLocale.chpl"
    origRL = ret2;
#line 330 "ChapelLocale.chpl"
    ret_to_arg_ref_tmp_ = &call_tmp7;
#line 330 "ChapelLocale.chpl"
    chpl_check_nil(newRootLocale, INT64(330), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 330 "ChapelLocale.chpl"
    getDefaultLocaleArray2(newRootLocale, ret_to_arg_ref_tmp_, _ln, _fn);
#line 330 "ChapelLocale.chpl"
    ret3 = call_tmp7;
#line 330 "ChapelLocale.chpl"
    call_tmp8 = ret3;
#line 330 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp8, INT64(330), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 330 "ChapelLocale.chpl"
    ret4 = (call_tmp8)->shiftedData;
#line 330 "ChapelLocale.chpl"
    newRL = ret4;
#line 335 "ChapelLocale.chpl"
    call_tmp9 = (newRL + INT64(0));
#line 337 "ChapelLocale.chpl"
    call_tmp10 = (origRL + INT64(0));
#line 338 "ChapelLocale.chpl"
    call_tmp11 = (local_numLocales < INT64(0));
#line 338 "ChapelLocale.chpl"
    if (call_tmp11) /* ZLINE: 338 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 338 "ChapelLocale.chpl"
    {
#line 338 "ChapelLocale.chpl"
      halt("casting int(64) less than 0 to uint(64)", _ln, _fn);
#line 338 "ChapelLocale.chpl"
    }
#line 338 "ChapelLocale.chpl"
    call_tmp12 = ((uint64_t)(local_numLocales));
#line 334 "ChapelLocale.chpl"
    chpl_gen_comm_get(((void*)(call_tmp9)), INT64(0), call_tmp10, sizeof(locale), -1, call_tmp12, _ln, _fn);
#line 340 "ChapelLocale.chpl"
    call_tmp13 = ((locale)(newRootLocale));
#line 340 "ChapelLocale.chpl"
    rootLocale = call_tmp13;
#line 330 "ChapelLocale.chpl"
    chpl__autoDestroy4(call_tmp7, _ln, _fn);
#line 330 "ChapelLocale.chpl"
  }
#line 342 "ChapelLocale.chpl"
  call_tmp14 = (locIdx != INT64(0));
#line 342 "ChapelLocale.chpl"
  if (call_tmp14) /* ZLINE: 345 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 342 "ChapelLocale.chpl"
  {
#line 346 "ChapelLocale.chpl"
    call_tmp15 = ((object)(rootLocale));
#line 346 "ChapelLocale.chpl"
    call_tmp16 = (call_tmp15 != nil);
#line 346 "ChapelLocale.chpl"
    if (call_tmp16) /* ZLINE: 346 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 346 "ChapelLocale.chpl"
    {
#line 346 "ChapelLocale.chpl"
      call_tmp17 = ((((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(rootLocale))):(((RootLocale)(NULL)));
#line 346 "ChapelLocale.chpl"
      T2 = call_tmp17;
#line 346 "ChapelLocale.chpl"
    } else /* ZLINE: 346 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 346 "ChapelLocale.chpl"
    {
#line 346 "ChapelLocale.chpl"
      call_tmp18 = ((RootLocale)(nil));
#line 346 "ChapelLocale.chpl"
      T2 = call_tmp18;
#line 346 "ChapelLocale.chpl"
    }
#line 345 "ChapelLocale.chpl"
    chpl_check_nil(T2, INT64(345), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 345 "ChapelLocale.chpl"
    Locales = getDefaultLocaleArray(T2, _ln, _fn);
#line 345 "ChapelLocale.chpl"
  }
#line 316 "ChapelLocale.chpl"
  return;
#line 316 "ChapelLocale.chpl"
}

#line 316 "ChapelLocale.chpl"
/* ChapelLocale.chpl:362 */
#line 316 "ChapelLocale.chpl"
void chpl_getLocaleID(_ref_chpl_localeID_t localeID, int64_t _ln, c_string _fn) {
#line 316 "ChapelLocale.chpl"
  int32_t local_c_sublocid_any;
#line 316 "ChapelLocale.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 316 "ChapelLocale.chpl"
  chpl_localeID_t call_tmp;
#line 316 "ChapelLocale.chpl"
  chpl_localeID_t call_tmp2;
#line 363 "ChapelLocale.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 363 "ChapelLocale.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 363 "ChapelLocale.chpl"
  call_tmp = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
#line 363 "ChapelLocale.chpl"
  call_tmp2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp);
#line 363 "ChapelLocale.chpl"
  *(localeID) = call_tmp2;
#line 362 "ChapelLocale.chpl"
  return;
#line 362 "ChapelLocale.chpl"
}

#line 362 "ChapelLocale.chpl"
/* ChapelLocale.chpl:379 */
#line 362 "ChapelLocale.chpl"
static locale chpl_localeID_to_locale(chpl_localeID_t* const id2, int64_t _ln, c_string _fn) {
#line 362 "ChapelLocale.chpl"
  locale local_dummyLocale = NULL;
#line 362 "ChapelLocale.chpl"
  locale ret = NULL;
#line 362 "ChapelLocale.chpl"
  object call_tmp = NULL;
#line 362 "ChapelLocale.chpl"
  chpl_bool call_tmp2;
#line 362 "ChapelLocale.chpl"
  AbstractRootLocale _formal_type_tmp_ = NULL;
#line 362 "ChapelLocale.chpl"
  AbstractRootLocale T = NULL;
#line 362 "ChapelLocale.chpl"
  object call_tmp3 = NULL;
#line 362 "ChapelLocale.chpl"
  chpl_bool call_tmp4;
#line 362 "ChapelLocale.chpl"
  AbstractRootLocale call_tmp5 = NULL;
#line 362 "ChapelLocale.chpl"
  AbstractRootLocale call_tmp6 = NULL;
#line 362 "ChapelLocale.chpl"
  locale call_tmp7 = NULL;
#line 362 "ChapelLocale.chpl"
  int32_t _virtual_method_tmp_;
#line 384 "ChapelLocale.chpl"
  local_dummyLocale = dummyLocale;
#line 380 "ChapelLocale.chpl"
  call_tmp = ((object)(rootLocale));
#line 380 "ChapelLocale.chpl"
  call_tmp2 = (call_tmp != nil);
#line 380 "ChapelLocale.chpl"
  if (call_tmp2) /* ZLINE: 380 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 380 "ChapelLocale.chpl"
  {
#line 381 "ChapelLocale.chpl"
    call_tmp3 = ((object)(rootLocale));
#line 381 "ChapelLocale.chpl"
    call_tmp4 = (call_tmp3 != nil);
#line 381 "ChapelLocale.chpl"
    if (call_tmp4) /* ZLINE: 381 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 381 "ChapelLocale.chpl"
    {
#line 381 "ChapelLocale.chpl"
      call_tmp5 = (((((object)(rootLocale))->chpl__cid == chpl__cid_AbstractRootLocale) || (((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale)))?(((AbstractRootLocale)(rootLocale))):(((AbstractRootLocale)(NULL)));
#line 381 "ChapelLocale.chpl"
      T = call_tmp5;
#line 381 "ChapelLocale.chpl"
    } else /* ZLINE: 381 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 381 "ChapelLocale.chpl"
    {
#line 381 "ChapelLocale.chpl"
      call_tmp6 = ((AbstractRootLocale)(nil));
#line 381 "ChapelLocale.chpl"
      T = call_tmp6;
#line 381 "ChapelLocale.chpl"
    }
#line 381 "ChapelLocale.chpl"
    chpl_check_nil(T, INT64(381), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 381 "ChapelLocale.chpl"
    _virtual_method_tmp_ = ((object)(T))->chpl__cid;
#line 381 "ChapelLocale.chpl"
    call_tmp7 = ((locale(*)(AbstractRootLocale, chpl_localeID_t* const, int64_t, c_string))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(3))])(T, id2, _ln, _fn);
#line 381 "ChapelLocale.chpl"
    ret = call_tmp7;
#line 381 "ChapelLocale.chpl"
    goto _end_chpl_localeID_to_locale;
#line 381 "ChapelLocale.chpl"
  } else /* ZLINE: 380 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 381 "ChapelLocale.chpl"
  {
#line 384 "ChapelLocale.chpl"
    ret = local_dummyLocale;
#line 384 "ChapelLocale.chpl"
    goto _end_chpl_localeID_to_locale;
#line 384 "ChapelLocale.chpl"
  }
#line 384 "ChapelLocale.chpl"
  _end_chpl_localeID_to_locale:;
#line 379 "ChapelLocale.chpl"
  return ret;
#line 379 "ChapelLocale.chpl"
}

#line 379 "ChapelLocale.chpl"
/* ChapelLocale.chpl:431 */
#line 379 "ChapelLocale.chpl"
static int64_t runningTasks(locale this6, int64_t _ln, c_string _fn) {
#line 379 "ChapelLocale.chpl"
  memory_order local_memory_order_relaxed;
#line 379 "ChapelLocale.chpl"
  _ref_atomic_int64 call_tmp = NULL;
#line 379 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 379 "ChapelLocale.chpl"
  int64_t call_tmp3;
#line 379 "ChapelLocale.chpl"
  int64_t T;
#line 379 "ChapelLocale.chpl"
  chpl_bool call_tmp4;
#line 432 "ChapelLocale.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 432 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(432), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 432 "ChapelLocale.chpl"
  call_tmp = &((this6)->runningTaskCounter);
#line 432 "ChapelLocale.chpl"
  chpl_check_nil(call_tmp, INT64(432), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 432 "ChapelLocale.chpl"
  call_tmp2 = &((call_tmp)->_v);
#line 432 "ChapelLocale.chpl"
  call_tmp3 = atomic_load_explicit_int_least64_t(call_tmp2, local_memory_order_relaxed);
#line 432 "ChapelLocale.chpl"
  call_tmp4 = (call_tmp3 <= INT64(0));
#line 432 "ChapelLocale.chpl"
  if (call_tmp4) /* ZLINE: 432 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 432 "ChapelLocale.chpl"
  {
#line 432 "ChapelLocale.chpl"
    T = INT64(1);
#line 432 "ChapelLocale.chpl"
  } else /* ZLINE: 432 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl */
#line 432 "ChapelLocale.chpl"
  {
#line 432 "ChapelLocale.chpl"
    T = call_tmp3;
#line 432 "ChapelLocale.chpl"
  }
#line 431 "ChapelLocale.chpl"
  return T;
#line 431 "ChapelLocale.chpl"
}

#line 431 "ChapelLocale.chpl"
/* ChapelLocale.chpl:453 */
#line 431 "ChapelLocale.chpl"
void chpl_taskRunningCntInc(int64_t _ln, c_string _fn) {
#line 431 "ChapelLocale.chpl"
  memory_order local_memory_order_relaxed;
#line 431 "ChapelLocale.chpl"
  int32_t local_c_sublocid_any;
#line 431 "ChapelLocale.chpl"
  locale call_tmp = NULL;
#line 431 "ChapelLocale.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 431 "ChapelLocale.chpl"
  chpl_localeID_t call_tmp2;
#line 431 "ChapelLocale.chpl"
  chpl_localeID_t call_tmp3;
#line 431 "ChapelLocale.chpl"
  locale call_tmp4 = NULL;
#line 431 "ChapelLocale.chpl"
  _ref_atomic_int64 call_tmp5 = NULL;
#line 431 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp6 = NULL;
#line 454 "ChapelLocale.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 454 "ChapelLocale.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 454 "ChapelLocale.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 454 "ChapelLocale.chpl"
  call_tmp2 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
#line 454 "ChapelLocale.chpl"
  call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
#line 454 "ChapelLocale.chpl"
  call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
#line 454 "ChapelLocale.chpl"
  call_tmp = call_tmp4;
#line 454 "ChapelLocale.chpl"
  chpl_check_nil(call_tmp, INT64(454), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 454 "ChapelLocale.chpl"
  call_tmp5 = &((call_tmp)->runningTaskCounter);
#line 454 "ChapelLocale.chpl"
  chpl_check_nil(call_tmp5, INT64(454), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 454 "ChapelLocale.chpl"
  call_tmp6 = &((call_tmp5)->_v);
#line 454 "ChapelLocale.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp6, INT64(1), local_memory_order_relaxed);
#line 453 "ChapelLocale.chpl"
  return;
#line 453 "ChapelLocale.chpl"
}

#line 453 "ChapelLocale.chpl"
/* ChapelLocale.chpl:459 */
#line 453 "ChapelLocale.chpl"
void chpl_taskRunningCntDec(int64_t _ln, c_string _fn) {
#line 453 "ChapelLocale.chpl"
  memory_order local_memory_order_relaxed;
#line 453 "ChapelLocale.chpl"
  int32_t local_c_sublocid_any;
#line 453 "ChapelLocale.chpl"
  locale call_tmp = NULL;
#line 453 "ChapelLocale.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 453 "ChapelLocale.chpl"
  chpl_localeID_t call_tmp2;
#line 453 "ChapelLocale.chpl"
  chpl_localeID_t call_tmp3;
#line 453 "ChapelLocale.chpl"
  locale call_tmp4 = NULL;
#line 453 "ChapelLocale.chpl"
  _ref_atomic_int64 call_tmp5 = NULL;
#line 453 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp6 = NULL;
#line 460 "ChapelLocale.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 460 "ChapelLocale.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 460 "ChapelLocale.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 460 "ChapelLocale.chpl"
  call_tmp2 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
#line 460 "ChapelLocale.chpl"
  call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
#line 460 "ChapelLocale.chpl"
  call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
#line 460 "ChapelLocale.chpl"
  call_tmp = call_tmp4;
#line 460 "ChapelLocale.chpl"
  chpl_check_nil(call_tmp, INT64(460), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 460 "ChapelLocale.chpl"
  call_tmp5 = &((call_tmp)->runningTaskCounter);
#line 460 "ChapelLocale.chpl"
  chpl_check_nil(call_tmp5, INT64(460), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 460 "ChapelLocale.chpl"
  call_tmp6 = &((call_tmp5)->_v);
#line 460 "ChapelLocale.chpl"
  atomic_fetch_sub_explicit_int_least64_t(call_tmp6, INT64(1), local_memory_order_relaxed);
#line 459 "ChapelLocale.chpl"
  return;
#line 459 "ChapelLocale.chpl"
}


/* ChapelLocale.chpl:67 */
static void chpl__init_ChapelLocale(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  locale type_tmp = NULL;
  locale type_tmp2 = NULL;
  locale const_tmp = NULL;
#line 67 "ChapelLocale.chpl"
  if (chpl__init_ChapelLocale_p) /* ZLINE: 67 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 67 "ChapelLocale.chpl"
  {
#line 67 "ChapelLocale.chpl"
    goto _exit_chpl__init_ChapelLocale;
#line 67 "ChapelLocale.chpl"
  }
#line 67 "ChapelLocale.chpl"
  modFormatStr = "%*s\n";
#line 67 "ChapelLocale.chpl"
  modStr = "ChapelLocale";
#line 67 "ChapelLocale.chpl"
  printModuleInit(modFormatStr, modStr, INT64(12), _ln, _fn);
#line 67 "ChapelLocale.chpl"
  refIndentLevel = &moduleInitLevel;
#line 67 "ChapelLocale.chpl"
  *(refIndentLevel) += INT64(1);
#line 67 "ChapelLocale.chpl"
  chpl__init_ChapelLocale_p = UINT8(true);
#line 67 "ChapelLocale.chpl"
  {
#line 67 "ChapelLocale.chpl"
    chpl__init_LocaleModel(_ln, _fn);
#line 67 "ChapelLocale.chpl"
  }
#line 318 "ChapelLocale.chpl"
  type_tmp = nil;
#line 318 "ChapelLocale.chpl"
  rootLocale = type_tmp;
#line 335 "ChapelLocale.chpl"
  type_tmp2 = nil;
#line 335 "ChapelLocale.chpl"
  origRootLocale = type_tmp2;
#line 512 "ChapelLocale.chpl"
  const_tmp = locale2(_ln, _fn);
#line 512 "ChapelLocale.chpl"
  dummyLocale = const_tmp;
#line 67 "ChapelLocale.chpl"
  *(refIndentLevel) -= INT64(1);
#line 67 "ChapelLocale.chpl"
  _exit_chpl__init_ChapelLocale:;
#line 67 "ChapelLocale.chpl"
  return;
#line 67 "ChapelLocale.chpl"
}

#line 67 "ChapelLocale.chpl"
/* ChapelLocale.chpl:90 */
#line 67 "ChapelLocale.chpl"
static locale _construct_locale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, locale meme, int64_t _ln, int32_t _fn) {
#line 67 "ChapelLocale.chpl"
  locale this5 = NULL;
#line 67 "ChapelLocale.chpl"
  object T = NULL;
#line 90 "ChapelLocale.chpl"
  this5 = meme;
#line 90 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(90), INT64(0));
#line 90 "ChapelLocale.chpl"
  T = &((this5)->super);
#line 90 "ChapelLocale.chpl"
  _construct_object(T);
#line 102 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(102), INT64(0));
#line 102 "ChapelLocale.chpl"
  (this5)->parent = parent;
#line 104 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(104), INT64(0));
#line 104 "ChapelLocale.chpl"
  (this5)->nPUsLogAcc = nPUsLogAcc;
#line 105 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(105), INT64(0));
#line 105 "ChapelLocale.chpl"
  (this5)->nPUsLogAll = nPUsLogAll;
#line 106 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(106), INT64(0));
#line 106 "ChapelLocale.chpl"
  (this5)->nPUsPhysAcc = nPUsPhysAcc;
#line 107 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(107), INT64(0));
#line 107 "ChapelLocale.chpl"
  (this5)->nPUsPhysAll = nPUsPhysAll;
#line 163 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(163), INT64(0));
#line 163 "ChapelLocale.chpl"
  (this5)->maxTaskPar = maxTaskPar;
#line 171 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(171), INT64(0));
#line 171 "ChapelLocale.chpl"
  (this5)->callStackSize = callStackSize;
#line 212 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(212), INT64(0));
#line 212 "ChapelLocale.chpl"
  (this5)->runningTaskCounter = *(runningTaskCounter);
#line 90 "ChapelLocale.chpl"
  return this5;
#line 90 "ChapelLocale.chpl"
}

#line 90 "ChapelLocale.chpl"
/* ChapelLocale.chpl:90 */
#line 90 "ChapelLocale.chpl"
static void chpl__auto_destroy_locale(locale this5, int64_t _ln, int32_t _fn) {
#line 90 "ChapelLocale.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 90 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 212 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(212), INT64(0));
#line 212 "ChapelLocale.chpl"
  _field_destructor_tmp_ = &((this5)->runningTaskCounter);
#line 212 "ChapelLocale.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(212), INT64(0));
#line 212 "ChapelLocale.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 212 "ChapelLocale.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 90 "ChapelLocale.chpl"
  return;
#line 90 "ChapelLocale.chpl"
}

#line 90 "ChapelLocale.chpl"
/* ChapelLocale.chpl:93 */
#line 90 "ChapelLocale.chpl"
static locale locale2(int64_t _ln, int32_t _fn) {
#line 90 "ChapelLocale.chpl"
  locale this5 = NULL;
#line 90 "ChapelLocale.chpl"
  locale this6 = NULL;
#line 90 "ChapelLocale.chpl"
  int64_t call_tmp;
#line 90 "ChapelLocale.chpl"
  c_void_ptr cast_tmp;
#line 90 "ChapelLocale.chpl"
  atomic_int64 _init_class_tmp_;
#line 90 "ChapelLocale.chpl"
  locale call_tmp2 = NULL;
#line 90 "ChapelLocale.chpl"
  atomic_int64 this7;
#line 90 "ChapelLocale.chpl"
  atomic_int_least64_t ret;
#line 90 "ChapelLocale.chpl"
  atomic_int_least64_t type_tmp;
#line 90 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 90 "ChapelLocale.chpl"
  atomic_int64 wrap_call_tmp;
#line 90 "ChapelLocale.chpl"
  locale wrap_call_tmp2 = NULL;
#line 93 "ChapelLocale.chpl"
  call_tmp = sizeof(chpl_locale_object);
#line 93 "ChapelLocale.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(3), _ln, _fn);
#line 93 "ChapelLocale.chpl"
  this6 = ((locale)(cast_tmp));
#line 93 "ChapelLocale.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_locale;
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->parent = nil;
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->nPUsLogAcc = INT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->nPUsLogAll = INT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->nPUsPhysAcc = INT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->nPUsPhysAll = INT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->maxTaskPar = INT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->callStackSize = UINT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->runningTaskCounter = _init_class_tmp_;
#line 93 "ChapelLocale.chpl"
  call_tmp2 = ((locale)(nil));
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->parent = call_tmp2;
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->nPUsLogAcc = INT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->nPUsLogAll = INT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->nPUsPhysAcc = INT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->nPUsPhysAll = INT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->maxTaskPar = INT64(0);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->callStackSize = UINT64(0);
#line 93 "ChapelLocale.chpl"
  ret = type_tmp;
#line 93 "ChapelLocale.chpl"
  _ref_tmp_ = &ret;
#line 93 "ChapelLocale.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 93 "ChapelLocale.chpl"
  (&this7)->_v = ret;
#line 93 "ChapelLocale.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this7, _ln, _fn);
#line 93 "ChapelLocale.chpl"
  chpl_check_nil(this6, INT64(93), INT64(0));
#line 93 "ChapelLocale.chpl"
  (this6)->runningTaskCounter = wrap_call_tmp;
#line 93 "ChapelLocale.chpl"
  wrap_call_tmp2 = _construct_locale(call_tmp2, INT64(0), INT64(0), INT64(0), INT64(0), INT64(0), UINT64(0), &wrap_call_tmp, this6, _ln, _fn);
#line 93 "ChapelLocale.chpl"
  return wrap_call_tmp2;
#line 93 "ChapelLocale.chpl"
}

#line 93 "ChapelLocale.chpl"
/* ChapelLocale.chpl:180 */
#line 93 "ChapelLocale.chpl"
static int64_t id(locale this5, int64_t _ln, int32_t _fn) {
#line 93 "ChapelLocale.chpl"
  int64_t call_tmp;
#line 93 "ChapelLocale.chpl"
  int32_t _virtual_method_tmp_;
#line 180 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(180), INT64(0));
#line 180 "ChapelLocale.chpl"
  _virtual_method_tmp_ = ((object)(this5))->chpl__cid;
#line 180 "ChapelLocale.chpl"
  call_tmp = ((int64_t(*)(locale, int64_t, int32_t))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(2))])(this5, _ln, _fn);
#line 180 "ChapelLocale.chpl"
  return call_tmp;
#line 180 "ChapelLocale.chpl"
}

#line 180 "ChapelLocale.chpl"
/* ChapelLocale.chpl:243 */
#line 180 "ChapelLocale.chpl"
static int64_t chpl_id(locale this5, int64_t _ln, int32_t _fn) {
#line 180 "ChapelLocale.chpl"
  string local__str_literal_32;
#line 244 "ChapelLocale.chpl"
  local__str_literal_32 = _str_literal_32;
#line 244 "ChapelLocale.chpl"
  halt(&local__str_literal_32, _ln, _fn);
#line 243 "ChapelLocale.chpl"
  return INT64(-1);
#line 243 "ChapelLocale.chpl"
}

#line 243 "ChapelLocale.chpl"
/* ChapelLocale.chpl:286 */
#line 243 "ChapelLocale.chpl"
static locale getChild(locale this5, int64_t idx, int64_t _ln, int32_t _fn) {
#line 243 "ChapelLocale.chpl"
  string local__str_literal_32;
#line 287 "ChapelLocale.chpl"
  local__str_literal_32 = _str_literal_32;
#line 287 "ChapelLocale.chpl"
  halt(&local__str_literal_32, _ln, _fn);
#line 286 "ChapelLocale.chpl"
  return this5;
#line 286 "ChapelLocale.chpl"
}

#line 286 "ChapelLocale.chpl"
/* ChapelLocale.chpl:302 */
#line 286 "ChapelLocale.chpl"
static AbstractLocaleModel _construct_AbstractLocaleModel(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, AbstractLocaleModel meme, int64_t _ln, int32_t _fn) {
#line 286 "ChapelLocale.chpl"
  AbstractLocaleModel this5 = NULL;
#line 286 "ChapelLocale.chpl"
  locale T = NULL;
#line 302 "ChapelLocale.chpl"
  this5 = meme;
#line 302 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(302), INT64(0));
#line 302 "ChapelLocale.chpl"
  T = &((this5)->super);
#line 302 "ChapelLocale.chpl"
  _construct_locale(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, T, _ln, _fn);
#line 302 "ChapelLocale.chpl"
  return meme;
#line 302 "ChapelLocale.chpl"
}

#line 302 "ChapelLocale.chpl"
/* ChapelLocale.chpl:302 */
#line 302 "ChapelLocale.chpl"
static void chpl__auto_destroy_AbstractLocaleModel(AbstractLocaleModel this5, int64_t _ln, int32_t _fn) {
#line 302 "ChapelLocale.chpl"
  locale _parent_destructor_tmp_ = NULL;
#line 302 "ChapelLocale.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 302 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 302 "ChapelLocale.chpl"
  _parent_destructor_tmp_ = ((locale)(this5));
#line 302 "ChapelLocale.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(302), INT64(0));
#line 302 "ChapelLocale.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
#line 302 "ChapelLocale.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(302), INT64(0));
#line 302 "ChapelLocale.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 302 "ChapelLocale.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 302 "ChapelLocale.chpl"
  return;
#line 302 "ChapelLocale.chpl"
}

#line 302 "ChapelLocale.chpl"
/* ChapelLocale.chpl:338 */
#line 302 "ChapelLocale.chpl"
static void chpl__auto_destroy_AbstractRootLocale(AbstractRootLocale this5, int64_t _ln, int32_t _fn) {
#line 302 "ChapelLocale.chpl"
  locale _parent_destructor_tmp_ = NULL;
#line 302 "ChapelLocale.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 302 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 338 "ChapelLocale.chpl"
  _parent_destructor_tmp_ = ((locale)(this5));
#line 338 "ChapelLocale.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(338), INT64(0));
#line 338 "ChapelLocale.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->runningTaskCounter);
#line 338 "ChapelLocale.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(338), INT64(0));
#line 338 "ChapelLocale.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 338 "ChapelLocale.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 338 "ChapelLocale.chpl"
  return;
#line 338 "ChapelLocale.chpl"
}

#line 338 "ChapelLocale.chpl"
/* ChapelLocale.chpl:338 */
#line 338 "ChapelLocale.chpl"
static AbstractRootLocale _construct_AbstractRootLocale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, AbstractRootLocale meme, int64_t _ln, int32_t _fn) {
#line 338 "ChapelLocale.chpl"
  AbstractRootLocale this5 = NULL;
#line 338 "ChapelLocale.chpl"
  locale T = NULL;
#line 338 "ChapelLocale.chpl"
  this5 = meme;
#line 338 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(338), INT64(0));
#line 338 "ChapelLocale.chpl"
  T = &((this5)->super);
#line 338 "ChapelLocale.chpl"
  _construct_locale(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, T, _ln, _fn);
#line 338 "ChapelLocale.chpl"
  return meme;
#line 338 "ChapelLocale.chpl"
}

#line 338 "ChapelLocale.chpl"
/* ChapelLocale.chpl:356 */
#line 338 "ChapelLocale.chpl"
static locale localeIDtoLocale(AbstractRootLocale this5, chpl_localeID_t* const id2, int64_t _ln, int32_t _fn) {
#line 338 "ChapelLocale.chpl"
  string local__str_literal_32;
#line 338 "ChapelLocale.chpl"
  locale call_tmp = NULL;
#line 357 "ChapelLocale.chpl"
  local__str_literal_32 = _str_literal_32;
#line 357 "ChapelLocale.chpl"
  halt(&local__str_literal_32, _ln, _fn);
#line 358 "ChapelLocale.chpl"
  call_tmp = ((locale)(this5));
#line 356 "ChapelLocale.chpl"
  return call_tmp;
#line 356 "ChapelLocale.chpl"
}

#line 356 "ChapelLocale.chpl"
/* ChapelLocale.chpl:413 */
#line 356 "ChapelLocale.chpl"
static localesSignal _construct_localesSignal(atomicflag* const s, localesSignal meme, int64_t _ln, int32_t _fn) {
#line 356 "ChapelLocale.chpl"
  localesSignal this5 = NULL;
#line 356 "ChapelLocale.chpl"
  object T = NULL;
#line 413 "ChapelLocale.chpl"
  this5 = meme;
#line 413 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(413), INT64(0));
#line 413 "ChapelLocale.chpl"
  T = &((this5)->super);
#line 413 "ChapelLocale.chpl"
  _construct_object(T);
#line 414 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(414), INT64(0));
#line 414 "ChapelLocale.chpl"
  (this5)->s = *(s);
#line 413 "ChapelLocale.chpl"
  return this5;
#line 413 "ChapelLocale.chpl"
}

#line 413 "ChapelLocale.chpl"
/* ChapelLocale.chpl:413 */
#line 413 "ChapelLocale.chpl"
static void chpl__auto_destroy_localesSignal(localesSignal this5, int64_t _ln, int32_t _fn) {
#line 413 "ChapelLocale.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 413 "ChapelLocale.chpl"
  _ref_atomic_flag call_tmp = NULL;
#line 414 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(414), INT64(0));
#line 414 "ChapelLocale.chpl"
  _field_destructor_tmp_ = &((this5)->s);
#line 414 "ChapelLocale.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(414), INT64(0));
#line 414 "ChapelLocale.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 414 "ChapelLocale.chpl"
  atomic_destroy_flag(call_tmp);
#line 413 "ChapelLocale.chpl"
  return;
#line 413 "ChapelLocale.chpl"
}

#line 413 "ChapelLocale.chpl"
/* ChapelLocale.chpl:417 */
#line 413 "ChapelLocale.chpl"
static void _construct_localesBarrier(localesBarrier* const meme, _ref_localesBarrier _retArg, int64_t _ln, int32_t _fn) {
#line 413 "ChapelLocale.chpl"
  localesBarrier this5;
#line 417 "ChapelLocale.chpl"
  *(_retArg) = *(meme);
#line 417 "ChapelLocale.chpl"
  return;
#line 417 "ChapelLocale.chpl"
}

#line 417 "ChapelLocale.chpl"
/* ChapelLocale.chpl:418 */
#line 417 "ChapelLocale.chpl"
static void wait5(_ref_localesBarrier this5, int64_t locIdx, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t _ln, int32_t _fn) {
#line 417 "ChapelLocale.chpl"
  memory_order local_memory_order_relaxed;
#line 417 "ChapelLocale.chpl"
  string local__str_literal_974;
#line 417 "ChapelLocale.chpl"
  int64_t local_numLocales;
#line 417 "ChapelLocale.chpl"
  memory_order local_memory_order_seq_cst;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp;
#line 417 "ChapelLocale.chpl"
  chpl_bool T;
#line 417 "ChapelLocale.chpl"
  memory_order default_argorder;
#line 417 "ChapelLocale.chpl"
  int64_t count;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this = NULL;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this6 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp2;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this7 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t sum;
#line 417 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t call_tmp3 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t coerce_tmp2;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp4;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this8 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp5;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp3 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp6;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this9 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t sum2;
#line 417 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t call_tmp7 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t coerce_tmp4;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp8;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp9;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this10 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp10;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp5 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp11;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp12;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp13;
#line 417 "ChapelLocale.chpl"
  int64_t _ic__F1_high;
#line 417 "ChapelLocale.chpl"
  int64_t _ic__F2_stride;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp14;
#line 417 "ChapelLocale.chpl"
  int64_t i;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this11 = NULL;
#line 417 "ChapelLocale.chpl"
  _ddata_localesSignal coerce_tmp6 = NULL;
#line 417 "ChapelLocale.chpl"
  _ref_localesSignal call_tmp15 = NULL;
#line 417 "ChapelLocale.chpl"
  localesSignal coerce_tmp7 = NULL;
#line 417 "ChapelLocale.chpl"
  object call_tmp16 = NULL;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp17;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp18;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp19;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret2 = NULL;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _ic__F0_this2 = NULL;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this12 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp20;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp8 = NULL;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this13 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t sum3;
#line 417 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t call_tmp21 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t coerce_tmp9;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp22;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this14 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp23;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp10 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp24;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this15 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t sum4;
#line 417 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t call_tmp25 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t coerce_tmp11;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp26;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp27;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this16 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp28;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp12 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp29;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp30;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp31;
#line 417 "ChapelLocale.chpl"
  int64_t _ic__F1_high2;
#line 417 "ChapelLocale.chpl"
  int64_t _ic__F2_stride2;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp32;
#line 417 "ChapelLocale.chpl"
  int64_t i2;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this17 = NULL;
#line 417 "ChapelLocale.chpl"
  _ddata_localesSignal coerce_tmp13 = NULL;
#line 417 "ChapelLocale.chpl"
  _ref_localesSignal call_tmp33 = NULL;
#line 417 "ChapelLocale.chpl"
  localesSignal coerce_tmp14 = NULL;
#line 417 "ChapelLocale.chpl"
  _ref_atomicflag call_tmp34 = NULL;
#line 417 "ChapelLocale.chpl"
  memory_order default_argorder2;
#line 417 "ChapelLocale.chpl"
  _ref_atomic_flag call_tmp35 = NULL;
#line 417 "ChapelLocale.chpl"
  localesSignal f = NULL;
#line 417 "ChapelLocale.chpl"
  localesSignal this18 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp36;
#line 417 "ChapelLocale.chpl"
  c_void_ptr cast_tmp;
#line 417 "ChapelLocale.chpl"
  atomicflag _init_class_tmp_;
#line 417 "ChapelLocale.chpl"
  atomicflag this19;
#line 417 "ChapelLocale.chpl"
  atomic_flag ret3;
#line 417 "ChapelLocale.chpl"
  atomic_flag type_tmp;
#line 417 "ChapelLocale.chpl"
  _ref_atomic_flag _ref_tmp_ = NULL;
#line 417 "ChapelLocale.chpl"
  atomicflag wrap_call_tmp;
#line 417 "ChapelLocale.chpl"
  localesSignal wrap_call_tmp2 = NULL;
#line 417 "ChapelLocale.chpl"
  _tuple_1_star_int64_t i3;
#line 417 "ChapelLocale.chpl"
  _tuple_1_star_int64_t this20;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp37 = NULL;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret4 = NULL;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp38;
#line 417 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp15 = NULL;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp39;
#line 417 "ChapelLocale.chpl"
  string call_tmp40;
#line 417 "ChapelLocale.chpl"
  string _autoCopy_tmp_;
#line 417 "ChapelLocale.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 417 "ChapelLocale.chpl"
  string call_tmp41;
#line 417 "ChapelLocale.chpl"
  string _autoCopy_tmp_2;
#line 417 "ChapelLocale.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 417 "ChapelLocale.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 417 "ChapelLocale.chpl"
  _ref_string _ref_tmp_3 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t sum5;
#line 417 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t call_tmp42 = NULL;
#line 417 "ChapelLocale.chpl"
  int64_t coerce_tmp16;
#line 417 "ChapelLocale.chpl"
  int64_t coerce_tmp17;
#line 417 "ChapelLocale.chpl"
  int64_t call_tmp43;
#line 417 "ChapelLocale.chpl"
  _ddata_localesSignal coerce_tmp18 = NULL;
#line 417 "ChapelLocale.chpl"
  _ref_localesSignal call_tmp44 = NULL;
#line 417 "ChapelLocale.chpl"
  _ref_atomicflag call_tmp45 = NULL;
#line 417 "ChapelLocale.chpl"
  memory_order default_argorder3;
#line 417 "ChapelLocale.chpl"
  chpl_bool T2;
#line 417 "ChapelLocale.chpl"
  _ref_atomic_flag call_tmp46 = NULL;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp47;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp48;
#line 417 "ChapelLocale.chpl"
  _ref_atomic_flag call_tmp49 = NULL;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp50;
#line 417 "ChapelLocale.chpl"
  chpl_bool call_tmp51;
#line 417 "ChapelLocale.chpl"
  localesSignal delete_tmp = NULL;
#line 417 "ChapelLocale.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 417 "ChapelLocale.chpl"
  _ref_atomic_flag call_tmp52 = NULL;
#line 417 "ChapelLocale.chpl"
  c_void_ptr call_tmp53;
#line 445 "ChapelLocale.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 443 "ChapelLocale.chpl"
  local__str_literal_974 = _str_literal_974;
#line 432 "ChapelLocale.chpl"
  local_numLocales = numLocales;
#line 428 "ChapelLocale.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 419 "ChapelLocale.chpl"
  call_tmp = (locIdx == INT64(0));
#line 419 "ChapelLocale.chpl"
  if (call_tmp) /* ZLINE: 421 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 419 "ChapelLocale.chpl"
  {
#line 421 "ChapelLocale.chpl"
    T = UINT8(true);
#line 430 "ChapelLocale.chpl"
    ret = flags;
#line 430 "ChapelLocale.chpl"
    _ic__F0_this = ret;
#line 430 "ChapelLocale.chpl"
    this6 = ret;
#line 430 "ChapelLocale.chpl"
    this7 = ret;
#line 430 "ChapelLocale.chpl"
    chpl_check_nil(this7, INT64(430), INT64(0));
#line 430 "ChapelLocale.chpl"
    call_tmp3 = &((this7)->blk);
#line 430 "ChapelLocale.chpl"
    coerce_tmp2 = *(*(call_tmp3) + INT64(0));
#line 430 "ChapelLocale.chpl"
    this8 = ret;
#line 430 "ChapelLocale.chpl"
    this9 = ret;
#line 430 "ChapelLocale.chpl"
    chpl_check_nil(this9, INT64(430), INT64(0));
#line 430 "ChapelLocale.chpl"
    call_tmp7 = &((this9)->blk);
#line 430 "ChapelLocale.chpl"
    coerce_tmp4 = *(*(call_tmp7) + INT64(0));
#line 430 "ChapelLocale.chpl"
    this10 = ret;
#line 432 "ChapelLocale.chpl"
    call_tmp18 = (local_numLocales - INT64(1));
#line 421 "ChapelLocale.chpl"
    while (T) {
#line 428 "ChapelLocale.chpl"
      default_argorder = local_memory_order_seq_cst;
#line 428 "ChapelLocale.chpl"
      atomic_fence(default_argorder, _ln, _fn);
#line 429 "ChapelLocale.chpl"
      count = INT64(0);
#line 430 "ChapelLocale.chpl"
      chpl_check_nil(this6, INT64(430), INT64(0));
#line 430 "ChapelLocale.chpl"
      coerce_tmp = (this6)->dom;
#line 430 "ChapelLocale.chpl"
      chpl_check_nil(coerce_tmp, INT64(430), INT64(0));
#line 430 "ChapelLocale.chpl"
      call_tmp2 = dsiLow(coerce_tmp, _ln, _fn);
#line 430 "ChapelLocale.chpl"
      sum = INT64(0);
#line 430 "ChapelLocale.chpl"
      call_tmp4 = (call_tmp2 * coerce_tmp2);
#line 430 "ChapelLocale.chpl"
      sum += call_tmp4;
#line 430 "ChapelLocale.chpl"
      chpl_check_nil(this8, INT64(430), INT64(0));
#line 430 "ChapelLocale.chpl"
      coerce_tmp3 = (this8)->dom;
#line 430 "ChapelLocale.chpl"
      chpl_check_nil(coerce_tmp3, INT64(430), INT64(0));
#line 430 "ChapelLocale.chpl"
      call_tmp5 = dsiLow(coerce_tmp3, _ln, _fn);
#line 430 "ChapelLocale.chpl"
      call_tmp6 = (call_tmp5 + INT64(1));
#line 430 "ChapelLocale.chpl"
      sum2 = INT64(0);
#line 430 "ChapelLocale.chpl"
      call_tmp8 = (call_tmp6 * coerce_tmp4);
#line 430 "ChapelLocale.chpl"
      sum2 += call_tmp8;
#line 430 "ChapelLocale.chpl"
      call_tmp9 = (sum2 - sum);
#line 430 "ChapelLocale.chpl"
      chpl_check_nil(this10, INT64(430), INT64(0));
#line 430 "ChapelLocale.chpl"
      coerce_tmp5 = (this10)->dom;
#line 430 "ChapelLocale.chpl"
      chpl_check_nil(coerce_tmp5, INT64(430), INT64(0));
#line 430 "ChapelLocale.chpl"
      call_tmp10 = dsiNumIndices(coerce_tmp5, _ln, _fn);
#line 430 "ChapelLocale.chpl"
      call_tmp11 = (call_tmp10 - INT64(1));
#line 430 "ChapelLocale.chpl"
      call_tmp12 = (call_tmp11 * call_tmp9);
#line 430 "ChapelLocale.chpl"
      call_tmp13 = (sum + call_tmp12);
#line 430 "ChapelLocale.chpl"
      _ic__F1_high = call_tmp13;
#line 430 "ChapelLocale.chpl"
      _ic__F2_stride = call_tmp9;
#line 430 "ChapelLocale.chpl"
      call_tmp14 = (call_tmp9 == INT64(0));
#line 430 "ChapelLocale.chpl"
      if (call_tmp14) /* ZLINE: 430 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 430 "ChapelLocale.chpl"
      {
#line 430 "ChapelLocale.chpl"
        chpl_error("the step argument of the 'by' operator is zero", _ln, _fn);
#line 430 "ChapelLocale.chpl"
      }
#line 430 "ChapelLocale.chpl"
      chpl_checkIfRangeIterWillOverflow(sum, call_tmp13, call_tmp9, sum, call_tmp13, UINT8(true), _ln, _fn);
#line 430 "ChapelLocale.chpl"
      this11 = _ic__F0_this;
#line 430 "ChapelLocale.chpl"
      chpl_check_nil(this11, INT64(430), INT64(0));
#line 430 "ChapelLocale.chpl"
      coerce_tmp6 = (this11)->shiftedData;
#line 430 "ChapelLocale.chpl"
      for (i = sum; ((i <= _ic__F1_high)); i += _ic__F2_stride) {
#line 430 "ChapelLocale.chpl"
        call_tmp15 = (coerce_tmp6 + i);
#line 431 "ChapelLocale.chpl"
        coerce_tmp7 = *(call_tmp15);
#line 431 "ChapelLocale.chpl"
        call_tmp16 = ((object)(coerce_tmp7));
#line 431 "ChapelLocale.chpl"
        call_tmp17 = (call_tmp16 != nil);
#line 431 "ChapelLocale.chpl"
        if (call_tmp17) /* ZLINE: 431 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 431 "ChapelLocale.chpl"
        {
#line 431 "ChapelLocale.chpl"
          count += INT64(1);
#line 431 "ChapelLocale.chpl"
        }
#line 431 "ChapelLocale.chpl"
      }
#line 432 "ChapelLocale.chpl"
      call_tmp19 = (count == call_tmp18);
#line 432 "ChapelLocale.chpl"
      if (call_tmp19) /* ZLINE: 432 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 432 "ChapelLocale.chpl"
      {
#line 432 "ChapelLocale.chpl"
        goto _breakLabel;
#line 432 "ChapelLocale.chpl"
      }
#line 435 "ChapelLocale.chpl"
      chpl_task_yield();
#line 421 "ChapelLocale.chpl"
      T = UINT8(true);
#line 421 "ChapelLocale.chpl"
    }
#line 421 "ChapelLocale.chpl"
    _breakLabel:;
#line 438 "ChapelLocale.chpl"
    ret2 = flags;
#line 438 "ChapelLocale.chpl"
    _ic__F0_this2 = ret2;
#line 438 "ChapelLocale.chpl"
    this12 = ret2;
#line 438 "ChapelLocale.chpl"
    chpl_check_nil(this12, INT64(438), INT64(0));
#line 438 "ChapelLocale.chpl"
    coerce_tmp8 = (this12)->dom;
#line 438 "ChapelLocale.chpl"
    chpl_check_nil(coerce_tmp8, INT64(438), INT64(0));
#line 438 "ChapelLocale.chpl"
    call_tmp20 = dsiLow(coerce_tmp8, _ln, _fn);
#line 438 "ChapelLocale.chpl"
    this13 = ret2;
#line 438 "ChapelLocale.chpl"
    sum3 = INT64(0);
#line 438 "ChapelLocale.chpl"
    chpl_check_nil(this13, INT64(438), INT64(0));
#line 438 "ChapelLocale.chpl"
    call_tmp21 = &((this13)->blk);
#line 438 "ChapelLocale.chpl"
    coerce_tmp9 = *(*(call_tmp21) + INT64(0));
#line 438 "ChapelLocale.chpl"
    call_tmp22 = (call_tmp20 * coerce_tmp9);
#line 438 "ChapelLocale.chpl"
    sum3 += call_tmp22;
#line 438 "ChapelLocale.chpl"
    this14 = ret2;
#line 438 "ChapelLocale.chpl"
    chpl_check_nil(this14, INT64(438), INT64(0));
#line 438 "ChapelLocale.chpl"
    coerce_tmp10 = (this14)->dom;
#line 438 "ChapelLocale.chpl"
    chpl_check_nil(coerce_tmp10, INT64(438), INT64(0));
#line 438 "ChapelLocale.chpl"
    call_tmp23 = dsiLow(coerce_tmp10, _ln, _fn);
#line 438 "ChapelLocale.chpl"
    call_tmp24 = (call_tmp23 + INT64(1));
#line 438 "ChapelLocale.chpl"
    this15 = ret2;
#line 438 "ChapelLocale.chpl"
    sum4 = INT64(0);
#line 438 "ChapelLocale.chpl"
    chpl_check_nil(this15, INT64(438), INT64(0));
#line 438 "ChapelLocale.chpl"
    call_tmp25 = &((this15)->blk);
#line 438 "ChapelLocale.chpl"
    coerce_tmp11 = *(*(call_tmp25) + INT64(0));
#line 438 "ChapelLocale.chpl"
    call_tmp26 = (call_tmp24 * coerce_tmp11);
#line 438 "ChapelLocale.chpl"
    sum4 += call_tmp26;
#line 438 "ChapelLocale.chpl"
    call_tmp27 = (sum4 - sum3);
#line 438 "ChapelLocale.chpl"
    this16 = ret2;
#line 438 "ChapelLocale.chpl"
    chpl_check_nil(this16, INT64(438), INT64(0));
#line 438 "ChapelLocale.chpl"
    coerce_tmp12 = (this16)->dom;
#line 438 "ChapelLocale.chpl"
    chpl_check_nil(coerce_tmp12, INT64(438), INT64(0));
#line 438 "ChapelLocale.chpl"
    call_tmp28 = dsiNumIndices(coerce_tmp12, _ln, _fn);
#line 438 "ChapelLocale.chpl"
    call_tmp29 = (call_tmp28 - INT64(1));
#line 438 "ChapelLocale.chpl"
    call_tmp30 = (call_tmp29 * call_tmp27);
#line 438 "ChapelLocale.chpl"
    call_tmp31 = (sum3 + call_tmp30);
#line 438 "ChapelLocale.chpl"
    _ic__F1_high2 = call_tmp31;
#line 438 "ChapelLocale.chpl"
    _ic__F2_stride2 = call_tmp27;
#line 438 "ChapelLocale.chpl"
    call_tmp32 = (call_tmp27 == INT64(0));
#line 438 "ChapelLocale.chpl"
    if (call_tmp32) /* ZLINE: 438 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 438 "ChapelLocale.chpl"
    {
#line 438 "ChapelLocale.chpl"
      chpl_error("the step argument of the 'by' operator is zero", _ln, _fn);
#line 438 "ChapelLocale.chpl"
    }
#line 438 "ChapelLocale.chpl"
    chpl_checkIfRangeIterWillOverflow(sum3, call_tmp31, call_tmp27, sum3, call_tmp31, UINT8(true), _ln, _fn);
#line 438 "ChapelLocale.chpl"
    for (i2 = sum3; ((i2 <= _ic__F1_high2)); i2 += _ic__F2_stride2) {
#line 438 "ChapelLocale.chpl"
      this17 = _ic__F0_this2;
#line 438 "ChapelLocale.chpl"
      chpl_check_nil(this17, INT64(438), INT64(0));
#line 438 "ChapelLocale.chpl"
      coerce_tmp13 = (this17)->shiftedData;
#line 438 "ChapelLocale.chpl"
      call_tmp33 = (coerce_tmp13 + i2);
#line 439 "ChapelLocale.chpl"
      coerce_tmp14 = *(call_tmp33);
#line 439 "ChapelLocale.chpl"
      chpl_check_nil(coerce_tmp14, INT64(439), INT64(0));
#line 439 "ChapelLocale.chpl"
      call_tmp34 = &((coerce_tmp14)->s);
#line 439 "ChapelLocale.chpl"
      default_argorder2 = local_memory_order_seq_cst;
#line 439 "ChapelLocale.chpl"
      chpl_check_nil(call_tmp34, INT64(439), INT64(0));
#line 439 "ChapelLocale.chpl"
      call_tmp35 = &((call_tmp34)->_v);
#line 439 "ChapelLocale.chpl"
      atomic_flag_test_and_set_explicit(call_tmp35, default_argorder2);
#line 439 "ChapelLocale.chpl"
    }
#line 439 "ChapelLocale.chpl"
  } else /* ZLINE: 441 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 439 "ChapelLocale.chpl"
  {
#line 441 "ChapelLocale.chpl"
    call_tmp36 = sizeof(chpl_localesSignal_object);
#line 441 "ChapelLocale.chpl"
    cast_tmp = chpl_here_alloc(call_tmp36, INT16(22), _ln, _fn);
#line 441 "ChapelLocale.chpl"
    this18 = ((localesSignal)(cast_tmp));
#line 441 "ChapelLocale.chpl"
    ((object)(this18))->chpl__cid = chpl__cid_localesSignal;
#line 441 "ChapelLocale.chpl"
    chpl_check_nil(this18, INT64(441), INT64(0));
#line 441 "ChapelLocale.chpl"
    (this18)->s = _init_class_tmp_;
#line 441 "ChapelLocale.chpl"
    ret3 = type_tmp;
#line 441 "ChapelLocale.chpl"
    _ref_tmp_ = &ret3;
#line 441 "ChapelLocale.chpl"
    atomic_init_flag(_ref_tmp_, UINT8(false));
#line 441 "ChapelLocale.chpl"
    (&this19)->_v = ret3;
#line 441 "ChapelLocale.chpl"
    wrap_call_tmp = _construct_atomicflag(ret3, &this19, _ln, _fn);
#line 441 "ChapelLocale.chpl"
    chpl_check_nil(this18, INT64(441), INT64(0));
#line 441 "ChapelLocale.chpl"
    (this18)->s = wrap_call_tmp;
#line 441 "ChapelLocale.chpl"
    wrap_call_tmp2 = _construct_localesSignal(&wrap_call_tmp, this18, _ln, _fn);
#line 441 "ChapelLocale.chpl"
    f = wrap_call_tmp2;
#line 443 "ChapelLocale.chpl"
    *(this20 + INT64(0)) = locIdx;
#line 443 "ChapelLocale.chpl"
    *(i3 + INT64(0)) = *(this20 + INT64(0));
#line 443 "ChapelLocale.chpl"
    ret4 = flags;
#line 443 "ChapelLocale.chpl"
    call_tmp37 = ret4;
#line 443 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp37, INT64(443), INT64(0));
#line 443 "ChapelLocale.chpl"
    coerce_tmp15 = (call_tmp37)->dom;
#line 443 "ChapelLocale.chpl"
    chpl_check_nil(coerce_tmp15, INT64(443), INT64(0));
#line 443 "ChapelLocale.chpl"
    call_tmp38 = dsiMember(coerce_tmp15, &this20, _ln, _fn);
#line 443 "ChapelLocale.chpl"
    call_tmp39 = (! call_tmp38);
#line 443 "ChapelLocale.chpl"
    if (call_tmp39) /* ZLINE: 443 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 443 "ChapelLocale.chpl"
    {
#line 443 "ChapelLocale.chpl"
      ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 443 "ChapelLocale.chpl"
      _stringify_index(&this20, ret_to_arg_ref_tmp_, _ln, _fn);
#line 443 "ChapelLocale.chpl"
      call_tmp40 = _autoCopy_tmp_;
#line 443 "ChapelLocale.chpl"
      ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
#line 443 "ChapelLocale.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 443 "ChapelLocale.chpl"
      call_tmp41 = _autoCopy_tmp_2;
#line 443 "ChapelLocale.chpl"
      halt(&_autoCopy_tmp_2, _ln, _fn);
#line 443 "ChapelLocale.chpl"
      _ref_tmp_2 = &call_tmp40;
#line 443 "ChapelLocale.chpl"
      chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 443 "ChapelLocale.chpl"
      _ref_tmp_3 = &call_tmp41;
#line 443 "ChapelLocale.chpl"
      chpl___TILDE_string(_ref_tmp_3, _ln, _fn);
#line 443 "ChapelLocale.chpl"
    }
#line 443 "ChapelLocale.chpl"
    sum5 = INT64(0);
#line 443 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp37, INT64(443), INT64(0));
#line 443 "ChapelLocale.chpl"
    call_tmp42 = &((call_tmp37)->blk);
#line 443 "ChapelLocale.chpl"
    coerce_tmp16 = *(i3 + INT64(0));
#line 443 "ChapelLocale.chpl"
    coerce_tmp17 = *(*(call_tmp42) + INT64(0));
#line 443 "ChapelLocale.chpl"
    call_tmp43 = (coerce_tmp16 * coerce_tmp17);
#line 443 "ChapelLocale.chpl"
    sum5 += call_tmp43;
#line 443 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp37, INT64(443), INT64(0));
#line 443 "ChapelLocale.chpl"
    coerce_tmp18 = (call_tmp37)->shiftedData;
#line 443 "ChapelLocale.chpl"
    call_tmp44 = (coerce_tmp18 + sum5);
#line 443 "ChapelLocale.chpl"
    *(call_tmp44) = wrap_call_tmp2;
#line 445 "ChapelLocale.chpl"
    chpl_check_nil(f, INT64(445), INT64(0));
#line 445 "ChapelLocale.chpl"
    call_tmp45 = &((f)->s);
#line 445 "ChapelLocale.chpl"
    default_argorder3 = local_memory_order_seq_cst;
#line 445 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp45, INT64(445), INT64(0));
#line 445 "ChapelLocale.chpl"
    call_tmp46 = &((call_tmp45)->_v);
#line 445 "ChapelLocale.chpl"
    call_tmp47 = atomic_load_explicit_flag(call_tmp46, local_memory_order_relaxed);
#line 445 "ChapelLocale.chpl"
    call_tmp48 = (call_tmp47 != UINT8(true));
#line 445 "ChapelLocale.chpl"
    T2 = call_tmp48;
#line 445 "ChapelLocale.chpl"
    while (T2) {
#line 445 "ChapelLocale.chpl"
      chpl_task_yield();
#line 445 "ChapelLocale.chpl"
      chpl_check_nil(call_tmp45, INT64(445), INT64(0));
#line 445 "ChapelLocale.chpl"
      call_tmp49 = &((call_tmp45)->_v);
#line 445 "ChapelLocale.chpl"
      call_tmp50 = atomic_load_explicit_flag(call_tmp49, local_memory_order_relaxed);
#line 445 "ChapelLocale.chpl"
      call_tmp51 = (call_tmp50 != UINT8(true));
#line 445 "ChapelLocale.chpl"
      T2 = call_tmp51;
#line 445 "ChapelLocale.chpl"
    }
#line 445 "ChapelLocale.chpl"
    atomic_thread_fence(default_argorder3);
#line 447 "ChapelLocale.chpl"
    delete_tmp = f;
#line 447 "ChapelLocale.chpl"
    chpl_check_nil(delete_tmp, INT64(447), INT64(0));
#line 447 "ChapelLocale.chpl"
    _field_destructor_tmp_ = &((delete_tmp)->s);
#line 447 "ChapelLocale.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(447), INT64(0));
#line 447 "ChapelLocale.chpl"
    call_tmp52 = &((_field_destructor_tmp_)->_v);
#line 447 "ChapelLocale.chpl"
    atomic_destroy_flag(call_tmp52);
#line 447 "ChapelLocale.chpl"
    call_tmp53 = ((void*)(delete_tmp));
#line 447 "ChapelLocale.chpl"
    chpl_here_free(call_tmp53, _ln, _fn);
#line 447 "ChapelLocale.chpl"
  }
#line 418 "ChapelLocale.chpl"
  return;
#line 418 "ChapelLocale.chpl"
}

#line 418 "ChapelLocale.chpl"
/* ChapelLocale.chpl:461 */
#line 418 "ChapelLocale.chpl"
static void chpl_init_rootLocale(int64_t _ln, int32_t _fn) {
#line 418 "ChapelLocale.chpl"
  RootLocale call_tmp = NULL;
#line 418 "ChapelLocale.chpl"
  locale call_tmp2 = NULL;
#line 418 "ChapelLocale.chpl"
  RootLocale _formal_type_tmp_ = NULL;
#line 418 "ChapelLocale.chpl"
  RootLocale T = NULL;
#line 418 "ChapelLocale.chpl"
  object call_tmp3 = NULL;
#line 418 "ChapelLocale.chpl"
  chpl_bool call_tmp4;
#line 418 "ChapelLocale.chpl"
  RootLocale call_tmp5 = NULL;
#line 418 "ChapelLocale.chpl"
  RootLocale call_tmp6 = NULL;
#line 462 "ChapelLocale.chpl"
  call_tmp = RootLocale2(_ln, _fn);
#line 462 "ChapelLocale.chpl"
  call_tmp2 = ((locale)(call_tmp));
#line 462 "ChapelLocale.chpl"
  origRootLocale = call_tmp2;
#line 463 "ChapelLocale.chpl"
  call_tmp3 = ((object)(origRootLocale));
#line 463 "ChapelLocale.chpl"
  call_tmp4 = (call_tmp3 != nil);
#line 463 "ChapelLocale.chpl"
  if (call_tmp4) /* ZLINE: 463 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 463 "ChapelLocale.chpl"
  {
#line 463 "ChapelLocale.chpl"
    call_tmp5 = ((((object)(origRootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(origRootLocale))):(((RootLocale)(NULL)));
#line 463 "ChapelLocale.chpl"
    T = call_tmp5;
#line 463 "ChapelLocale.chpl"
  } else /* ZLINE: 463 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 463 "ChapelLocale.chpl"
  {
#line 463 "ChapelLocale.chpl"
    call_tmp6 = ((RootLocale)(nil));
#line 463 "ChapelLocale.chpl"
    T = call_tmp6;
#line 463 "ChapelLocale.chpl"
  }
#line 463 "ChapelLocale.chpl"
  chpl_check_nil(T, INT64(463), INT64(0));
#line 463 "ChapelLocale.chpl"
  init2(T, _ln, _fn);
#line 461 "ChapelLocale.chpl"
  return;
#line 461 "ChapelLocale.chpl"
}

#line 461 "ChapelLocale.chpl"
/* ChapelLocale.chpl:471 */
#line 461 "ChapelLocale.chpl"
static void chpl_rootLocaleInitPrivate(int64_t locIdx, int64_t _ln, int32_t _fn) {
#line 461 "ChapelLocale.chpl"
  int64_t local_numLocales;
#line 461 "ChapelLocale.chpl"
  chpl_bool call_tmp;
#line 461 "ChapelLocale.chpl"
  RootLocale newRootLocale = NULL;
#line 461 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F origLocales = NULL;
#line 461 "ChapelLocale.chpl"
  RootLocale _formal_type_tmp_ = NULL;
#line 461 "ChapelLocale.chpl"
  RootLocale T = NULL;
#line 461 "ChapelLocale.chpl"
  object call_tmp2 = NULL;
#line 461 "ChapelLocale.chpl"
  chpl_bool call_tmp3;
#line 461 "ChapelLocale.chpl"
  RootLocale call_tmp4 = NULL;
#line 461 "ChapelLocale.chpl"
  RootLocale call_tmp5 = NULL;
#line 461 "ChapelLocale.chpl"
  _ddata_locale origRL = NULL;
#line 461 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp6 = NULL;
#line 461 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 461 "ChapelLocale.chpl"
  _ddata_locale coerce_tmp = NULL;
#line 461 "ChapelLocale.chpl"
  _ddata_locale newRL = NULL;
#line 461 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp7 = NULL;
#line 461 "ChapelLocale.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 461 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp8 = NULL;
#line 461 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret2 = NULL;
#line 461 "ChapelLocale.chpl"
  _ddata_locale coerce_tmp2 = NULL;
#line 461 "ChapelLocale.chpl"
  _ref_locale call_tmp9 = NULL;
#line 461 "ChapelLocale.chpl"
  _ref_locale call_tmp10 = NULL;
#line 461 "ChapelLocale.chpl"
  uint64_t call_tmp11;
#line 461 "ChapelLocale.chpl"
  locale call_tmp12 = NULL;
#line 461 "ChapelLocale.chpl"
  chpl_bool call_tmp13;
#line 461 "ChapelLocale.chpl"
  RootLocale _formal_type_tmp_2 = NULL;
#line 461 "ChapelLocale.chpl"
  RootLocale T2 = NULL;
#line 461 "ChapelLocale.chpl"
  object call_tmp14 = NULL;
#line 461 "ChapelLocale.chpl"
  chpl_bool call_tmp15;
#line 461 "ChapelLocale.chpl"
  RootLocale call_tmp16 = NULL;
#line 461 "ChapelLocale.chpl"
  RootLocale call_tmp17 = NULL;
#line 493 "ChapelLocale.chpl"
  local_numLocales = numLocales;
#line 475 "ChapelLocale.chpl"
  rootLocale = origRootLocale;
#line 476 "ChapelLocale.chpl"
  call_tmp = (locIdx != INT64(0));
#line 476 "ChapelLocale.chpl"
  if (call_tmp) /* ZLINE: 478 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 476 "ChapelLocale.chpl"
  {
#line 478 "ChapelLocale.chpl"
    newRootLocale = RootLocale2(_ln, _fn);
#line 483 "ChapelLocale.chpl"
    call_tmp2 = ((object)(origRootLocale));
#line 483 "ChapelLocale.chpl"
    call_tmp3 = (call_tmp2 != nil);
#line 483 "ChapelLocale.chpl"
    if (call_tmp3) /* ZLINE: 483 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 483 "ChapelLocale.chpl"
    {
#line 483 "ChapelLocale.chpl"
      call_tmp4 = ((((object)(origRootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(origRootLocale))):(((RootLocale)(NULL)));
#line 483 "ChapelLocale.chpl"
      T = call_tmp4;
#line 483 "ChapelLocale.chpl"
    } else /* ZLINE: 483 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 483 "ChapelLocale.chpl"
    {
#line 483 "ChapelLocale.chpl"
      call_tmp5 = ((RootLocale)(nil));
#line 483 "ChapelLocale.chpl"
      T = call_tmp5;
#line 483 "ChapelLocale.chpl"
    }
#line 483 "ChapelLocale.chpl"
    chpl_check_nil(T, INT64(483), INT64(0));
#line 483 "ChapelLocale.chpl"
    origLocales = getDefaultLocaleArray2(T, _ln, _fn);
#line 484 "ChapelLocale.chpl"
    ret = origLocales;
#line 484 "ChapelLocale.chpl"
    call_tmp6 = ret;
#line 484 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp6, INT64(484), INT64(0));
#line 484 "ChapelLocale.chpl"
    coerce_tmp = (call_tmp6)->shiftedData;
#line 484 "ChapelLocale.chpl"
    origRL = coerce_tmp;
#line 485 "ChapelLocale.chpl"
    ret_to_arg_ref_tmp_ = &call_tmp7;
#line 485 "ChapelLocale.chpl"
    chpl_check_nil(newRootLocale, INT64(485), INT64(0));
#line 485 "ChapelLocale.chpl"
    getDefaultLocaleArray(newRootLocale, ret_to_arg_ref_tmp_, _ln, _fn);
#line 485 "ChapelLocale.chpl"
    ret2 = call_tmp7;
#line 485 "ChapelLocale.chpl"
    call_tmp8 = ret2;
#line 485 "ChapelLocale.chpl"
    chpl_check_nil(call_tmp8, INT64(485), INT64(0));
#line 485 "ChapelLocale.chpl"
    coerce_tmp2 = (call_tmp8)->shiftedData;
#line 485 "ChapelLocale.chpl"
    newRL = coerce_tmp2;
#line 490 "ChapelLocale.chpl"
    call_tmp9 = (newRL + INT64(0));
#line 492 "ChapelLocale.chpl"
    call_tmp10 = (origRL + INT64(0));
#line 493 "ChapelLocale.chpl"
    call_tmp11 = ((uint64_t)(local_numLocales));
#line 489 "ChapelLocale.chpl"
    chpl_gen_comm_get(((void*)(call_tmp9)), INT64(0), call_tmp10, (sizeof(locale) * call_tmp11), -1, _ln, _fn);
#line 495 "ChapelLocale.chpl"
    call_tmp12 = ((locale)(newRootLocale));
#line 495 "ChapelLocale.chpl"
    rootLocale = call_tmp12;
#line 485 "ChapelLocale.chpl"
    chpl__autoDestroy6(call_tmp7, _ln, _fn);
#line 485 "ChapelLocale.chpl"
  }
#line 497 "ChapelLocale.chpl"
  call_tmp13 = (locIdx != INT64(0));
#line 497 "ChapelLocale.chpl"
  if (call_tmp13) /* ZLINE: 500 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 497 "ChapelLocale.chpl"
  {
#line 501 "ChapelLocale.chpl"
    call_tmp14 = ((object)(rootLocale));
#line 501 "ChapelLocale.chpl"
    call_tmp15 = (call_tmp14 != nil);
#line 501 "ChapelLocale.chpl"
    if (call_tmp15) /* ZLINE: 501 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 501 "ChapelLocale.chpl"
    {
#line 501 "ChapelLocale.chpl"
      call_tmp16 = ((((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(rootLocale))):(((RootLocale)(NULL)));
#line 501 "ChapelLocale.chpl"
      T2 = call_tmp16;
#line 501 "ChapelLocale.chpl"
    } else /* ZLINE: 501 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 501 "ChapelLocale.chpl"
    {
#line 501 "ChapelLocale.chpl"
      call_tmp17 = ((RootLocale)(nil));
#line 501 "ChapelLocale.chpl"
      T2 = call_tmp17;
#line 501 "ChapelLocale.chpl"
    }
#line 500 "ChapelLocale.chpl"
    chpl_check_nil(T2, INT64(500), INT64(0));
#line 500 "ChapelLocale.chpl"
    Locales = getDefaultLocaleArray2(T2, _ln, _fn);
#line 500 "ChapelLocale.chpl"
  }
#line 471 "ChapelLocale.chpl"
  return;
#line 471 "ChapelLocale.chpl"
}

#line 471 "ChapelLocale.chpl"
/* ChapelLocale.chpl:520 */
#line 471 "ChapelLocale.chpl"
void chpl_getLocaleID(_ref_chpl_localeID_t localeID, int64_t _ln, int32_t _fn) {
#line 471 "ChapelLocale.chpl"
  int32_t local_c_sublocid_any;
#line 471 "ChapelLocale.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 521 "ChapelLocale.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 521 "ChapelLocale.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 521 "ChapelLocale.chpl"
  *(localeID) = _autoCopy_tmp_;
#line 520 "ChapelLocale.chpl"
  return;
#line 520 "ChapelLocale.chpl"
}

#line 520 "ChapelLocale.chpl"
/* ChapelLocale.chpl:545 */
#line 520 "ChapelLocale.chpl"
static locale chpl_localeID_to_locale(chpl_localeID_t* const id2, int64_t _ln, int32_t _fn) {
#line 520 "ChapelLocale.chpl"
  locale local_dummyLocale = NULL;
#line 520 "ChapelLocale.chpl"
  locale ret = NULL;
#line 520 "ChapelLocale.chpl"
  object call_tmp = NULL;
#line 520 "ChapelLocale.chpl"
  chpl_bool call_tmp2;
#line 520 "ChapelLocale.chpl"
  AbstractRootLocale _formal_type_tmp_ = NULL;
#line 520 "ChapelLocale.chpl"
  AbstractRootLocale T = NULL;
#line 520 "ChapelLocale.chpl"
  object call_tmp3 = NULL;
#line 520 "ChapelLocale.chpl"
  chpl_bool call_tmp4;
#line 520 "ChapelLocale.chpl"
  AbstractRootLocale call_tmp5 = NULL;
#line 520 "ChapelLocale.chpl"
  AbstractRootLocale call_tmp6 = NULL;
#line 520 "ChapelLocale.chpl"
  locale call_tmp7 = NULL;
#line 520 "ChapelLocale.chpl"
  int32_t _virtual_method_tmp_;
#line 550 "ChapelLocale.chpl"
  local_dummyLocale = dummyLocale;
#line 546 "ChapelLocale.chpl"
  call_tmp = ((object)(rootLocale));
#line 546 "ChapelLocale.chpl"
  call_tmp2 = (call_tmp != nil);
#line 546 "ChapelLocale.chpl"
  if (call_tmp2) /* ZLINE: 546 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 546 "ChapelLocale.chpl"
  {
#line 547 "ChapelLocale.chpl"
    call_tmp3 = ((object)(rootLocale));
#line 547 "ChapelLocale.chpl"
    call_tmp4 = (call_tmp3 != nil);
#line 547 "ChapelLocale.chpl"
    if (call_tmp4) /* ZLINE: 547 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 547 "ChapelLocale.chpl"
    {
#line 547 "ChapelLocale.chpl"
      call_tmp5 = (((((object)(rootLocale))->chpl__cid == chpl__cid_AbstractRootLocale) || (((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale)))?(((AbstractRootLocale)(rootLocale))):(((AbstractRootLocale)(NULL)));
#line 547 "ChapelLocale.chpl"
      T = call_tmp5;
#line 547 "ChapelLocale.chpl"
    } else /* ZLINE: 547 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 547 "ChapelLocale.chpl"
    {
#line 547 "ChapelLocale.chpl"
      call_tmp6 = ((AbstractRootLocale)(nil));
#line 547 "ChapelLocale.chpl"
      T = call_tmp6;
#line 547 "ChapelLocale.chpl"
    }
#line 547 "ChapelLocale.chpl"
    chpl_check_nil(T, INT64(547), INT64(0));
#line 547 "ChapelLocale.chpl"
    _virtual_method_tmp_ = ((object)(T))->chpl__cid;
#line 547 "ChapelLocale.chpl"
    call_tmp7 = ((locale(*)(AbstractRootLocale, chpl_localeID_t* const, int64_t, int32_t))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(3))])(T, id2, _ln, _fn);
#line 547 "ChapelLocale.chpl"
    ret = call_tmp7;
#line 547 "ChapelLocale.chpl"
    goto _end_chpl_localeID_to_locale;
#line 547 "ChapelLocale.chpl"
  } else /* ZLINE: 546 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 547 "ChapelLocale.chpl"
  {
#line 550 "ChapelLocale.chpl"
    ret = local_dummyLocale;
#line 550 "ChapelLocale.chpl"
    goto _end_chpl_localeID_to_locale;
#line 550 "ChapelLocale.chpl"
  }
#line 550 "ChapelLocale.chpl"
  _end_chpl_localeID_to_locale:;
#line 545 "ChapelLocale.chpl"
  return ret;
#line 545 "ChapelLocale.chpl"
}

#line 545 "ChapelLocale.chpl"
/* ChapelLocale.chpl:587 */
#line 545 "ChapelLocale.chpl"
static int64_t runningTasks(locale this5, int64_t _ln, int32_t _fn) {
#line 545 "ChapelLocale.chpl"
  memory_order local_memory_order_relaxed;
#line 545 "ChapelLocale.chpl"
  _ref_atomic_int64 call_tmp = NULL;
#line 545 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 545 "ChapelLocale.chpl"
  int64_t call_tmp3;
#line 545 "ChapelLocale.chpl"
  int64_t T;
#line 545 "ChapelLocale.chpl"
  chpl_bool call_tmp4;
#line 588 "ChapelLocale.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 588 "ChapelLocale.chpl"
  chpl_check_nil(this5, INT64(588), INT64(0));
#line 588 "ChapelLocale.chpl"
  call_tmp = &((this5)->runningTaskCounter);
#line 588 "ChapelLocale.chpl"
  chpl_check_nil(call_tmp, INT64(588), INT64(0));
#line 588 "ChapelLocale.chpl"
  call_tmp2 = &((call_tmp)->_v);
#line 588 "ChapelLocale.chpl"
  call_tmp3 = atomic_load_explicit_int_least64_t(call_tmp2, local_memory_order_relaxed);
#line 588 "ChapelLocale.chpl"
  call_tmp4 = (call_tmp3 <= INT64(0));
#line 588 "ChapelLocale.chpl"
  if (call_tmp4) /* ZLINE: 588 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 588 "ChapelLocale.chpl"
  {
#line 588 "ChapelLocale.chpl"
    T = INT64(1);
#line 588 "ChapelLocale.chpl"
  } else /* ZLINE: 588 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelLocale.chpl */
#line 588 "ChapelLocale.chpl"
  {
#line 588 "ChapelLocale.chpl"
    T = call_tmp3;
#line 588 "ChapelLocale.chpl"
  }
#line 587 "ChapelLocale.chpl"
  return T;
#line 587 "ChapelLocale.chpl"
}

#line 587 "ChapelLocale.chpl"
/* ChapelLocale.chpl:611 */
#line 587 "ChapelLocale.chpl"
void chpl_taskRunningCntInc(int64_t _ln, int32_t _fn) {
#line 587 "ChapelLocale.chpl"
  memory_order local_memory_order_relaxed;
#line 587 "ChapelLocale.chpl"
  int32_t local_c_sublocid_any;
#line 587 "ChapelLocale.chpl"
  locale call_tmp = NULL;
#line 587 "ChapelLocale.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 587 "ChapelLocale.chpl"
  locale call_tmp2 = NULL;
#line 587 "ChapelLocale.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 587 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 612 "ChapelLocale.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 612 "ChapelLocale.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 612 "ChapelLocale.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 612 "ChapelLocale.chpl"
  call_tmp2 = chpl_localeID_to_locale(&_autoCopy_tmp_, _ln, _fn);
#line 612 "ChapelLocale.chpl"
  call_tmp = call_tmp2;
#line 612 "ChapelLocale.chpl"
  chpl_check_nil(call_tmp, INT64(612), INT64(0));
#line 612 "ChapelLocale.chpl"
  call_tmp3 = &((call_tmp)->runningTaskCounter);
#line 612 "ChapelLocale.chpl"
  chpl_check_nil(call_tmp3, INT64(612), INT64(0));
#line 612 "ChapelLocale.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 612 "ChapelLocale.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), local_memory_order_relaxed);
#line 611 "ChapelLocale.chpl"
  return;
#line 611 "ChapelLocale.chpl"
}

#line 611 "ChapelLocale.chpl"
/* ChapelLocale.chpl:618 */
#line 611 "ChapelLocale.chpl"
void chpl_taskRunningCntDec(int64_t _ln, int32_t _fn) {
#line 611 "ChapelLocale.chpl"
  memory_order local_memory_order_relaxed;
#line 611 "ChapelLocale.chpl"
  int32_t local_c_sublocid_any;
#line 611 "ChapelLocale.chpl"
  locale call_tmp = NULL;
#line 611 "ChapelLocale.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 611 "ChapelLocale.chpl"
  locale call_tmp2 = NULL;
#line 611 "ChapelLocale.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 611 "ChapelLocale.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 619 "ChapelLocale.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 619 "ChapelLocale.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 619 "ChapelLocale.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 619 "ChapelLocale.chpl"
  call_tmp2 = chpl_localeID_to_locale(&_autoCopy_tmp_, _ln, _fn);
#line 619 "ChapelLocale.chpl"
  call_tmp = call_tmp2;
#line 619 "ChapelLocale.chpl"
  chpl_check_nil(call_tmp, INT64(619), INT64(0));
#line 619 "ChapelLocale.chpl"
  call_tmp3 = &((call_tmp)->runningTaskCounter);
#line 619 "ChapelLocale.chpl"
  chpl_check_nil(call_tmp3, INT64(619), INT64(0));
#line 619 "ChapelLocale.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 619 "ChapelLocale.chpl"
  atomic_fetch_sub_explicit_int_least64_t(call_tmp4, INT64(1), local_memory_order_relaxed);
#line 618 "ChapelLocale.chpl"
  return;
#line 618 "ChapelLocale.chpl"
}


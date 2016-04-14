/* LocaleModel.chpl:29 */
static void chpl__init_LocaleModel(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
  chpl___RuntimeTypeInfo call_tmp;
  chpl___RuntimeTypeInfo wrap_call_tmp;
  DefaultDist _runtime_type_tmp_ = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  range_int64_t_bounded_F call_tmp2;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp3 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F type_tmp2 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
  chpl___RuntimeTypeInfo2 call_tmp5;
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
#line 29 "LocaleModel.chpl"
  if (chpl__init_LocaleModel_p) /* ZLINE: 29 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 29 "LocaleModel.chpl"
  {
#line 29 "LocaleModel.chpl"
    goto _exit_chpl__init_LocaleModel;
#line 29 "LocaleModel.chpl"
  }
#line 29 "LocaleModel.chpl"
  modFormatStr = "%*s\n";
#line 29 "LocaleModel.chpl"
  modStr = "LocaleModel";
#line 29 "LocaleModel.chpl"
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
#line 29 "LocaleModel.chpl"
  refIndentLevel = &moduleInitLevel;
#line 29 "LocaleModel.chpl"
  *(refIndentLevel) += INT64(1);
#line 29 "LocaleModel.chpl"
  chpl__init_LocaleModel_p = UINT8(true);
#line 29 "LocaleModel.chpl"
  {
#line 29 "LocaleModel.chpl"
    chpl__init_ChapelLocale(_ln, _fn);
#line 29 "LocaleModel.chpl"
    chpl__init_DefaultRectangular(_ln, _fn);
#line 29 "LocaleModel.chpl"
    chpl__init_ChapelNumLocales(_ln, _fn);
#line 29 "LocaleModel.chpl"
    chpl__init_Sys(_ln, _fn);
#line 29 "LocaleModel.chpl"
  }
#line 41 "LocaleModel.chpl"
  doneCreatingLocales = UINT8(false);
#line 86 "LocaleModel.chpl"
  wrap_call_tmp = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
#line 86 "LocaleModel.chpl"
  call_tmp = wrap_call_tmp;
#line 86 "LocaleModel.chpl"
  _runtime_type_tmp_ = (&call_tmp)->d;
#line 86 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_ = &type_tmp;
#line 86 "LocaleModel.chpl"
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
#line 86 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 86 "LocaleModel.chpl"
  chpl_build_bounded_range(INT64(1), INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 86 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp3;
#line 86 "LocaleModel.chpl"
  chpl__buildDomainExpr(&call_tmp2, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 86 "LocaleModel.chpl"
  chpl___ASSIGN_(type_tmp, call_tmp3, _ln, _fn);
#line 86 "LocaleModel.chpl"
  chpl_emptyLocaleSpace = type_tmp;
#line 87 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_4 = &call_tmp4;
#line 87 "LocaleModel.chpl"
  chpl__ensureDomainExpr(chpl_emptyLocaleSpace, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 87 "LocaleModel.chpl"
  call_tmp5 = chpl__buildArrayRuntimeType3(call_tmp4, _ln, _fn);
#line 87 "LocaleModel.chpl"
  _runtime_type_tmp_2 = (&call_tmp5)->dom;
#line 87 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_5 = &type_tmp2;
#line 87 "LocaleModel.chpl"
  chpl__convertRuntimeTypeToValue6(_runtime_type_tmp_2, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 87 "LocaleModel.chpl"
  chpl_emptyLocales = type_tmp2;
#line 87 "LocaleModel.chpl"
  chpl__autoDestroy2(call_tmp4, _ln, _fn);
#line 86 "LocaleModel.chpl"
  chpl__autoDestroy2(call_tmp3, _ln, _fn);
#line 29 "LocaleModel.chpl"
  *(refIndentLevel) -= INT64(1);
#line 29 "LocaleModel.chpl"
  _exit_chpl__init_LocaleModel:;
#line 29 "LocaleModel.chpl"
  return;
#line 29 "LocaleModel.chpl"
}

#line 29 "LocaleModel.chpl"
/* LocaleModel.chpl:75 */
#line 29 "LocaleModel.chpl"
static void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, int32_t _fn) {
#line 29 "LocaleModel.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 76 "LocaleModel.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(node, subloc);
#line 75 "LocaleModel.chpl"
  *(_retArg) = _autoCopy_tmp_;
#line 75 "LocaleModel.chpl"
  return;
#line 75 "LocaleModel.chpl"
}

#line 75 "LocaleModel.chpl"
/* LocaleModel.chpl:79 */
#line 75 "LocaleModel.chpl"
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, int32_t _fn) {
#line 75 "LocaleModel.chpl"
  int32_t call_tmp;
#line 80 "LocaleModel.chpl"
  call_tmp = chpl_rt_nodeFromLocaleID(*(loc));
#line 79 "LocaleModel.chpl"
  return call_tmp;
#line 79 "LocaleModel.chpl"
}

#line 79 "LocaleModel.chpl"
/* LocaleModel.chpl:83 */
#line 79 "LocaleModel.chpl"
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, int32_t _fn) {
#line 79 "LocaleModel.chpl"
  int32_t call_tmp;
#line 84 "LocaleModel.chpl"
  call_tmp = chpl_rt_sublocFromLocaleID(*(loc));
#line 83 "LocaleModel.chpl"
  return call_tmp;
#line 83 "LocaleModel.chpl"
}

#line 83 "LocaleModel.chpl"
/* LocaleModel.chpl:92 */
#line 83 "LocaleModel.chpl"
static LocaleModel _construct_LocaleModel(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, int64_t _node_id, string* const local_name, LocaleModel meme, int64_t _ln, int32_t _fn) {
#line 83 "LocaleModel.chpl"
  LocaleModel this5 = NULL;
#line 83 "LocaleModel.chpl"
  AbstractLocaleModel T = NULL;
#line 92 "LocaleModel.chpl"
  this5 = meme;
#line 92 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(92), INT64(23));
#line 92 "LocaleModel.chpl"
  T = &((this5)->super);
#line 92 "LocaleModel.chpl"
  _construct_AbstractLocaleModel(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, T, _ln, _fn);
#line 93 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(93), INT64(23));
#line 93 "LocaleModel.chpl"
  (this5)->_node_id = _node_id;
#line 94 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(94), INT64(23));
#line 94 "LocaleModel.chpl"
  (this5)->local_name = *(local_name);
#line 92 "LocaleModel.chpl"
  return this5;
#line 92 "LocaleModel.chpl"
}

#line 92 "LocaleModel.chpl"
/* LocaleModel.chpl:92 */
#line 92 "LocaleModel.chpl"
static void chpl__auto_destroy_LocaleModel(LocaleModel this5, int64_t _ln, int32_t _fn) {
#line 92 "LocaleModel.chpl"
  _ref_string _field_destructor_tmp_ = NULL;
#line 92 "LocaleModel.chpl"
  AbstractLocaleModel _parent_destructor_tmp_ = NULL;
#line 92 "LocaleModel.chpl"
  locale _parent_destructor_tmp_2 = NULL;
#line 92 "LocaleModel.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 92 "LocaleModel.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 94 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(94), INT64(23));
#line 94 "LocaleModel.chpl"
  _field_destructor_tmp_ = &((this5)->local_name);
#line 94 "LocaleModel.chpl"
  chpl___TILDE_string(_field_destructor_tmp_, _ln, _fn);
#line 92 "LocaleModel.chpl"
  _parent_destructor_tmp_ = ((AbstractLocaleModel)(this5));
#line 92 "LocaleModel.chpl"
  _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
#line 92 "LocaleModel.chpl"
  chpl_check_nil(_parent_destructor_tmp_2, INT64(92), INT64(23));
#line 92 "LocaleModel.chpl"
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->runningTaskCounter);
#line 92 "LocaleModel.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(92), INT64(23));
#line 92 "LocaleModel.chpl"
  call_tmp = &((_field_destructor_tmp_2)->_v);
#line 92 "LocaleModel.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 92 "LocaleModel.chpl"
  return;
#line 92 "LocaleModel.chpl"
}

#line 92 "LocaleModel.chpl"
/* LocaleModel.chpl:107 */
#line 92 "LocaleModel.chpl"
static LocaleModel LocaleModel2(locale parent_loc, int64_t _ln, int32_t _fn) {
#line 92 "LocaleModel.chpl"
  string local__str_literal_842;
#line 92 "LocaleModel.chpl"
  LocaleModel this5 = NULL;
#line 92 "LocaleModel.chpl"
  LocaleModel this6 = NULL;
#line 92 "LocaleModel.chpl"
  int64_t call_tmp;
#line 92 "LocaleModel.chpl"
  c_void_ptr cast_tmp;
#line 92 "LocaleModel.chpl"
  string _init_class_tmp_;
#line 92 "LocaleModel.chpl"
  locale call_tmp2 = NULL;
#line 92 "LocaleModel.chpl"
  atomic_int64 this7;
#line 92 "LocaleModel.chpl"
  atomic_int_least64_t ret;
#line 92 "LocaleModel.chpl"
  atomic_int_least64_t type_tmp;
#line 92 "LocaleModel.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 92 "LocaleModel.chpl"
  atomic_int64 wrap_call_tmp;
#line 92 "LocaleModel.chpl"
  string this8;
#line 92 "LocaleModel.chpl"
  c_ptr_uint8_t call_tmp3 = NULL;
#line 92 "LocaleModel.chpl"
  int32_t default_arglocale_id;
#line 92 "LocaleModel.chpl"
  string wrap_call_tmp2;
#line 92 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 92 "LocaleModel.chpl"
  LocaleModel wrap_call_tmp3 = NULL;
#line 92 "LocaleModel.chpl"
  chpl_bool call_tmp4;
#line 92 "LocaleModel.chpl"
  locale coerce_tmp = NULL;
#line 92 "LocaleModel.chpl"
  locale call_tmp5 = NULL;
#line 92 "LocaleModel.chpl"
  _ref_locale call_tmp6 = NULL;
#line 109 "LocaleModel.chpl"
  local__str_literal_842 = _str_literal_842;
#line 107 "LocaleModel.chpl"
  call_tmp = sizeof(chpl_LocaleModel_object);
#line 107 "LocaleModel.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(23), _ln, _fn);
#line 107 "LocaleModel.chpl"
  this6 = ((LocaleModel)(cast_tmp));
#line 107 "LocaleModel.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_LocaleModel;
#line 107 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(107), INT64(23));
#line 107 "LocaleModel.chpl"
  (this6)->_node_id = INT64(0);
#line 107 "LocaleModel.chpl"
  (&_init_class_tmp_)->len = INT64(0);
#line 107 "LocaleModel.chpl"
  (&_init_class_tmp_)->_size = INT64(0);
#line 107 "LocaleModel.chpl"
  (&_init_class_tmp_)->buff = nil;
#line 107 "LocaleModel.chpl"
  (&_init_class_tmp_)->owned = UINT8(false);
#line 107 "LocaleModel.chpl"
  (&_init_class_tmp_)->locale_id = INT32(0);
#line 107 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(107), INT64(23));
#line 107 "LocaleModel.chpl"
  (this6)->local_name = _init_class_tmp_;
#line 107 "LocaleModel.chpl"
  call_tmp2 = ((locale)(nil));
#line 107 "LocaleModel.chpl"
  ret = type_tmp;
#line 107 "LocaleModel.chpl"
  _ref_tmp_ = &ret;
#line 107 "LocaleModel.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 107 "LocaleModel.chpl"
  (&this7)->_v = ret;
#line 107 "LocaleModel.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this7, _ln, _fn);
#line 107 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(107), INT64(23));
#line 107 "LocaleModel.chpl"
  (this6)->_node_id = INT64(0);
#line 107 "LocaleModel.chpl"
  (&this8)->len = INT64(0);
#line 107 "LocaleModel.chpl"
  (&this8)->_size = INT64(0);
#line 107 "LocaleModel.chpl"
  (&this8)->buff = nil;
#line 107 "LocaleModel.chpl"
  (&this8)->owned = UINT8(false);
#line 107 "LocaleModel.chpl"
  (&this8)->locale_id = INT32(0);
#line 107 "LocaleModel.chpl"
  (&this8)->len = INT64(0);
#line 107 "LocaleModel.chpl"
  (&this8)->_size = INT64(0);
#line 107 "LocaleModel.chpl"
  call_tmp3 = ((c_ptr_uint8_t)(nil));
#line 107 "LocaleModel.chpl"
  (&this8)->buff = call_tmp3;
#line 107 "LocaleModel.chpl"
  (&this8)->owned = UINT8(true);
#line 107 "LocaleModel.chpl"
  default_arglocale_id = chpl_nodeID;
#line 107 "LocaleModel.chpl"
  (&this8)->locale_id = default_arglocale_id;
#line 107 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 107 "LocaleModel.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp3, UINT8(true), default_arglocale_id, &this8, ret_to_arg_ref_tmp_, _ln, _fn);
#line 107 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(107), INT64(23));
#line 107 "LocaleModel.chpl"
  (this6)->local_name = wrap_call_tmp2;
#line 107 "LocaleModel.chpl"
  wrap_call_tmp3 = _construct_LocaleModel(call_tmp2, INT64(0), INT64(0), INT64(0), INT64(0), INT64(0), UINT64(0), &wrap_call_tmp, INT64(0), &wrap_call_tmp2, this6, _ln, _fn);
#line 107 "LocaleModel.chpl"
  this5 = wrap_call_tmp3;
#line 108 "LocaleModel.chpl"
  call_tmp4 = doneCreatingLocales;
#line 108 "LocaleModel.chpl"
  if (call_tmp4) /* ZLINE: 109 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 108 "LocaleModel.chpl"
  {
#line 109 "LocaleModel.chpl"
    halt(&local__str_literal_842, _ln, _fn);
#line 109 "LocaleModel.chpl"
  }
#line 111 "LocaleModel.chpl"
  call_tmp5 = ((locale)(wrap_call_tmp3));
#line 111 "LocaleModel.chpl"
  coerce_tmp = call_tmp5;
#line 111 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp, INT64(111), INT64(23));
#line 111 "LocaleModel.chpl"
  call_tmp6 = &((coerce_tmp)->parent);
#line 111 "LocaleModel.chpl"
  *(call_tmp6) = parent_loc;
#line 112 "LocaleModel.chpl"
  chpl_check_nil(wrap_call_tmp3, INT64(112), INT64(23));
#line 112 "LocaleModel.chpl"
  init(wrap_call_tmp3, _ln, _fn);
#line 107 "LocaleModel.chpl"
  return this5;
#line 107 "LocaleModel.chpl"
}

#line 107 "LocaleModel.chpl"
/* LocaleModel.chpl:115 */
#line 107 "LocaleModel.chpl"
static int64_t chpl_id2(LocaleModel this5, int64_t _ln, int32_t _fn) {
#line 107 "LocaleModel.chpl"
  int64_t ret;
#line 115 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(115), INT64(23));
#line 115 "LocaleModel.chpl"
  ret = (this5)->_node_id;
#line 115 "LocaleModel.chpl"
  return ret;
#line 115 "LocaleModel.chpl"
}

#line 115 "LocaleModel.chpl"
/* LocaleModel.chpl:138 */
#line 115 "LocaleModel.chpl"
static locale getChild2(LocaleModel this5, int64_t idx, int64_t _ln, int32_t _fn) {
#line 115 "LocaleModel.chpl"
  string local__str_literal_846;
#line 115 "LocaleModel.chpl"
  locale ret = NULL;
#line 140 "LocaleModel.chpl"
  local__str_literal_846 = _str_literal_846;
#line 140 "LocaleModel.chpl"
  halt(&local__str_literal_846, _ln, _fn);
#line 141 "LocaleModel.chpl"
  ret = nil;
#line 138 "LocaleModel.chpl"
  return ret;
#line 138 "LocaleModel.chpl"
}

#line 138 "LocaleModel.chpl"
/* LocaleModel.chpl:156 */
#line 138 "LocaleModel.chpl"
static void init(LocaleModel this5, int64_t _ln, int32_t _fn) {
#line 138 "LocaleModel.chpl"
  _ref_int64_t call_tmp = NULL;
#line 138 "LocaleModel.chpl"
  int64_t call_tmp2;
#line 138 "LocaleModel.chpl"
  c_string comm;
#line 138 "LocaleModel.chpl"
  c_string spawnfn;
#line 138 "LocaleModel.chpl"
  _ref_c_string T = NULL;
#line 138 "LocaleModel.chpl"
  _ref_c_string T2 = NULL;
#line 138 "LocaleModel.chpl"
  int32_t call_tmp3;
#line 138 "LocaleModel.chpl"
  int32_t call_tmp4;
#line 138 "LocaleModel.chpl"
  chpl_bool call_tmp5;
#line 138 "LocaleModel.chpl"
  chpl_bool T3;
#line 138 "LocaleModel.chpl"
  int64_t call_tmp6;
#line 138 "LocaleModel.chpl"
  chpl_bool call_tmp7;
#line 138 "LocaleModel.chpl"
  chpl_bool T4;
#line 138 "LocaleModel.chpl"
  int32_t call_tmp8;
#line 138 "LocaleModel.chpl"
  int32_t call_tmp9;
#line 138 "LocaleModel.chpl"
  chpl_bool call_tmp10;
#line 138 "LocaleModel.chpl"
  chpl_bool T5;
#line 138 "LocaleModel.chpl"
  int64_t call_tmp11;
#line 138 "LocaleModel.chpl"
  chpl_bool call_tmp12;
#line 138 "LocaleModel.chpl"
  _ref_string call_tmp13 = NULL;
#line 138 "LocaleModel.chpl"
  c_string call_tmp14;
#line 138 "LocaleModel.chpl"
  c_string_copy call_tmp15;
#line 138 "LocaleModel.chpl"
  string call_tmp16;
#line 138 "LocaleModel.chpl"
  int64_t coerce_tmp;
#line 138 "LocaleModel.chpl"
  string _autoCopy_tmp_;
#line 138 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 138 "LocaleModel.chpl"
  string call_tmp17;
#line 138 "LocaleModel.chpl"
  string coerce_tmp2;
#line 138 "LocaleModel.chpl"
  c_string call_tmp18;
#line 138 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 138 "LocaleModel.chpl"
  string _autoCopy_tmp_2;
#line 138 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
#line 138 "LocaleModel.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 138 "LocaleModel.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 138 "LocaleModel.chpl"
  _ref_string _ref_tmp_3 = NULL;
#line 138 "LocaleModel.chpl"
  _ref_string call_tmp19 = NULL;
#line 138 "LocaleModel.chpl"
  c_string call_tmp20;
#line 138 "LocaleModel.chpl"
  string call_tmp21;
#line 138 "LocaleModel.chpl"
  string _autoCopy_tmp_3;
#line 138 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
#line 138 "LocaleModel.chpl"
  _ref_string _ref_tmp_4 = NULL;
#line 138 "LocaleModel.chpl"
  locale coerce_tmp3 = NULL;
#line 138 "LocaleModel.chpl"
  locale call_tmp22 = NULL;
#line 138 "LocaleModel.chpl"
  _ref_uint64_t call_tmp23 = NULL;
#line 138 "LocaleModel.chpl"
  uint64_t call_tmp24;
#line 138 "LocaleModel.chpl"
  locale coerce_tmp4 = NULL;
#line 138 "LocaleModel.chpl"
  locale call_tmp25 = NULL;
#line 138 "LocaleModel.chpl"
  _ref_int64_t call_tmp26 = NULL;
#line 138 "LocaleModel.chpl"
  int32_t call_tmp27;
#line 138 "LocaleModel.chpl"
  int64_t call_tmp28;
#line 138 "LocaleModel.chpl"
  locale coerce_tmp5 = NULL;
#line 138 "LocaleModel.chpl"
  locale call_tmp29 = NULL;
#line 138 "LocaleModel.chpl"
  _ref_int64_t call_tmp30 = NULL;
#line 138 "LocaleModel.chpl"
  int32_t call_tmp31;
#line 138 "LocaleModel.chpl"
  int64_t call_tmp32;
#line 138 "LocaleModel.chpl"
  locale coerce_tmp6 = NULL;
#line 138 "LocaleModel.chpl"
  locale call_tmp33 = NULL;
#line 138 "LocaleModel.chpl"
  _ref_int64_t call_tmp34 = NULL;
#line 138 "LocaleModel.chpl"
  int32_t call_tmp35;
#line 138 "LocaleModel.chpl"
  int64_t call_tmp36;
#line 138 "LocaleModel.chpl"
  locale coerce_tmp7 = NULL;
#line 138 "LocaleModel.chpl"
  locale call_tmp37 = NULL;
#line 138 "LocaleModel.chpl"
  _ref_int64_t call_tmp38 = NULL;
#line 138 "LocaleModel.chpl"
  int32_t call_tmp39;
#line 138 "LocaleModel.chpl"
  int64_t call_tmp40;
#line 138 "LocaleModel.chpl"
  locale coerce_tmp8 = NULL;
#line 138 "LocaleModel.chpl"
  locale call_tmp41 = NULL;
#line 138 "LocaleModel.chpl"
  _ref_int64_t call_tmp42 = NULL;
#line 138 "LocaleModel.chpl"
  uint32_t call_tmp43;
#line 138 "LocaleModel.chpl"
  int64_t call_tmp44;
#line 157 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(157), INT64(23));
#line 157 "LocaleModel.chpl"
  call_tmp = &((this5)->_node_id);
#line 157 "LocaleModel.chpl"
  call_tmp2 = ((int64_t)(chpl_nodeID));
#line 157 "LocaleModel.chpl"
  *(call_tmp) = call_tmp2;
#line 164 "LocaleModel.chpl"
  comm = "";
#line 164 "LocaleModel.chpl"
  spawnfn = "";
#line 164 "LocaleModel.chpl"
  T = &spawnfn;
#line 164 "LocaleModel.chpl"
  T2 = &comm;
#line 167 "LocaleModel.chpl"
  call_tmp3 = sys_getenv("CHPL_COMM", T2);
#line 167 "LocaleModel.chpl"
  call_tmp4 = ((int32_t)(INT64(0)));
#line 167 "LocaleModel.chpl"
  call_tmp5 = (call_tmp3 == call_tmp4);
#line 167 "LocaleModel.chpl"
  if (call_tmp5) /* ZLINE: 167 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 167 "LocaleModel.chpl"
  {
#line 167 "LocaleModel.chpl"
    call_tmp6 = string_compare(comm, "gasnet");
#line 167 "LocaleModel.chpl"
    call_tmp7 = (call_tmp6 == INT64(0));
#line 167 "LocaleModel.chpl"
    T3 = call_tmp7;
#line 167 "LocaleModel.chpl"
  } else /* ZLINE: 167 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 167 "LocaleModel.chpl"
  {
#line 167 "LocaleModel.chpl"
    T3 = UINT8(false);
#line 167 "LocaleModel.chpl"
  }
#line 167 "LocaleModel.chpl"
  if (T3) /* ZLINE: 167 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 167 "LocaleModel.chpl"
  {
#line 167 "LocaleModel.chpl"
    call_tmp8 = sys_getenv("GASNET_SPAWNFN", T);
#line 167 "LocaleModel.chpl"
    call_tmp9 = ((int32_t)(INT64(0)));
#line 167 "LocaleModel.chpl"
    call_tmp10 = (call_tmp8 == call_tmp9);
#line 167 "LocaleModel.chpl"
    T4 = call_tmp10;
#line 167 "LocaleModel.chpl"
  } else /* ZLINE: 167 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 167 "LocaleModel.chpl"
  {
#line 167 "LocaleModel.chpl"
    T4 = UINT8(false);
#line 167 "LocaleModel.chpl"
  }
#line 167 "LocaleModel.chpl"
  if (T4) /* ZLINE: 167 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 167 "LocaleModel.chpl"
  {
#line 167 "LocaleModel.chpl"
    call_tmp11 = string_compare(spawnfn, "L");
#line 167 "LocaleModel.chpl"
    call_tmp12 = (call_tmp11 == INT64(0));
#line 167 "LocaleModel.chpl"
    T5 = call_tmp12;
#line 167 "LocaleModel.chpl"
  } else /* ZLINE: 167 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 167 "LocaleModel.chpl"
  {
#line 167 "LocaleModel.chpl"
    T5 = UINT8(false);
#line 167 "LocaleModel.chpl"
  }
#line 167 "LocaleModel.chpl"
  if (T5) /* ZLINE: 167 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 167 "LocaleModel.chpl"
  {
#line 169 "LocaleModel.chpl"
    chpl_check_nil(this5, INT64(169), INT64(23));
#line 169 "LocaleModel.chpl"
    call_tmp13 = &((this5)->local_name);
#line 169 "LocaleModel.chpl"
    call_tmp14 = chpl_nodeName();
#line 169 "LocaleModel.chpl"
    call_tmp15 = string_concat(call_tmp14, "-", _ln, _fn);
#line 169 "LocaleModel.chpl"
    chpl_check_nil(this5, INT64(169), INT64(23));
#line 169 "LocaleModel.chpl"
    coerce_tmp = (this5)->_node_id;
#line 169 "LocaleModel.chpl"
    ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 169 "LocaleModel.chpl"
    _cast3(coerce_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
#line 169 "LocaleModel.chpl"
    call_tmp16 = _autoCopy_tmp_;
#line 169 "LocaleModel.chpl"
    call_tmp18 = ((c_string)(call_tmp15));
#line 169 "LocaleModel.chpl"
    ret_to_arg_ref_tmp_2 = &coerce_tmp2;
#line 169 "LocaleModel.chpl"
    _cast(call_tmp18, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 169 "LocaleModel.chpl"
    ret_to_arg_ref_tmp_3 = &_autoCopy_tmp_2;
#line 169 "LocaleModel.chpl"
    chpl___PLUS_(&coerce_tmp2, &_autoCopy_tmp_, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 169 "LocaleModel.chpl"
    call_tmp17 = _autoCopy_tmp_2;
#line 169 "LocaleModel.chpl"
    chpl___ASSIGN_2(call_tmp13, &_autoCopy_tmp_2, _ln, _fn);
#line 169 "LocaleModel.chpl"
    _ref_tmp_ = &call_tmp16;
#line 169 "LocaleModel.chpl"
    chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 169 "LocaleModel.chpl"
    _ref_tmp_2 = &call_tmp17;
#line 169 "LocaleModel.chpl"
    chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 169 "LocaleModel.chpl"
    _ref_tmp_3 = &coerce_tmp2;
#line 169 "LocaleModel.chpl"
    chpl___TILDE_string(_ref_tmp_3, _ln, _fn);
#line 169 "LocaleModel.chpl"
  } else /* ZLINE: 167 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 169 "LocaleModel.chpl"
  {
#line 170 "LocaleModel.chpl"
    chpl_check_nil(this5, INT64(170), INT64(23));
#line 170 "LocaleModel.chpl"
    call_tmp19 = &((this5)->local_name);
#line 170 "LocaleModel.chpl"
    call_tmp20 = chpl_nodeName();
#line 170 "LocaleModel.chpl"
    ret_to_arg_ref_tmp_4 = &_autoCopy_tmp_3;
#line 170 "LocaleModel.chpl"
    _cast(call_tmp20, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 170 "LocaleModel.chpl"
    call_tmp21 = _autoCopy_tmp_3;
#line 170 "LocaleModel.chpl"
    chpl___ASSIGN_2(call_tmp19, &_autoCopy_tmp_3, _ln, _fn);
#line 170 "LocaleModel.chpl"
    _ref_tmp_4 = &call_tmp21;
#line 170 "LocaleModel.chpl"
    chpl___TILDE_string(_ref_tmp_4, _ln, _fn);
#line 170 "LocaleModel.chpl"
  }
#line 173 "LocaleModel.chpl"
  call_tmp22 = ((locale)(this5));
#line 173 "LocaleModel.chpl"
  coerce_tmp3 = call_tmp22;
#line 173 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp3, INT64(173), INT64(23));
#line 173 "LocaleModel.chpl"
  call_tmp23 = &((coerce_tmp3)->callStackSize);
#line 173 "LocaleModel.chpl"
  call_tmp24 = chpl_task_getCallStackSize();
#line 173 "LocaleModel.chpl"
  *(call_tmp23) = call_tmp24;
#line 176 "LocaleModel.chpl"
  call_tmp25 = ((locale)(this5));
#line 176 "LocaleModel.chpl"
  coerce_tmp4 = call_tmp25;
#line 176 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp4, INT64(176), INT64(23));
#line 176 "LocaleModel.chpl"
  call_tmp26 = &((coerce_tmp4)->nPUsPhysAcc);
#line 176 "LocaleModel.chpl"
  call_tmp27 = chpl_getNumPhysicalCpus(UINT8(true));
#line 176 "LocaleModel.chpl"
  call_tmp28 = ((int64_t)(call_tmp27));
#line 176 "LocaleModel.chpl"
  *(call_tmp26) = call_tmp28;
#line 177 "LocaleModel.chpl"
  call_tmp29 = ((locale)(this5));
#line 177 "LocaleModel.chpl"
  coerce_tmp5 = call_tmp29;
#line 177 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp5, INT64(177), INT64(23));
#line 177 "LocaleModel.chpl"
  call_tmp30 = &((coerce_tmp5)->nPUsPhysAll);
#line 177 "LocaleModel.chpl"
  call_tmp31 = chpl_getNumPhysicalCpus(UINT8(false));
#line 177 "LocaleModel.chpl"
  call_tmp32 = ((int64_t)(call_tmp31));
#line 177 "LocaleModel.chpl"
  *(call_tmp30) = call_tmp32;
#line 180 "LocaleModel.chpl"
  call_tmp33 = ((locale)(this5));
#line 180 "LocaleModel.chpl"
  coerce_tmp6 = call_tmp33;
#line 180 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp6, INT64(180), INT64(23));
#line 180 "LocaleModel.chpl"
  call_tmp34 = &((coerce_tmp6)->nPUsLogAcc);
#line 180 "LocaleModel.chpl"
  call_tmp35 = chpl_getNumLogicalCpus(UINT8(true));
#line 180 "LocaleModel.chpl"
  call_tmp36 = ((int64_t)(call_tmp35));
#line 180 "LocaleModel.chpl"
  *(call_tmp34) = call_tmp36;
#line 181 "LocaleModel.chpl"
  call_tmp37 = ((locale)(this5));
#line 181 "LocaleModel.chpl"
  coerce_tmp7 = call_tmp37;
#line 181 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp7, INT64(181), INT64(23));
#line 181 "LocaleModel.chpl"
  call_tmp38 = &((coerce_tmp7)->nPUsLogAll);
#line 181 "LocaleModel.chpl"
  call_tmp39 = chpl_getNumLogicalCpus(UINT8(false));
#line 181 "LocaleModel.chpl"
  call_tmp40 = ((int64_t)(call_tmp39));
#line 181 "LocaleModel.chpl"
  *(call_tmp38) = call_tmp40;
#line 184 "LocaleModel.chpl"
  call_tmp41 = ((locale)(this5));
#line 184 "LocaleModel.chpl"
  coerce_tmp8 = call_tmp41;
#line 184 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp8, INT64(184), INT64(23));
#line 184 "LocaleModel.chpl"
  call_tmp42 = &((coerce_tmp8)->maxTaskPar);
#line 184 "LocaleModel.chpl"
  call_tmp43 = chpl_task_getMaxPar();
#line 184 "LocaleModel.chpl"
  call_tmp44 = ((int64_t)(call_tmp43));
#line 184 "LocaleModel.chpl"
  *(call_tmp42) = call_tmp44;
#line 156 "LocaleModel.chpl"
  return;
#line 156 "LocaleModel.chpl"
}

#line 156 "LocaleModel.chpl"
/* LocaleModel.chpl:196 */
#line 156 "LocaleModel.chpl"
static void chpl__auto_destroy_RootLocale(RootLocale this5, int64_t _ln, int32_t _fn) {
#line 156 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F _field_destructor_tmp_ = NULL;
#line 156 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = NULL;
#line 156 "LocaleModel.chpl"
  AbstractRootLocale _parent_destructor_tmp_ = NULL;
#line 156 "LocaleModel.chpl"
  locale _parent_destructor_tmp_2 = NULL;
#line 156 "LocaleModel.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 156 "LocaleModel.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 199 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(199), INT64(23));
#line 199 "LocaleModel.chpl"
  _field_destructor_tmp_ = (this5)->myLocales;
#line 199 "LocaleModel.chpl"
  chpl__autoDestroy6(_field_destructor_tmp_, _ln, _fn);
#line 198 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(198), INT64(23));
#line 198 "LocaleModel.chpl"
  _field_destructor_tmp_2 = (this5)->myLocaleSpace;
#line 198 "LocaleModel.chpl"
  chpl__autoDestroy2(_field_destructor_tmp_2, _ln, _fn);
#line 196 "LocaleModel.chpl"
  _parent_destructor_tmp_ = ((AbstractRootLocale)(this5));
#line 196 "LocaleModel.chpl"
  _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
#line 196 "LocaleModel.chpl"
  chpl_check_nil(_parent_destructor_tmp_2, INT64(196), INT64(23));
#line 196 "LocaleModel.chpl"
  _field_destructor_tmp_3 = &((_parent_destructor_tmp_2)->runningTaskCounter);
#line 196 "LocaleModel.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(196), INT64(23));
#line 196 "LocaleModel.chpl"
  call_tmp = &((_field_destructor_tmp_3)->_v);
#line 196 "LocaleModel.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 196 "LocaleModel.chpl"
  return;
#line 196 "LocaleModel.chpl"
}

#line 196 "LocaleModel.chpl"
/* LocaleModel.chpl:196 */
#line 196 "LocaleModel.chpl"
static RootLocale _construct_RootLocale(locale parent, int64_t nPUsLogAcc, int64_t nPUsLogAll, int64_t nPUsPhysAcc, int64_t nPUsPhysAll, int64_t maxTaskPar, uint64_t callStackSize, atomic_int64* const runningTaskCounter, DefaultRectangularDom_1_int64_t_F myLocaleSpace, DefaultRectangularArr_locale_1_int64_t_F myLocales, RootLocale meme, int64_t _ln, int32_t _fn) {
#line 196 "LocaleModel.chpl"
  RootLocale this5 = NULL;
#line 196 "LocaleModel.chpl"
  AbstractRootLocale T = NULL;
#line 196 "LocaleModel.chpl"
  this5 = meme;
#line 196 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(196), INT64(23));
#line 196 "LocaleModel.chpl"
  T = &((this5)->super);
#line 196 "LocaleModel.chpl"
  _construct_AbstractRootLocale(parent, nPUsLogAcc, nPUsLogAll, nPUsPhysAcc, nPUsPhysAll, maxTaskPar, callStackSize, runningTaskCounter, T, _ln, _fn);
#line 198 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(198), INT64(23));
#line 198 "LocaleModel.chpl"
  (this5)->myLocaleSpace = myLocaleSpace;
#line 199 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(199), INT64(23));
#line 199 "LocaleModel.chpl"
  (this5)->myLocales = myLocales;
#line 196 "LocaleModel.chpl"
  return this5;
#line 196 "LocaleModel.chpl"
}

#line 196 "LocaleModel.chpl"
/* LocaleModel.chpl:201 */
#line 196 "LocaleModel.chpl"
static RootLocale RootLocale2(int64_t _ln, int32_t _fn) {
#line 196 "LocaleModel.chpl"
  int64_t local_numLocales;
#line 196 "LocaleModel.chpl"
  RootLocale this5 = NULL;
#line 196 "LocaleModel.chpl"
  RootLocale this6 = NULL;
#line 196 "LocaleModel.chpl"
  int64_t call_tmp;
#line 196 "LocaleModel.chpl"
  c_void_ptr cast_tmp;
#line 196 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F _init_class_tmp_ = NULL;
#line 196 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F _init_class_tmp_2 = NULL;
#line 196 "LocaleModel.chpl"
  locale call_tmp2 = NULL;
#line 196 "LocaleModel.chpl"
  atomic_int64 this7;
#line 196 "LocaleModel.chpl"
  atomic_int_least64_t ret;
#line 196 "LocaleModel.chpl"
  atomic_int_least64_t type_tmp;
#line 196 "LocaleModel.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 196 "LocaleModel.chpl"
  atomic_int64 wrap_call_tmp;
#line 196 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F default_argmyLocaleSpace = NULL;
#line 196 "LocaleModel.chpl"
  chpl___RuntimeTypeInfo call_tmp3;
#line 196 "LocaleModel.chpl"
  chpl___RuntimeTypeInfo wrap_call_tmp2;
#line 196 "LocaleModel.chpl"
  int64_t call_tmp4;
#line 196 "LocaleModel.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 196 "LocaleModel.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 196 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
#line 196 "LocaleModel.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
#line 196 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F x = NULL;
#line 196 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F type_tmp2 = NULL;
#line 196 "LocaleModel.chpl"
  DefaultDist _runtime_type_tmp_ = NULL;
#line 196 "LocaleModel.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
#line 196 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F default_argmyLocales = NULL;
#line 196 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp7 = NULL;
#line 196 "LocaleModel.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
#line 196 "LocaleModel.chpl"
  chpl___RuntimeTypeInfo2 call_tmp8;
#line 196 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = NULL;
#line 196 "LocaleModel.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
#line 196 "LocaleModel.chpl"
  RootLocale wrap_call_tmp3 = NULL;
#line 196 "LocaleModel.chpl"
  locale coerce_tmp = NULL;
#line 196 "LocaleModel.chpl"
  locale call_tmp9 = NULL;
#line 196 "LocaleModel.chpl"
  _ref_locale call_tmp10 = NULL;
#line 196 "LocaleModel.chpl"
  locale coerce_tmp2 = NULL;
#line 196 "LocaleModel.chpl"
  locale call_tmp11 = NULL;
#line 196 "LocaleModel.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 196 "LocaleModel.chpl"
  locale coerce_tmp3 = NULL;
#line 196 "LocaleModel.chpl"
  locale call_tmp13 = NULL;
#line 196 "LocaleModel.chpl"
  _ref_int64_t call_tmp14 = NULL;
#line 196 "LocaleModel.chpl"
  locale coerce_tmp4 = NULL;
#line 196 "LocaleModel.chpl"
  locale call_tmp15 = NULL;
#line 196 "LocaleModel.chpl"
  _ref_int64_t call_tmp16 = NULL;
#line 196 "LocaleModel.chpl"
  locale coerce_tmp5 = NULL;
#line 196 "LocaleModel.chpl"
  locale call_tmp17 = NULL;
#line 196 "LocaleModel.chpl"
  _ref_int64_t call_tmp18 = NULL;
#line 196 "LocaleModel.chpl"
  locale coerce_tmp6 = NULL;
#line 196 "LocaleModel.chpl"
  locale call_tmp19 = NULL;
#line 196 "LocaleModel.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 201 "LocaleModel.chpl"
  local_numLocales = numLocales;
#line 201 "LocaleModel.chpl"
  call_tmp = sizeof(chpl_RootLocale_object);
#line 201 "LocaleModel.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(14), _ln, _fn);
#line 201 "LocaleModel.chpl"
  this6 = ((RootLocale)(cast_tmp));
#line 201 "LocaleModel.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_RootLocale;
#line 201 "LocaleModel.chpl"
  _init_class_tmp_ = nil;
#line 201 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(201), INT64(23));
#line 201 "LocaleModel.chpl"
  (this6)->myLocaleSpace = _init_class_tmp_;
#line 201 "LocaleModel.chpl"
  _init_class_tmp_2 = nil;
#line 201 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(201), INT64(23));
#line 201 "LocaleModel.chpl"
  (this6)->myLocales = _init_class_tmp_2;
#line 201 "LocaleModel.chpl"
  call_tmp2 = ((locale)(nil));
#line 201 "LocaleModel.chpl"
  ret = type_tmp;
#line 201 "LocaleModel.chpl"
  _ref_tmp_ = &ret;
#line 201 "LocaleModel.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 201 "LocaleModel.chpl"
  (&this7)->_v = ret;
#line 201 "LocaleModel.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this7, _ln, _fn);
#line 201 "LocaleModel.chpl"
  wrap_call_tmp2 = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
#line 201 "LocaleModel.chpl"
  call_tmp3 = wrap_call_tmp2;
#line 201 "LocaleModel.chpl"
  call_tmp4 = (local_numLocales - INT64(1));
#line 201 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp5;
#line 201 "LocaleModel.chpl"
  chpl_build_bounded_range(INT64(0), call_tmp4, ret_to_arg_ref_tmp_, _ln, _fn);
#line 201 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp6;
#line 201 "LocaleModel.chpl"
  chpl__buildDomainExpr(&call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 201 "LocaleModel.chpl"
  _runtime_type_tmp_ = (&call_tmp3)->d;
#line 201 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_3 = &type_tmp2;
#line 201 "LocaleModel.chpl"
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 201 "LocaleModel.chpl"
  x = type_tmp2;
#line 201 "LocaleModel.chpl"
  chpl___ASSIGN_(type_tmp2, call_tmp6, _ln, _fn);
#line 201 "LocaleModel.chpl"
  default_argmyLocaleSpace = chpl__autoCopy2(x, _ln, _fn);
#line 201 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(201), INT64(23));
#line 201 "LocaleModel.chpl"
  (this6)->myLocaleSpace = default_argmyLocaleSpace;
#line 201 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_4 = &call_tmp7;
#line 201 "LocaleModel.chpl"
  chpl__ensureDomainExpr(default_argmyLocaleSpace, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 201 "LocaleModel.chpl"
  call_tmp8 = chpl__buildArrayRuntimeType3(call_tmp7, _ln, _fn);
#line 201 "LocaleModel.chpl"
  _runtime_type_tmp_2 = (&call_tmp8)->dom;
#line 201 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_5 = &default_argmyLocales;
#line 201 "LocaleModel.chpl"
  chpl__convertRuntimeTypeToValue6(_runtime_type_tmp_2, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 201 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(201), INT64(23));
#line 201 "LocaleModel.chpl"
  (this6)->myLocales = default_argmyLocales;
#line 201 "LocaleModel.chpl"
  wrap_call_tmp3 = _construct_RootLocale(call_tmp2, INT64(0), INT64(0), INT64(0), INT64(0), INT64(0), UINT64(0), &wrap_call_tmp, default_argmyLocaleSpace, default_argmyLocales, this6, _ln, _fn);
#line 201 "LocaleModel.chpl"
  chpl__autoDestroy2(call_tmp7, _ln, _fn);
#line 201 "LocaleModel.chpl"
  chpl__autoDestroy2(call_tmp6, _ln, _fn);
#line 202 "LocaleModel.chpl"
  call_tmp9 = ((locale)(wrap_call_tmp3));
#line 202 "LocaleModel.chpl"
  coerce_tmp = call_tmp9;
#line 202 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp, INT64(202), INT64(23));
#line 202 "LocaleModel.chpl"
  call_tmp10 = &((coerce_tmp)->parent);
#line 202 "LocaleModel.chpl"
  *(call_tmp10) = nil;
#line 203 "LocaleModel.chpl"
  call_tmp11 = ((locale)(wrap_call_tmp3));
#line 203 "LocaleModel.chpl"
  coerce_tmp2 = call_tmp11;
#line 203 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp2, INT64(203), INT64(23));
#line 203 "LocaleModel.chpl"
  call_tmp12 = &((coerce_tmp2)->nPUsPhysAcc);
#line 203 "LocaleModel.chpl"
  *(call_tmp12) = INT64(0);
#line 204 "LocaleModel.chpl"
  call_tmp13 = ((locale)(wrap_call_tmp3));
#line 204 "LocaleModel.chpl"
  coerce_tmp3 = call_tmp13;
#line 204 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp3, INT64(204), INT64(23));
#line 204 "LocaleModel.chpl"
  call_tmp14 = &((coerce_tmp3)->nPUsPhysAll);
#line 204 "LocaleModel.chpl"
  *(call_tmp14) = INT64(0);
#line 205 "LocaleModel.chpl"
  call_tmp15 = ((locale)(wrap_call_tmp3));
#line 205 "LocaleModel.chpl"
  coerce_tmp4 = call_tmp15;
#line 205 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp4, INT64(205), INT64(23));
#line 205 "LocaleModel.chpl"
  call_tmp16 = &((coerce_tmp4)->nPUsLogAcc);
#line 205 "LocaleModel.chpl"
  *(call_tmp16) = INT64(0);
#line 206 "LocaleModel.chpl"
  call_tmp17 = ((locale)(wrap_call_tmp3));
#line 206 "LocaleModel.chpl"
  coerce_tmp5 = call_tmp17;
#line 206 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp5, INT64(206), INT64(23));
#line 206 "LocaleModel.chpl"
  call_tmp18 = &((coerce_tmp5)->nPUsLogAll);
#line 206 "LocaleModel.chpl"
  *(call_tmp18) = INT64(0);
#line 207 "LocaleModel.chpl"
  call_tmp19 = ((locale)(wrap_call_tmp3));
#line 207 "LocaleModel.chpl"
  coerce_tmp6 = call_tmp19;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp6, INT64(207), INT64(23));
#line 207 "LocaleModel.chpl"
  call_tmp20 = &((coerce_tmp6)->maxTaskPar);
#line 207 "LocaleModel.chpl"
  *(call_tmp20) = INT64(0);
#line 201 "LocaleModel.chpl"
  return wrap_call_tmp3;
#line 201 "LocaleModel.chpl"
}

#line 201 "LocaleModel.chpl"
/* LocaleModel.chpl:213 */
#line 201 "LocaleModel.chpl"
static void init2(RootLocale this5, int64_t _ln, int32_t _fn) {
#line 201 "LocaleModel.chpl"
  memory_order local_memory_order_relaxed;
#line 201 "LocaleModel.chpl"
  int32_t local_c_sublocid_any;
#line 201 "LocaleModel.chpl"
  int64_t local_numLocales;
#line 201 "LocaleModel.chpl"
  localesBarrier b;
#line 201 "LocaleModel.chpl"
  localesBarrier this6;
#line 201 "LocaleModel.chpl"
  localesBarrier wrap_call_tmp;
#line 201 "LocaleModel.chpl"
  _ref_localesBarrier ret_to_arg_ref_tmp_ = NULL;
#line 201 "LocaleModel.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F flags = NULL;
#line 201 "LocaleModel.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F type_tmp = NULL;
#line 201 "LocaleModel.chpl"
  range_int64_t_boundedLow_F call_tmp;
#line 201 "LocaleModel.chpl"
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
#line 201 "LocaleModel.chpl"
  int64_t call_tmp2;
#line 201 "LocaleModel.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 201 "LocaleModel.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 201 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
#line 201 "LocaleModel.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
#line 201 "LocaleModel.chpl"
  chpl___RuntimeTypeInfo3 call_tmp5;
#line 201 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_ = NULL;
#line 201 "LocaleModel.chpl"
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
#line 201 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
#line 201 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t this7 = NULL;
#line 201 "LocaleModel.chpl"
  int64_t call_tmp6;
#line 201 "LocaleModel.chpl"
  c_void_ptr cast_tmp;
#line 201 "LocaleModel.chpl"
  atomic_int64 _init_class_tmp_;
#line 201 "LocaleModel.chpl"
  atomic_int64 this8;
#line 201 "LocaleModel.chpl"
  atomic_int_least64_t ret;
#line 201 "LocaleModel.chpl"
  atomic_int_least64_t type_tmp2;
#line 201 "LocaleModel.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 201 "LocaleModel.chpl"
  atomic_int64 wrap_call_tmp2;
#line 201 "LocaleModel.chpl"
  c_void_ptr call_tmp7;
#line 201 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp3 = NULL;
#line 201 "LocaleModel.chpl"
  int64_t call_tmp8;
#line 201 "LocaleModel.chpl"
  int64_t call_tmp9;
#line 201 "LocaleModel.chpl"
  int64_t _ic__F1_high;
#line 201 "LocaleModel.chpl"
  int64_t i;
#line 201 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
#line 201 "LocaleModel.chpl"
  _class_localscoforall_fn2 _args_forcoforall_fn = NULL;
#line 201 "LocaleModel.chpl"
  int64_t chpl_here_alloc_size;
#line 201 "LocaleModel.chpl"
  c_void_ptr chpl_here_alloc_tmp;
#line 201 "LocaleModel.chpl"
  c_void_ptr _args_vforcoforall_fn;
#line 201 "LocaleModel.chpl"
  int64_t _args_sizecoforall_fn;
#line 201 "LocaleModel.chpl"
  _ref_c_void_ptr _taskListcoforall_fn = NULL;
#line 201 "LocaleModel.chpl"
  int64_t _taskListNodecoforall_fn;
#line 201 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t delete_tmp = NULL;
#line 201 "LocaleModel.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 201 "LocaleModel.chpl"
  _ref_atomic_int_least64_t call_tmp10 = NULL;
#line 201 "LocaleModel.chpl"
  c_void_ptr call_tmp11;
#line 201 "LocaleModel.chpl"
  locale call_tmp12 = NULL;
#line 201 "LocaleModel.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 201 "LocaleModel.chpl"
  locale call_tmp13 = NULL;
#line 201 "LocaleModel.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 201 "LocaleModel.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 224 "LocaleModel.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 224 "LocaleModel.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 214 "LocaleModel.chpl"
  local_numLocales = numLocales;
#line 214 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 214 "LocaleModel.chpl"
  _construct_localesBarrier(&this6, ret_to_arg_ref_tmp_, _ln, _fn);
#line 214 "LocaleModel.chpl"
  b = wrap_call_tmp;
#line 214 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp;
#line 214 "LocaleModel.chpl"
  chpl_build_low_bounded_range(INT64(1), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 214 "LocaleModel.chpl"
  call_tmp2 = (local_numLocales - INT64(1));
#line 214 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp3;
#line 214 "LocaleModel.chpl"
  chpl___POUND_(&call_tmp, call_tmp2, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 214 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_4 = &call_tmp4;
#line 214 "LocaleModel.chpl"
  chpl__ensureDomainExpr2(&call_tmp3, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 214 "LocaleModel.chpl"
  call_tmp5 = chpl__buildArrayRuntimeType4(call_tmp4, _ln, _fn);
#line 214 "LocaleModel.chpl"
  _runtime_type_tmp_ = (&call_tmp5)->dom;
#line 214 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_5 = &type_tmp;
#line 214 "LocaleModel.chpl"
  chpl__convertRuntimeTypeToValue5(_runtime_type_tmp_, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 214 "LocaleModel.chpl"
  flags = type_tmp;
#line 214 "LocaleModel.chpl"
  call_tmp6 = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
#line 214 "LocaleModel.chpl"
  cast_tmp = chpl_here_alloc(call_tmp6, INT16(2), _ln, _fn);
#line 214 "LocaleModel.chpl"
  this7 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
#line 214 "LocaleModel.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  (this7)->i = _init_class_tmp_;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  (this7)->taskCnt = INT64(0);
#line 214 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  (this7)->taskList = NULL;
#line 214 "LocaleModel.chpl"
  ret = type_tmp2;
#line 214 "LocaleModel.chpl"
  _ref_tmp_ = &ret;
#line 214 "LocaleModel.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 214 "LocaleModel.chpl"
  (&this8)->_v = ret;
#line 214 "LocaleModel.chpl"
  wrap_call_tmp2 = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 214 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  (this7)->i = wrap_call_tmp2;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  (this7)->taskCnt = INT64(0);
#line 214 "LocaleModel.chpl"
  call_tmp7 = ((c_void_ptr)(nil));
#line 214 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  (this7)->taskList = call_tmp7;
#line 214 "LocaleModel.chpl"
  wrap_call_tmp3 = _construct__EndCount(&wrap_call_tmp2, INT64(0), call_tmp7, this7, _ln, _fn);
#line 214 "LocaleModel.chpl"
  _coforallCount = wrap_call_tmp3;
#line 214 "LocaleModel.chpl"
  call_tmp8 = (INT64(0) + local_numLocales);
#line 214 "LocaleModel.chpl"
  call_tmp9 = (call_tmp8 - INT64(1));
#line 214 "LocaleModel.chpl"
  _ic__F1_high = call_tmp9;
#line 214 "LocaleModel.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp9, INT64(1), INT64(0), call_tmp9, UINT8(true), _ln, _fn);
#line 214 "LocaleModel.chpl"
  for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 214 "LocaleModel.chpl"
    _upEndCount(_coforallCount, _ln, _fn);
#line 214 "LocaleModel.chpl"
    rvfDerefTmp = _coforallCount;
#line 214 "LocaleModel.chpl"
    chpl_here_alloc_size = sizeof(chpl__class_localscoforall_fn2_object);
#line 214 "LocaleModel.chpl"
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(37), _ln, _fn);
#line 214 "LocaleModel.chpl"
    _args_forcoforall_fn = ((_class_localscoforall_fn2)(chpl_here_alloc_tmp));
#line 214 "LocaleModel.chpl"
    chpl_check_nil(_args_forcoforall_fn, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_0_b = b;
#line 214 "LocaleModel.chpl"
    chpl_check_nil(_args_forcoforall_fn, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_1_flags = flags;
#line 214 "LocaleModel.chpl"
    chpl_check_nil(_args_forcoforall_fn, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_2__yieldedIndex = i;
#line 214 "LocaleModel.chpl"
    chpl_check_nil(_args_forcoforall_fn, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_3_rvfDerefTmp = rvfDerefTmp;
#line 214 "LocaleModel.chpl"
    chpl_check_nil(_args_forcoforall_fn, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_4_this = this5;
#line 214 "LocaleModel.chpl"
    _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 214 "LocaleModel.chpl"
    _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn2_object);
#line 214 "LocaleModel.chpl"
    chpl_check_nil(rvfDerefTmp, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
    _taskListcoforall_fn = &((rvfDerefTmp)->taskList);
#line 214 "LocaleModel.chpl"
    _taskListNodecoforall_fn = chpl_nodeID;
#line 214 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_ln = _ln;
#line 214 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_fn = _fn;
#line 214 "LocaleModel.chpl"
    /*** wrapcoforall_fn2 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(1), ((void*)(_args_vforcoforall_fn)), _taskListcoforall_fn, _taskListNodecoforall_fn, INT64(214), INT32(23));
#line 214 "LocaleModel.chpl"
  }
#line 214 "LocaleModel.chpl"
  _waitEndCount(_coforallCount, _ln, _fn);
#line 214 "LocaleModel.chpl"
  delete_tmp = _coforallCount;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(delete_tmp, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  _field_destructor_tmp_ = &((delete_tmp)->i);
#line 214 "LocaleModel.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  call_tmp10 = &((_field_destructor_tmp_)->_v);
#line 214 "LocaleModel.chpl"
  atomic_destroy_int_least64_t(call_tmp10);
#line 214 "LocaleModel.chpl"
  call_tmp11 = ((void*)(delete_tmp));
#line 214 "LocaleModel.chpl"
  chpl_here_free(call_tmp11, _ln, _fn);
#line 214 "LocaleModel.chpl"
  chpl__autoDestroy2(call_tmp4, _ln, _fn);
#line 214 "LocaleModel.chpl"
  chpl__autoDestroy5(flags, _ln, _fn);
#line 224 "LocaleModel.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 224 "LocaleModel.chpl"
  call_tmp13 = chpl_localeID_to_locale(&_autoCopy_tmp_, _ln, _fn);
#line 224 "LocaleModel.chpl"
  call_tmp12 = call_tmp13;
#line 224 "LocaleModel.chpl"
  chpl_check_nil(call_tmp12, INT64(224), INT64(23));
#line 224 "LocaleModel.chpl"
  call_tmp14 = &((call_tmp12)->runningTaskCounter);
#line 224 "LocaleModel.chpl"
  chpl_check_nil(call_tmp14, INT64(224), INT64(23));
#line 224 "LocaleModel.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 224 "LocaleModel.chpl"
  atomic_store_explicit_int_least64_t(call_tmp15, INT64(0), local_memory_order_relaxed);
#line 213 "LocaleModel.chpl"
  return;
#line 213 "LocaleModel.chpl"
}

#line 213 "LocaleModel.chpl"
/* LocaleModel.chpl:214 */
#line 213 "LocaleModel.chpl"
static void wrapcoforall_fn2(_class_localscoforall_fn2 dummy_c) {
#line 213 "LocaleModel.chpl"
  int32_t _fn;
#line 213 "LocaleModel.chpl"
  int64_t _ln;
#line 213 "LocaleModel.chpl"
  localesBarrier _0_b;
#line 213 "LocaleModel.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _1_flags = NULL;
#line 213 "LocaleModel.chpl"
  int64_t _2__yieldedIndex;
#line 213 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t _3_rvfDerefTmp = NULL;
#line 213 "LocaleModel.chpl"
  RootLocale _4_this = NULL;
#line 214 "LocaleModel.chpl"
  _fn = (dummy_c)->_fn;
#line 214 "LocaleModel.chpl"
  _ln = (dummy_c)->_ln;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(dummy_c, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  _0_b = (dummy_c)->_0_b;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(dummy_c, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  _1_flags = (dummy_c)->_1_flags;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(dummy_c, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  _2__yieldedIndex = (dummy_c)->_2__yieldedIndex;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(dummy_c, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  _3_rvfDerefTmp = (dummy_c)->_3_rvfDerefTmp;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(dummy_c, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  _4_this = (dummy_c)->_4_this;
#line 214 "LocaleModel.chpl"
  coforall_fn2(&_0_b, _1_flags, _2__yieldedIndex, _3_rvfDerefTmp, _4_this, _ln, _fn);
#line 214 "LocaleModel.chpl"
  chpl_here_free(((void*)(dummy_c)), _ln, _fn);
#line 214 "LocaleModel.chpl"
  return;
#line 214 "LocaleModel.chpl"
}

#line 214 "LocaleModel.chpl"
/* LocaleModel.chpl:214 */
#line 214 "LocaleModel.chpl"
static void coforall_fn2(localesBarrier* const b, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t locIdx, chpl___EndCount_atomic_int64_int64_t _coforallCount, RootLocale this5, int64_t _ln, int32_t _fn) {
#line 214 "LocaleModel.chpl"
  string local__str_literal_974;
#line 214 "LocaleModel.chpl"
  int32_t local_c_sublocid_any;
#line 214 "LocaleModel.chpl"
  int32_t call_tmp;
#line 214 "LocaleModel.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 214 "LocaleModel.chpl"
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
#line 214 "LocaleModel.chpl"
  LocaleModel const_tmp = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp2 = NULL;
#line 214 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp3 = NULL;
#line 214 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
#line 214 "LocaleModel.chpl"
  _tuple_1_star_int64_t i;
#line 214 "LocaleModel.chpl"
  _tuple_1_star_int64_t this6;
#line 214 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp4 = NULL;
#line 214 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 214 "LocaleModel.chpl"
  chpl_bool call_tmp5;
#line 214 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
#line 214 "LocaleModel.chpl"
  chpl_bool call_tmp6;
#line 214 "LocaleModel.chpl"
  string call_tmp7;
#line 214 "LocaleModel.chpl"
  string _autoCopy_tmp_2;
#line 214 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 214 "LocaleModel.chpl"
  string call_tmp8;
#line 214 "LocaleModel.chpl"
  string _autoCopy_tmp_3;
#line 214 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
#line 214 "LocaleModel.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 214 "LocaleModel.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 214 "LocaleModel.chpl"
  int64_t sum;
#line 214 "LocaleModel.chpl"
  _ref__tuple_1_star_int64_t call_tmp9 = NULL;
#line 214 "LocaleModel.chpl"
  int64_t coerce_tmp3;
#line 214 "LocaleModel.chpl"
  int64_t coerce_tmp4;
#line 214 "LocaleModel.chpl"
  int64_t call_tmp10;
#line 214 "LocaleModel.chpl"
  _ddata_locale coerce_tmp5 = NULL;
#line 214 "LocaleModel.chpl"
  _ref_locale call_tmp11 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp12 = NULL;
#line 214 "LocaleModel.chpl"
  locale coerce_tmp6 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp13 = NULL;
#line 214 "LocaleModel.chpl"
  _ref_int64_t call_tmp14 = NULL;
#line 214 "LocaleModel.chpl"
  locale coerce_tmp7 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp15 = NULL;
#line 214 "LocaleModel.chpl"
  int64_t coerce_tmp8;
#line 214 "LocaleModel.chpl"
  locale coerce_tmp9 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp16 = NULL;
#line 214 "LocaleModel.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 214 "LocaleModel.chpl"
  locale coerce_tmp10 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp18 = NULL;
#line 214 "LocaleModel.chpl"
  int64_t coerce_tmp11;
#line 214 "LocaleModel.chpl"
  locale coerce_tmp12 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp19 = NULL;
#line 214 "LocaleModel.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 214 "LocaleModel.chpl"
  locale coerce_tmp13 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp21 = NULL;
#line 214 "LocaleModel.chpl"
  int64_t coerce_tmp14;
#line 214 "LocaleModel.chpl"
  locale coerce_tmp15 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp22 = NULL;
#line 214 "LocaleModel.chpl"
  _ref_int64_t call_tmp23 = NULL;
#line 214 "LocaleModel.chpl"
  locale coerce_tmp16 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp24 = NULL;
#line 214 "LocaleModel.chpl"
  int64_t coerce_tmp17;
#line 214 "LocaleModel.chpl"
  locale coerce_tmp18 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp25 = NULL;
#line 214 "LocaleModel.chpl"
  _ref_int64_t call_tmp26 = NULL;
#line 214 "LocaleModel.chpl"
  locale coerce_tmp19 = NULL;
#line 214 "LocaleModel.chpl"
  locale call_tmp27 = NULL;
#line 214 "LocaleModel.chpl"
  int64_t coerce_tmp20;
#line 214 "LocaleModel.chpl"
  _ref_localesBarrier _ref_tmp_3 = NULL;
#line 216 "LocaleModel.chpl"
  local__str_literal_974 = _str_literal_974;
#line 214 "LocaleModel.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 214 "LocaleModel.chpl"
  call_tmp = ((int32_t)(locIdx));
#line 214 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 214 "LocaleModel.chpl"
  chpl_buildLocaleID(call_tmp, local_c_sublocid_any, ret_to_arg_ref_tmp_, _ln, _fn);
#line 214 "LocaleModel.chpl"
  chpl_defaultDistInitPrivate(_ln, _fn);
#line 215 "LocaleModel.chpl"
  call_tmp2 = ((locale)(this5));
#line 215 "LocaleModel.chpl"
  const_tmp = LocaleModel2(call_tmp2, _ln, _fn);
#line 216 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(216), INT64(23));
#line 216 "LocaleModel.chpl"
  call_tmp3 = (this5)->myLocales;
#line 216 "LocaleModel.chpl"
  coerce_tmp = call_tmp3;
#line 216 "LocaleModel.chpl"
  *(this6 + INT64(0)) = locIdx;
#line 216 "LocaleModel.chpl"
  *(i + INT64(0)) = *(this6 + INT64(0));
#line 216 "LocaleModel.chpl"
  ret = coerce_tmp;
#line 216 "LocaleModel.chpl"
  call_tmp4 = ret;
#line 216 "LocaleModel.chpl"
  chpl_check_nil(call_tmp4, INT64(216), INT64(23));
#line 216 "LocaleModel.chpl"
  coerce_tmp2 = (call_tmp4)->dom;
#line 216 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp2, INT64(216), INT64(23));
#line 216 "LocaleModel.chpl"
  call_tmp5 = dsiMember(coerce_tmp2, &this6, _ln, _fn);
#line 216 "LocaleModel.chpl"
  call_tmp6 = (! call_tmp5);
#line 216 "LocaleModel.chpl"
  if (call_tmp6) /* ZLINE: 216 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 216 "LocaleModel.chpl"
  {
#line 216 "LocaleModel.chpl"
    ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
#line 216 "LocaleModel.chpl"
    _stringify_index(&this6, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 216 "LocaleModel.chpl"
    call_tmp7 = _autoCopy_tmp_2;
#line 216 "LocaleModel.chpl"
    ret_to_arg_ref_tmp_3 = &_autoCopy_tmp_3;
#line 216 "LocaleModel.chpl"
    chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_2, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 216 "LocaleModel.chpl"
    call_tmp8 = _autoCopy_tmp_3;
#line 216 "LocaleModel.chpl"
    halt(&_autoCopy_tmp_3, _ln, _fn);
#line 216 "LocaleModel.chpl"
    _ref_tmp_ = &call_tmp7;
#line 216 "LocaleModel.chpl"
    chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 216 "LocaleModel.chpl"
    _ref_tmp_2 = &call_tmp8;
#line 216 "LocaleModel.chpl"
    chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 216 "LocaleModel.chpl"
  }
#line 216 "LocaleModel.chpl"
  sum = INT64(0);
#line 216 "LocaleModel.chpl"
  chpl_check_nil(call_tmp4, INT64(216), INT64(23));
#line 216 "LocaleModel.chpl"
  call_tmp9 = &((call_tmp4)->blk);
#line 216 "LocaleModel.chpl"
  coerce_tmp3 = *(i + INT64(0));
#line 216 "LocaleModel.chpl"
  coerce_tmp4 = *(*(call_tmp9) + INT64(0));
#line 216 "LocaleModel.chpl"
  call_tmp10 = (coerce_tmp3 * coerce_tmp4);
#line 216 "LocaleModel.chpl"
  sum += call_tmp10;
#line 216 "LocaleModel.chpl"
  chpl_check_nil(call_tmp4, INT64(216), INT64(23));
#line 216 "LocaleModel.chpl"
  coerce_tmp5 = (call_tmp4)->shiftedData;
#line 216 "LocaleModel.chpl"
  call_tmp11 = (coerce_tmp5 + sum);
#line 216 "LocaleModel.chpl"
  call_tmp12 = ((locale)(const_tmp));
#line 216 "LocaleModel.chpl"
  *(call_tmp11) = call_tmp12;
#line 217 "LocaleModel.chpl"
  call_tmp13 = ((locale)(this5));
#line 217 "LocaleModel.chpl"
  coerce_tmp6 = call_tmp13;
#line 217 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp6, INT64(217), INT64(23));
#line 217 "LocaleModel.chpl"
  call_tmp14 = &((coerce_tmp6)->nPUsPhysAcc);
#line 217 "LocaleModel.chpl"
  call_tmp15 = ((locale)(const_tmp));
#line 217 "LocaleModel.chpl"
  coerce_tmp7 = call_tmp15;
#line 217 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp7, INT64(217), INT64(23));
#line 217 "LocaleModel.chpl"
  coerce_tmp8 = (coerce_tmp7)->nPUsPhysAcc;
#line 217 "LocaleModel.chpl"
  *(call_tmp14) += coerce_tmp8;
#line 218 "LocaleModel.chpl"
  call_tmp16 = ((locale)(this5));
#line 218 "LocaleModel.chpl"
  coerce_tmp9 = call_tmp16;
#line 218 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp9, INT64(218), INT64(23));
#line 218 "LocaleModel.chpl"
  call_tmp17 = &((coerce_tmp9)->nPUsPhysAll);
#line 218 "LocaleModel.chpl"
  call_tmp18 = ((locale)(const_tmp));
#line 218 "LocaleModel.chpl"
  coerce_tmp10 = call_tmp18;
#line 218 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp10, INT64(218), INT64(23));
#line 218 "LocaleModel.chpl"
  coerce_tmp11 = (coerce_tmp10)->nPUsPhysAll;
#line 218 "LocaleModel.chpl"
  *(call_tmp17) += coerce_tmp11;
#line 219 "LocaleModel.chpl"
  call_tmp19 = ((locale)(this5));
#line 219 "LocaleModel.chpl"
  coerce_tmp12 = call_tmp19;
#line 219 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp12, INT64(219), INT64(23));
#line 219 "LocaleModel.chpl"
  call_tmp20 = &((coerce_tmp12)->nPUsLogAcc);
#line 219 "LocaleModel.chpl"
  call_tmp21 = ((locale)(const_tmp));
#line 219 "LocaleModel.chpl"
  coerce_tmp13 = call_tmp21;
#line 219 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp13, INT64(219), INT64(23));
#line 219 "LocaleModel.chpl"
  coerce_tmp14 = (coerce_tmp13)->nPUsLogAcc;
#line 219 "LocaleModel.chpl"
  *(call_tmp20) += coerce_tmp14;
#line 220 "LocaleModel.chpl"
  call_tmp22 = ((locale)(this5));
#line 220 "LocaleModel.chpl"
  coerce_tmp15 = call_tmp22;
#line 220 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp15, INT64(220), INT64(23));
#line 220 "LocaleModel.chpl"
  call_tmp23 = &((coerce_tmp15)->nPUsLogAll);
#line 220 "LocaleModel.chpl"
  call_tmp24 = ((locale)(const_tmp));
#line 220 "LocaleModel.chpl"
  coerce_tmp16 = call_tmp24;
#line 220 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp16, INT64(220), INT64(23));
#line 220 "LocaleModel.chpl"
  coerce_tmp17 = (coerce_tmp16)->nPUsLogAll;
#line 220 "LocaleModel.chpl"
  *(call_tmp23) += coerce_tmp17;
#line 221 "LocaleModel.chpl"
  call_tmp25 = ((locale)(this5));
#line 221 "LocaleModel.chpl"
  coerce_tmp18 = call_tmp25;
#line 221 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp18, INT64(221), INT64(23));
#line 221 "LocaleModel.chpl"
  call_tmp26 = &((coerce_tmp18)->maxTaskPar);
#line 221 "LocaleModel.chpl"
  call_tmp27 = ((locale)(const_tmp));
#line 221 "LocaleModel.chpl"
  coerce_tmp19 = call_tmp27;
#line 221 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp19, INT64(221), INT64(23));
#line 221 "LocaleModel.chpl"
  coerce_tmp20 = (coerce_tmp19)->maxTaskPar;
#line 221 "LocaleModel.chpl"
  *(call_tmp26) += coerce_tmp20;
#line 214 "LocaleModel.chpl"
  _ref_tmp_3 = b;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(_ref_tmp_3, INT64(214), INT64(23));
#line 214 "LocaleModel.chpl"
  wait5(_ref_tmp_3, locIdx, flags, _ln, _fn);
#line 214 "LocaleModel.chpl"
  chpl_rootLocaleInitPrivate(locIdx, _ln, _fn);
#line 214 "LocaleModel.chpl"
  _downEndCount(_coforallCount, _ln, _fn);
#line 214 "LocaleModel.chpl"
  return;
#line 214 "LocaleModel.chpl"
}

#line 214 "LocaleModel.chpl"
/* LocaleModel.chpl:231 */
#line 214 "LocaleModel.chpl"
static int64_t chpl_id3(RootLocale this5, int64_t _ln, int32_t _fn) {
#line 214 "LocaleModel.chpl"
  int64_t local_numLocales;
#line 214 "LocaleModel.chpl"
  int64_t ret;
#line 231 "LocaleModel.chpl"
  local_numLocales = numLocales;
#line 231 "LocaleModel.chpl"
  ret = local_numLocales;
#line 231 "LocaleModel.chpl"
  return ret;
#line 231 "LocaleModel.chpl"
}

#line 231 "LocaleModel.chpl"
/* LocaleModel.chpl:251 */
#line 231 "LocaleModel.chpl"
static locale getChild3(RootLocale this5, int64_t idx, int64_t _ln, int32_t _fn) {
#line 231 "LocaleModel.chpl"
  string local__str_literal_974;
#line 231 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 231 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
#line 231 "LocaleModel.chpl"
  _tuple_1_star_int64_t i;
#line 231 "LocaleModel.chpl"
  _tuple_1_star_int64_t this6;
#line 231 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
#line 231 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 231 "LocaleModel.chpl"
  locale ret2 = NULL;
#line 231 "LocaleModel.chpl"
  chpl_bool call_tmp3;
#line 231 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
#line 231 "LocaleModel.chpl"
  chpl_bool call_tmp4;
#line 231 "LocaleModel.chpl"
  string call_tmp5;
#line 231 "LocaleModel.chpl"
  string _autoCopy_tmp_;
#line 231 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 231 "LocaleModel.chpl"
  string call_tmp6;
#line 231 "LocaleModel.chpl"
  string _autoCopy_tmp_2;
#line 231 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 231 "LocaleModel.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 231 "LocaleModel.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 231 "LocaleModel.chpl"
  int64_t sum;
#line 231 "LocaleModel.chpl"
  _ref__tuple_1_star_int64_t call_tmp7 = NULL;
#line 231 "LocaleModel.chpl"
  int64_t coerce_tmp3;
#line 231 "LocaleModel.chpl"
  int64_t coerce_tmp4;
#line 231 "LocaleModel.chpl"
  int64_t call_tmp8;
#line 231 "LocaleModel.chpl"
  _ddata_locale coerce_tmp5 = NULL;
#line 231 "LocaleModel.chpl"
  _ref_locale call_tmp9 = NULL;
#line 251 "LocaleModel.chpl"
  local__str_literal_974 = _str_literal_974;
#line 251 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(251), INT64(23));
#line 251 "LocaleModel.chpl"
  call_tmp = (this5)->myLocales;
#line 251 "LocaleModel.chpl"
  coerce_tmp = call_tmp;
#line 251 "LocaleModel.chpl"
  *(this6 + INT64(0)) = idx;
#line 251 "LocaleModel.chpl"
  *(i + INT64(0)) = *(this6 + INT64(0));
#line 251 "LocaleModel.chpl"
  ret = coerce_tmp;
#line 251 "LocaleModel.chpl"
  call_tmp2 = ret;
#line 251 "LocaleModel.chpl"
  chpl_check_nil(call_tmp2, INT64(251), INT64(23));
#line 251 "LocaleModel.chpl"
  coerce_tmp2 = (call_tmp2)->dom;
#line 251 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp2, INT64(251), INT64(23));
#line 251 "LocaleModel.chpl"
  call_tmp3 = dsiMember(coerce_tmp2, &this6, _ln, _fn);
#line 251 "LocaleModel.chpl"
  call_tmp4 = (! call_tmp3);
#line 251 "LocaleModel.chpl"
  if (call_tmp4) /* ZLINE: 251 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 251 "LocaleModel.chpl"
  {
#line 251 "LocaleModel.chpl"
    ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 251 "LocaleModel.chpl"
    _stringify_index(&this6, ret_to_arg_ref_tmp_, _ln, _fn);
#line 251 "LocaleModel.chpl"
    call_tmp5 = _autoCopy_tmp_;
#line 251 "LocaleModel.chpl"
    ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
#line 251 "LocaleModel.chpl"
    chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 251 "LocaleModel.chpl"
    call_tmp6 = _autoCopy_tmp_2;
#line 251 "LocaleModel.chpl"
    halt(&_autoCopy_tmp_2, _ln, _fn);
#line 251 "LocaleModel.chpl"
    _ref_tmp_ = &call_tmp5;
#line 251 "LocaleModel.chpl"
    chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 251 "LocaleModel.chpl"
    _ref_tmp_2 = &call_tmp6;
#line 251 "LocaleModel.chpl"
    chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 251 "LocaleModel.chpl"
  }
#line 251 "LocaleModel.chpl"
  sum = INT64(0);
#line 251 "LocaleModel.chpl"
  chpl_check_nil(call_tmp2, INT64(251), INT64(23));
#line 251 "LocaleModel.chpl"
  call_tmp7 = &((call_tmp2)->blk);
#line 251 "LocaleModel.chpl"
  coerce_tmp3 = *(i + INT64(0));
#line 251 "LocaleModel.chpl"
  coerce_tmp4 = *(*(call_tmp7) + INT64(0));
#line 251 "LocaleModel.chpl"
  call_tmp8 = (coerce_tmp3 * coerce_tmp4);
#line 251 "LocaleModel.chpl"
  sum += call_tmp8;
#line 251 "LocaleModel.chpl"
  chpl_check_nil(call_tmp2, INT64(251), INT64(23));
#line 251 "LocaleModel.chpl"
  coerce_tmp5 = (call_tmp2)->shiftedData;
#line 251 "LocaleModel.chpl"
  call_tmp9 = (coerce_tmp5 + sum);
#line 251 "LocaleModel.chpl"
  ret2 = *(call_tmp9);
#line 251 "LocaleModel.chpl"
  return ret2;
#line 251 "LocaleModel.chpl"
}

#line 251 "LocaleModel.chpl"
/* LocaleModel.chpl:259 */
#line 251 "LocaleModel.chpl"
static DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray2(RootLocale this5, int64_t _ln, int32_t _fn) {
#line 251 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 259 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(259), INT64(23));
#line 259 "LocaleModel.chpl"
  call_tmp = (this5)->myLocales;
#line 259 "LocaleModel.chpl"
  return call_tmp;
#line 259 "LocaleModel.chpl"
}

#line 259 "LocaleModel.chpl"
/* LocaleModel.chpl:259 */
#line 259 "LocaleModel.chpl"
static void getDefaultLocaleArray(RootLocale this5, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 259 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 259 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(259), INT64(23));
#line 259 "LocaleModel.chpl"
  call_tmp = (this5)->myLocales;
#line 259 "LocaleModel.chpl"
  *(_retArg) = chpl__autoCopy4(call_tmp, _ln, _fn);
#line 259 "LocaleModel.chpl"
  return;
#line 259 "LocaleModel.chpl"
}

#line 259 "LocaleModel.chpl"
/* LocaleModel.chpl:261 */
#line 259 "LocaleModel.chpl"
static locale localeIDtoLocale2(RootLocale this5, chpl_localeID_t* const id2, int64_t _ln, int32_t _fn) {
#line 259 "LocaleModel.chpl"
  string local__str_literal_974;
#line 259 "LocaleModel.chpl"
  int32_t call_tmp;
#line 259 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
#line 259 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
#line 259 "LocaleModel.chpl"
  int64_t call_tmp3;
#line 259 "LocaleModel.chpl"
  _tuple_1_star_int64_t i;
#line 259 "LocaleModel.chpl"
  _tuple_1_star_int64_t this6;
#line 259 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp4 = NULL;
#line 259 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 259 "LocaleModel.chpl"
  locale ret2 = NULL;
#line 259 "LocaleModel.chpl"
  chpl_bool call_tmp5;
#line 259 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
#line 259 "LocaleModel.chpl"
  chpl_bool call_tmp6;
#line 259 "LocaleModel.chpl"
  string call_tmp7;
#line 259 "LocaleModel.chpl"
  string _autoCopy_tmp_;
#line 259 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 259 "LocaleModel.chpl"
  string call_tmp8;
#line 259 "LocaleModel.chpl"
  string _autoCopy_tmp_2;
#line 259 "LocaleModel.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 259 "LocaleModel.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 259 "LocaleModel.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 259 "LocaleModel.chpl"
  int64_t sum;
#line 259 "LocaleModel.chpl"
  _ref__tuple_1_star_int64_t call_tmp9 = NULL;
#line 259 "LocaleModel.chpl"
  int64_t coerce_tmp3;
#line 259 "LocaleModel.chpl"
  int64_t coerce_tmp4;
#line 259 "LocaleModel.chpl"
  int64_t call_tmp10;
#line 259 "LocaleModel.chpl"
  _ddata_locale coerce_tmp5 = NULL;
#line 259 "LocaleModel.chpl"
  _ref_locale call_tmp11 = NULL;
#line 266 "LocaleModel.chpl"
  local__str_literal_974 = _str_literal_974;
#line 266 "LocaleModel.chpl"
  call_tmp = chpl_rt_nodeFromLocaleID(*(id2));
#line 266 "LocaleModel.chpl"
  chpl_check_nil(this5, INT64(266), INT64(23));
#line 266 "LocaleModel.chpl"
  call_tmp2 = (this5)->myLocales;
#line 266 "LocaleModel.chpl"
  coerce_tmp = call_tmp2;
#line 266 "LocaleModel.chpl"
  call_tmp3 = ((int64_t)(call_tmp));
#line 266 "LocaleModel.chpl"
  *(this6 + INT64(0)) = call_tmp3;
#line 266 "LocaleModel.chpl"
  *(i + INT64(0)) = *(this6 + INT64(0));
#line 266 "LocaleModel.chpl"
  ret = coerce_tmp;
#line 266 "LocaleModel.chpl"
  call_tmp4 = ret;
#line 266 "LocaleModel.chpl"
  chpl_check_nil(call_tmp4, INT64(266), INT64(23));
#line 266 "LocaleModel.chpl"
  coerce_tmp2 = (call_tmp4)->dom;
#line 266 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp2, INT64(266), INT64(23));
#line 266 "LocaleModel.chpl"
  call_tmp5 = dsiMember(coerce_tmp2, &this6, _ln, _fn);
#line 266 "LocaleModel.chpl"
  call_tmp6 = (! call_tmp5);
#line 266 "LocaleModel.chpl"
  if (call_tmp6) /* ZLINE: 266 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 266 "LocaleModel.chpl"
  {
#line 266 "LocaleModel.chpl"
    ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 266 "LocaleModel.chpl"
    _stringify_index(&this6, ret_to_arg_ref_tmp_, _ln, _fn);
#line 266 "LocaleModel.chpl"
    call_tmp7 = _autoCopy_tmp_;
#line 266 "LocaleModel.chpl"
    ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
#line 266 "LocaleModel.chpl"
    chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 266 "LocaleModel.chpl"
    call_tmp8 = _autoCopy_tmp_2;
#line 266 "LocaleModel.chpl"
    halt(&_autoCopy_tmp_2, _ln, _fn);
#line 266 "LocaleModel.chpl"
    _ref_tmp_ = &call_tmp7;
#line 266 "LocaleModel.chpl"
    chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 266 "LocaleModel.chpl"
    _ref_tmp_2 = &call_tmp8;
#line 266 "LocaleModel.chpl"
    chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 266 "LocaleModel.chpl"
  }
#line 266 "LocaleModel.chpl"
  sum = INT64(0);
#line 266 "LocaleModel.chpl"
  chpl_check_nil(call_tmp4, INT64(266), INT64(23));
#line 266 "LocaleModel.chpl"
  call_tmp9 = &((call_tmp4)->blk);
#line 266 "LocaleModel.chpl"
  coerce_tmp3 = *(i + INT64(0));
#line 266 "LocaleModel.chpl"
  coerce_tmp4 = *(*(call_tmp9) + INT64(0));
#line 266 "LocaleModel.chpl"
  call_tmp10 = (coerce_tmp3 * coerce_tmp4);
#line 266 "LocaleModel.chpl"
  sum += call_tmp10;
#line 266 "LocaleModel.chpl"
  chpl_check_nil(call_tmp4, INT64(266), INT64(23));
#line 266 "LocaleModel.chpl"
  coerce_tmp5 = (call_tmp4)->shiftedData;
#line 266 "LocaleModel.chpl"
  call_tmp11 = (coerce_tmp5 + sum);
#line 266 "LocaleModel.chpl"
  ret2 = *(call_tmp11);
#line 261 "LocaleModel.chpl"
  return ret2;
#line 261 "LocaleModel.chpl"
}

#line 261 "LocaleModel.chpl"
/* LocaleModel.chpl:291 */
#line 261 "LocaleModel.chpl"
static c_void_ptr chpl_here_alloc(int64_t size2, int16_t md, int64_t _ln, int32_t _fn) {
#line 261 "LocaleModel.chpl"
  string local__str_literal_2592;
#line 261 "LocaleModel.chpl"
  chpl_bool call_tmp;
#line 261 "LocaleModel.chpl"
  uint64_t call_tmp2;
#line 261 "LocaleModel.chpl"
  int16_t call_tmp3;
#line 261 "LocaleModel.chpl"
  int16_t call_tmp4;
#line 261 "LocaleModel.chpl"
  c_void_ptr call_tmp5;
#line 294 "LocaleModel.chpl"
  local__str_literal_2592 = _str_literal_2592;
#line 294 "LocaleModel.chpl"
  call_tmp = (size2 < INT64(0));
#line 294 "LocaleModel.chpl"
  if (call_tmp) /* ZLINE: 294 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 294 "LocaleModel.chpl"
  {
#line 294 "LocaleModel.chpl"
    halt(&local__str_literal_2592, _ln, _fn);
#line 294 "LocaleModel.chpl"
  }
#line 294 "LocaleModel.chpl"
  call_tmp2 = ((uint64_t)(size2));
#line 294 "LocaleModel.chpl"
  call_tmp3 = chpl_memhook_md_num();
#line 294 "LocaleModel.chpl"
  call_tmp4 = (md + call_tmp3);
#line 294 "LocaleModel.chpl"
  call_tmp5 = chpl_mem_alloc(call_tmp2, call_tmp4, _ln, _fn);
#line 291 "LocaleModel.chpl"
  return call_tmp5;
#line 291 "LocaleModel.chpl"
}

#line 291 "LocaleModel.chpl"
/* LocaleModel.chpl:305 */
#line 291 "LocaleModel.chpl"
static c_void_ptr chpl_here_realloc(c_void_ptr ptr, int64_t size2, int16_t md, int64_t _ln, int32_t _fn) {
#line 291 "LocaleModel.chpl"
  string local__str_literal_2592;
#line 291 "LocaleModel.chpl"
  chpl_bool call_tmp;
#line 291 "LocaleModel.chpl"
  uint64_t call_tmp2;
#line 291 "LocaleModel.chpl"
  int16_t call_tmp3;
#line 291 "LocaleModel.chpl"
  int16_t call_tmp4;
#line 291 "LocaleModel.chpl"
  c_void_ptr call_tmp5;
#line 308 "LocaleModel.chpl"
  local__str_literal_2592 = _str_literal_2592;
#line 308 "LocaleModel.chpl"
  call_tmp = (size2 < INT64(0));
#line 308 "LocaleModel.chpl"
  if (call_tmp) /* ZLINE: 308 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 308 "LocaleModel.chpl"
  {
#line 308 "LocaleModel.chpl"
    halt(&local__str_literal_2592, _ln, _fn);
#line 308 "LocaleModel.chpl"
  }
#line 308 "LocaleModel.chpl"
  call_tmp2 = ((uint64_t)(size2));
#line 308 "LocaleModel.chpl"
  call_tmp3 = chpl_memhook_md_num();
#line 308 "LocaleModel.chpl"
  call_tmp4 = (md + call_tmp3);
#line 308 "LocaleModel.chpl"
  call_tmp5 = chpl_mem_realloc(ptr, call_tmp2, call_tmp4, _ln, _fn);
#line 305 "LocaleModel.chpl"
  return call_tmp5;
#line 305 "LocaleModel.chpl"
}

#line 305 "LocaleModel.chpl"
/* LocaleModel.chpl:311 */
#line 305 "LocaleModel.chpl"
static int64_t chpl_here_good_alloc_size(int64_t min_size, int64_t _ln, int32_t _fn) {
#line 305 "LocaleModel.chpl"
  string local__str_literal_2603;
#line 305 "LocaleModel.chpl"
  string local__str_literal_2592;
#line 305 "LocaleModel.chpl"
  chpl_bool call_tmp;
#line 305 "LocaleModel.chpl"
  uint64_t call_tmp2;
#line 305 "LocaleModel.chpl"
  uint64_t call_tmp3;
#line 305 "LocaleModel.chpl"
  chpl_bool call_tmp4;
#line 305 "LocaleModel.chpl"
  int64_t call_tmp5;
#line 314 "LocaleModel.chpl"
  local__str_literal_2603 = _str_literal_2603;
#line 314 "LocaleModel.chpl"
  local__str_literal_2592 = _str_literal_2592;
#line 314 "LocaleModel.chpl"
  call_tmp = (min_size < INT64(0));
#line 314 "LocaleModel.chpl"
  if (call_tmp) /* ZLINE: 314 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 314 "LocaleModel.chpl"
  {
#line 314 "LocaleModel.chpl"
    halt(&local__str_literal_2592, _ln, _fn);
#line 314 "LocaleModel.chpl"
  }
#line 314 "LocaleModel.chpl"
  call_tmp2 = ((uint64_t)(min_size));
#line 314 "LocaleModel.chpl"
  call_tmp3 = chpl_mem_good_alloc_size(call_tmp2, _ln, _fn);
#line 314 "LocaleModel.chpl"
  call_tmp4 = (call_tmp3 > UINT64(9223372036854775807));
#line 314 "LocaleModel.chpl"
  if (call_tmp4) /* ZLINE: 314 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 314 "LocaleModel.chpl"
  {
#line 314 "LocaleModel.chpl"
    halt(&local__str_literal_2603, _ln, _fn);
#line 314 "LocaleModel.chpl"
  }
#line 314 "LocaleModel.chpl"
  call_tmp5 = ((int64_t)(call_tmp3));
#line 311 "LocaleModel.chpl"
  return call_tmp5;
#line 311 "LocaleModel.chpl"
}

#line 311 "LocaleModel.chpl"
/* LocaleModel.chpl:318 */
#line 311 "LocaleModel.chpl"
static void chpl_here_free(c_void_ptr ptr, int64_t _ln, int32_t _fn) {
#line 321 "LocaleModel.chpl"
  chpl_mem_free(ptr, _ln, _fn);
#line 318 "LocaleModel.chpl"
  return;
#line 318 "LocaleModel.chpl"
}

#line 318 "LocaleModel.chpl"
/* LocaleModel.chpl:345 */
#line 318 "LocaleModel.chpl"
void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn) {
#line 318 "LocaleModel.chpl"
  int32_t call_tmp;
#line 318 "LocaleModel.chpl"
  chpl_bool call_tmp2;
#line 318 "LocaleModel.chpl"
  int32_t call_tmp3;
#line 318 "LocaleModel.chpl"
  int64_t call_tmp4;
#line 318 "LocaleModel.chpl"
  int64_t call_tmp5;
#line 350 "LocaleModel.chpl"
  call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
#line 351 "LocaleModel.chpl"
  call_tmp2 = (call_tmp == chpl_nodeID);
#line 351 "LocaleModel.chpl"
  if (call_tmp2) /* ZLINE: 353 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 351 "LocaleModel.chpl"
  {
#line 353 "LocaleModel.chpl"
    chpl_ftable_call(fn, args);
#line 353 "LocaleModel.chpl"
  } else /* ZLINE: 355 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 353 "LocaleModel.chpl"
  {
#line 355 "LocaleModel.chpl"
    call_tmp3 = chpl_sublocFromLocaleID(loc, _ln, _fn);
#line 355 "LocaleModel.chpl"
    call_tmp4 = ((int64_t)(call_tmp));
#line 355 "LocaleModel.chpl"
    call_tmp5 = ((int64_t)(call_tmp3));
#line 355 "LocaleModel.chpl"
    chpl_comm_execute_on(call_tmp4, call_tmp5, fn, args, args_size);
#line 355 "LocaleModel.chpl"
  }
#line 345 "LocaleModel.chpl"
  return;
#line 345 "LocaleModel.chpl"
}

#line 345 "LocaleModel.chpl"
/* LocaleModel.chpl:366 */
#line 345 "LocaleModel.chpl"
void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn) {
#line 345 "LocaleModel.chpl"
  int32_t call_tmp;
#line 345 "LocaleModel.chpl"
  chpl_bool call_tmp2;
#line 345 "LocaleModel.chpl"
  int32_t call_tmp3;
#line 345 "LocaleModel.chpl"
  int64_t call_tmp4;
#line 345 "LocaleModel.chpl"
  int64_t call_tmp5;
#line 371 "LocaleModel.chpl"
  call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
#line 372 "LocaleModel.chpl"
  call_tmp2 = (call_tmp == chpl_nodeID);
#line 372 "LocaleModel.chpl"
  if (call_tmp2) /* ZLINE: 374 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 372 "LocaleModel.chpl"
  {
#line 374 "LocaleModel.chpl"
    chpl_ftable_call(fn, args);
#line 374 "LocaleModel.chpl"
  } else /* ZLINE: 376 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 374 "LocaleModel.chpl"
  {
#line 376 "LocaleModel.chpl"
    call_tmp3 = chpl_sublocFromLocaleID(loc, _ln, _fn);
#line 376 "LocaleModel.chpl"
    call_tmp4 = ((int64_t)(call_tmp));
#line 376 "LocaleModel.chpl"
    call_tmp5 = ((int64_t)(call_tmp3));
#line 376 "LocaleModel.chpl"
    chpl_comm_execute_on_fast(call_tmp4, call_tmp5, fn, args, args_size);
#line 376 "LocaleModel.chpl"
  }
#line 366 "LocaleModel.chpl"
  return;
#line 366 "LocaleModel.chpl"
}

#line 366 "LocaleModel.chpl"
/* LocaleModel.chpl:386 */
#line 366 "LocaleModel.chpl"
void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, int32_t _fn) {
#line 366 "LocaleModel.chpl"
  int32_t call_tmp;
#line 366 "LocaleModel.chpl"
  chpl_bool call_tmp2;
#line 366 "LocaleModel.chpl"
  chpl_bool call_tmp3;
#line 366 "LocaleModel.chpl"
  int32_t call_tmp4;
#line 366 "LocaleModel.chpl"
  int64_t call_tmp5;
#line 366 "LocaleModel.chpl"
  int64_t call_tmp6;
#line 366 "LocaleModel.chpl"
  int32_t call_tmp7;
#line 366 "LocaleModel.chpl"
  chpl_bool call_tmp8;
#line 366 "LocaleModel.chpl"
  int64_t call_tmp9;
#line 366 "LocaleModel.chpl"
  int64_t call_tmp10;
#line 366 "LocaleModel.chpl"
  int64_t call_tmp11;
#line 366 "LocaleModel.chpl"
  int64_t call_tmp12;
#line 395 "LocaleModel.chpl"
  call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
#line 396 "LocaleModel.chpl"
  call_tmp2 = (call_tmp == chpl_nodeID);
#line 396 "LocaleModel.chpl"
  if (call_tmp2) /* ZLINE: 397 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 396 "LocaleModel.chpl"
  {
#line 397 "LocaleModel.chpl"
    call_tmp3 = chpl_task_getSerial();
#line 397 "LocaleModel.chpl"
    if (call_tmp3) /* ZLINE: 397 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 397 "LocaleModel.chpl"
    {
#line 399 "LocaleModel.chpl"
      chpl_ftable_call(fn, args);
#line 399 "LocaleModel.chpl"
    } else /* ZLINE: 397 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 399 "LocaleModel.chpl"
    {
#line 404 "LocaleModel.chpl"
      call_tmp4 = chpl_sublocFromLocaleID(loc, _ln, _fn);
#line 404 "LocaleModel.chpl"
      call_tmp5 = ((int64_t)(call_tmp));
#line 404 "LocaleModel.chpl"
      call_tmp6 = ((int64_t)(call_tmp4));
#line 404 "LocaleModel.chpl"
      chpl_comm_execute_on_nb(call_tmp5, call_tmp6, fn, args, args_size);
#line 404 "LocaleModel.chpl"
    }
#line 404 "LocaleModel.chpl"
  } else /* ZLINE: 407 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 404 "LocaleModel.chpl"
  {
#line 407 "LocaleModel.chpl"
    call_tmp7 = chpl_sublocFromLocaleID(loc, _ln, _fn);
#line 408 "LocaleModel.chpl"
    call_tmp8 = chpl_task_getSerial();
#line 408 "LocaleModel.chpl"
    if (call_tmp8) /* ZLINE: 408 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 408 "LocaleModel.chpl"
    {
#line 409 "LocaleModel.chpl"
      call_tmp9 = ((int64_t)(call_tmp));
#line 409 "LocaleModel.chpl"
      call_tmp10 = ((int64_t)(call_tmp7));
#line 409 "LocaleModel.chpl"
      chpl_comm_execute_on(call_tmp9, call_tmp10, fn, args, args_size);
#line 409 "LocaleModel.chpl"
    } else /* ZLINE: 408 /home/agobin/Documents/chapel-1.13.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 409 "LocaleModel.chpl"
    {
#line 411 "LocaleModel.chpl"
      call_tmp11 = ((int64_t)(call_tmp));
#line 411 "LocaleModel.chpl"
      call_tmp12 = ((int64_t)(call_tmp7));
#line 411 "LocaleModel.chpl"
      chpl_comm_execute_on_nb(call_tmp11, call_tmp12, fn, args, args_size);
#line 411 "LocaleModel.chpl"
    }
#line 411 "LocaleModel.chpl"
  }
#line 386 "LocaleModel.chpl"
  return;
#line 386 "LocaleModel.chpl"
}

#line 386 "LocaleModel.chpl"
/* LocaleModel.chpl:434 */
#line 386 "LocaleModel.chpl"
void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_c_void_ptr tlist, int64_t tlist_node_id, int64_t _ln, int32_t _fn) {
#line 440 "LocaleModel.chpl"
  chpl_task_addToTaskList(fn, args, subloc_id, tlist, tlist_node_id, UINT8(true), _ln, _fn);
#line 434 "LocaleModel.chpl"
  return;
#line 434 "LocaleModel.chpl"
}

#line 434 "LocaleModel.chpl"
/* LocaleModel.chpl:449 */
#line 434 "LocaleModel.chpl"
void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_c_void_ptr tlist, int64_t tlist_node_id, int64_t _ln, int32_t _fn) {
#line 455 "LocaleModel.chpl"
  chpl_task_addToTaskList(fn, args, subloc_id, tlist, tlist_node_id, UINT8(false), _ln, _fn);
#line 449 "LocaleModel.chpl"
  return;
#line 449 "LocaleModel.chpl"
}

#line 449 "LocaleModel.chpl"
/* LocaleModel.chpl:463 */
#line 449 "LocaleModel.chpl"
void chpl_taskListExecute(_ref_c_void_ptr task_list, int64_t _ln, int32_t _fn) {
#line 464 "LocaleModel.chpl"
  chpl_task_executeTasksInList(task_list);
#line 463 "LocaleModel.chpl"
  return;
#line 463 "LocaleModel.chpl"
}


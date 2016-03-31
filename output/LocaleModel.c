/* LocaleModel.chpl:29 */
static void chpl__init_LocaleModel(int64_t _ln, c_string _fn) {
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
  if (chpl__init_LocaleModel_p) /* ZLINE: 29 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
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
  chpl__init_LocaleModel_p = true;
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
  doneCreatingLocales = false;
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
  chpl__autoDestroy2(call_tmp3, _ln, _fn);
#line 86 "LocaleModel.chpl"
  chpl_emptyLocaleSpace = type_tmp;
#line 87 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_4 = &call_tmp4;
#line 87 "LocaleModel.chpl"
  chpl__ensureDomainExpr(chpl_emptyLocaleSpace, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 87 "LocaleModel.chpl"
  call_tmp5 = chpl__buildArrayRuntimeType4(call_tmp4, _ln, _fn);
#line 87 "LocaleModel.chpl"
  _runtime_type_tmp_2 = (&call_tmp5)->dom;
#line 87 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_5 = &type_tmp2;
#line 87 "LocaleModel.chpl"
  chpl__convertRuntimeTypeToValue3(_runtime_type_tmp_2, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 87 "LocaleModel.chpl"
  chpl__autoDestroy2(call_tmp4, _ln, _fn);
#line 87 "LocaleModel.chpl"
  chpl_emptyLocales = type_tmp2;
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
static void chpl_buildLocaleID(int32_t node, int32_t subloc, _ref_chpl_localeID_t _retArg, int64_t _ln, c_string _fn) {
#line 29 "LocaleModel.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 29 "LocaleModel.chpl"
  chpl_localeID_t call_tmp;
#line 29 "LocaleModel.chpl"
  chpl_localeID_t call_tmp2;
#line 76 "LocaleModel.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(node, subloc);
#line 76 "LocaleModel.chpl"
  call_tmp = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
#line 76 "LocaleModel.chpl"
  call_tmp2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp);
#line 76 "LocaleModel.chpl"
  *(_retArg) = call_tmp2;
#line 75 "LocaleModel.chpl"
  return;
#line 75 "LocaleModel.chpl"
}

#line 75 "LocaleModel.chpl"
/* LocaleModel.chpl:79 */
#line 75 "LocaleModel.chpl"
static int32_t chpl_nodeFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn) {
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
static int32_t chpl_sublocFromLocaleID(chpl_localeID_t* const loc, int64_t _ln, c_string _fn) {
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
static LocaleModel _construct_LocaleModel(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, uint64_t callStackSize, int64_t _node_id, chpl_string local_name, LocaleModel meme, int64_t _ln, c_string _fn) {
#line 83 "LocaleModel.chpl"
  LocaleModel this6 = NULL;
#line 83 "LocaleModel.chpl"
  AbstractLocaleModel T = NULL;
#line 92 "LocaleModel.chpl"
  this6 = meme;
#line 92 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(92), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 92 "LocaleModel.chpl"
  T = &((this6)->super);
#line 92 "LocaleModel.chpl"
  _construct_AbstractLocaleModel(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
#line 93 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(93), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 93 "LocaleModel.chpl"
  (this6)->callStackSize = callStackSize;
#line 94 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(94), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 94 "LocaleModel.chpl"
  (this6)->_node_id = _node_id;
#line 95 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(95), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 95 "LocaleModel.chpl"
  (this6)->local_name = local_name;
#line 92 "LocaleModel.chpl"
  return this6;
#line 92 "LocaleModel.chpl"
}

#line 92 "LocaleModel.chpl"
/* LocaleModel.chpl:92 */
#line 92 "LocaleModel.chpl"
static void chpl__auto_destroy_LocaleModel(LocaleModel this6, int64_t _ln, c_string _fn) {
#line 92 "LocaleModel.chpl"
  AbstractLocaleModel _parent_destructor_tmp_ = NULL;
#line 92 "LocaleModel.chpl"
  locale _parent_destructor_tmp_2 = NULL;
#line 92 "LocaleModel.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 92 "LocaleModel.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 92 "LocaleModel.chpl"
  _parent_destructor_tmp_ = ((AbstractLocaleModel)(this6));
#line 92 "LocaleModel.chpl"
  _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
#line 92 "LocaleModel.chpl"
  chpl_check_nil(_parent_destructor_tmp_2, INT64(92), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 92 "LocaleModel.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->runningTaskCounter);
#line 92 "LocaleModel.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(92), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 92 "LocaleModel.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 92 "LocaleModel.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 92 "LocaleModel.chpl"
  return;
#line 92 "LocaleModel.chpl"
}

#line 92 "LocaleModel.chpl"
/* LocaleModel.chpl:108 */
#line 92 "LocaleModel.chpl"
static LocaleModel LocaleModel2(locale parent_loc, int64_t _ln, c_string _fn) {
#line 92 "LocaleModel.chpl"
  LocaleModel this6 = NULL;
#line 92 "LocaleModel.chpl"
  LocaleModel this7 = NULL;
#line 92 "LocaleModel.chpl"
  int64_t call_tmp;
#line 92 "LocaleModel.chpl"
  chpl_opaque cast_tmp;
#line 92 "LocaleModel.chpl"
  locale call_tmp2 = NULL;
#line 92 "LocaleModel.chpl"
  atomic_int64 this8;
#line 92 "LocaleModel.chpl"
  atomic_int_least64_t ret;
#line 92 "LocaleModel.chpl"
  atomic_int_least64_t type_tmp;
#line 92 "LocaleModel.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 92 "LocaleModel.chpl"
  atomic_int64 wrap_call_tmp;
#line 92 "LocaleModel.chpl"
  chpl_string ret2;
#line 92 "LocaleModel.chpl"
  LocaleModel wrap_call_tmp2 = NULL;
#line 92 "LocaleModel.chpl"
  chpl_bool call_tmp3;
#line 92 "LocaleModel.chpl"
  locale coerce_tmp = NULL;
#line 92 "LocaleModel.chpl"
  locale call_tmp4 = NULL;
#line 92 "LocaleModel.chpl"
  _ref_locale call_tmp5 = NULL;
#line 108 "LocaleModel.chpl"
  call_tmp = sizeof(chpl_LocaleModel_object);
#line 108 "LocaleModel.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(21), _ln, _fn);
#line 108 "LocaleModel.chpl"
  this7 = ((LocaleModel)(cast_tmp));
#line 108 "LocaleModel.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_LocaleModel;
#line 108 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(108), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 108 "LocaleModel.chpl"
  (this7)->callStackSize = UINT64(0);
#line 108 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(108), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 108 "LocaleModel.chpl"
  (this7)->_node_id = INT64(0);
#line 108 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(108), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 108 "LocaleModel.chpl"
  (this7)->local_name = defaultStringValue;
#line 108 "LocaleModel.chpl"
  call_tmp2 = ((locale)(nil));
#line 108 "LocaleModel.chpl"
  ret = type_tmp;
#line 108 "LocaleModel.chpl"
  _ref_tmp_ = &ret;
#line 108 "LocaleModel.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 108 "LocaleModel.chpl"
  (&this8)->_v = ret;
#line 108 "LocaleModel.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 108 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(108), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 108 "LocaleModel.chpl"
  (this7)->callStackSize = UINT64(0);
#line 108 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(108), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 108 "LocaleModel.chpl"
  (this7)->_node_id = INT64(0);
#line 108 "LocaleModel.chpl"
  ret2 = defaultStringValue;
#line 108 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(108), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 108 "LocaleModel.chpl"
  (this7)->local_name = ret2;
#line 108 "LocaleModel.chpl"
  wrap_call_tmp2 = _construct_LocaleModel(call_tmp2, INT64(0), INT64(0), &wrap_call_tmp, UINT64(0), INT64(0), ret2, this7, _ln, _fn);
#line 108 "LocaleModel.chpl"
  this6 = wrap_call_tmp2;
#line 109 "LocaleModel.chpl"
  call_tmp3 = doneCreatingLocales;
#line 109 "LocaleModel.chpl"
  if (call_tmp3) /* ZLINE: 110 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 109 "LocaleModel.chpl"
  {
#line 110 "LocaleModel.chpl"
    halt("Cannot create additional LocaleModel instances", _ln, _fn);
#line 110 "LocaleModel.chpl"
  }
#line 112 "LocaleModel.chpl"
  call_tmp4 = ((locale)(wrap_call_tmp2));
#line 112 "LocaleModel.chpl"
  coerce_tmp = call_tmp4;
#line 112 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp, INT64(112), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 112 "LocaleModel.chpl"
  call_tmp5 = &((coerce_tmp)->parent);
#line 112 "LocaleModel.chpl"
  *(call_tmp5) = parent_loc;
#line 113 "LocaleModel.chpl"
  chpl_check_nil(wrap_call_tmp2, INT64(113), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 113 "LocaleModel.chpl"
  init(wrap_call_tmp2, _ln, _fn);
#line 108 "LocaleModel.chpl"
  return this6;
#line 108 "LocaleModel.chpl"
}

#line 108 "LocaleModel.chpl"
/* LocaleModel.chpl:116 */
#line 108 "LocaleModel.chpl"
static int64_t chpl_id2(LocaleModel this6, int64_t _ln, c_string _fn) {
#line 108 "LocaleModel.chpl"
  int64_t ret;
#line 116 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 116 "LocaleModel.chpl"
  ret = (this6)->_node_id;
#line 116 "LocaleModel.chpl"
  return ret;
#line 116 "LocaleModel.chpl"
}

#line 116 "LocaleModel.chpl"
/* LocaleModel.chpl:139 */
#line 116 "LocaleModel.chpl"
static locale getChild2(LocaleModel this6, int64_t idx, int64_t _ln, c_string _fn) {
#line 116 "LocaleModel.chpl"
  locale ret = NULL;
#line 141 "LocaleModel.chpl"
  halt("requesting a child from a LocaleModel locale", _ln, _fn);
#line 142 "LocaleModel.chpl"
  ret = nil;
#line 139 "LocaleModel.chpl"
  return ret;
#line 139 "LocaleModel.chpl"
}

#line 139 "LocaleModel.chpl"
/* LocaleModel.chpl:157 */
#line 139 "LocaleModel.chpl"
static void init(LocaleModel this6, int64_t _ln, c_string _fn) {
#line 139 "LocaleModel.chpl"
  _ref_int64_t call_tmp = NULL;
#line 139 "LocaleModel.chpl"
  int64_t call_tmp2;
#line 139 "LocaleModel.chpl"
  c_string comm;
#line 139 "LocaleModel.chpl"
  c_string spawnfn;
#line 139 "LocaleModel.chpl"
  _ref_c_string T = NULL;
#line 139 "LocaleModel.chpl"
  _ref_c_string T2 = NULL;
#line 139 "LocaleModel.chpl"
  chpl_string call_tmp3;
#line 139 "LocaleModel.chpl"
  c_string call_tmp4;
#line 139 "LocaleModel.chpl"
  int32_t call_tmp5;
#line 139 "LocaleModel.chpl"
  int32_t call_tmp6;
#line 139 "LocaleModel.chpl"
  chpl_bool call_tmp7;
#line 139 "LocaleModel.chpl"
  chpl_bool T3;
#line 139 "LocaleModel.chpl"
  int64_t call_tmp8;
#line 139 "LocaleModel.chpl"
  chpl_bool call_tmp9;
#line 139 "LocaleModel.chpl"
  chpl_bool T4;
#line 139 "LocaleModel.chpl"
  chpl_string call_tmp10;
#line 139 "LocaleModel.chpl"
  c_string call_tmp11;
#line 139 "LocaleModel.chpl"
  int32_t call_tmp12;
#line 139 "LocaleModel.chpl"
  int32_t call_tmp13;
#line 139 "LocaleModel.chpl"
  chpl_bool call_tmp14;
#line 139 "LocaleModel.chpl"
  chpl_bool T5;
#line 139 "LocaleModel.chpl"
  int64_t call_tmp15;
#line 139 "LocaleModel.chpl"
  chpl_bool call_tmp16;
#line 139 "LocaleModel.chpl"
  c_string call_tmp17;
#line 139 "LocaleModel.chpl"
  chpl_string call_tmp18;
#line 139 "LocaleModel.chpl"
  c_string_copy cs;
#line 139 "LocaleModel.chpl"
  c_string call_tmp19;
#line 139 "LocaleModel.chpl"
  c_string_copy call_tmp20;
#line 139 "LocaleModel.chpl"
  _ref_c_string_copy _ref_tmp_ = NULL;
#line 139 "LocaleModel.chpl"
  chpl_string call_tmp21;
#line 139 "LocaleModel.chpl"
  int64_t ret;
#line 139 "LocaleModel.chpl"
  c_string_copy cs2;
#line 139 "LocaleModel.chpl"
  c_string_copy call_tmp22;
#line 139 "LocaleModel.chpl"
  uint64_t call_tmp23;
#line 139 "LocaleModel.chpl"
  _ref_c_string_copy _ref_tmp_2 = NULL;
#line 139 "LocaleModel.chpl"
  chpl_string call_tmp24;
#line 139 "LocaleModel.chpl"
  c_string_copy cs3;
#line 139 "LocaleModel.chpl"
  c_string call_tmp25;
#line 139 "LocaleModel.chpl"
  c_string call_tmp26;
#line 139 "LocaleModel.chpl"
  c_string_copy call_tmp27;
#line 139 "LocaleModel.chpl"
  _ref_c_string_copy _ref_tmp_3 = NULL;
#line 139 "LocaleModel.chpl"
  chpl_string call_tmp28;
#line 139 "LocaleModel.chpl"
  c_string call_tmp29;
#line 139 "LocaleModel.chpl"
  chpl_string call_tmp30;
#line 139 "LocaleModel.chpl"
  _ref_uint64_t call_tmp31 = NULL;
#line 139 "LocaleModel.chpl"
  uint64_t call_tmp32;
#line 139 "LocaleModel.chpl"
  locale coerce_tmp = NULL;
#line 139 "LocaleModel.chpl"
  locale call_tmp33 = NULL;
#line 139 "LocaleModel.chpl"
  _ref_int64_t call_tmp34 = NULL;
#line 139 "LocaleModel.chpl"
  int32_t call_tmp35;
#line 139 "LocaleModel.chpl"
  int64_t call_tmp36;
#line 139 "LocaleModel.chpl"
  locale coerce_tmp2 = NULL;
#line 139 "LocaleModel.chpl"
  locale call_tmp37 = NULL;
#line 139 "LocaleModel.chpl"
  _ref_int64_t call_tmp38 = NULL;
#line 139 "LocaleModel.chpl"
  uint32_t call_tmp39;
#line 139 "LocaleModel.chpl"
  int64_t call_tmp40;
#line 158 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(158), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 158 "LocaleModel.chpl"
  call_tmp = &((this6)->_node_id);
#line 158 "LocaleModel.chpl"
  call_tmp2 = ((int64_t)(chpl_nodeID));
#line 158 "LocaleModel.chpl"
  *(call_tmp) = call_tmp2;
#line 165 "LocaleModel.chpl"
  comm = "";
#line 165 "LocaleModel.chpl"
  spawnfn = "";
#line 165 "LocaleModel.chpl"
  T = &spawnfn;
#line 165 "LocaleModel.chpl"
  T2 = &comm;
#line 168 "LocaleModel.chpl"
  string_from_c_string(&call_tmp3, "CHPL_COMM", INT64(0), INT64(0), _ln, _fn);
#line 168 "LocaleModel.chpl"
  c_string_from_string(&call_tmp4, &call_tmp3, _ln, _fn);
#line 168 "LocaleModel.chpl"
  call_tmp5 = sys_getenv(call_tmp4, T2);
#line 168 "LocaleModel.chpl"
  call_tmp6 = ((int32_t)(INT64(0)));
#line 168 "LocaleModel.chpl"
  call_tmp7 = (call_tmp5 == call_tmp6);
#line 168 "LocaleModel.chpl"
  if (call_tmp7) /* ZLINE: 168 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 168 "LocaleModel.chpl"
  {
#line 168 "LocaleModel.chpl"
    call_tmp8 = string_compare(comm, "gasnet");
#line 168 "LocaleModel.chpl"
    call_tmp9 = (call_tmp8 == INT64(0));
#line 168 "LocaleModel.chpl"
    T3 = call_tmp9;
#line 168 "LocaleModel.chpl"
  } else /* ZLINE: 168 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 168 "LocaleModel.chpl"
  {
#line 168 "LocaleModel.chpl"
    T3 = false;
#line 168 "LocaleModel.chpl"
  }
#line 168 "LocaleModel.chpl"
  if (T3) /* ZLINE: 168 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 168 "LocaleModel.chpl"
  {
#line 168 "LocaleModel.chpl"
    string_from_c_string(&call_tmp10, "GASNET_SPAWNFN", INT64(0), INT64(0), _ln, _fn);
#line 168 "LocaleModel.chpl"
    c_string_from_string(&call_tmp11, &call_tmp10, _ln, _fn);
#line 168 "LocaleModel.chpl"
    call_tmp12 = sys_getenv(call_tmp11, T);
#line 168 "LocaleModel.chpl"
    call_tmp13 = ((int32_t)(INT64(0)));
#line 168 "LocaleModel.chpl"
    call_tmp14 = (call_tmp12 == call_tmp13);
#line 168 "LocaleModel.chpl"
    T4 = call_tmp14;
#line 168 "LocaleModel.chpl"
  } else /* ZLINE: 168 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 168 "LocaleModel.chpl"
  {
#line 168 "LocaleModel.chpl"
    T4 = false;
#line 168 "LocaleModel.chpl"
  }
#line 168 "LocaleModel.chpl"
  if (T4) /* ZLINE: 168 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 168 "LocaleModel.chpl"
  {
#line 168 "LocaleModel.chpl"
    call_tmp15 = string_compare(spawnfn, "L");
#line 168 "LocaleModel.chpl"
    call_tmp16 = (call_tmp15 == INT64(0));
#line 168 "LocaleModel.chpl"
    T5 = call_tmp16;
#line 168 "LocaleModel.chpl"
  } else /* ZLINE: 168 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 168 "LocaleModel.chpl"
  {
#line 168 "LocaleModel.chpl"
    T5 = false;
#line 168 "LocaleModel.chpl"
  }
#line 168 "LocaleModel.chpl"
  if (T5) /* ZLINE: 168 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 168 "LocaleModel.chpl"
  {
#line 170 "LocaleModel.chpl"
    call_tmp17 = chpl_nodeName();
#line 170 "LocaleModel.chpl"
    string_from_c_string(&call_tmp18, call_tmp17, INT64(0), INT64(0), _ln, _fn);
#line 170 "LocaleModel.chpl"
    c_string_from_string(&call_tmp19, &call_tmp18, _ln, _fn);
#line 170 "LocaleModel.chpl"
    call_tmp20 = string_concat(call_tmp19, "-", _ln, _fn);
#line 170 "LocaleModel.chpl"
    cs = call_tmp20;
#line 170 "LocaleModel.chpl"
    _ref_tmp_ = &cs;
#line 170 "LocaleModel.chpl"
    call_tmp21 = string_from_c_string_copy(_ref_tmp_, false, INT64(0));
#line 170 "LocaleModel.chpl"
    chpl_check_nil(this6, INT64(170), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 170 "LocaleModel.chpl"
    ret = (this6)->_node_id;
#line 170 "LocaleModel.chpl"
    call_tmp23 = ((uint64_t)(INT64(8)));
#line 170 "LocaleModel.chpl"
    call_tmp22 = integral_to_c_string_copy(ret, call_tmp23, true);
#line 170 "LocaleModel.chpl"
    cs2 = call_tmp22;
#line 170 "LocaleModel.chpl"
    _ref_tmp_2 = &cs2;
#line 170 "LocaleModel.chpl"
    call_tmp24 = string_from_c_string_copy(_ref_tmp_2, false, INT64(0));
#line 170 "LocaleModel.chpl"
    c_string_from_string(&call_tmp25, &call_tmp21, _ln, _fn);
#line 170 "LocaleModel.chpl"
    c_string_from_string(&call_tmp26, &call_tmp24, _ln, _fn);
#line 170 "LocaleModel.chpl"
    call_tmp27 = string_concat(call_tmp25, call_tmp26, _ln, _fn);
#line 170 "LocaleModel.chpl"
    cs3 = call_tmp27;
#line 170 "LocaleModel.chpl"
    _ref_tmp_3 = &cs3;
#line 170 "LocaleModel.chpl"
    call_tmp28 = string_from_c_string_copy(_ref_tmp_3, false, INT64(0));
#line 170 "LocaleModel.chpl"
    chpl_check_nil(this6, INT64(170), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 170 "LocaleModel.chpl"
    (this6)->local_name = call_tmp28;
#line 170 "LocaleModel.chpl"
  } else /* ZLINE: 168 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 170 "LocaleModel.chpl"
  {
#line 171 "LocaleModel.chpl"
    call_tmp29 = chpl_nodeName();
#line 171 "LocaleModel.chpl"
    string_from_c_string(&call_tmp30, call_tmp29, INT64(0), INT64(0), _ln, _fn);
#line 171 "LocaleModel.chpl"
    chpl_check_nil(this6, INT64(171), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 171 "LocaleModel.chpl"
    (this6)->local_name = call_tmp30;
#line 171 "LocaleModel.chpl"
  }
#line 174 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(174), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 174 "LocaleModel.chpl"
  call_tmp31 = &((this6)->callStackSize);
#line 174 "LocaleModel.chpl"
  call_tmp32 = chpl_task_getCallStackSize();
#line 174 "LocaleModel.chpl"
  *(call_tmp31) = call_tmp32;
#line 177 "LocaleModel.chpl"
  call_tmp33 = ((locale)(this6));
#line 177 "LocaleModel.chpl"
  coerce_tmp = call_tmp33;
#line 177 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp, INT64(177), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 177 "LocaleModel.chpl"
  call_tmp34 = &((coerce_tmp)->numCores);
#line 177 "LocaleModel.chpl"
  call_tmp35 = chpl_getNumLogicalCpus(true);
#line 177 "LocaleModel.chpl"
  call_tmp36 = ((int64_t)(call_tmp35));
#line 177 "LocaleModel.chpl"
  *(call_tmp34) = call_tmp36;
#line 180 "LocaleModel.chpl"
  call_tmp37 = ((locale)(this6));
#line 180 "LocaleModel.chpl"
  coerce_tmp2 = call_tmp37;
#line 180 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp2, INT64(180), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 180 "LocaleModel.chpl"
  call_tmp38 = &((coerce_tmp2)->maxTaskPar);
#line 180 "LocaleModel.chpl"
  call_tmp39 = chpl_task_getMaxPar();
#line 180 "LocaleModel.chpl"
  call_tmp40 = ((int64_t)(call_tmp39));
#line 180 "LocaleModel.chpl"
  *(call_tmp38) = call_tmp40;
#line 157 "LocaleModel.chpl"
  return;
#line 157 "LocaleModel.chpl"
}

#line 157 "LocaleModel.chpl"
/* LocaleModel.chpl:192 */
#line 157 "LocaleModel.chpl"
static void chpl__auto_destroy_RootLocale(RootLocale this6, int64_t _ln, c_string _fn) {
#line 157 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F _field_destructor_tmp_ = NULL;
#line 157 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F _field_destructor_tmp_2 = NULL;
#line 157 "LocaleModel.chpl"
  AbstractRootLocale _parent_destructor_tmp_ = NULL;
#line 157 "LocaleModel.chpl"
  locale _parent_destructor_tmp_2 = NULL;
#line 157 "LocaleModel.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 157 "LocaleModel.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 195 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(195), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 195 "LocaleModel.chpl"
  _field_destructor_tmp_ = (this6)->myLocales;
#line 195 "LocaleModel.chpl"
  chpl__autoDestroy5(_field_destructor_tmp_, _ln, _fn);
#line 194 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(194), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 194 "LocaleModel.chpl"
  _field_destructor_tmp_2 = (this6)->myLocaleSpace;
#line 194 "LocaleModel.chpl"
  chpl__autoDestroy2(_field_destructor_tmp_2, _ln, _fn);
#line 192 "LocaleModel.chpl"
  _parent_destructor_tmp_ = ((AbstractRootLocale)(this6));
#line 192 "LocaleModel.chpl"
  _parent_destructor_tmp_2 = ((locale)(_parent_destructor_tmp_));
#line 192 "LocaleModel.chpl"
  chpl_check_nil(_parent_destructor_tmp_2, INT64(192), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 192 "LocaleModel.chpl"
  _field_destructor_tmp_3 = &((_parent_destructor_tmp_2)->runningTaskCounter);
#line 192 "LocaleModel.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(192), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 192 "LocaleModel.chpl"
  call_tmp = &((_field_destructor_tmp_3)->_v);
#line 192 "LocaleModel.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 192 "LocaleModel.chpl"
  return;
#line 192 "LocaleModel.chpl"
}

#line 192 "LocaleModel.chpl"
/* LocaleModel.chpl:192 */
#line 192 "LocaleModel.chpl"
static RootLocale _construct_RootLocale(locale parent, int64_t numCores, int64_t maxTaskPar, atomic_int64* const runningTaskCounter, DefaultRectangularDom_1_int64_t_F myLocaleSpace, DefaultRectangularArr_locale_1_int64_t_F myLocales, RootLocale meme, int64_t _ln, c_string _fn) {
#line 192 "LocaleModel.chpl"
  RootLocale this6 = NULL;
#line 192 "LocaleModel.chpl"
  AbstractRootLocale T = NULL;
#line 192 "LocaleModel.chpl"
  this6 = meme;
#line 192 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(192), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 192 "LocaleModel.chpl"
  T = &((this6)->super);
#line 192 "LocaleModel.chpl"
  _construct_AbstractRootLocale(parent, numCores, maxTaskPar, runningTaskCounter, T, _ln, _fn);
#line 194 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(194), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 194 "LocaleModel.chpl"
  (this6)->myLocaleSpace = myLocaleSpace;
#line 195 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(195), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 195 "LocaleModel.chpl"
  (this6)->myLocales = myLocales;
#line 192 "LocaleModel.chpl"
  return this6;
#line 192 "LocaleModel.chpl"
}

#line 192 "LocaleModel.chpl"
/* LocaleModel.chpl:197 */
#line 192 "LocaleModel.chpl"
static RootLocale RootLocale2(int64_t _ln, c_string _fn) {
#line 192 "LocaleModel.chpl"
  int64_t local_numLocales;
#line 192 "LocaleModel.chpl"
  RootLocale this6 = NULL;
#line 192 "LocaleModel.chpl"
  RootLocale this7 = NULL;
#line 192 "LocaleModel.chpl"
  int64_t call_tmp;
#line 192 "LocaleModel.chpl"
  chpl_opaque cast_tmp;
#line 192 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F _init_class_tmp_ = NULL;
#line 192 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F _init_class_tmp_2 = NULL;
#line 192 "LocaleModel.chpl"
  locale call_tmp2 = NULL;
#line 192 "LocaleModel.chpl"
  atomic_int64 this8;
#line 192 "LocaleModel.chpl"
  atomic_int_least64_t ret;
#line 192 "LocaleModel.chpl"
  atomic_int_least64_t type_tmp;
#line 192 "LocaleModel.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 192 "LocaleModel.chpl"
  atomic_int64 wrap_call_tmp;
#line 192 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F default_argmyLocaleSpace = NULL;
#line 192 "LocaleModel.chpl"
  chpl___RuntimeTypeInfo call_tmp3;
#line 192 "LocaleModel.chpl"
  chpl___RuntimeTypeInfo wrap_call_tmp2;
#line 192 "LocaleModel.chpl"
  int64_t call_tmp4;
#line 192 "LocaleModel.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 192 "LocaleModel.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 192 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
#line 192 "LocaleModel.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
#line 192 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F x = NULL;
#line 192 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F type_tmp2 = NULL;
#line 192 "LocaleModel.chpl"
  DefaultDist _runtime_type_tmp_ = NULL;
#line 192 "LocaleModel.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
#line 192 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F default_argmyLocales = NULL;
#line 192 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp7 = NULL;
#line 192 "LocaleModel.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
#line 192 "LocaleModel.chpl"
  chpl___RuntimeTypeInfo2 call_tmp8;
#line 192 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_2 = NULL;
#line 192 "LocaleModel.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_5 = NULL;
#line 192 "LocaleModel.chpl"
  RootLocale wrap_call_tmp3 = NULL;
#line 192 "LocaleModel.chpl"
  locale coerce_tmp = NULL;
#line 192 "LocaleModel.chpl"
  locale call_tmp9 = NULL;
#line 192 "LocaleModel.chpl"
  _ref_locale call_tmp10 = NULL;
#line 192 "LocaleModel.chpl"
  locale coerce_tmp2 = NULL;
#line 192 "LocaleModel.chpl"
  locale call_tmp11 = NULL;
#line 192 "LocaleModel.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 192 "LocaleModel.chpl"
  locale coerce_tmp3 = NULL;
#line 192 "LocaleModel.chpl"
  locale call_tmp13 = NULL;
#line 192 "LocaleModel.chpl"
  _ref_int64_t call_tmp14 = NULL;
#line 197 "LocaleModel.chpl"
  local_numLocales = numLocales;
#line 197 "LocaleModel.chpl"
  call_tmp = sizeof(chpl_RootLocale_object);
#line 197 "LocaleModel.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(12), _ln, _fn);
#line 197 "LocaleModel.chpl"
  this7 = ((RootLocale)(cast_tmp));
#line 197 "LocaleModel.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_RootLocale;
#line 197 "LocaleModel.chpl"
  _init_class_tmp_ = nil;
#line 197 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(197), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 197 "LocaleModel.chpl"
  (this7)->myLocaleSpace = _init_class_tmp_;
#line 197 "LocaleModel.chpl"
  _init_class_tmp_2 = nil;
#line 197 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(197), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 197 "LocaleModel.chpl"
  (this7)->myLocales = _init_class_tmp_2;
#line 197 "LocaleModel.chpl"
  call_tmp2 = ((locale)(nil));
#line 197 "LocaleModel.chpl"
  ret = type_tmp;
#line 197 "LocaleModel.chpl"
  _ref_tmp_ = &ret;
#line 197 "LocaleModel.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 197 "LocaleModel.chpl"
  (&this8)->_v = ret;
#line 197 "LocaleModel.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 197 "LocaleModel.chpl"
  wrap_call_tmp2 = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
#line 197 "LocaleModel.chpl"
  call_tmp3 = wrap_call_tmp2;
#line 197 "LocaleModel.chpl"
  call_tmp4 = (local_numLocales - INT64(1));
#line 197 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp5;
#line 197 "LocaleModel.chpl"
  chpl_build_bounded_range(INT64(0), call_tmp4, ret_to_arg_ref_tmp_, _ln, _fn);
#line 197 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp6;
#line 197 "LocaleModel.chpl"
  chpl__buildDomainExpr(&call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 197 "LocaleModel.chpl"
  _runtime_type_tmp_ = (&call_tmp3)->d;
#line 197 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_3 = &type_tmp2;
#line 197 "LocaleModel.chpl"
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 197 "LocaleModel.chpl"
  x = type_tmp2;
#line 197 "LocaleModel.chpl"
  chpl___ASSIGN_(type_tmp2, call_tmp6, _ln, _fn);
#line 197 "LocaleModel.chpl"
  default_argmyLocaleSpace = chpl__autoCopy2(x, _ln, _fn);
#line 197 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(197), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 197 "LocaleModel.chpl"
  (this7)->myLocaleSpace = default_argmyLocaleSpace;
#line 197 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_4 = &call_tmp7;
#line 197 "LocaleModel.chpl"
  chpl__ensureDomainExpr(default_argmyLocaleSpace, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 197 "LocaleModel.chpl"
  call_tmp8 = chpl__buildArrayRuntimeType4(call_tmp7, _ln, _fn);
#line 197 "LocaleModel.chpl"
  _runtime_type_tmp_2 = (&call_tmp8)->dom;
#line 197 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_5 = &default_argmyLocales;
#line 197 "LocaleModel.chpl"
  chpl__convertRuntimeTypeToValue3(_runtime_type_tmp_2, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 197 "LocaleModel.chpl"
  chpl_check_nil(this7, INT64(197), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 197 "LocaleModel.chpl"
  (this7)->myLocales = default_argmyLocales;
#line 197 "LocaleModel.chpl"
  wrap_call_tmp3 = _construct_RootLocale(call_tmp2, INT64(0), INT64(0), &wrap_call_tmp, default_argmyLocaleSpace, default_argmyLocales, this7, _ln, _fn);
#line 197 "LocaleModel.chpl"
  chpl__autoDestroy2(call_tmp7, _ln, _fn);
#line 197 "LocaleModel.chpl"
  chpl__autoDestroy2(call_tmp6, _ln, _fn);
#line 198 "LocaleModel.chpl"
  call_tmp9 = ((locale)(wrap_call_tmp3));
#line 198 "LocaleModel.chpl"
  coerce_tmp = call_tmp9;
#line 198 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp, INT64(198), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 198 "LocaleModel.chpl"
  call_tmp10 = &((coerce_tmp)->parent);
#line 198 "LocaleModel.chpl"
  *(call_tmp10) = nil;
#line 199 "LocaleModel.chpl"
  call_tmp11 = ((locale)(wrap_call_tmp3));
#line 199 "LocaleModel.chpl"
  coerce_tmp2 = call_tmp11;
#line 199 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp2, INT64(199), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 199 "LocaleModel.chpl"
  call_tmp12 = &((coerce_tmp2)->numCores);
#line 199 "LocaleModel.chpl"
  *(call_tmp12) = INT64(0);
#line 200 "LocaleModel.chpl"
  call_tmp13 = ((locale)(wrap_call_tmp3));
#line 200 "LocaleModel.chpl"
  coerce_tmp3 = call_tmp13;
#line 200 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp3, INT64(200), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 200 "LocaleModel.chpl"
  call_tmp14 = &((coerce_tmp3)->maxTaskPar);
#line 200 "LocaleModel.chpl"
  *(call_tmp14) = INT64(0);
#line 197 "LocaleModel.chpl"
  return wrap_call_tmp3;
#line 197 "LocaleModel.chpl"
}

#line 197 "LocaleModel.chpl"
/* LocaleModel.chpl:206 */
#line 197 "LocaleModel.chpl"
static void init2(RootLocale this6, int64_t _ln, c_string _fn) {
#line 197 "LocaleModel.chpl"
  memory_order local_memory_order_relaxed;
#line 197 "LocaleModel.chpl"
  int32_t local_c_sublocid_any;
#line 197 "LocaleModel.chpl"
  int64_t local_numLocales;
#line 197 "LocaleModel.chpl"
  localesBarrier b;
#line 197 "LocaleModel.chpl"
  localesBarrier this7;
#line 197 "LocaleModel.chpl"
  localesBarrier wrap_call_tmp;
#line 197 "LocaleModel.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F flags = NULL;
#line 197 "LocaleModel.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F type_tmp = NULL;
#line 197 "LocaleModel.chpl"
  range_int64_t_boundedLow_F call_tmp;
#line 197 "LocaleModel.chpl"
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_ = NULL;
#line 197 "LocaleModel.chpl"
  int64_t call_tmp2;
#line 197 "LocaleModel.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 197 "LocaleModel.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 197 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
#line 197 "LocaleModel.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
#line 197 "LocaleModel.chpl"
  chpl___RuntimeTypeInfo3 call_tmp5;
#line 197 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_ = NULL;
#line 197 "LocaleModel.chpl"
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
#line 197 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
#line 197 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t this8 = NULL;
#line 197 "LocaleModel.chpl"
  int64_t call_tmp6;
#line 197 "LocaleModel.chpl"
  chpl_opaque cast_tmp;
#line 197 "LocaleModel.chpl"
  atomic_int64 _init_class_tmp_;
#line 197 "LocaleModel.chpl"
  atomic_int64 this9;
#line 197 "LocaleModel.chpl"
  atomic_int_least64_t ret;
#line 197 "LocaleModel.chpl"
  atomic_int_least64_t type_tmp2;
#line 197 "LocaleModel.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 197 "LocaleModel.chpl"
  atomic_int64 wrap_call_tmp2;
#line 197 "LocaleModel.chpl"
  chpl_task_list_p ret2;
#line 197 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp3 = NULL;
#line 197 "LocaleModel.chpl"
  range_int64_t_boundedLow_F call_tmp7;
#line 197 "LocaleModel.chpl"
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_5 = NULL;
#line 197 "LocaleModel.chpl"
  range_int64_t_bounded_F call_tmp8;
#line 197 "LocaleModel.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_6 = NULL;
#line 197 "LocaleModel.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 197 "LocaleModel.chpl"
  _ref_range_int64_t_bounded_F this10 = NULL;
#line 197 "LocaleModel.chpl"
  int64_t i;
#line 197 "LocaleModel.chpl"
  int64_t ret3;
#line 197 "LocaleModel.chpl"
  int64_t end;
#line 197 "LocaleModel.chpl"
  int64_t ret4;
#line 197 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
#line 197 "LocaleModel.chpl"
  _class_localscoforall_fn2 _args_forcoforall_fn = NULL;
#line 197 "LocaleModel.chpl"
  int64_t chpl_here_alloc_size;
#line 197 "LocaleModel.chpl"
  chpl_opaque chpl_here_alloc_tmp;
#line 197 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t delete_tmp = NULL;
#line 197 "LocaleModel.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 197 "LocaleModel.chpl"
  _ref_atomic_int_least64_t call_tmp9 = NULL;
#line 197 "LocaleModel.chpl"
  chpl_opaque call_tmp10;
#line 197 "LocaleModel.chpl"
  locale call_tmp11 = NULL;
#line 197 "LocaleModel.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 197 "LocaleModel.chpl"
  chpl_localeID_t call_tmp12;
#line 197 "LocaleModel.chpl"
  chpl_localeID_t call_tmp13;
#line 197 "LocaleModel.chpl"
  locale call_tmp14 = NULL;
#line 197 "LocaleModel.chpl"
  _ref_atomic_int64 call_tmp15 = NULL;
#line 197 "LocaleModel.chpl"
  _ref_atomic_int_least64_t call_tmp16 = NULL;
#line 214 "LocaleModel.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 214 "LocaleModel.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 207 "LocaleModel.chpl"
  local_numLocales = numLocales;
#line 207 "LocaleModel.chpl"
  wrap_call_tmp = _construct_localesBarrier(&this7);
#line 207 "LocaleModel.chpl"
  b = wrap_call_tmp;
#line 207 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 207 "LocaleModel.chpl"
  chpl_build_partially_bounded_range(INT64(1), ret_to_arg_ref_tmp_, _ln, _fn);
#line 207 "LocaleModel.chpl"
  call_tmp2 = (local_numLocales - INT64(1));
#line 207 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp3;
#line 207 "LocaleModel.chpl"
  chpl___POUND_(&call_tmp, call_tmp2, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 207 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp4;
#line 207 "LocaleModel.chpl"
  chpl__ensureDomainExpr2(&call_tmp3, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 207 "LocaleModel.chpl"
  call_tmp5 = chpl__buildArrayRuntimeType(call_tmp4, _ln, _fn);
#line 207 "LocaleModel.chpl"
  _runtime_type_tmp_ = (&call_tmp5)->dom;
#line 207 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_4 = &type_tmp;
#line 207 "LocaleModel.chpl"
  chpl__convertRuntimeTypeToValue5(_runtime_type_tmp_, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 207 "LocaleModel.chpl"
  flags = type_tmp;
#line 207 "LocaleModel.chpl"
  chpl__autoDestroy2(call_tmp4, _ln, _fn);
#line 207 "LocaleModel.chpl"
  call_tmp6 = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
#line 207 "LocaleModel.chpl"
  cast_tmp = chpl_here_alloc(call_tmp6, INT16(1), _ln, _fn);
#line 207 "LocaleModel.chpl"
  this8 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
#line 207 "LocaleModel.chpl"
  ((object)(this8))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(this8, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  (this8)->i = _init_class_tmp_;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(this8, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  (this8)->taskCnt = INT64(0);
#line 207 "LocaleModel.chpl"
  chpl_check_nil(this8, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  (this8)->taskList = NULL;
#line 207 "LocaleModel.chpl"
  ret = type_tmp2;
#line 207 "LocaleModel.chpl"
  _ref_tmp_ = &ret;
#line 207 "LocaleModel.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 207 "LocaleModel.chpl"
  (&this9)->_v = ret;
#line 207 "LocaleModel.chpl"
  wrap_call_tmp2 = _construct_atomic_int64(ret, &this9, _ln, _fn);
#line 207 "LocaleModel.chpl"
  chpl_check_nil(this8, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  (this8)->i = wrap_call_tmp2;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(this8, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  (this8)->taskCnt = INT64(0);
#line 207 "LocaleModel.chpl"
  ret2 = NULL;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(this8, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  (this8)->taskList = ret2;
#line 207 "LocaleModel.chpl"
  wrap_call_tmp3 = _construct__EndCount(&wrap_call_tmp2, INT64(0), ret2, this8, _ln, _fn);
#line 207 "LocaleModel.chpl"
  _coforallCount = wrap_call_tmp3;
#line 207 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_5 = &call_tmp7;
#line 207 "LocaleModel.chpl"
  chpl_build_partially_bounded_range(INT64(0), ret_to_arg_ref_tmp_5, _ln, _fn);
#line 207 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_6 = &call_tmp8;
#line 207 "LocaleModel.chpl"
  chpl___POUND_(&call_tmp7, local_numLocales, ret_to_arg_ref_tmp_6, _ln, _fn);
#line 207 "LocaleModel.chpl"
  _ic__F0_this = call_tmp8;
#line 207 "LocaleModel.chpl"
  this10 = &_ic__F0_this;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(this10, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  checkIfIterWillOverflow(this10, true, _ln, _fn);
#line 207 "LocaleModel.chpl"
  ret3 = (&_ic__F0_this)->_low;
#line 207 "LocaleModel.chpl"
  ret4 = (&_ic__F0_this)->_high;
#line 207 "LocaleModel.chpl"
  end = ret4;
#line 207 "LocaleModel.chpl"
  for (i = ret3; ((i <= end)); i += INT64(1)) {
#line 207 "LocaleModel.chpl"
    _upEndCount(_coforallCount, _ln, _fn);
#line 207 "LocaleModel.chpl"
    rvfDerefTmp = _coforallCount;
#line 207 "LocaleModel.chpl"
    chpl_here_alloc_size = sizeof(chpl__class_localscoforall_fn2_object);
#line 207 "LocaleModel.chpl"
    chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(37), _ln, _fn);
#line 207 "LocaleModel.chpl"
    _args_forcoforall_fn = ((_class_localscoforall_fn2)(chpl_here_alloc_tmp));
#line 207 "LocaleModel.chpl"
    chpl_check_nil(_args_forcoforall_fn, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_0_b = b;
#line 207 "LocaleModel.chpl"
    chpl_check_nil(_args_forcoforall_fn, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_1_flags = flags;
#line 207 "LocaleModel.chpl"
    chpl_check_nil(_args_forcoforall_fn, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_2__yieldedIndex = i;
#line 207 "LocaleModel.chpl"
    chpl_check_nil(_args_forcoforall_fn, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_3_rvfDerefTmp = rvfDerefTmp;
#line 207 "LocaleModel.chpl"
    chpl_check_nil(_args_forcoforall_fn, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_4_this = this6;
#line 207 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_ln = _ln;
#line 207 "LocaleModel.chpl"
    (_args_forcoforall_fn)->_fn = _fn;
#line 207 "LocaleModel.chpl"
    /*** wrapcoforall_fn2 ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(1), ((void*)(_args_forcoforall_fn)), &(((_args_forcoforall_fn)->_3_rvfDerefTmp)->taskList), chpl_nodeID, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  }
#line 207 "LocaleModel.chpl"
  chpl_taskListProcess((_coforallCount)->taskList, _ln, _fn);
#line 207 "LocaleModel.chpl"
  _waitEndCount(_coforallCount, _ln, _fn);
#line 207 "LocaleModel.chpl"
  delete_tmp = _coforallCount;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(delete_tmp, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  _field_destructor_tmp_ = &((delete_tmp)->i);
#line 207 "LocaleModel.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  call_tmp9 = &((_field_destructor_tmp_)->_v);
#line 207 "LocaleModel.chpl"
  atomic_destroy_int_least64_t(call_tmp9);
#line 207 "LocaleModel.chpl"
  call_tmp10 = ((void*)(delete_tmp));
#line 207 "LocaleModel.chpl"
  chpl_here_free(call_tmp10, _ln, _fn);
#line 207 "LocaleModel.chpl"
  chpl__autoDestroy3(flags, _ln, _fn);
#line 214 "LocaleModel.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 214 "LocaleModel.chpl"
  call_tmp12 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
#line 214 "LocaleModel.chpl"
  call_tmp13 = chpl__initCopy_chpl_rt_localeID_t(call_tmp12);
#line 214 "LocaleModel.chpl"
  call_tmp14 = chpl_localeID_to_locale(&call_tmp13, _ln, _fn);
#line 214 "LocaleModel.chpl"
  call_tmp11 = call_tmp14;
#line 214 "LocaleModel.chpl"
  chpl_check_nil(call_tmp11, INT64(214), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 214 "LocaleModel.chpl"
  call_tmp15 = &((call_tmp11)->runningTaskCounter);
#line 214 "LocaleModel.chpl"
  chpl_check_nil(call_tmp15, INT64(214), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 214 "LocaleModel.chpl"
  call_tmp16 = &((call_tmp15)->_v);
#line 214 "LocaleModel.chpl"
  atomic_store_explicit_int_least64_t(call_tmp16, INT64(0), local_memory_order_relaxed);
#line 206 "LocaleModel.chpl"
  return;
#line 206 "LocaleModel.chpl"
}

#line 206 "LocaleModel.chpl"
/* LocaleModel.chpl:207 */
#line 206 "LocaleModel.chpl"
static void wrapcoforall_fn2(_class_localscoforall_fn2 c) {
#line 206 "LocaleModel.chpl"
  int64_t _ln;
#line 206 "LocaleModel.chpl"
  c_string _fn;
#line 206 "LocaleModel.chpl"
  localesBarrier _0_b;
#line 206 "LocaleModel.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _1_flags = NULL;
#line 206 "LocaleModel.chpl"
  int64_t _2__yieldedIndex;
#line 206 "LocaleModel.chpl"
  chpl___EndCount_atomic_int64_int64_t _3_rvfDerefTmp = NULL;
#line 206 "LocaleModel.chpl"
  RootLocale _4_this = NULL;
#line 207 "LocaleModel.chpl"
  _ln = (c)->_ln;
#line 207 "LocaleModel.chpl"
  _fn = (c)->_fn;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(c, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  _0_b = (c)->_0_b;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(c, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  _1_flags = (c)->_1_flags;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(c, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  _2__yieldedIndex = (c)->_2__yieldedIndex;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(c, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  _3_rvfDerefTmp = (c)->_3_rvfDerefTmp;
#line 207 "LocaleModel.chpl"
  chpl_check_nil(c, INT64(207), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 207 "LocaleModel.chpl"
  _4_this = (c)->_4_this;
#line 207 "LocaleModel.chpl"
  coforall_fn2(&_0_b, _1_flags, _2__yieldedIndex, _3_rvfDerefTmp, _4_this, _ln, _fn);
#line 207 "LocaleModel.chpl"
  chpl_here_free(((void*)(c)), _ln, _fn);
#line 207 "LocaleModel.chpl"
  return;
#line 207 "LocaleModel.chpl"
}

#line 207 "LocaleModel.chpl"
/* LocaleModel.chpl:221 */
#line 207 "LocaleModel.chpl"
static int64_t chpl_id3(RootLocale this6, int64_t _ln, c_string _fn) {
#line 207 "LocaleModel.chpl"
  int64_t local_numLocales;
#line 207 "LocaleModel.chpl"
  int64_t ret;
#line 221 "LocaleModel.chpl"
  local_numLocales = numLocales;
#line 221 "LocaleModel.chpl"
  ret = local_numLocales;
#line 221 "LocaleModel.chpl"
  return ret;
#line 221 "LocaleModel.chpl"
}

#line 221 "LocaleModel.chpl"
/* ChapelLocale.chpl:232 */
#line 221 "LocaleModel.chpl"
static void coforall_fn2(localesBarrier* const b, DefaultRectangularArr_localesSignal_1_int64_t_F flags, int64_t locIdx, chpl___EndCount_atomic_int64_int64_t _coforallCount, RootLocale this6, int64_t _ln, c_string _fn) {
#line 221 "LocaleModel.chpl"
  int32_t local_c_sublocid_any;
#line 221 "LocaleModel.chpl"
  int32_t call_tmp;
#line 221 "LocaleModel.chpl"
  chpl_localeID_t call_tmp2;
#line 221 "LocaleModel.chpl"
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
#line 221 "LocaleModel.chpl"
  LocaleModel const_tmp = NULL;
#line 221 "LocaleModel.chpl"
  locale call_tmp3 = NULL;
#line 221 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp4 = NULL;
#line 221 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
#line 221 "LocaleModel.chpl"
  _tuple_1_star_int64_t i;
#line 221 "LocaleModel.chpl"
  _tuple_1_star_int64_t this7;
#line 221 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp5 = NULL;
#line 221 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 221 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 221 "LocaleModel.chpl"
  chpl_bool call_tmp6;
#line 221 "LocaleModel.chpl"
  chpl_bool call_tmp7;
#line 221 "LocaleModel.chpl"
  chpl_string call_tmp8;
#line 221 "LocaleModel.chpl"
  int64_t sum;
#line 221 "LocaleModel.chpl"
  int64_t ret_x1;
#line 221 "LocaleModel.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 221 "LocaleModel.chpl"
  int64_t coerce_tmp2;
#line 221 "LocaleModel.chpl"
  int64_t call_tmp9;
#line 221 "LocaleModel.chpl"
  _ddata_locale ret3 = NULL;
#line 221 "LocaleModel.chpl"
  _ddata_locale coerce_tmp3 = NULL;
#line 221 "LocaleModel.chpl"
  _ref_locale call_tmp10 = NULL;
#line 221 "LocaleModel.chpl"
  locale call_tmp11 = NULL;
#line 221 "LocaleModel.chpl"
  locale coerce_tmp4 = NULL;
#line 221 "LocaleModel.chpl"
  locale call_tmp12 = NULL;
#line 221 "LocaleModel.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 221 "LocaleModel.chpl"
  locale coerce_tmp5 = NULL;
#line 221 "LocaleModel.chpl"
  locale call_tmp14 = NULL;
#line 221 "LocaleModel.chpl"
  int64_t ret4;
#line 221 "LocaleModel.chpl"
  locale coerce_tmp6 = NULL;
#line 221 "LocaleModel.chpl"
  locale call_tmp15 = NULL;
#line 221 "LocaleModel.chpl"
  _ref_int64_t call_tmp16 = NULL;
#line 221 "LocaleModel.chpl"
  locale coerce_tmp7 = NULL;
#line 221 "LocaleModel.chpl"
  locale call_tmp17 = NULL;
#line 221 "LocaleModel.chpl"
  int64_t ret5;
#line 221 "LocaleModel.chpl"
  _ref_localesBarrier _ref_tmp_ = NULL;
#line 235 "ChapelLocale.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 234 "ChapelLocale.chpl"
  call_tmp = ((int32_t)(locIdx));
#line 234 "ChapelLocale.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 234 "ChapelLocale.chpl"
  chpl_buildLocaleID(call_tmp, local_c_sublocid_any, ret_to_arg_ref_tmp_, _ln, _fn);
#line 236 "ChapelLocale.chpl"
  chpl_defaultDistInitPrivate(_ln, _fn);
#line 208 "LocaleModel.chpl"
  call_tmp3 = ((locale)(this6));
#line 208 "LocaleModel.chpl"
  const_tmp = LocaleModel2(call_tmp3, _ln, _fn);
#line 209 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(209), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 209 "LocaleModel.chpl"
  call_tmp4 = (this6)->myLocales;
#line 209 "LocaleModel.chpl"
  coerce_tmp = call_tmp4;
#line 209 "LocaleModel.chpl"
  *(this7 + INT64(0)) = locIdx;
#line 209 "LocaleModel.chpl"
  *(i + INT64(0)) = *(this7 + INT64(0));
#line 209 "LocaleModel.chpl"
  ret = coerce_tmp;
#line 209 "LocaleModel.chpl"
  call_tmp5 = ret;
#line 209 "LocaleModel.chpl"
  chpl_check_nil(call_tmp5, INT64(209), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 209 "LocaleModel.chpl"
  ret2 = (call_tmp5)->dom;
#line 209 "LocaleModel.chpl"
  chpl_check_nil(ret2, INT64(209), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 209 "LocaleModel.chpl"
  call_tmp6 = dsiMember(ret2, &this7, _ln, _fn);
#line 209 "LocaleModel.chpl"
  call_tmp7 = (! call_tmp6);
#line 209 "LocaleModel.chpl"
  if (call_tmp7) /* ZLINE: 209 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 209 "LocaleModel.chpl"
  {
#line 209 "LocaleModel.chpl"
    string_from_c_string(&call_tmp8, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 209 "LocaleModel.chpl"
    halt3(call_tmp8, &this7, _ln, _fn);
#line 209 "LocaleModel.chpl"
  }
#line 209 "LocaleModel.chpl"
  sum = INT64(0);
#line 209 "LocaleModel.chpl"
  chpl_check_nil(call_tmp5, INT64(209), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 209 "LocaleModel.chpl"
  ret_ = &((call_tmp5)->blk);
#line 209 "LocaleModel.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 209 "LocaleModel.chpl"
  coerce_tmp2 = *(i + INT64(0));
#line 209 "LocaleModel.chpl"
  call_tmp9 = (coerce_tmp2 * ret_x1);
#line 209 "LocaleModel.chpl"
  sum += call_tmp9;
#line 209 "LocaleModel.chpl"
  chpl_check_nil(call_tmp5, INT64(209), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 209 "LocaleModel.chpl"
  ret3 = (call_tmp5)->shiftedData;
#line 209 "LocaleModel.chpl"
  coerce_tmp3 = ret3;
#line 209 "LocaleModel.chpl"
  call_tmp10 = (coerce_tmp3 + sum);
#line 209 "LocaleModel.chpl"
  call_tmp11 = ((locale)(const_tmp));
#line 209 "LocaleModel.chpl"
  *(call_tmp10) = call_tmp11;
#line 210 "LocaleModel.chpl"
  call_tmp12 = ((locale)(this6));
#line 210 "LocaleModel.chpl"
  coerce_tmp4 = call_tmp12;
#line 210 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp4, INT64(210), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 210 "LocaleModel.chpl"
  call_tmp13 = &((coerce_tmp4)->numCores);
#line 210 "LocaleModel.chpl"
  call_tmp14 = ((locale)(const_tmp));
#line 210 "LocaleModel.chpl"
  coerce_tmp5 = call_tmp14;
#line 210 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp5, INT64(210), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 210 "LocaleModel.chpl"
  ret4 = (coerce_tmp5)->numCores;
#line 210 "LocaleModel.chpl"
  *(call_tmp13) += ret4;
#line 211 "LocaleModel.chpl"
  call_tmp15 = ((locale)(this6));
#line 211 "LocaleModel.chpl"
  coerce_tmp6 = call_tmp15;
#line 211 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp6, INT64(211), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 211 "LocaleModel.chpl"
  call_tmp16 = &((coerce_tmp6)->maxTaskPar);
#line 211 "LocaleModel.chpl"
  call_tmp17 = ((locale)(const_tmp));
#line 211 "LocaleModel.chpl"
  coerce_tmp7 = call_tmp17;
#line 211 "LocaleModel.chpl"
  chpl_check_nil(coerce_tmp7, INT64(211), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 211 "LocaleModel.chpl"
  ret5 = (coerce_tmp7)->maxTaskPar;
#line 211 "LocaleModel.chpl"
  *(call_tmp16) += ret5;
#line 238 "ChapelLocale.chpl"
  _ref_tmp_ = b;
#line 238 "ChapelLocale.chpl"
  chpl_check_nil(_ref_tmp_, INT64(238), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelLocale.chpl");
#line 238 "ChapelLocale.chpl"
  wait5(_ref_tmp_, locIdx, flags, _ln, _fn);
#line 239 "ChapelLocale.chpl"
  chpl_rootLocaleInitPrivate(locIdx, _ln, _fn);
#line 232 "ChapelLocale.chpl"
  _downEndCount(_coforallCount, _ln, _fn);
#line 232 "ChapelLocale.chpl"
  return;
#line 232 "ChapelLocale.chpl"
}

#line 232 "ChapelLocale.chpl"
/* LocaleModel.chpl:241 */
#line 232 "ChapelLocale.chpl"
static locale getChild3(RootLocale this6, int64_t idx, int64_t _ln, c_string _fn) {
#line 232 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 232 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
#line 232 "ChapelLocale.chpl"
  _tuple_1_star_int64_t i;
#line 232 "ChapelLocale.chpl"
  _tuple_1_star_int64_t this7;
#line 232 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
#line 232 "ChapelLocale.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 232 "ChapelLocale.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 232 "ChapelLocale.chpl"
  chpl_bool call_tmp3;
#line 232 "ChapelLocale.chpl"
  chpl_bool call_tmp4;
#line 232 "ChapelLocale.chpl"
  chpl_string call_tmp5;
#line 232 "ChapelLocale.chpl"
  int64_t sum;
#line 232 "ChapelLocale.chpl"
  int64_t ret_x1;
#line 232 "ChapelLocale.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 232 "ChapelLocale.chpl"
  int64_t coerce_tmp2;
#line 232 "ChapelLocale.chpl"
  int64_t call_tmp6;
#line 232 "ChapelLocale.chpl"
  _ddata_locale ret3 = NULL;
#line 232 "ChapelLocale.chpl"
  _ddata_locale coerce_tmp3 = NULL;
#line 232 "ChapelLocale.chpl"
  locale ret4 = NULL;
#line 232 "ChapelLocale.chpl"
  _ref_locale call_tmp7 = NULL;
#line 241 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(241), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 241 "LocaleModel.chpl"
  call_tmp = (this6)->myLocales;
#line 241 "LocaleModel.chpl"
  coerce_tmp = call_tmp;
#line 241 "LocaleModel.chpl"
  *(this7 + INT64(0)) = idx;
#line 241 "LocaleModel.chpl"
  *(i + INT64(0)) = *(this7 + INT64(0));
#line 241 "LocaleModel.chpl"
  ret = coerce_tmp;
#line 241 "LocaleModel.chpl"
  call_tmp2 = ret;
#line 241 "LocaleModel.chpl"
  chpl_check_nil(call_tmp2, INT64(241), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 241 "LocaleModel.chpl"
  ret2 = (call_tmp2)->dom;
#line 241 "LocaleModel.chpl"
  chpl_check_nil(ret2, INT64(241), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 241 "LocaleModel.chpl"
  call_tmp3 = dsiMember(ret2, &this7, _ln, _fn);
#line 241 "LocaleModel.chpl"
  call_tmp4 = (! call_tmp3);
#line 241 "LocaleModel.chpl"
  if (call_tmp4) /* ZLINE: 241 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 241 "LocaleModel.chpl"
  {
#line 241 "LocaleModel.chpl"
    string_from_c_string(&call_tmp5, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 241 "LocaleModel.chpl"
    halt3(call_tmp5, &this7, _ln, _fn);
#line 241 "LocaleModel.chpl"
  }
#line 241 "LocaleModel.chpl"
  sum = INT64(0);
#line 241 "LocaleModel.chpl"
  chpl_check_nil(call_tmp2, INT64(241), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 241 "LocaleModel.chpl"
  ret_ = &((call_tmp2)->blk);
#line 241 "LocaleModel.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 241 "LocaleModel.chpl"
  coerce_tmp2 = *(i + INT64(0));
#line 241 "LocaleModel.chpl"
  call_tmp6 = (coerce_tmp2 * ret_x1);
#line 241 "LocaleModel.chpl"
  sum += call_tmp6;
#line 241 "LocaleModel.chpl"
  chpl_check_nil(call_tmp2, INT64(241), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 241 "LocaleModel.chpl"
  ret3 = (call_tmp2)->shiftedData;
#line 241 "LocaleModel.chpl"
  coerce_tmp3 = ret3;
#line 241 "LocaleModel.chpl"
  call_tmp7 = (coerce_tmp3 + sum);
#line 241 "LocaleModel.chpl"
  ret4 = *(call_tmp7);
#line 241 "LocaleModel.chpl"
  return ret4;
#line 241 "LocaleModel.chpl"
}

#line 241 "LocaleModel.chpl"
/* LocaleModel.chpl:249 */
#line 241 "LocaleModel.chpl"
static DefaultRectangularArr_locale_1_int64_t_F getDefaultLocaleArray2(RootLocale this6, int64_t _ln, c_string _fn) {
#line 241 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 249 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(249), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 249 "LocaleModel.chpl"
  call_tmp = (this6)->myLocales;
#line 249 "LocaleModel.chpl"
  return call_tmp;
#line 249 "LocaleModel.chpl"
}

#line 249 "LocaleModel.chpl"
/* LocaleModel.chpl:249 */
#line 249 "LocaleModel.chpl"
static void getDefaultLocaleArray(RootLocale this6, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 249 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 249 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(249), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 249 "LocaleModel.chpl"
  call_tmp = (this6)->myLocales;
#line 249 "LocaleModel.chpl"
  *(_retArg) = chpl__autoCopy6(call_tmp, _ln, _fn);
#line 249 "LocaleModel.chpl"
  return;
#line 249 "LocaleModel.chpl"
}

#line 249 "LocaleModel.chpl"
/* LocaleModel.chpl:251 */
#line 249 "LocaleModel.chpl"
static locale localeIDtoLocale2(RootLocale this6, chpl_localeID_t* const id2, int64_t _ln, c_string _fn) {
#line 249 "LocaleModel.chpl"
  int32_t call_tmp;
#line 249 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
#line 249 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F coerce_tmp = NULL;
#line 249 "LocaleModel.chpl"
  int64_t call_tmp3;
#line 249 "LocaleModel.chpl"
  _tuple_1_star_int64_t i;
#line 249 "LocaleModel.chpl"
  _tuple_1_star_int64_t this7;
#line 249 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp4 = NULL;
#line 249 "LocaleModel.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 249 "LocaleModel.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 249 "LocaleModel.chpl"
  chpl_bool call_tmp5;
#line 249 "LocaleModel.chpl"
  chpl_bool call_tmp6;
#line 249 "LocaleModel.chpl"
  chpl_string call_tmp7;
#line 249 "LocaleModel.chpl"
  int64_t sum;
#line 249 "LocaleModel.chpl"
  int64_t ret_x1;
#line 249 "LocaleModel.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 249 "LocaleModel.chpl"
  int64_t coerce_tmp2;
#line 249 "LocaleModel.chpl"
  int64_t call_tmp8;
#line 249 "LocaleModel.chpl"
  _ddata_locale ret3 = NULL;
#line 249 "LocaleModel.chpl"
  _ddata_locale coerce_tmp3 = NULL;
#line 249 "LocaleModel.chpl"
  locale ret4 = NULL;
#line 249 "LocaleModel.chpl"
  _ref_locale call_tmp9 = NULL;
#line 256 "LocaleModel.chpl"
  call_tmp = chpl_rt_nodeFromLocaleID(*(id2));
#line 256 "LocaleModel.chpl"
  chpl_check_nil(this6, INT64(256), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 256 "LocaleModel.chpl"
  call_tmp2 = (this6)->myLocales;
#line 256 "LocaleModel.chpl"
  coerce_tmp = call_tmp2;
#line 256 "LocaleModel.chpl"
  call_tmp3 = ((int64_t)(call_tmp));
#line 256 "LocaleModel.chpl"
  *(this7 + INT64(0)) = call_tmp3;
#line 256 "LocaleModel.chpl"
  *(i + INT64(0)) = *(this7 + INT64(0));
#line 256 "LocaleModel.chpl"
  ret = coerce_tmp;
#line 256 "LocaleModel.chpl"
  call_tmp4 = ret;
#line 256 "LocaleModel.chpl"
  chpl_check_nil(call_tmp4, INT64(256), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 256 "LocaleModel.chpl"
  ret2 = (call_tmp4)->dom;
#line 256 "LocaleModel.chpl"
  chpl_check_nil(ret2, INT64(256), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 256 "LocaleModel.chpl"
  call_tmp5 = dsiMember(ret2, &this7, _ln, _fn);
#line 256 "LocaleModel.chpl"
  call_tmp6 = (! call_tmp5);
#line 256 "LocaleModel.chpl"
  if (call_tmp6) /* ZLINE: 256 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 256 "LocaleModel.chpl"
  {
#line 256 "LocaleModel.chpl"
    string_from_c_string(&call_tmp7, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 256 "LocaleModel.chpl"
    halt3(call_tmp7, &this7, _ln, _fn);
#line 256 "LocaleModel.chpl"
  }
#line 256 "LocaleModel.chpl"
  sum = INT64(0);
#line 256 "LocaleModel.chpl"
  chpl_check_nil(call_tmp4, INT64(256), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 256 "LocaleModel.chpl"
  ret_ = &((call_tmp4)->blk);
#line 256 "LocaleModel.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 256 "LocaleModel.chpl"
  coerce_tmp2 = *(i + INT64(0));
#line 256 "LocaleModel.chpl"
  call_tmp8 = (coerce_tmp2 * ret_x1);
#line 256 "LocaleModel.chpl"
  sum += call_tmp8;
#line 256 "LocaleModel.chpl"
  chpl_check_nil(call_tmp4, INT64(256), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 256 "LocaleModel.chpl"
  ret3 = (call_tmp4)->shiftedData;
#line 256 "LocaleModel.chpl"
  coerce_tmp3 = ret3;
#line 256 "LocaleModel.chpl"
  call_tmp9 = (coerce_tmp3 + sum);
#line 256 "LocaleModel.chpl"
  ret4 = *(call_tmp9);
#line 251 "LocaleModel.chpl"
  return ret4;
#line 251 "LocaleModel.chpl"
}

#line 251 "LocaleModel.chpl"
/* LocaleModel.chpl:279 */
#line 251 "LocaleModel.chpl"
static chpl_opaque chpl_here_alloc(int64_t size, int16_t md, int64_t _ln, c_string _fn) {
#line 251 "LocaleModel.chpl"
  int16_t call_tmp;
#line 251 "LocaleModel.chpl"
  int16_t call_tmp2;
#line 251 "LocaleModel.chpl"
  chpl_opaque call_tmp3;
#line 282 "LocaleModel.chpl"
  call_tmp = chpl_memhook_md_num();
#line 282 "LocaleModel.chpl"
  call_tmp2 = (md + call_tmp);
#line 282 "LocaleModel.chpl"
  call_tmp3 = chpl_mem_alloc(size, call_tmp2, _ln, _fn);
#line 279 "LocaleModel.chpl"
  return call_tmp3;
#line 279 "LocaleModel.chpl"
}

#line 279 "LocaleModel.chpl"
/* LocaleModel.chpl:300 */
#line 279 "LocaleModel.chpl"
static void chpl_here_free(chpl_opaque ptr, int64_t _ln, c_string _fn) {
#line 303 "LocaleModel.chpl"
  chpl_mem_free(ptr, _ln, _fn);
#line 300 "LocaleModel.chpl"
  return;
#line 300 "LocaleModel.chpl"
}

#line 300 "LocaleModel.chpl"
/* LocaleModel.chpl:327 */
#line 300 "LocaleModel.chpl"
void chpl_executeOn(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, c_string _fn) {
#line 300 "LocaleModel.chpl"
  int32_t call_tmp;
#line 300 "LocaleModel.chpl"
  chpl_bool call_tmp2;
#line 300 "LocaleModel.chpl"
  int32_t call_tmp3;
#line 300 "LocaleModel.chpl"
  int64_t call_tmp4;
#line 300 "LocaleModel.chpl"
  int64_t call_tmp5;
#line 332 "LocaleModel.chpl"
  call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
#line 333 "LocaleModel.chpl"
  call_tmp2 = (call_tmp == chpl_nodeID);
#line 333 "LocaleModel.chpl"
  if (call_tmp2) /* ZLINE: 335 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 333 "LocaleModel.chpl"
  {
#line 335 "LocaleModel.chpl"
    chpl_ftable_call(fn, args);
#line 335 "LocaleModel.chpl"
  } else /* ZLINE: 337 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 335 "LocaleModel.chpl"
  {
#line 337 "LocaleModel.chpl"
    call_tmp3 = chpl_sublocFromLocaleID(loc, _ln, _fn);
#line 337 "LocaleModel.chpl"
    call_tmp4 = ((int64_t)(call_tmp));
#line 337 "LocaleModel.chpl"
    call_tmp5 = ((int64_t)(call_tmp3));
#line 337 "LocaleModel.chpl"
    chpl_comm_fork(call_tmp4, call_tmp5, fn, args, args_size);
#line 337 "LocaleModel.chpl"
  }
#line 327 "LocaleModel.chpl"
  return;
#line 327 "LocaleModel.chpl"
}

#line 327 "LocaleModel.chpl"
/* LocaleModel.chpl:348 */
#line 327 "LocaleModel.chpl"
void chpl_executeOnFast(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, c_string _fn) {
#line 327 "LocaleModel.chpl"
  int32_t call_tmp;
#line 327 "LocaleModel.chpl"
  chpl_bool call_tmp2;
#line 327 "LocaleModel.chpl"
  int32_t call_tmp3;
#line 327 "LocaleModel.chpl"
  int64_t call_tmp4;
#line 327 "LocaleModel.chpl"
  int64_t call_tmp5;
#line 353 "LocaleModel.chpl"
  call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
#line 354 "LocaleModel.chpl"
  call_tmp2 = (call_tmp == chpl_nodeID);
#line 354 "LocaleModel.chpl"
  if (call_tmp2) /* ZLINE: 356 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 354 "LocaleModel.chpl"
  {
#line 356 "LocaleModel.chpl"
    chpl_ftable_call(fn, args);
#line 356 "LocaleModel.chpl"
  } else /* ZLINE: 358 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 356 "LocaleModel.chpl"
  {
#line 358 "LocaleModel.chpl"
    call_tmp3 = chpl_sublocFromLocaleID(loc, _ln, _fn);
#line 358 "LocaleModel.chpl"
    call_tmp4 = ((int64_t)(call_tmp));
#line 358 "LocaleModel.chpl"
    call_tmp5 = ((int64_t)(call_tmp3));
#line 358 "LocaleModel.chpl"
    chpl_comm_fork_fast(call_tmp4, call_tmp5, fn, args, args_size);
#line 358 "LocaleModel.chpl"
  }
#line 348 "LocaleModel.chpl"
  return;
#line 348 "LocaleModel.chpl"
}

#line 348 "LocaleModel.chpl"
/* LocaleModel.chpl:368 */
#line 348 "LocaleModel.chpl"
void chpl_executeOnNB(chpl_localeID_t* const loc, int64_t fn, c_void_ptr args, uint64_t args_size, int64_t _ln, c_string _fn) {
#line 348 "LocaleModel.chpl"
  int32_t call_tmp;
#line 348 "LocaleModel.chpl"
  chpl_bool call_tmp2;
#line 348 "LocaleModel.chpl"
  chpl_bool call_tmp3;
#line 348 "LocaleModel.chpl"
  int32_t call_tmp4;
#line 348 "LocaleModel.chpl"
  int64_t call_tmp5;
#line 348 "LocaleModel.chpl"
  int64_t call_tmp6;
#line 348 "LocaleModel.chpl"
  int32_t call_tmp7;
#line 348 "LocaleModel.chpl"
  chpl_bool call_tmp8;
#line 348 "LocaleModel.chpl"
  int64_t call_tmp9;
#line 348 "LocaleModel.chpl"
  int64_t call_tmp10;
#line 348 "LocaleModel.chpl"
  int64_t call_tmp11;
#line 348 "LocaleModel.chpl"
  int64_t call_tmp12;
#line 377 "LocaleModel.chpl"
  call_tmp = chpl_nodeFromLocaleID(loc, _ln, _fn);
#line 378 "LocaleModel.chpl"
  call_tmp2 = (call_tmp == chpl_nodeID);
#line 378 "LocaleModel.chpl"
  if (call_tmp2) /* ZLINE: 379 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 378 "LocaleModel.chpl"
  {
#line 379 "LocaleModel.chpl"
    call_tmp3 = chpl_task_getSerial();
#line 379 "LocaleModel.chpl"
    if (call_tmp3) /* ZLINE: 379 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 379 "LocaleModel.chpl"
    {
#line 381 "LocaleModel.chpl"
      chpl_ftable_call(fn, args);
#line 381 "LocaleModel.chpl"
    } else /* ZLINE: 379 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 381 "LocaleModel.chpl"
    {
#line 386 "LocaleModel.chpl"
      call_tmp4 = chpl_sublocFromLocaleID(loc, _ln, _fn);
#line 386 "LocaleModel.chpl"
      call_tmp5 = ((int64_t)(call_tmp));
#line 386 "LocaleModel.chpl"
      call_tmp6 = ((int64_t)(call_tmp4));
#line 386 "LocaleModel.chpl"
      chpl_comm_fork_nb(call_tmp5, call_tmp6, fn, args, args_size);
#line 386 "LocaleModel.chpl"
    }
#line 386 "LocaleModel.chpl"
  } else /* ZLINE: 389 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 386 "LocaleModel.chpl"
  {
#line 389 "LocaleModel.chpl"
    call_tmp7 = chpl_sublocFromLocaleID(loc, _ln, _fn);
#line 390 "LocaleModel.chpl"
    call_tmp8 = chpl_task_getSerial();
#line 390 "LocaleModel.chpl"
    if (call_tmp8) /* ZLINE: 390 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 390 "LocaleModel.chpl"
    {
#line 391 "LocaleModel.chpl"
      call_tmp9 = ((int64_t)(call_tmp));
#line 391 "LocaleModel.chpl"
      call_tmp10 = ((int64_t)(call_tmp7));
#line 391 "LocaleModel.chpl"
      chpl_comm_fork(call_tmp9, call_tmp10, fn, args, args_size);
#line 391 "LocaleModel.chpl"
    } else /* ZLINE: 390 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl */
#line 391 "LocaleModel.chpl"
    {
#line 393 "LocaleModel.chpl"
      call_tmp11 = ((int64_t)(call_tmp));
#line 393 "LocaleModel.chpl"
      call_tmp12 = ((int64_t)(call_tmp7));
#line 393 "LocaleModel.chpl"
      chpl_comm_fork_nb(call_tmp11, call_tmp12, fn, args, args_size);
#line 393 "LocaleModel.chpl"
    }
#line 393 "LocaleModel.chpl"
  }
#line 368 "LocaleModel.chpl"
  return;
#line 368 "LocaleModel.chpl"
}

#line 368 "LocaleModel.chpl"
/* LocaleModel.chpl:418 */
#line 368 "LocaleModel.chpl"
void chpl_taskListAddBegin(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn) {
#line 424 "LocaleModel.chpl"
  chpl_task_addToTaskList(fn, args, subloc_id, tlist, tlist_node_id, true, _ln, _fn);
#line 418 "LocaleModel.chpl"
  return;
#line 418 "LocaleModel.chpl"
}

#line 418 "LocaleModel.chpl"
/* LocaleModel.chpl:433 */
#line 418 "LocaleModel.chpl"
void chpl_taskListAddCoStmt(int64_t subloc_id, int64_t fn, c_void_ptr args, _ref_chpl_task_list_p tlist, int64_t tlist_node_id, int64_t _ln, c_string _fn) {
#line 439 "LocaleModel.chpl"
  chpl_task_addToTaskList(fn, args, subloc_id, tlist, tlist_node_id, false, _ln, _fn);
#line 433 "LocaleModel.chpl"
  return;
#line 433 "LocaleModel.chpl"
}

#line 433 "LocaleModel.chpl"
/* LocaleModel.chpl:447 */
#line 433 "LocaleModel.chpl"
void chpl_taskListProcess(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
#line 448 "LocaleModel.chpl"
  chpl_task_processTaskList(task_list);
#line 447 "LocaleModel.chpl"
  return;
#line 447 "LocaleModel.chpl"
}

#line 447 "LocaleModel.chpl"
/* LocaleModel.chpl:456 */
#line 447 "LocaleModel.chpl"
void chpl_taskListExecute(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
#line 457 "LocaleModel.chpl"
  chpl_task_executeTasksInList(task_list);
#line 456 "LocaleModel.chpl"
  return;
#line 456 "LocaleModel.chpl"
}

#line 456 "LocaleModel.chpl"
/* LocaleModel.chpl:465 */
#line 456 "LocaleModel.chpl"
void chpl_taskListFree(chpl_task_list_p task_list, int64_t _ln, c_string _fn) {
#line 466 "LocaleModel.chpl"
  chpl_task_freeTaskList(task_list);
#line 465 "LocaleModel.chpl"
  return;
#line 465 "LocaleModel.chpl"
}


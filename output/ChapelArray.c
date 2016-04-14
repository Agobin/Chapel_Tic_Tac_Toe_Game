/* ChapelArray.chpl:134 */
static void chpl__init_ChapelArray(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  atomic_int64 this5;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
#line 134 "ChapelArray.chpl"
  if (chpl__init_ChapelArray_p) /* ZLINE: 134 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 134 "ChapelArray.chpl"
  {
#line 134 "ChapelArray.chpl"
    goto _exit_chpl__init_ChapelArray;
#line 134 "ChapelArray.chpl"
  }
#line 134 "ChapelArray.chpl"
  modFormatStr = "%*s\n";
#line 134 "ChapelArray.chpl"
  modStr = "ChapelArray";
#line 134 "ChapelArray.chpl"
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
#line 134 "ChapelArray.chpl"
  refIndentLevel = &moduleInitLevel;
#line 134 "ChapelArray.chpl"
  *(refIndentLevel) += INT64(1);
#line 134 "ChapelArray.chpl"
  chpl__init_ChapelArray_p = UINT8(true);
#line 134 "ChapelArray.chpl"
  {
#line 134 "ChapelArray.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 134 "ChapelArray.chpl"
    chpl__init_ChapelTuple(_ln, _fn);
#line 134 "ChapelArray.chpl"
    chpl__init_ChapelLocale(_ln, _fn);
#line 134 "ChapelArray.chpl"
  }
#line 143 "ChapelArray.chpl"
  ret = type_tmp;
#line 143 "ChapelArray.chpl"
  _ref_tmp_ = &ret;
#line 143 "ChapelArray.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 143 "ChapelArray.chpl"
  (&this5)->_v = ret;
#line 143 "ChapelArray.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this5, _ln, _fn);
#line 143 "ChapelArray.chpl"
  numPrivateObjects = wrap_call_tmp;
#line 134 "ChapelArray.chpl"
  *(refIndentLevel) -= INT64(1);
#line 134 "ChapelArray.chpl"
  _exit_chpl__init_ChapelArray:;
#line 134 "ChapelArray.chpl"
  return;
#line 134 "ChapelArray.chpl"
}

#line 134 "ChapelArray.chpl"
/* ChapelArray.chpl:241 */
#line 134 "ChapelArray.chpl"
static void _newArray5(DefaultRectangularArr_locale_1_int64_t_F value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 134 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F this5 = NULL;
#line 134 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp = NULL;
#line 245 "ChapelArray.chpl"
  this5 = nil;
#line 245 "ChapelArray.chpl"
  this5 = value;
#line 245 "ChapelArray.chpl"
  wrap_call_tmp = _construct__array4(value, this5, _ln, _fn);
#line 245 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy4(wrap_call_tmp, _ln, _fn);
#line 241 "ChapelArray.chpl"
  return;
#line 241 "ChapelArray.chpl"
}

#line 241 "ChapelArray.chpl"
/* ChapelArray.chpl:241 */
#line 241 "ChapelArray.chpl"
static void _newArray4(DefaultRectangularArr_localesSignal_1_int64_t_F value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 241 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this5 = NULL;
#line 241 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp = NULL;
#line 245 "ChapelArray.chpl"
  this5 = nil;
#line 245 "ChapelArray.chpl"
  this5 = value;
#line 245 "ChapelArray.chpl"
  wrap_call_tmp = _construct__array5(value, this5, _ln, _fn);
#line 245 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy3(wrap_call_tmp, _ln, _fn);
#line 241 "ChapelArray.chpl"
  return;
#line 241 "ChapelArray.chpl"
}

#line 241 "ChapelArray.chpl"
/* ChapelArray.chpl:241 */
#line 241 "ChapelArray.chpl"
static void _newArray(DefaultRectangularArr_int64_t_1_int64_t_F value, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 241 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F this5 = NULL;
#line 241 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F wrap_call_tmp = NULL;
#line 245 "ChapelArray.chpl"
  this5 = nil;
#line 245 "ChapelArray.chpl"
  this5 = value;
#line 245 "ChapelArray.chpl"
  wrap_call_tmp = _construct__array(value, this5, _ln, _fn);
#line 245 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy5(wrap_call_tmp, _ln, _fn);
#line 241 "ChapelArray.chpl"
  return;
#line 241 "ChapelArray.chpl"
}

#line 241 "ChapelArray.chpl"
/* ChapelArray.chpl:241 */
#line 241 "ChapelArray.chpl"
static void _newArray2(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F value, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 241 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5 = NULL;
#line 241 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F wrap_call_tmp = NULL;
#line 245 "ChapelArray.chpl"
  this5 = nil;
#line 245 "ChapelArray.chpl"
  this5 = value;
#line 245 "ChapelArray.chpl"
  wrap_call_tmp = _construct__array2(value, this5, _ln, _fn);
#line 245 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy7(wrap_call_tmp, _ln, _fn);
#line 241 "ChapelArray.chpl"
  return;
#line 241 "ChapelArray.chpl"
}

#line 241 "ChapelArray.chpl"
/* ChapelArray.chpl:241 */
#line 241 "ChapelArray.chpl"
static void _newArray3(DefaultRectangularArr_string_1_int64_t_F value, _ref_DefaultRectangularArr_string_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 241 "ChapelArray.chpl"
  DefaultRectangularArr_string_1_int64_t_F this5 = NULL;
#line 241 "ChapelArray.chpl"
  DefaultRectangularArr_string_1_int64_t_F wrap_call_tmp = NULL;
#line 245 "ChapelArray.chpl"
  this5 = nil;
#line 245 "ChapelArray.chpl"
  this5 = value;
#line 245 "ChapelArray.chpl"
  wrap_call_tmp = _construct__array3(value, this5, _ln, _fn);
#line 245 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy6(wrap_call_tmp, _ln, _fn);
#line 241 "ChapelArray.chpl"
  return;
#line 241 "ChapelArray.chpl"
}

#line 241 "ChapelArray.chpl"
/* ChapelArray.chpl:248 */
#line 241 "ChapelArray.chpl"
static void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 241 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F this5 = NULL;
#line 241 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp = NULL;
#line 252 "ChapelArray.chpl"
  this5 = nil;
#line 252 "ChapelArray.chpl"
  this5 = value;
#line 252 "ChapelArray.chpl"
  wrap_call_tmp = _construct__domain(value, this5, _ln, _fn);
#line 252 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy2(wrap_call_tmp, _ln, _fn);
#line 248 "ChapelArray.chpl"
  return;
#line 248 "ChapelArray.chpl"
}

#line 248 "ChapelArray.chpl"
/* ChapelArray.chpl:255 */
#line 248 "ChapelArray.chpl"
static void _getDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 248 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F this5 = NULL;
#line 248 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp = NULL;
#line 259 "ChapelArray.chpl"
  this5 = nil;
#line 259 "ChapelArray.chpl"
  this5 = value;
#line 259 "ChapelArray.chpl"
  wrap_call_tmp = _construct__domain(value, this5, _ln, _fn);
#line 259 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy2(wrap_call_tmp, _ln, _fn);
#line 255 "ChapelArray.chpl"
  return;
#line 255 "ChapelArray.chpl"
}

#line 255 "ChapelArray.chpl"
/* ChapelArray.chpl:262 */
#line 255 "ChapelArray.chpl"
static void _newDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, int32_t _fn) {
#line 255 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 266 "ChapelArray.chpl"
  chpl_check_nil(value, INT64(266), INT64(0));
#line 266 "ChapelArray.chpl"
  call_tmp = _distribution(value, _ln, _fn);
#line 266 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy(call_tmp, _ln, _fn);
#line 262 "ChapelArray.chpl"
  return;
#line 262 "ChapelArray.chpl"
}

#line 262 "ChapelArray.chpl"
/* ChapelArray.chpl:269 */
#line 262 "ChapelArray.chpl"
static void _getDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, int32_t _fn) {
#line 262 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 273 "ChapelArray.chpl"
  chpl_check_nil(value, INT64(273), INT64(0));
#line 273 "ChapelArray.chpl"
  call_tmp = _distribution(value, _ln, _fn);
#line 273 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy(call_tmp, _ln, _fn);
#line 269 "ChapelArray.chpl"
  return;
#line 269 "ChapelArray.chpl"
}

#line 269 "ChapelArray.chpl"
/* ChapelArray.chpl:281 */
#line 269 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue(DefaultDist d, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 269 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
#line 269 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
#line 269 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 284 "ChapelArray.chpl"
  chpl_check_nil(d, INT64(284), INT64(0));
#line 284 "ChapelArray.chpl"
  call_tmp = newRectangularDom(d, _ln, _fn);
#line 284 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 284 "ChapelArray.chpl"
  _newDomain(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
#line 284 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 281 "ChapelArray.chpl"
  return;
#line 281 "ChapelArray.chpl"
}

#line 281 "ChapelArray.chpl"
/* ChapelArray.chpl:281 */
#line 281 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(DefaultDist d, int64_t _ln, int32_t _fn) {
#line 281 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo _return_tmp_;
#line 281 "ChapelArray.chpl"
  (&_return_tmp_)->d = d;
#line 281 "ChapelArray.chpl"
  return _return_tmp_;
#line 281 "ChapelArray.chpl"
}

#line 281 "ChapelArray.chpl"
/* ChapelArray.chpl:309 */
#line 281 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn) {
#line 281 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 281 "ChapelArray.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 281 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo call_tmp2;
#line 311 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 311 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(311), INT64(0));
#line 311 "ChapelArray.chpl"
  dist(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 311 "ChapelArray.chpl"
  call_tmp2 = chpl__buildDomainRuntimeType(call_tmp, _ln, _fn);
#line 311 "ChapelArray.chpl"
  chpl__autoDestroy(call_tmp, _ln, _fn);
#line 309 "ChapelArray.chpl"
  return call_tmp2;
#line 309 "ChapelArray.chpl"
}

#line 309 "ChapelArray.chpl"
/* ChapelArray.chpl:335 */
#line 309 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo5 chpl__buildArrayRuntimeType2(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn) {
#line 309 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo5 _return_tmp_;
#line 335 "ChapelArray.chpl"
  (&_return_tmp_)->dom = dom;
#line 335 "ChapelArray.chpl"
  return _return_tmp_;
#line 335 "ChapelArray.chpl"
}

#line 335 "ChapelArray.chpl"
/* ChapelArray.chpl:335 */
#line 335 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo6 chpl__buildArrayRuntimeType5(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn) {
#line 335 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo6 _return_tmp_;
#line 335 "ChapelArray.chpl"
  (&_return_tmp_)->dom = dom;
#line 335 "ChapelArray.chpl"
  return _return_tmp_;
#line 335 "ChapelArray.chpl"
}

#line 335 "ChapelArray.chpl"
/* ChapelArray.chpl:335 */
#line 335 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue4(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_string_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 335 "ChapelArray.chpl"
  DefaultRectangularArr_string_1_int64_t_F call_tmp = NULL;
#line 335 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_string_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 336 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 336 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(336), INT64(0));
#line 336 "ChapelArray.chpl"
  buildArray3(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 336 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 335 "ChapelArray.chpl"
  return;
#line 335 "ChapelArray.chpl"
}

#line 335 "ChapelArray.chpl"
/* ChapelArray.chpl:335 */
#line 335 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue2(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 335 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp = NULL;
#line 335 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 336 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 336 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(336), INT64(0));
#line 336 "ChapelArray.chpl"
  buildArray(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 336 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 335 "ChapelArray.chpl"
  return;
#line 335 "ChapelArray.chpl"
}

#line 335 "ChapelArray.chpl"
/* ChapelArray.chpl:335 */
#line 335 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo4 chpl__buildArrayRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn) {
#line 335 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo4 _return_tmp_;
#line 335 "ChapelArray.chpl"
  (&_return_tmp_)->dom = dom;
#line 335 "ChapelArray.chpl"
  return _return_tmp_;
#line 335 "ChapelArray.chpl"
}

#line 335 "ChapelArray.chpl"
/* ChapelArray.chpl:335 */
#line 335 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo3 chpl__buildArrayRuntimeType4(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn) {
#line 335 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo3 _return_tmp_;
#line 335 "ChapelArray.chpl"
  (&_return_tmp_)->dom = dom;
#line 335 "ChapelArray.chpl"
  return _return_tmp_;
#line 335 "ChapelArray.chpl"
}

#line 335 "ChapelArray.chpl"
/* ChapelArray.chpl:335 */
#line 335 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue6(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 335 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 335 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 336 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 336 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(336), INT64(0));
#line 336 "ChapelArray.chpl"
  buildArray5(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 336 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 335 "ChapelArray.chpl"
  return;
#line 335 "ChapelArray.chpl"
}

#line 335 "ChapelArray.chpl"
/* ChapelArray.chpl:335 */
#line 335 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue5(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 335 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
#line 335 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 336 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 336 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(336), INT64(0));
#line 336 "ChapelArray.chpl"
  buildArray4(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 336 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 335 "ChapelArray.chpl"
  return;
#line 335 "ChapelArray.chpl"
}

#line 335 "ChapelArray.chpl"
/* ChapelArray.chpl:335 */
#line 335 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo2 chpl__buildArrayRuntimeType3(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, int32_t _fn) {
#line 335 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo2 _return_tmp_;
#line 335 "ChapelArray.chpl"
  (&_return_tmp_)->dom = dom;
#line 335 "ChapelArray.chpl"
  return _return_tmp_;
#line 335 "ChapelArray.chpl"
}

#line 335 "ChapelArray.chpl"
/* ChapelArray.chpl:335 */
#line 335 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue3(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 335 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp = NULL;
#line 335 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_int64_t_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 336 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 336 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(336), INT64(0));
#line 336 "ChapelArray.chpl"
  buildArray2(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 336 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 335 "ChapelArray.chpl"
  return;
#line 335 "ChapelArray.chpl"
}

#line 335 "ChapelArray.chpl"
/* ChapelArray.chpl:453 */
#line 335 "ChapelArray.chpl"
static void chpl_incRefCountsForDomainsInArrayEltTypes(void) {
#line 454 "ChapelArray.chpl"
  compilerAssert();
#line 453 "ChapelArray.chpl"
  return;
#line 453 "ChapelArray.chpl"
}

#line 453 "ChapelArray.chpl"
/* ChapelArray.chpl:453 */
#line 453 "ChapelArray.chpl"
static void chpl_incRefCountsForDomainsInArrayEltTypes3(void) {
#line 454 "ChapelArray.chpl"
  compilerAssert();
#line 453 "ChapelArray.chpl"
  return;
#line 453 "ChapelArray.chpl"
}

#line 453 "ChapelArray.chpl"
/* ChapelArray.chpl:453 */
#line 453 "ChapelArray.chpl"
static void chpl_incRefCountsForDomainsInArrayEltTypes2(void) {
#line 454 "ChapelArray.chpl"
  compilerAssert();
#line 453 "ChapelArray.chpl"
  return;
#line 453 "ChapelArray.chpl"
}

#line 453 "ChapelArray.chpl"
/* ChapelArray.chpl:453 */
#line 453 "ChapelArray.chpl"
static void chpl_incRefCountsForDomainsInArrayEltTypes4(void) {
#line 454 "ChapelArray.chpl"
  compilerAssert();
#line 453 "ChapelArray.chpl"
  return;
#line 453 "ChapelArray.chpl"
}

#line 453 "ChapelArray.chpl"
/* ChapelArray.chpl:453 */
#line 453 "ChapelArray.chpl"
static void chpl_incRefCountsForDomainsInArrayEltTypes5(void) {
#line 454 "ChapelArray.chpl"
  compilerAssert();
#line 453 "ChapelArray.chpl"
  return;
#line 453 "ChapelArray.chpl"
}

#line 453 "ChapelArray.chpl"
/* ChapelArray.chpl:474 */
#line 453 "ChapelArray.chpl"
static void chpl_decRefCountsForDomainsInArrayEltTypes(void) {
#line 475 "ChapelArray.chpl"
  compilerAssert();
#line 474 "ChapelArray.chpl"
  return;
#line 474 "ChapelArray.chpl"
}

#line 474 "ChapelArray.chpl"
/* ChapelArray.chpl:474 */
#line 474 "ChapelArray.chpl"
static void chpl_decRefCountsForDomainsInArrayEltTypes3(void) {
#line 475 "ChapelArray.chpl"
  compilerAssert();
#line 474 "ChapelArray.chpl"
  return;
#line 474 "ChapelArray.chpl"
}

#line 474 "ChapelArray.chpl"
/* ChapelArray.chpl:474 */
#line 474 "ChapelArray.chpl"
static void chpl_decRefCountsForDomainsInArrayEltTypes2(void) {
#line 475 "ChapelArray.chpl"
  compilerAssert();
#line 474 "ChapelArray.chpl"
  return;
#line 474 "ChapelArray.chpl"
}

#line 474 "ChapelArray.chpl"
/* ChapelArray.chpl:474 */
#line 474 "ChapelArray.chpl"
static void chpl_decRefCountsForDomainsInArrayEltTypes4(void) {
#line 475 "ChapelArray.chpl"
  compilerAssert();
#line 474 "ChapelArray.chpl"
  return;
#line 474 "ChapelArray.chpl"
}

#line 474 "ChapelArray.chpl"
/* ChapelArray.chpl:498 */
#line 474 "ChapelArray.chpl"
static void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 474 "ChapelArray.chpl"
  _tuple_1_star_range_int64_t_bounded_F ranges;
#line 474 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F d = NULL;
#line 474 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
#line 474 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo call_tmp;
#line 474 "ChapelArray.chpl"
  DefaultDist _runtime_type_tmp_ = NULL;
#line 474 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 86 "LocaleModel.chpl"
  *(ranges + INT64(0)) = *(_e0_ranges);
#line 505 "ChapelArray.chpl"
  call_tmp = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
#line 505 "ChapelArray.chpl"
  _runtime_type_tmp_ = (&call_tmp)->d;
#line 505 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &type_tmp;
#line 505 "ChapelArray.chpl"
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
#line 505 "ChapelArray.chpl"
  d = type_tmp;
#line 506 "ChapelArray.chpl"
  chpl_check_nil(type_tmp, INT64(506), INT64(0));
#line 506 "ChapelArray.chpl"
  setIndices(type_tmp, &ranges, _ln, _fn);
#line 507 "ChapelArray.chpl"
  *(_retArg) = d;
#line 498 "ChapelArray.chpl"
  return;
#line 498 "ChapelArray.chpl"
}

#line 498 "ChapelArray.chpl"
/* ChapelArray.chpl:535 */
#line 498 "ChapelArray.chpl"
static void chpl__ensureDomainExpr(DefaultRectangularDom_1_int64_t_F x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 536 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy2(x, _ln, _fn);
#line 535 "ChapelArray.chpl"
  return;
#line 535 "ChapelArray.chpl"
}

#line 535 "ChapelArray.chpl"
/* ChapelArray.chpl:539 */
#line 535 "ChapelArray.chpl"
static void chpl__ensureDomainExpr2(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 535 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
#line 535 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 540 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 540 "ChapelArray.chpl"
  chpl__buildDomainExpr(_e0_x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 540 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 539 "ChapelArray.chpl"
  return;
#line 539 "ChapelArray.chpl"
}

#line 539 "ChapelArray.chpl"
/* ChapelArray.chpl:692 */
#line 539 "ChapelArray.chpl"
static void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, int32_t _fn) {
#line 539 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 539 "ChapelArray.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 693 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 693 "ChapelArray.chpl"
  _newDistribution(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 693 "ChapelArray.chpl"
  *(_retArg) = chpl__initCopy(call_tmp, _ln, _fn);
#line 693 "ChapelArray.chpl"
  chpl__autoDestroy(call_tmp, _ln, _fn);
#line 692 "ChapelArray.chpl"
  return;
#line 692 "ChapelArray.chpl"
}

#line 692 "ChapelArray.chpl"
/* ChapelArray.chpl:706 */
#line 692 "ChapelArray.chpl"
static DefaultDist _construct__distribution(DefaultDist _value, DefaultDist meme, int64_t _ln, int32_t _fn) {
#line 692 "ChapelArray.chpl"
  DefaultDist this5 = NULL;
#line 706 "ChapelArray.chpl"
  this5 = meme;
#line 707 "ChapelArray.chpl"
  this5 = _value;
#line 706 "ChapelArray.chpl"
  return this5;
#line 706 "ChapelArray.chpl"
}

#line 706 "ChapelArray.chpl"
/* ChapelArray.chpl:712 */
#line 706 "ChapelArray.chpl"
static DefaultDist _distribution(DefaultDist _value, int64_t _ln, int32_t _fn) {
#line 706 "ChapelArray.chpl"
  DefaultDist this5 = NULL;
#line 706 "ChapelArray.chpl"
  DefaultDist this6 = NULL;
#line 706 "ChapelArray.chpl"
  DefaultDist wrap_call_tmp = NULL;
#line 712 "ChapelArray.chpl"
  this6 = nil;
#line 712 "ChapelArray.chpl"
  this6 = _value;
#line 712 "ChapelArray.chpl"
  wrap_call_tmp = _construct__distribution(_value, this6, _ln, _fn);
#line 712 "ChapelArray.chpl"
  return wrap_call_tmp;
#line 712 "ChapelArray.chpl"
}

#line 712 "ChapelArray.chpl"
/* ChapelArray.chpl:725 */
#line 712 "ChapelArray.chpl"
static void chpl___TILDE__distribution(DefaultDist this5, int64_t _ln, int32_t _fn) {
#line 712 "ChapelArray.chpl"
  DefaultDist ret = NULL;
#line 712 "ChapelArray.chpl"
  int64_t call_tmp;
#line 712 "ChapelArray.chpl"
  BaseDist call_tmp2 = NULL;
#line 712 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 712 "ChapelArray.chpl"
  DefaultDist ret2 = NULL;
#line 712 "ChapelArray.chpl"
  BaseDist call_tmp4 = NULL;
#line 712 "ChapelArray.chpl"
  DefaultDist ret3 = NULL;
#line 712 "ChapelArray.chpl"
  BaseDist _parent_destructor_tmp_ = NULL;
#line 712 "ChapelArray.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 712 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp5 = NULL;
#line 712 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
#line 712 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 712 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp6 = NULL;
#line 712 "ChapelArray.chpl"
  c_void_ptr call_tmp7;
#line 729 "ChapelArray.chpl"
  ret = this5;
#line 729 "ChapelArray.chpl"
  call_tmp2 = ((BaseDist)(ret));
#line 729 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(729), INT64(0));
#line 729 "ChapelArray.chpl"
  call_tmp = destroyDist(call_tmp2, _ln, _fn);
#line 730 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 730 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 731 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 730 "ChapelArray.chpl"
  {
#line 731 "ChapelArray.chpl"
    ret2 = this5;
#line 731 "ChapelArray.chpl"
    call_tmp4 = ((BaseDist)(ret2));
#line 731 "ChapelArray.chpl"
    chpl_check_nil(call_tmp4, INT64(731), INT64(0));
#line 731 "ChapelArray.chpl"
    dsiDestroyDistClass(call_tmp4);
#line 732 "ChapelArray.chpl"
    ret3 = this5;
#line 732 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseDist)(ret3));
#line 732 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(732), INT64(0));
#line 732 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
#line 732 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(732), INT64(0));
#line 732 "ChapelArray.chpl"
    call_tmp5 = &((_field_destructor_tmp_)->_v);
#line 732 "ChapelArray.chpl"
    atomic_destroy_flag(call_tmp5);
#line 732 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(732), INT64(0));
#line 732 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
#line 732 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(732), INT64(0));
#line 732 "ChapelArray.chpl"
    _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 732 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_3, INT64(732), INT64(0));
#line 732 "ChapelArray.chpl"
    call_tmp6 = &((_field_destructor_tmp_3)->_v);
#line 732 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp6);
#line 732 "ChapelArray.chpl"
    call_tmp7 = ((void*)(ret3));
#line 732 "ChapelArray.chpl"
    chpl_here_free(call_tmp7, _ln, _fn);
#line 732 "ChapelArray.chpl"
  }
#line 725 "ChapelArray.chpl"
  return;
#line 725 "ChapelArray.chpl"
}

#line 725 "ChapelArray.chpl"
/* ChapelArray.chpl:739 */
#line 725 "ChapelArray.chpl"
static void clone2(DefaultDist this5, _ref_DefaultDist _retArg, int64_t _ln, int32_t _fn) {
#line 725 "ChapelArray.chpl"
  DefaultDist ret = NULL;
#line 725 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 725 "ChapelArray.chpl"
  DefaultDist call_tmp2 = NULL;
#line 725 "ChapelArray.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 740 "ChapelArray.chpl"
  ret = this5;
#line 740 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(740), INT64(0));
#line 740 "ChapelArray.chpl"
  call_tmp = dsiClone(ret);
#line 740 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 740 "ChapelArray.chpl"
  _newDistribution(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
#line 740 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 739 "ChapelArray.chpl"
  return;
#line 739 "ChapelArray.chpl"
}

#line 739 "ChapelArray.chpl"
/* ChapelArray.chpl:743 */
#line 739 "ChapelArray.chpl"
static DefaultRectangularDom_1_int64_t_F newRectangularDom(DefaultDist this5, int64_t _ln, int32_t _fn) {
#line 739 "ChapelArray.chpl"
  DefaultDist ret = NULL;
#line 739 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
#line 744 "ChapelArray.chpl"
  ret = this5;
#line 744 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(744), INT64(0));
#line 744 "ChapelArray.chpl"
  call_tmp = dsiNewRectangularDom(ret, _ln, _fn);
#line 743 "ChapelArray.chpl"
  return call_tmp;
#line 743 "ChapelArray.chpl"
}

#line 743 "ChapelArray.chpl"
/* ChapelArray.chpl:836 */
#line 743 "ChapelArray.chpl"
static DefaultRectangularDom_1_int64_t_F _construct__domain(DefaultRectangularDom_1_int64_t_F _value, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 743 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F this5 = NULL;
#line 836 "ChapelArray.chpl"
  this5 = meme;
#line 837 "ChapelArray.chpl"
  this5 = _value;
#line 836 "ChapelArray.chpl"
  return this5;
#line 836 "ChapelArray.chpl"
}

#line 836 "ChapelArray.chpl"
/* ChapelArray.chpl:850 */
#line 836 "ChapelArray.chpl"
static void chpl___TILDE__domain(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 836 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 836 "ChapelArray.chpl"
  int64_t call_tmp;
#line 836 "ChapelArray.chpl"
  BaseDom call_tmp2 = NULL;
#line 836 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 836 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 836 "ChapelArray.chpl"
  BaseRectangularDom _parent_destructor_tmp_ = NULL;
#line 836 "ChapelArray.chpl"
  BaseDom _parent_destructor_tmp_2 = NULL;
#line 836 "ChapelArray.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 836 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp4 = NULL;
#line 836 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
#line 836 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 836 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp5 = NULL;
#line 836 "ChapelArray.chpl"
  c_void_ptr call_tmp6;
#line 854 "ChapelArray.chpl"
  ret = this5;
#line 854 "ChapelArray.chpl"
  call_tmp2 = ((BaseDom)(ret));
#line 854 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(854), INT64(0));
#line 854 "ChapelArray.chpl"
  call_tmp = destroyDom(call_tmp2, _ln, _fn);
#line 855 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 855 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 855 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 855 "ChapelArray.chpl"
  {
#line 856 "ChapelArray.chpl"
    ret2 = this5;
#line 856 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseRectangularDom)(ret2));
#line 856 "ChapelArray.chpl"
    _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
#line 856 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_2, INT64(856), INT64(0));
#line 856 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
#line 856 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(856), INT64(0));
#line 856 "ChapelArray.chpl"
    call_tmp4 = &((_field_destructor_tmp_)->_v);
#line 856 "ChapelArray.chpl"
    atomic_destroy_flag(call_tmp4);
#line 856 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_2, INT64(856), INT64(0));
#line 856 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
#line 856 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(856), INT64(0));
#line 856 "ChapelArray.chpl"
    _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 856 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_3, INT64(856), INT64(0));
#line 856 "ChapelArray.chpl"
    call_tmp5 = &((_field_destructor_tmp_3)->_v);
#line 856 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp5);
#line 856 "ChapelArray.chpl"
    call_tmp6 = ((void*)(ret2));
#line 856 "ChapelArray.chpl"
    chpl_here_free(call_tmp6, _ln, _fn);
#line 856 "ChapelArray.chpl"
  }
#line 850 "ChapelArray.chpl"
  return;
#line 850 "ChapelArray.chpl"
}

#line 850 "ChapelArray.chpl"
/* ChapelArray.chpl:863 */
#line 850 "ChapelArray.chpl"
static void dist(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultDist _retArg, int64_t _ln, int32_t _fn) {
#line 850 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
#line 850 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 850 "ChapelArray.chpl"
  DefaultDist call_tmp2 = NULL;
#line 850 "ChapelArray.chpl"
  DefaultDist coerce_tmp = NULL;
#line 850 "ChapelArray.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 863 "ChapelArray.chpl"
  ret = this5;
#line 863 "ChapelArray.chpl"
  call_tmp = ret;
#line 863 "ChapelArray.chpl"
  chpl_check_nil(call_tmp, INT64(863), INT64(0));
#line 863 "ChapelArray.chpl"
  coerce_tmp = (call_tmp)->dist;
#line 863 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 863 "ChapelArray.chpl"
  _getDistribution(coerce_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
#line 863 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 863 "ChapelArray.chpl"
  return;
#line 863 "ChapelArray.chpl"
}

#line 863 "ChapelArray.chpl"
/* ChapelArray.chpl:921 */
#line 863 "ChapelArray.chpl"
static void this2(DefaultRectangularDom_1_int64_t_F this5, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 863 "ChapelArray.chpl"
  _tuple_1_star_range_int64_t_bounded_F r;
#line 863 "ChapelArray.chpl"
  range_int64_t_bounded_F wrap_call_tmp;
#line 863 "ChapelArray.chpl"
  _ref_range_int64_t_bounded_F call_tmp = NULL;
#line 863 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 863 "ChapelArray.chpl"
  range_int64_t_bounded_F call_tmp2;
#line 863 "ChapelArray.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 863 "ChapelArray.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 863 "ChapelArray.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 863 "ChapelArray.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 863 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 863 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
#line 863 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
#line 863 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
#line 923 "ChapelArray.chpl"
  wrap_call_tmp = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 923 "ChapelArray.chpl"
  *(r + INT64(0)) = wrap_call_tmp;
#line 928 "ChapelArray.chpl"
  call_tmp = (r + INT64(0));
#line 928 "ChapelArray.chpl"
  ret = this5;
#line 928 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 928 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(928), INT64(0));
#line 928 "ChapelArray.chpl"
  dsiDim(ret, ret_to_arg_ref_tmp_, _ln, _fn);
#line 928 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp3;
#line 928 "ChapelArray.chpl"
  _ref_tmp_ = &call_tmp2;
#line 928 "ChapelArray.chpl"
  chpl_check_nil(_ref_tmp_, INT64(928), INT64(0));
#line 928 "ChapelArray.chpl"
  this3(_ref_tmp_, _e0_ranges, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 928 "ChapelArray.chpl"
  *(call_tmp) = call_tmp3;
#line 930 "ChapelArray.chpl"
  ret2 = this5;
#line 930 "ChapelArray.chpl"
  chpl_check_nil(ret2, INT64(930), INT64(0));
#line 930 "ChapelArray.chpl"
  call_tmp4 = dsiBuildRectangularDom(ret2, &r, _ln, _fn);
#line 934 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp5;
#line 934 "ChapelArray.chpl"
  _newDomain(call_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 934 "ChapelArray.chpl"
  *(_retArg) = call_tmp5;
#line 921 "ChapelArray.chpl"
  return;
#line 921 "ChapelArray.chpl"
}

#line 921 "ChapelArray.chpl"
/* ChapelArray.chpl:991 */
#line 921 "ChapelArray.chpl"
static void buildArray5(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 921 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F x = NULL;
#line 921 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 921 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 921 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F T = NULL;
#line 921 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
#line 921 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 992 "ChapelArray.chpl"
  ret = this5;
#line 992 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(992), INT64(0));
#line 992 "ChapelArray.chpl"
  call_tmp = dsiBuildArray3(ret, _ln, _fn);
#line 992 "ChapelArray.chpl"
  x = call_tmp;
#line 992 "ChapelArray.chpl"
  T = &x;
#line 999 "ChapelArray.chpl"
  help4(this5, T, _ln, _fn);
#line 1000 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 1000 "ChapelArray.chpl"
  _newArray5(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1000 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 991 "ChapelArray.chpl"
  return;
#line 991 "ChapelArray.chpl"
}

#line 991 "ChapelArray.chpl"
/* ChapelArray.chpl:991 */
#line 991 "ChapelArray.chpl"
static void buildArray4(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F x = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
#line 991 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp2 = NULL;
#line 991 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 992 "ChapelArray.chpl"
  ret = this5;
#line 992 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(992), INT64(0));
#line 992 "ChapelArray.chpl"
  call_tmp = dsiBuildArray2(ret, _ln, _fn);
#line 992 "ChapelArray.chpl"
  x = call_tmp;
#line 992 "ChapelArray.chpl"
  T = &x;
#line 999 "ChapelArray.chpl"
  help5(this5, T, _ln, _fn);
#line 1000 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 1000 "ChapelArray.chpl"
  _newArray4(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1000 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 991 "ChapelArray.chpl"
  return;
#line 991 "ChapelArray.chpl"
}

#line 991 "ChapelArray.chpl"
/* ChapelArray.chpl:991 */
#line 991 "ChapelArray.chpl"
static void buildArray2(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F x = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp = NULL;
#line 991 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_int64_t_1_int64_t_F T = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp2 = NULL;
#line 991 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_int64_t_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 992 "ChapelArray.chpl"
  ret = this5;
#line 992 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(992), INT64(0));
#line 992 "ChapelArray.chpl"
  call_tmp = dsiBuildArray5(ret, _ln, _fn);
#line 992 "ChapelArray.chpl"
  x = call_tmp;
#line 992 "ChapelArray.chpl"
  T = &x;
#line 999 "ChapelArray.chpl"
  help2(this5, T, _ln, _fn);
#line 1000 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 1000 "ChapelArray.chpl"
  _newArray(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1000 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 991 "ChapelArray.chpl"
  return;
#line 991 "ChapelArray.chpl"
}

#line 991 "ChapelArray.chpl"
/* ChapelArray.chpl:991 */
#line 991 "ChapelArray.chpl"
static void buildArray(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp = NULL;
#line 991 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F T = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp2 = NULL;
#line 991 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 992 "ChapelArray.chpl"
  ret = this5;
#line 992 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(992), INT64(0));
#line 992 "ChapelArray.chpl"
  call_tmp = dsiBuildArray4(ret, _ln, _fn);
#line 992 "ChapelArray.chpl"
  x = call_tmp;
#line 992 "ChapelArray.chpl"
  T = &x;
#line 999 "ChapelArray.chpl"
  help(this5, T, _ln, _fn);
#line 1000 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 1000 "ChapelArray.chpl"
  _newArray2(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1000 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 991 "ChapelArray.chpl"
  return;
#line 991 "ChapelArray.chpl"
}

#line 991 "ChapelArray.chpl"
/* ChapelArray.chpl:991 */
#line 991 "ChapelArray.chpl"
static void buildArray3(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_string_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_string_1_int64_t_F x = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_string_1_int64_t_F call_tmp = NULL;
#line 991 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_string_1_int64_t_F T = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_string_1_int64_t_F call_tmp2 = NULL;
#line 991 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_string_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 992 "ChapelArray.chpl"
  ret = this5;
#line 992 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(992), INT64(0));
#line 992 "ChapelArray.chpl"
  call_tmp = dsiBuildArray(ret, _ln, _fn);
#line 992 "ChapelArray.chpl"
  x = call_tmp;
#line 992 "ChapelArray.chpl"
  T = &x;
#line 999 "ChapelArray.chpl"
  help3(this5, T, _ln, _fn);
#line 1000 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 1000 "ChapelArray.chpl"
  _newArray3(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1000 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 991 "ChapelArray.chpl"
  return;
#line 991 "ChapelArray.chpl"
}

#line 991 "ChapelArray.chpl"
/* ChapelArray.chpl:994 */
#line 991 "ChapelArray.chpl"
static void help3(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_string_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 991 "ChapelArray.chpl"
  memory_order local_memory_order_seq_cst;
#line 991 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 991 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 991 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularArr_string_1_int64_t_F T = NULL;
#line 991 "ChapelArray.chpl"
  chpl_bool T2;
#line 991 "ChapelArray.chpl"
  _ref_atomicflag call_tmp2 = NULL;
#line 991 "ChapelArray.chpl"
  memory_order default_argorder;
#line 991 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp3 = NULL;
#line 991 "ChapelArray.chpl"
  chpl_bool call_tmp4;
#line 991 "ChapelArray.chpl"
  _ref_atomicflag call_tmp5 = NULL;
#line 991 "ChapelArray.chpl"
  memory_order default_argorder2;
#line 991 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp6 = NULL;
#line 991 "ChapelArray.chpl"
  chpl_bool call_tmp7;
#line 991 "ChapelArray.chpl"
  _ref_list_BaseArr call_tmp8 = NULL;
#line 991 "ChapelArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 991 "ChapelArray.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 991 "ChapelArray.chpl"
  memory_order default_argorder3;
#line 991 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 991 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 991 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 991 "ChapelArray.chpl"
  BaseDom call_tmp12 = NULL;
#line 991 "ChapelArray.chpl"
  _ref_atomic_refcnt call_tmp13 = NULL;
#line 991 "ChapelArray.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 991 "ChapelArray.chpl"
  memory_order default_argorder4;
#line 991 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 995 "ChapelArray.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  ret = this5;
#line 995 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 995 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 995 "ChapelArray.chpl"
  T = *(x);
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp2 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 995 "ChapelArray.chpl"
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
#line 995 "ChapelArray.chpl"
  T2 = call_tmp4;
#line 995 "ChapelArray.chpl"
  while (T2) {
#line 995 "ChapelArray.chpl"
    chpl_task_yield();
#line 995 "ChapelArray.chpl"
    chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
    call_tmp5 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
    chpl_check_nil(call_tmp5, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
    call_tmp6 = &((call_tmp5)->_v);
#line 995 "ChapelArray.chpl"
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
#line 995 "ChapelArray.chpl"
    T2 = call_tmp7;
#line 995 "ChapelArray.chpl"
  }
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp8 = &((coerce_tmp)->_arrs);
#line 995 "ChapelArray.chpl"
  call_tmp9 = ((BaseArr)(T));
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp8, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  append_chpl(call_tmp8, call_tmp9, _ln, _fn);
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp10 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
  default_argorder3 = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp10, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp11 = &((call_tmp10)->_v);
#line 995 "ChapelArray.chpl"
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
#line 997 "ChapelArray.chpl"
  ret2 = this5;
#line 997 "ChapelArray.chpl"
  call_tmp12 = ((BaseDom)(ret2));
#line 997 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp12;
#line 997 "ChapelArray.chpl"
  compilerAssert();
#line 997 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp13 = &((coerce_tmp2)->_domCnt);
#line 997 "ChapelArray.chpl"
  chpl_check_nil(call_tmp13, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp14 = &((call_tmp13)->_cnt);
#line 997 "ChapelArray.chpl"
  default_argorder4 = local_memory_order_seq_cst;
#line 997 "ChapelArray.chpl"
  chpl_check_nil(call_tmp14, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 997 "ChapelArray.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
#line 994 "ChapelArray.chpl"
  return;
#line 994 "ChapelArray.chpl"
}

#line 994 "ChapelArray.chpl"
/* ChapelArray.chpl:994 */
#line 994 "ChapelArray.chpl"
static void help(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 994 "ChapelArray.chpl"
  memory_order local_memory_order_seq_cst;
#line 994 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 994 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F T = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool T2;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp2 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp3 = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool call_tmp4;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp5 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder2;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp6 = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool call_tmp7;
#line 994 "ChapelArray.chpl"
  _ref_list_BaseArr call_tmp8 = NULL;
#line 994 "ChapelArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder3;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 994 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom call_tmp12 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomic_refcnt call_tmp13 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder4;
#line 994 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 995 "ChapelArray.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  ret = this5;
#line 995 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 995 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 995 "ChapelArray.chpl"
  T = *(x);
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp2 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 995 "ChapelArray.chpl"
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
#line 995 "ChapelArray.chpl"
  T2 = call_tmp4;
#line 995 "ChapelArray.chpl"
  while (T2) {
#line 995 "ChapelArray.chpl"
    chpl_task_yield();
#line 995 "ChapelArray.chpl"
    chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
    call_tmp5 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
    chpl_check_nil(call_tmp5, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
    call_tmp6 = &((call_tmp5)->_v);
#line 995 "ChapelArray.chpl"
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
#line 995 "ChapelArray.chpl"
    T2 = call_tmp7;
#line 995 "ChapelArray.chpl"
  }
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp8 = &((coerce_tmp)->_arrs);
#line 995 "ChapelArray.chpl"
  call_tmp9 = ((BaseArr)(T));
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp8, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  append_chpl(call_tmp8, call_tmp9, _ln, _fn);
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp10 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
  default_argorder3 = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp10, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp11 = &((call_tmp10)->_v);
#line 995 "ChapelArray.chpl"
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
#line 997 "ChapelArray.chpl"
  ret2 = this5;
#line 997 "ChapelArray.chpl"
  call_tmp12 = ((BaseDom)(ret2));
#line 997 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp12;
#line 997 "ChapelArray.chpl"
  compilerAssert();
#line 997 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp13 = &((coerce_tmp2)->_domCnt);
#line 997 "ChapelArray.chpl"
  chpl_check_nil(call_tmp13, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp14 = &((call_tmp13)->_cnt);
#line 997 "ChapelArray.chpl"
  default_argorder4 = local_memory_order_seq_cst;
#line 997 "ChapelArray.chpl"
  chpl_check_nil(call_tmp14, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 997 "ChapelArray.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
#line 994 "ChapelArray.chpl"
  return;
#line 994 "ChapelArray.chpl"
}

#line 994 "ChapelArray.chpl"
/* ChapelArray.chpl:994 */
#line 994 "ChapelArray.chpl"
static void help2(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 994 "ChapelArray.chpl"
  memory_order local_memory_order_seq_cst;
#line 994 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 994 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F T = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool T2;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp2 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp3 = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool call_tmp4;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp5 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder2;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp6 = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool call_tmp7;
#line 994 "ChapelArray.chpl"
  _ref_list_BaseArr call_tmp8 = NULL;
#line 994 "ChapelArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder3;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 994 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom call_tmp12 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomic_refcnt call_tmp13 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder4;
#line 994 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 995 "ChapelArray.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  ret = this5;
#line 995 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 995 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 995 "ChapelArray.chpl"
  T = *(x);
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp2 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 995 "ChapelArray.chpl"
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
#line 995 "ChapelArray.chpl"
  T2 = call_tmp4;
#line 995 "ChapelArray.chpl"
  while (T2) {
#line 995 "ChapelArray.chpl"
    chpl_task_yield();
#line 995 "ChapelArray.chpl"
    chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
    call_tmp5 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
    chpl_check_nil(call_tmp5, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
    call_tmp6 = &((call_tmp5)->_v);
#line 995 "ChapelArray.chpl"
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
#line 995 "ChapelArray.chpl"
    T2 = call_tmp7;
#line 995 "ChapelArray.chpl"
  }
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp8 = &((coerce_tmp)->_arrs);
#line 995 "ChapelArray.chpl"
  call_tmp9 = ((BaseArr)(T));
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp8, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  append_chpl(call_tmp8, call_tmp9, _ln, _fn);
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp10 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
  default_argorder3 = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp10, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp11 = &((call_tmp10)->_v);
#line 995 "ChapelArray.chpl"
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
#line 997 "ChapelArray.chpl"
  ret2 = this5;
#line 997 "ChapelArray.chpl"
  call_tmp12 = ((BaseDom)(ret2));
#line 997 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp12;
#line 997 "ChapelArray.chpl"
  compilerAssert();
#line 997 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp13 = &((coerce_tmp2)->_domCnt);
#line 997 "ChapelArray.chpl"
  chpl_check_nil(call_tmp13, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp14 = &((call_tmp13)->_cnt);
#line 997 "ChapelArray.chpl"
  default_argorder4 = local_memory_order_seq_cst;
#line 997 "ChapelArray.chpl"
  chpl_check_nil(call_tmp14, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 997 "ChapelArray.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
#line 994 "ChapelArray.chpl"
  return;
#line 994 "ChapelArray.chpl"
}

#line 994 "ChapelArray.chpl"
/* ChapelArray.chpl:994 */
#line 994 "ChapelArray.chpl"
static void help5(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 994 "ChapelArray.chpl"
  memory_order local_memory_order_seq_cst;
#line 994 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 994 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool T2;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp2 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp3 = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool call_tmp4;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp5 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder2;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp6 = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool call_tmp7;
#line 994 "ChapelArray.chpl"
  _ref_list_BaseArr call_tmp8 = NULL;
#line 994 "ChapelArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder3;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 994 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom call_tmp12 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomic_refcnt call_tmp13 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder4;
#line 994 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 995 "ChapelArray.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  ret = this5;
#line 995 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 995 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 995 "ChapelArray.chpl"
  T = *(x);
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp2 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 995 "ChapelArray.chpl"
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
#line 995 "ChapelArray.chpl"
  T2 = call_tmp4;
#line 995 "ChapelArray.chpl"
  while (T2) {
#line 995 "ChapelArray.chpl"
    chpl_task_yield();
#line 995 "ChapelArray.chpl"
    chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
    call_tmp5 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
    chpl_check_nil(call_tmp5, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
    call_tmp6 = &((call_tmp5)->_v);
#line 995 "ChapelArray.chpl"
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
#line 995 "ChapelArray.chpl"
    T2 = call_tmp7;
#line 995 "ChapelArray.chpl"
  }
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp8 = &((coerce_tmp)->_arrs);
#line 995 "ChapelArray.chpl"
  call_tmp9 = ((BaseArr)(T));
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp8, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  append_chpl(call_tmp8, call_tmp9, _ln, _fn);
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp10 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
  default_argorder3 = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp10, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp11 = &((call_tmp10)->_v);
#line 995 "ChapelArray.chpl"
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
#line 997 "ChapelArray.chpl"
  ret2 = this5;
#line 997 "ChapelArray.chpl"
  call_tmp12 = ((BaseDom)(ret2));
#line 997 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp12;
#line 997 "ChapelArray.chpl"
  compilerAssert();
#line 997 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp13 = &((coerce_tmp2)->_domCnt);
#line 997 "ChapelArray.chpl"
  chpl_check_nil(call_tmp13, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp14 = &((call_tmp13)->_cnt);
#line 997 "ChapelArray.chpl"
  default_argorder4 = local_memory_order_seq_cst;
#line 997 "ChapelArray.chpl"
  chpl_check_nil(call_tmp14, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 997 "ChapelArray.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
#line 994 "ChapelArray.chpl"
  return;
#line 994 "ChapelArray.chpl"
}

#line 994 "ChapelArray.chpl"
/* ChapelArray.chpl:994 */
#line 994 "ChapelArray.chpl"
static void help4(DefaultRectangularDom_1_int64_t_F this5, _ref_DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 994 "ChapelArray.chpl"
  memory_order local_memory_order_seq_cst;
#line 994 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 994 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F T = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool T2;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp2 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp3 = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool call_tmp4;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp5 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder2;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp6 = NULL;
#line 994 "ChapelArray.chpl"
  chpl_bool call_tmp7;
#line 994 "ChapelArray.chpl"
  _ref_list_BaseArr call_tmp8 = NULL;
#line 994 "ChapelArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder3;
#line 994 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 994 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 994 "ChapelArray.chpl"
  BaseDom call_tmp12 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomic_refcnt call_tmp13 = NULL;
#line 994 "ChapelArray.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 994 "ChapelArray.chpl"
  memory_order default_argorder4;
#line 994 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 995 "ChapelArray.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  ret = this5;
#line 995 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 995 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 995 "ChapelArray.chpl"
  T = *(x);
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp2 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 995 "ChapelArray.chpl"
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
#line 995 "ChapelArray.chpl"
  T2 = call_tmp4;
#line 995 "ChapelArray.chpl"
  while (T2) {
#line 995 "ChapelArray.chpl"
    chpl_task_yield();
#line 995 "ChapelArray.chpl"
    chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
    call_tmp5 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
    chpl_check_nil(call_tmp5, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
    call_tmp6 = &((call_tmp5)->_v);
#line 995 "ChapelArray.chpl"
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
#line 995 "ChapelArray.chpl"
    T2 = call_tmp7;
#line 995 "ChapelArray.chpl"
  }
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp8 = &((coerce_tmp)->_arrs);
#line 995 "ChapelArray.chpl"
  call_tmp9 = ((BaseArr)(T));
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp8, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  append_chpl(call_tmp8, call_tmp9, _ln, _fn);
#line 995 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp10 = &((coerce_tmp)->_arrsLock);
#line 995 "ChapelArray.chpl"
  default_argorder3 = local_memory_order_seq_cst;
#line 995 "ChapelArray.chpl"
  chpl_check_nil(call_tmp10, INT64(995), INT64(0));
#line 995 "ChapelArray.chpl"
  call_tmp11 = &((call_tmp10)->_v);
#line 995 "ChapelArray.chpl"
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
#line 997 "ChapelArray.chpl"
  ret2 = this5;
#line 997 "ChapelArray.chpl"
  call_tmp12 = ((BaseDom)(ret2));
#line 997 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp12;
#line 997 "ChapelArray.chpl"
  compilerAssert();
#line 997 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp13 = &((coerce_tmp2)->_domCnt);
#line 997 "ChapelArray.chpl"
  chpl_check_nil(call_tmp13, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp14 = &((call_tmp13)->_cnt);
#line 997 "ChapelArray.chpl"
  default_argorder4 = local_memory_order_seq_cst;
#line 997 "ChapelArray.chpl"
  chpl_check_nil(call_tmp14, INT64(997), INT64(0));
#line 997 "ChapelArray.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 997 "ChapelArray.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
#line 994 "ChapelArray.chpl"
  return;
#line 994 "ChapelArray.chpl"
}

#line 994 "ChapelArray.chpl"
/* ChapelArray.chpl:1040 */
#line 994 "ChapelArray.chpl"
static int64_t numIndices(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 994 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 994 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1040 "ChapelArray.chpl"
  ret = this5;
#line 1040 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(1040), INT64(0));
#line 1040 "ChapelArray.chpl"
  call_tmp = dsiNumIndices(ret, _ln, _fn);
#line 1040 "ChapelArray.chpl"
  return call_tmp;
#line 1040 "ChapelArray.chpl"
}

#line 1040 "ChapelArray.chpl"
/* ChapelArray.chpl:1336 */
#line 1040 "ChapelArray.chpl"
static void setIndices(DefaultRectangularDom_1_int64_t_F this5, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, int32_t _fn) {
#line 1040 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1337 "ChapelArray.chpl"
  ret = this5;
#line 1337 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(1337), INT64(0));
#line 1337 "ChapelArray.chpl"
  dsiSetIndices(ret, x, _ln, _fn);
#line 1336 "ChapelArray.chpl"
  return;
#line 1336 "ChapelArray.chpl"
}

#line 1336 "ChapelArray.chpl"
/* ChapelArray.chpl:1344 */
#line 1336 "ChapelArray.chpl"
static void getIndices(DefaultRectangularDom_1_int64_t_F this5, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn) {
#line 1336 "ChapelArray.chpl"
  range_int64_t_bounded_F ret_x1;
#line 1336 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1336 "ChapelArray.chpl"
  _tuple_1_star_range_int64_t_bounded_F call_tmp;
#line 1336 "ChapelArray.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 1345 "ChapelArray.chpl"
  ret = this5;
#line 1345 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 1345 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(1345), INT64(0));
#line 1345 "ChapelArray.chpl"
  dsiGetIndices(ret, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1344 "ChapelArray.chpl"
  ret_x1 = *(call_tmp + INT64(0));
#line 1344 "ChapelArray.chpl"
  *(*(_retArg) + INT64(0)) = ret_x1;
#line 1344 "ChapelArray.chpl"
  return;
#line 1344 "ChapelArray.chpl"
}

#line 1344 "ChapelArray.chpl"
/* ChapelArray.chpl:1565 */
#line 1344 "ChapelArray.chpl"
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array5(DefaultRectangularArr_localesSignal_1_int64_t_F _value, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 1344 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this5 = NULL;
#line 1565 "ChapelArray.chpl"
  this5 = meme;
#line 1566 "ChapelArray.chpl"
  this5 = _value;
#line 1565 "ChapelArray.chpl"
  chpl_check_nil(this5, INT64(1565), INT64(0));
#line 1565 "ChapelArray.chpl"
  initialize4(this5);
#line 1565 "ChapelArray.chpl"
  return this5;
#line 1565 "ChapelArray.chpl"
}

#line 1565 "ChapelArray.chpl"
/* ChapelArray.chpl:1565 */
#line 1565 "ChapelArray.chpl"
static DefaultRectangularArr_string_1_int64_t_F _construct__array3(DefaultRectangularArr_string_1_int64_t_F _value, DefaultRectangularArr_string_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 1565 "ChapelArray.chpl"
  DefaultRectangularArr_string_1_int64_t_F this5 = NULL;
#line 1565 "ChapelArray.chpl"
  this5 = meme;
#line 1566 "ChapelArray.chpl"
  this5 = _value;
#line 1565 "ChapelArray.chpl"
  chpl_check_nil(this5, INT64(1565), INT64(0));
#line 1565 "ChapelArray.chpl"
  initialize5(this5);
#line 1565 "ChapelArray.chpl"
  return this5;
#line 1565 "ChapelArray.chpl"
}

#line 1565 "ChapelArray.chpl"
/* ChapelArray.chpl:1565 */
#line 1565 "ChapelArray.chpl"
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _construct__array2(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _value, DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 1565 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5 = NULL;
#line 1565 "ChapelArray.chpl"
  this5 = meme;
#line 1566 "ChapelArray.chpl"
  this5 = _value;
#line 1565 "ChapelArray.chpl"
  chpl_check_nil(this5, INT64(1565), INT64(0));
#line 1565 "ChapelArray.chpl"
  initialize3(this5);
#line 1565 "ChapelArray.chpl"
  return this5;
#line 1565 "ChapelArray.chpl"
}

#line 1565 "ChapelArray.chpl"
/* ChapelArray.chpl:1565 */
#line 1565 "ChapelArray.chpl"
static DefaultRectangularArr_int64_t_1_int64_t_F _construct__array(DefaultRectangularArr_int64_t_1_int64_t_F _value, DefaultRectangularArr_int64_t_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 1565 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F this5 = NULL;
#line 1565 "ChapelArray.chpl"
  this5 = meme;
#line 1566 "ChapelArray.chpl"
  this5 = _value;
#line 1565 "ChapelArray.chpl"
  chpl_check_nil(this5, INT64(1565), INT64(0));
#line 1565 "ChapelArray.chpl"
  initialize2(this5);
#line 1565 "ChapelArray.chpl"
  return this5;
#line 1565 "ChapelArray.chpl"
}

#line 1565 "ChapelArray.chpl"
/* ChapelArray.chpl:1565 */
#line 1565 "ChapelArray.chpl"
static DefaultRectangularArr_locale_1_int64_t_F _construct__array4(DefaultRectangularArr_locale_1_int64_t_F _value, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 1565 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F this5 = NULL;
#line 1565 "ChapelArray.chpl"
  this5 = meme;
#line 1566 "ChapelArray.chpl"
  this5 = _value;
#line 1565 "ChapelArray.chpl"
  chpl_check_nil(this5, INT64(1565), INT64(0));
#line 1565 "ChapelArray.chpl"
  initialize(this5);
#line 1565 "ChapelArray.chpl"
  return this5;
#line 1565 "ChapelArray.chpl"
}

#line 1565 "ChapelArray.chpl"
/* ChapelArray.chpl:1571 */
#line 1565 "ChapelArray.chpl"
static void initialize2(DefaultRectangularArr_int64_t_1_int64_t_F this5) {
#line 1573 "ChapelArray.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes2();
#line 1571 "ChapelArray.chpl"
  return;
#line 1571 "ChapelArray.chpl"
}

#line 1571 "ChapelArray.chpl"
/* ChapelArray.chpl:1571 */
#line 1571 "ChapelArray.chpl"
static void initialize4(DefaultRectangularArr_localesSignal_1_int64_t_F this5) {
#line 1573 "ChapelArray.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes3();
#line 1571 "ChapelArray.chpl"
  return;
#line 1571 "ChapelArray.chpl"
}

#line 1571 "ChapelArray.chpl"
/* ChapelArray.chpl:1571 */
#line 1571 "ChapelArray.chpl"
static void initialize(DefaultRectangularArr_locale_1_int64_t_F this5) {
#line 1573 "ChapelArray.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes();
#line 1571 "ChapelArray.chpl"
  return;
#line 1571 "ChapelArray.chpl"
}

#line 1571 "ChapelArray.chpl"
/* ChapelArray.chpl:1571 */
#line 1571 "ChapelArray.chpl"
static void initialize5(DefaultRectangularArr_string_1_int64_t_F this5) {
#line 1573 "ChapelArray.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes5();
#line 1571 "ChapelArray.chpl"
  return;
#line 1571 "ChapelArray.chpl"
}

#line 1571 "ChapelArray.chpl"
/* ChapelArray.chpl:1571 */
#line 1571 "ChapelArray.chpl"
static void initialize3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5) {
#line 1573 "ChapelArray.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes4();
#line 1571 "ChapelArray.chpl"
  return;
#line 1571 "ChapelArray.chpl"
}

#line 1571 "ChapelArray.chpl"
/* ChapelArray.chpl:1591 */
#line 1571 "ChapelArray.chpl"
static void chpl___TILDE__array3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 1571 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret = NULL;
#line 1571 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1571 "ChapelArray.chpl"
  BaseArr call_tmp2 = NULL;
#line 1571 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 1571 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret2 = NULL;
#line 1571 "ChapelArray.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1571 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1571 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1571 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1571 "ChapelArray.chpl"
  c_void_ptr call_tmp5;
#line 1595 "ChapelArray.chpl"
  ret = this5;
#line 1595 "ChapelArray.chpl"
  call_tmp2 = ((BaseArr)(ret));
#line 1595 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(1595), INT64(0));
#line 1595 "ChapelArray.chpl"
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
#line 1596 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 1596 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 1597 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 1596 "ChapelArray.chpl"
  {
#line 1597 "ChapelArray.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes3();
#line 1598 "ChapelArray.chpl"
    ret2 = this5;
#line 1598 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
#line 1598 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp4);
#line 1598 "ChapelArray.chpl"
    call_tmp5 = ((void*)(ret2));
#line 1598 "ChapelArray.chpl"
    chpl_here_free(call_tmp5, _ln, _fn);
#line 1598 "ChapelArray.chpl"
  }
#line 1591 "ChapelArray.chpl"
  return;
#line 1591 "ChapelArray.chpl"
}

#line 1591 "ChapelArray.chpl"
/* ChapelArray.chpl:1591 */
#line 1591 "ChapelArray.chpl"
static void chpl___TILDE__array4(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 1591 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret = NULL;
#line 1591 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1591 "ChapelArray.chpl"
  BaseArr call_tmp2 = NULL;
#line 1591 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 1591 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret2 = NULL;
#line 1591 "ChapelArray.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1591 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1591 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1591 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1591 "ChapelArray.chpl"
  c_void_ptr call_tmp5;
#line 1595 "ChapelArray.chpl"
  ret = this5;
#line 1595 "ChapelArray.chpl"
  call_tmp2 = ((BaseArr)(ret));
#line 1595 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(1595), INT64(0));
#line 1595 "ChapelArray.chpl"
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
#line 1596 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 1596 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 1597 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 1596 "ChapelArray.chpl"
  {
#line 1597 "ChapelArray.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes2();
#line 1598 "ChapelArray.chpl"
    ret2 = this5;
#line 1598 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
#line 1598 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp4);
#line 1598 "ChapelArray.chpl"
    call_tmp5 = ((void*)(ret2));
#line 1598 "ChapelArray.chpl"
    chpl_here_free(call_tmp5, _ln, _fn);
#line 1598 "ChapelArray.chpl"
  }
#line 1591 "ChapelArray.chpl"
  return;
#line 1591 "ChapelArray.chpl"
}

#line 1591 "ChapelArray.chpl"
/* ChapelArray.chpl:1591 */
#line 1591 "ChapelArray.chpl"
static void chpl___TILDE__array2(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 1591 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
#line 1591 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1591 "ChapelArray.chpl"
  BaseArr call_tmp2 = NULL;
#line 1591 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 1591 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret2 = NULL;
#line 1591 "ChapelArray.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1591 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1591 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1591 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1591 "ChapelArray.chpl"
  c_void_ptr call_tmp5;
#line 1595 "ChapelArray.chpl"
  ret = this5;
#line 1595 "ChapelArray.chpl"
  call_tmp2 = ((BaseArr)(ret));
#line 1595 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(1595), INT64(0));
#line 1595 "ChapelArray.chpl"
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
#line 1596 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 1596 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 1597 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 1596 "ChapelArray.chpl"
  {
#line 1597 "ChapelArray.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes();
#line 1598 "ChapelArray.chpl"
    ret2 = this5;
#line 1598 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
#line 1598 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp4);
#line 1598 "ChapelArray.chpl"
    call_tmp5 = ((void*)(ret2));
#line 1598 "ChapelArray.chpl"
    chpl_here_free(call_tmp5, _ln, _fn);
#line 1598 "ChapelArray.chpl"
  }
#line 1591 "ChapelArray.chpl"
  return;
#line 1591 "ChapelArray.chpl"
}

#line 1591 "ChapelArray.chpl"
/* ChapelArray.chpl:1591 */
#line 1591 "ChapelArray.chpl"
static void chpl___TILDE__array(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 1591 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 1591 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1591 "ChapelArray.chpl"
  BaseArr call_tmp2 = NULL;
#line 1591 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 1591 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret2 = NULL;
#line 1591 "ChapelArray.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1591 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1591 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1591 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1591 "ChapelArray.chpl"
  c_void_ptr call_tmp5;
#line 1595 "ChapelArray.chpl"
  ret = this5;
#line 1595 "ChapelArray.chpl"
  call_tmp2 = ((BaseArr)(ret));
#line 1595 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(1595), INT64(0));
#line 1595 "ChapelArray.chpl"
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
#line 1596 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 1596 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 1597 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 1596 "ChapelArray.chpl"
  {
#line 1597 "ChapelArray.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes4();
#line 1598 "ChapelArray.chpl"
    ret2 = this5;
#line 1598 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1598 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(1598), INT64(0));
#line 1598 "ChapelArray.chpl"
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
#line 1598 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp4);
#line 1598 "ChapelArray.chpl"
    call_tmp5 = ((void*)(ret2));
#line 1598 "ChapelArray.chpl"
    chpl_here_free(call_tmp5, _ln, _fn);
#line 1598 "ChapelArray.chpl"
  }
#line 1591 "ChapelArray.chpl"
  return;
#line 1591 "ChapelArray.chpl"
}

#line 1591 "ChapelArray.chpl"
/* ChapelArray.chpl:1609 */
#line 1591 "ChapelArray.chpl"
static void _dom(DefaultRectangularArr_locale_1_int64_t_F this5, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 1591 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 1591 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 1591 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
#line 1591 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 1591 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 1609 "ChapelArray.chpl"
  ret = this5;
#line 1609 "ChapelArray.chpl"
  call_tmp = ret;
#line 1609 "ChapelArray.chpl"
  chpl_check_nil(call_tmp, INT64(1609), INT64(0));
#line 1609 "ChapelArray.chpl"
  coerce_tmp = (call_tmp)->dom;
#line 1609 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 1609 "ChapelArray.chpl"
  _getDomain(coerce_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1609 "ChapelArray.chpl"
  *(_retArg) = chpl__initCopy2(call_tmp2, _ln, _fn);
#line 1609 "ChapelArray.chpl"
  chpl__autoDestroy2(call_tmp2, _ln, _fn);
#line 1609 "ChapelArray.chpl"
  return;
#line 1609 "ChapelArray.chpl"
}

#line 1609 "ChapelArray.chpl"
/* ChapelArray.chpl:1819 */
#line 1609 "ChapelArray.chpl"
static int64_t numElements(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 1609 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp = NULL;
#line 1609 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret = NULL;
#line 1609 "ChapelArray.chpl"
  int64_t call_tmp2;
#line 1609 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 1819 "ChapelArray.chpl"
  ret = this5;
#line 1819 "ChapelArray.chpl"
  call_tmp = ret;
#line 1819 "ChapelArray.chpl"
  chpl_check_nil(call_tmp, INT64(1819), INT64(0));
#line 1819 "ChapelArray.chpl"
  coerce_tmp = (call_tmp)->dom;
#line 1819 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(1819), INT64(0));
#line 1819 "ChapelArray.chpl"
  call_tmp2 = dsiNumIndices(coerce_tmp, _ln, _fn);
#line 1819 "ChapelArray.chpl"
  return call_tmp2;
#line 1819 "ChapelArray.chpl"
}

#line 1819 "ChapelArray.chpl"
/* ChapelArray.chpl:1821 */
#line 1819 "ChapelArray.chpl"
static int64_t size(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 1819 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1821 "ChapelArray.chpl"
  chpl_check_nil(this5, INT64(1821), INT64(0));
#line 1821 "ChapelArray.chpl"
  call_tmp = numElements(this5, _ln, _fn);
#line 1821 "ChapelArray.chpl"
  return call_tmp;
#line 1821 "ChapelArray.chpl"
}

#line 1821 "ChapelArray.chpl"
/* ChapelArray.chpl:1825 */
#line 1821 "ChapelArray.chpl"
static void newAlias(DefaultRectangularArr_locale_1_int64_t_F this5, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, int32_t _fn) {
#line 1821 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 1821 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 1821 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 1826 "ChapelArray.chpl"
  ret = this5;
#line 1827 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 1827 "ChapelArray.chpl"
  _newArray5(ret, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1827 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 1825 "ChapelArray.chpl"
  return;
#line 1825 "ChapelArray.chpl"
}

#line 1825 "ChapelArray.chpl"
/* ChapelArray.chpl:2658 */
#line 1825 "ChapelArray.chpl"
static void chpl___ASSIGN_(DefaultRectangularDom_1_int64_t_F a, DefaultRectangularDom_1_int64_t_F b, int64_t _ln, int32_t _fn) {
#line 1825 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1825 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 1825 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 1825 "ChapelArray.chpl"
  list_BaseArr_chpl coerce_tmp2;
#line 1825 "ChapelArray.chpl"
  list_BaseArr_chpl _ic__F0_this;
#line 1825 "ChapelArray.chpl"
  listNode_BaseArr_chpl tmp = NULL;
#line 1825 "ChapelArray.chpl"
  listNode_BaseArr_chpl coerce_tmp3 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool T;
#line 1825 "ChapelArray.chpl"
  object call_tmp2 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 1825 "ChapelArray.chpl"
  BaseArr _yieldedIndex = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_ = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_2;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_2 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_3;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F _cast_tmp_3 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_4;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _cast_tmp_4 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_5;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularArr_string_1_int64_t_F _cast_tmp_5 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_6;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_6 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_7;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_7 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_8;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F _cast_tmp_8 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_9;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _cast_tmp_9 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_10;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularArr_string_1_int64_t_F _cast_tmp_10 = NULL;
#line 1825 "ChapelArray.chpl"
  listNode_BaseArr_chpl coerce_tmp4 = NULL;
#line 1825 "ChapelArray.chpl"
  object call_tmp4 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool call_tmp5;
#line 1825 "ChapelArray.chpl"
  _tuple_1_star_range_int64_t_bounded_F call_tmp6;
#line 1825 "ChapelArray.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 1825 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 1825 "ChapelArray.chpl"
  BaseDom coerce_tmp5 = NULL;
#line 1825 "ChapelArray.chpl"
  BaseDom call_tmp7 = NULL;
#line 1825 "ChapelArray.chpl"
  list_BaseArr_chpl coerce_tmp6;
#line 1825 "ChapelArray.chpl"
  list_BaseArr_chpl _ic__F0_this2;
#line 1825 "ChapelArray.chpl"
  listNode_BaseArr_chpl tmp2 = NULL;
#line 1825 "ChapelArray.chpl"
  listNode_BaseArr_chpl coerce_tmp7 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool T2;
#line 1825 "ChapelArray.chpl"
  object call_tmp8 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool call_tmp9;
#line 1825 "ChapelArray.chpl"
  BaseArr _yieldedIndex2 = NULL;
#line 1825 "ChapelArray.chpl"
  listNode_BaseArr_chpl coerce_tmp8 = NULL;
#line 1825 "ChapelArray.chpl"
  object call_tmp10 = NULL;
#line 1825 "ChapelArray.chpl"
  chpl_bool call_tmp11;
#line 2660 "ChapelArray.chpl"
  ret = a;
#line 2660 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 2660 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 2660 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(2660), INT64(0));
#line 2660 "ChapelArray.chpl"
  coerce_tmp2 = (coerce_tmp)->_arrs;
#line 2660 "ChapelArray.chpl"
  _ic__F0_this = coerce_tmp2;
#line 2660 "ChapelArray.chpl"
  coerce_tmp3 = (&_ic__F0_this)->first_chpl;
#line 2660 "ChapelArray.chpl"
  tmp = coerce_tmp3;
#line 2660 "ChapelArray.chpl"
  call_tmp2 = ((object)(coerce_tmp3));
#line 2660 "ChapelArray.chpl"
  call_tmp3 = (call_tmp2 != nil);
#line 2660 "ChapelArray.chpl"
  T = call_tmp3;
#line 2660 "ChapelArray.chpl"
  while (T) {
#line 2660 "ChapelArray.chpl"
    chpl_check_nil(tmp, INT64(2660), INT64(0));
#line 2660 "ChapelArray.chpl"
    _yieldedIndex = (tmp)->data_chpl;
#line 2661 "ChapelArray.chpl"
    chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
    _dynamic_dispatch_tmp_ = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
#line 2661 "ChapelArray.chpl"
    if (_dynamic_dispatch_tmp_) /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
    {
#line 2661 "ChapelArray.chpl"
      _cast_tmp_ = ((DefaultRectangularArr_locale_1_int64_t_F)(_yieldedIndex));
#line 2661 "ChapelArray.chpl"
      chpl_check_nil(_cast_tmp_, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
      dsiReallocate6(_cast_tmp_, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
    } else /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
    {
#line 2661 "ChapelArray.chpl"
      chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
      _dynamic_dispatch_tmp_2 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
#line 2661 "ChapelArray.chpl"
      if (_dynamic_dispatch_tmp_2) /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
      {
#line 2661 "ChapelArray.chpl"
        _cast_tmp_2 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(_yieldedIndex));
#line 2661 "ChapelArray.chpl"
        chpl_check_nil(_cast_tmp_2, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
        dsiReallocate3(_cast_tmp_2, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
      } else /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
      {
#line 2661 "ChapelArray.chpl"
        chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
        _dynamic_dispatch_tmp_3 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F);
#line 2661 "ChapelArray.chpl"
        if (_dynamic_dispatch_tmp_3) /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
        {
#line 2661 "ChapelArray.chpl"
          _cast_tmp_3 = ((DefaultRectangularArr_int64_t_1_int64_t_F)(_yieldedIndex));
#line 2661 "ChapelArray.chpl"
          chpl_check_nil(_cast_tmp_3, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
          dsiReallocate2(_cast_tmp_3, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
        } else /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
        {
#line 2661 "ChapelArray.chpl"
          chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
          _dynamic_dispatch_tmp_4 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F);
#line 2661 "ChapelArray.chpl"
          if (_dynamic_dispatch_tmp_4) /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
          {
#line 2661 "ChapelArray.chpl"
            _cast_tmp_4 = ((DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F)(_yieldedIndex));
#line 2661 "ChapelArray.chpl"
            chpl_check_nil(_cast_tmp_4, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
            dsiReallocate4(_cast_tmp_4, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
          } else /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
          {
#line 2661 "ChapelArray.chpl"
            chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
            _dynamic_dispatch_tmp_5 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_string_1_int64_t_F);
#line 2661 "ChapelArray.chpl"
            if (_dynamic_dispatch_tmp_5) /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
            {
#line 2661 "ChapelArray.chpl"
              _cast_tmp_5 = ((DefaultRectangularArr_string_1_int64_t_F)(_yieldedIndex));
#line 2661 "ChapelArray.chpl"
              chpl_check_nil(_cast_tmp_5, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
              dsiReallocate5(_cast_tmp_5, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
            } else /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
            {
#line 2661 "ChapelArray.chpl"
              chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
              _dynamic_dispatch_tmp_6 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
#line 2661 "ChapelArray.chpl"
              if (_dynamic_dispatch_tmp_6) /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
              {
#line 2661 "ChapelArray.chpl"
                _cast_tmp_6 = ((DefaultRectangularArr_locale_1_int64_t_F)(_yieldedIndex));
#line 2661 "ChapelArray.chpl"
                chpl_check_nil(_cast_tmp_6, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
                dsiReallocate6(_cast_tmp_6, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
              } else /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
              {
#line 2661 "ChapelArray.chpl"
                chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
                _dynamic_dispatch_tmp_7 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
#line 2661 "ChapelArray.chpl"
                if (_dynamic_dispatch_tmp_7) /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
                {
#line 2661 "ChapelArray.chpl"
                  _cast_tmp_7 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(_yieldedIndex));
#line 2661 "ChapelArray.chpl"
                  chpl_check_nil(_cast_tmp_7, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
                  dsiReallocate3(_cast_tmp_7, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
                } else /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
                {
#line 2661 "ChapelArray.chpl"
                  chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
                  _dynamic_dispatch_tmp_8 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F);
#line 2661 "ChapelArray.chpl"
                  if (_dynamic_dispatch_tmp_8) /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
                  {
#line 2661 "ChapelArray.chpl"
                    _cast_tmp_8 = ((DefaultRectangularArr_int64_t_1_int64_t_F)(_yieldedIndex));
#line 2661 "ChapelArray.chpl"
                    chpl_check_nil(_cast_tmp_8, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
                    dsiReallocate2(_cast_tmp_8, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
                  } else /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
                  {
#line 2661 "ChapelArray.chpl"
                    chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
                    _dynamic_dispatch_tmp_9 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F);
#line 2661 "ChapelArray.chpl"
                    if (_dynamic_dispatch_tmp_9) /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
                    {
#line 2661 "ChapelArray.chpl"
                      _cast_tmp_9 = ((DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F)(_yieldedIndex));
#line 2661 "ChapelArray.chpl"
                      chpl_check_nil(_cast_tmp_9, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
                      dsiReallocate4(_cast_tmp_9, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
                    } else /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
                    {
#line 2661 "ChapelArray.chpl"
                      chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
                      _dynamic_dispatch_tmp_10 = (((object)(_yieldedIndex))->chpl__cid == chpl__cid_DefaultRectangularArr_string_1_int64_t_F);
#line 2661 "ChapelArray.chpl"
                      if (_dynamic_dispatch_tmp_10) /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
                      {
#line 2661 "ChapelArray.chpl"
                        _cast_tmp_10 = ((DefaultRectangularArr_string_1_int64_t_F)(_yieldedIndex));
#line 2661 "ChapelArray.chpl"
                        chpl_check_nil(_cast_tmp_10, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
                        dsiReallocate5(_cast_tmp_10, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
                      } else /* ZLINE: 2661 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelArray.chpl */
#line 2661 "ChapelArray.chpl"
                      {
#line 2661 "ChapelArray.chpl"
                        chpl_check_nil(_yieldedIndex, INT64(2661), INT64(0));
#line 2661 "ChapelArray.chpl"
                        dsiReallocate(_yieldedIndex, b, _ln, _fn);
#line 2661 "ChapelArray.chpl"
                      }
#line 2661 "ChapelArray.chpl"
                    }
#line 2661 "ChapelArray.chpl"
                  }
#line 2661 "ChapelArray.chpl"
                }
#line 2661 "ChapelArray.chpl"
              }
#line 2661 "ChapelArray.chpl"
            }
#line 2661 "ChapelArray.chpl"
          }
#line 2661 "ChapelArray.chpl"
        }
#line 2661 "ChapelArray.chpl"
      }
#line 2661 "ChapelArray.chpl"
    }
#line 2660 "ChapelArray.chpl"
    chpl_check_nil(tmp, INT64(2660), INT64(0));
#line 2660 "ChapelArray.chpl"
    coerce_tmp4 = (tmp)->next_chpl;
#line 2660 "ChapelArray.chpl"
    tmp = coerce_tmp4;
#line 2660 "ChapelArray.chpl"
    call_tmp4 = ((object)(coerce_tmp4));
#line 2660 "ChapelArray.chpl"
    call_tmp5 = (call_tmp4 != nil);
#line 2660 "ChapelArray.chpl"
    T = call_tmp5;
#line 2660 "ChapelArray.chpl"
  }
#line 2663 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp6;
#line 2663 "ChapelArray.chpl"
  chpl_check_nil(b, INT64(2663), INT64(0));
#line 2663 "ChapelArray.chpl"
  getIndices(b, ret_to_arg_ref_tmp_, _ln, _fn);
#line 2663 "ChapelArray.chpl"
  chpl_check_nil(a, INT64(2663), INT64(0));
#line 2663 "ChapelArray.chpl"
  setIndices(a, &call_tmp6, _ln, _fn);
#line 2664 "ChapelArray.chpl"
  ret2 = a;
#line 2664 "ChapelArray.chpl"
  call_tmp7 = ((BaseDom)(ret2));
#line 2664 "ChapelArray.chpl"
  coerce_tmp5 = call_tmp7;
#line 2664 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp5, INT64(2664), INT64(0));
#line 2664 "ChapelArray.chpl"
  coerce_tmp6 = (coerce_tmp5)->_arrs;
#line 2664 "ChapelArray.chpl"
  _ic__F0_this2 = coerce_tmp6;
#line 2664 "ChapelArray.chpl"
  coerce_tmp7 = (&_ic__F0_this2)->first_chpl;
#line 2664 "ChapelArray.chpl"
  tmp2 = coerce_tmp7;
#line 2664 "ChapelArray.chpl"
  call_tmp8 = ((object)(coerce_tmp7));
#line 2664 "ChapelArray.chpl"
  call_tmp9 = (call_tmp8 != nil);
#line 2664 "ChapelArray.chpl"
  T2 = call_tmp9;
#line 2664 "ChapelArray.chpl"
  while (T2) {
#line 2664 "ChapelArray.chpl"
    chpl_check_nil(tmp2, INT64(2664), INT64(0));
#line 2664 "ChapelArray.chpl"
    _yieldedIndex2 = (tmp2)->data_chpl;
#line 2665 "ChapelArray.chpl"
    chpl_check_nil(_yieldedIndex2, INT64(2665), INT64(0));
#line 2665 "ChapelArray.chpl"
    dsiPostReallocate(_yieldedIndex2);
#line 2664 "ChapelArray.chpl"
    chpl_check_nil(tmp2, INT64(2664), INT64(0));
#line 2664 "ChapelArray.chpl"
    coerce_tmp8 = (tmp2)->next_chpl;
#line 2664 "ChapelArray.chpl"
    tmp2 = coerce_tmp8;
#line 2664 "ChapelArray.chpl"
    call_tmp10 = ((object)(coerce_tmp8));
#line 2664 "ChapelArray.chpl"
    call_tmp11 = (call_tmp10 != nil);
#line 2664 "ChapelArray.chpl"
    T2 = call_tmp11;
#line 2664 "ChapelArray.chpl"
  }
#line 2658 "ChapelArray.chpl"
  return;
#line 2658 "ChapelArray.chpl"
}

#line 2658 "ChapelArray.chpl"
/* ChapelArray.chpl:3062 */
#line 2658 "ChapelArray.chpl"
static DefaultDist chpl__initCopy(DefaultDist a, int64_t _ln, int32_t _fn) {
#line 2658 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 2658 "ChapelArray.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 3063 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 3063 "ChapelArray.chpl"
  chpl_check_nil(a, INT64(3063), INT64(0));
#line 3063 "ChapelArray.chpl"
  clone2(a, ret_to_arg_ref_tmp_, _ln, _fn);
#line 3062 "ChapelArray.chpl"
  return call_tmp;
#line 3062 "ChapelArray.chpl"
}

#line 3062 "ChapelArray.chpl"
/* ChapelArray.chpl:3068 */
#line 3062 "ChapelArray.chpl"
static DefaultRectangularDom_1_int64_t_F chpl__initCopy2(DefaultRectangularDom_1_int64_t_F a, int64_t _ln, int32_t _fn) {
#line 3062 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F b = NULL;
#line 3062 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
#line 3062 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo call_tmp;
#line 3062 "ChapelArray.chpl"
  DefaultDist _runtime_type_tmp_ = NULL;
#line 3062 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 3062 "ChapelArray.chpl"
  _tuple_1_star_range_int64_t_bounded_F call_tmp2;
#line 3062 "ChapelArray.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 3069 "ChapelArray.chpl"
  call_tmp = chpl__convertValueToRuntimeType(a, _ln, _fn);
#line 3069 "ChapelArray.chpl"
  _runtime_type_tmp_ = (&call_tmp)->d;
#line 3069 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &type_tmp;
#line 3069 "ChapelArray.chpl"
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
#line 3069 "ChapelArray.chpl"
  b = type_tmp;
#line 3071 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 3071 "ChapelArray.chpl"
  chpl_check_nil(a, INT64(3071), INT64(0));
#line 3071 "ChapelArray.chpl"
  getIndices(a, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 3071 "ChapelArray.chpl"
  chpl_check_nil(type_tmp, INT64(3071), INT64(0));
#line 3071 "ChapelArray.chpl"
  setIndices(type_tmp, &call_tmp2, _ln, _fn);
#line 3068 "ChapelArray.chpl"
  return b;
#line 3068 "ChapelArray.chpl"
}


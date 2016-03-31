/* ChapelArray.chpl:134 */
static void chpl__init_ChapelArray(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  atomic_int64 this6;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
#line 134 "ChapelArray.chpl"
  if (chpl__init_ChapelArray_p) /* ZLINE: 134 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
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
  chpl__init_ChapelArray_p = true;
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
  (&this6)->_v = ret;
#line 143 "ChapelArray.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this6, _ln, _fn);
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
/* ChapelArray.chpl:238 */
#line 134 "ChapelArray.chpl"
static void _newArray(DefaultRectangularArr_locale_1_int64_t_F value, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 134 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F this6 = NULL;
#line 134 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp = NULL;
#line 242 "ChapelArray.chpl"
  this6 = nil;
#line 242 "ChapelArray.chpl"
  this6 = value;
#line 242 "ChapelArray.chpl"
  wrap_call_tmp = _construct__array5(value, this6, _ln, _fn);
#line 242 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy6(wrap_call_tmp, _ln, _fn);
#line 238 "ChapelArray.chpl"
  return;
#line 238 "ChapelArray.chpl"
}

#line 238 "ChapelArray.chpl"
/* ChapelArray.chpl:238 */
#line 238 "ChapelArray.chpl"
static void _newArray2(DefaultRectangularArr_localesSignal_1_int64_t_F value, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 238 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this6 = NULL;
#line 238 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp = NULL;
#line 242 "ChapelArray.chpl"
  this6 = nil;
#line 242 "ChapelArray.chpl"
  this6 = value;
#line 242 "ChapelArray.chpl"
  wrap_call_tmp = _construct__array(value, this6, _ln, _fn);
#line 242 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy3(wrap_call_tmp, _ln, _fn);
#line 238 "ChapelArray.chpl"
  return;
#line 238 "ChapelArray.chpl"
}

#line 238 "ChapelArray.chpl"
/* ChapelArray.chpl:238 */
#line 238 "ChapelArray.chpl"
static void _newArray3(DefaultRectangularArr_int64_t_1_int64_t_F value, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 238 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F this6 = NULL;
#line 238 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F wrap_call_tmp = NULL;
#line 242 "ChapelArray.chpl"
  this6 = nil;
#line 242 "ChapelArray.chpl"
  this6 = value;
#line 242 "ChapelArray.chpl"
  wrap_call_tmp = _construct__array4(value, this6, _ln, _fn);
#line 242 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy7(wrap_call_tmp, _ln, _fn);
#line 238 "ChapelArray.chpl"
  return;
#line 238 "ChapelArray.chpl"
}

#line 238 "ChapelArray.chpl"
/* ChapelArray.chpl:238 */
#line 238 "ChapelArray.chpl"
static void _newArray5(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F value, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 238 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6 = NULL;
#line 238 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F wrap_call_tmp = NULL;
#line 242 "ChapelArray.chpl"
  this6 = nil;
#line 242 "ChapelArray.chpl"
  this6 = value;
#line 242 "ChapelArray.chpl"
  wrap_call_tmp = _construct__array3(value, this6, _ln, _fn);
#line 242 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy5(wrap_call_tmp, _ln, _fn);
#line 238 "ChapelArray.chpl"
  return;
#line 238 "ChapelArray.chpl"
}

#line 238 "ChapelArray.chpl"
/* ChapelArray.chpl:238 */
#line 238 "ChapelArray.chpl"
static void _newArray4(DefaultRectangularArr_chpl_string_1_int64_t_F value, _ref_DefaultRectangularArr_chpl_string_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 238 "ChapelArray.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F this6 = NULL;
#line 238 "ChapelArray.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F wrap_call_tmp = NULL;
#line 242 "ChapelArray.chpl"
  this6 = nil;
#line 242 "ChapelArray.chpl"
  this6 = value;
#line 242 "ChapelArray.chpl"
  wrap_call_tmp = _construct__array2(value, this6, _ln, _fn);
#line 242 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy4(wrap_call_tmp, _ln, _fn);
#line 238 "ChapelArray.chpl"
  return;
#line 238 "ChapelArray.chpl"
}

#line 238 "ChapelArray.chpl"
/* ChapelArray.chpl:245 */
#line 238 "ChapelArray.chpl"
static void _newDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 238 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F this6 = NULL;
#line 238 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp = NULL;
#line 249 "ChapelArray.chpl"
  this6 = nil;
#line 249 "ChapelArray.chpl"
  this6 = value;
#line 249 "ChapelArray.chpl"
  wrap_call_tmp = _construct__domain(value, this6, _ln, _fn);
#line 249 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy2(wrap_call_tmp, _ln, _fn);
#line 245 "ChapelArray.chpl"
  return;
#line 245 "ChapelArray.chpl"
}

#line 245 "ChapelArray.chpl"
/* ChapelArray.chpl:252 */
#line 245 "ChapelArray.chpl"
static void _getDomain(DefaultRectangularDom_1_int64_t_F value, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 245 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F this6 = NULL;
#line 245 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp = NULL;
#line 256 "ChapelArray.chpl"
  this6 = nil;
#line 256 "ChapelArray.chpl"
  this6 = value;
#line 256 "ChapelArray.chpl"
  wrap_call_tmp = _construct__domain(value, this6, _ln, _fn);
#line 256 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy2(wrap_call_tmp, _ln, _fn);
#line 252 "ChapelArray.chpl"
  return;
#line 252 "ChapelArray.chpl"
}

#line 252 "ChapelArray.chpl"
/* ChapelArray.chpl:259 */
#line 252 "ChapelArray.chpl"
static void _newDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
#line 252 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 263 "ChapelArray.chpl"
  chpl_check_nil(value, INT64(263), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 263 "ChapelArray.chpl"
  call_tmp = _distribution(value, _ln, _fn);
#line 263 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy(call_tmp, _ln, _fn);
#line 259 "ChapelArray.chpl"
  return;
#line 259 "ChapelArray.chpl"
}

#line 259 "ChapelArray.chpl"
/* ChapelArray.chpl:266 */
#line 259 "ChapelArray.chpl"
static void _getDistribution(DefaultDist value, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
#line 259 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 270 "ChapelArray.chpl"
  chpl_check_nil(value, INT64(270), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 270 "ChapelArray.chpl"
  call_tmp = _distribution(value, _ln, _fn);
#line 270 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy(call_tmp, _ln, _fn);
#line 266 "ChapelArray.chpl"
  return;
#line 266 "ChapelArray.chpl"
}

#line 266 "ChapelArray.chpl"
/* ChapelArray.chpl:278 */
#line 266 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue(DefaultDist d, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 266 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
#line 266 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
#line 266 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 281 "ChapelArray.chpl"
  chpl_check_nil(d, INT64(281), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 281 "ChapelArray.chpl"
  call_tmp = newRectangularDom(d, _ln, _fn);
#line 281 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 281 "ChapelArray.chpl"
  _newDomain(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
#line 281 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 278 "ChapelArray.chpl"
  return;
#line 278 "ChapelArray.chpl"
}

#line 278 "ChapelArray.chpl"
/* ChapelArray.chpl:278 */
#line 278 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo chpl__buildDomainRuntimeType(DefaultDist d, int64_t _ln, c_string _fn) {
#line 278 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo _return_tmp_;
#line 278 "ChapelArray.chpl"
  (&_return_tmp_)->d = d;
#line 278 "ChapelArray.chpl"
  return _return_tmp_;
#line 278 "ChapelArray.chpl"
}

#line 278 "ChapelArray.chpl"
/* ChapelArray.chpl:306 */
#line 278 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo chpl__convertValueToRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
#line 278 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 278 "ChapelArray.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 278 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo call_tmp2;
#line 308 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 308 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(308), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 308 "ChapelArray.chpl"
  dist(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 308 "ChapelArray.chpl"
  call_tmp2 = chpl__buildDomainRuntimeType(call_tmp, _ln, _fn);
#line 308 "ChapelArray.chpl"
  chpl__autoDestroy(call_tmp, _ln, _fn);
#line 306 "ChapelArray.chpl"
  return call_tmp2;
#line 306 "ChapelArray.chpl"
}

#line 306 "ChapelArray.chpl"
/* ChapelArray.chpl:332 */
#line 306 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo5 chpl__buildArrayRuntimeType3(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
#line 306 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo5 _return_tmp_;
#line 332 "ChapelArray.chpl"
  (&_return_tmp_)->dom = dom;
#line 332 "ChapelArray.chpl"
  return _return_tmp_;
#line 332 "ChapelArray.chpl"
}

#line 332 "ChapelArray.chpl"
/* ChapelArray.chpl:332 */
#line 332 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo6 chpl__buildArrayRuntimeType2(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
#line 332 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo6 _return_tmp_;
#line 332 "ChapelArray.chpl"
  (&_return_tmp_)->dom = dom;
#line 332 "ChapelArray.chpl"
  return _return_tmp_;
#line 332 "ChapelArray.chpl"
}

#line 332 "ChapelArray.chpl"
/* ChapelArray.chpl:332 */
#line 332 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue6(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_chpl_string_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 332 "ChapelArray.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F call_tmp = NULL;
#line 332 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_chpl_string_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 333 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 333 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(333), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 333 "ChapelArray.chpl"
  buildArray(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 333 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 332 "ChapelArray.chpl"
  return;
#line 332 "ChapelArray.chpl"
}

#line 332 "ChapelArray.chpl"
/* ChapelArray.chpl:332 */
#line 332 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue2(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 332 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp = NULL;
#line 332 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 333 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 333 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(333), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 333 "ChapelArray.chpl"
  buildArray2(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 333 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 332 "ChapelArray.chpl"
  return;
#line 332 "ChapelArray.chpl"
}

#line 332 "ChapelArray.chpl"
/* ChapelArray.chpl:332 */
#line 332 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo4 chpl__buildArrayRuntimeType5(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
#line 332 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo4 _return_tmp_;
#line 332 "ChapelArray.chpl"
  (&_return_tmp_)->dom = dom;
#line 332 "ChapelArray.chpl"
  return _return_tmp_;
#line 332 "ChapelArray.chpl"
}

#line 332 "ChapelArray.chpl"
/* ChapelArray.chpl:332 */
#line 332 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo3 chpl__buildArrayRuntimeType(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
#line 332 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo3 _return_tmp_;
#line 332 "ChapelArray.chpl"
  (&_return_tmp_)->dom = dom;
#line 332 "ChapelArray.chpl"
  return _return_tmp_;
#line 332 "ChapelArray.chpl"
}

#line 332 "ChapelArray.chpl"
/* ChapelArray.chpl:332 */
#line 332 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue3(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 332 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 332 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 333 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 333 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(333), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 333 "ChapelArray.chpl"
  buildArray5(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 333 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 332 "ChapelArray.chpl"
  return;
#line 332 "ChapelArray.chpl"
}

#line 332 "ChapelArray.chpl"
/* ChapelArray.chpl:332 */
#line 332 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue5(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 332 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
#line 332 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 333 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 333 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(333), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 333 "ChapelArray.chpl"
  buildArray4(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 333 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 332 "ChapelArray.chpl"
  return;
#line 332 "ChapelArray.chpl"
}

#line 332 "ChapelArray.chpl"
/* ChapelArray.chpl:332 */
#line 332 "ChapelArray.chpl"
static chpl___RuntimeTypeInfo2 chpl__buildArrayRuntimeType4(DefaultRectangularDom_1_int64_t_F dom, int64_t _ln, c_string _fn) {
#line 332 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo2 _return_tmp_;
#line 332 "ChapelArray.chpl"
  (&_return_tmp_)->dom = dom;
#line 332 "ChapelArray.chpl"
  return _return_tmp_;
#line 332 "ChapelArray.chpl"
}

#line 332 "ChapelArray.chpl"
/* ChapelArray.chpl:332 */
#line 332 "ChapelArray.chpl"
static void chpl__convertRuntimeTypeToValue4(DefaultRectangularDom_1_int64_t_F dom, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 332 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp = NULL;
#line 332 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_int64_t_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 333 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 333 "ChapelArray.chpl"
  chpl_check_nil(dom, INT64(333), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 333 "ChapelArray.chpl"
  buildArray3(dom, ret_to_arg_ref_tmp_, _ln, _fn);
#line 333 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 332 "ChapelArray.chpl"
  return;
#line 332 "ChapelArray.chpl"
}

#line 332 "ChapelArray.chpl"
/* ChapelArray.chpl:450 */
#line 332 "ChapelArray.chpl"
static void chpl_incRefCountsForDomainsInArrayEltTypes3(void) {
#line 451 "ChapelArray.chpl"
  compilerAssert();
#line 450 "ChapelArray.chpl"
  return;
#line 450 "ChapelArray.chpl"
}

#line 450 "ChapelArray.chpl"
/* ChapelArray.chpl:450 */
#line 450 "ChapelArray.chpl"
static void chpl_incRefCountsForDomainsInArrayEltTypes2(void) {
#line 451 "ChapelArray.chpl"
  compilerAssert();
#line 450 "ChapelArray.chpl"
  return;
#line 450 "ChapelArray.chpl"
}

#line 450 "ChapelArray.chpl"
/* ChapelArray.chpl:450 */
#line 450 "ChapelArray.chpl"
static void chpl_incRefCountsForDomainsInArrayEltTypes(void) {
#line 451 "ChapelArray.chpl"
  compilerAssert();
#line 450 "ChapelArray.chpl"
  return;
#line 450 "ChapelArray.chpl"
}

#line 450 "ChapelArray.chpl"
/* ChapelArray.chpl:450 */
#line 450 "ChapelArray.chpl"
static void chpl_incRefCountsForDomainsInArrayEltTypes4(void) {
#line 451 "ChapelArray.chpl"
  compilerAssert();
#line 450 "ChapelArray.chpl"
  return;
#line 450 "ChapelArray.chpl"
}

#line 450 "ChapelArray.chpl"
/* ChapelArray.chpl:450 */
#line 450 "ChapelArray.chpl"
static void chpl_incRefCountsForDomainsInArrayEltTypes5(void) {
#line 451 "ChapelArray.chpl"
  compilerAssert();
#line 450 "ChapelArray.chpl"
  return;
#line 450 "ChapelArray.chpl"
}

#line 450 "ChapelArray.chpl"
/* ChapelArray.chpl:471 */
#line 450 "ChapelArray.chpl"
static void chpl_decRefCountsForDomainsInArrayEltTypes(void) {
#line 472 "ChapelArray.chpl"
  compilerAssert();
#line 471 "ChapelArray.chpl"
  return;
#line 471 "ChapelArray.chpl"
}

#line 471 "ChapelArray.chpl"
/* ChapelArray.chpl:471 */
#line 471 "ChapelArray.chpl"
static void chpl_decRefCountsForDomainsInArrayEltTypes2(void) {
#line 472 "ChapelArray.chpl"
  compilerAssert();
#line 471 "ChapelArray.chpl"
  return;
#line 471 "ChapelArray.chpl"
}

#line 471 "ChapelArray.chpl"
/* ChapelArray.chpl:471 */
#line 471 "ChapelArray.chpl"
static void chpl_decRefCountsForDomainsInArrayEltTypes3(void) {
#line 472 "ChapelArray.chpl"
  compilerAssert();
#line 471 "ChapelArray.chpl"
  return;
#line 471 "ChapelArray.chpl"
}

#line 471 "ChapelArray.chpl"
/* ChapelArray.chpl:471 */
#line 471 "ChapelArray.chpl"
static void chpl_decRefCountsForDomainsInArrayEltTypes4(void) {
#line 472 "ChapelArray.chpl"
  compilerAssert();
#line 471 "ChapelArray.chpl"
  return;
#line 471 "ChapelArray.chpl"
}

#line 471 "ChapelArray.chpl"
/* ChapelArray.chpl:495 */
#line 471 "ChapelArray.chpl"
static void chpl__buildDomainExpr(range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 471 "ChapelArray.chpl"
  _tuple_1_star_range_int64_t_bounded_F ranges;
#line 471 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F d = NULL;
#line 471 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
#line 471 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo call_tmp;
#line 471 "ChapelArray.chpl"
  DefaultDist _runtime_type_tmp_ = NULL;
#line 471 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 86 "LocaleModel.chpl"
  *(ranges + INT64(0)) = *(_e0_ranges);
#line 502 "ChapelArray.chpl"
  call_tmp = chpl__buildDomainRuntimeType(defaultDist, _ln, _fn);
#line 502 "ChapelArray.chpl"
  _runtime_type_tmp_ = (&call_tmp)->d;
#line 502 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &type_tmp;
#line 502 "ChapelArray.chpl"
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
#line 502 "ChapelArray.chpl"
  d = type_tmp;
#line 503 "ChapelArray.chpl"
  chpl_check_nil(type_tmp, INT64(503), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 503 "ChapelArray.chpl"
  setIndices(type_tmp, &ranges, _ln, _fn);
#line 504 "ChapelArray.chpl"
  *(_retArg) = d;
#line 495 "ChapelArray.chpl"
  return;
#line 495 "ChapelArray.chpl"
}

#line 495 "ChapelArray.chpl"
/* ChapelArray.chpl:532 */
#line 495 "ChapelArray.chpl"
static void chpl__ensureDomainExpr(DefaultRectangularDom_1_int64_t_F x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 533 "ChapelArray.chpl"
  *(_retArg) = chpl__autoCopy2(x, _ln, _fn);
#line 532 "ChapelArray.chpl"
  return;
#line 532 "ChapelArray.chpl"
}

#line 532 "ChapelArray.chpl"
/* ChapelArray.chpl:536 */
#line 532 "ChapelArray.chpl"
static void chpl__ensureDomainExpr2(range_int64_t_bounded_F* const _e0_x, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 532 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
#line 532 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 537 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 537 "ChapelArray.chpl"
  chpl__buildDomainExpr(_e0_x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 537 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 536 "ChapelArray.chpl"
  return;
#line 536 "ChapelArray.chpl"
}

#line 536 "ChapelArray.chpl"
/* ChapelArray.chpl:689 */
#line 536 "ChapelArray.chpl"
static void chpl__buildDistValue(DefaultDist x, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
#line 536 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 536 "ChapelArray.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 690 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 690 "ChapelArray.chpl"
  _newDistribution(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 690 "ChapelArray.chpl"
  *(_retArg) = chpl__initCopy(call_tmp, _ln, _fn);
#line 690 "ChapelArray.chpl"
  chpl__autoDestroy(call_tmp, _ln, _fn);
#line 689 "ChapelArray.chpl"
  return;
#line 689 "ChapelArray.chpl"
}

#line 689 "ChapelArray.chpl"
/* ChapelArray.chpl:703 */
#line 689 "ChapelArray.chpl"
static DefaultDist _construct__distribution(DefaultDist _value, DefaultDist meme, int64_t _ln, c_string _fn) {
#line 689 "ChapelArray.chpl"
  DefaultDist this6 = NULL;
#line 703 "ChapelArray.chpl"
  this6 = meme;
#line 704 "ChapelArray.chpl"
  this6 = _value;
#line 703 "ChapelArray.chpl"
  return this6;
#line 703 "ChapelArray.chpl"
}

#line 703 "ChapelArray.chpl"
/* ChapelArray.chpl:707 */
#line 703 "ChapelArray.chpl"
static DefaultDist _distribution(DefaultDist _value, int64_t _ln, c_string _fn) {
#line 703 "ChapelArray.chpl"
  DefaultDist this6 = NULL;
#line 703 "ChapelArray.chpl"
  DefaultDist this7 = NULL;
#line 703 "ChapelArray.chpl"
  DefaultDist wrap_call_tmp = NULL;
#line 707 "ChapelArray.chpl"
  this7 = nil;
#line 707 "ChapelArray.chpl"
  this7 = _value;
#line 707 "ChapelArray.chpl"
  wrap_call_tmp = _construct__distribution(_value, this7, _ln, _fn);
#line 707 "ChapelArray.chpl"
  return wrap_call_tmp;
#line 707 "ChapelArray.chpl"
}

#line 707 "ChapelArray.chpl"
/* ChapelArray.chpl:717 */
#line 707 "ChapelArray.chpl"
static void chpl___TILDE__distribution(DefaultDist this6, int64_t _ln, c_string _fn) {
#line 707 "ChapelArray.chpl"
  DefaultDist ret = NULL;
#line 707 "ChapelArray.chpl"
  int64_t call_tmp;
#line 707 "ChapelArray.chpl"
  BaseDist call_tmp2 = NULL;
#line 707 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 707 "ChapelArray.chpl"
  DefaultDist ret2 = NULL;
#line 707 "ChapelArray.chpl"
  BaseDist call_tmp4 = NULL;
#line 707 "ChapelArray.chpl"
  DefaultDist ret3 = NULL;
#line 707 "ChapelArray.chpl"
  BaseDist _parent_destructor_tmp_ = NULL;
#line 707 "ChapelArray.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 707 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp5 = NULL;
#line 707 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
#line 707 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 707 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp6 = NULL;
#line 707 "ChapelArray.chpl"
  chpl_opaque call_tmp7;
#line 721 "ChapelArray.chpl"
  ret = this6;
#line 721 "ChapelArray.chpl"
  call_tmp2 = ((BaseDist)(ret));
#line 721 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(721), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 721 "ChapelArray.chpl"
  call_tmp = destroyDist(call_tmp2, _ln, _fn);
#line 722 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 722 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 723 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 722 "ChapelArray.chpl"
  {
#line 723 "ChapelArray.chpl"
    ret2 = this6;
#line 723 "ChapelArray.chpl"
    call_tmp4 = ((BaseDist)(ret2));
#line 723 "ChapelArray.chpl"
    chpl_check_nil(call_tmp4, INT64(723), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 723 "ChapelArray.chpl"
    dsiDestroyDistClass(call_tmp4);
#line 724 "ChapelArray.chpl"
    ret3 = this6;
#line 724 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseDist)(ret3));
#line 724 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(724), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 724 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
#line 724 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(724), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 724 "ChapelArray.chpl"
    call_tmp5 = &((_field_destructor_tmp_)->_v);
#line 724 "ChapelArray.chpl"
    atomic_destroy_flag(call_tmp5);
#line 724 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(724), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 724 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
#line 724 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(724), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 724 "ChapelArray.chpl"
    _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 724 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_3, INT64(724), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 724 "ChapelArray.chpl"
    call_tmp6 = &((_field_destructor_tmp_3)->_v);
#line 724 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp6);
#line 724 "ChapelArray.chpl"
    call_tmp7 = ((void*)(ret3));
#line 724 "ChapelArray.chpl"
    chpl_here_free(call_tmp7, _ln, _fn);
#line 724 "ChapelArray.chpl"
  }
#line 717 "ChapelArray.chpl"
  return;
#line 717 "ChapelArray.chpl"
}

#line 717 "ChapelArray.chpl"
/* ChapelArray.chpl:731 */
#line 717 "ChapelArray.chpl"
static void clone2(DefaultDist this6, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
#line 717 "ChapelArray.chpl"
  DefaultDist ret = NULL;
#line 717 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 717 "ChapelArray.chpl"
  DefaultDist call_tmp2 = NULL;
#line 717 "ChapelArray.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 732 "ChapelArray.chpl"
  ret = this6;
#line 732 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(732), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 732 "ChapelArray.chpl"
  call_tmp = dsiClone(ret);
#line 732 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 732 "ChapelArray.chpl"
  _newDistribution(call_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
#line 732 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 731 "ChapelArray.chpl"
  return;
#line 731 "ChapelArray.chpl"
}

#line 731 "ChapelArray.chpl"
/* ChapelArray.chpl:735 */
#line 731 "ChapelArray.chpl"
static DefaultRectangularDom_1_int64_t_F newRectangularDom(DefaultDist this6, int64_t _ln, c_string _fn) {
#line 731 "ChapelArray.chpl"
  DefaultDist ret = NULL;
#line 731 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
#line 736 "ChapelArray.chpl"
  ret = this6;
#line 736 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(736), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 736 "ChapelArray.chpl"
  call_tmp = dsiNewRectangularDom(ret, _ln, _fn);
#line 735 "ChapelArray.chpl"
  return call_tmp;
#line 735 "ChapelArray.chpl"
}

#line 735 "ChapelArray.chpl"
/* ChapelArray.chpl:828 */
#line 735 "ChapelArray.chpl"
static DefaultRectangularDom_1_int64_t_F _construct__domain(DefaultRectangularDom_1_int64_t_F _value, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 735 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F this6 = NULL;
#line 828 "ChapelArray.chpl"
  this6 = meme;
#line 829 "ChapelArray.chpl"
  this6 = _value;
#line 828 "ChapelArray.chpl"
  return this6;
#line 828 "ChapelArray.chpl"
}

#line 828 "ChapelArray.chpl"
/* ChapelArray.chpl:842 */
#line 828 "ChapelArray.chpl"
static void chpl___TILDE__domain(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 828 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 828 "ChapelArray.chpl"
  int64_t call_tmp;
#line 828 "ChapelArray.chpl"
  BaseDom call_tmp2 = NULL;
#line 828 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 828 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 828 "ChapelArray.chpl"
  BaseRectangularDom _parent_destructor_tmp_ = NULL;
#line 828 "ChapelArray.chpl"
  BaseDom _parent_destructor_tmp_2 = NULL;
#line 828 "ChapelArray.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 828 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp4 = NULL;
#line 828 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
#line 828 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 828 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp5 = NULL;
#line 828 "ChapelArray.chpl"
  chpl_opaque call_tmp6;
#line 846 "ChapelArray.chpl"
  ret = this6;
#line 846 "ChapelArray.chpl"
  call_tmp2 = ((BaseDom)(ret));
#line 846 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(846), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 846 "ChapelArray.chpl"
  call_tmp = destroyDom(call_tmp2, _ln, _fn);
#line 847 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 847 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 847 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 847 "ChapelArray.chpl"
  {
#line 848 "ChapelArray.chpl"
    ret2 = this6;
#line 848 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseRectangularDom)(ret2));
#line 848 "ChapelArray.chpl"
    _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
#line 848 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_2, INT64(848), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 848 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
#line 848 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(848), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 848 "ChapelArray.chpl"
    call_tmp4 = &((_field_destructor_tmp_)->_v);
#line 848 "ChapelArray.chpl"
    atomic_destroy_flag(call_tmp4);
#line 848 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_2, INT64(848), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 848 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
#line 848 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(848), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 848 "ChapelArray.chpl"
    _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 848 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_3, INT64(848), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 848 "ChapelArray.chpl"
    call_tmp5 = &((_field_destructor_tmp_3)->_v);
#line 848 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp5);
#line 848 "ChapelArray.chpl"
    call_tmp6 = ((void*)(ret2));
#line 848 "ChapelArray.chpl"
    chpl_here_free(call_tmp6, _ln, _fn);
#line 848 "ChapelArray.chpl"
  }
#line 842 "ChapelArray.chpl"
  return;
#line 842 "ChapelArray.chpl"
}

#line 842 "ChapelArray.chpl"
/* ChapelArray.chpl:855 */
#line 842 "ChapelArray.chpl"
static void dist(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultDist _retArg, int64_t _ln, c_string _fn) {
#line 842 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
#line 842 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 842 "ChapelArray.chpl"
  DefaultDist ret2 = NULL;
#line 842 "ChapelArray.chpl"
  DefaultDist call_tmp2 = NULL;
#line 842 "ChapelArray.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 855 "ChapelArray.chpl"
  ret = this6;
#line 855 "ChapelArray.chpl"
  call_tmp = ret;
#line 855 "ChapelArray.chpl"
  chpl_check_nil(call_tmp, INT64(855), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 855 "ChapelArray.chpl"
  ret2 = (call_tmp)->dist;
#line 855 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 855 "ChapelArray.chpl"
  _getDistribution(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 855 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 855 "ChapelArray.chpl"
  return;
#line 855 "ChapelArray.chpl"
}

#line 855 "ChapelArray.chpl"
/* ChapelArray.chpl:913 */
#line 855 "ChapelArray.chpl"
static void this2(DefaultRectangularDom_1_int64_t_F this6, range_int64_t_bounded_F* const _e0_ranges, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 855 "ChapelArray.chpl"
  _tuple_1_star_range_int64_t_bounded_F r;
#line 855 "ChapelArray.chpl"
  range_int64_t_bounded_F wrap_call_tmp;
#line 855 "ChapelArray.chpl"
  _ref_range_int64_t_bounded_F call_tmp = NULL;
#line 855 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 855 "ChapelArray.chpl"
  range_int64_t_bounded_F call_tmp2;
#line 855 "ChapelArray.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 855 "ChapelArray.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 855 "ChapelArray.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 855 "ChapelArray.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 855 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 855 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp4 = NULL;
#line 855 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
#line 855 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
#line 915 "ChapelArray.chpl"
  wrap_call_tmp = range2(INT64(1), INT64(0), INT64(1), INT64(0), false, _ln, _fn);
#line 915 "ChapelArray.chpl"
  *(r + INT64(0)) = wrap_call_tmp;
#line 920 "ChapelArray.chpl"
  call_tmp = (r + INT64(0));
#line 920 "ChapelArray.chpl"
  ret = this6;
#line 920 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 920 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(920), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 920 "ChapelArray.chpl"
  dsiDim(ret, ret_to_arg_ref_tmp_, _ln, _fn);
#line 920 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp3;
#line 920 "ChapelArray.chpl"
  _ref_tmp_ = &call_tmp2;
#line 920 "ChapelArray.chpl"
  chpl_check_nil(_ref_tmp_, INT64(920), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 920 "ChapelArray.chpl"
  this3(_ref_tmp_, _e0_ranges, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 920 "ChapelArray.chpl"
  *(call_tmp) = call_tmp3;
#line 922 "ChapelArray.chpl"
  ret2 = this6;
#line 922 "ChapelArray.chpl"
  chpl_check_nil(ret2, INT64(922), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 922 "ChapelArray.chpl"
  call_tmp4 = dsiBuildRectangularDom(ret2, &r, _ln, _fn);
#line 926 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp5;
#line 926 "ChapelArray.chpl"
  _newDomain(call_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 926 "ChapelArray.chpl"
  *(_retArg) = call_tmp5;
#line 913 "ChapelArray.chpl"
  return;
#line 913 "ChapelArray.chpl"
}

#line 913 "ChapelArray.chpl"
/* ChapelArray.chpl:981 */
#line 913 "ChapelArray.chpl"
static void buildArray5(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 913 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F x = NULL;
#line 913 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 913 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 913 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F T = NULL;
#line 913 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp2 = NULL;
#line 913 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 982 "ChapelArray.chpl"
  ret = this6;
#line 982 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(982), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 982 "ChapelArray.chpl"
  call_tmp = dsiBuildArray4(ret, _ln, _fn);
#line 982 "ChapelArray.chpl"
  x = call_tmp;
#line 982 "ChapelArray.chpl"
  T = &x;
#line 989 "ChapelArray.chpl"
  help2(this6, T, _ln, _fn);
#line 990 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 990 "ChapelArray.chpl"
  _newArray(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 990 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 981 "ChapelArray.chpl"
  return;
#line 981 "ChapelArray.chpl"
}

#line 981 "ChapelArray.chpl"
/* ChapelArray.chpl:981 */
#line 981 "ChapelArray.chpl"
static void buildArray4(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F x = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp = NULL;
#line 981 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F call_tmp2 = NULL;
#line 981 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_localesSignal_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 982 "ChapelArray.chpl"
  ret = this6;
#line 982 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(982), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 982 "ChapelArray.chpl"
  call_tmp = dsiBuildArray3(ret, _ln, _fn);
#line 982 "ChapelArray.chpl"
  x = call_tmp;
#line 982 "ChapelArray.chpl"
  T = &x;
#line 989 "ChapelArray.chpl"
  help3(this6, T, _ln, _fn);
#line 990 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 990 "ChapelArray.chpl"
  _newArray2(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 990 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 981 "ChapelArray.chpl"
  return;
#line 981 "ChapelArray.chpl"
}

#line 981 "ChapelArray.chpl"
/* ChapelArray.chpl:981 */
#line 981 "ChapelArray.chpl"
static void buildArray3(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_int64_t_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F x = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp = NULL;
#line 981 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_int64_t_1_int64_t_F T = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp2 = NULL;
#line 981 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_int64_t_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 982 "ChapelArray.chpl"
  ret = this6;
#line 982 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(982), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 982 "ChapelArray.chpl"
  call_tmp = dsiBuildArray(ret, _ln, _fn);
#line 982 "ChapelArray.chpl"
  x = call_tmp;
#line 982 "ChapelArray.chpl"
  T = &x;
#line 989 "ChapelArray.chpl"
  help5(this6, T, _ln, _fn);
#line 990 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 990 "ChapelArray.chpl"
  _newArray3(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 990 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 981 "ChapelArray.chpl"
  return;
#line 981 "ChapelArray.chpl"
}

#line 981 "ChapelArray.chpl"
/* ChapelArray.chpl:981 */
#line 981 "ChapelArray.chpl"
static void buildArray2(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp = NULL;
#line 981 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F T = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp2 = NULL;
#line 981 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 982 "ChapelArray.chpl"
  ret = this6;
#line 982 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(982), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 982 "ChapelArray.chpl"
  call_tmp = dsiBuildArray5(ret, _ln, _fn);
#line 982 "ChapelArray.chpl"
  x = call_tmp;
#line 982 "ChapelArray.chpl"
  T = &x;
#line 989 "ChapelArray.chpl"
  help4(this6, T, _ln, _fn);
#line 990 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 990 "ChapelArray.chpl"
  _newArray5(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 990 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 981 "ChapelArray.chpl"
  return;
#line 981 "ChapelArray.chpl"
}

#line 981 "ChapelArray.chpl"
/* ChapelArray.chpl:981 */
#line 981 "ChapelArray.chpl"
static void buildArray(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_chpl_string_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F x = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F call_tmp = NULL;
#line 981 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_chpl_string_1_int64_t_F T = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F call_tmp2 = NULL;
#line 981 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_chpl_string_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 982 "ChapelArray.chpl"
  ret = this6;
#line 982 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(982), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 982 "ChapelArray.chpl"
  call_tmp = dsiBuildArray2(ret, _ln, _fn);
#line 982 "ChapelArray.chpl"
  x = call_tmp;
#line 982 "ChapelArray.chpl"
  T = &x;
#line 989 "ChapelArray.chpl"
  help(this6, T, _ln, _fn);
#line 990 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 990 "ChapelArray.chpl"
  _newArray4(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 990 "ChapelArray.chpl"
  *(_retArg) = call_tmp2;
#line 981 "ChapelArray.chpl"
  return;
#line 981 "ChapelArray.chpl"
}

#line 981 "ChapelArray.chpl"
/* ChapelArray.chpl:984 */
#line 981 "ChapelArray.chpl"
static void help(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_chpl_string_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 981 "ChapelArray.chpl"
  memory_order local_memory_order_seq_cst;
#line 981 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 981 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 981 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F T = NULL;
#line 981 "ChapelArray.chpl"
  chpl_bool T2;
#line 981 "ChapelArray.chpl"
  _ref_atomicflag call_tmp2 = NULL;
#line 981 "ChapelArray.chpl"
  memory_order default_argorder;
#line 981 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp3 = NULL;
#line 981 "ChapelArray.chpl"
  chpl_bool call_tmp4;
#line 981 "ChapelArray.chpl"
  _ref_atomicflag call_tmp5 = NULL;
#line 981 "ChapelArray.chpl"
  memory_order default_argorder2;
#line 981 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp6 = NULL;
#line 981 "ChapelArray.chpl"
  chpl_bool call_tmp7;
#line 981 "ChapelArray.chpl"
  _ref_list_BaseArr call_tmp8 = NULL;
#line 981 "ChapelArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 981 "ChapelArray.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 981 "ChapelArray.chpl"
  memory_order default_argorder3;
#line 981 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 981 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 981 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 981 "ChapelArray.chpl"
  BaseDom call_tmp12 = NULL;
#line 981 "ChapelArray.chpl"
  _ref_atomic_refcnt call_tmp13 = NULL;
#line 981 "ChapelArray.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 981 "ChapelArray.chpl"
  memory_order default_argorder4;
#line 981 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 985 "ChapelArray.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  ret = this6;
#line 985 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 985 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 985 "ChapelArray.chpl"
  T = *(x);
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp2 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 985 "ChapelArray.chpl"
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
#line 985 "ChapelArray.chpl"
  T2 = call_tmp4;
#line 985 "ChapelArray.chpl"
  while (T2) {
#line 985 "ChapelArray.chpl"
    chpl_task_yield();
#line 985 "ChapelArray.chpl"
    chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
    call_tmp5 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
    chpl_check_nil(call_tmp5, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
    call_tmp6 = &((call_tmp5)->_v);
#line 985 "ChapelArray.chpl"
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
#line 985 "ChapelArray.chpl"
    T2 = call_tmp7;
#line 985 "ChapelArray.chpl"
  }
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp8 = &((coerce_tmp)->_arrs);
#line 985 "ChapelArray.chpl"
  call_tmp9 = ((BaseArr)(T));
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp8, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  append_chpl(call_tmp8, call_tmp9, _ln, _fn);
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp10 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
  default_argorder3 = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp10, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp11 = &((call_tmp10)->_v);
#line 985 "ChapelArray.chpl"
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
#line 987 "ChapelArray.chpl"
  ret2 = this6;
#line 987 "ChapelArray.chpl"
  call_tmp12 = ((BaseDom)(ret2));
#line 987 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp12;
#line 987 "ChapelArray.chpl"
  compilerAssert();
#line 987 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp13 = &((coerce_tmp2)->_domCnt);
#line 987 "ChapelArray.chpl"
  chpl_check_nil(call_tmp13, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp14 = &((call_tmp13)->_cnt);
#line 987 "ChapelArray.chpl"
  default_argorder4 = local_memory_order_seq_cst;
#line 987 "ChapelArray.chpl"
  chpl_check_nil(call_tmp14, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 987 "ChapelArray.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
#line 984 "ChapelArray.chpl"
  return;
#line 984 "ChapelArray.chpl"
}

#line 984 "ChapelArray.chpl"
/* ChapelArray.chpl:984 */
#line 984 "ChapelArray.chpl"
static void help4(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 984 "ChapelArray.chpl"
  memory_order local_memory_order_seq_cst;
#line 984 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 984 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F T = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool T2;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp2 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp3 = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool call_tmp4;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp5 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder2;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp6 = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool call_tmp7;
#line 984 "ChapelArray.chpl"
  _ref_list_BaseArr call_tmp8 = NULL;
#line 984 "ChapelArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder3;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 984 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom call_tmp12 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomic_refcnt call_tmp13 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder4;
#line 984 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 985 "ChapelArray.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  ret = this6;
#line 985 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 985 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 985 "ChapelArray.chpl"
  T = *(x);
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp2 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 985 "ChapelArray.chpl"
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
#line 985 "ChapelArray.chpl"
  T2 = call_tmp4;
#line 985 "ChapelArray.chpl"
  while (T2) {
#line 985 "ChapelArray.chpl"
    chpl_task_yield();
#line 985 "ChapelArray.chpl"
    chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
    call_tmp5 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
    chpl_check_nil(call_tmp5, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
    call_tmp6 = &((call_tmp5)->_v);
#line 985 "ChapelArray.chpl"
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
#line 985 "ChapelArray.chpl"
    T2 = call_tmp7;
#line 985 "ChapelArray.chpl"
  }
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp8 = &((coerce_tmp)->_arrs);
#line 985 "ChapelArray.chpl"
  call_tmp9 = ((BaseArr)(T));
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp8, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  append_chpl(call_tmp8, call_tmp9, _ln, _fn);
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp10 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
  default_argorder3 = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp10, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp11 = &((call_tmp10)->_v);
#line 985 "ChapelArray.chpl"
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
#line 987 "ChapelArray.chpl"
  ret2 = this6;
#line 987 "ChapelArray.chpl"
  call_tmp12 = ((BaseDom)(ret2));
#line 987 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp12;
#line 987 "ChapelArray.chpl"
  compilerAssert();
#line 987 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp13 = &((coerce_tmp2)->_domCnt);
#line 987 "ChapelArray.chpl"
  chpl_check_nil(call_tmp13, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp14 = &((call_tmp13)->_cnt);
#line 987 "ChapelArray.chpl"
  default_argorder4 = local_memory_order_seq_cst;
#line 987 "ChapelArray.chpl"
  chpl_check_nil(call_tmp14, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 987 "ChapelArray.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
#line 984 "ChapelArray.chpl"
  return;
#line 984 "ChapelArray.chpl"
}

#line 984 "ChapelArray.chpl"
/* ChapelArray.chpl:984 */
#line 984 "ChapelArray.chpl"
static void help5(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 984 "ChapelArray.chpl"
  memory_order local_memory_order_seq_cst;
#line 984 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 984 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F T = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool T2;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp2 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp3 = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool call_tmp4;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp5 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder2;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp6 = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool call_tmp7;
#line 984 "ChapelArray.chpl"
  _ref_list_BaseArr call_tmp8 = NULL;
#line 984 "ChapelArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder3;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 984 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom call_tmp12 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomic_refcnt call_tmp13 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder4;
#line 984 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 985 "ChapelArray.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  ret = this6;
#line 985 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 985 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 985 "ChapelArray.chpl"
  T = *(x);
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp2 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 985 "ChapelArray.chpl"
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
#line 985 "ChapelArray.chpl"
  T2 = call_tmp4;
#line 985 "ChapelArray.chpl"
  while (T2) {
#line 985 "ChapelArray.chpl"
    chpl_task_yield();
#line 985 "ChapelArray.chpl"
    chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
    call_tmp5 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
    chpl_check_nil(call_tmp5, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
    call_tmp6 = &((call_tmp5)->_v);
#line 985 "ChapelArray.chpl"
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
#line 985 "ChapelArray.chpl"
    T2 = call_tmp7;
#line 985 "ChapelArray.chpl"
  }
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp8 = &((coerce_tmp)->_arrs);
#line 985 "ChapelArray.chpl"
  call_tmp9 = ((BaseArr)(T));
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp8, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  append_chpl(call_tmp8, call_tmp9, _ln, _fn);
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp10 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
  default_argorder3 = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp10, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp11 = &((call_tmp10)->_v);
#line 985 "ChapelArray.chpl"
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
#line 987 "ChapelArray.chpl"
  ret2 = this6;
#line 987 "ChapelArray.chpl"
  call_tmp12 = ((BaseDom)(ret2));
#line 987 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp12;
#line 987 "ChapelArray.chpl"
  compilerAssert();
#line 987 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp13 = &((coerce_tmp2)->_domCnt);
#line 987 "ChapelArray.chpl"
  chpl_check_nil(call_tmp13, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp14 = &((call_tmp13)->_cnt);
#line 987 "ChapelArray.chpl"
  default_argorder4 = local_memory_order_seq_cst;
#line 987 "ChapelArray.chpl"
  chpl_check_nil(call_tmp14, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 987 "ChapelArray.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
#line 984 "ChapelArray.chpl"
  return;
#line 984 "ChapelArray.chpl"
}

#line 984 "ChapelArray.chpl"
/* ChapelArray.chpl:984 */
#line 984 "ChapelArray.chpl"
static void help3(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 984 "ChapelArray.chpl"
  memory_order local_memory_order_seq_cst;
#line 984 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 984 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F T = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool T2;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp2 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp3 = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool call_tmp4;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp5 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder2;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp6 = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool call_tmp7;
#line 984 "ChapelArray.chpl"
  _ref_list_BaseArr call_tmp8 = NULL;
#line 984 "ChapelArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder3;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 984 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom call_tmp12 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomic_refcnt call_tmp13 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder4;
#line 984 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 985 "ChapelArray.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  ret = this6;
#line 985 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 985 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 985 "ChapelArray.chpl"
  T = *(x);
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp2 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 985 "ChapelArray.chpl"
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
#line 985 "ChapelArray.chpl"
  T2 = call_tmp4;
#line 985 "ChapelArray.chpl"
  while (T2) {
#line 985 "ChapelArray.chpl"
    chpl_task_yield();
#line 985 "ChapelArray.chpl"
    chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
    call_tmp5 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
    chpl_check_nil(call_tmp5, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
    call_tmp6 = &((call_tmp5)->_v);
#line 985 "ChapelArray.chpl"
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
#line 985 "ChapelArray.chpl"
    T2 = call_tmp7;
#line 985 "ChapelArray.chpl"
  }
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp8 = &((coerce_tmp)->_arrs);
#line 985 "ChapelArray.chpl"
  call_tmp9 = ((BaseArr)(T));
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp8, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  append_chpl(call_tmp8, call_tmp9, _ln, _fn);
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp10 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
  default_argorder3 = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp10, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp11 = &((call_tmp10)->_v);
#line 985 "ChapelArray.chpl"
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
#line 987 "ChapelArray.chpl"
  ret2 = this6;
#line 987 "ChapelArray.chpl"
  call_tmp12 = ((BaseDom)(ret2));
#line 987 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp12;
#line 987 "ChapelArray.chpl"
  compilerAssert();
#line 987 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp13 = &((coerce_tmp2)->_domCnt);
#line 987 "ChapelArray.chpl"
  chpl_check_nil(call_tmp13, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp14 = &((call_tmp13)->_cnt);
#line 987 "ChapelArray.chpl"
  default_argorder4 = local_memory_order_seq_cst;
#line 987 "ChapelArray.chpl"
  chpl_check_nil(call_tmp14, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 987 "ChapelArray.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
#line 984 "ChapelArray.chpl"
  return;
#line 984 "ChapelArray.chpl"
}

#line 984 "ChapelArray.chpl"
/* ChapelArray.chpl:984 */
#line 984 "ChapelArray.chpl"
static void help2(DefaultRectangularDom_1_int64_t_F this6, _ref_DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 984 "ChapelArray.chpl"
  memory_order local_memory_order_seq_cst;
#line 984 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 984 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F T = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool T2;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp2 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp3 = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool call_tmp4;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp5 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder2;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp6 = NULL;
#line 984 "ChapelArray.chpl"
  chpl_bool call_tmp7;
#line 984 "ChapelArray.chpl"
  _ref_list_BaseArr call_tmp8 = NULL;
#line 984 "ChapelArray.chpl"
  BaseArr call_tmp9 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder3;
#line 984 "ChapelArray.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 984 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 984 "ChapelArray.chpl"
  BaseDom call_tmp12 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomic_refcnt call_tmp13 = NULL;
#line 984 "ChapelArray.chpl"
  _ref_atomic_int64 call_tmp14 = NULL;
#line 984 "ChapelArray.chpl"
  memory_order default_argorder4;
#line 984 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 985 "ChapelArray.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  ret = this6;
#line 985 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 985 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 985 "ChapelArray.chpl"
  T = *(x);
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp2 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 985 "ChapelArray.chpl"
  call_tmp4 = atomic_flag_test_and_set_explicit(call_tmp3, default_argorder);
#line 985 "ChapelArray.chpl"
  T2 = call_tmp4;
#line 985 "ChapelArray.chpl"
  while (T2) {
#line 985 "ChapelArray.chpl"
    chpl_task_yield();
#line 985 "ChapelArray.chpl"
    chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
    call_tmp5 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
    chpl_check_nil(call_tmp5, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
    call_tmp6 = &((call_tmp5)->_v);
#line 985 "ChapelArray.chpl"
    call_tmp7 = atomic_flag_test_and_set_explicit(call_tmp6, default_argorder2);
#line 985 "ChapelArray.chpl"
    T2 = call_tmp7;
#line 985 "ChapelArray.chpl"
  }
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp8 = &((coerce_tmp)->_arrs);
#line 985 "ChapelArray.chpl"
  call_tmp9 = ((BaseArr)(T));
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp8, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  append_chpl(call_tmp8, call_tmp9, _ln, _fn);
#line 985 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp10 = &((coerce_tmp)->_arrsLock);
#line 985 "ChapelArray.chpl"
  default_argorder3 = local_memory_order_seq_cst;
#line 985 "ChapelArray.chpl"
  chpl_check_nil(call_tmp10, INT64(985), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 985 "ChapelArray.chpl"
  call_tmp11 = &((call_tmp10)->_v);
#line 985 "ChapelArray.chpl"
  atomic_flag_clear_explicit(call_tmp11, default_argorder3);
#line 987 "ChapelArray.chpl"
  ret2 = this6;
#line 987 "ChapelArray.chpl"
  call_tmp12 = ((BaseDom)(ret2));
#line 987 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp12;
#line 987 "ChapelArray.chpl"
  compilerAssert();
#line 987 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp13 = &((coerce_tmp2)->_domCnt);
#line 987 "ChapelArray.chpl"
  chpl_check_nil(call_tmp13, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp14 = &((call_tmp13)->_cnt);
#line 987 "ChapelArray.chpl"
  default_argorder4 = local_memory_order_seq_cst;
#line 987 "ChapelArray.chpl"
  chpl_check_nil(call_tmp14, INT64(987), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 987 "ChapelArray.chpl"
  call_tmp15 = &((call_tmp14)->_v);
#line 987 "ChapelArray.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp15, INT64(1), default_argorder4);
#line 984 "ChapelArray.chpl"
  return;
#line 984 "ChapelArray.chpl"
}

#line 984 "ChapelArray.chpl"
/* ChapelArray.chpl:1030 */
#line 984 "ChapelArray.chpl"
static int64_t numIndices(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 984 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 984 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1030 "ChapelArray.chpl"
  ret = this6;
#line 1030 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(1030), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1030 "ChapelArray.chpl"
  call_tmp = dsiNumIndices(ret, _ln, _fn);
#line 1030 "ChapelArray.chpl"
  return call_tmp;
#line 1030 "ChapelArray.chpl"
}

#line 1030 "ChapelArray.chpl"
/* ChapelArray.chpl:1302 */
#line 1030 "ChapelArray.chpl"
static void setIndices(DefaultRectangularDom_1_int64_t_F this6, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn) {
#line 1030 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1303 "ChapelArray.chpl"
  ret = this6;
#line 1303 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(1303), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1303 "ChapelArray.chpl"
  dsiSetIndices(ret, x, _ln, _fn);
#line 1302 "ChapelArray.chpl"
  return;
#line 1302 "ChapelArray.chpl"
}

#line 1302 "ChapelArray.chpl"
/* ChapelArray.chpl:1310 */
#line 1302 "ChapelArray.chpl"
static void getIndices(DefaultRectangularDom_1_int64_t_F this6, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
#line 1302 "ChapelArray.chpl"
  range_int64_t_bounded_F ret_x1;
#line 1302 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1302 "ChapelArray.chpl"
  _tuple_1_star_range_int64_t_bounded_F call_tmp;
#line 1302 "ChapelArray.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 1311 "ChapelArray.chpl"
  ret = this6;
#line 1311 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 1311 "ChapelArray.chpl"
  chpl_check_nil(ret, INT64(1311), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1311 "ChapelArray.chpl"
  dsiGetIndices(ret, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1310 "ChapelArray.chpl"
  ret_x1 = *(call_tmp + INT64(0));
#line 1310 "ChapelArray.chpl"
  *(*(_retArg) + INT64(0)) = ret_x1;
#line 1310 "ChapelArray.chpl"
  return;
#line 1310 "ChapelArray.chpl"
}

#line 1310 "ChapelArray.chpl"
/* ChapelArray.chpl:1526 */
#line 1310 "ChapelArray.chpl"
static DefaultRectangularArr_int64_t_1_int64_t_F _construct__array4(DefaultRectangularArr_int64_t_1_int64_t_F _value, DefaultRectangularArr_int64_t_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 1310 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F this6 = NULL;
#line 1526 "ChapelArray.chpl"
  this6 = meme;
#line 1527 "ChapelArray.chpl"
  this6 = _value;
#line 1526 "ChapelArray.chpl"
  chpl_check_nil(this6, INT64(1526), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1526 "ChapelArray.chpl"
  initialize3(this6);
#line 1526 "ChapelArray.chpl"
  return this6;
#line 1526 "ChapelArray.chpl"
}

#line 1526 "ChapelArray.chpl"
/* ChapelArray.chpl:1526 */
#line 1526 "ChapelArray.chpl"
static DefaultRectangularArr_chpl_string_1_int64_t_F _construct__array2(DefaultRectangularArr_chpl_string_1_int64_t_F _value, DefaultRectangularArr_chpl_string_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 1526 "ChapelArray.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F this6 = NULL;
#line 1526 "ChapelArray.chpl"
  this6 = meme;
#line 1527 "ChapelArray.chpl"
  this6 = _value;
#line 1526 "ChapelArray.chpl"
  chpl_check_nil(this6, INT64(1526), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1526 "ChapelArray.chpl"
  initialize2(this6);
#line 1526 "ChapelArray.chpl"
  return this6;
#line 1526 "ChapelArray.chpl"
}

#line 1526 "ChapelArray.chpl"
/* ChapelArray.chpl:1526 */
#line 1526 "ChapelArray.chpl"
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _construct__array3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _value, DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 1526 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6 = NULL;
#line 1526 "ChapelArray.chpl"
  this6 = meme;
#line 1527 "ChapelArray.chpl"
  this6 = _value;
#line 1526 "ChapelArray.chpl"
  chpl_check_nil(this6, INT64(1526), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1526 "ChapelArray.chpl"
  initialize5(this6);
#line 1526 "ChapelArray.chpl"
  return this6;
#line 1526 "ChapelArray.chpl"
}

#line 1526 "ChapelArray.chpl"
/* ChapelArray.chpl:1526 */
#line 1526 "ChapelArray.chpl"
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct__array(DefaultRectangularArr_localesSignal_1_int64_t_F _value, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 1526 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this6 = NULL;
#line 1526 "ChapelArray.chpl"
  this6 = meme;
#line 1527 "ChapelArray.chpl"
  this6 = _value;
#line 1526 "ChapelArray.chpl"
  chpl_check_nil(this6, INT64(1526), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1526 "ChapelArray.chpl"
  initialize4(this6);
#line 1526 "ChapelArray.chpl"
  return this6;
#line 1526 "ChapelArray.chpl"
}

#line 1526 "ChapelArray.chpl"
/* ChapelArray.chpl:1526 */
#line 1526 "ChapelArray.chpl"
static DefaultRectangularArr_locale_1_int64_t_F _construct__array5(DefaultRectangularArr_locale_1_int64_t_F _value, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 1526 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F this6 = NULL;
#line 1526 "ChapelArray.chpl"
  this6 = meme;
#line 1527 "ChapelArray.chpl"
  this6 = _value;
#line 1526 "ChapelArray.chpl"
  chpl_check_nil(this6, INT64(1526), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1526 "ChapelArray.chpl"
  initialize(this6);
#line 1526 "ChapelArray.chpl"
  return this6;
#line 1526 "ChapelArray.chpl"
}

#line 1526 "ChapelArray.chpl"
/* ChapelArray.chpl:1532 */
#line 1526 "ChapelArray.chpl"
static void initialize3(DefaultRectangularArr_int64_t_1_int64_t_F this6) {
#line 1534 "ChapelArray.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes();
#line 1532 "ChapelArray.chpl"
  return;
#line 1532 "ChapelArray.chpl"
}

#line 1532 "ChapelArray.chpl"
/* ChapelArray.chpl:1532 */
#line 1532 "ChapelArray.chpl"
static void initialize4(DefaultRectangularArr_localesSignal_1_int64_t_F this6) {
#line 1534 "ChapelArray.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes2();
#line 1532 "ChapelArray.chpl"
  return;
#line 1532 "ChapelArray.chpl"
}

#line 1532 "ChapelArray.chpl"
/* ChapelArray.chpl:1532 */
#line 1532 "ChapelArray.chpl"
static void initialize(DefaultRectangularArr_locale_1_int64_t_F this6) {
#line 1534 "ChapelArray.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes3();
#line 1532 "ChapelArray.chpl"
  return;
#line 1532 "ChapelArray.chpl"
}

#line 1532 "ChapelArray.chpl"
/* ChapelArray.chpl:1532 */
#line 1532 "ChapelArray.chpl"
static void initialize2(DefaultRectangularArr_chpl_string_1_int64_t_F this6) {
#line 1534 "ChapelArray.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes5();
#line 1532 "ChapelArray.chpl"
  return;
#line 1532 "ChapelArray.chpl"
}

#line 1532 "ChapelArray.chpl"
/* ChapelArray.chpl:1532 */
#line 1532 "ChapelArray.chpl"
static void initialize5(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6) {
#line 1534 "ChapelArray.chpl"
  chpl_incRefCountsForDomainsInArrayEltTypes4();
#line 1532 "ChapelArray.chpl"
  return;
#line 1532 "ChapelArray.chpl"
}

#line 1532 "ChapelArray.chpl"
/* ChapelArray.chpl:1552 */
#line 1532 "ChapelArray.chpl"
static void chpl___TILDE__array2(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 1532 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret = NULL;
#line 1532 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1532 "ChapelArray.chpl"
  BaseArr call_tmp2 = NULL;
#line 1532 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 1532 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret2 = NULL;
#line 1532 "ChapelArray.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1532 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1532 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1532 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1532 "ChapelArray.chpl"
  chpl_opaque call_tmp5;
#line 1556 "ChapelArray.chpl"
  ret = this6;
#line 1556 "ChapelArray.chpl"
  call_tmp2 = ((BaseArr)(ret));
#line 1556 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(1556), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1556 "ChapelArray.chpl"
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
#line 1557 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 1557 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 1558 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 1557 "ChapelArray.chpl"
  {
#line 1558 "ChapelArray.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes2();
#line 1559 "ChapelArray.chpl"
    ret2 = this6;
#line 1559 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
#line 1559 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp4);
#line 1559 "ChapelArray.chpl"
    call_tmp5 = ((void*)(ret2));
#line 1559 "ChapelArray.chpl"
    chpl_here_free(call_tmp5, _ln, _fn);
#line 1559 "ChapelArray.chpl"
  }
#line 1552 "ChapelArray.chpl"
  return;
#line 1552 "ChapelArray.chpl"
}

#line 1552 "ChapelArray.chpl"
/* ChapelArray.chpl:1552 */
#line 1552 "ChapelArray.chpl"
static void chpl___TILDE__array4(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 1552 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret = NULL;
#line 1552 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1552 "ChapelArray.chpl"
  BaseArr call_tmp2 = NULL;
#line 1552 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 1552 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret2 = NULL;
#line 1552 "ChapelArray.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1552 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1552 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1552 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1552 "ChapelArray.chpl"
  chpl_opaque call_tmp5;
#line 1556 "ChapelArray.chpl"
  ret = this6;
#line 1556 "ChapelArray.chpl"
  call_tmp2 = ((BaseArr)(ret));
#line 1556 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(1556), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1556 "ChapelArray.chpl"
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
#line 1557 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 1557 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 1558 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 1557 "ChapelArray.chpl"
  {
#line 1558 "ChapelArray.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes3();
#line 1559 "ChapelArray.chpl"
    ret2 = this6;
#line 1559 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
#line 1559 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp4);
#line 1559 "ChapelArray.chpl"
    call_tmp5 = ((void*)(ret2));
#line 1559 "ChapelArray.chpl"
    chpl_here_free(call_tmp5, _ln, _fn);
#line 1559 "ChapelArray.chpl"
  }
#line 1552 "ChapelArray.chpl"
  return;
#line 1552 "ChapelArray.chpl"
}

#line 1552 "ChapelArray.chpl"
/* ChapelArray.chpl:1552 */
#line 1552 "ChapelArray.chpl"
static void chpl___TILDE__array(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 1552 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
#line 1552 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1552 "ChapelArray.chpl"
  BaseArr call_tmp2 = NULL;
#line 1552 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 1552 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret2 = NULL;
#line 1552 "ChapelArray.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1552 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1552 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1552 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1552 "ChapelArray.chpl"
  chpl_opaque call_tmp5;
#line 1556 "ChapelArray.chpl"
  ret = this6;
#line 1556 "ChapelArray.chpl"
  call_tmp2 = ((BaseArr)(ret));
#line 1556 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(1556), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1556 "ChapelArray.chpl"
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
#line 1557 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 1557 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 1558 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 1557 "ChapelArray.chpl"
  {
#line 1558 "ChapelArray.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes();
#line 1559 "ChapelArray.chpl"
    ret2 = this6;
#line 1559 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
#line 1559 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp4);
#line 1559 "ChapelArray.chpl"
    call_tmp5 = ((void*)(ret2));
#line 1559 "ChapelArray.chpl"
    chpl_here_free(call_tmp5, _ln, _fn);
#line 1559 "ChapelArray.chpl"
  }
#line 1552 "ChapelArray.chpl"
  return;
#line 1552 "ChapelArray.chpl"
}

#line 1552 "ChapelArray.chpl"
/* ChapelArray.chpl:1552 */
#line 1552 "ChapelArray.chpl"
static void chpl___TILDE__array3(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 1552 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 1552 "ChapelArray.chpl"
  int64_t call_tmp;
#line 1552 "ChapelArray.chpl"
  BaseArr call_tmp2 = NULL;
#line 1552 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 1552 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret2 = NULL;
#line 1552 "ChapelArray.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1552 "ChapelArray.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1552 "ChapelArray.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1552 "ChapelArray.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1552 "ChapelArray.chpl"
  chpl_opaque call_tmp5;
#line 1556 "ChapelArray.chpl"
  ret = this6;
#line 1556 "ChapelArray.chpl"
  call_tmp2 = ((BaseArr)(ret));
#line 1556 "ChapelArray.chpl"
  chpl_check_nil(call_tmp2, INT64(1556), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1556 "ChapelArray.chpl"
  call_tmp = destroyArr(call_tmp2, _ln, _fn);
#line 1557 "ChapelArray.chpl"
  call_tmp3 = (call_tmp == INT64(0));
#line 1557 "ChapelArray.chpl"
  if (call_tmp3) /* ZLINE: 1558 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 1557 "ChapelArray.chpl"
  {
#line 1558 "ChapelArray.chpl"
    chpl_decRefCountsForDomainsInArrayEltTypes4();
#line 1559 "ChapelArray.chpl"
    ret2 = this6;
#line 1559 "ChapelArray.chpl"
    _parent_destructor_tmp_ = ((BaseArr)(ret2));
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_parent_destructor_tmp_, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1559 "ChapelArray.chpl"
    chpl_check_nil(_field_destructor_tmp_2, INT64(1559), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1559 "ChapelArray.chpl"
    call_tmp4 = &((_field_destructor_tmp_2)->_v);
#line 1559 "ChapelArray.chpl"
    atomic_destroy_int_least64_t(call_tmp4);
#line 1559 "ChapelArray.chpl"
    call_tmp5 = ((void*)(ret2));
#line 1559 "ChapelArray.chpl"
    chpl_here_free(call_tmp5, _ln, _fn);
#line 1559 "ChapelArray.chpl"
  }
#line 1552 "ChapelArray.chpl"
  return;
#line 1552 "ChapelArray.chpl"
}

#line 1552 "ChapelArray.chpl"
/* ChapelArray.chpl:1570 */
#line 1552 "ChapelArray.chpl"
static void _dom(DefaultRectangularArr_locale_1_int64_t_F this6, _ref_DefaultRectangularDom_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 1552 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 1552 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 1552 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 1552 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp2 = NULL;
#line 1552 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 1570 "ChapelArray.chpl"
  ret = this6;
#line 1570 "ChapelArray.chpl"
  call_tmp = ret;
#line 1570 "ChapelArray.chpl"
  chpl_check_nil(call_tmp, INT64(1570), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 1570 "ChapelArray.chpl"
  ret2 = (call_tmp)->dom;
#line 1570 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 1570 "ChapelArray.chpl"
  _getDomain(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1570 "ChapelArray.chpl"
  *(_retArg) = chpl__initCopy2(call_tmp2, _ln, _fn);
#line 1570 "ChapelArray.chpl"
  chpl__autoDestroy2(call_tmp2, _ln, _fn);
#line 1570 "ChapelArray.chpl"
  return;
#line 1570 "ChapelArray.chpl"
}

#line 1570 "ChapelArray.chpl"
/* ChapelArray.chpl:1723 */
#line 1570 "ChapelArray.chpl"
static void newAlias(DefaultRectangularArr_locale_1_int64_t_F this6, _ref_DefaultRectangularArr_locale_1_int64_t_F _retArg, int64_t _ln, c_string _fn) {
#line 1570 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 1570 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F call_tmp = NULL;
#line 1570 "ChapelArray.chpl"
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 1724 "ChapelArray.chpl"
  ret = this6;
#line 1725 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 1725 "ChapelArray.chpl"
  _newArray(ret, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1725 "ChapelArray.chpl"
  *(_retArg) = call_tmp;
#line 1723 "ChapelArray.chpl"
  return;
#line 1723 "ChapelArray.chpl"
}

#line 1723 "ChapelArray.chpl"
/* ChapelArray.chpl:2442 */
#line 1723 "ChapelArray.chpl"
static void chpl___ASSIGN_(DefaultRectangularDom_1_int64_t_F a, DefaultRectangularDom_1_int64_t_F b, int64_t _ln, c_string _fn) {
#line 1723 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1723 "ChapelArray.chpl"
  BaseDom coerce_tmp = NULL;
#line 1723 "ChapelArray.chpl"
  BaseDom call_tmp = NULL;
#line 1723 "ChapelArray.chpl"
  list_BaseArr_chpl ret2;
#line 1723 "ChapelArray.chpl"
  list_BaseArr_chpl _ic__F0_this;
#line 1723 "ChapelArray.chpl"
  listNode_BaseArr_chpl tmp = NULL;
#line 1723 "ChapelArray.chpl"
  listNode_BaseArr_chpl ret3 = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool T;
#line 1723 "ChapelArray.chpl"
  object call_tmp2 = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool call_tmp3;
#line 1723 "ChapelArray.chpl"
  BaseArr ret4 = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_;
#line 1723 "ChapelArray.chpl"
  DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_ = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_2;
#line 1723 "ChapelArray.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_2 = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_3;
#line 1723 "ChapelArray.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F _cast_tmp_3 = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_4;
#line 1723 "ChapelArray.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _cast_tmp_4 = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool _dynamic_dispatch_tmp_5;
#line 1723 "ChapelArray.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F _cast_tmp_5 = NULL;
#line 1723 "ChapelArray.chpl"
  listNode_BaseArr_chpl ret5 = NULL;
#line 1723 "ChapelArray.chpl"
  object call_tmp4 = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool call_tmp5;
#line 1723 "ChapelArray.chpl"
  _tuple_1_star_range_int64_t_bounded_F call_tmp6;
#line 1723 "ChapelArray.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 1723 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
#line 1723 "ChapelArray.chpl"
  BaseDom coerce_tmp2 = NULL;
#line 1723 "ChapelArray.chpl"
  BaseDom call_tmp7 = NULL;
#line 1723 "ChapelArray.chpl"
  list_BaseArr_chpl ret7;
#line 1723 "ChapelArray.chpl"
  list_BaseArr_chpl _ic__F0_this2;
#line 1723 "ChapelArray.chpl"
  listNode_BaseArr_chpl tmp2 = NULL;
#line 1723 "ChapelArray.chpl"
  listNode_BaseArr_chpl ret8 = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool T2;
#line 1723 "ChapelArray.chpl"
  object call_tmp8 = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool call_tmp9;
#line 1723 "ChapelArray.chpl"
  BaseArr ret9 = NULL;
#line 1723 "ChapelArray.chpl"
  listNode_BaseArr_chpl ret10 = NULL;
#line 1723 "ChapelArray.chpl"
  object call_tmp10 = NULL;
#line 1723 "ChapelArray.chpl"
  chpl_bool call_tmp11;
#line 2444 "ChapelArray.chpl"
  ret = a;
#line 2444 "ChapelArray.chpl"
  call_tmp = ((BaseDom)(ret));
#line 2444 "ChapelArray.chpl"
  coerce_tmp = call_tmp;
#line 2444 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp, INT64(2444), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2444 "ChapelArray.chpl"
  ret2 = (coerce_tmp)->_arrs;
#line 2444 "ChapelArray.chpl"
  _ic__F0_this = ret2;
#line 2444 "ChapelArray.chpl"
  ret3 = (&_ic__F0_this)->first_chpl;
#line 2444 "ChapelArray.chpl"
  tmp = ret3;
#line 2444 "ChapelArray.chpl"
  call_tmp2 = ((object)(ret3));
#line 2444 "ChapelArray.chpl"
  call_tmp3 = (call_tmp2 != nil);
#line 2444 "ChapelArray.chpl"
  T = call_tmp3;
#line 2444 "ChapelArray.chpl"
  while (T) {
#line 2444 "ChapelArray.chpl"
    chpl_check_nil(tmp, INT64(2444), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2444 "ChapelArray.chpl"
    ret4 = (tmp)->data_chpl;
#line 2445 "ChapelArray.chpl"
    chpl_check_nil(ret4, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
    _dynamic_dispatch_tmp_ = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
#line 2445 "ChapelArray.chpl"
    if (_dynamic_dispatch_tmp_) /* ZLINE: 2445 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 2445 "ChapelArray.chpl"
    {
#line 2445 "ChapelArray.chpl"
      _cast_tmp_ = ((DefaultRectangularArr_locale_1_int64_t_F)(ret4));
#line 2445 "ChapelArray.chpl"
      chpl_check_nil(_cast_tmp_, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
      dsiReallocate3(_cast_tmp_, b, _ln, _fn);
#line 2445 "ChapelArray.chpl"
    } else /* ZLINE: 2445 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 2445 "ChapelArray.chpl"
    {
#line 2445 "ChapelArray.chpl"
      chpl_check_nil(ret4, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
      _dynamic_dispatch_tmp_2 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
#line 2445 "ChapelArray.chpl"
      if (_dynamic_dispatch_tmp_2) /* ZLINE: 2445 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 2445 "ChapelArray.chpl"
      {
#line 2445 "ChapelArray.chpl"
        _cast_tmp_2 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(ret4));
#line 2445 "ChapelArray.chpl"
        chpl_check_nil(_cast_tmp_2, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
        dsiReallocate6(_cast_tmp_2, b, _ln, _fn);
#line 2445 "ChapelArray.chpl"
      } else /* ZLINE: 2445 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 2445 "ChapelArray.chpl"
      {
#line 2445 "ChapelArray.chpl"
        chpl_check_nil(ret4, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
        _dynamic_dispatch_tmp_3 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F);
#line 2445 "ChapelArray.chpl"
        if (_dynamic_dispatch_tmp_3) /* ZLINE: 2445 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 2445 "ChapelArray.chpl"
        {
#line 2445 "ChapelArray.chpl"
          _cast_tmp_3 = ((DefaultRectangularArr_int64_t_1_int64_t_F)(ret4));
#line 2445 "ChapelArray.chpl"
          chpl_check_nil(_cast_tmp_3, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
          dsiReallocate5(_cast_tmp_3, b, _ln, _fn);
#line 2445 "ChapelArray.chpl"
        } else /* ZLINE: 2445 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 2445 "ChapelArray.chpl"
        {
#line 2445 "ChapelArray.chpl"
          chpl_check_nil(ret4, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
          _dynamic_dispatch_tmp_4 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F);
#line 2445 "ChapelArray.chpl"
          if (_dynamic_dispatch_tmp_4) /* ZLINE: 2445 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 2445 "ChapelArray.chpl"
          {
#line 2445 "ChapelArray.chpl"
            _cast_tmp_4 = ((DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F)(ret4));
#line 2445 "ChapelArray.chpl"
            chpl_check_nil(_cast_tmp_4, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
            dsiReallocate2(_cast_tmp_4, b, _ln, _fn);
#line 2445 "ChapelArray.chpl"
          } else /* ZLINE: 2445 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 2445 "ChapelArray.chpl"
          {
#line 2445 "ChapelArray.chpl"
            chpl_check_nil(ret4, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
            _dynamic_dispatch_tmp_5 = (((object)(ret4))->chpl__cid == chpl__cid_DefaultRectangularArr_chpl_string_1_int64_t_F);
#line 2445 "ChapelArray.chpl"
            if (_dynamic_dispatch_tmp_5) /* ZLINE: 2445 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 2445 "ChapelArray.chpl"
            {
#line 2445 "ChapelArray.chpl"
              _cast_tmp_5 = ((DefaultRectangularArr_chpl_string_1_int64_t_F)(ret4));
#line 2445 "ChapelArray.chpl"
              chpl_check_nil(_cast_tmp_5, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
              dsiReallocate4(_cast_tmp_5, b, _ln, _fn);
#line 2445 "ChapelArray.chpl"
            } else /* ZLINE: 2445 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl */
#line 2445 "ChapelArray.chpl"
            {
#line 2445 "ChapelArray.chpl"
              chpl_check_nil(ret4, INT64(2445), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2445 "ChapelArray.chpl"
              dsiReallocate(ret4, b, _ln, _fn);
#line 2445 "ChapelArray.chpl"
            }
#line 2445 "ChapelArray.chpl"
          }
#line 2445 "ChapelArray.chpl"
        }
#line 2445 "ChapelArray.chpl"
      }
#line 2445 "ChapelArray.chpl"
    }
#line 2444 "ChapelArray.chpl"
    chpl_check_nil(tmp, INT64(2444), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2444 "ChapelArray.chpl"
    ret5 = (tmp)->next_chpl;
#line 2444 "ChapelArray.chpl"
    tmp = ret5;
#line 2444 "ChapelArray.chpl"
    call_tmp4 = ((object)(ret5));
#line 2444 "ChapelArray.chpl"
    call_tmp5 = (call_tmp4 != nil);
#line 2444 "ChapelArray.chpl"
    T = call_tmp5;
#line 2444 "ChapelArray.chpl"
  }
#line 2447 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp6;
#line 2447 "ChapelArray.chpl"
  chpl_check_nil(b, INT64(2447), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2447 "ChapelArray.chpl"
  getIndices(b, ret_to_arg_ref_tmp_, _ln, _fn);
#line 2447 "ChapelArray.chpl"
  chpl_check_nil(a, INT64(2447), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2447 "ChapelArray.chpl"
  setIndices(a, &call_tmp6, _ln, _fn);
#line 2448 "ChapelArray.chpl"
  ret6 = a;
#line 2448 "ChapelArray.chpl"
  call_tmp7 = ((BaseDom)(ret6));
#line 2448 "ChapelArray.chpl"
  coerce_tmp2 = call_tmp7;
#line 2448 "ChapelArray.chpl"
  chpl_check_nil(coerce_tmp2, INT64(2448), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2448 "ChapelArray.chpl"
  ret7 = (coerce_tmp2)->_arrs;
#line 2448 "ChapelArray.chpl"
  _ic__F0_this2 = ret7;
#line 2448 "ChapelArray.chpl"
  ret8 = (&_ic__F0_this2)->first_chpl;
#line 2448 "ChapelArray.chpl"
  tmp2 = ret8;
#line 2448 "ChapelArray.chpl"
  call_tmp8 = ((object)(ret8));
#line 2448 "ChapelArray.chpl"
  call_tmp9 = (call_tmp8 != nil);
#line 2448 "ChapelArray.chpl"
  T2 = call_tmp9;
#line 2448 "ChapelArray.chpl"
  while (T2) {
#line 2448 "ChapelArray.chpl"
    chpl_check_nil(tmp2, INT64(2448), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2448 "ChapelArray.chpl"
    ret9 = (tmp2)->data_chpl;
#line 2449 "ChapelArray.chpl"
    chpl_check_nil(ret9, INT64(2449), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2449 "ChapelArray.chpl"
    dsiPostReallocate(ret9);
#line 2448 "ChapelArray.chpl"
    chpl_check_nil(tmp2, INT64(2448), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2448 "ChapelArray.chpl"
    ret10 = (tmp2)->next_chpl;
#line 2448 "ChapelArray.chpl"
    tmp2 = ret10;
#line 2448 "ChapelArray.chpl"
    call_tmp10 = ((object)(ret10));
#line 2448 "ChapelArray.chpl"
    call_tmp11 = (call_tmp10 != nil);
#line 2448 "ChapelArray.chpl"
    T2 = call_tmp11;
#line 2448 "ChapelArray.chpl"
  }
#line 2442 "ChapelArray.chpl"
  return;
#line 2442 "ChapelArray.chpl"
}

#line 2442 "ChapelArray.chpl"
/* ChapelArray.chpl:2828 */
#line 2442 "ChapelArray.chpl"
static DefaultDist chpl__initCopy(DefaultDist a, int64_t _ln, c_string _fn) {
#line 2442 "ChapelArray.chpl"
  DefaultDist call_tmp = NULL;
#line 2442 "ChapelArray.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 2829 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 2829 "ChapelArray.chpl"
  chpl_check_nil(a, INT64(2829), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2829 "ChapelArray.chpl"
  clone2(a, ret_to_arg_ref_tmp_, _ln, _fn);
#line 2828 "ChapelArray.chpl"
  return call_tmp;
#line 2828 "ChapelArray.chpl"
}

#line 2828 "ChapelArray.chpl"
/* ChapelArray.chpl:2834 */
#line 2828 "ChapelArray.chpl"
static DefaultRectangularDom_1_int64_t_F chpl__initCopy2(DefaultRectangularDom_1_int64_t_F a, int64_t _ln, c_string _fn) {
#line 2828 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F b = NULL;
#line 2828 "ChapelArray.chpl"
  DefaultRectangularDom_1_int64_t_F type_tmp = NULL;
#line 2828 "ChapelArray.chpl"
  chpl___RuntimeTypeInfo call_tmp;
#line 2828 "ChapelArray.chpl"
  DefaultDist _runtime_type_tmp_ = NULL;
#line 2828 "ChapelArray.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 2828 "ChapelArray.chpl"
  _tuple_1_star_range_int64_t_bounded_F call_tmp2;
#line 2828 "ChapelArray.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 2835 "ChapelArray.chpl"
  call_tmp = chpl__convertValueToRuntimeType(a, _ln, _fn);
#line 2835 "ChapelArray.chpl"
  _runtime_type_tmp_ = (&call_tmp)->d;
#line 2835 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_ = &type_tmp;
#line 2835 "ChapelArray.chpl"
  chpl__convertRuntimeTypeToValue(_runtime_type_tmp_, ret_to_arg_ref_tmp_, _ln, _fn);
#line 2835 "ChapelArray.chpl"
  b = type_tmp;
#line 2837 "ChapelArray.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 2837 "ChapelArray.chpl"
  chpl_check_nil(a, INT64(2837), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2837 "ChapelArray.chpl"
  getIndices(a, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 2837 "ChapelArray.chpl"
  chpl_check_nil(type_tmp, INT64(2837), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelArray.chpl");
#line 2837 "ChapelArray.chpl"
  setIndices(type_tmp, &call_tmp2, _ln, _fn);
#line 2834 "ChapelArray.chpl"
  return b;
#line 2834 "ChapelArray.chpl"
}


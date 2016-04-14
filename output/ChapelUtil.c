/* ChapelUtil.chpl:24 */
static void chpl__init_ChapelUtil(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 24 "ChapelUtil.chpl"
  if (chpl__init_ChapelUtil_p) /* ZLINE: 24 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelUtil.chpl */
#line 24 "ChapelUtil.chpl"
  {
#line 24 "ChapelUtil.chpl"
    goto _exit_chpl__init_ChapelUtil;
#line 24 "ChapelUtil.chpl"
  }
#line 24 "ChapelUtil.chpl"
  modFormatStr = "%*s\n";
#line 24 "ChapelUtil.chpl"
  modStr = "ChapelUtil";
#line 24 "ChapelUtil.chpl"
  printModuleInit(modFormatStr, modStr, INT64(10), _ln, _fn);
#line 24 "ChapelUtil.chpl"
  refIndentLevel = &moduleInitLevel;
#line 24 "ChapelUtil.chpl"
  *(refIndentLevel) += INT64(1);
#line 24 "ChapelUtil.chpl"
  chpl__init_ChapelUtil_p = UINT8(true);
#line 24 "ChapelUtil.chpl"
  *(refIndentLevel) -= INT64(1);
#line 24 "ChapelUtil.chpl"
  _exit_chpl__init_ChapelUtil:;
#line 24 "ChapelUtil.chpl"
  return;
#line 24 "ChapelUtil.chpl"
}

#line 24 "ChapelUtil.chpl"
/* ChapelUtil.chpl:161 */
#line 24 "ChapelUtil.chpl"
static DefaultRectangularArr_string_1_int64_t_F chpl_convert_args(chpl_main_argument* const arg, int64_t _ln, int32_t _fn) {
#line 24 "ChapelUtil.chpl"
  string local__str_literal_974;
#line 24 "ChapelUtil.chpl"
  chpl_main_argument local_arg;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularArr_string_1_int64_t_F array = NULL;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularArr_string_1_int64_t_F type_tmp = NULL;
#line 24 "ChapelUtil.chpl"
  range_int64_t_boundedLow_F call_tmp;
#line 24 "ChapelUtil.chpl"
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_ = NULL;
#line 24 "ChapelUtil.chpl"
  range_int64_t_bounded_F call_tmp2;
#line 24 "ChapelUtil.chpl"
  int64_t coerce_tmp;
#line 24 "ChapelUtil.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp3 = NULL;
#line 24 "ChapelUtil.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
#line 24 "ChapelUtil.chpl"
  chpl___RuntimeTypeInfo6 call_tmp4;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp_ = NULL;
#line 24 "ChapelUtil.chpl"
  _ref_DefaultRectangularArr_string_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
#line 24 "ChapelUtil.chpl"
  int64_t coerce_tmp2;
#line 24 "ChapelUtil.chpl"
  int64_t call_tmp5;
#line 24 "ChapelUtil.chpl"
  int64_t call_tmp6;
#line 24 "ChapelUtil.chpl"
  int64_t _ic__F1_high;
#line 24 "ChapelUtil.chpl"
  int64_t i;
#line 24 "ChapelUtil.chpl"
  _tuple_1_star_int64_t i2;
#line 24 "ChapelUtil.chpl"
  _tuple_1_star_int64_t this5;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularArr_string_1_int64_t_F call_tmp7 = NULL;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularArr_string_1_int64_t_F ret = NULL;
#line 24 "ChapelUtil.chpl"
  chpl_bool call_tmp8;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp3 = NULL;
#line 24 "ChapelUtil.chpl"
  chpl_bool call_tmp9;
#line 24 "ChapelUtil.chpl"
  string call_tmp10;
#line 24 "ChapelUtil.chpl"
  string _autoCopy_tmp_;
#line 24 "ChapelUtil.chpl"
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
#line 24 "ChapelUtil.chpl"
  string call_tmp11;
#line 24 "ChapelUtil.chpl"
  string _autoCopy_tmp_2;
#line 24 "ChapelUtil.chpl"
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
#line 24 "ChapelUtil.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 24 "ChapelUtil.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 24 "ChapelUtil.chpl"
  int64_t sum;
#line 24 "ChapelUtil.chpl"
  _ref__tuple_1_star_int64_t call_tmp12 = NULL;
#line 24 "ChapelUtil.chpl"
  int64_t coerce_tmp4;
#line 24 "ChapelUtil.chpl"
  int64_t coerce_tmp5;
#line 24 "ChapelUtil.chpl"
  int64_t call_tmp13;
#line 24 "ChapelUtil.chpl"
  _ddata_string coerce_tmp6 = NULL;
#line 24 "ChapelUtil.chpl"
  _ref_string call_tmp14 = NULL;
#line 24 "ChapelUtil.chpl"
  int32_t call_tmp15;
#line 24 "ChapelUtil.chpl"
  c_string call_tmp16;
#line 24 "ChapelUtil.chpl"
  _ref_chpl_main_argument _ref_tmp_3 = NULL;
#line 24 "ChapelUtil.chpl"
  string call_tmp17;
#line 24 "ChapelUtil.chpl"
  string _autoCopy_tmp_3;
#line 24 "ChapelUtil.chpl"
  _ref_string ret_to_arg_ref_tmp_7 = NULL;
#line 24 "ChapelUtil.chpl"
  _ref_string _ref_tmp_4 = NULL;
#line 170 "ChapelUtil.chpl"
  local__str_literal_974 = _str_literal_974;
#line 162 "ChapelUtil.chpl"
  local_arg = *(arg);
#line 166 "ChapelUtil.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 166 "ChapelUtil.chpl"
  chpl_build_low_bounded_range(INT64(0), ret_to_arg_ref_tmp_, _ln, _fn);
#line 166 "ChapelUtil.chpl"
  coerce_tmp = (&local_arg)->argc;
#line 166 "ChapelUtil.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 166 "ChapelUtil.chpl"
  chpl___POUND_(&call_tmp, coerce_tmp, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 166 "ChapelUtil.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp3;
#line 166 "ChapelUtil.chpl"
  chpl__ensureDomainExpr2(&call_tmp2, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 166 "ChapelUtil.chpl"
  call_tmp4 = chpl__buildArrayRuntimeType5(call_tmp3, _ln, _fn);
#line 166 "ChapelUtil.chpl"
  _runtime_type_tmp_ = (&call_tmp4)->dom;
#line 166 "ChapelUtil.chpl"
  ret_to_arg_ref_tmp_4 = &type_tmp;
#line 166 "ChapelUtil.chpl"
  chpl__convertRuntimeTypeToValue4(_runtime_type_tmp_, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 166 "ChapelUtil.chpl"
  array = type_tmp;
#line 168 "ChapelUtil.chpl"
  coerce_tmp2 = (arg)->argc;
#line 168 "ChapelUtil.chpl"
  call_tmp5 = (INT64(0) + coerce_tmp2);
#line 168 "ChapelUtil.chpl"
  call_tmp6 = (call_tmp5 - INT64(1));
#line 168 "ChapelUtil.chpl"
  _ic__F1_high = call_tmp6;
#line 168 "ChapelUtil.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp6, INT64(1), INT64(0), call_tmp6, UINT8(true), _ln, _fn);
#line 170 "ChapelUtil.chpl"
  ret = array;
#line 170 "ChapelUtil.chpl"
  call_tmp7 = ret;
#line 170 "ChapelUtil.chpl"
  chpl_check_nil(call_tmp7, INT64(170), INT64(0));
#line 170 "ChapelUtil.chpl"
  call_tmp12 = &((call_tmp7)->blk);
#line 170 "ChapelUtil.chpl"
  chpl_check_nil(call_tmp7, INT64(170), INT64(0));
#line 170 "ChapelUtil.chpl"
  coerce_tmp6 = (call_tmp7)->shiftedData;
#line 168 "ChapelUtil.chpl"
  for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 170 "ChapelUtil.chpl"
    *(this5 + INT64(0)) = i;
#line 170 "ChapelUtil.chpl"
    *(i2 + INT64(0)) = *(this5 + INT64(0));
#line 170 "ChapelUtil.chpl"
    chpl_check_nil(call_tmp7, INT64(170), INT64(0));
#line 170 "ChapelUtil.chpl"
    coerce_tmp3 = (call_tmp7)->dom;
#line 170 "ChapelUtil.chpl"
    chpl_check_nil(coerce_tmp3, INT64(170), INT64(0));
#line 170 "ChapelUtil.chpl"
    call_tmp8 = dsiMember(coerce_tmp3, &this5, _ln, _fn);
#line 170 "ChapelUtil.chpl"
    call_tmp9 = (! call_tmp8);
#line 170 "ChapelUtil.chpl"
    if (call_tmp9) /* ZLINE: 170 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelUtil.chpl */
#line 170 "ChapelUtil.chpl"
    {
#line 170 "ChapelUtil.chpl"
      ret_to_arg_ref_tmp_5 = &_autoCopy_tmp_;
#line 170 "ChapelUtil.chpl"
      _stringify_index(&this5, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 170 "ChapelUtil.chpl"
      call_tmp10 = _autoCopy_tmp_;
#line 170 "ChapelUtil.chpl"
      ret_to_arg_ref_tmp_6 = &_autoCopy_tmp_2;
#line 170 "ChapelUtil.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_, ret_to_arg_ref_tmp_6, _ln, _fn);
#line 170 "ChapelUtil.chpl"
      call_tmp11 = _autoCopy_tmp_2;
#line 170 "ChapelUtil.chpl"
      halt(&_autoCopy_tmp_2, _ln, _fn);
#line 170 "ChapelUtil.chpl"
      _ref_tmp_ = &call_tmp10;
#line 170 "ChapelUtil.chpl"
      chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 170 "ChapelUtil.chpl"
      _ref_tmp_2 = &call_tmp11;
#line 170 "ChapelUtil.chpl"
      chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 170 "ChapelUtil.chpl"
    }
#line 170 "ChapelUtil.chpl"
    sum = INT64(0);
#line 170 "ChapelUtil.chpl"
    coerce_tmp4 = *(i2 + INT64(0));
#line 170 "ChapelUtil.chpl"
    coerce_tmp5 = *(*(call_tmp12) + INT64(0));
#line 170 "ChapelUtil.chpl"
    call_tmp13 = (coerce_tmp4 * coerce_tmp5);
#line 170 "ChapelUtil.chpl"
    sum += call_tmp13;
#line 170 "ChapelUtil.chpl"
    call_tmp14 = (coerce_tmp6 + sum);
#line 170 "ChapelUtil.chpl"
    call_tmp15 = ((int32_t)(i));
#line 170 "ChapelUtil.chpl"
    _ref_tmp_3 = &local_arg;
#line 170 "ChapelUtil.chpl"
    call_tmp16 = chpl_get_argument_i(_ref_tmp_3, call_tmp15);
#line 170 "ChapelUtil.chpl"
    ret_to_arg_ref_tmp_7 = &_autoCopy_tmp_3;
#line 170 "ChapelUtil.chpl"
    _cast(call_tmp16, ret_to_arg_ref_tmp_7, _ln, _fn);
#line 170 "ChapelUtil.chpl"
    call_tmp17 = _autoCopy_tmp_3;
#line 170 "ChapelUtil.chpl"
    chpl___ASSIGN_2(call_tmp14, &_autoCopy_tmp_3, _ln, _fn);
#line 170 "ChapelUtil.chpl"
    _ref_tmp_4 = &call_tmp17;
#line 170 "ChapelUtil.chpl"
    chpl___TILDE_string(_ref_tmp_4, _ln, _fn);
#line 170 "ChapelUtil.chpl"
  }
#line 166 "ChapelUtil.chpl"
  chpl__autoDestroy2(call_tmp3, _ln, _fn);
#line 161 "ChapelUtil.chpl"
  return array;
#line 161 "ChapelUtil.chpl"
}


/* ChapelUtil.chpl:24 */
static void chpl__init_ChapelUtil(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 24 "ChapelUtil.chpl"
  if (chpl__init_ChapelUtil_p) /* ZLINE: 24 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelUtil.chpl */
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
  chpl__init_ChapelUtil_p = true;
#line 24 "ChapelUtil.chpl"
  *(refIndentLevel) -= INT64(1);
#line 24 "ChapelUtil.chpl"
  _exit_chpl__init_ChapelUtil:;
#line 24 "ChapelUtil.chpl"
  return;
#line 24 "ChapelUtil.chpl"
}

#line 24 "ChapelUtil.chpl"
/* ChapelUtil.chpl:157 */
#line 24 "ChapelUtil.chpl"
static DefaultRectangularArr_chpl_string_1_int64_t_F chpl_convert_args(chpl_main_argument* const arg, int64_t _ln, c_string _fn) {
#line 24 "ChapelUtil.chpl"
  chpl_main_argument local_arg;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F array = NULL;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F type_tmp = NULL;
#line 24 "ChapelUtil.chpl"
  range_int64_t_boundedLow_F call_tmp;
#line 24 "ChapelUtil.chpl"
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_ = NULL;
#line 24 "ChapelUtil.chpl"
  int64_t ret;
#line 24 "ChapelUtil.chpl"
  range_int64_t_bounded_F call_tmp2;
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
  _ref_DefaultRectangularArr_chpl_string_1_int64_t_F ret_to_arg_ref_tmp_4 = NULL;
#line 24 "ChapelUtil.chpl"
  range_int64_t_boundedLow_F call_tmp5;
#line 24 "ChapelUtil.chpl"
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_5 = NULL;
#line 24 "ChapelUtil.chpl"
  int64_t ret2;
#line 24 "ChapelUtil.chpl"
  range_int64_t_bounded_F call_tmp6;
#line 24 "ChapelUtil.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_6 = NULL;
#line 24 "ChapelUtil.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 24 "ChapelUtil.chpl"
  _ref_range_int64_t_bounded_F this6 = NULL;
#line 24 "ChapelUtil.chpl"
  int64_t i;
#line 24 "ChapelUtil.chpl"
  int64_t ret3;
#line 24 "ChapelUtil.chpl"
  int64_t end;
#line 24 "ChapelUtil.chpl"
  int64_t ret4;
#line 24 "ChapelUtil.chpl"
  _tuple_1_star_int64_t i2;
#line 24 "ChapelUtil.chpl"
  _tuple_1_star_int64_t this7;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F call_tmp7 = NULL;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F ret5 = NULL;
#line 24 "ChapelUtil.chpl"
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
#line 24 "ChapelUtil.chpl"
  chpl_bool call_tmp8;
#line 24 "ChapelUtil.chpl"
  chpl_bool call_tmp9;
#line 24 "ChapelUtil.chpl"
  chpl_string call_tmp10;
#line 24 "ChapelUtil.chpl"
  int64_t sum;
#line 24 "ChapelUtil.chpl"
  int64_t ret_x1;
#line 24 "ChapelUtil.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 24 "ChapelUtil.chpl"
  int64_t coerce_tmp;
#line 24 "ChapelUtil.chpl"
  int64_t call_tmp11;
#line 24 "ChapelUtil.chpl"
  _ddata_chpl_string ret7 = NULL;
#line 24 "ChapelUtil.chpl"
  _ddata_chpl_string coerce_tmp2 = NULL;
#line 24 "ChapelUtil.chpl"
  _ref_chpl_string call_tmp12 = NULL;
#line 24 "ChapelUtil.chpl"
  int32_t call_tmp13;
#line 24 "ChapelUtil.chpl"
  c_string call_tmp14;
#line 24 "ChapelUtil.chpl"
  _ref_chpl_main_argument _ref_tmp_ = NULL;
#line 24 "ChapelUtil.chpl"
  chpl_string call_tmp15;
#line 158 "ChapelUtil.chpl"
  local_arg = *(arg);
#line 162 "ChapelUtil.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 162 "ChapelUtil.chpl"
  chpl_build_partially_bounded_range(INT64(0), ret_to_arg_ref_tmp_, _ln, _fn);
#line 162 "ChapelUtil.chpl"
  ret = (&local_arg)->argc;
#line 162 "ChapelUtil.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 162 "ChapelUtil.chpl"
  chpl___POUND_(&call_tmp, ret, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 162 "ChapelUtil.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp3;
#line 162 "ChapelUtil.chpl"
  chpl__ensureDomainExpr2(&call_tmp2, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 162 "ChapelUtil.chpl"
  call_tmp4 = chpl__buildArrayRuntimeType5(call_tmp3, _ln, _fn);
#line 162 "ChapelUtil.chpl"
  _runtime_type_tmp_ = (&call_tmp4)->dom;
#line 162 "ChapelUtil.chpl"
  ret_to_arg_ref_tmp_4 = &type_tmp;
#line 162 "ChapelUtil.chpl"
  chpl__convertRuntimeTypeToValue3(_runtime_type_tmp_, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 162 "ChapelUtil.chpl"
  array = type_tmp;
#line 162 "ChapelUtil.chpl"
  chpl__autoDestroy2(call_tmp3, _ln, _fn);
#line 164 "ChapelUtil.chpl"
  ret_to_arg_ref_tmp_5 = &call_tmp5;
#line 164 "ChapelUtil.chpl"
  chpl_build_partially_bounded_range(INT64(0), ret_to_arg_ref_tmp_5, _ln, _fn);
#line 164 "ChapelUtil.chpl"
  ret2 = (arg)->argc;
#line 164 "ChapelUtil.chpl"
  ret_to_arg_ref_tmp_6 = &call_tmp6;
#line 164 "ChapelUtil.chpl"
  chpl___POUND_(&call_tmp5, ret2, ret_to_arg_ref_tmp_6, _ln, _fn);
#line 164 "ChapelUtil.chpl"
  _ic__F0_this = call_tmp6;
#line 164 "ChapelUtil.chpl"
  this6 = &_ic__F0_this;
#line 164 "ChapelUtil.chpl"
  chpl_check_nil(this6, INT64(164), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelUtil.chpl");
#line 164 "ChapelUtil.chpl"
  checkIfIterWillOverflow(this6, true, _ln, _fn);
#line 164 "ChapelUtil.chpl"
  ret3 = (&_ic__F0_this)->_low;
#line 164 "ChapelUtil.chpl"
  ret4 = (&_ic__F0_this)->_high;
#line 164 "ChapelUtil.chpl"
  end = ret4;
#line 166 "ChapelUtil.chpl"
  ret5 = array;
#line 166 "ChapelUtil.chpl"
  call_tmp7 = ret5;
#line 166 "ChapelUtil.chpl"
  chpl_check_nil(call_tmp7, INT64(166), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelUtil.chpl");
#line 166 "ChapelUtil.chpl"
  ret_ = &((call_tmp7)->blk);
#line 166 "ChapelUtil.chpl"
  chpl_check_nil(call_tmp7, INT64(166), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelUtil.chpl");
#line 166 "ChapelUtil.chpl"
  ret7 = (call_tmp7)->shiftedData;
#line 166 "ChapelUtil.chpl"
  coerce_tmp2 = ret7;
#line 164 "ChapelUtil.chpl"
  for (i = ret3; ((i <= end)); i += INT64(1)) {
#line 166 "ChapelUtil.chpl"
    *(this7 + INT64(0)) = i;
#line 166 "ChapelUtil.chpl"
    *(i2 + INT64(0)) = *(this7 + INT64(0));
#line 166 "ChapelUtil.chpl"
    chpl_check_nil(call_tmp7, INT64(166), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelUtil.chpl");
#line 166 "ChapelUtil.chpl"
    ret6 = (call_tmp7)->dom;
#line 166 "ChapelUtil.chpl"
    chpl_check_nil(ret6, INT64(166), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelUtil.chpl");
#line 166 "ChapelUtil.chpl"
    call_tmp8 = dsiMember(ret6, &this7, _ln, _fn);
#line 166 "ChapelUtil.chpl"
    call_tmp9 = (! call_tmp8);
#line 166 "ChapelUtil.chpl"
    if (call_tmp9) /* ZLINE: 166 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelUtil.chpl */
#line 166 "ChapelUtil.chpl"
    {
#line 166 "ChapelUtil.chpl"
      string_from_c_string(&call_tmp10, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 166 "ChapelUtil.chpl"
      halt3(call_tmp10, &this7, _ln, _fn);
#line 166 "ChapelUtil.chpl"
    }
#line 166 "ChapelUtil.chpl"
    sum = INT64(0);
#line 166 "ChapelUtil.chpl"
    ret_x1 = *(*(ret_) + INT64(0));
#line 166 "ChapelUtil.chpl"
    coerce_tmp = *(i2 + INT64(0));
#line 166 "ChapelUtil.chpl"
    call_tmp11 = (coerce_tmp * ret_x1);
#line 166 "ChapelUtil.chpl"
    sum += call_tmp11;
#line 166 "ChapelUtil.chpl"
    call_tmp12 = (coerce_tmp2 + sum);
#line 166 "ChapelUtil.chpl"
    call_tmp13 = ((int32_t)(i));
#line 166 "ChapelUtil.chpl"
    _ref_tmp_ = &local_arg;
#line 166 "ChapelUtil.chpl"
    call_tmp14 = chpl_get_argument_i(_ref_tmp_, call_tmp13);
#line 166 "ChapelUtil.chpl"
    string_from_c_string(&call_tmp15, call_tmp14, INT64(0), INT64(0), _ln, _fn);
#line 166 "ChapelUtil.chpl"
    *(call_tmp12) = call_tmp15;
#line 166 "ChapelUtil.chpl"
  }
#line 157 "ChapelUtil.chpl"
  return array;
#line 157 "ChapelUtil.chpl"
}


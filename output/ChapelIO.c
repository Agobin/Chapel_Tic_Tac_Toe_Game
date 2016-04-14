/* ChapelIO.chpl:179 */
static void chpl__init_ChapelIO(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 179 "ChapelIO.chpl"
  if (chpl__init_ChapelIO_p) /* ZLINE: 179 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelIO.chpl */
#line 179 "ChapelIO.chpl"
  {
#line 179 "ChapelIO.chpl"
    goto _exit_chpl__init_ChapelIO;
#line 179 "ChapelIO.chpl"
  }
#line 179 "ChapelIO.chpl"
  modFormatStr = "%*s\n";
#line 179 "ChapelIO.chpl"
  modStr = "ChapelIO";
#line 179 "ChapelIO.chpl"
  printModuleInit(modFormatStr, modStr, INT64(8), _ln, _fn);
#line 179 "ChapelIO.chpl"
  refIndentLevel = &moduleInitLevel;
#line 179 "ChapelIO.chpl"
  *(refIndentLevel) += INT64(1);
#line 179 "ChapelIO.chpl"
  chpl__init_ChapelIO_p = UINT8(true);
#line 179 "ChapelIO.chpl"
  {
#line 179 "ChapelIO.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 179 "ChapelIO.chpl"
    chpl__init_SysBasic(_ln, _fn);
#line 179 "ChapelIO.chpl"
    chpl__init_IO(_ln, _fn);
#line 179 "ChapelIO.chpl"
  }
#line 779 "ChapelIO.chpl"
  chpl__testParOn = UINT8(false);
#line 179 "ChapelIO.chpl"
  *(refIndentLevel) -= INT64(1);
#line 179 "ChapelIO.chpl"
  _exit_chpl__init_ChapelIO:;
#line 179 "ChapelIO.chpl"
  return;
#line 179 "ChapelIO.chpl"
}

#line 179 "ChapelIO.chpl"
/* ChapelIO.chpl:215 */
#line 179 "ChapelIO.chpl"
static void _stringify_index(_tuple_1_star_int64_t* const tup, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 179 "ChapelIO.chpl"
  string local__str_literal_533;
#line 179 "ChapelIO.chpl"
  string str;
#line 179 "ChapelIO.chpl"
  string call_tmp;
#line 179 "ChapelIO.chpl"
  int64_t coerce_tmp;
#line 179 "ChapelIO.chpl"
  string _autoCopy_tmp_;
#line 179 "ChapelIO.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 179 "ChapelIO.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 179 "ChapelIO.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 179 "ChapelIO.chpl"
  _ref_string _ref_tmp_3 = NULL;
#line 179 "ChapelIO.chpl"
  _ref_string _ref_tmp_4 = NULL;
#line 179 "ChapelIO.chpl"
  _ref_string _ref_tmp_5 = NULL;
#line 217 "ChapelIO.chpl"
  local__str_literal_533 = _str_literal_533;
#line 217 "ChapelIO.chpl"
  str = chpl__autoCopy8(&local__str_literal_533, _ln, _fn);
#line 221 "ChapelIO.chpl"
  coerce_tmp = *(*(tup) + INT64(0));
#line 221 "ChapelIO.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 221 "ChapelIO.chpl"
  _cast3(coerce_tmp, ret_to_arg_ref_tmp_, _ln, _fn);
#line 221 "ChapelIO.chpl"
  call_tmp = _autoCopy_tmp_;
#line 221 "ChapelIO.chpl"
  _ref_tmp_ = &str;
#line 221 "ChapelIO.chpl"
  _ref_tmp_2 = &call_tmp;
#line 221 "ChapelIO.chpl"
  chpl___PLUS__ASSIGN_(_ref_tmp_, _ref_tmp_2, _ln, _fn);
#line 221 "ChapelIO.chpl"
  _ref_tmp_3 = &call_tmp;
#line 221 "ChapelIO.chpl"
  chpl___TILDE_string(_ref_tmp_3, _ln, _fn);
#line 224 "ChapelIO.chpl"
  _ref_tmp_4 = &str;
#line 224 "ChapelIO.chpl"
  _ref_tmp_5 = &_str_literal_381;
#line 224 "ChapelIO.chpl"
  chpl___PLUS__ASSIGN_(_ref_tmp_4, _ref_tmp_5, _ln, _fn);
#line 215 "ChapelIO.chpl"
  *(_retArg) = str;
#line 215 "ChapelIO.chpl"
  return;
#line 215 "ChapelIO.chpl"
}

#line 215 "ChapelIO.chpl"
/* ChapelIO.chpl:688 */
#line 215 "ChapelIO.chpl"
static void halt(string* const s, int64_t _ln, int32_t _fn) {
#line 215 "ChapelIO.chpl"
  string local__str_literal_302;
#line 215 "ChapelIO.chpl"
  string call_tmp;
#line 215 "ChapelIO.chpl"
  string call_tmp2;
#line 215 "ChapelIO.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 215 "ChapelIO.chpl"
  int32_t coerce_tmp;
#line 215 "ChapelIO.chpl"
  chpl_bool call_tmp3;
#line 215 "ChapelIO.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 215 "ChapelIO.chpl"
  c_string call_tmp4;
#line 215 "ChapelIO.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 689 "ChapelIO.chpl"
  local__str_literal_302 = _str_literal_302;
#line 689 "ChapelIO.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp2;
#line 689 "ChapelIO.chpl"
  string2(s, UINT8(false), ret_to_arg_ref_tmp_, _ln, _fn);
#line 689 "ChapelIO.chpl"
  call_tmp = call_tmp2;
#line 689 "ChapelIO.chpl"
  coerce_tmp = (&call_tmp)->locale_id;
#line 689 "ChapelIO.chpl"
  call_tmp3 = (coerce_tmp != chpl_nodeID);
#line 689 "ChapelIO.chpl"
  if (call_tmp3) /* ZLINE: 689 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelIO.chpl */
#line 689 "ChapelIO.chpl"
  {
#line 689 "ChapelIO.chpl"
    halt(&local__str_literal_302, _ln, _fn);
#line 689 "ChapelIO.chpl"
  }
#line 689 "ChapelIO.chpl"
  coerce_tmp2 = (&call_tmp)->buff;
#line 689 "ChapelIO.chpl"
  call_tmp4 = ((c_string)(coerce_tmp2));
#line 689 "ChapelIO.chpl"
  halt2(call_tmp4, _ln, _fn);
#line 689 "ChapelIO.chpl"
  _ref_tmp_ = &call_tmp;
#line 689 "ChapelIO.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 688 "ChapelIO.chpl"
  return;
#line 688 "ChapelIO.chpl"
}

#line 688 "ChapelIO.chpl"
/* ChapelIO.chpl:693 */
#line 688 "ChapelIO.chpl"
static void halt2(c_string s, int64_t _ln, int32_t _fn) {
#line 688 "ChapelIO.chpl"
  c_string_copy call_tmp;
#line 694 "ChapelIO.chpl"
  call_tmp = string_concat("halt reached - ", s, _ln, _fn);
#line 694 "ChapelIO.chpl"
  chpl_error(call_tmp, _ln, _fn);
#line 693 "ChapelIO.chpl"
  return;
#line 693 "ChapelIO.chpl"
}

#line 693 "ChapelIO.chpl"
/* ChapelIO.chpl:702 */
#line 693 "ChapelIO.chpl"
static void halt3(string* const _e0_args, int64_t _e1_args, int64_t _ln, int32_t _fn) {
#line 693 "ChapelIO.chpl"
  string local__str_literal_302;
#line 693 "ChapelIO.chpl"
  string local__str_literal_1508;
#line 693 "ChapelIO.chpl"
  string tmpstring;
#line 693 "ChapelIO.chpl"
  string call_tmp;
#line 693 "ChapelIO.chpl"
  string _autoCopy_tmp_;
#line 693 "ChapelIO.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 693 "ChapelIO.chpl"
  string call_tmp2;
#line 693 "ChapelIO.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 693 "ChapelIO.chpl"
  int32_t coerce_tmp;
#line 693 "ChapelIO.chpl"
  chpl_bool call_tmp3;
#line 693 "ChapelIO.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 693 "ChapelIO.chpl"
  c_string call_tmp4;
#line 693 "ChapelIO.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 693 "ChapelIO.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 704 "ChapelIO.chpl"
  local__str_literal_302 = _str_literal_302;
#line 703 "ChapelIO.chpl"
  local__str_literal_1508 = _str_literal_1508;
#line 703 "ChapelIO.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 703 "ChapelIO.chpl"
  stringify_chpl(_e0_args, _e1_args, ret_to_arg_ref_tmp_, _ln, _fn);
#line 703 "ChapelIO.chpl"
  call_tmp = _autoCopy_tmp_;
#line 703 "ChapelIO.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 703 "ChapelIO.chpl"
  chpl___PLUS_(&local__str_literal_1508, &_autoCopy_tmp_, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 703 "ChapelIO.chpl"
  tmpstring = call_tmp2;
#line 704 "ChapelIO.chpl"
  coerce_tmp = (&tmpstring)->locale_id;
#line 704 "ChapelIO.chpl"
  call_tmp3 = (coerce_tmp != chpl_nodeID);
#line 704 "ChapelIO.chpl"
  if (call_tmp3) /* ZLINE: 704 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelIO.chpl */
#line 704 "ChapelIO.chpl"
  {
#line 704 "ChapelIO.chpl"
    halt(&local__str_literal_302, _ln, _fn);
#line 704 "ChapelIO.chpl"
  }
#line 704 "ChapelIO.chpl"
  coerce_tmp2 = (&tmpstring)->buff;
#line 704 "ChapelIO.chpl"
  call_tmp4 = ((c_string)(coerce_tmp2));
#line 704 "ChapelIO.chpl"
  chpl_error(call_tmp4, _ln, _fn);
#line 703 "ChapelIO.chpl"
  _ref_tmp_ = &call_tmp;
#line 703 "ChapelIO.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 703 "ChapelIO.chpl"
  _ref_tmp_2 = &tmpstring;
#line 703 "ChapelIO.chpl"
  chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 702 "ChapelIO.chpl"
  return;
#line 702 "ChapelIO.chpl"
}


/* StringCasts.chpl:20 */
static void chpl__init_StringCasts(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 20 "StringCasts.chpl"
  if (chpl__init_StringCasts_p) /* ZLINE: 20 /home/agobin/Documents/chapel-1.13.0/modules/internal/StringCasts.chpl */
#line 20 "StringCasts.chpl"
  {
#line 20 "StringCasts.chpl"
    goto _exit_chpl__init_StringCasts;
#line 20 "StringCasts.chpl"
  }
#line 20 "StringCasts.chpl"
  modFormatStr = "%*s\n";
#line 20 "StringCasts.chpl"
  modStr = "StringCasts";
#line 20 "StringCasts.chpl"
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
#line 20 "StringCasts.chpl"
  refIndentLevel = &moduleInitLevel;
#line 20 "StringCasts.chpl"
  *(refIndentLevel) += INT64(1);
#line 20 "StringCasts.chpl"
  chpl__init_StringCasts_p = UINT8(true);
#line 20 "StringCasts.chpl"
  *(refIndentLevel) -= INT64(1);
#line 20 "StringCasts.chpl"
  _exit_chpl__init_StringCasts:;
#line 20 "StringCasts.chpl"
  return;
#line 20 "StringCasts.chpl"
}

#line 20 "StringCasts.chpl"
/* StringCasts.chpl:44 */
#line 20 "StringCasts.chpl"
static chpl_bool _cast2(string* const x, int64_t _ln, int32_t _fn) {
#line 20 "StringCasts.chpl"
  string local__str_literal_789;
#line 20 "StringCasts.chpl"
  string local__str_literal_1671;
#line 20 "StringCasts.chpl"
  string local__str_literal_1669;
#line 20 "StringCasts.chpl"
  string local__str_literal_512;
#line 20 "StringCasts.chpl"
  chpl_bool ret;
#line 20 "StringCasts.chpl"
  chpl_bool call_tmp;
#line 20 "StringCasts.chpl"
  chpl_bool call_tmp2;
#line 20 "StringCasts.chpl"
  string call_tmp3;
#line 20 "StringCasts.chpl"
  string _autoCopy_tmp_;
#line 20 "StringCasts.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 20 "StringCasts.chpl"
  string call_tmp4;
#line 20 "StringCasts.chpl"
  string _autoCopy_tmp_2;
#line 20 "StringCasts.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 20 "StringCasts.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 20 "StringCasts.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 50 "StringCasts.chpl"
  local__str_literal_789 = _str_literal_789;
#line 50 "StringCasts.chpl"
  local__str_literal_1671 = _str_literal_1671;
#line 47 "StringCasts.chpl"
  local__str_literal_1669 = _str_literal_1669;
#line 45 "StringCasts.chpl"
  local__str_literal_512 = _str_literal_512;
#line 45 "StringCasts.chpl"
  call_tmp = chpl___EQUALS__(x, &local__str_literal_512, _ln, _fn);
#line 45 "StringCasts.chpl"
  if (call_tmp) /* ZLINE: 46 /home/agobin/Documents/chapel-1.13.0/modules/internal/StringCasts.chpl */
#line 45 "StringCasts.chpl"
  {
#line 46 "StringCasts.chpl"
    ret = UINT8(true);
#line 46 "StringCasts.chpl"
    goto _end__cast;
#line 46 "StringCasts.chpl"
  } else /* ZLINE: 45 /home/agobin/Documents/chapel-1.13.0/modules/internal/StringCasts.chpl */
#line 46 "StringCasts.chpl"
  {
#line 47 "StringCasts.chpl"
    call_tmp2 = chpl___EQUALS__(x, &local__str_literal_1669, _ln, _fn);
#line 47 "StringCasts.chpl"
    if (call_tmp2) /* ZLINE: 48 /home/agobin/Documents/chapel-1.13.0/modules/internal/StringCasts.chpl */
#line 47 "StringCasts.chpl"
    {
#line 48 "StringCasts.chpl"
      ret = UINT8(false);
#line 48 "StringCasts.chpl"
      goto _end__cast;
#line 48 "StringCasts.chpl"
    } else /* ZLINE: 50 /home/agobin/Documents/chapel-1.13.0/modules/internal/StringCasts.chpl */
#line 48 "StringCasts.chpl"
    {
#line 50 "StringCasts.chpl"
      ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 50 "StringCasts.chpl"
      chpl___PLUS_(&local__str_literal_1671, x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 50 "StringCasts.chpl"
      call_tmp3 = _autoCopy_tmp_;
#line 50 "StringCasts.chpl"
      ret_to_arg_ref_tmp_2 = &_autoCopy_tmp_2;
#line 50 "StringCasts.chpl"
      chpl___PLUS_(&_autoCopy_tmp_, &local__str_literal_789, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 50 "StringCasts.chpl"
      call_tmp4 = _autoCopy_tmp_2;
#line 50 "StringCasts.chpl"
      halt(&_autoCopy_tmp_2, _ln, _fn);
#line 50 "StringCasts.chpl"
      _ref_tmp_ = &call_tmp3;
#line 50 "StringCasts.chpl"
      chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 50 "StringCasts.chpl"
      _ref_tmp_2 = &call_tmp4;
#line 50 "StringCasts.chpl"
      chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 50 "StringCasts.chpl"
    }
#line 50 "StringCasts.chpl"
  }
#line 50 "StringCasts.chpl"
  _end__cast:;
#line 44 "StringCasts.chpl"
  return ret;
#line 44 "StringCasts.chpl"
}

#line 44 "StringCasts.chpl"
/* StringCasts.chpl:57 */
#line 44 "StringCasts.chpl"
static void _cast3(int64_t x, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 44 "StringCasts.chpl"
  string local__str_literal_2603;
#line 44 "StringCasts.chpl"
  c_string_copy call_tmp;
#line 44 "StringCasts.chpl"
  uint32_t call_tmp2;
#line 44 "StringCasts.chpl"
  string ret;
#line 44 "StringCasts.chpl"
  string this5;
#line 44 "StringCasts.chpl"
  c_ptr_uint8_t call_tmp3 = NULL;
#line 44 "StringCasts.chpl"
  int32_t default_arglocale_id;
#line 44 "StringCasts.chpl"
  string wrap_call_tmp;
#line 44 "StringCasts.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 44 "StringCasts.chpl"
  _ref_c_ptr_uint8_t call_tmp4 = NULL;
#line 44 "StringCasts.chpl"
  c_ptr_uint8_t call_tmp5 = NULL;
#line 44 "StringCasts.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 44 "StringCasts.chpl"
  uint64_t call_tmp7;
#line 44 "StringCasts.chpl"
  chpl_bool call_tmp8;
#line 44 "StringCasts.chpl"
  int64_t call_tmp9;
#line 44 "StringCasts.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 44 "StringCasts.chpl"
  int64_t coerce_tmp;
#line 44 "StringCasts.chpl"
  int64_t call_tmp11;
#line 66 "StringCasts.chpl"
  local__str_literal_2603 = _str_literal_2603;
#line 62 "StringCasts.chpl"
  call_tmp2 = ((uint32_t)(INT64(8)));
#line 62 "StringCasts.chpl"
  call_tmp = integral_to_c_string_copy(x, call_tmp2, UINT8(true));
#line 64 "StringCasts.chpl"
  (&this5)->len = INT64(0);
#line 64 "StringCasts.chpl"
  (&this5)->_size = INT64(0);
#line 64 "StringCasts.chpl"
  (&this5)->buff = nil;
#line 64 "StringCasts.chpl"
  (&this5)->owned = UINT8(false);
#line 64 "StringCasts.chpl"
  (&this5)->locale_id = INT32(0);
#line 64 "StringCasts.chpl"
  (&this5)->len = INT64(0);
#line 64 "StringCasts.chpl"
  (&this5)->_size = INT64(0);
#line 64 "StringCasts.chpl"
  call_tmp3 = ((c_ptr_uint8_t)(nil));
#line 64 "StringCasts.chpl"
  (&this5)->buff = call_tmp3;
#line 64 "StringCasts.chpl"
  (&this5)->owned = UINT8(true);
#line 64 "StringCasts.chpl"
  default_arglocale_id = chpl_nodeID;
#line 64 "StringCasts.chpl"
  (&this5)->locale_id = default_arglocale_id;
#line 64 "StringCasts.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 64 "StringCasts.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp3, UINT8(true), default_arglocale_id, &this5, ret_to_arg_ref_tmp_, _ln, _fn);
#line 64 "StringCasts.chpl"
  ret = wrap_call_tmp;
#line 65 "StringCasts.chpl"
  call_tmp4 = &((&ret)->buff);
#line 65 "StringCasts.chpl"
  call_tmp5 = ((c_ptr_uint8_t)(call_tmp));
#line 65 "StringCasts.chpl"
  *(call_tmp4) = call_tmp5;
#line 66 "StringCasts.chpl"
  call_tmp6 = &((&ret)->len);
#line 66 "StringCasts.chpl"
  call_tmp7 = strlen(call_tmp);
#line 66 "StringCasts.chpl"
  call_tmp8 = (call_tmp7 > UINT64(9223372036854775807));
#line 66 "StringCasts.chpl"
  if (call_tmp8) /* ZLINE: 66 /home/agobin/Documents/chapel-1.13.0/modules/internal/StringCasts.chpl */
#line 66 "StringCasts.chpl"
  {
#line 66 "StringCasts.chpl"
    halt(&local__str_literal_2603, _ln, _fn);
#line 66 "StringCasts.chpl"
  }
#line 66 "StringCasts.chpl"
  call_tmp9 = ((int64_t)(call_tmp7));
#line 66 "StringCasts.chpl"
  *(call_tmp6) = call_tmp9;
#line 67 "StringCasts.chpl"
  call_tmp10 = &((&ret)->_size);
#line 67 "StringCasts.chpl"
  coerce_tmp = (&ret)->len;
#line 67 "StringCasts.chpl"
  call_tmp11 = (coerce_tmp + INT64(1));
#line 67 "StringCasts.chpl"
  *(call_tmp10) = call_tmp11;
#line 57 "StringCasts.chpl"
  *(_retArg) = ret;
#line 57 "StringCasts.chpl"
  return;
#line 57 "StringCasts.chpl"
}


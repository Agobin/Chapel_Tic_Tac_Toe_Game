/* Error.chpl:38 */
static void chpl__init_Error(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 38 "Error.chpl"
  if (chpl__init_Error_p) /* ZLINE: 38 /home/agobin/Documents/chapel-1.13.0/modules/standard/Error.chpl */
#line 38 "Error.chpl"
  {
#line 38 "Error.chpl"
    goto _exit_chpl__init_Error_chpl;
#line 38 "Error.chpl"
  }
#line 38 "Error.chpl"
  modFormatStr_chpl = "%*s\n";
#line 38 "Error.chpl"
  modStr_chpl = "Error";
#line 38 "Error.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(5), _ln_chpl, _fn_chpl);
#line 38 "Error.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 38 "Error.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 38 "Error.chpl"
  chpl__init_Error_p = UINT8(true);
#line 38 "Error.chpl"
  {
#line 38 "Error.chpl"
    chpl__init_SysBasic(_ln_chpl, _fn_chpl);
#line 38 "Error.chpl"
  }
#line 38 "Error.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 38 "Error.chpl"
  _exit_chpl__init_Error_chpl:;
#line 38 "Error.chpl"
  return;
#line 38 "Error.chpl"
}

#line 38 "Error.chpl"
/* Error.chpl:49 */
#line 38 "Error.chpl"
static c_string quote_string_chpl(string* const s_chpl, int64_t len_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 38 "Error.chpl"
  c_void_ptr local_c_nil_chpl;
#line 38 "Error.chpl"
  string local__str_literal_302_chpl;
#line 38 "Error.chpl"
  c_string ret_chpl;
#line 38 "Error.chpl"
  c_string ret_chpl2;
#line 38 "Error.chpl"
  string call_tmp_chpl;
#line 38 "Error.chpl"
  string call_tmp_chpl2;
#line 38 "Error.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
#line 38 "Error.chpl"
  int32_t coerce_tmp_chpl;
#line 38 "Error.chpl"
  chpl_bool call_tmp_chpl3;
#line 38 "Error.chpl"
  c_ptr_uint8_t coerce_tmp_chpl2 = NULL;
#line 38 "Error.chpl"
  c_string call_tmp_chpl4;
#line 38 "Error.chpl"
  syserr call_tmp_chpl5;
#line 38 "Error.chpl"
  _ref_c_string _ref_tmp__chpl = NULL;
#line 38 "Error.chpl"
  int32_t call_tmp_chpl6;
#line 38 "Error.chpl"
  chpl_bool call_tmp_chpl7;
#line 38 "Error.chpl"
  c_string call_tmp_chpl8;
#line 38 "Error.chpl"
  _ref_string _ref_tmp__chpl2 = NULL;
#line 38 "Error.chpl"
  _ref_string _ref_tmp__chpl3 = NULL;
#line 60 "Error.chpl"
  local_c_nil_chpl = c_nil;
#line 60 "Error.chpl"
  local__str_literal_302_chpl = _str_literal_302;
#line 56 "Error.chpl"
  ret_chpl2 = "";
#line 60 "Error.chpl"
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl2;
#line 60 "Error.chpl"
  string2(s_chpl, UINT8(false), ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 60 "Error.chpl"
  call_tmp_chpl = call_tmp_chpl2;
#line 60 "Error.chpl"
  coerce_tmp_chpl = (&call_tmp_chpl)->locale_id;
#line 60 "Error.chpl"
  call_tmp_chpl3 = (coerce_tmp_chpl != chpl_nodeID);
#line 60 "Error.chpl"
  if (call_tmp_chpl3) /* ZLINE: 60 /home/agobin/Documents/chapel-1.13.0/modules/standard/Error.chpl */
#line 60 "Error.chpl"
  {
#line 60 "Error.chpl"
    halt(&local__str_literal_302_chpl, _ln_chpl, _fn_chpl);
#line 60 "Error.chpl"
  }
#line 60 "Error.chpl"
  coerce_tmp_chpl2 = (&call_tmp_chpl)->buff;
#line 60 "Error.chpl"
  call_tmp_chpl4 = ((c_string)(coerce_tmp_chpl2));
#line 58 "Error.chpl"
  _ref_tmp__chpl = &ret_chpl2;
#line 58 "Error.chpl"
  call_tmp_chpl5 = qio_quote_string(UINT8(34), UINT8(34), QIO_STRING_FORMAT_CHPL, call_tmp_chpl4, len_chpl, _ref_tmp__chpl, local_c_nil_chpl);
#line 65 "Error.chpl"
  call_tmp_chpl6 = qio_err_iserr(call_tmp_chpl5);
#line 65 "Error.chpl"
  call_tmp_chpl7 = (call_tmp_chpl6 != INT32(0));
#line 65 "Error.chpl"
  if (call_tmp_chpl7) /* ZLINE: 65 /home/agobin/Documents/chapel-1.13.0/modules/standard/Error.chpl */
#line 65 "Error.chpl"
  {
#line 65 "Error.chpl"
    call_tmp_chpl8 = qio_strdup("<error>");
#line 65 "Error.chpl"
    ret_chpl = call_tmp_chpl8;
#line 60 "Error.chpl"
    _ref_tmp__chpl2 = &call_tmp_chpl;
#line 60 "Error.chpl"
    chpl___TILDE_string(_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 65 "Error.chpl"
    goto _end_quote_string_chpl;
#line 65 "Error.chpl"
  }
#line 66 "Error.chpl"
  ret_chpl = ret_chpl2;
#line 60 "Error.chpl"
  _ref_tmp__chpl3 = &call_tmp_chpl;
#line 60 "Error.chpl"
  chpl___TILDE_string(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 60 "Error.chpl"
  _end_quote_string_chpl:;
#line 49 "Error.chpl"
  return ret_chpl;
#line 49 "Error.chpl"
}

#line 49 "Error.chpl"
/* Error.chpl:97 */
#line 49 "Error.chpl"
static void ioerror_chpl(syserr error_chpl, string* const msg_chpl, string* const path_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 49 "Error.chpl"
  string local__str_literal_302_chpl;
#line 49 "Error.chpl"
  string local__str_literal_2277_chpl;
#line 49 "Error.chpl"
  string local__str_literal_332_chpl;
#line 49 "Error.chpl"
  int32_t call_tmp_chpl;
#line 49 "Error.chpl"
  chpl_bool call_tmp_chpl2;
#line 49 "Error.chpl"
  int32_t strerror_err_chpl;
#line 49 "Error.chpl"
  string errstr_chpl;
#line 49 "Error.chpl"
  c_string call_tmp_chpl3;
#line 49 "Error.chpl"
  _ref_int32_t _ref_tmp__chpl = NULL;
#line 49 "Error.chpl"
  string call_tmp_chpl4;
#line 49 "Error.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
#line 49 "Error.chpl"
  string quotedpath_chpl;
#line 49 "Error.chpl"
  int64_t ret_chpl;
#line 49 "Error.chpl"
  c_string call_tmp_chpl5;
#line 49 "Error.chpl"
  string call_tmp_chpl6;
#line 49 "Error.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
#line 49 "Error.chpl"
  string err_msg_chpl;
#line 49 "Error.chpl"
  string type_tmp_chpl;
#line 49 "Error.chpl"
  string this_chpl;
#line 49 "Error.chpl"
  c_ptr_uint8_t call_tmp_chpl7 = NULL;
#line 49 "Error.chpl"
  int32_t default_arglocale_id_chpl;
#line 49 "Error.chpl"
  string wrap_call_tmp_chpl;
#line 49 "Error.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl3 = NULL;
#line 49 "Error.chpl"
  string call_tmp_chpl8;
#line 49 "Error.chpl"
  string _autoCopy_tmp__chpl;
#line 49 "Error.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl4 = NULL;
#line 49 "Error.chpl"
  string call_tmp_chpl9;
#line 49 "Error.chpl"
  string _autoCopy_tmp__chpl2;
#line 49 "Error.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl5 = NULL;
#line 49 "Error.chpl"
  string call_tmp_chpl10;
#line 49 "Error.chpl"
  string _autoCopy_tmp__chpl3;
#line 49 "Error.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl6 = NULL;
#line 49 "Error.chpl"
  string call_tmp_chpl11;
#line 49 "Error.chpl"
  string _autoCopy_tmp__chpl4;
#line 49 "Error.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl7 = NULL;
#line 49 "Error.chpl"
  _ref_string _ref_tmp__chpl2 = NULL;
#line 49 "Error.chpl"
  int32_t coerce_tmp_chpl;
#line 49 "Error.chpl"
  chpl_bool call_tmp_chpl12;
#line 49 "Error.chpl"
  c_ptr_uint8_t coerce_tmp_chpl2 = NULL;
#line 49 "Error.chpl"
  c_string call_tmp_chpl13;
#line 49 "Error.chpl"
  _ref_string _ref_tmp__chpl3 = NULL;
#line 49 "Error.chpl"
  _ref_string _ref_tmp__chpl4 = NULL;
#line 49 "Error.chpl"
  _ref_string _ref_tmp__chpl5 = NULL;
#line 49 "Error.chpl"
  _ref_string _ref_tmp__chpl6 = NULL;
#line 49 "Error.chpl"
  _ref_string _ref_tmp__chpl7 = NULL;
#line 49 "Error.chpl"
  _ref_string _ref_tmp__chpl8 = NULL;
#line 49 "Error.chpl"
  _ref_string _ref_tmp__chpl9 = NULL;
#line 104 "Error.chpl"
  local__str_literal_302_chpl = _str_literal_302;
#line 103 "Error.chpl"
  local__str_literal_2277_chpl = _str_literal_2277;
#line 103 "Error.chpl"
  local__str_literal_332_chpl = _str_literal_332;
#line 99 "Error.chpl"
  call_tmp_chpl = qio_err_iserr(error_chpl);
#line 99 "Error.chpl"
  call_tmp_chpl2 = (call_tmp_chpl != INT32(0));
#line 99 "Error.chpl"
  if (call_tmp_chpl2) /* ZLINE: 100 /home/agobin/Documents/chapel-1.13.0/modules/standard/Error.chpl */
#line 99 "Error.chpl"
  {
#line 100 "Error.chpl"
    strerror_err_chpl = INT32(0);
#line 101 "Error.chpl"
    _ref_tmp__chpl = &strerror_err_chpl;
#line 101 "Error.chpl"
    call_tmp_chpl3 = sys_strerror_syserr_str(error_chpl, _ref_tmp__chpl);
#line 101 "Error.chpl"
    ret_to_arg_ref_tmp__chpl = &call_tmp_chpl4;
#line 101 "Error.chpl"
    _cast(call_tmp_chpl3, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 101 "Error.chpl"
    errstr_chpl = call_tmp_chpl4;
#line 102 "Error.chpl"
    ret_chpl = (path_chpl)->len;
#line 102 "Error.chpl"
    call_tmp_chpl5 = quote_string_chpl(path_chpl, ret_chpl, _ln_chpl, _fn_chpl);
#line 102 "Error.chpl"
    ret_to_arg_ref_tmp__chpl2 = &call_tmp_chpl6;
#line 102 "Error.chpl"
    _cast(call_tmp_chpl5, ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 102 "Error.chpl"
    quotedpath_chpl = call_tmp_chpl6;
#line 103 "Error.chpl"
    (&this_chpl)->len = INT64(0);
#line 103 "Error.chpl"
    (&this_chpl)->_size = INT64(0);
#line 103 "Error.chpl"
    (&this_chpl)->buff = nil;
#line 103 "Error.chpl"
    (&this_chpl)->owned = UINT8(false);
#line 103 "Error.chpl"
    (&this_chpl)->locale_id = INT32(0);
#line 103 "Error.chpl"
    (&this_chpl)->len = INT64(0);
#line 103 "Error.chpl"
    (&this_chpl)->_size = INT64(0);
#line 103 "Error.chpl"
    call_tmp_chpl7 = ((c_ptr_uint8_t)(nil));
#line 103 "Error.chpl"
    (&this_chpl)->buff = call_tmp_chpl7;
#line 103 "Error.chpl"
    (&this_chpl)->owned = UINT8(true);
#line 103 "Error.chpl"
    default_arglocale_id_chpl = chpl_nodeID;
#line 103 "Error.chpl"
    (&this_chpl)->locale_id = default_arglocale_id_chpl;
#line 103 "Error.chpl"
    ret_to_arg_ref_tmp__chpl3 = &wrap_call_tmp_chpl;
#line 103 "Error.chpl"
    _construct_string(INT64(0), INT64(0), call_tmp_chpl7, UINT8(true), default_arglocale_id_chpl, &this_chpl, ret_to_arg_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    type_tmp_chpl = wrap_call_tmp_chpl;
#line 103 "Error.chpl"
    ret_to_arg_ref_tmp__chpl4 = &_autoCopy_tmp__chpl;
#line 103 "Error.chpl"
    chpl___PLUS_(&call_tmp_chpl4, &local__str_literal_332_chpl, ret_to_arg_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    call_tmp_chpl8 = _autoCopy_tmp__chpl;
#line 103 "Error.chpl"
    ret_to_arg_ref_tmp__chpl5 = &_autoCopy_tmp__chpl2;
#line 103 "Error.chpl"
    chpl___PLUS_(&_autoCopy_tmp__chpl, msg_chpl, ret_to_arg_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    call_tmp_chpl9 = _autoCopy_tmp__chpl2;
#line 103 "Error.chpl"
    ret_to_arg_ref_tmp__chpl6 = &_autoCopy_tmp__chpl3;
#line 103 "Error.chpl"
    chpl___PLUS_(&_autoCopy_tmp__chpl2, &local__str_literal_2277_chpl, ret_to_arg_ref_tmp__chpl6, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    call_tmp_chpl10 = _autoCopy_tmp__chpl3;
#line 103 "Error.chpl"
    ret_to_arg_ref_tmp__chpl7 = &_autoCopy_tmp__chpl4;
#line 103 "Error.chpl"
    chpl___PLUS_(&_autoCopy_tmp__chpl3, &call_tmp_chpl6, ret_to_arg_ref_tmp__chpl7, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    call_tmp_chpl11 = _autoCopy_tmp__chpl4;
#line 103 "Error.chpl"
    _ref_tmp__chpl2 = &type_tmp_chpl;
#line 103 "Error.chpl"
    chpl___ASSIGN_2(_ref_tmp__chpl2, &_autoCopy_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    err_msg_chpl = type_tmp_chpl;
#line 104 "Error.chpl"
    coerce_tmp_chpl = (&err_msg_chpl)->locale_id;
#line 104 "Error.chpl"
    call_tmp_chpl12 = (coerce_tmp_chpl != chpl_nodeID);
#line 104 "Error.chpl"
    if (call_tmp_chpl12) /* ZLINE: 104 /home/agobin/Documents/chapel-1.13.0/modules/standard/Error.chpl */
#line 104 "Error.chpl"
    {
#line 104 "Error.chpl"
      halt(&local__str_literal_302_chpl, _ln_chpl, _fn_chpl);
#line 104 "Error.chpl"
    }
#line 104 "Error.chpl"
    coerce_tmp_chpl2 = (&err_msg_chpl)->buff;
#line 104 "Error.chpl"
    call_tmp_chpl13 = ((c_string)(coerce_tmp_chpl2));
#line 104 "Error.chpl"
    chpl_error(call_tmp_chpl13, _ln_chpl, _fn_chpl);
#line 101 "Error.chpl"
    _ref_tmp__chpl3 = &errstr_chpl;
#line 101 "Error.chpl"
    chpl___TILDE_string(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 102 "Error.chpl"
    _ref_tmp__chpl4 = &quotedpath_chpl;
#line 102 "Error.chpl"
    chpl___TILDE_string(_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    _ref_tmp__chpl5 = &err_msg_chpl;
#line 103 "Error.chpl"
    chpl___TILDE_string(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    _ref_tmp__chpl6 = &call_tmp_chpl8;
#line 103 "Error.chpl"
    chpl___TILDE_string(_ref_tmp__chpl6, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    _ref_tmp__chpl7 = &call_tmp_chpl9;
#line 103 "Error.chpl"
    chpl___TILDE_string(_ref_tmp__chpl7, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    _ref_tmp__chpl8 = &call_tmp_chpl10;
#line 103 "Error.chpl"
    chpl___TILDE_string(_ref_tmp__chpl8, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    _ref_tmp__chpl9 = &call_tmp_chpl11;
#line 103 "Error.chpl"
    chpl___TILDE_string(_ref_tmp__chpl9, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
  }
#line 97 "Error.chpl"
  return;
#line 97 "Error.chpl"
}


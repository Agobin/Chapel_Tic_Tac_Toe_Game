/* Error.chpl:38 */
static void chpl__init_Error(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 38 "Error.chpl"
  if (chpl__init_Error_p) /* ZLINE: 38 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Error.chpl */
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
  chpl__init_Error_p = true;
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
static c_string quote_string_chpl(chpl_string s_chpl, int64_t len_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 38 "Error.chpl"
  c_void_ptr local_c_nil_chpl;
#line 38 "Error.chpl"
  c_string ret_chpl;
#line 38 "Error.chpl"
  c_string ret_chpl2;
#line 38 "Error.chpl"
  c_string call_tmp_chpl;
#line 38 "Error.chpl"
  syserr call_tmp_chpl2;
#line 38 "Error.chpl"
  _ref_c_string _ref_tmp__chpl = NULL;
#line 38 "Error.chpl"
  int32_t call_tmp_chpl3;
#line 38 "Error.chpl"
  chpl_bool call_tmp_chpl4;
#line 38 "Error.chpl"
  c_string call_tmp_chpl5;
#line 60 "Error.chpl"
  local_c_nil_chpl = c_nil;
#line 56 "Error.chpl"
  ret_chpl2 = "";
#line 60 "Error.chpl"
  c_string_from_string(&call_tmp_chpl, &s_chpl, _ln_chpl, _fn_chpl);
#line 58 "Error.chpl"
  _ref_tmp__chpl = &ret_chpl2;
#line 58 "Error.chpl"
  call_tmp_chpl2 = qio_quote_string(UINT8(34), UINT8(34), QIO_STRING_FORMAT_CHPL, call_tmp_chpl, len_chpl, _ref_tmp__chpl, local_c_nil_chpl);
#line 65 "Error.chpl"
  call_tmp_chpl3 = qio_err_iserr(call_tmp_chpl2);
#line 65 "Error.chpl"
  call_tmp_chpl4 = (call_tmp_chpl3 != INT32(0));
#line 65 "Error.chpl"
  if (call_tmp_chpl4) /* ZLINE: 65 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Error.chpl */
#line 65 "Error.chpl"
  {
#line 65 "Error.chpl"
    call_tmp_chpl5 = qio_strdup("<error>");
#line 65 "Error.chpl"
    ret_chpl = call_tmp_chpl5;
#line 65 "Error.chpl"
    goto _end_quote_string_chpl;
#line 65 "Error.chpl"
  }
#line 66 "Error.chpl"
  ret_chpl = ret_chpl2;
#line 66 "Error.chpl"
  _end_quote_string_chpl:;
#line 49 "Error.chpl"
  return ret_chpl;
#line 49 "Error.chpl"
}

#line 49 "Error.chpl"
/* Error.chpl:96 */
#line 49 "Error.chpl"
static void ioerror_chpl(syserr error_chpl, chpl_string msg_chpl, chpl_string path_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 49 "Error.chpl"
  int32_t call_tmp_chpl;
#line 49 "Error.chpl"
  chpl_bool call_tmp_chpl2;
#line 49 "Error.chpl"
  int32_t strerror_err_chpl;
#line 49 "Error.chpl"
  c_string call_tmp_chpl3;
#line 49 "Error.chpl"
  _ref_int32_t _ref_tmp__chpl = NULL;
#line 49 "Error.chpl"
  c_string call_tmp_chpl4;
#line 49 "Error.chpl"
  int64_t call_tmp_chpl5;
#line 49 "Error.chpl"
  c_string call_tmp_chpl6;
#line 49 "Error.chpl"
  c_string_copy call_tmp_chpl7;
#line 49 "Error.chpl"
  c_string call_tmp_chpl8;
#line 49 "Error.chpl"
  c_string call_tmp_chpl9;
#line 49 "Error.chpl"
  c_string_copy call_tmp_chpl10;
#line 49 "Error.chpl"
  c_string call_tmp_chpl11;
#line 49 "Error.chpl"
  c_string_copy call_tmp_chpl12;
#line 49 "Error.chpl"
  c_string call_tmp_chpl13;
#line 49 "Error.chpl"
  c_string_copy call_tmp_chpl14;
#line 98 "Error.chpl"
  call_tmp_chpl = qio_err_iserr(error_chpl);
#line 98 "Error.chpl"
  call_tmp_chpl2 = (call_tmp_chpl != INT32(0));
#line 98 "Error.chpl"
  if (call_tmp_chpl2) /* ZLINE: 99 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Error.chpl */
#line 98 "Error.chpl"
  {
#line 101 "Error.chpl"
    strerror_err_chpl = INT32(0);
#line 102 "Error.chpl"
    _ref_tmp__chpl = &strerror_err_chpl;
#line 102 "Error.chpl"
    call_tmp_chpl3 = sys_strerror_syserr_str(error_chpl, _ref_tmp__chpl);
#line 103 "Error.chpl"
    c_string_from_string(&call_tmp_chpl4, &path_chpl, _ln_chpl, _fn_chpl);
#line 103 "Error.chpl"
    call_tmp_chpl5 = string_length(call_tmp_chpl4);
#line 103 "Error.chpl"
    call_tmp_chpl6 = quote_string_chpl(path_chpl, call_tmp_chpl5, _ln_chpl, _fn_chpl);
#line 104 "Error.chpl"
    call_tmp_chpl7 = string_concat(call_tmp_chpl3, " ", _ln_chpl, _fn_chpl);
#line 104 "Error.chpl"
    c_string_from_string(&call_tmp_chpl8, &msg_chpl, _ln_chpl, _fn_chpl);
#line 104 "Error.chpl"
    call_tmp_chpl9 = ((c_string)(call_tmp_chpl7));
#line 104 "Error.chpl"
    call_tmp_chpl10 = string_concat(call_tmp_chpl9, call_tmp_chpl8, _ln_chpl, _fn_chpl);
#line 104 "Error.chpl"
    call_tmp_chpl11 = ((c_string)(call_tmp_chpl10));
#line 104 "Error.chpl"
    call_tmp_chpl12 = string_concat(call_tmp_chpl11, " with path ", _ln_chpl, _fn_chpl);
#line 104 "Error.chpl"
    call_tmp_chpl13 = ((c_string)(call_tmp_chpl12));
#line 104 "Error.chpl"
    call_tmp_chpl14 = string_concat(call_tmp_chpl13, call_tmp_chpl6, _ln_chpl, _fn_chpl);
#line 104 "Error.chpl"
    chpl_error(call_tmp_chpl14, _ln_chpl, _fn_chpl);
#line 104 "Error.chpl"
  }
#line 96 "Error.chpl"
  return;
#line 96 "Error.chpl"
}


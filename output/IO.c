/* IO.chpl:1133 */
static void chpl__init_IO(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  int32_t const_tmp_chpl;
  int32_t const_tmp_chpl2;
  int32_t const_tmp_chpl3;
  int32_t const_tmp_chpl4;
  chpl_string type_tmp_chpl;
  chpl_string ret_chpl;
  _ref_chpl_string _ref_tmp__chpl = NULL;
  chpl_string call_tmp_chpl;
  chpl_string type_tmp_chpl2;
  chpl_string ret_chpl2;
  _ref_chpl_string _ref_tmp__chpl2 = NULL;
  chpl_string call_tmp_chpl2;
  chpl_string type_tmp_chpl3;
  chpl_string ret_chpl3;
  _ref_chpl_string _ref_tmp__chpl3 = NULL;
  chpl_string call_tmp_chpl3;
  chpl_string type_tmp_chpl4;
  chpl_string ret_chpl4;
  _ref_chpl_string _ref_tmp__chpl4 = NULL;
  chpl_string call_tmp_chpl4;
  chpl_string call_tmp_chpl5;
  chpl_string call_tmp_chpl6;
  chpl_string call_tmp_chpl7;
  chpl_string call_tmp_chpl8;
  chpl_string call_tmp_chpl9;
  chpl_string call_tmp_chpl10;
  channel_F_dynamic_T_chpl type_tmp_chpl5;
  channel_F_dynamic_T_chpl this_chpl;
  locale call_tmp_chpl11 = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl;
  file_chpl call_tmp_chpl12;
  int32_t call_tmp_chpl13;
  int32_t default_arghints_chpl;
  iostyle default_argstyle_chpl;
  _ref_iostyle ret_to_arg_ref_tmp__chpl = NULL;
  file_chpl wrap_call_tmp_chpl2;
  _ref_file ret_to_arg_ref_tmp__chpl2 = NULL;
  file_chpl call_tmp_chpl14;
  _ref_file _ref_tmp__chpl5 = NULL;
  channel_F_dynamic_T_chpl call_tmp_chpl15;
  _ref_file _ref_tmp__chpl6 = NULL;
  int32_t default_arghints_chpl2;
  iostyle default_argstyle_chpl2;
  _ref_iostyle ret_to_arg_ref_tmp__chpl3 = NULL;
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl3;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl4 = NULL;
  channel_F_dynamic_T_chpl call_tmp_chpl16;
  _ref_channel_F_dynamic_T _ref_tmp__chpl7 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl8 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl9 = NULL;
  _ref_file _ref_tmp__chpl10 = NULL;
  channel_T_dynamic_T_chpl type_tmp_chpl6;
  channel_T_dynamic_T_chpl this_chpl2;
  locale call_tmp_chpl17 = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl2;
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl4;
  _cfile call_tmp_chpl18;
  file_chpl call_tmp_chpl19;
  int32_t default_arghints_chpl3;
  iostyle default_argstyle_chpl3;
  _ref_iostyle ret_to_arg_ref_tmp__chpl5 = NULL;
  file_chpl wrap_call_tmp_chpl5;
  _ref_file ret_to_arg_ref_tmp__chpl6 = NULL;
  file_chpl call_tmp_chpl20;
  _ref_file _ref_tmp__chpl11 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl21;
  _ref_file _ref_tmp__chpl12 = NULL;
  iostyle default_argstyle_chpl4;
  _ref_iostyle ret_to_arg_ref_tmp__chpl7 = NULL;
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl6;
  int32_t call_tmp_chpl22;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl8 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl23;
  _ref_channel_T_dynamic_T _ref_tmp__chpl13 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl14 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl15 = NULL;
  _ref_file _ref_tmp__chpl16 = NULL;
  channel_T_dynamic_T_chpl type_tmp_chpl7;
  channel_T_dynamic_T_chpl this_chpl3;
  locale call_tmp_chpl24 = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl3;
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl7;
  _cfile call_tmp_chpl25;
  file_chpl call_tmp_chpl26;
  int32_t default_arghints_chpl4;
  iostyle default_argstyle_chpl5;
  _ref_iostyle ret_to_arg_ref_tmp__chpl9 = NULL;
  file_chpl wrap_call_tmp_chpl8;
  _ref_file ret_to_arg_ref_tmp__chpl10 = NULL;
  file_chpl call_tmp_chpl27;
  _ref_file _ref_tmp__chpl17 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl28;
  _ref_file _ref_tmp__chpl18 = NULL;
  iostyle default_argstyle_chpl6;
  _ref_iostyle ret_to_arg_ref_tmp__chpl11 = NULL;
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl9;
  int32_t call_tmp_chpl29;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl12 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl30;
  _ref_channel_T_dynamic_T _ref_tmp__chpl19 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl20 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl21 = NULL;
  _ref_file _ref_tmp__chpl22 = NULL;
#line 1133 "IO.chpl"
  if (chpl__init_IO_p) /* ZLINE: 1133 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 1133 "IO.chpl"
  {
#line 1133 "IO.chpl"
    goto _exit_chpl__init_IO_chpl;
#line 1133 "IO.chpl"
  }
#line 1133 "IO.chpl"
  modFormatStr_chpl = "%*s\n";
#line 1133 "IO.chpl"
  modStr_chpl = "IO";
#line 1133 "IO.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(2), _ln_chpl, _fn_chpl);
#line 1133 "IO.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 1133 "IO.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 1133 "IO.chpl"
  chpl__init_IO_p = true;
#line 1133 "IO.chpl"
  {
#line 1133 "IO.chpl"
    chpl__init_SysBasic(_ln_chpl, _fn_chpl);
#line 1133 "IO.chpl"
    chpl__init_Error(_ln_chpl, _fn_chpl);
#line 1133 "IO.chpl"
    chpl__init_Regexp(_ln_chpl, _fn_chpl);
#line 1133 "IO.chpl"
  }
#line 1405 "IO.chpl"
  IOHINT_NONE_chpl = INT32(0);
#line 1408 "IO.chpl"
  const_tmp_chpl = QIO_HINT_RANDOM;
#line 1408 "IO.chpl"
  IOHINT_RANDOM_chpl = const_tmp_chpl;
#line 1413 "IO.chpl"
  const_tmp_chpl2 = QIO_HINT_SEQUENTIAL;
#line 1413 "IO.chpl"
  IOHINT_SEQUENTIAL_chpl = const_tmp_chpl2;
#line 1419 "IO.chpl"
  const_tmp_chpl3 = QIO_HINT_CACHED;
#line 1419 "IO.chpl"
  IOHINT_CACHED_chpl = const_tmp_chpl3;
#line 1426 "IO.chpl"
  const_tmp_chpl4 = QIO_HINT_PARALLEL;
#line 1426 "IO.chpl"
  IOHINT_PARALLEL_chpl = const_tmp_chpl4;
#line 2187 "IO.chpl"
  ret_chpl = defaultStringValue;
#line 2187 "IO.chpl"
  type_tmp_chpl = ret_chpl;
#line 2187 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 2187 "IO.chpl"
  string_from_c_string(&call_tmp_chpl, "r", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 2187 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl;
#line 2187 "IO.chpl"
  _r_chpl = type_tmp_chpl;
#line 2188 "IO.chpl"
  ret_chpl2 = defaultStringValue;
#line 2188 "IO.chpl"
  type_tmp_chpl2 = ret_chpl2;
#line 2188 "IO.chpl"
  _ref_tmp__chpl2 = &type_tmp_chpl2;
#line 2188 "IO.chpl"
  string_from_c_string(&call_tmp_chpl2, "r+", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 2188 "IO.chpl"
  *(_ref_tmp__chpl2) = call_tmp_chpl2;
#line 2188 "IO.chpl"
  _rw_chpl = type_tmp_chpl2;
#line 2189 "IO.chpl"
  ret_chpl3 = defaultStringValue;
#line 2189 "IO.chpl"
  type_tmp_chpl3 = ret_chpl3;
#line 2189 "IO.chpl"
  _ref_tmp__chpl3 = &type_tmp_chpl3;
#line 2189 "IO.chpl"
  string_from_c_string(&call_tmp_chpl3, "w", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 2189 "IO.chpl"
  *(_ref_tmp__chpl3) = call_tmp_chpl3;
#line 2189 "IO.chpl"
  _cw_chpl = type_tmp_chpl3;
#line 2190 "IO.chpl"
  ret_chpl4 = defaultStringValue;
#line 2190 "IO.chpl"
  type_tmp_chpl4 = ret_chpl4;
#line 2190 "IO.chpl"
  _ref_tmp__chpl4 = &type_tmp_chpl4;
#line 2190 "IO.chpl"
  string_from_c_string(&call_tmp_chpl4, "w+", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 2190 "IO.chpl"
  *(_ref_tmp__chpl4) = call_tmp_chpl4;
#line 2190 "IO.chpl"
  _cwr_chpl = type_tmp_chpl4;
#line 3695 "IO.chpl"
  string_from_c_string(&call_tmp_chpl5, "a", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 3695 "IO.chpl"
  string_from_c_string(&call_tmp_chpl6, "b", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 3695 "IO.chpl"
  string_from_c_string(&call_tmp_chpl7, "c", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 3695 "IO.chpl"
  string_from_c_string(&call_tmp_chpl8, "d", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 3695 "IO.chpl"
  string_from_c_string(&call_tmp_chpl9, "e", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 3695 "IO.chpl"
  string_from_c_string(&call_tmp_chpl10, "f", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 3695 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(0)) = call_tmp_chpl5;
#line 3695 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(1)) = call_tmp_chpl6;
#line 3695 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(2)) = call_tmp_chpl7;
#line 3695 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(3)) = call_tmp_chpl8;
#line 3695 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(4)) = call_tmp_chpl9;
#line 3695 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(5)) = call_tmp_chpl10;
#line 4491 "IO.chpl"
  (&this_chpl)->home_chpl = nil;
#line 4491 "IO.chpl"
  call_tmp_chpl11 = ((locale)(nil));
#line 4491 "IO.chpl"
  (&this_chpl)->home_chpl = call_tmp_chpl11;
#line 4491 "IO.chpl"
  default_arg_channel_internal_chpl = QIO_CHANNEL_PTR_NULL;
#line 4491 "IO.chpl"
  (&this_chpl)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 4491 "IO.chpl"
  wrap_call_tmp_chpl = _construct_channel_chpl2(call_tmp_chpl11, default_arg_channel_internal_chpl, &this_chpl, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  type_tmp_chpl5 = wrap_call_tmp_chpl;
#line 4491 "IO.chpl"
  call_tmp_chpl13 = ((int32_t)(INT64(0)));
#line 4491 "IO.chpl"
  default_arghints_chpl = IOHINT_NONE_chpl;
#line 4491 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &default_argstyle_chpl;
#line 4491 "IO.chpl"
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  ret_to_arg_ref_tmp__chpl2 = &wrap_call_tmp_chpl2;
#line 4491 "IO.chpl"
  openfd_chpl2(call_tmp_chpl13, default_arghints_chpl, &default_argstyle_chpl, ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  call_tmp_chpl14 = chpl__initCopy3(&wrap_call_tmp_chpl2, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  call_tmp_chpl12 = call_tmp_chpl14;
#line 4491 "IO.chpl"
  _ref_tmp__chpl5 = &wrap_call_tmp_chpl2;
#line 4491 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  _ref_tmp__chpl6 = &call_tmp_chpl12;
#line 4491 "IO.chpl"
  default_arghints_chpl2 = IOHINT_NONE_chpl;
#line 4491 "IO.chpl"
  ret_to_arg_ref_tmp__chpl3 = &default_argstyle_chpl2;
#line 4491 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl6, INT64(4491), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 4491 "IO.chpl"
  _style_chpl(_ref_tmp__chpl6, ret_to_arg_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  ret_to_arg_ref_tmp__chpl4 = &wrap_call_tmp_chpl3;
#line 4491 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl6, INT64(4491), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 4491 "IO.chpl"
  reader_chpl2(_ref_tmp__chpl6, INT64(0), INT64(9223372036854775807), default_arghints_chpl2, &default_argstyle_chpl2, ret_to_arg_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  call_tmp_chpl16 = chpl__initCopy5(&wrap_call_tmp_chpl3, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  call_tmp_chpl15 = call_tmp_chpl16;
#line 4491 "IO.chpl"
  _ref_tmp__chpl7 = &wrap_call_tmp_chpl3;
#line 4491 "IO.chpl"
  chpl___TILDE_channel(_ref_tmp__chpl7, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  _ref_tmp__chpl8 = &type_tmp_chpl5;
#line 4491 "IO.chpl"
  chpl___ASSIGN_4(_ref_tmp__chpl8, &call_tmp_chpl16, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  _ref_tmp__chpl9 = &call_tmp_chpl15;
#line 4491 "IO.chpl"
  chpl___TILDE_channel(_ref_tmp__chpl9, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  _ref_tmp__chpl10 = &call_tmp_chpl12;
#line 4491 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl10, _ln_chpl, _fn_chpl);
#line 4491 "IO.chpl"
  stdin_chpl = type_tmp_chpl5;
#line 4493 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 4493 "IO.chpl"
  call_tmp_chpl17 = ((locale)(nil));
#line 4493 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl17;
#line 4493 "IO.chpl"
  default_arg_channel_internal_chpl2 = QIO_CHANNEL_PTR_NULL;
#line 4493 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl2;
#line 4493 "IO.chpl"
  wrap_call_tmp_chpl4 = _construct_channel_chpl(call_tmp_chpl17, default_arg_channel_internal_chpl2, &this_chpl2, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  type_tmp_chpl6 = wrap_call_tmp_chpl4;
#line 4493 "IO.chpl"
  call_tmp_chpl18 = chpl_cstdout();
#line 4493 "IO.chpl"
  default_arghints_chpl3 = IOHINT_NONE_chpl;
#line 4493 "IO.chpl"
  ret_to_arg_ref_tmp__chpl5 = &default_argstyle_chpl3;
#line 4493 "IO.chpl"
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  ret_to_arg_ref_tmp__chpl6 = &wrap_call_tmp_chpl5;
#line 4493 "IO.chpl"
  openfp_chpl2(call_tmp_chpl18, default_arghints_chpl3, &default_argstyle_chpl3, ret_to_arg_ref_tmp__chpl6, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  call_tmp_chpl20 = chpl__initCopy3(&wrap_call_tmp_chpl5, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  call_tmp_chpl19 = call_tmp_chpl20;
#line 4493 "IO.chpl"
  _ref_tmp__chpl11 = &wrap_call_tmp_chpl5;
#line 4493 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl11, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  _ref_tmp__chpl12 = &call_tmp_chpl19;
#line 4493 "IO.chpl"
  ret_to_arg_ref_tmp__chpl7 = &default_argstyle_chpl4;
#line 4493 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl12, INT64(4493), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 4493 "IO.chpl"
  _style_chpl(_ref_tmp__chpl12, ret_to_arg_ref_tmp__chpl7, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  call_tmp_chpl22 = ((int32_t)(INT64(0)));
#line 4493 "IO.chpl"
  ret_to_arg_ref_tmp__chpl8 = &wrap_call_tmp_chpl6;
#line 4493 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl12, INT64(4493), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 4493 "IO.chpl"
  writer_chpl2(_ref_tmp__chpl12, INT64(0), INT64(9223372036854775807), call_tmp_chpl22, &default_argstyle_chpl4, ret_to_arg_ref_tmp__chpl8, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  call_tmp_chpl23 = chpl__initCopy4(&wrap_call_tmp_chpl6, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  call_tmp_chpl21 = call_tmp_chpl23;
#line 4493 "IO.chpl"
  _ref_tmp__chpl13 = &wrap_call_tmp_chpl6;
#line 4493 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl13, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  _ref_tmp__chpl14 = &type_tmp_chpl6;
#line 4493 "IO.chpl"
  chpl___ASSIGN_3(_ref_tmp__chpl14, &call_tmp_chpl23, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  _ref_tmp__chpl15 = &call_tmp_chpl21;
#line 4493 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl15, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  _ref_tmp__chpl16 = &call_tmp_chpl19;
#line 4493 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl16, _ln_chpl, _fn_chpl);
#line 4493 "IO.chpl"
  stdout_chpl = type_tmp_chpl6;
#line 4495 "IO.chpl"
  (&this_chpl3)->home_chpl = nil;
#line 4495 "IO.chpl"
  call_tmp_chpl24 = ((locale)(nil));
#line 4495 "IO.chpl"
  (&this_chpl3)->home_chpl = call_tmp_chpl24;
#line 4495 "IO.chpl"
  default_arg_channel_internal_chpl3 = QIO_CHANNEL_PTR_NULL;
#line 4495 "IO.chpl"
  (&this_chpl3)->_channel_internal_chpl = default_arg_channel_internal_chpl3;
#line 4495 "IO.chpl"
  wrap_call_tmp_chpl7 = _construct_channel_chpl(call_tmp_chpl24, default_arg_channel_internal_chpl3, &this_chpl3, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  type_tmp_chpl7 = wrap_call_tmp_chpl7;
#line 4495 "IO.chpl"
  call_tmp_chpl25 = chpl_cstderr();
#line 4495 "IO.chpl"
  default_arghints_chpl4 = IOHINT_NONE_chpl;
#line 4495 "IO.chpl"
  ret_to_arg_ref_tmp__chpl9 = &default_argstyle_chpl5;
#line 4495 "IO.chpl"
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl9, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  ret_to_arg_ref_tmp__chpl10 = &wrap_call_tmp_chpl8;
#line 4495 "IO.chpl"
  openfp_chpl2(call_tmp_chpl25, default_arghints_chpl4, &default_argstyle_chpl5, ret_to_arg_ref_tmp__chpl10, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  call_tmp_chpl27 = chpl__initCopy3(&wrap_call_tmp_chpl8, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  call_tmp_chpl26 = call_tmp_chpl27;
#line 4495 "IO.chpl"
  _ref_tmp__chpl17 = &wrap_call_tmp_chpl8;
#line 4495 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl17, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  _ref_tmp__chpl18 = &call_tmp_chpl26;
#line 4495 "IO.chpl"
  ret_to_arg_ref_tmp__chpl11 = &default_argstyle_chpl6;
#line 4495 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl18, INT64(4495), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 4495 "IO.chpl"
  _style_chpl(_ref_tmp__chpl18, ret_to_arg_ref_tmp__chpl11, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  call_tmp_chpl29 = ((int32_t)(INT64(0)));
#line 4495 "IO.chpl"
  ret_to_arg_ref_tmp__chpl12 = &wrap_call_tmp_chpl9;
#line 4495 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl18, INT64(4495), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 4495 "IO.chpl"
  writer_chpl2(_ref_tmp__chpl18, INT64(0), INT64(9223372036854775807), call_tmp_chpl29, &default_argstyle_chpl6, ret_to_arg_ref_tmp__chpl12, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  call_tmp_chpl30 = chpl__initCopy4(&wrap_call_tmp_chpl9, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  call_tmp_chpl28 = call_tmp_chpl30;
#line 4495 "IO.chpl"
  _ref_tmp__chpl19 = &wrap_call_tmp_chpl9;
#line 4495 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl19, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  _ref_tmp__chpl20 = &type_tmp_chpl7;
#line 4495 "IO.chpl"
  chpl___ASSIGN_3(_ref_tmp__chpl20, &call_tmp_chpl30, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  _ref_tmp__chpl21 = &call_tmp_chpl28;
#line 4495 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl21, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  _ref_tmp__chpl22 = &call_tmp_chpl26;
#line 4495 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl22, _ln_chpl, _fn_chpl);
#line 4495 "IO.chpl"
  stderr_chpl = type_tmp_chpl7;
#line 1133 "IO.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 1133 "IO.chpl"
  _exit_chpl__init_IO_chpl:;
#line 1133 "IO.chpl"
  return;
#line 1133 "IO.chpl"
}

#line 1133 "IO.chpl"
/* IO.chpl:1821 */
#line 1133 "IO.chpl"
static void defaultIOStyle_chpl(_ref_iostyle _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 1133 "IO.chpl"
  iostyle ret_chpl;
#line 1133 "IO.chpl"
  iostyle type_tmp_chpl;
#line 1133 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 1822 "IO.chpl"
  ret_chpl = type_tmp_chpl;
#line 1823 "IO.chpl"
  _ref_tmp__chpl = &ret_chpl;
#line 1823 "IO.chpl"
  qio_style_init_default(_ref_tmp__chpl);
#line 1821 "IO.chpl"
  *(_retArg_chpl) = ret_chpl;
#line 1821 "IO.chpl"
  return;
#line 1821 "IO.chpl"
}

#line 1821 "IO.chpl"
/* IO.chpl:1954 */
#line 1821 "IO.chpl"
static file_chpl _construct_file_chpl(locale home_chpl, qio_file_ptr_t _file_internal_chpl, file_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 1821 "IO.chpl"
  file_chpl this_chpl;
#line 1954 "IO.chpl"
  this_chpl = *(meme_chpl);
#line 1956 "IO.chpl"
  (&this_chpl)->home_chpl = home_chpl;
#line 1958 "IO.chpl"
  (&this_chpl)->_file_internal_chpl = _file_internal_chpl;
#line 1954 "IO.chpl"
  return this_chpl;
#line 1954 "IO.chpl"
}

#line 1954 "IO.chpl"
/* IO.chpl:1964 */
#line 1954 "IO.chpl"
static file_chpl chpl__initCopy3(file_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 1954 "IO.chpl"
  qio_file_ptr_t ret_chpl;
#line 1966 "IO.chpl"
  ret_chpl = (x_chpl)->_file_internal_chpl;
#line 1966 "IO.chpl"
  qio_file_retain(ret_chpl);
#line 1964 "IO.chpl"
  return *(x_chpl);
#line 1964 "IO.chpl"
}

#line 1964 "IO.chpl"
/* IO.chpl:1972 */
#line 1964 "IO.chpl"
static void chpl___ASSIGN_2(_ref_file ret_chpl, file_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 1964 "IO.chpl"
  qio_file_ptr_t ret_chpl2;
#line 1964 "IO.chpl"
  qio_file_ptr_t ret_chpl3;
#line 1964 "IO.chpl"
  _ref_locale call_tmp_chpl = NULL;
#line 1964 "IO.chpl"
  locale ret_chpl4 = NULL;
#line 1964 "IO.chpl"
  _ref_qio_file_ptr_t call_tmp_chpl2 = NULL;
#line 1964 "IO.chpl"
  qio_file_ptr_t ret_chpl5;
#line 1975 "IO.chpl"
  ret_chpl2 = (x_chpl)->_file_internal_chpl;
#line 1975 "IO.chpl"
  qio_file_retain(ret_chpl2);
#line 1979 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(1979), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 1979 "IO.chpl"
  ret_chpl3 = (ret_chpl)->_file_internal_chpl;
#line 1979 "IO.chpl"
  qio_file_release(ret_chpl3);
#line 1983 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(1983), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 1983 "IO.chpl"
  call_tmp_chpl = &((ret_chpl)->home_chpl);
#line 1983 "IO.chpl"
  ret_chpl4 = (x_chpl)->home_chpl;
#line 1983 "IO.chpl"
  *(call_tmp_chpl) = ret_chpl4;
#line 1984 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(1984), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 1984 "IO.chpl"
  call_tmp_chpl2 = &((ret_chpl)->_file_internal_chpl);
#line 1984 "IO.chpl"
  ret_chpl5 = (x_chpl)->_file_internal_chpl;
#line 1984 "IO.chpl"
  *(call_tmp_chpl2) = ret_chpl5;
#line 1972 "IO.chpl"
  return;
#line 1972 "IO.chpl"
}

#line 1972 "IO.chpl"
/* IO.chpl:1988 */
#line 1972 "IO.chpl"
static void check_chpl(_ref_file this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 1972 "IO.chpl"
  qio_file_ptr_t ret_chpl;
#line 1972 "IO.chpl"
  chpl_bool call_tmp_chpl;
#line 1989 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(1989), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 1989 "IO.chpl"
  ret_chpl = (this_chpl)->_file_internal_chpl;
#line 1989 "IO.chpl"
  call_tmp_chpl = is_c_nil(ret_chpl);
#line 1989 "IO.chpl"
  if (call_tmp_chpl) /* ZLINE: 1990 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 1989 "IO.chpl"
  {
#line 1990 "IO.chpl"
    halt("Operation attempted on an invalid file", _ln_chpl, _fn_chpl);
#line 1990 "IO.chpl"
  }
#line 1988 "IO.chpl"
  return;
#line 1988 "IO.chpl"
}

#line 1988 "IO.chpl"
/* IO.chpl:1995 */
#line 1988 "IO.chpl"
static void chpl___TILDE_file(_ref_file this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 1988 "IO.chpl"
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
#line 1988 "IO.chpl"
  qio_file_ptr_t ret_chpl;
#line 1988 "IO.chpl"
  _ref_qio_file_ptr_t call_tmp_chpl = NULL;
#line 1998 "IO.chpl"
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
#line 1997 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(1997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 1997 "IO.chpl"
  ret_chpl = (this_chpl)->_file_internal_chpl;
#line 1997 "IO.chpl"
  qio_file_release(ret_chpl);
#line 1998 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(1998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 1998 "IO.chpl"
  call_tmp_chpl = &((this_chpl)->_file_internal_chpl);
#line 1998 "IO.chpl"
  *(call_tmp_chpl) = local_QIO_FILE_PTR_NULL_chpl;
#line 1995 "IO.chpl"
  return;
#line 1995 "IO.chpl"
}

#line 1995 "IO.chpl"
/* IO.chpl:2022 */
#line 1995 "IO.chpl"
static void _style_chpl(_ref_file this_chpl, _ref_iostyle _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 1995 "IO.chpl"
  iostyle local_style_chpl;
#line 1995 "IO.chpl"
  iostyle type_tmp_chpl;
#line 1995 "IO.chpl"
  qio_file_ptr_t ret_chpl;
#line 1995 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 2023 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2023), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2023 "IO.chpl"
  check_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 2027 "IO.chpl"
  local_style_chpl = type_tmp_chpl;
#line 2028 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2028), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2028 "IO.chpl"
  ret_chpl = (this_chpl)->_file_internal_chpl;
#line 2028 "IO.chpl"
  _ref_tmp__chpl = &local_style_chpl;
#line 2028 "IO.chpl"
  qio_file_get_style(ret_chpl, _ref_tmp__chpl);
#line 2022 "IO.chpl"
  *(_retArg_chpl) = local_style_chpl;
#line 2022 "IO.chpl"
  return;
#line 2022 "IO.chpl"
}

#line 2022 "IO.chpl"
/* IO.chpl:2117 */
#line 2022 "IO.chpl"
static chpl_string getPath_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2022 "IO.chpl"
  syserr _formal_tmp_error_chpl;
#line 2022 "IO.chpl"
  chpl_string ret_chpl;
#line 2022 "IO.chpl"
  chpl_string ret_chpl2;
#line 2022 "IO.chpl"
  chpl_string ret_chpl3;
#line 2022 "IO.chpl"
  c_string_copy tmp_chpl;
#line 2022 "IO.chpl"
  c_string_copy ret_chpl4;
#line 2022 "IO.chpl"
  c_string_copy tmp2_chpl;
#line 2022 "IO.chpl"
  c_string_copy ret_chpl5;
#line 2022 "IO.chpl"
  qio_file_ptr_t ret_chpl6;
#line 2022 "IO.chpl"
  syserr call_tmp_chpl;
#line 2022 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl = NULL;
#line 2022 "IO.chpl"
  int32_t call_tmp_chpl2;
#line 2022 "IO.chpl"
  chpl_bool call_tmp_chpl3;
#line 2022 "IO.chpl"
  qio_file_ptr_t ret_chpl7;
#line 2022 "IO.chpl"
  syserr call_tmp_chpl4;
#line 2022 "IO.chpl"
  c_string call_tmp_chpl5;
#line 2022 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl2 = NULL;
#line 2022 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl3 = NULL;
#line 2022 "IO.chpl"
  c_string call_tmp_chpl6;
#line 2022 "IO.chpl"
  c_string call_tmp_chpl7;
#line 2022 "IO.chpl"
  int64_t call_tmp_chpl8;
#line 2022 "IO.chpl"
  chpl_bool call_tmp_chpl9;
#line 2022 "IO.chpl"
  int32_t call_tmp_chpl10;
#line 2022 "IO.chpl"
  chpl_bool call_tmp_chpl11;
#line 2022 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl4 = NULL;
#line 2022 "IO.chpl"
  chpl_string call_tmp_chpl12;
#line 2022 "IO.chpl"
  _ref_chpl_string _ref_tmp__chpl5 = NULL;
#line 2022 "IO.chpl"
  chpl_string call_tmp_chpl13;
#line 2118 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2118), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2118 "IO.chpl"
  check_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 2119 "IO.chpl"
  ret_chpl3 = defaultStringValue;
#line 2119 "IO.chpl"
  ret_chpl2 = ret_chpl3;
#line 2121 "IO.chpl"
  ret_chpl4 = NULL;
#line 2121 "IO.chpl"
  tmp_chpl = ret_chpl4;
#line 2122 "IO.chpl"
  ret_chpl5 = NULL;
#line 2122 "IO.chpl"
  tmp2_chpl = ret_chpl5;
#line 2123 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2123), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2123 "IO.chpl"
  ret_chpl6 = (this_chpl)->_file_internal_chpl;
#line 2123 "IO.chpl"
  _ref_tmp__chpl = &tmp_chpl;
#line 2123 "IO.chpl"
  call_tmp_chpl = qio_file_path(ret_chpl6, _ref_tmp__chpl);
#line 2123 "IO.chpl"
  _formal_tmp_error_chpl = call_tmp_chpl;
#line 2124 "IO.chpl"
  call_tmp_chpl2 = qio_err_iserr(call_tmp_chpl);
#line 2124 "IO.chpl"
  call_tmp_chpl3 = (call_tmp_chpl2 == INT32(0));
#line 2124 "IO.chpl"
  if (call_tmp_chpl3) /* ZLINE: 2125 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2124 "IO.chpl"
  {
#line 2125 "IO.chpl"
    chpl_check_nil(this_chpl, INT64(2125), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2125 "IO.chpl"
    ret_chpl7 = (this_chpl)->_file_internal_chpl;
#line 2125 "IO.chpl"
    call_tmp_chpl5 = ((c_string)(tmp_chpl));
#line 2125 "IO.chpl"
    _ref_tmp__chpl2 = &tmp2_chpl;
#line 2125 "IO.chpl"
    call_tmp_chpl4 = qio_shortest_path(ret_chpl7, _ref_tmp__chpl2, call_tmp_chpl5);
#line 2125 "IO.chpl"
    _formal_tmp_error_chpl = call_tmp_chpl4;
#line 2125 "IO.chpl"
  }
#line 2127 "IO.chpl"
  _ref_tmp__chpl3 = &tmp_chpl;
#line 2127 "IO.chpl"
  call_tmp_chpl6 = ((c_string)(tmp_chpl));
#line 2127 "IO.chpl"
  call_tmp_chpl7 = ((c_string)(NULL));
#line 2127 "IO.chpl"
  call_tmp_chpl8 = string_compare(call_tmp_chpl6, call_tmp_chpl7);
#line 2127 "IO.chpl"
  call_tmp_chpl9 = (call_tmp_chpl8 != INT64(0));
#line 2127 "IO.chpl"
  if (call_tmp_chpl9) /* ZLINE: 2127 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2127 "IO.chpl"
  {
#line 2127 "IO.chpl"
    chpl_rt_free_c_string(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 2127 "IO.chpl"
  }
#line 2128 "IO.chpl"
  call_tmp_chpl10 = qio_err_iserr(_formal_tmp_error_chpl);
#line 2128 "IO.chpl"
  call_tmp_chpl11 = (call_tmp_chpl10 == INT32(0));
#line 2128 "IO.chpl"
  if (call_tmp_chpl11) /* ZLINE: 2131 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2128 "IO.chpl"
  {
#line 2131 "IO.chpl"
    _ref_tmp__chpl4 = &tmp2_chpl;
#line 2131 "IO.chpl"
    call_tmp_chpl12 = string_from_c_string_copy(_ref_tmp__chpl4, false, INT64(0));
#line 2131 "IO.chpl"
    ret_chpl2 = call_tmp_chpl12;
#line 2131 "IO.chpl"
  } else /* ZLINE: 2133 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2131 "IO.chpl"
  {
#line 2133 "IO.chpl"
    _ref_tmp__chpl5 = &ret_chpl2;
#line 2133 "IO.chpl"
    string_from_c_string(&call_tmp_chpl13, "unknown", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 2133 "IO.chpl"
    *(_ref_tmp__chpl5) = call_tmp_chpl13;
#line 2133 "IO.chpl"
  }
#line 2136 "IO.chpl"
  ret_chpl = ret_chpl2;
#line 2117 "IO.chpl"
  *(error_chpl) = _formal_tmp_error_chpl;
#line 2117 "IO.chpl"
  return ret_chpl;
#line 2117 "IO.chpl"
}

#line 2117 "IO.chpl"
/* IO.chpl:2145 */
#line 2117 "IO.chpl"
static chpl_string tryGetPath_chpl(_ref_file this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2117 "IO.chpl"
  chpl_string ret_chpl;
#line 2117 "IO.chpl"
  syserr err_chpl;
#line 2117 "IO.chpl"
  syserr type_tmp_chpl;
#line 2117 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 2117 "IO.chpl"
  syserr call_tmp_chpl;
#line 2117 "IO.chpl"
  chpl_string call_tmp_chpl2;
#line 2117 "IO.chpl"
  _ref_syserr _ref_tmp__chpl2 = NULL;
#line 2117 "IO.chpl"
  int32_t call_tmp_chpl3;
#line 2117 "IO.chpl"
  chpl_bool call_tmp_chpl4;
#line 2117 "IO.chpl"
  _ref_chpl_string _ref_tmp__chpl3 = NULL;
#line 2117 "IO.chpl"
  chpl_string call_tmp_chpl5;
#line 2146 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 2146 "IO.chpl"
  call_tmp_chpl = qio_int_to_err(INT32(0));
#line 2146 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl;
#line 2146 "IO.chpl"
  err_chpl = type_tmp_chpl;
#line 2148 "IO.chpl"
  _ref_tmp__chpl2 = &err_chpl;
#line 2148 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2148), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2148 "IO.chpl"
  call_tmp_chpl2 = getPath_chpl(this_chpl, _ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 2149 "IO.chpl"
  call_tmp_chpl3 = qio_err_iserr(err_chpl);
#line 2149 "IO.chpl"
  call_tmp_chpl4 = (call_tmp_chpl3 != INT32(0));
#line 2149 "IO.chpl"
  if (call_tmp_chpl4) /* ZLINE: 2149 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2149 "IO.chpl"
  {
#line 2149 "IO.chpl"
    _ref_tmp__chpl3 = &ret_chpl;
#line 2149 "IO.chpl"
    string_from_c_string(&call_tmp_chpl5, "unknown", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 2149 "IO.chpl"
    *(_ref_tmp__chpl3) = call_tmp_chpl5;
#line 2149 "IO.chpl"
    goto _end_tryGetPath_chpl;
#line 2149 "IO.chpl"
  } else /* ZLINE: 2149 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2149 "IO.chpl"
  {
#line 2150 "IO.chpl"
    ret_chpl = call_tmp_chpl2;
#line 2150 "IO.chpl"
    goto _end_tryGetPath_chpl;
#line 2150 "IO.chpl"
  }
#line 2150 "IO.chpl"
  _end_tryGetPath_chpl:;
#line 2145 "IO.chpl"
  return ret_chpl;
#line 2145 "IO.chpl"
}

#line 2145 "IO.chpl"
/* IO.chpl:2379 */
#line 2145 "IO.chpl"
static void openfd_chpl(int32_t fd_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2145 "IO.chpl"
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
#line 2145 "IO.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 2145 "IO.chpl"
  file_chpl ret_chpl;
#line 2145 "IO.chpl"
  file_chpl this_chpl;
#line 2145 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 2145 "IO.chpl"
  chpl_localeID_t call_tmp_chpl;
#line 2145 "IO.chpl"
  chpl_localeID_t call_tmp_chpl2;
#line 2145 "IO.chpl"
  locale call_tmp_chpl3 = NULL;
#line 2145 "IO.chpl"
  qio_file_ptr_t default_arg_file_internal_chpl;
#line 2145 "IO.chpl"
  file_chpl wrap_call_tmp_chpl;
#line 2145 "IO.chpl"
  iostyle local_style_chpl;
#line 2145 "IO.chpl"
  file_chpl ret_chpl2;
#line 2145 "IO.chpl"
  file_chpl this_chpl2;
#line 2145 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl2;
#line 2145 "IO.chpl"
  chpl_localeID_t call_tmp_chpl4;
#line 2145 "IO.chpl"
  chpl_localeID_t call_tmp_chpl5;
#line 2145 "IO.chpl"
  locale call_tmp_chpl6 = NULL;
#line 2145 "IO.chpl"
  qio_file_ptr_t default_arg_file_internal_chpl2;
#line 2145 "IO.chpl"
  file_chpl wrap_call_tmp_chpl2;
#line 2145 "IO.chpl"
  _ref_locale call_tmp_chpl7 = NULL;
#line 2145 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl3;
#line 2145 "IO.chpl"
  chpl_localeID_t call_tmp_chpl8;
#line 2145 "IO.chpl"
  chpl_localeID_t call_tmp_chpl9;
#line 2145 "IO.chpl"
  locale call_tmp_chpl10 = NULL;
#line 2145 "IO.chpl"
  _ref_qio_file_ptr_t call_tmp_chpl11 = NULL;
#line 2145 "IO.chpl"
  _cfile call_tmp_chpl12;
#line 2145 "IO.chpl"
  syserr call_tmp_chpl13;
#line 2145 "IO.chpl"
  int32_t call_tmp_chpl14;
#line 2145 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 2145 "IO.chpl"
  _ref_file _ref_tmp__chpl2 = NULL;
#line 2145 "IO.chpl"
  _ref_file _ref_tmp__chpl3 = NULL;
#line 2145 "IO.chpl"
  file_chpl ret_to_arg_tmp__chpl;
#line 2145 "IO.chpl"
  _ref_file _ref_tmp__chpl4 = NULL;
#line 2379 "IO.chpl"
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
#line 2379 "IO.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 2379 "IO.chpl"
  (&this_chpl)->home_chpl = nil;
#line 2379 "IO.chpl"
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2379 "IO.chpl"
  call_tmp_chpl = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl);
#line 2379 "IO.chpl"
  call_tmp_chpl2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl);
#line 2379 "IO.chpl"
  call_tmp_chpl3 = chpl_localeID_to_locale(&call_tmp_chpl2, _ln_chpl, _fn_chpl);
#line 2379 "IO.chpl"
  (&this_chpl)->home_chpl = call_tmp_chpl3;
#line 2379 "IO.chpl"
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
#line 2379 "IO.chpl"
  (&this_chpl)->_file_internal_chpl = default_arg_file_internal_chpl;
#line 2379 "IO.chpl"
  wrap_call_tmp_chpl = _construct_file_chpl(call_tmp_chpl3, default_arg_file_internal_chpl, &this_chpl, _ln_chpl, _fn_chpl);
#line 2379 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 2379 "IO.chpl"
  *(_retArg_chpl) = chpl__initCopy3(&wrap_call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 2380 "IO.chpl"
  local_style_chpl = *(style_chpl);
#line 2381 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 2381 "IO.chpl"
  _autoCopy_tmp__chpl2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2381 "IO.chpl"
  call_tmp_chpl4 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl2);
#line 2381 "IO.chpl"
  call_tmp_chpl5 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl4);
#line 2381 "IO.chpl"
  call_tmp_chpl6 = chpl_localeID_to_locale(&call_tmp_chpl5, _ln_chpl, _fn_chpl);
#line 2381 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl6;
#line 2381 "IO.chpl"
  default_arg_file_internal_chpl2 = local_QIO_FILE_PTR_NULL_chpl;
#line 2381 "IO.chpl"
  (&this_chpl2)->_file_internal_chpl = default_arg_file_internal_chpl2;
#line 2381 "IO.chpl"
  wrap_call_tmp_chpl2 = _construct_file_chpl(call_tmp_chpl6, default_arg_file_internal_chpl2, &this_chpl2, _ln_chpl, _fn_chpl);
#line 2381 "IO.chpl"
  ret_chpl2 = wrap_call_tmp_chpl2;
#line 2382 "IO.chpl"
  call_tmp_chpl7 = &((&ret_chpl2)->home_chpl);
#line 2382 "IO.chpl"
  _autoCopy_tmp__chpl3 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2382 "IO.chpl"
  call_tmp_chpl8 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl3);
#line 2382 "IO.chpl"
  call_tmp_chpl9 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl8);
#line 2382 "IO.chpl"
  call_tmp_chpl10 = chpl_localeID_to_locale(&call_tmp_chpl9, _ln_chpl, _fn_chpl);
#line 2382 "IO.chpl"
  *(call_tmp_chpl7) = call_tmp_chpl10;
#line 2383 "IO.chpl"
  call_tmp_chpl11 = &((&ret_chpl2)->_file_internal_chpl);
#line 2383 "IO.chpl"
  call_tmp_chpl12 = chpl_cnullfile();
#line 2383 "IO.chpl"
  call_tmp_chpl14 = ((int32_t)(INT64(0)));
#line 2383 "IO.chpl"
  _ref_tmp__chpl = &local_style_chpl;
#line 2383 "IO.chpl"
  call_tmp_chpl13 = qio_file_init(call_tmp_chpl11, call_tmp_chpl12, fd_chpl, hints_chpl, _ref_tmp__chpl, call_tmp_chpl14);
#line 2386 "IO.chpl"
  _ref_tmp__chpl2 = &ret_chpl;
#line 2386 "IO.chpl"
  chpl___ASSIGN_2(_ref_tmp__chpl2, &ret_chpl2, _ln_chpl, _fn_chpl);
#line 2379 "IO.chpl"
  *(_retArg_chpl) = chpl__initCopy3(&ret_chpl, _ln_chpl, _fn_chpl);
#line 2379 "IO.chpl"
  *(error_chpl) = call_tmp_chpl13;
#line 2381 "IO.chpl"
  _ref_tmp__chpl3 = &ret_chpl2;
#line 2381 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 2379 "IO.chpl"
  ret_to_arg_tmp__chpl = *(_retArg_chpl);
#line 2379 "IO.chpl"
  _ref_tmp__chpl4 = &ret_to_arg_tmp__chpl;
#line 2379 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 2379 "IO.chpl"
  return;
#line 2379 "IO.chpl"
}

#line 2379 "IO.chpl"
/* IO.chpl:2391 */
#line 2379 "IO.chpl"
static void openfd_chpl2(int32_t fd_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2379 "IO.chpl"
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
#line 2379 "IO.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 2379 "IO.chpl"
  file_chpl ret_chpl;
#line 2379 "IO.chpl"
  file_chpl this_chpl;
#line 2379 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 2379 "IO.chpl"
  chpl_localeID_t call_tmp_chpl;
#line 2379 "IO.chpl"
  chpl_localeID_t call_tmp_chpl2;
#line 2379 "IO.chpl"
  locale call_tmp_chpl3 = NULL;
#line 2379 "IO.chpl"
  qio_file_ptr_t default_arg_file_internal_chpl;
#line 2379 "IO.chpl"
  file_chpl wrap_call_tmp_chpl;
#line 2379 "IO.chpl"
  file_chpl call_tmp_chpl4;
#line 2379 "IO.chpl"
  syserr err_chpl;
#line 2379 "IO.chpl"
  syserr type_tmp_chpl;
#line 2379 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 2379 "IO.chpl"
  syserr call_tmp_chpl5;
#line 2379 "IO.chpl"
  file_chpl ret_chpl2;
#line 2379 "IO.chpl"
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
#line 2379 "IO.chpl"
  _ref_syserr _ref_tmp__chpl2 = NULL;
#line 2379 "IO.chpl"
  int32_t call_tmp_chpl6;
#line 2379 "IO.chpl"
  chpl_bool call_tmp_chpl7;
#line 2379 "IO.chpl"
  c_string_copy path_chpl;
#line 2379 "IO.chpl"
  c_string_copy ret_chpl3;
#line 2379 "IO.chpl"
  syserr type_tmp_chpl2;
#line 2379 "IO.chpl"
  _ref_syserr _ref_tmp__chpl3 = NULL;
#line 2379 "IO.chpl"
  syserr call_tmp_chpl8;
#line 2379 "IO.chpl"
  syserr call_tmp_chpl9;
#line 2379 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl4 = NULL;
#line 2379 "IO.chpl"
  int32_t call_tmp_chpl10;
#line 2379 "IO.chpl"
  chpl_bool call_tmp_chpl11;
#line 2379 "IO.chpl"
  chpl_string call_tmp_chpl12;
#line 2379 "IO.chpl"
  c_string call_tmp_chpl13;
#line 2379 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl5 = NULL;
#line 2379 "IO.chpl"
  c_string call_tmp_chpl14;
#line 2379 "IO.chpl"
  c_string call_tmp_chpl15;
#line 2379 "IO.chpl"
  int64_t call_tmp_chpl16;
#line 2379 "IO.chpl"
  chpl_bool call_tmp_chpl17;
#line 2379 "IO.chpl"
  c_string_copy call_tmp_chpl18;
#line 2379 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl6 = NULL;
#line 2379 "IO.chpl"
  chpl_string call_tmp_chpl19;
#line 2379 "IO.chpl"
  chpl_string call_tmp_chpl20;
#line 2379 "IO.chpl"
  _ref_file _ref_tmp__chpl7 = NULL;
#line 2379 "IO.chpl"
  file_chpl call_tmp_chpl21;
#line 2379 "IO.chpl"
  _ref_file _ref_tmp__chpl8 = NULL;
#line 2379 "IO.chpl"
  file_chpl ret_to_arg_tmp__chpl;
#line 2379 "IO.chpl"
  _ref_file _ref_tmp__chpl9 = NULL;
#line 2391 "IO.chpl"
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
#line 2391 "IO.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 2391 "IO.chpl"
  (&this_chpl)->home_chpl = nil;
#line 2391 "IO.chpl"
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2391 "IO.chpl"
  call_tmp_chpl = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl);
#line 2391 "IO.chpl"
  call_tmp_chpl2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl);
#line 2391 "IO.chpl"
  call_tmp_chpl3 = chpl_localeID_to_locale(&call_tmp_chpl2, _ln_chpl, _fn_chpl);
#line 2391 "IO.chpl"
  (&this_chpl)->home_chpl = call_tmp_chpl3;
#line 2391 "IO.chpl"
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
#line 2391 "IO.chpl"
  (&this_chpl)->_file_internal_chpl = default_arg_file_internal_chpl;
#line 2391 "IO.chpl"
  wrap_call_tmp_chpl = _construct_file_chpl(call_tmp_chpl3, default_arg_file_internal_chpl, &this_chpl, _ln_chpl, _fn_chpl);
#line 2391 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 2391 "IO.chpl"
  call_tmp_chpl4 = chpl__initCopy3(&wrap_call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 2391 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl4;
#line 2392 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 2392 "IO.chpl"
  call_tmp_chpl5 = qio_int_to_err(INT32(0));
#line 2392 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl5;
#line 2392 "IO.chpl"
  err_chpl = type_tmp_chpl;
#line 2393 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &ret_chpl2;
#line 2393 "IO.chpl"
  _ref_tmp__chpl2 = &err_chpl;
#line 2393 "IO.chpl"
  openfd_chpl(fd_chpl, _ref_tmp__chpl2, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2394 "IO.chpl"
  call_tmp_chpl6 = qio_err_iserr(err_chpl);
#line 2394 "IO.chpl"
  call_tmp_chpl7 = (call_tmp_chpl6 != INT32(0));
#line 2394 "IO.chpl"
  if (call_tmp_chpl7) /* ZLINE: 2395 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2394 "IO.chpl"
  {
#line 2395 "IO.chpl"
    ret_chpl3 = NULL;
#line 2395 "IO.chpl"
    path_chpl = ret_chpl3;
#line 2396 "IO.chpl"
    _ref_tmp__chpl3 = &type_tmp_chpl2;
#line 2396 "IO.chpl"
    call_tmp_chpl8 = qio_int_to_err(INT32(0));
#line 2396 "IO.chpl"
    *(_ref_tmp__chpl3) = call_tmp_chpl8;
#line 2397 "IO.chpl"
    _ref_tmp__chpl4 = &path_chpl;
#line 2397 "IO.chpl"
    call_tmp_chpl9 = qio_file_path_for_fd(fd_chpl, _ref_tmp__chpl4);
#line 2398 "IO.chpl"
    call_tmp_chpl10 = qio_err_iserr(call_tmp_chpl9);
#line 2398 "IO.chpl"
    call_tmp_chpl11 = (call_tmp_chpl10 != INT32(0));
#line 2398 "IO.chpl"
    if (call_tmp_chpl11) /* ZLINE: 2398 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2398 "IO.chpl"
    {
#line 2398 "IO.chpl"
      string_from_c_string(&call_tmp_chpl12, "unknown", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 2398 "IO.chpl"
      c_string_from_string(&call_tmp_chpl13, &call_tmp_chpl12, _ln_chpl, _fn_chpl);
#line 2398 "IO.chpl"
      _ref_tmp__chpl5 = &path_chpl;
#line 2398 "IO.chpl"
      call_tmp_chpl14 = ((c_string)(path_chpl));
#line 2398 "IO.chpl"
      call_tmp_chpl15 = ((c_string)(NULL));
#line 2398 "IO.chpl"
      call_tmp_chpl16 = string_compare(call_tmp_chpl14, call_tmp_chpl15);
#line 2398 "IO.chpl"
      call_tmp_chpl17 = (call_tmp_chpl16 != INT64(0));
#line 2398 "IO.chpl"
      if (call_tmp_chpl17) /* ZLINE: 2398 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2398 "IO.chpl"
      {
#line 2398 "IO.chpl"
        chpl_rt_free_c_string(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 2398 "IO.chpl"
      }
#line 2398 "IO.chpl"
      call_tmp_chpl18 = string_copy(call_tmp_chpl13, _ln_chpl, _fn_chpl);
#line 2398 "IO.chpl"
      *(_ref_tmp__chpl5) = call_tmp_chpl18;
#line 2398 "IO.chpl"
    }
#line 2400 "IO.chpl"
    _ref_tmp__chpl6 = &path_chpl;
#line 2400 "IO.chpl"
    call_tmp_chpl19 = string_from_c_string_copy(_ref_tmp__chpl6, false, INT64(0));
#line 2400 "IO.chpl"
    string_from_c_string(&call_tmp_chpl20, "in openfd", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 2400 "IO.chpl"
    ioerror_chpl(err_chpl, call_tmp_chpl20, call_tmp_chpl19, _ln_chpl, _fn_chpl);
#line 2400 "IO.chpl"
  }
#line 2402 "IO.chpl"
  _ref_tmp__chpl7 = &ret_chpl;
#line 2402 "IO.chpl"
  chpl___ASSIGN_2(_ref_tmp__chpl7, &ret_chpl2, _ln_chpl, _fn_chpl);
#line 2391 "IO.chpl"
  call_tmp_chpl21 = chpl__initCopy3(&ret_chpl, _ln_chpl, _fn_chpl);
#line 2391 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl21;
#line 2393 "IO.chpl"
  _ref_tmp__chpl8 = &ret_chpl2;
#line 2393 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl8, _ln_chpl, _fn_chpl);
#line 2391 "IO.chpl"
  ret_to_arg_tmp__chpl = *(_retArg_chpl);
#line 2391 "IO.chpl"
  _ref_tmp__chpl9 = &ret_to_arg_tmp__chpl;
#line 2391 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl9, _ln_chpl, _fn_chpl);
#line 2391 "IO.chpl"
  return;
#line 2391 "IO.chpl"
}

#line 2391 "IO.chpl"
/* IO.chpl:2434 */
#line 2391 "IO.chpl"
static void openfp_chpl(_cfile fp_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2391 "IO.chpl"
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
#line 2391 "IO.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 2391 "IO.chpl"
  file_chpl ret_chpl;
#line 2391 "IO.chpl"
  file_chpl this_chpl;
#line 2391 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 2391 "IO.chpl"
  chpl_localeID_t call_tmp_chpl;
#line 2391 "IO.chpl"
  chpl_localeID_t call_tmp_chpl2;
#line 2391 "IO.chpl"
  locale call_tmp_chpl3 = NULL;
#line 2391 "IO.chpl"
  qio_file_ptr_t default_arg_file_internal_chpl;
#line 2391 "IO.chpl"
  file_chpl wrap_call_tmp_chpl;
#line 2391 "IO.chpl"
  iostyle local_style_chpl;
#line 2391 "IO.chpl"
  file_chpl ret_chpl2;
#line 2391 "IO.chpl"
  file_chpl this_chpl2;
#line 2391 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl2;
#line 2391 "IO.chpl"
  chpl_localeID_t call_tmp_chpl4;
#line 2391 "IO.chpl"
  chpl_localeID_t call_tmp_chpl5;
#line 2391 "IO.chpl"
  locale call_tmp_chpl6 = NULL;
#line 2391 "IO.chpl"
  qio_file_ptr_t default_arg_file_internal_chpl2;
#line 2391 "IO.chpl"
  file_chpl wrap_call_tmp_chpl2;
#line 2391 "IO.chpl"
  _ref_locale call_tmp_chpl7 = NULL;
#line 2391 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl3;
#line 2391 "IO.chpl"
  chpl_localeID_t call_tmp_chpl8;
#line 2391 "IO.chpl"
  chpl_localeID_t call_tmp_chpl9;
#line 2391 "IO.chpl"
  locale call_tmp_chpl10 = NULL;
#line 2391 "IO.chpl"
  _ref_qio_file_ptr_t call_tmp_chpl11 = NULL;
#line 2391 "IO.chpl"
  syserr call_tmp_chpl12;
#line 2391 "IO.chpl"
  int32_t call_tmp_chpl13;
#line 2391 "IO.chpl"
  int32_t call_tmp_chpl14;
#line 2391 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 2391 "IO.chpl"
  _ref_file _ref_tmp__chpl2 = NULL;
#line 2391 "IO.chpl"
  _ref_file _ref_tmp__chpl3 = NULL;
#line 2391 "IO.chpl"
  file_chpl ret_to_arg_tmp__chpl;
#line 2391 "IO.chpl"
  _ref_file _ref_tmp__chpl4 = NULL;
#line 2434 "IO.chpl"
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
#line 2434 "IO.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 2434 "IO.chpl"
  (&this_chpl)->home_chpl = nil;
#line 2434 "IO.chpl"
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2434 "IO.chpl"
  call_tmp_chpl = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl);
#line 2434 "IO.chpl"
  call_tmp_chpl2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl);
#line 2434 "IO.chpl"
  call_tmp_chpl3 = chpl_localeID_to_locale(&call_tmp_chpl2, _ln_chpl, _fn_chpl);
#line 2434 "IO.chpl"
  (&this_chpl)->home_chpl = call_tmp_chpl3;
#line 2434 "IO.chpl"
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
#line 2434 "IO.chpl"
  (&this_chpl)->_file_internal_chpl = default_arg_file_internal_chpl;
#line 2434 "IO.chpl"
  wrap_call_tmp_chpl = _construct_file_chpl(call_tmp_chpl3, default_arg_file_internal_chpl, &this_chpl, _ln_chpl, _fn_chpl);
#line 2434 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 2434 "IO.chpl"
  *(_retArg_chpl) = chpl__initCopy3(&wrap_call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 2435 "IO.chpl"
  local_style_chpl = *(style_chpl);
#line 2436 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 2436 "IO.chpl"
  _autoCopy_tmp__chpl2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2436 "IO.chpl"
  call_tmp_chpl4 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl2);
#line 2436 "IO.chpl"
  call_tmp_chpl5 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl4);
#line 2436 "IO.chpl"
  call_tmp_chpl6 = chpl_localeID_to_locale(&call_tmp_chpl5, _ln_chpl, _fn_chpl);
#line 2436 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl6;
#line 2436 "IO.chpl"
  default_arg_file_internal_chpl2 = local_QIO_FILE_PTR_NULL_chpl;
#line 2436 "IO.chpl"
  (&this_chpl2)->_file_internal_chpl = default_arg_file_internal_chpl2;
#line 2436 "IO.chpl"
  wrap_call_tmp_chpl2 = _construct_file_chpl(call_tmp_chpl6, default_arg_file_internal_chpl2, &this_chpl2, _ln_chpl, _fn_chpl);
#line 2436 "IO.chpl"
  ret_chpl2 = wrap_call_tmp_chpl2;
#line 2437 "IO.chpl"
  call_tmp_chpl7 = &((&ret_chpl2)->home_chpl);
#line 2437 "IO.chpl"
  _autoCopy_tmp__chpl3 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2437 "IO.chpl"
  call_tmp_chpl8 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl3);
#line 2437 "IO.chpl"
  call_tmp_chpl9 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl8);
#line 2437 "IO.chpl"
  call_tmp_chpl10 = chpl_localeID_to_locale(&call_tmp_chpl9, _ln_chpl, _fn_chpl);
#line 2437 "IO.chpl"
  *(call_tmp_chpl7) = call_tmp_chpl10;
#line 2438 "IO.chpl"
  call_tmp_chpl11 = &((&ret_chpl2)->_file_internal_chpl);
#line 2438 "IO.chpl"
  call_tmp_chpl13 = ((int32_t)(INT64(-1)));
#line 2438 "IO.chpl"
  call_tmp_chpl14 = ((int32_t)(INT64(1)));
#line 2438 "IO.chpl"
  _ref_tmp__chpl = &local_style_chpl;
#line 2438 "IO.chpl"
  call_tmp_chpl12 = qio_file_init(call_tmp_chpl11, fp_chpl, call_tmp_chpl13, hints_chpl, _ref_tmp__chpl, call_tmp_chpl14);
#line 2441 "IO.chpl"
  _ref_tmp__chpl2 = &ret_chpl;
#line 2441 "IO.chpl"
  chpl___ASSIGN_2(_ref_tmp__chpl2, &ret_chpl2, _ln_chpl, _fn_chpl);
#line 2434 "IO.chpl"
  *(_retArg_chpl) = chpl__initCopy3(&ret_chpl, _ln_chpl, _fn_chpl);
#line 2434 "IO.chpl"
  *(error_chpl) = call_tmp_chpl12;
#line 2436 "IO.chpl"
  _ref_tmp__chpl3 = &ret_chpl2;
#line 2436 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 2434 "IO.chpl"
  ret_to_arg_tmp__chpl = *(_retArg_chpl);
#line 2434 "IO.chpl"
  _ref_tmp__chpl4 = &ret_to_arg_tmp__chpl;
#line 2434 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 2434 "IO.chpl"
  return;
#line 2434 "IO.chpl"
}

#line 2434 "IO.chpl"
/* IO.chpl:2446 */
#line 2434 "IO.chpl"
static void openfp_chpl2(_cfile fp_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2434 "IO.chpl"
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
#line 2434 "IO.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 2434 "IO.chpl"
  file_chpl ret_chpl;
#line 2434 "IO.chpl"
  file_chpl this_chpl;
#line 2434 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 2434 "IO.chpl"
  chpl_localeID_t call_tmp_chpl;
#line 2434 "IO.chpl"
  chpl_localeID_t call_tmp_chpl2;
#line 2434 "IO.chpl"
  locale call_tmp_chpl3 = NULL;
#line 2434 "IO.chpl"
  qio_file_ptr_t default_arg_file_internal_chpl;
#line 2434 "IO.chpl"
  file_chpl wrap_call_tmp_chpl;
#line 2434 "IO.chpl"
  file_chpl call_tmp_chpl4;
#line 2434 "IO.chpl"
  syserr err_chpl;
#line 2434 "IO.chpl"
  syserr type_tmp_chpl;
#line 2434 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 2434 "IO.chpl"
  syserr call_tmp_chpl5;
#line 2434 "IO.chpl"
  file_chpl ret_chpl2;
#line 2434 "IO.chpl"
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
#line 2434 "IO.chpl"
  _ref_syserr _ref_tmp__chpl2 = NULL;
#line 2434 "IO.chpl"
  int32_t call_tmp_chpl6;
#line 2434 "IO.chpl"
  chpl_bool call_tmp_chpl7;
#line 2434 "IO.chpl"
  c_string_copy path_chpl;
#line 2434 "IO.chpl"
  c_string_copy ret_chpl3;
#line 2434 "IO.chpl"
  syserr type_tmp_chpl2;
#line 2434 "IO.chpl"
  _ref_syserr _ref_tmp__chpl3 = NULL;
#line 2434 "IO.chpl"
  syserr call_tmp_chpl8;
#line 2434 "IO.chpl"
  syserr call_tmp_chpl9;
#line 2434 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl4 = NULL;
#line 2434 "IO.chpl"
  int32_t call_tmp_chpl10;
#line 2434 "IO.chpl"
  chpl_bool call_tmp_chpl11;
#line 2434 "IO.chpl"
  chpl_string call_tmp_chpl12;
#line 2434 "IO.chpl"
  c_string call_tmp_chpl13;
#line 2434 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl5 = NULL;
#line 2434 "IO.chpl"
  c_string call_tmp_chpl14;
#line 2434 "IO.chpl"
  c_string call_tmp_chpl15;
#line 2434 "IO.chpl"
  int64_t call_tmp_chpl16;
#line 2434 "IO.chpl"
  chpl_bool call_tmp_chpl17;
#line 2434 "IO.chpl"
  c_string_copy call_tmp_chpl18;
#line 2434 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl6 = NULL;
#line 2434 "IO.chpl"
  chpl_string call_tmp_chpl19;
#line 2434 "IO.chpl"
  chpl_string call_tmp_chpl20;
#line 2434 "IO.chpl"
  _ref_file _ref_tmp__chpl7 = NULL;
#line 2434 "IO.chpl"
  file_chpl call_tmp_chpl21;
#line 2434 "IO.chpl"
  _ref_file _ref_tmp__chpl8 = NULL;
#line 2434 "IO.chpl"
  file_chpl ret_to_arg_tmp__chpl;
#line 2434 "IO.chpl"
  _ref_file _ref_tmp__chpl9 = NULL;
#line 2446 "IO.chpl"
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
#line 2446 "IO.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 2446 "IO.chpl"
  (&this_chpl)->home_chpl = nil;
#line 2446 "IO.chpl"
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2446 "IO.chpl"
  call_tmp_chpl = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl);
#line 2446 "IO.chpl"
  call_tmp_chpl2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl);
#line 2446 "IO.chpl"
  call_tmp_chpl3 = chpl_localeID_to_locale(&call_tmp_chpl2, _ln_chpl, _fn_chpl);
#line 2446 "IO.chpl"
  (&this_chpl)->home_chpl = call_tmp_chpl3;
#line 2446 "IO.chpl"
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
#line 2446 "IO.chpl"
  (&this_chpl)->_file_internal_chpl = default_arg_file_internal_chpl;
#line 2446 "IO.chpl"
  wrap_call_tmp_chpl = _construct_file_chpl(call_tmp_chpl3, default_arg_file_internal_chpl, &this_chpl, _ln_chpl, _fn_chpl);
#line 2446 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 2446 "IO.chpl"
  call_tmp_chpl4 = chpl__initCopy3(&wrap_call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 2446 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl4;
#line 2447 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 2447 "IO.chpl"
  call_tmp_chpl5 = qio_int_to_err(INT32(0));
#line 2447 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl5;
#line 2447 "IO.chpl"
  err_chpl = type_tmp_chpl;
#line 2448 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &ret_chpl2;
#line 2448 "IO.chpl"
  _ref_tmp__chpl2 = &err_chpl;
#line 2448 "IO.chpl"
  openfp_chpl(fp_chpl, _ref_tmp__chpl2, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2449 "IO.chpl"
  call_tmp_chpl6 = qio_err_iserr(err_chpl);
#line 2449 "IO.chpl"
  call_tmp_chpl7 = (call_tmp_chpl6 != INT32(0));
#line 2449 "IO.chpl"
  if (call_tmp_chpl7) /* ZLINE: 2450 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2449 "IO.chpl"
  {
#line 2450 "IO.chpl"
    ret_chpl3 = NULL;
#line 2450 "IO.chpl"
    path_chpl = ret_chpl3;
#line 2451 "IO.chpl"
    _ref_tmp__chpl3 = &type_tmp_chpl2;
#line 2451 "IO.chpl"
    call_tmp_chpl8 = qio_int_to_err(INT32(0));
#line 2451 "IO.chpl"
    *(_ref_tmp__chpl3) = call_tmp_chpl8;
#line 2452 "IO.chpl"
    _ref_tmp__chpl4 = &path_chpl;
#line 2452 "IO.chpl"
    call_tmp_chpl9 = qio_file_path_for_fp(fp_chpl, _ref_tmp__chpl4);
#line 2453 "IO.chpl"
    call_tmp_chpl10 = qio_err_iserr(call_tmp_chpl9);
#line 2453 "IO.chpl"
    call_tmp_chpl11 = (call_tmp_chpl10 != INT32(0));
#line 2453 "IO.chpl"
    if (call_tmp_chpl11) /* ZLINE: 2453 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2453 "IO.chpl"
    {
#line 2453 "IO.chpl"
      string_from_c_string(&call_tmp_chpl12, "unknown", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 2453 "IO.chpl"
      c_string_from_string(&call_tmp_chpl13, &call_tmp_chpl12, _ln_chpl, _fn_chpl);
#line 2453 "IO.chpl"
      _ref_tmp__chpl5 = &path_chpl;
#line 2453 "IO.chpl"
      call_tmp_chpl14 = ((c_string)(path_chpl));
#line 2453 "IO.chpl"
      call_tmp_chpl15 = ((c_string)(NULL));
#line 2453 "IO.chpl"
      call_tmp_chpl16 = string_compare(call_tmp_chpl14, call_tmp_chpl15);
#line 2453 "IO.chpl"
      call_tmp_chpl17 = (call_tmp_chpl16 != INT64(0));
#line 2453 "IO.chpl"
      if (call_tmp_chpl17) /* ZLINE: 2453 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 2453 "IO.chpl"
      {
#line 2453 "IO.chpl"
        chpl_rt_free_c_string(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 2453 "IO.chpl"
      }
#line 2453 "IO.chpl"
      call_tmp_chpl18 = string_copy(call_tmp_chpl13, _ln_chpl, _fn_chpl);
#line 2453 "IO.chpl"
      *(_ref_tmp__chpl5) = call_tmp_chpl18;
#line 2453 "IO.chpl"
    }
#line 2454 "IO.chpl"
    _ref_tmp__chpl6 = &path_chpl;
#line 2454 "IO.chpl"
    call_tmp_chpl19 = string_from_c_string_copy(_ref_tmp__chpl6, false, INT64(0));
#line 2454 "IO.chpl"
    string_from_c_string(&call_tmp_chpl20, "in openfp", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 2454 "IO.chpl"
    ioerror_chpl(err_chpl, call_tmp_chpl20, call_tmp_chpl19, _ln_chpl, _fn_chpl);
#line 2454 "IO.chpl"
  }
#line 2457 "IO.chpl"
  _ref_tmp__chpl7 = &ret_chpl;
#line 2457 "IO.chpl"
  chpl___ASSIGN_2(_ref_tmp__chpl7, &ret_chpl2, _ln_chpl, _fn_chpl);
#line 2446 "IO.chpl"
  call_tmp_chpl21 = chpl__initCopy3(&ret_chpl, _ln_chpl, _fn_chpl);
#line 2446 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl21;
#line 2448 "IO.chpl"
  _ref_tmp__chpl8 = &ret_chpl2;
#line 2448 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl8, _ln_chpl, _fn_chpl);
#line 2446 "IO.chpl"
  ret_to_arg_tmp__chpl = *(_retArg_chpl);
#line 2446 "IO.chpl"
  _ref_tmp__chpl9 = &ret_to_arg_tmp__chpl;
#line 2446 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl9, _ln_chpl, _fn_chpl);
#line 2446 "IO.chpl"
  return;
#line 2446 "IO.chpl"
}

#line 2446 "IO.chpl"
/* IO.chpl:2567 */
#line 2446 "IO.chpl"
static channel_T_dynamic_T_chpl _construct_channel_chpl(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_T_dynamic_T_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2446 "IO.chpl"
  channel_T_dynamic_T_chpl this_chpl;
#line 2567 "IO.chpl"
  this_chpl = *(meme_chpl);
#line 2584 "IO.chpl"
  (&this_chpl)->home_chpl = home_chpl;
#line 2586 "IO.chpl"
  (&this_chpl)->_channel_internal_chpl = _channel_internal_chpl;
#line 2567 "IO.chpl"
  return this_chpl;
#line 2567 "IO.chpl"
}

#line 2567 "IO.chpl"
/* IO.chpl:2567 */
#line 2567 "IO.chpl"
static channel_F_dynamic_T_chpl _construct_channel_chpl2(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_F_dynamic_T_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2567 "IO.chpl"
  channel_F_dynamic_T_chpl this_chpl;
#line 2567 "IO.chpl"
  this_chpl = *(meme_chpl);
#line 2584 "IO.chpl"
  (&this_chpl)->home_chpl = home_chpl;
#line 2586 "IO.chpl"
  (&this_chpl)->_channel_internal_chpl = _channel_internal_chpl;
#line 2567 "IO.chpl"
  return this_chpl;
#line 2567 "IO.chpl"
}

#line 2567 "IO.chpl"
/* IO.chpl:2592 */
#line 2567 "IO.chpl"
static channel_F_dynamic_T_chpl chpl__initCopy5(channel_F_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2567 "IO.chpl"
  qio_channel_ptr_t ret_chpl;
#line 2594 "IO.chpl"
  ret_chpl = (x_chpl)->_channel_internal_chpl;
#line 2594 "IO.chpl"
  qio_channel_retain(ret_chpl);
#line 2592 "IO.chpl"
  return *(x_chpl);
#line 2592 "IO.chpl"
}

#line 2592 "IO.chpl"
/* IO.chpl:2592 */
#line 2592 "IO.chpl"
static channel_T_dynamic_T_chpl chpl__initCopy4(channel_T_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2592 "IO.chpl"
  qio_channel_ptr_t ret_chpl;
#line 2594 "IO.chpl"
  ret_chpl = (x_chpl)->_channel_internal_chpl;
#line 2594 "IO.chpl"
  qio_channel_retain(ret_chpl);
#line 2592 "IO.chpl"
  return *(x_chpl);
#line 2592 "IO.chpl"
}

#line 2592 "IO.chpl"
/* IO.chpl:2600 */
#line 2592 "IO.chpl"
static void chpl___ASSIGN_4(_ref_channel_F_dynamic_T ret_chpl, channel_F_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2592 "IO.chpl"
  qio_channel_ptr_t ret_chpl2;
#line 2592 "IO.chpl"
  qio_channel_ptr_t ret_chpl3;
#line 2592 "IO.chpl"
  _ref_locale call_tmp_chpl = NULL;
#line 2592 "IO.chpl"
  locale ret_chpl4 = NULL;
#line 2592 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl2 = NULL;
#line 2592 "IO.chpl"
  qio_channel_ptr_t ret_chpl5;
#line 2603 "IO.chpl"
  ret_chpl2 = (x_chpl)->_channel_internal_chpl;
#line 2603 "IO.chpl"
  qio_channel_retain(ret_chpl2);
#line 2607 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2607), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2607 "IO.chpl"
  ret_chpl3 = (ret_chpl)->_channel_internal_chpl;
#line 2607 "IO.chpl"
  qio_channel_release(ret_chpl3);
#line 2610 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2610), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2610 "IO.chpl"
  call_tmp_chpl = &((ret_chpl)->home_chpl);
#line 2610 "IO.chpl"
  ret_chpl4 = (x_chpl)->home_chpl;
#line 2610 "IO.chpl"
  *(call_tmp_chpl) = ret_chpl4;
#line 2611 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2611), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2611 "IO.chpl"
  call_tmp_chpl2 = &((ret_chpl)->_channel_internal_chpl);
#line 2611 "IO.chpl"
  ret_chpl5 = (x_chpl)->_channel_internal_chpl;
#line 2611 "IO.chpl"
  *(call_tmp_chpl2) = ret_chpl5;
#line 2600 "IO.chpl"
  return;
#line 2600 "IO.chpl"
}

#line 2600 "IO.chpl"
/* IO.chpl:2600 */
#line 2600 "IO.chpl"
static void chpl___ASSIGN_3(_ref_channel_T_dynamic_T ret_chpl, channel_T_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2600 "IO.chpl"
  qio_channel_ptr_t ret_chpl2;
#line 2600 "IO.chpl"
  qio_channel_ptr_t ret_chpl3;
#line 2600 "IO.chpl"
  _ref_locale call_tmp_chpl = NULL;
#line 2600 "IO.chpl"
  locale ret_chpl4 = NULL;
#line 2600 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl2 = NULL;
#line 2600 "IO.chpl"
  qio_channel_ptr_t ret_chpl5;
#line 2603 "IO.chpl"
  ret_chpl2 = (x_chpl)->_channel_internal_chpl;
#line 2603 "IO.chpl"
  qio_channel_retain(ret_chpl2);
#line 2607 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2607), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2607 "IO.chpl"
  ret_chpl3 = (ret_chpl)->_channel_internal_chpl;
#line 2607 "IO.chpl"
  qio_channel_release(ret_chpl3);
#line 2610 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2610), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2610 "IO.chpl"
  call_tmp_chpl = &((ret_chpl)->home_chpl);
#line 2610 "IO.chpl"
  ret_chpl4 = (x_chpl)->home_chpl;
#line 2610 "IO.chpl"
  *(call_tmp_chpl) = ret_chpl4;
#line 2611 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2611), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2611 "IO.chpl"
  call_tmp_chpl2 = &((ret_chpl)->_channel_internal_chpl);
#line 2611 "IO.chpl"
  ret_chpl5 = (x_chpl)->_channel_internal_chpl;
#line 2611 "IO.chpl"
  *(call_tmp_chpl2) = ret_chpl5;
#line 2600 "IO.chpl"
  return;
#line 2600 "IO.chpl"
}

#line 2600 "IO.chpl"
/* IO.chpl:2615 */
#line 2600 "IO.chpl"
static channel_F_dynamic_T_chpl channel_chpl2(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2600 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2600 "IO.chpl"
  iostyle _formal_tmp_local_style_chpl;
#line 2600 "IO.chpl"
  channel_F_dynamic_T_chpl this_chpl;
#line 2600 "IO.chpl"
  channel_F_dynamic_T_chpl this_chpl2;
#line 2600 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 2600 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl;
#line 2600 "IO.chpl"
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl;
#line 2600 "IO.chpl"
  _ref_locale call_tmp_chpl2 = NULL;
#line 2600 "IO.chpl"
  locale ret_chpl = NULL;
#line 2600 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl3 = NULL;
#line 2600 "IO.chpl"
  qio_file_ptr_t ret_chpl2;
#line 2600 "IO.chpl"
  syserr call_tmp_chpl4;
#line 2600 "IO.chpl"
  int32_t call_tmp_chpl5;
#line 2600 "IO.chpl"
  int32_t call_tmp_chpl6;
#line 2600 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 2615 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 2615 "IO.chpl"
  _formal_tmp_local_style_chpl = *(local_style_chpl);
#line 2615 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 2615 "IO.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 2615 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 2615 "IO.chpl"
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2615 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 2615 "IO.chpl"
  wrap_call_tmp_chpl = _construct_channel_chpl2(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, _ln_chpl, _fn_chpl);
#line 2615 "IO.chpl"
  this_chpl = wrap_call_tmp_chpl;
#line 2617 "IO.chpl"
  call_tmp_chpl2 = &((&this_chpl)->home_chpl);
#line 2617 "IO.chpl"
  ret_chpl = (f_chpl)->home_chpl;
#line 2617 "IO.chpl"
  *(call_tmp_chpl2) = ret_chpl;
#line 2622 "IO.chpl"
  call_tmp_chpl3 = &((&this_chpl)->_channel_internal_chpl);
#line 2622 "IO.chpl"
  ret_chpl2 = (f_chpl)->_file_internal_chpl;
#line 2622 "IO.chpl"
  call_tmp_chpl5 = ((int32_t)(true));
#line 2622 "IO.chpl"
  call_tmp_chpl6 = ((int32_t)(false));
#line 2622 "IO.chpl"
  _ref_tmp__chpl = &_formal_tmp_local_style_chpl;
#line 2622 "IO.chpl"
  call_tmp_chpl4 = qio_channel_create(call_tmp_chpl3, ret_chpl2, hints_chpl, call_tmp_chpl5, call_tmp_chpl6, start_chpl, end_chpl, _ref_tmp__chpl);
#line 2615 "IO.chpl"
  *(error_chpl) = call_tmp_chpl4;
#line 2615 "IO.chpl"
  return this_chpl;
#line 2615 "IO.chpl"
}

#line 2615 "IO.chpl"
/* IO.chpl:2615 */
#line 2615 "IO.chpl"
static channel_T_dynamic_T_chpl channel_chpl(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2615 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2615 "IO.chpl"
  iostyle _formal_tmp_local_style_chpl;
#line 2615 "IO.chpl"
  channel_T_dynamic_T_chpl this_chpl;
#line 2615 "IO.chpl"
  channel_T_dynamic_T_chpl this_chpl2;
#line 2615 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 2615 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl;
#line 2615 "IO.chpl"
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl;
#line 2615 "IO.chpl"
  _ref_locale call_tmp_chpl2 = NULL;
#line 2615 "IO.chpl"
  locale ret_chpl = NULL;
#line 2615 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl3 = NULL;
#line 2615 "IO.chpl"
  qio_file_ptr_t ret_chpl2;
#line 2615 "IO.chpl"
  syserr call_tmp_chpl4;
#line 2615 "IO.chpl"
  int32_t call_tmp_chpl5;
#line 2615 "IO.chpl"
  int32_t call_tmp_chpl6;
#line 2615 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 2615 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 2615 "IO.chpl"
  _formal_tmp_local_style_chpl = *(local_style_chpl);
#line 2615 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 2615 "IO.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 2615 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 2615 "IO.chpl"
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2615 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 2615 "IO.chpl"
  wrap_call_tmp_chpl = _construct_channel_chpl(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, _ln_chpl, _fn_chpl);
#line 2615 "IO.chpl"
  this_chpl = wrap_call_tmp_chpl;
#line 2617 "IO.chpl"
  call_tmp_chpl2 = &((&this_chpl)->home_chpl);
#line 2617 "IO.chpl"
  ret_chpl = (f_chpl)->home_chpl;
#line 2617 "IO.chpl"
  *(call_tmp_chpl2) = ret_chpl;
#line 2622 "IO.chpl"
  call_tmp_chpl3 = &((&this_chpl)->_channel_internal_chpl);
#line 2622 "IO.chpl"
  ret_chpl2 = (f_chpl)->_file_internal_chpl;
#line 2622 "IO.chpl"
  call_tmp_chpl5 = ((int32_t)(false));
#line 2622 "IO.chpl"
  call_tmp_chpl6 = ((int32_t)(true));
#line 2622 "IO.chpl"
  _ref_tmp__chpl = &_formal_tmp_local_style_chpl;
#line 2622 "IO.chpl"
  call_tmp_chpl4 = qio_channel_create(call_tmp_chpl3, ret_chpl2, hints_chpl, call_tmp_chpl5, call_tmp_chpl6, start_chpl, end_chpl, _ref_tmp__chpl);
#line 2615 "IO.chpl"
  *(error_chpl) = call_tmp_chpl4;
#line 2615 "IO.chpl"
  return this_chpl;
#line 2615 "IO.chpl"
}

#line 2615 "IO.chpl"
/* IO.chpl:2629 */
#line 2615 "IO.chpl"
static void chpl___TILDE_channel(_ref_channel_F_dynamic_T this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2615 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2615 "IO.chpl"
  qio_channel_ptr_t ret_chpl;
#line 2615 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl = NULL;
#line 2632 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 2631 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2631), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2631 "IO.chpl"
  ret_chpl = (this_chpl)->_channel_internal_chpl;
#line 2631 "IO.chpl"
  qio_channel_release(ret_chpl);
#line 2632 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2632), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2632 "IO.chpl"
  call_tmp_chpl = &((this_chpl)->_channel_internal_chpl);
#line 2632 "IO.chpl"
  *(call_tmp_chpl) = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2629 "IO.chpl"
  return;
#line 2629 "IO.chpl"
}

#line 2629 "IO.chpl"
/* IO.chpl:2629 */
#line 2629 "IO.chpl"
static void chpl___TILDE_channel2(_ref_channel_T_dynamic_T this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2629 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2629 "IO.chpl"
  qio_channel_ptr_t ret_chpl;
#line 2629 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl = NULL;
#line 2632 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 2631 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2631), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2631 "IO.chpl"
  ret_chpl = (this_chpl)->_channel_internal_chpl;
#line 2631 "IO.chpl"
  qio_channel_release(ret_chpl);
#line 2632 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2632), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2632 "IO.chpl"
  call_tmp_chpl = &((this_chpl)->_channel_internal_chpl);
#line 2632 "IO.chpl"
  *(call_tmp_chpl) = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2629 "IO.chpl"
  return;
#line 2629 "IO.chpl"
}

#line 2629 "IO.chpl"
/* IO.chpl:2707 */
#line 2629 "IO.chpl"
static ioLiteral_chpl _construct_ioLiteral_chpl(c_string val_chpl, chpl_bool ignoreWhiteSpace_chpl, ioLiteral_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2629 "IO.chpl"
  ioLiteral_chpl this_chpl;
#line 2707 "IO.chpl"
  this_chpl = *(meme_chpl);
#line 2709 "IO.chpl"
  (&this_chpl)->val_chpl = val_chpl;
#line 2713 "IO.chpl"
  (&this_chpl)->ignoreWhiteSpace_chpl = ignoreWhiteSpace_chpl;
#line 2707 "IO.chpl"
  return this_chpl;
#line 2707 "IO.chpl"
}

#line 2707 "IO.chpl"
/* IO.chpl:2707 */
#line 2707 "IO.chpl"
static void chpl___ASSIGN_5(_ref_ioLiteral _arg1_chpl, ioLiteral_chpl* const _arg2_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2707 "IO.chpl"
  _ref_c_string call_tmp_chpl = NULL;
#line 2707 "IO.chpl"
  c_string ret_chpl;
#line 2707 "IO.chpl"
  _ref_chpl_bool call_tmp_chpl2 = NULL;
#line 2707 "IO.chpl"
  chpl_bool ret_chpl2;
#line 2707 "IO.chpl"
  chpl_check_nil(_arg1_chpl, INT64(2707), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2707 "IO.chpl"
  call_tmp_chpl = &((_arg1_chpl)->val_chpl);
#line 2707 "IO.chpl"
  ret_chpl = (_arg2_chpl)->val_chpl;
#line 2707 "IO.chpl"
  *(call_tmp_chpl) = ret_chpl;
#line 2707 "IO.chpl"
  chpl_check_nil(_arg1_chpl, INT64(2707), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 2707 "IO.chpl"
  call_tmp_chpl2 = &((_arg1_chpl)->ignoreWhiteSpace_chpl);
#line 2707 "IO.chpl"
  ret_chpl2 = (_arg2_chpl)->ignoreWhiteSpace_chpl;
#line 2707 "IO.chpl"
  *(call_tmp_chpl2) = ret_chpl2;
#line 2707 "IO.chpl"
  return;
#line 2707 "IO.chpl"
}

#line 2707 "IO.chpl"
/* IO.chpl:3168 */
#line 2707 "IO.chpl"
static void reader_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 2707 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2707 "IO.chpl"
  syserr _formal_tmp_error_chpl;
#line 2707 "IO.chpl"
  channel_F_dynamic_T_chpl ret_chpl;
#line 2707 "IO.chpl"
  channel_F_dynamic_T_chpl this_chpl2;
#line 2707 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 2707 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl;
#line 2707 "IO.chpl"
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl;
#line 2707 "IO.chpl"
  channel_F_dynamic_T_chpl ret_chpl2;
#line 2707 "IO.chpl"
  channel_F_dynamic_T_chpl this_chpl3;
#line 2707 "IO.chpl"
  locale call_tmp_chpl2 = NULL;
#line 2707 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl2;
#line 2707 "IO.chpl"
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl2;
#line 2707 "IO.chpl"
  channel_F_dynamic_T_chpl call_tmp_chpl3;
#line 2707 "IO.chpl"
  file_chpl coerce_tmp_chpl;
#line 2707 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 2707 "IO.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl2 = NULL;
#line 2707 "IO.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl3 = NULL;
#line 2707 "IO.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl4 = NULL;
#line 2707 "IO.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl5 = NULL;
#line 2707 "IO.chpl"
  channel_F_dynamic_T_chpl ret_to_arg_tmp__chpl;
#line 2707 "IO.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl6 = NULL;
#line 3168 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 3168 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 3168 "IO.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 3168 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 3168 "IO.chpl"
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3168 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 3168 "IO.chpl"
  wrap_call_tmp_chpl = _construct_channel_chpl2(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, _ln_chpl, _fn_chpl);
#line 3168 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 3168 "IO.chpl"
  *(_retArg_chpl) = chpl__initCopy5(&wrap_call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 3169 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(3169), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 3169 "IO.chpl"
  check_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 3171 "IO.chpl"
  (&this_chpl3)->home_chpl = nil;
#line 3171 "IO.chpl"
  call_tmp_chpl2 = ((locale)(nil));
#line 3171 "IO.chpl"
  (&this_chpl3)->home_chpl = call_tmp_chpl2;
#line 3171 "IO.chpl"
  default_arg_channel_internal_chpl2 = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3171 "IO.chpl"
  (&this_chpl3)->_channel_internal_chpl = default_arg_channel_internal_chpl2;
#line 3171 "IO.chpl"
  wrap_call_tmp_chpl2 = _construct_channel_chpl2(call_tmp_chpl2, default_arg_channel_internal_chpl2, &this_chpl3, _ln_chpl, _fn_chpl);
#line 3171 "IO.chpl"
  ret_chpl2 = wrap_call_tmp_chpl2;
#line 3173 "IO.chpl"
  coerce_tmp_chpl = *(this_chpl);
#line 3173 "IO.chpl"
  _ref_tmp__chpl = &_formal_tmp_error_chpl;
#line 3173 "IO.chpl"
  call_tmp_chpl3 = channel_chpl2(&coerce_tmp_chpl, _ref_tmp__chpl, hints_chpl, start_chpl, end_chpl, style_chpl, _ln_chpl, _fn_chpl);
#line 3173 "IO.chpl"
  _ref_tmp__chpl2 = &ret_chpl2;
#line 3173 "IO.chpl"
  chpl___ASSIGN_4(_ref_tmp__chpl2, &call_tmp_chpl3, _ln_chpl, _fn_chpl);
#line 3173 "IO.chpl"
  _ref_tmp__chpl3 = &call_tmp_chpl3;
#line 3173 "IO.chpl"
  chpl___TILDE_channel(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 3175 "IO.chpl"
  _ref_tmp__chpl4 = &ret_chpl;
#line 3175 "IO.chpl"
  chpl___ASSIGN_4(_ref_tmp__chpl4, &ret_chpl2, _ln_chpl, _fn_chpl);
#line 3168 "IO.chpl"
  *(_retArg_chpl) = chpl__initCopy5(&ret_chpl, _ln_chpl, _fn_chpl);
#line 3168 "IO.chpl"
  *(error_chpl) = _formal_tmp_error_chpl;
#line 3171 "IO.chpl"
  _ref_tmp__chpl5 = &ret_chpl2;
#line 3171 "IO.chpl"
  chpl___TILDE_channel(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 3168 "IO.chpl"
  ret_to_arg_tmp__chpl = *(_retArg_chpl);
#line 3168 "IO.chpl"
  _ref_tmp__chpl6 = &ret_to_arg_tmp__chpl;
#line 3168 "IO.chpl"
  chpl___TILDE_channel(_ref_tmp__chpl6, _ln_chpl, _fn_chpl);
#line 3168 "IO.chpl"
  return;
#line 3168 "IO.chpl"
}

#line 3168 "IO.chpl"
/* IO.chpl:3180 */
#line 3168 "IO.chpl"
static void reader_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 3168 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3168 "IO.chpl"
  channel_F_dynamic_T_chpl ret_chpl;
#line 3168 "IO.chpl"
  channel_F_dynamic_T_chpl this_chpl2;
#line 3168 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 3168 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl;
#line 3168 "IO.chpl"
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl;
#line 3168 "IO.chpl"
  channel_F_dynamic_T_chpl call_tmp_chpl2;
#line 3168 "IO.chpl"
  syserr err_chpl;
#line 3168 "IO.chpl"
  syserr type_tmp_chpl;
#line 3168 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 3168 "IO.chpl"
  syserr call_tmp_chpl3;
#line 3168 "IO.chpl"
  channel_F_dynamic_T_chpl ret_chpl2;
#line 3168 "IO.chpl"
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
#line 3168 "IO.chpl"
  _ref_syserr _ref_tmp__chpl2 = NULL;
#line 3168 "IO.chpl"
  int32_t call_tmp_chpl4;
#line 3168 "IO.chpl"
  chpl_bool call_tmp_chpl5;
#line 3168 "IO.chpl"
  chpl_string call_tmp_chpl6;
#line 3168 "IO.chpl"
  chpl_string call_tmp_chpl7;
#line 3168 "IO.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl3 = NULL;
#line 3168 "IO.chpl"
  channel_F_dynamic_T_chpl call_tmp_chpl8;
#line 3168 "IO.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl4 = NULL;
#line 3168 "IO.chpl"
  channel_F_dynamic_T_chpl ret_to_arg_tmp__chpl;
#line 3168 "IO.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl5 = NULL;
#line 3180 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 3180 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 3180 "IO.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 3180 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 3180 "IO.chpl"
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3180 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 3180 "IO.chpl"
  wrap_call_tmp_chpl = _construct_channel_chpl2(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, _ln_chpl, _fn_chpl);
#line 3180 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 3180 "IO.chpl"
  call_tmp_chpl2 = chpl__initCopy5(&wrap_call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 3180 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl2;
#line 3181 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 3181 "IO.chpl"
  call_tmp_chpl3 = qio_int_to_err(INT32(0));
#line 3181 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl3;
#line 3181 "IO.chpl"
  err_chpl = type_tmp_chpl;
#line 3182 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &ret_chpl2;
#line 3182 "IO.chpl"
  _ref_tmp__chpl2 = &err_chpl;
#line 3182 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(3182), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 3182 "IO.chpl"
  reader_chpl(this_chpl, _ref_tmp__chpl2, start_chpl, end_chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 3183 "IO.chpl"
  call_tmp_chpl4 = qio_err_iserr(err_chpl);
#line 3183 "IO.chpl"
  call_tmp_chpl5 = (call_tmp_chpl4 != INT32(0));
#line 3183 "IO.chpl"
  if (call_tmp_chpl5) /* ZLINE: 3183 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 3183 "IO.chpl"
  {
#line 3183 "IO.chpl"
    chpl_check_nil(this_chpl, INT64(3183), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 3183 "IO.chpl"
    call_tmp_chpl6 = tryGetPath_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 3183 "IO.chpl"
    string_from_c_string(&call_tmp_chpl7, "in file.reader", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 3183 "IO.chpl"
    ioerror_chpl(err_chpl, call_tmp_chpl7, call_tmp_chpl6, _ln_chpl, _fn_chpl);
#line 3183 "IO.chpl"
  }
#line 3184 "IO.chpl"
  _ref_tmp__chpl3 = &ret_chpl;
#line 3184 "IO.chpl"
  chpl___ASSIGN_4(_ref_tmp__chpl3, &ret_chpl2, _ln_chpl, _fn_chpl);
#line 3180 "IO.chpl"
  call_tmp_chpl8 = chpl__initCopy5(&ret_chpl, _ln_chpl, _fn_chpl);
#line 3180 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl8;
#line 3182 "IO.chpl"
  _ref_tmp__chpl4 = &ret_chpl2;
#line 3182 "IO.chpl"
  chpl___TILDE_channel(_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 3180 "IO.chpl"
  ret_to_arg_tmp__chpl = *(_retArg_chpl);
#line 3180 "IO.chpl"
  _ref_tmp__chpl5 = &ret_to_arg_tmp__chpl;
#line 3180 "IO.chpl"
  chpl___TILDE_channel(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 3180 "IO.chpl"
  return;
#line 3180 "IO.chpl"
}

#line 3180 "IO.chpl"
/* IO.chpl:3268 */
#line 3180 "IO.chpl"
static void writer_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 3180 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3180 "IO.chpl"
  syserr _formal_tmp_error_chpl;
#line 3180 "IO.chpl"
  channel_T_dynamic_T_chpl ret_chpl;
#line 3180 "IO.chpl"
  channel_T_dynamic_T_chpl this_chpl2;
#line 3180 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 3180 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl;
#line 3180 "IO.chpl"
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl;
#line 3180 "IO.chpl"
  channel_T_dynamic_T_chpl ret_chpl2;
#line 3180 "IO.chpl"
  channel_T_dynamic_T_chpl this_chpl3;
#line 3180 "IO.chpl"
  locale call_tmp_chpl2 = NULL;
#line 3180 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl2;
#line 3180 "IO.chpl"
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl2;
#line 3180 "IO.chpl"
  channel_T_dynamic_T_chpl call_tmp_chpl3;
#line 3180 "IO.chpl"
  file_chpl coerce_tmp_chpl;
#line 3180 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 3180 "IO.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl2 = NULL;
#line 3180 "IO.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl3 = NULL;
#line 3180 "IO.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl4 = NULL;
#line 3180 "IO.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl5 = NULL;
#line 3180 "IO.chpl"
  channel_T_dynamic_T_chpl ret_to_arg_tmp__chpl;
#line 3180 "IO.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl6 = NULL;
#line 3268 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 3268 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 3268 "IO.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 3268 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 3268 "IO.chpl"
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3268 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 3268 "IO.chpl"
  wrap_call_tmp_chpl = _construct_channel_chpl(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, _ln_chpl, _fn_chpl);
#line 3268 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 3268 "IO.chpl"
  *(_retArg_chpl) = chpl__initCopy4(&wrap_call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 3269 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(3269), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 3269 "IO.chpl"
  check_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 3271 "IO.chpl"
  (&this_chpl3)->home_chpl = nil;
#line 3271 "IO.chpl"
  call_tmp_chpl2 = ((locale)(nil));
#line 3271 "IO.chpl"
  (&this_chpl3)->home_chpl = call_tmp_chpl2;
#line 3271 "IO.chpl"
  default_arg_channel_internal_chpl2 = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3271 "IO.chpl"
  (&this_chpl3)->_channel_internal_chpl = default_arg_channel_internal_chpl2;
#line 3271 "IO.chpl"
  wrap_call_tmp_chpl2 = _construct_channel_chpl(call_tmp_chpl2, default_arg_channel_internal_chpl2, &this_chpl3, _ln_chpl, _fn_chpl);
#line 3271 "IO.chpl"
  ret_chpl2 = wrap_call_tmp_chpl2;
#line 3273 "IO.chpl"
  coerce_tmp_chpl = *(this_chpl);
#line 3273 "IO.chpl"
  _ref_tmp__chpl = &_formal_tmp_error_chpl;
#line 3273 "IO.chpl"
  call_tmp_chpl3 = channel_chpl(&coerce_tmp_chpl, _ref_tmp__chpl, hints_chpl, start_chpl, end_chpl, style_chpl, _ln_chpl, _fn_chpl);
#line 3273 "IO.chpl"
  _ref_tmp__chpl2 = &ret_chpl2;
#line 3273 "IO.chpl"
  chpl___ASSIGN_3(_ref_tmp__chpl2, &call_tmp_chpl3, _ln_chpl, _fn_chpl);
#line 3273 "IO.chpl"
  _ref_tmp__chpl3 = &call_tmp_chpl3;
#line 3273 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 3275 "IO.chpl"
  _ref_tmp__chpl4 = &ret_chpl;
#line 3275 "IO.chpl"
  chpl___ASSIGN_3(_ref_tmp__chpl4, &ret_chpl2, _ln_chpl, _fn_chpl);
#line 3268 "IO.chpl"
  *(_retArg_chpl) = chpl__initCopy4(&ret_chpl, _ln_chpl, _fn_chpl);
#line 3268 "IO.chpl"
  *(error_chpl) = _formal_tmp_error_chpl;
#line 3271 "IO.chpl"
  _ref_tmp__chpl5 = &ret_chpl2;
#line 3271 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 3268 "IO.chpl"
  ret_to_arg_tmp__chpl = *(_retArg_chpl);
#line 3268 "IO.chpl"
  _ref_tmp__chpl6 = &ret_to_arg_tmp__chpl;
#line 3268 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl6, _ln_chpl, _fn_chpl);
#line 3268 "IO.chpl"
  return;
#line 3268 "IO.chpl"
}

#line 3268 "IO.chpl"
/* IO.chpl:3280 */
#line 3268 "IO.chpl"
static void writer_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 3268 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3268 "IO.chpl"
  channel_T_dynamic_T_chpl ret_chpl;
#line 3268 "IO.chpl"
  channel_T_dynamic_T_chpl this_chpl2;
#line 3268 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 3268 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl;
#line 3268 "IO.chpl"
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl;
#line 3268 "IO.chpl"
  channel_T_dynamic_T_chpl call_tmp_chpl2;
#line 3268 "IO.chpl"
  syserr err_chpl;
#line 3268 "IO.chpl"
  syserr type_tmp_chpl;
#line 3268 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 3268 "IO.chpl"
  syserr call_tmp_chpl3;
#line 3268 "IO.chpl"
  channel_T_dynamic_T_chpl ret_chpl2;
#line 3268 "IO.chpl"
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
#line 3268 "IO.chpl"
  _ref_syserr _ref_tmp__chpl2 = NULL;
#line 3268 "IO.chpl"
  int32_t call_tmp_chpl4;
#line 3268 "IO.chpl"
  chpl_bool call_tmp_chpl5;
#line 3268 "IO.chpl"
  chpl_string call_tmp_chpl6;
#line 3268 "IO.chpl"
  chpl_string call_tmp_chpl7;
#line 3268 "IO.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl3 = NULL;
#line 3268 "IO.chpl"
  channel_T_dynamic_T_chpl call_tmp_chpl8;
#line 3268 "IO.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl4 = NULL;
#line 3268 "IO.chpl"
  channel_T_dynamic_T_chpl ret_to_arg_tmp__chpl;
#line 3268 "IO.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl5 = NULL;
#line 3280 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 3280 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 3280 "IO.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 3280 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 3280 "IO.chpl"
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3280 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 3280 "IO.chpl"
  wrap_call_tmp_chpl = _construct_channel_chpl(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, _ln_chpl, _fn_chpl);
#line 3280 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 3280 "IO.chpl"
  call_tmp_chpl2 = chpl__initCopy4(&wrap_call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 3280 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl2;
#line 3282 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 3282 "IO.chpl"
  call_tmp_chpl3 = qio_int_to_err(INT32(0));
#line 3282 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl3;
#line 3282 "IO.chpl"
  err_chpl = type_tmp_chpl;
#line 3283 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &ret_chpl2;
#line 3283 "IO.chpl"
  _ref_tmp__chpl2 = &err_chpl;
#line 3283 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(3283), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 3283 "IO.chpl"
  writer_chpl(this_chpl, _ref_tmp__chpl2, start_chpl, end_chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 3285 "IO.chpl"
  call_tmp_chpl4 = qio_err_iserr(err_chpl);
#line 3285 "IO.chpl"
  call_tmp_chpl5 = (call_tmp_chpl4 != INT32(0));
#line 3285 "IO.chpl"
  if (call_tmp_chpl5) /* ZLINE: 3285 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl */
#line 3285 "IO.chpl"
  {
#line 3285 "IO.chpl"
    chpl_check_nil(this_chpl, INT64(3285), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 3285 "IO.chpl"
    call_tmp_chpl6 = tryGetPath_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 3285 "IO.chpl"
    string_from_c_string(&call_tmp_chpl7, "in file.writer", INT64(0), INT64(0), _ln_chpl, _fn_chpl);
#line 3285 "IO.chpl"
    ioerror_chpl(err_chpl, call_tmp_chpl7, call_tmp_chpl6, _ln_chpl, _fn_chpl);
#line 3285 "IO.chpl"
  }
#line 3286 "IO.chpl"
  _ref_tmp__chpl3 = &ret_chpl;
#line 3286 "IO.chpl"
  chpl___ASSIGN_3(_ref_tmp__chpl3, &ret_chpl2, _ln_chpl, _fn_chpl);
#line 3280 "IO.chpl"
  call_tmp_chpl8 = chpl__initCopy4(&ret_chpl, _ln_chpl, _fn_chpl);
#line 3280 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl8;
#line 3283 "IO.chpl"
  _ref_tmp__chpl4 = &ret_chpl2;
#line 3283 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 3280 "IO.chpl"
  ret_to_arg_tmp__chpl = *(_retArg_chpl);
#line 3280 "IO.chpl"
  _ref_tmp__chpl5 = &ret_to_arg_tmp__chpl;
#line 3280 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 3280 "IO.chpl"
  return;
#line 3280 "IO.chpl"
}


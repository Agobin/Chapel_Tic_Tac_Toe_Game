/* IO.chpl:1152 */
static void chpl__init_IO(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  string local__str_literal_2025_chpl;
  string local__str_literal_2023_chpl;
  string local__str_literal_2021_chpl;
  string local__str_literal_2019_chpl;
  string local__str_literal_2017_chpl;
  string local__str_literal_369_chpl;
  string local__str_literal_1868_chpl;
  string local__str_literal_1866_chpl;
  string local__str_literal_1864_chpl;
  string local__str_literal_1862_chpl;
  int32_t const_tmp_chpl;
  int32_t const_tmp_chpl2;
  int32_t const_tmp_chpl3;
  int32_t const_tmp_chpl4;
  string call_tmp_chpl;
  string call_tmp_chpl2;
  string call_tmp_chpl3;
  string call_tmp_chpl4;
  string call_tmp_chpl5;
  string call_tmp_chpl6;
  string call_tmp_chpl7;
  string call_tmp_chpl8;
  string call_tmp_chpl9;
  string call_tmp_chpl10;
  string call_tmp_chpl11;
  string call_tmp_chpl12;
  _ref_string _ref_tmp__chpl = NULL;
  _ref_string _ref_tmp__chpl2 = NULL;
  _ref_string _ref_tmp__chpl3 = NULL;
  _ref_string _ref_tmp__chpl4 = NULL;
  _ref_string _ref_tmp__chpl5 = NULL;
  _ref_string _ref_tmp__chpl6 = NULL;
  channel_F_dynamic_T_chpl type_tmp_chpl;
  channel_F_dynamic_T_chpl this_chpl;
  locale call_tmp_chpl13 = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl;
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
  file_chpl call_tmp_chpl14;
  int32_t call_tmp_chpl15;
  int32_t default_arghints_chpl;
  iostyle _autoCopy_tmp__chpl;
  _ref_iostyle ret_to_arg_ref_tmp__chpl2 = NULL;
  file_chpl _autoCopy_tmp__chpl2;
  _ref_file ret_to_arg_ref_tmp__chpl3 = NULL;
  channel_F_dynamic_T_chpl call_tmp_chpl16;
  _ref_file _ref_tmp__chpl7 = NULL;
  int32_t default_arghints_chpl2;
  iostyle _autoCopy_tmp__chpl3;
  _ref_iostyle ret_to_arg_ref_tmp__chpl4 = NULL;
  channel_F_dynamic_T_chpl _autoCopy_tmp__chpl4;
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl5 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl8 = NULL;
  channel_T_dynamic_T_chpl type_tmp_chpl2;
  channel_T_dynamic_T_chpl this_chpl2;
  locale call_tmp_chpl17 = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl2;
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl2;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl6 = NULL;
  _cfile call_tmp_chpl18;
  file_chpl call_tmp_chpl19;
  int32_t default_arghints_chpl3;
  iostyle _autoCopy_tmp__chpl5;
  _ref_iostyle ret_to_arg_ref_tmp__chpl7 = NULL;
  file_chpl _autoCopy_tmp__chpl6;
  _ref_file ret_to_arg_ref_tmp__chpl8 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl20;
  _ref_file _ref_tmp__chpl9 = NULL;
  iostyle _autoCopy_tmp__chpl7;
  _ref_iostyle ret_to_arg_ref_tmp__chpl9 = NULL;
  int32_t call_tmp_chpl21;
  channel_T_dynamic_T_chpl _autoCopy_tmp__chpl8;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl10 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl10 = NULL;
  channel_T_dynamic_T_chpl type_tmp_chpl3;
  channel_T_dynamic_T_chpl this_chpl3;
  locale call_tmp_chpl22 = NULL;
  qio_channel_ptr_t default_arg_channel_internal_chpl3;
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl3;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl11 = NULL;
  _cfile call_tmp_chpl23;
  file_chpl call_tmp_chpl24;
  int32_t default_arghints_chpl4;
  iostyle _autoCopy_tmp__chpl9;
  _ref_iostyle ret_to_arg_ref_tmp__chpl12 = NULL;
  file_chpl _autoCopy_tmp__chpl10;
  _ref_file ret_to_arg_ref_tmp__chpl13 = NULL;
  channel_T_dynamic_T_chpl call_tmp_chpl25;
  _ref_file _ref_tmp__chpl11 = NULL;
  iostyle _autoCopy_tmp__chpl11;
  _ref_iostyle ret_to_arg_ref_tmp__chpl14 = NULL;
  int32_t call_tmp_chpl26;
  channel_T_dynamic_T_chpl _autoCopy_tmp__chpl12;
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl15 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl12 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl13 = NULL;
  _ref_file _ref_tmp__chpl14 = NULL;
  _ref_channel_T_dynamic_T _ref_tmp__chpl15 = NULL;
  _ref_file _ref_tmp__chpl16 = NULL;
  _ref_channel_F_dynamic_T _ref_tmp__chpl17 = NULL;
  _ref_file _ref_tmp__chpl18 = NULL;
#line 1152 "IO.chpl"
  if (chpl__init_IO_p) /* ZLINE: 1152 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 1152 "IO.chpl"
  {
#line 1152 "IO.chpl"
    goto _exit_chpl__init_IO_chpl;
#line 1152 "IO.chpl"
  }
#line 1152 "IO.chpl"
  modFormatStr_chpl = "%*s\n";
#line 1152 "IO.chpl"
  modStr_chpl = "IO";
#line 1152 "IO.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(2), _ln_chpl, _fn_chpl);
#line 1152 "IO.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 1152 "IO.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 1152 "IO.chpl"
  chpl__init_IO_p = UINT8(true);
#line 1152 "IO.chpl"
  {
#line 1152 "IO.chpl"
    chpl__init_SysBasic(_ln_chpl, _fn_chpl);
#line 1152 "IO.chpl"
    chpl__init_Error(_ln_chpl, _fn_chpl);
#line 1152 "IO.chpl"
    chpl__init_Regexp(_ln_chpl, _fn_chpl);
#line 1152 "IO.chpl"
  }
#line 3993 "IO.chpl"
  local__str_literal_2025_chpl = _str_literal_2025;
#line 3993 "IO.chpl"
  local__str_literal_2023_chpl = _str_literal_2023;
#line 3993 "IO.chpl"
  local__str_literal_2021_chpl = _str_literal_2021;
#line 3993 "IO.chpl"
  local__str_literal_2019_chpl = _str_literal_2019;
#line 3993 "IO.chpl"
  local__str_literal_2017_chpl = _str_literal_2017;
#line 3993 "IO.chpl"
  local__str_literal_369_chpl = _str_literal_369;
#line 2215 "IO.chpl"
  local__str_literal_1868_chpl = _str_literal_1868;
#line 2214 "IO.chpl"
  local__str_literal_1866_chpl = _str_literal_1866;
#line 2213 "IO.chpl"
  local__str_literal_1864_chpl = _str_literal_1864;
#line 2212 "IO.chpl"
  local__str_literal_1862_chpl = _str_literal_1862;
#line 1424 "IO.chpl"
  IOHINT_NONE_chpl = INT32(0);
#line 1427 "IO.chpl"
  const_tmp_chpl = QIO_HINT_RANDOM;
#line 1427 "IO.chpl"
  IOHINT_RANDOM_chpl = const_tmp_chpl;
#line 1432 "IO.chpl"
  const_tmp_chpl2 = QIO_HINT_SEQUENTIAL;
#line 1432 "IO.chpl"
  IOHINT_SEQUENTIAL_chpl = const_tmp_chpl2;
#line 1438 "IO.chpl"
  const_tmp_chpl3 = QIO_HINT_CACHED;
#line 1438 "IO.chpl"
  IOHINT_CACHED_chpl = const_tmp_chpl3;
#line 1445 "IO.chpl"
  const_tmp_chpl4 = QIO_HINT_PARALLEL;
#line 1445 "IO.chpl"
  IOHINT_PARALLEL_chpl = const_tmp_chpl4;
#line 2212 "IO.chpl"
  _r_chpl = local__str_literal_1862_chpl;
#line 2213 "IO.chpl"
  _rw_chpl = local__str_literal_1864_chpl;
#line 2214 "IO.chpl"
  _cw_chpl = local__str_literal_1866_chpl;
#line 2215 "IO.chpl"
  _cwr_chpl = local__str_literal_1868_chpl;
#line 3993 "IO.chpl"
  call_tmp_chpl = chpl__initCopy3(&local__str_literal_369_chpl, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl2 = chpl__initCopy3(&local__str_literal_2017_chpl, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl3 = chpl__initCopy3(&local__str_literal_2019_chpl, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl4 = chpl__initCopy3(&local__str_literal_2021_chpl, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl5 = chpl__initCopy3(&local__str_literal_2023_chpl, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl6 = chpl__initCopy3(&local__str_literal_2025_chpl, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl7 = chpl__autoCopy8(&call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl8 = chpl__autoCopy8(&call_tmp_chpl2, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl9 = chpl__autoCopy8(&call_tmp_chpl3, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl10 = chpl__autoCopy8(&call_tmp_chpl4, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl11 = chpl__autoCopy8(&call_tmp_chpl5, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  call_tmp_chpl12 = chpl__autoCopy8(&call_tmp_chpl6, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  _ref_tmp__chpl = &call_tmp_chpl6;
#line 3993 "IO.chpl"
  chpl___TILDE_string(_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  _ref_tmp__chpl2 = &call_tmp_chpl5;
#line 3993 "IO.chpl"
  chpl___TILDE_string(_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  _ref_tmp__chpl3 = &call_tmp_chpl4;
#line 3993 "IO.chpl"
  chpl___TILDE_string(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  _ref_tmp__chpl4 = &call_tmp_chpl3;
#line 3993 "IO.chpl"
  chpl___TILDE_string(_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  _ref_tmp__chpl5 = &call_tmp_chpl2;
#line 3993 "IO.chpl"
  chpl___TILDE_string(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  _ref_tmp__chpl6 = &call_tmp_chpl;
#line 3993 "IO.chpl"
  chpl___TILDE_string(_ref_tmp__chpl6, _ln_chpl, _fn_chpl);
#line 3993 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(0)) = call_tmp_chpl7;
#line 3993 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(1)) = call_tmp_chpl8;
#line 3993 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(2)) = call_tmp_chpl9;
#line 3993 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(3)) = call_tmp_chpl10;
#line 3993 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(4)) = call_tmp_chpl11;
#line 3993 "IO.chpl"
  *(_arg_to_proto_names_chpl + INT64(5)) = call_tmp_chpl12;
#line 4814 "IO.chpl"
  (&this_chpl)->home_chpl = nil;
#line 4814 "IO.chpl"
  call_tmp_chpl13 = ((locale)(nil));
#line 4814 "IO.chpl"
  (&this_chpl)->home_chpl = call_tmp_chpl13;
#line 4814 "IO.chpl"
  default_arg_channel_internal_chpl = QIO_CHANNEL_PTR_NULL;
#line 4814 "IO.chpl"
  (&this_chpl)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 4814 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
#line 4814 "IO.chpl"
  _construct_channel_chpl2(call_tmp_chpl13, default_arg_channel_internal_chpl, &this_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 4814 "IO.chpl"
  type_tmp_chpl = wrap_call_tmp_chpl;
#line 4814 "IO.chpl"
  call_tmp_chpl15 = ((int32_t)(INT64(0)));
#line 4814 "IO.chpl"
  default_arghints_chpl = IOHINT_NONE_chpl;
#line 4814 "IO.chpl"
  ret_to_arg_ref_tmp__chpl2 = &_autoCopy_tmp__chpl;
#line 4814 "IO.chpl"
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 4814 "IO.chpl"
  ret_to_arg_ref_tmp__chpl3 = &_autoCopy_tmp__chpl2;
#line 4814 "IO.chpl"
  openfd_chpl2(call_tmp_chpl15, default_arghints_chpl, &_autoCopy_tmp__chpl, ret_to_arg_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 4814 "IO.chpl"
  call_tmp_chpl14 = _autoCopy_tmp__chpl2;
#line 4814 "IO.chpl"
  _ref_tmp__chpl7 = &call_tmp_chpl14;
#line 4814 "IO.chpl"
  default_arghints_chpl2 = IOHINT_NONE_chpl;
#line 4814 "IO.chpl"
  ret_to_arg_ref_tmp__chpl4 = &_autoCopy_tmp__chpl3;
#line 4814 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl7, INT64(4814), INT64(54));
#line 4814 "IO.chpl"
  _style_chpl(_ref_tmp__chpl7, ret_to_arg_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 4814 "IO.chpl"
  ret_to_arg_ref_tmp__chpl5 = &_autoCopy_tmp__chpl4;
#line 4814 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl7, INT64(4814), INT64(54));
#line 4814 "IO.chpl"
  reader_chpl2(_ref_tmp__chpl7, INT64(0), INT64(9223372036854775807), default_arghints_chpl2, &_autoCopy_tmp__chpl3, ret_to_arg_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 4814 "IO.chpl"
  call_tmp_chpl16 = _autoCopy_tmp__chpl4;
#line 4814 "IO.chpl"
  _ref_tmp__chpl8 = &type_tmp_chpl;
#line 4814 "IO.chpl"
  chpl___ASSIGN_3(_ref_tmp__chpl8, &_autoCopy_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 4814 "IO.chpl"
  stdin_chpl = type_tmp_chpl;
#line 4816 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 4816 "IO.chpl"
  call_tmp_chpl17 = ((locale)(nil));
#line 4816 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl17;
#line 4816 "IO.chpl"
  default_arg_channel_internal_chpl2 = QIO_CHANNEL_PTR_NULL;
#line 4816 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl2;
#line 4816 "IO.chpl"
  ret_to_arg_ref_tmp__chpl6 = &wrap_call_tmp_chpl2;
#line 4816 "IO.chpl"
  _construct_channel_chpl(call_tmp_chpl17, default_arg_channel_internal_chpl2, &this_chpl2, ret_to_arg_ref_tmp__chpl6, _ln_chpl, _fn_chpl);
#line 4816 "IO.chpl"
  type_tmp_chpl2 = wrap_call_tmp_chpl2;
#line 4816 "IO.chpl"
  call_tmp_chpl18 = chpl_cstdout();
#line 4816 "IO.chpl"
  default_arghints_chpl3 = IOHINT_NONE_chpl;
#line 4816 "IO.chpl"
  ret_to_arg_ref_tmp__chpl7 = &_autoCopy_tmp__chpl5;
#line 4816 "IO.chpl"
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl7, _ln_chpl, _fn_chpl);
#line 4816 "IO.chpl"
  ret_to_arg_ref_tmp__chpl8 = &_autoCopy_tmp__chpl6;
#line 4816 "IO.chpl"
  openfp_chpl2(call_tmp_chpl18, default_arghints_chpl3, &_autoCopy_tmp__chpl5, ret_to_arg_ref_tmp__chpl8, _ln_chpl, _fn_chpl);
#line 4816 "IO.chpl"
  call_tmp_chpl19 = _autoCopy_tmp__chpl6;
#line 4816 "IO.chpl"
  _ref_tmp__chpl9 = &call_tmp_chpl19;
#line 4816 "IO.chpl"
  ret_to_arg_ref_tmp__chpl9 = &_autoCopy_tmp__chpl7;
#line 4816 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl9, INT64(4816), INT64(54));
#line 4816 "IO.chpl"
  _style_chpl(_ref_tmp__chpl9, ret_to_arg_ref_tmp__chpl9, _ln_chpl, _fn_chpl);
#line 4816 "IO.chpl"
  call_tmp_chpl21 = ((int32_t)(INT64(0)));
#line 4816 "IO.chpl"
  ret_to_arg_ref_tmp__chpl10 = &_autoCopy_tmp__chpl8;
#line 4816 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl9, INT64(4816), INT64(54));
#line 4816 "IO.chpl"
  writer_chpl2(_ref_tmp__chpl9, INT64(0), INT64(9223372036854775807), call_tmp_chpl21, &_autoCopy_tmp__chpl7, ret_to_arg_ref_tmp__chpl10, _ln_chpl, _fn_chpl);
#line 4816 "IO.chpl"
  call_tmp_chpl20 = _autoCopy_tmp__chpl8;
#line 4816 "IO.chpl"
  _ref_tmp__chpl10 = &type_tmp_chpl2;
#line 4816 "IO.chpl"
  chpl___ASSIGN_4(_ref_tmp__chpl10, &_autoCopy_tmp__chpl8, _ln_chpl, _fn_chpl);
#line 4816 "IO.chpl"
  stdout_chpl = type_tmp_chpl2;
#line 4818 "IO.chpl"
  (&this_chpl3)->home_chpl = nil;
#line 4818 "IO.chpl"
  call_tmp_chpl22 = ((locale)(nil));
#line 4818 "IO.chpl"
  (&this_chpl3)->home_chpl = call_tmp_chpl22;
#line 4818 "IO.chpl"
  default_arg_channel_internal_chpl3 = QIO_CHANNEL_PTR_NULL;
#line 4818 "IO.chpl"
  (&this_chpl3)->_channel_internal_chpl = default_arg_channel_internal_chpl3;
#line 4818 "IO.chpl"
  ret_to_arg_ref_tmp__chpl11 = &wrap_call_tmp_chpl3;
#line 4818 "IO.chpl"
  _construct_channel_chpl(call_tmp_chpl22, default_arg_channel_internal_chpl3, &this_chpl3, ret_to_arg_ref_tmp__chpl11, _ln_chpl, _fn_chpl);
#line 4818 "IO.chpl"
  type_tmp_chpl3 = wrap_call_tmp_chpl3;
#line 4818 "IO.chpl"
  call_tmp_chpl23 = chpl_cstderr();
#line 4818 "IO.chpl"
  default_arghints_chpl4 = IOHINT_NONE_chpl;
#line 4818 "IO.chpl"
  ret_to_arg_ref_tmp__chpl12 = &_autoCopy_tmp__chpl9;
#line 4818 "IO.chpl"
  defaultIOStyle_chpl(ret_to_arg_ref_tmp__chpl12, _ln_chpl, _fn_chpl);
#line 4818 "IO.chpl"
  ret_to_arg_ref_tmp__chpl13 = &_autoCopy_tmp__chpl10;
#line 4818 "IO.chpl"
  openfp_chpl2(call_tmp_chpl23, default_arghints_chpl4, &_autoCopy_tmp__chpl9, ret_to_arg_ref_tmp__chpl13, _ln_chpl, _fn_chpl);
#line 4818 "IO.chpl"
  call_tmp_chpl24 = _autoCopy_tmp__chpl10;
#line 4818 "IO.chpl"
  _ref_tmp__chpl11 = &call_tmp_chpl24;
#line 4818 "IO.chpl"
  ret_to_arg_ref_tmp__chpl14 = &_autoCopy_tmp__chpl11;
#line 4818 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl11, INT64(4818), INT64(54));
#line 4818 "IO.chpl"
  _style_chpl(_ref_tmp__chpl11, ret_to_arg_ref_tmp__chpl14, _ln_chpl, _fn_chpl);
#line 4818 "IO.chpl"
  call_tmp_chpl26 = ((int32_t)(INT64(0)));
#line 4818 "IO.chpl"
  ret_to_arg_ref_tmp__chpl15 = &_autoCopy_tmp__chpl12;
#line 4818 "IO.chpl"
  chpl_check_nil(_ref_tmp__chpl11, INT64(4818), INT64(54));
#line 4818 "IO.chpl"
  writer_chpl2(_ref_tmp__chpl11, INT64(0), INT64(9223372036854775807), call_tmp_chpl26, &_autoCopy_tmp__chpl11, ret_to_arg_ref_tmp__chpl15, _ln_chpl, _fn_chpl);
#line 4818 "IO.chpl"
  call_tmp_chpl25 = _autoCopy_tmp__chpl12;
#line 4818 "IO.chpl"
  _ref_tmp__chpl12 = &type_tmp_chpl3;
#line 4818 "IO.chpl"
  chpl___ASSIGN_4(_ref_tmp__chpl12, &_autoCopy_tmp__chpl12, _ln_chpl, _fn_chpl);
#line 4818 "IO.chpl"
  stderr_chpl = type_tmp_chpl3;
#line 4818 "IO.chpl"
  _ref_tmp__chpl13 = &call_tmp_chpl25;
#line 4818 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl13, _ln_chpl, _fn_chpl);
#line 4818 "IO.chpl"
  _ref_tmp__chpl14 = &call_tmp_chpl24;
#line 4818 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl14, _ln_chpl, _fn_chpl);
#line 4816 "IO.chpl"
  _ref_tmp__chpl15 = &call_tmp_chpl20;
#line 4816 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl15, _ln_chpl, _fn_chpl);
#line 4816 "IO.chpl"
  _ref_tmp__chpl16 = &call_tmp_chpl19;
#line 4816 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl16, _ln_chpl, _fn_chpl);
#line 4814 "IO.chpl"
  _ref_tmp__chpl17 = &call_tmp_chpl16;
#line 4814 "IO.chpl"
  chpl___TILDE_channel(_ref_tmp__chpl17, _ln_chpl, _fn_chpl);
#line 4814 "IO.chpl"
  _ref_tmp__chpl18 = &call_tmp_chpl14;
#line 4814 "IO.chpl"
  chpl___TILDE_file(_ref_tmp__chpl18, _ln_chpl, _fn_chpl);
#line 1152 "IO.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 1152 "IO.chpl"
  _exit_chpl__init_IO_chpl:;
#line 1152 "IO.chpl"
  return;
#line 1152 "IO.chpl"
}

#line 1152 "IO.chpl"
/* IO.chpl:1847 */
#line 1152 "IO.chpl"
static void defaultIOStyle_chpl(_ref_iostyle _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 1152 "IO.chpl"
  iostyle ret_chpl;
#line 1152 "IO.chpl"
  iostyle type_tmp_chpl;
#line 1152 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 1848 "IO.chpl"
  ret_chpl = type_tmp_chpl;
#line 1849 "IO.chpl"
  _ref_tmp__chpl = &ret_chpl;
#line 1849 "IO.chpl"
  qio_style_init_default(_ref_tmp__chpl);
#line 1847 "IO.chpl"
  *(_retArg_chpl) = ret_chpl;
#line 1847 "IO.chpl"
  return;
#line 1847 "IO.chpl"
}

#line 1847 "IO.chpl"
/* IO.chpl:1980 */
#line 1847 "IO.chpl"
static void _construct_file_chpl(locale home_chpl, qio_file_ptr_t _file_internal_chpl, file_chpl* const meme_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 1847 "IO.chpl"
  file_chpl this_chpl;
#line 1980 "IO.chpl"
  this_chpl = *(meme_chpl);
#line 1982 "IO.chpl"
  (&this_chpl)->home_chpl = home_chpl;
#line 1984 "IO.chpl"
  (&this_chpl)->_file_internal_chpl = _file_internal_chpl;
#line 1980 "IO.chpl"
  *(_retArg_chpl) = this_chpl;
#line 1980 "IO.chpl"
  return;
#line 1980 "IO.chpl"
}

#line 1980 "IO.chpl"
/* IO.chpl:2014 */
#line 1980 "IO.chpl"
static void check_chpl(_ref_file this_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 1980 "IO.chpl"
  string local__str_literal_1846_chpl;
#line 1980 "IO.chpl"
  chpl_bool call_tmp_chpl;
#line 1980 "IO.chpl"
  qio_file_ptr_t coerce_tmp_chpl;
#line 2016 "IO.chpl"
  local__str_literal_1846_chpl = _str_literal_1846;
#line 2015 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2015), INT64(54));
#line 2015 "IO.chpl"
  coerce_tmp_chpl = (this_chpl)->_file_internal_chpl;
#line 2015 "IO.chpl"
  call_tmp_chpl = is_c_nil(coerce_tmp_chpl);
#line 2015 "IO.chpl"
  if (call_tmp_chpl) /* ZLINE: 2016 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2015 "IO.chpl"
  {
#line 2016 "IO.chpl"
    halt(&local__str_literal_1846_chpl, _ln_chpl, _fn_chpl);
#line 2016 "IO.chpl"
  }
#line 2014 "IO.chpl"
  return;
#line 2014 "IO.chpl"
}

#line 2014 "IO.chpl"
/* IO.chpl:2021 */
#line 2014 "IO.chpl"
static void chpl___TILDE_file(_ref_file this_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2014 "IO.chpl"
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
#line 2014 "IO.chpl"
  qio_file_ptr_t coerce_tmp_chpl;
#line 2014 "IO.chpl"
  _ref_qio_file_ptr_t call_tmp_chpl = NULL;
#line 2024 "IO.chpl"
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
#line 2023 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2023), INT64(54));
#line 2023 "IO.chpl"
  coerce_tmp_chpl = (this_chpl)->_file_internal_chpl;
#line 2023 "IO.chpl"
  qio_file_release(coerce_tmp_chpl);
#line 2024 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2024), INT64(54));
#line 2024 "IO.chpl"
  call_tmp_chpl = &((this_chpl)->_file_internal_chpl);
#line 2024 "IO.chpl"
  *(call_tmp_chpl) = local_QIO_FILE_PTR_NULL_chpl;
#line 2021 "IO.chpl"
  return;
#line 2021 "IO.chpl"
}

#line 2021 "IO.chpl"
/* IO.chpl:2048 */
#line 2021 "IO.chpl"
static void _style_chpl(_ref_file this_chpl, _ref_iostyle _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2021 "IO.chpl"
  iostyle local_style_chpl;
#line 2021 "IO.chpl"
  iostyle type_tmp_chpl;
#line 2021 "IO.chpl"
  qio_file_ptr_t coerce_tmp_chpl;
#line 2021 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 2049 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2049), INT64(54));
#line 2049 "IO.chpl"
  check_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 2053 "IO.chpl"
  local_style_chpl = type_tmp_chpl;
#line 2054 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2054), INT64(54));
#line 2054 "IO.chpl"
  coerce_tmp_chpl = (this_chpl)->_file_internal_chpl;
#line 2054 "IO.chpl"
  _ref_tmp__chpl = &local_style_chpl;
#line 2054 "IO.chpl"
  qio_file_get_style(coerce_tmp_chpl, _ref_tmp__chpl);
#line 2048 "IO.chpl"
  *(_retArg_chpl) = local_style_chpl;
#line 2048 "IO.chpl"
  return;
#line 2048 "IO.chpl"
}

#line 2048 "IO.chpl"
/* IO.chpl:2147 */
#line 2048 "IO.chpl"
static void getPath_chpl(_ref_file this_chpl, _ref_syserr error_chpl, _ref_string _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2048 "IO.chpl"
  string local__str_literal_1855_chpl;
#line 2048 "IO.chpl"
  syserr _formal_tmp_error_chpl;
#line 2048 "IO.chpl"
  string ret_chpl;
#line 2048 "IO.chpl"
  string this_chpl2;
#line 2048 "IO.chpl"
  c_ptr_uint8_t call_tmp_chpl = NULL;
#line 2048 "IO.chpl"
  int32_t default_arglocale_id_chpl;
#line 2048 "IO.chpl"
  string wrap_call_tmp_chpl;
#line 2048 "IO.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
#line 2048 "IO.chpl"
  c_string_copy tmp_chpl;
#line 2048 "IO.chpl"
  c_string_copy ret_chpl2;
#line 2048 "IO.chpl"
  c_string_copy tmp2_chpl;
#line 2048 "IO.chpl"
  c_string_copy ret_chpl3;
#line 2048 "IO.chpl"
  syserr call_tmp_chpl2;
#line 2048 "IO.chpl"
  qio_file_ptr_t coerce_tmp_chpl;
#line 2048 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl = NULL;
#line 2048 "IO.chpl"
  int32_t call_tmp_chpl3;
#line 2048 "IO.chpl"
  chpl_bool call_tmp_chpl4;
#line 2048 "IO.chpl"
  syserr call_tmp_chpl5;
#line 2048 "IO.chpl"
  qio_file_ptr_t coerce_tmp_chpl2;
#line 2048 "IO.chpl"
  c_string call_tmp_chpl6;
#line 2048 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl2 = NULL;
#line 2048 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl3 = NULL;
#line 2048 "IO.chpl"
  c_string call_tmp_chpl7;
#line 2048 "IO.chpl"
  c_string call_tmp_chpl8;
#line 2048 "IO.chpl"
  int64_t call_tmp_chpl9;
#line 2048 "IO.chpl"
  chpl_bool call_tmp_chpl10;
#line 2048 "IO.chpl"
  string call_tmp_chpl11;
#line 2048 "IO.chpl"
  string tmp_chpl2;
#line 2048 "IO.chpl"
  int32_t call_tmp_chpl12;
#line 2048 "IO.chpl"
  chpl_bool call_tmp_chpl13;
#line 2048 "IO.chpl"
  c_string call_tmp_chpl14;
#line 2048 "IO.chpl"
  string wrap_call_tmp_chpl2;
#line 2048 "IO.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
#line 2048 "IO.chpl"
  _ref_string _ref_tmp__chpl4 = NULL;
#line 2048 "IO.chpl"
  _ref_string _ref_tmp__chpl5 = NULL;
#line 2158 "IO.chpl"
  local__str_literal_1855_chpl = _str_literal_1855;
#line 2148 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2148), INT64(54));
#line 2148 "IO.chpl"
  check_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 2149 "IO.chpl"
  (&this_chpl2)->len = INT64(0);
#line 2149 "IO.chpl"
  (&this_chpl2)->_size = INT64(0);
#line 2149 "IO.chpl"
  (&this_chpl2)->buff = nil;
#line 2149 "IO.chpl"
  (&this_chpl2)->owned = UINT8(false);
#line 2149 "IO.chpl"
  (&this_chpl2)->locale_id = INT32(0);
#line 2149 "IO.chpl"
  (&this_chpl2)->len = INT64(0);
#line 2149 "IO.chpl"
  (&this_chpl2)->_size = INT64(0);
#line 2149 "IO.chpl"
  call_tmp_chpl = ((c_ptr_uint8_t)(nil));
#line 2149 "IO.chpl"
  (&this_chpl2)->buff = call_tmp_chpl;
#line 2149 "IO.chpl"
  (&this_chpl2)->owned = UINT8(true);
#line 2149 "IO.chpl"
  default_arglocale_id_chpl = chpl_nodeID;
#line 2149 "IO.chpl"
  (&this_chpl2)->locale_id = default_arglocale_id_chpl;
#line 2149 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
#line 2149 "IO.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp_chpl, UINT8(true), default_arglocale_id_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2149 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 2151 "IO.chpl"
  ret_chpl2 = NULL;
#line 2151 "IO.chpl"
  tmp_chpl = ret_chpl2;
#line 2152 "IO.chpl"
  ret_chpl3 = NULL;
#line 2152 "IO.chpl"
  tmp2_chpl = ret_chpl3;
#line 2153 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2153), INT64(54));
#line 2153 "IO.chpl"
  coerce_tmp_chpl = (this_chpl)->_file_internal_chpl;
#line 2153 "IO.chpl"
  _ref_tmp__chpl = &tmp_chpl;
#line 2153 "IO.chpl"
  call_tmp_chpl2 = qio_file_path(coerce_tmp_chpl, _ref_tmp__chpl);
#line 2153 "IO.chpl"
  _formal_tmp_error_chpl = call_tmp_chpl2;
#line 2154 "IO.chpl"
  call_tmp_chpl3 = qio_err_iserr(call_tmp_chpl2);
#line 2154 "IO.chpl"
  call_tmp_chpl4 = (call_tmp_chpl3 == INT32(0));
#line 2154 "IO.chpl"
  if (call_tmp_chpl4) /* ZLINE: 2155 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2154 "IO.chpl"
  {
#line 2155 "IO.chpl"
    chpl_check_nil(this_chpl, INT64(2155), INT64(54));
#line 2155 "IO.chpl"
    coerce_tmp_chpl2 = (this_chpl)->_file_internal_chpl;
#line 2155 "IO.chpl"
    call_tmp_chpl6 = ((c_string)(tmp_chpl));
#line 2155 "IO.chpl"
    _ref_tmp__chpl2 = &tmp2_chpl;
#line 2155 "IO.chpl"
    call_tmp_chpl5 = qio_shortest_path(coerce_tmp_chpl2, _ref_tmp__chpl2, call_tmp_chpl6);
#line 2155 "IO.chpl"
    _formal_tmp_error_chpl = call_tmp_chpl5;
#line 2155 "IO.chpl"
  }
#line 2157 "IO.chpl"
  _ref_tmp__chpl3 = &tmp_chpl;
#line 2157 "IO.chpl"
  call_tmp_chpl7 = ((c_string)(tmp_chpl));
#line 2157 "IO.chpl"
  call_tmp_chpl8 = ((c_string)(NULL));
#line 2157 "IO.chpl"
  call_tmp_chpl9 = string_compare(call_tmp_chpl7, call_tmp_chpl8);
#line 2157 "IO.chpl"
  call_tmp_chpl10 = (call_tmp_chpl9 != INT64(0));
#line 2157 "IO.chpl"
  if (call_tmp_chpl10) /* ZLINE: 2157 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2157 "IO.chpl"
  {
#line 2157 "IO.chpl"
    chpl_rt_free_c_string(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 2157 "IO.chpl"
  }
#line 2158 "IO.chpl"
  call_tmp_chpl12 = qio_err_iserr(_formal_tmp_error_chpl);
#line 2158 "IO.chpl"
  call_tmp_chpl13 = (call_tmp_chpl12 != INT32(0));
#line 2158 "IO.chpl"
  if (call_tmp_chpl13) /* ZLINE: 2158 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2158 "IO.chpl"
  {
#line 2158 "IO.chpl"
    tmp_chpl2 = chpl__autoCopy8(&local__str_literal_1855_chpl, _ln_chpl, _fn_chpl);
#line 2158 "IO.chpl"
  } else /* ZLINE: 2158 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2158 "IO.chpl"
  {
#line 2158 "IO.chpl"
    call_tmp_chpl14 = ((c_string)(tmp2_chpl));
#line 2158 "IO.chpl"
    ret_to_arg_ref_tmp__chpl2 = &wrap_call_tmp_chpl2;
#line 2158 "IO.chpl"
    string3(call_tmp_chpl14, UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 2158 "IO.chpl"
    tmp_chpl2 = wrap_call_tmp_chpl2;
#line 2158 "IO.chpl"
  }
#line 2158 "IO.chpl"
  call_tmp_chpl11 = tmp_chpl2;
#line 2158 "IO.chpl"
  _ref_tmp__chpl4 = &ret_chpl;
#line 2158 "IO.chpl"
  chpl___ASSIGN_2(_ref_tmp__chpl4, &tmp_chpl2, _ln_chpl, _fn_chpl);
#line 2158 "IO.chpl"
  _ref_tmp__chpl5 = &call_tmp_chpl11;
#line 2158 "IO.chpl"
  chpl___TILDE_string(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 2147 "IO.chpl"
  *(error_chpl) = _formal_tmp_error_chpl;
#line 2147 "IO.chpl"
  *(_retArg_chpl) = ret_chpl;
#line 2147 "IO.chpl"
  return;
#line 2147 "IO.chpl"
}

#line 2147 "IO.chpl"
/* IO.chpl:2170 */
#line 2147 "IO.chpl"
static void tryGetPath_chpl(_ref_file this_chpl, _ref_string _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2147 "IO.chpl"
  string local__str_literal_1855_chpl;
#line 2147 "IO.chpl"
  string ret_chpl;
#line 2147 "IO.chpl"
  syserr err_chpl;
#line 2147 "IO.chpl"
  syserr type_tmp_chpl;
#line 2147 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 2147 "IO.chpl"
  syserr call_tmp_chpl;
#line 2147 "IO.chpl"
  string ret_chpl2;
#line 2147 "IO.chpl"
  string this_chpl2;
#line 2147 "IO.chpl"
  c_ptr_uint8_t call_tmp_chpl2 = NULL;
#line 2147 "IO.chpl"
  int32_t default_arglocale_id_chpl;
#line 2147 "IO.chpl"
  string wrap_call_tmp_chpl;
#line 2147 "IO.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
#line 2147 "IO.chpl"
  string call_tmp_chpl3;
#line 2147 "IO.chpl"
  string _autoCopy_tmp__chpl;
#line 2147 "IO.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
#line 2147 "IO.chpl"
  _ref_syserr _ref_tmp__chpl2 = NULL;
#line 2147 "IO.chpl"
  _ref_string _ref_tmp__chpl3 = NULL;
#line 2147 "IO.chpl"
  int32_t call_tmp_chpl4;
#line 2147 "IO.chpl"
  chpl_bool call_tmp_chpl5;
#line 2147 "IO.chpl"
  _ref_string _ref_tmp__chpl4 = NULL;
#line 2147 "IO.chpl"
  _ref_string _ref_tmp__chpl5 = NULL;
#line 2147 "IO.chpl"
  _ref_string _ref_tmp__chpl6 = NULL;
#line 2174 "IO.chpl"
  local__str_literal_1855_chpl = _str_literal_1855;
#line 2171 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 2171 "IO.chpl"
  call_tmp_chpl = qio_int_to_err(INT32(0));
#line 2171 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl;
#line 2171 "IO.chpl"
  err_chpl = type_tmp_chpl;
#line 2172 "IO.chpl"
  (&this_chpl2)->len = INT64(0);
#line 2172 "IO.chpl"
  (&this_chpl2)->_size = INT64(0);
#line 2172 "IO.chpl"
  (&this_chpl2)->buff = nil;
#line 2172 "IO.chpl"
  (&this_chpl2)->owned = UINT8(false);
#line 2172 "IO.chpl"
  (&this_chpl2)->locale_id = INT32(0);
#line 2172 "IO.chpl"
  (&this_chpl2)->len = INT64(0);
#line 2172 "IO.chpl"
  (&this_chpl2)->_size = INT64(0);
#line 2172 "IO.chpl"
  call_tmp_chpl2 = ((c_ptr_uint8_t)(nil));
#line 2172 "IO.chpl"
  (&this_chpl2)->buff = call_tmp_chpl2;
#line 2172 "IO.chpl"
  (&this_chpl2)->owned = UINT8(true);
#line 2172 "IO.chpl"
  default_arglocale_id_chpl = chpl_nodeID;
#line 2172 "IO.chpl"
  (&this_chpl2)->locale_id = default_arglocale_id_chpl;
#line 2172 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
#line 2172 "IO.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp_chpl2, UINT8(true), default_arglocale_id_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2172 "IO.chpl"
  ret_chpl2 = wrap_call_tmp_chpl;
#line 2173 "IO.chpl"
  ret_to_arg_ref_tmp__chpl2 = &_autoCopy_tmp__chpl;
#line 2173 "IO.chpl"
  _ref_tmp__chpl2 = &err_chpl;
#line 2173 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2173), INT64(54));
#line 2173 "IO.chpl"
  getPath_chpl(this_chpl, _ref_tmp__chpl2, ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 2173 "IO.chpl"
  call_tmp_chpl3 = _autoCopy_tmp__chpl;
#line 2173 "IO.chpl"
  _ref_tmp__chpl3 = &ret_chpl2;
#line 2173 "IO.chpl"
  chpl___ASSIGN_2(_ref_tmp__chpl3, &_autoCopy_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2174 "IO.chpl"
  call_tmp_chpl4 = qio_err_iserr(err_chpl);
#line 2174 "IO.chpl"
  call_tmp_chpl5 = (call_tmp_chpl4 != INT32(0));
#line 2174 "IO.chpl"
  if (call_tmp_chpl5) /* ZLINE: 2174 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2174 "IO.chpl"
  {
#line 2174 "IO.chpl"
    ret_chpl = chpl__autoCopy8(&local__str_literal_1855_chpl, _ln_chpl, _fn_chpl);
#line 2173 "IO.chpl"
    _ref_tmp__chpl4 = &call_tmp_chpl3;
#line 2173 "IO.chpl"
    chpl___TILDE_string(_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 2172 "IO.chpl"
    _ref_tmp__chpl5 = &ret_chpl2;
#line 2172 "IO.chpl"
    chpl___TILDE_string(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 2174 "IO.chpl"
    goto _end_tryGetPath_chpl;
#line 2174 "IO.chpl"
  } else /* ZLINE: 2174 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2174 "IO.chpl"
  {
#line 2175 "IO.chpl"
    ret_chpl = ret_chpl2;
#line 2173 "IO.chpl"
    _ref_tmp__chpl6 = &call_tmp_chpl3;
#line 2173 "IO.chpl"
    chpl___TILDE_string(_ref_tmp__chpl6, _ln_chpl, _fn_chpl);
#line 2175 "IO.chpl"
    goto _end_tryGetPath_chpl;
#line 2175 "IO.chpl"
  }
#line 2175 "IO.chpl"
  _end_tryGetPath_chpl:;
#line 2170 "IO.chpl"
  *(_retArg_chpl) = ret_chpl;
#line 2170 "IO.chpl"
  return;
#line 2170 "IO.chpl"
}

#line 2170 "IO.chpl"
/* IO.chpl:2421 */
#line 2170 "IO.chpl"
static void openfd_chpl(int32_t fd_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2170 "IO.chpl"
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
#line 2170 "IO.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 2170 "IO.chpl"
  iostyle local_style_chpl;
#line 2170 "IO.chpl"
  file_chpl ret_chpl;
#line 2170 "IO.chpl"
  file_chpl this_chpl;
#line 2170 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 2170 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 2170 "IO.chpl"
  qio_file_ptr_t default_arg_file_internal_chpl;
#line 2170 "IO.chpl"
  file_chpl wrap_call_tmp_chpl;
#line 2170 "IO.chpl"
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
#line 2170 "IO.chpl"
  _ref_locale call_tmp_chpl2 = NULL;
#line 2170 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl2;
#line 2170 "IO.chpl"
  locale call_tmp_chpl3 = NULL;
#line 2170 "IO.chpl"
  _ref_qio_file_ptr_t call_tmp_chpl4 = NULL;
#line 2170 "IO.chpl"
  _cfile call_tmp_chpl5;
#line 2170 "IO.chpl"
  syserr call_tmp_chpl6;
#line 2170 "IO.chpl"
  int32_t call_tmp_chpl7;
#line 2170 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 2423 "IO.chpl"
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
#line 2423 "IO.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 2422 "IO.chpl"
  local_style_chpl = *(style_chpl);
#line 2423 "IO.chpl"
  (&this_chpl)->home_chpl = nil;
#line 2423 "IO.chpl"
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2423 "IO.chpl"
  call_tmp_chpl = chpl_localeID_to_locale(&_autoCopy_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2423 "IO.chpl"
  (&this_chpl)->home_chpl = call_tmp_chpl;
#line 2423 "IO.chpl"
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
#line 2423 "IO.chpl"
  (&this_chpl)->_file_internal_chpl = default_arg_file_internal_chpl;
#line 2423 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
#line 2423 "IO.chpl"
  _construct_file_chpl(call_tmp_chpl, default_arg_file_internal_chpl, &this_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2423 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 2424 "IO.chpl"
  call_tmp_chpl2 = &((&ret_chpl)->home_chpl);
#line 2424 "IO.chpl"
  _autoCopy_tmp__chpl2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2424 "IO.chpl"
  call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 2424 "IO.chpl"
  *(call_tmp_chpl2) = call_tmp_chpl3;
#line 2425 "IO.chpl"
  call_tmp_chpl4 = &((&ret_chpl)->_file_internal_chpl);
#line 2425 "IO.chpl"
  call_tmp_chpl5 = chpl_cnullfile();
#line 2425 "IO.chpl"
  call_tmp_chpl7 = ((int32_t)(INT64(0)));
#line 2425 "IO.chpl"
  _ref_tmp__chpl = &local_style_chpl;
#line 2425 "IO.chpl"
  call_tmp_chpl6 = qio_file_init(call_tmp_chpl4, call_tmp_chpl5, fd_chpl, hints_chpl, _ref_tmp__chpl, call_tmp_chpl7);
#line 2421 "IO.chpl"
  *(error_chpl) = call_tmp_chpl6;
#line 2421 "IO.chpl"
  *(_retArg_chpl) = ret_chpl;
#line 2421 "IO.chpl"
  return;
#line 2421 "IO.chpl"
}

#line 2421 "IO.chpl"
/* IO.chpl:2433 */
#line 2421 "IO.chpl"
static void openfd_chpl2(int32_t fd_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2421 "IO.chpl"
  string local__str_literal_1924_chpl;
#line 2421 "IO.chpl"
  string local__str_literal_1855_chpl;
#line 2421 "IO.chpl"
  syserr err_chpl;
#line 2421 "IO.chpl"
  syserr type_tmp_chpl;
#line 2421 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 2421 "IO.chpl"
  syserr call_tmp_chpl;
#line 2421 "IO.chpl"
  file_chpl call_tmp_chpl2;
#line 2421 "IO.chpl"
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
#line 2421 "IO.chpl"
  _ref_syserr _ref_tmp__chpl2 = NULL;
#line 2421 "IO.chpl"
  int32_t call_tmp_chpl3;
#line 2421 "IO.chpl"
  chpl_bool call_tmp_chpl4;
#line 2421 "IO.chpl"
  c_string_copy path_cs_chpl;
#line 2421 "IO.chpl"
  c_string_copy ret_chpl;
#line 2421 "IO.chpl"
  syserr type_tmp_chpl2;
#line 2421 "IO.chpl"
  _ref_syserr _ref_tmp__chpl3 = NULL;
#line 2421 "IO.chpl"
  syserr call_tmp_chpl5;
#line 2421 "IO.chpl"
  syserr call_tmp_chpl6;
#line 2421 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl4 = NULL;
#line 2421 "IO.chpl"
  string path_chpl;
#line 2421 "IO.chpl"
  string tmp_chpl;
#line 2421 "IO.chpl"
  int32_t call_tmp_chpl7;
#line 2421 "IO.chpl"
  chpl_bool call_tmp_chpl8;
#line 2421 "IO.chpl"
  c_string call_tmp_chpl9;
#line 2421 "IO.chpl"
  string wrap_call_tmp_chpl;
#line 2421 "IO.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
#line 2421 "IO.chpl"
  _ref_string _ref_tmp__chpl5 = NULL;
#line 2442 "IO.chpl"
  local__str_literal_1924_chpl = _str_literal_1924;
#line 2440 "IO.chpl"
  local__str_literal_1855_chpl = _str_literal_1855;
#line 2434 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 2434 "IO.chpl"
  call_tmp_chpl = qio_int_to_err(INT32(0));
#line 2434 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl;
#line 2434 "IO.chpl"
  err_chpl = type_tmp_chpl;
#line 2435 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl2;
#line 2435 "IO.chpl"
  _ref_tmp__chpl2 = &err_chpl;
#line 2435 "IO.chpl"
  openfd_chpl(fd_chpl, _ref_tmp__chpl2, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2436 "IO.chpl"
  call_tmp_chpl3 = qio_err_iserr(err_chpl);
#line 2436 "IO.chpl"
  call_tmp_chpl4 = (call_tmp_chpl3 != INT32(0));
#line 2436 "IO.chpl"
  if (call_tmp_chpl4) /* ZLINE: 2437 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2436 "IO.chpl"
  {
#line 2437 "IO.chpl"
    ret_chpl = NULL;
#line 2437 "IO.chpl"
    path_cs_chpl = ret_chpl;
#line 2438 "IO.chpl"
    _ref_tmp__chpl3 = &type_tmp_chpl2;
#line 2438 "IO.chpl"
    call_tmp_chpl5 = qio_int_to_err(INT32(0));
#line 2438 "IO.chpl"
    *(_ref_tmp__chpl3) = call_tmp_chpl5;
#line 2439 "IO.chpl"
    _ref_tmp__chpl4 = &path_cs_chpl;
#line 2439 "IO.chpl"
    call_tmp_chpl6 = qio_file_path_for_fd(fd_chpl, _ref_tmp__chpl4);
#line 2440 "IO.chpl"
    call_tmp_chpl7 = qio_err_iserr(call_tmp_chpl6);
#line 2440 "IO.chpl"
    call_tmp_chpl8 = (call_tmp_chpl7 != INT32(0));
#line 2440 "IO.chpl"
    if (call_tmp_chpl8) /* ZLINE: 2440 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2440 "IO.chpl"
    {
#line 2440 "IO.chpl"
      tmp_chpl = chpl__autoCopy8(&local__str_literal_1855_chpl, _ln_chpl, _fn_chpl);
#line 2440 "IO.chpl"
    } else /* ZLINE: 2440 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2440 "IO.chpl"
    {
#line 2440 "IO.chpl"
      call_tmp_chpl9 = ((c_string)(path_cs_chpl));
#line 2440 "IO.chpl"
      ret_to_arg_ref_tmp__chpl2 = &wrap_call_tmp_chpl;
#line 2440 "IO.chpl"
      string3(call_tmp_chpl9, UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 2440 "IO.chpl"
      tmp_chpl = wrap_call_tmp_chpl;
#line 2440 "IO.chpl"
    }
#line 2440 "IO.chpl"
    path_chpl = tmp_chpl;
#line 2442 "IO.chpl"
    ioerror_chpl(err_chpl, &local__str_literal_1924_chpl, &tmp_chpl, _ln_chpl, _fn_chpl);
#line 2440 "IO.chpl"
    _ref_tmp__chpl5 = &path_chpl;
#line 2440 "IO.chpl"
    chpl___TILDE_string(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 2440 "IO.chpl"
  }
#line 2433 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl2;
#line 2433 "IO.chpl"
  return;
#line 2433 "IO.chpl"
}

#line 2433 "IO.chpl"
/* IO.chpl:2476 */
#line 2433 "IO.chpl"
static void openfp_chpl(_cfile fp_chpl, _ref_syserr error_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2433 "IO.chpl"
  qio_file_ptr_t local_QIO_FILE_PTR_NULL_chpl;
#line 2433 "IO.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 2433 "IO.chpl"
  iostyle local_style_chpl;
#line 2433 "IO.chpl"
  file_chpl ret_chpl;
#line 2433 "IO.chpl"
  file_chpl this_chpl;
#line 2433 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 2433 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 2433 "IO.chpl"
  qio_file_ptr_t default_arg_file_internal_chpl;
#line 2433 "IO.chpl"
  file_chpl wrap_call_tmp_chpl;
#line 2433 "IO.chpl"
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
#line 2433 "IO.chpl"
  _ref_locale call_tmp_chpl2 = NULL;
#line 2433 "IO.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl2;
#line 2433 "IO.chpl"
  locale call_tmp_chpl3 = NULL;
#line 2433 "IO.chpl"
  _ref_qio_file_ptr_t call_tmp_chpl4 = NULL;
#line 2433 "IO.chpl"
  syserr call_tmp_chpl5;
#line 2433 "IO.chpl"
  int32_t call_tmp_chpl6;
#line 2433 "IO.chpl"
  int32_t call_tmp_chpl7;
#line 2433 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 2478 "IO.chpl"
  local_QIO_FILE_PTR_NULL_chpl = QIO_FILE_PTR_NULL;
#line 2478 "IO.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 2477 "IO.chpl"
  local_style_chpl = *(style_chpl);
#line 2478 "IO.chpl"
  (&this_chpl)->home_chpl = nil;
#line 2478 "IO.chpl"
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2478 "IO.chpl"
  call_tmp_chpl = chpl_localeID_to_locale(&_autoCopy_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2478 "IO.chpl"
  (&this_chpl)->home_chpl = call_tmp_chpl;
#line 2478 "IO.chpl"
  default_arg_file_internal_chpl = local_QIO_FILE_PTR_NULL_chpl;
#line 2478 "IO.chpl"
  (&this_chpl)->_file_internal_chpl = default_arg_file_internal_chpl;
#line 2478 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
#line 2478 "IO.chpl"
  _construct_file_chpl(call_tmp_chpl, default_arg_file_internal_chpl, &this_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2478 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 2479 "IO.chpl"
  call_tmp_chpl2 = &((&ret_chpl)->home_chpl);
#line 2479 "IO.chpl"
  _autoCopy_tmp__chpl2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 2479 "IO.chpl"
  call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 2479 "IO.chpl"
  *(call_tmp_chpl2) = call_tmp_chpl3;
#line 2480 "IO.chpl"
  call_tmp_chpl4 = &((&ret_chpl)->_file_internal_chpl);
#line 2480 "IO.chpl"
  call_tmp_chpl6 = ((int32_t)(INT64(-1)));
#line 2480 "IO.chpl"
  call_tmp_chpl7 = ((int32_t)(INT64(1)));
#line 2480 "IO.chpl"
  _ref_tmp__chpl = &local_style_chpl;
#line 2480 "IO.chpl"
  call_tmp_chpl5 = qio_file_init(call_tmp_chpl4, fp_chpl, call_tmp_chpl6, hints_chpl, _ref_tmp__chpl, call_tmp_chpl7);
#line 2476 "IO.chpl"
  *(error_chpl) = call_tmp_chpl5;
#line 2476 "IO.chpl"
  *(_retArg_chpl) = ret_chpl;
#line 2476 "IO.chpl"
  return;
#line 2476 "IO.chpl"
}

#line 2476 "IO.chpl"
/* IO.chpl:2488 */
#line 2476 "IO.chpl"
static void openfp_chpl2(_cfile fp_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_file _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2476 "IO.chpl"
  string local__str_literal_1926_chpl;
#line 2476 "IO.chpl"
  string local__str_literal_1855_chpl;
#line 2476 "IO.chpl"
  syserr err_chpl;
#line 2476 "IO.chpl"
  syserr type_tmp_chpl;
#line 2476 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 2476 "IO.chpl"
  syserr call_tmp_chpl;
#line 2476 "IO.chpl"
  file_chpl call_tmp_chpl2;
#line 2476 "IO.chpl"
  _ref_file ret_to_arg_ref_tmp__chpl = NULL;
#line 2476 "IO.chpl"
  _ref_syserr _ref_tmp__chpl2 = NULL;
#line 2476 "IO.chpl"
  int32_t call_tmp_chpl3;
#line 2476 "IO.chpl"
  chpl_bool call_tmp_chpl4;
#line 2476 "IO.chpl"
  c_string_copy path_cs_chpl;
#line 2476 "IO.chpl"
  c_string_copy ret_chpl;
#line 2476 "IO.chpl"
  syserr type_tmp_chpl2;
#line 2476 "IO.chpl"
  _ref_syserr _ref_tmp__chpl3 = NULL;
#line 2476 "IO.chpl"
  syserr call_tmp_chpl5;
#line 2476 "IO.chpl"
  syserr call_tmp_chpl6;
#line 2476 "IO.chpl"
  _ref_c_string_copy _ref_tmp__chpl4 = NULL;
#line 2476 "IO.chpl"
  string path_chpl;
#line 2476 "IO.chpl"
  string tmp_chpl;
#line 2476 "IO.chpl"
  int32_t call_tmp_chpl7;
#line 2476 "IO.chpl"
  chpl_bool call_tmp_chpl8;
#line 2476 "IO.chpl"
  c_string call_tmp_chpl9;
#line 2476 "IO.chpl"
  string wrap_call_tmp_chpl;
#line 2476 "IO.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
#line 2476 "IO.chpl"
  _ref_string _ref_tmp__chpl5 = NULL;
#line 2497 "IO.chpl"
  local__str_literal_1926_chpl = _str_literal_1926;
#line 2495 "IO.chpl"
  local__str_literal_1855_chpl = _str_literal_1855;
#line 2489 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 2489 "IO.chpl"
  call_tmp_chpl = qio_int_to_err(INT32(0));
#line 2489 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl;
#line 2489 "IO.chpl"
  err_chpl = type_tmp_chpl;
#line 2490 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl2;
#line 2490 "IO.chpl"
  _ref_tmp__chpl2 = &err_chpl;
#line 2490 "IO.chpl"
  openfp_chpl(fp_chpl, _ref_tmp__chpl2, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2491 "IO.chpl"
  call_tmp_chpl3 = qio_err_iserr(err_chpl);
#line 2491 "IO.chpl"
  call_tmp_chpl4 = (call_tmp_chpl3 != INT32(0));
#line 2491 "IO.chpl"
  if (call_tmp_chpl4) /* ZLINE: 2492 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2491 "IO.chpl"
  {
#line 2492 "IO.chpl"
    ret_chpl = NULL;
#line 2492 "IO.chpl"
    path_cs_chpl = ret_chpl;
#line 2493 "IO.chpl"
    _ref_tmp__chpl3 = &type_tmp_chpl2;
#line 2493 "IO.chpl"
    call_tmp_chpl5 = qio_int_to_err(INT32(0));
#line 2493 "IO.chpl"
    *(_ref_tmp__chpl3) = call_tmp_chpl5;
#line 2494 "IO.chpl"
    _ref_tmp__chpl4 = &path_cs_chpl;
#line 2494 "IO.chpl"
    call_tmp_chpl6 = qio_file_path_for_fp(fp_chpl, _ref_tmp__chpl4);
#line 2495 "IO.chpl"
    call_tmp_chpl7 = qio_err_iserr(call_tmp_chpl6);
#line 2495 "IO.chpl"
    call_tmp_chpl8 = (call_tmp_chpl7 != INT32(0));
#line 2495 "IO.chpl"
    if (call_tmp_chpl8) /* ZLINE: 2495 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2495 "IO.chpl"
    {
#line 2495 "IO.chpl"
      tmp_chpl = chpl__autoCopy8(&local__str_literal_1855_chpl, _ln_chpl, _fn_chpl);
#line 2495 "IO.chpl"
    } else /* ZLINE: 2495 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 2495 "IO.chpl"
    {
#line 2495 "IO.chpl"
      call_tmp_chpl9 = ((c_string)(path_cs_chpl));
#line 2495 "IO.chpl"
      ret_to_arg_ref_tmp__chpl2 = &wrap_call_tmp_chpl;
#line 2495 "IO.chpl"
      string3(call_tmp_chpl9, UINT8(true), UINT8(false), ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 2495 "IO.chpl"
      tmp_chpl = wrap_call_tmp_chpl;
#line 2495 "IO.chpl"
    }
#line 2495 "IO.chpl"
    path_chpl = tmp_chpl;
#line 2497 "IO.chpl"
    ioerror_chpl(err_chpl, &local__str_literal_1926_chpl, &tmp_chpl, _ln_chpl, _fn_chpl);
#line 2495 "IO.chpl"
    _ref_tmp__chpl5 = &path_chpl;
#line 2495 "IO.chpl"
    chpl___TILDE_string(_ref_tmp__chpl5, _ln_chpl, _fn_chpl);
#line 2495 "IO.chpl"
  }
#line 2488 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl2;
#line 2488 "IO.chpl"
  return;
#line 2488 "IO.chpl"
}

#line 2488 "IO.chpl"
/* IO.chpl:2609 */
#line 2488 "IO.chpl"
static void _construct_channel_chpl2(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_F_dynamic_T_chpl* const meme_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2488 "IO.chpl"
  channel_F_dynamic_T_chpl this_chpl;
#line 2609 "IO.chpl"
  this_chpl = *(meme_chpl);
#line 2626 "IO.chpl"
  (&this_chpl)->home_chpl = home_chpl;
#line 2628 "IO.chpl"
  (&this_chpl)->_channel_internal_chpl = _channel_internal_chpl;
#line 2609 "IO.chpl"
  *(_retArg_chpl) = this_chpl;
#line 2609 "IO.chpl"
  return;
#line 2609 "IO.chpl"
}

#line 2609 "IO.chpl"
/* IO.chpl:2609 */
#line 2609 "IO.chpl"
static void _construct_channel_chpl(locale home_chpl, qio_channel_ptr_t _channel_internal_chpl, channel_T_dynamic_T_chpl* const meme_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2609 "IO.chpl"
  channel_T_dynamic_T_chpl this_chpl;
#line 2609 "IO.chpl"
  this_chpl = *(meme_chpl);
#line 2626 "IO.chpl"
  (&this_chpl)->home_chpl = home_chpl;
#line 2628 "IO.chpl"
  (&this_chpl)->_channel_internal_chpl = _channel_internal_chpl;
#line 2609 "IO.chpl"
  *(_retArg_chpl) = this_chpl;
#line 2609 "IO.chpl"
  return;
#line 2609 "IO.chpl"
}

#line 2609 "IO.chpl"
/* IO.chpl:2642 */
#line 2609 "IO.chpl"
static void chpl___ASSIGN_3(_ref_channel_F_dynamic_T ret_chpl, channel_F_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2609 "IO.chpl"
  qio_channel_ptr_t coerce_tmp_chpl;
#line 2609 "IO.chpl"
  qio_channel_ptr_t coerce_tmp_chpl2;
#line 2609 "IO.chpl"
  _ref_locale call_tmp_chpl = NULL;
#line 2609 "IO.chpl"
  locale coerce_tmp_chpl3 = NULL;
#line 2609 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl2 = NULL;
#line 2609 "IO.chpl"
  qio_channel_ptr_t coerce_tmp_chpl4;
#line 2645 "IO.chpl"
  coerce_tmp_chpl = (x_chpl)->_channel_internal_chpl;
#line 2645 "IO.chpl"
  qio_channel_retain(coerce_tmp_chpl);
#line 2649 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2649), INT64(54));
#line 2649 "IO.chpl"
  coerce_tmp_chpl2 = (ret_chpl)->_channel_internal_chpl;
#line 2649 "IO.chpl"
  qio_channel_release(coerce_tmp_chpl2);
#line 2652 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2652), INT64(54));
#line 2652 "IO.chpl"
  call_tmp_chpl = &((ret_chpl)->home_chpl);
#line 2652 "IO.chpl"
  coerce_tmp_chpl3 = (x_chpl)->home_chpl;
#line 2652 "IO.chpl"
  *(call_tmp_chpl) = coerce_tmp_chpl3;
#line 2653 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2653), INT64(54));
#line 2653 "IO.chpl"
  call_tmp_chpl2 = &((ret_chpl)->_channel_internal_chpl);
#line 2653 "IO.chpl"
  coerce_tmp_chpl4 = (x_chpl)->_channel_internal_chpl;
#line 2653 "IO.chpl"
  *(call_tmp_chpl2) = coerce_tmp_chpl4;
#line 2642 "IO.chpl"
  return;
#line 2642 "IO.chpl"
}

#line 2642 "IO.chpl"
/* IO.chpl:2642 */
#line 2642 "IO.chpl"
static void chpl___ASSIGN_4(_ref_channel_T_dynamic_T ret_chpl, channel_T_dynamic_T_chpl* const x_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2642 "IO.chpl"
  qio_channel_ptr_t coerce_tmp_chpl;
#line 2642 "IO.chpl"
  qio_channel_ptr_t coerce_tmp_chpl2;
#line 2642 "IO.chpl"
  _ref_locale call_tmp_chpl = NULL;
#line 2642 "IO.chpl"
  locale coerce_tmp_chpl3 = NULL;
#line 2642 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl2 = NULL;
#line 2642 "IO.chpl"
  qio_channel_ptr_t coerce_tmp_chpl4;
#line 2645 "IO.chpl"
  coerce_tmp_chpl = (x_chpl)->_channel_internal_chpl;
#line 2645 "IO.chpl"
  qio_channel_retain(coerce_tmp_chpl);
#line 2649 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2649), INT64(54));
#line 2649 "IO.chpl"
  coerce_tmp_chpl2 = (ret_chpl)->_channel_internal_chpl;
#line 2649 "IO.chpl"
  qio_channel_release(coerce_tmp_chpl2);
#line 2652 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2652), INT64(54));
#line 2652 "IO.chpl"
  call_tmp_chpl = &((ret_chpl)->home_chpl);
#line 2652 "IO.chpl"
  coerce_tmp_chpl3 = (x_chpl)->home_chpl;
#line 2652 "IO.chpl"
  *(call_tmp_chpl) = coerce_tmp_chpl3;
#line 2653 "IO.chpl"
  chpl_check_nil(ret_chpl, INT64(2653), INT64(54));
#line 2653 "IO.chpl"
  call_tmp_chpl2 = &((ret_chpl)->_channel_internal_chpl);
#line 2653 "IO.chpl"
  coerce_tmp_chpl4 = (x_chpl)->_channel_internal_chpl;
#line 2653 "IO.chpl"
  *(call_tmp_chpl2) = coerce_tmp_chpl4;
#line 2642 "IO.chpl"
  return;
#line 2642 "IO.chpl"
}

#line 2642 "IO.chpl"
/* IO.chpl:2657 */
#line 2642 "IO.chpl"
static void channel_chpl2(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2642 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2642 "IO.chpl"
  iostyle _formal_tmp_local_style_chpl;
#line 2642 "IO.chpl"
  channel_F_dynamic_T_chpl this_chpl;
#line 2642 "IO.chpl"
  channel_F_dynamic_T_chpl this_chpl2;
#line 2642 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 2642 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl;
#line 2642 "IO.chpl"
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl;
#line 2642 "IO.chpl"
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
#line 2642 "IO.chpl"
  _ref_locale call_tmp_chpl2 = NULL;
#line 2642 "IO.chpl"
  locale coerce_tmp_chpl = NULL;
#line 2642 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl3 = NULL;
#line 2642 "IO.chpl"
  syserr call_tmp_chpl4;
#line 2642 "IO.chpl"
  qio_file_ptr_t coerce_tmp_chpl2;
#line 2642 "IO.chpl"
  int32_t call_tmp_chpl5;
#line 2642 "IO.chpl"
  int32_t call_tmp_chpl6;
#line 2642 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 2657 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 2657 "IO.chpl"
  _formal_tmp_local_style_chpl = *(local_style_chpl);
#line 2657 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 2657 "IO.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 2657 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 2657 "IO.chpl"
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2657 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 2657 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
#line 2657 "IO.chpl"
  _construct_channel_chpl2(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2657 "IO.chpl"
  this_chpl = wrap_call_tmp_chpl;
#line 2659 "IO.chpl"
  call_tmp_chpl2 = &((&this_chpl)->home_chpl);
#line 2659 "IO.chpl"
  coerce_tmp_chpl = (f_chpl)->home_chpl;
#line 2659 "IO.chpl"
  *(call_tmp_chpl2) = coerce_tmp_chpl;
#line 2664 "IO.chpl"
  call_tmp_chpl3 = &((&this_chpl)->_channel_internal_chpl);
#line 2664 "IO.chpl"
  coerce_tmp_chpl2 = (f_chpl)->_file_internal_chpl;
#line 2664 "IO.chpl"
  call_tmp_chpl5 = ((int32_t)(UINT8(true)));
#line 2664 "IO.chpl"
  call_tmp_chpl6 = ((int32_t)(UINT8(false)));
#line 2664 "IO.chpl"
  _ref_tmp__chpl = &_formal_tmp_local_style_chpl;
#line 2664 "IO.chpl"
  call_tmp_chpl4 = qio_channel_create(call_tmp_chpl3, coerce_tmp_chpl2, hints_chpl, call_tmp_chpl5, call_tmp_chpl6, start_chpl, end_chpl, _ref_tmp__chpl);
#line 2657 "IO.chpl"
  *(error_chpl) = call_tmp_chpl4;
#line 2657 "IO.chpl"
  *(_retArg_chpl) = this_chpl;
#line 2657 "IO.chpl"
  return;
#line 2657 "IO.chpl"
}

#line 2657 "IO.chpl"
/* IO.chpl:2657 */
#line 2657 "IO.chpl"
static void channel_chpl(file_chpl* const f_chpl, _ref_syserr error_chpl, int32_t hints_chpl, int64_t start_chpl, int64_t end_chpl, iostyle* const local_style_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2657 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2657 "IO.chpl"
  iostyle _formal_tmp_local_style_chpl;
#line 2657 "IO.chpl"
  channel_T_dynamic_T_chpl this_chpl;
#line 2657 "IO.chpl"
  channel_T_dynamic_T_chpl this_chpl2;
#line 2657 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 2657 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl;
#line 2657 "IO.chpl"
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl;
#line 2657 "IO.chpl"
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
#line 2657 "IO.chpl"
  _ref_locale call_tmp_chpl2 = NULL;
#line 2657 "IO.chpl"
  locale coerce_tmp_chpl = NULL;
#line 2657 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl3 = NULL;
#line 2657 "IO.chpl"
  syserr call_tmp_chpl4;
#line 2657 "IO.chpl"
  qio_file_ptr_t coerce_tmp_chpl2;
#line 2657 "IO.chpl"
  int32_t call_tmp_chpl5;
#line 2657 "IO.chpl"
  int32_t call_tmp_chpl6;
#line 2657 "IO.chpl"
  _ref_iostyle _ref_tmp__chpl = NULL;
#line 2657 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 2657 "IO.chpl"
  _formal_tmp_local_style_chpl = *(local_style_chpl);
#line 2657 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 2657 "IO.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 2657 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 2657 "IO.chpl"
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2657 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 2657 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
#line 2657 "IO.chpl"
  _construct_channel_chpl(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 2657 "IO.chpl"
  this_chpl = wrap_call_tmp_chpl;
#line 2659 "IO.chpl"
  call_tmp_chpl2 = &((&this_chpl)->home_chpl);
#line 2659 "IO.chpl"
  coerce_tmp_chpl = (f_chpl)->home_chpl;
#line 2659 "IO.chpl"
  *(call_tmp_chpl2) = coerce_tmp_chpl;
#line 2664 "IO.chpl"
  call_tmp_chpl3 = &((&this_chpl)->_channel_internal_chpl);
#line 2664 "IO.chpl"
  coerce_tmp_chpl2 = (f_chpl)->_file_internal_chpl;
#line 2664 "IO.chpl"
  call_tmp_chpl5 = ((int32_t)(UINT8(false)));
#line 2664 "IO.chpl"
  call_tmp_chpl6 = ((int32_t)(UINT8(true)));
#line 2664 "IO.chpl"
  _ref_tmp__chpl = &_formal_tmp_local_style_chpl;
#line 2664 "IO.chpl"
  call_tmp_chpl4 = qio_channel_create(call_tmp_chpl3, coerce_tmp_chpl2, hints_chpl, call_tmp_chpl5, call_tmp_chpl6, start_chpl, end_chpl, _ref_tmp__chpl);
#line 2657 "IO.chpl"
  *(error_chpl) = call_tmp_chpl4;
#line 2657 "IO.chpl"
  *(_retArg_chpl) = this_chpl;
#line 2657 "IO.chpl"
  return;
#line 2657 "IO.chpl"
}

#line 2657 "IO.chpl"
/* IO.chpl:2671 */
#line 2657 "IO.chpl"
static void chpl___TILDE_channel(_ref_channel_F_dynamic_T this_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2657 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2657 "IO.chpl"
  qio_channel_ptr_t coerce_tmp_chpl;
#line 2657 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl = NULL;
#line 2674 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 2673 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2673), INT64(54));
#line 2673 "IO.chpl"
  coerce_tmp_chpl = (this_chpl)->_channel_internal_chpl;
#line 2673 "IO.chpl"
  qio_channel_release(coerce_tmp_chpl);
#line 2674 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2674), INT64(54));
#line 2674 "IO.chpl"
  call_tmp_chpl = &((this_chpl)->_channel_internal_chpl);
#line 2674 "IO.chpl"
  *(call_tmp_chpl) = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2671 "IO.chpl"
  return;
#line 2671 "IO.chpl"
}

#line 2671 "IO.chpl"
/* IO.chpl:2671 */
#line 2671 "IO.chpl"
static void chpl___TILDE_channel2(_ref_channel_T_dynamic_T this_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2671 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2671 "IO.chpl"
  qio_channel_ptr_t coerce_tmp_chpl;
#line 2671 "IO.chpl"
  _ref_qio_channel_ptr_t call_tmp_chpl = NULL;
#line 2674 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 2673 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2673), INT64(54));
#line 2673 "IO.chpl"
  coerce_tmp_chpl = (this_chpl)->_channel_internal_chpl;
#line 2673 "IO.chpl"
  qio_channel_release(coerce_tmp_chpl);
#line 2674 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(2674), INT64(54));
#line 2674 "IO.chpl"
  call_tmp_chpl = &((this_chpl)->_channel_internal_chpl);
#line 2674 "IO.chpl"
  *(call_tmp_chpl) = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2671 "IO.chpl"
  return;
#line 2671 "IO.chpl"
}

#line 2671 "IO.chpl"
/* IO.chpl:3201 */
#line 2671 "IO.chpl"
static void reader_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 2671 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 2671 "IO.chpl"
  syserr _formal_tmp_error_chpl;
#line 2671 "IO.chpl"
  channel_F_dynamic_T_chpl ret_chpl;
#line 2671 "IO.chpl"
  channel_F_dynamic_T_chpl this_chpl2;
#line 2671 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 2671 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl;
#line 2671 "IO.chpl"
  channel_F_dynamic_T_chpl wrap_call_tmp_chpl;
#line 2671 "IO.chpl"
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
#line 2671 "IO.chpl"
  channel_F_dynamic_T_chpl call_tmp_chpl2;
#line 2671 "IO.chpl"
  file_chpl coerce_tmp_chpl;
#line 2671 "IO.chpl"
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl2 = NULL;
#line 2671 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 2671 "IO.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl2 = NULL;
#line 2671 "IO.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl3 = NULL;
#line 3204 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 3202 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(3202), INT64(54));
#line 3202 "IO.chpl"
  check_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 3204 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 3204 "IO.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 3204 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 3204 "IO.chpl"
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3204 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 3204 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
#line 3204 "IO.chpl"
  _construct_channel_chpl2(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 3204 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 3206 "IO.chpl"
  coerce_tmp_chpl = *(this_chpl);
#line 3206 "IO.chpl"
  ret_to_arg_ref_tmp__chpl2 = &call_tmp_chpl2;
#line 3206 "IO.chpl"
  _ref_tmp__chpl = &_formal_tmp_error_chpl;
#line 3206 "IO.chpl"
  channel_chpl2(&coerce_tmp_chpl, _ref_tmp__chpl, hints_chpl, start_chpl, end_chpl, style_chpl, ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 3206 "IO.chpl"
  _ref_tmp__chpl2 = &ret_chpl;
#line 3206 "IO.chpl"
  chpl___ASSIGN_3(_ref_tmp__chpl2, &call_tmp_chpl2, _ln_chpl, _fn_chpl);
#line 3206 "IO.chpl"
  _ref_tmp__chpl3 = &call_tmp_chpl2;
#line 3206 "IO.chpl"
  chpl___TILDE_channel(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 3201 "IO.chpl"
  *(error_chpl) = _formal_tmp_error_chpl;
#line 3201 "IO.chpl"
  *(_retArg_chpl) = ret_chpl;
#line 3201 "IO.chpl"
  return;
#line 3201 "IO.chpl"
}

#line 3201 "IO.chpl"
/* IO.chpl:3213 */
#line 3201 "IO.chpl"
static void reader_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_F_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 3201 "IO.chpl"
  string local__str_literal_1971_chpl;
#line 3201 "IO.chpl"
  syserr err_chpl;
#line 3201 "IO.chpl"
  syserr type_tmp_chpl;
#line 3201 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 3201 "IO.chpl"
  syserr call_tmp_chpl;
#line 3201 "IO.chpl"
  channel_F_dynamic_T_chpl call_tmp_chpl2;
#line 3201 "IO.chpl"
  _ref_channel_F_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
#line 3201 "IO.chpl"
  _ref_syserr _ref_tmp__chpl2 = NULL;
#line 3201 "IO.chpl"
  int32_t call_tmp_chpl3;
#line 3201 "IO.chpl"
  chpl_bool call_tmp_chpl4;
#line 3201 "IO.chpl"
  string call_tmp_chpl5;
#line 3201 "IO.chpl"
  string _autoCopy_tmp__chpl;
#line 3201 "IO.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
#line 3201 "IO.chpl"
  _ref_string _ref_tmp__chpl3 = NULL;
#line 3216 "IO.chpl"
  local__str_literal_1971_chpl = _str_literal_1971;
#line 3214 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 3214 "IO.chpl"
  call_tmp_chpl = qio_int_to_err(INT32(0));
#line 3214 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl;
#line 3214 "IO.chpl"
  err_chpl = type_tmp_chpl;
#line 3215 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl2;
#line 3215 "IO.chpl"
  _ref_tmp__chpl2 = &err_chpl;
#line 3215 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(3215), INT64(54));
#line 3215 "IO.chpl"
  reader_chpl(this_chpl, _ref_tmp__chpl2, start_chpl, end_chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 3216 "IO.chpl"
  call_tmp_chpl3 = qio_err_iserr(err_chpl);
#line 3216 "IO.chpl"
  call_tmp_chpl4 = (call_tmp_chpl3 != INT32(0));
#line 3216 "IO.chpl"
  if (call_tmp_chpl4) /* ZLINE: 3216 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 3216 "IO.chpl"
  {
#line 3216 "IO.chpl"
    ret_to_arg_ref_tmp__chpl2 = &_autoCopy_tmp__chpl;
#line 3216 "IO.chpl"
    chpl_check_nil(this_chpl, INT64(3216), INT64(54));
#line 3216 "IO.chpl"
    tryGetPath_chpl(this_chpl, ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 3216 "IO.chpl"
    call_tmp_chpl5 = _autoCopy_tmp__chpl;
#line 3216 "IO.chpl"
    ioerror_chpl(err_chpl, &local__str_literal_1971_chpl, &_autoCopy_tmp__chpl, _ln_chpl, _fn_chpl);
#line 3216 "IO.chpl"
    _ref_tmp__chpl3 = &call_tmp_chpl5;
#line 3216 "IO.chpl"
    chpl___TILDE_string(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 3216 "IO.chpl"
  }
#line 3213 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl2;
#line 3213 "IO.chpl"
  return;
#line 3213 "IO.chpl"
}

#line 3213 "IO.chpl"
/* IO.chpl:3301 */
#line 3213 "IO.chpl"
static void writer_chpl(_ref_file this_chpl, _ref_syserr error_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 3213 "IO.chpl"
  qio_channel_ptr_t local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3213 "IO.chpl"
  syserr _formal_tmp_error_chpl;
#line 3213 "IO.chpl"
  channel_T_dynamic_T_chpl ret_chpl;
#line 3213 "IO.chpl"
  channel_T_dynamic_T_chpl this_chpl2;
#line 3213 "IO.chpl"
  locale call_tmp_chpl = NULL;
#line 3213 "IO.chpl"
  qio_channel_ptr_t default_arg_channel_internal_chpl;
#line 3213 "IO.chpl"
  channel_T_dynamic_T_chpl wrap_call_tmp_chpl;
#line 3213 "IO.chpl"
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
#line 3213 "IO.chpl"
  channel_T_dynamic_T_chpl call_tmp_chpl2;
#line 3213 "IO.chpl"
  file_chpl coerce_tmp_chpl;
#line 3213 "IO.chpl"
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl2 = NULL;
#line 3213 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 3213 "IO.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl2 = NULL;
#line 3213 "IO.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl3 = NULL;
#line 3304 "IO.chpl"
  local_QIO_CHANNEL_PTR_NULL_chpl = QIO_CHANNEL_PTR_NULL;
#line 3302 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(3302), INT64(54));
#line 3302 "IO.chpl"
  check_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 3304 "IO.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 3304 "IO.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 3304 "IO.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 3304 "IO.chpl"
  default_arg_channel_internal_chpl = local_QIO_CHANNEL_PTR_NULL_chpl;
#line 3304 "IO.chpl"
  (&this_chpl2)->_channel_internal_chpl = default_arg_channel_internal_chpl;
#line 3304 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &wrap_call_tmp_chpl;
#line 3304 "IO.chpl"
  _construct_channel_chpl(call_tmp_chpl, default_arg_channel_internal_chpl, &this_chpl2, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 3304 "IO.chpl"
  ret_chpl = wrap_call_tmp_chpl;
#line 3306 "IO.chpl"
  coerce_tmp_chpl = *(this_chpl);
#line 3306 "IO.chpl"
  ret_to_arg_ref_tmp__chpl2 = &call_tmp_chpl2;
#line 3306 "IO.chpl"
  _ref_tmp__chpl = &_formal_tmp_error_chpl;
#line 3306 "IO.chpl"
  channel_chpl(&coerce_tmp_chpl, _ref_tmp__chpl, hints_chpl, start_chpl, end_chpl, style_chpl, ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 3306 "IO.chpl"
  _ref_tmp__chpl2 = &ret_chpl;
#line 3306 "IO.chpl"
  chpl___ASSIGN_4(_ref_tmp__chpl2, &call_tmp_chpl2, _ln_chpl, _fn_chpl);
#line 3306 "IO.chpl"
  _ref_tmp__chpl3 = &call_tmp_chpl2;
#line 3306 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 3301 "IO.chpl"
  *(error_chpl) = _formal_tmp_error_chpl;
#line 3301 "IO.chpl"
  *(_retArg_chpl) = ret_chpl;
#line 3301 "IO.chpl"
  return;
#line 3301 "IO.chpl"
}

#line 3301 "IO.chpl"
/* IO.chpl:3313 */
#line 3301 "IO.chpl"
static void writer_chpl2(_ref_file this_chpl, int64_t start_chpl, int64_t end_chpl, int32_t hints_chpl, iostyle* const style_chpl, _ref_channel_T_dynamic_T _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 3301 "IO.chpl"
  string local__str_literal_1978_chpl;
#line 3301 "IO.chpl"
  syserr err_chpl;
#line 3301 "IO.chpl"
  syserr type_tmp_chpl;
#line 3301 "IO.chpl"
  _ref_syserr _ref_tmp__chpl = NULL;
#line 3301 "IO.chpl"
  syserr call_tmp_chpl;
#line 3301 "IO.chpl"
  channel_T_dynamic_T_chpl call_tmp_chpl2;
#line 3301 "IO.chpl"
  _ref_channel_T_dynamic_T ret_to_arg_ref_tmp__chpl = NULL;
#line 3301 "IO.chpl"
  _ref_syserr _ref_tmp__chpl2 = NULL;
#line 3301 "IO.chpl"
  int32_t call_tmp_chpl3;
#line 3301 "IO.chpl"
  chpl_bool call_tmp_chpl4;
#line 3301 "IO.chpl"
  string call_tmp_chpl5;
#line 3301 "IO.chpl"
  string _autoCopy_tmp__chpl;
#line 3301 "IO.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
#line 3301 "IO.chpl"
  _ref_string _ref_tmp__chpl3 = NULL;
#line 3318 "IO.chpl"
  local__str_literal_1978_chpl = _str_literal_1978;
#line 3315 "IO.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 3315 "IO.chpl"
  call_tmp_chpl = qio_int_to_err(INT32(0));
#line 3315 "IO.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl;
#line 3315 "IO.chpl"
  err_chpl = type_tmp_chpl;
#line 3316 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl2;
#line 3316 "IO.chpl"
  _ref_tmp__chpl2 = &err_chpl;
#line 3316 "IO.chpl"
  chpl_check_nil(this_chpl, INT64(3316), INT64(54));
#line 3316 "IO.chpl"
  writer_chpl(this_chpl, _ref_tmp__chpl2, start_chpl, end_chpl, hints_chpl, style_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 3318 "IO.chpl"
  call_tmp_chpl3 = qio_err_iserr(err_chpl);
#line 3318 "IO.chpl"
  call_tmp_chpl4 = (call_tmp_chpl3 != INT32(0));
#line 3318 "IO.chpl"
  if (call_tmp_chpl4) /* ZLINE: 3318 /home/agobin/Documents/chapel-1.13.0/modules/standard/IO.chpl */
#line 3318 "IO.chpl"
  {
#line 3318 "IO.chpl"
    ret_to_arg_ref_tmp__chpl2 = &_autoCopy_tmp__chpl;
#line 3318 "IO.chpl"
    chpl_check_nil(this_chpl, INT64(3318), INT64(54));
#line 3318 "IO.chpl"
    tryGetPath_chpl(this_chpl, ret_to_arg_ref_tmp__chpl2, _ln_chpl, _fn_chpl);
#line 3318 "IO.chpl"
    call_tmp_chpl5 = _autoCopy_tmp__chpl;
#line 3318 "IO.chpl"
    ioerror_chpl(err_chpl, &local__str_literal_1978_chpl, &_autoCopy_tmp__chpl, _ln_chpl, _fn_chpl);
#line 3318 "IO.chpl"
    _ref_tmp__chpl3 = &call_tmp_chpl5;
#line 3318 "IO.chpl"
    chpl___TILDE_string(_ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 3318 "IO.chpl"
  }
#line 3313 "IO.chpl"
  *(_retArg_chpl) = call_tmp_chpl2;
#line 3313 "IO.chpl"
  return;
#line 3313 "IO.chpl"
}

#line 3313 "IO.chpl"
/* IO.chpl:3928 */
#line 3313 "IO.chpl"
static void stringify_chpl(string* const _e0_args_chpl, int64_t _e1_args_chpl, _ref_string _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 3313 "IO.chpl"
  string local__str_literal_2014_chpl;
#line 3313 "IO.chpl"
  string args_x1_chpl;
#line 3313 "IO.chpl"
  string str_chpl;
#line 3313 "IO.chpl"
  _ref_string call_tmp_chpl = NULL;
#line 3313 "IO.chpl"
  _ref_string _ref_tmp__chpl = NULL;
#line 3313 "IO.chpl"
  string call_tmp_chpl2;
#line 3313 "IO.chpl"
  string _autoCopy_tmp__chpl;
#line 3313 "IO.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
#line 3313 "IO.chpl"
  _ref_string _ref_tmp__chpl2 = NULL;
#line 3313 "IO.chpl"
  _ref_string _ref_tmp__chpl3 = NULL;
#line 3313 "IO.chpl"
  _ref_string _ref_tmp__chpl4 = NULL;
#line 3949 "IO.chpl"
  local__str_literal_2014_chpl = _str_literal_2014;
#line 703 "ChapelIO.chpl"
  args_x1_chpl = *(_e0_args_chpl);
#line 3949 "IO.chpl"
  str_chpl = chpl__autoCopy8(&local__str_literal_2014_chpl, _ln_chpl, _fn_chpl);
#line 3955 "IO.chpl"
  call_tmp_chpl = &args_x1_chpl;
#line 3955 "IO.chpl"
  _ref_tmp__chpl = &str_chpl;
#line 3955 "IO.chpl"
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl, call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 3957 "IO.chpl"
  ret_to_arg_ref_tmp__chpl = &_autoCopy_tmp__chpl;
#line 3957 "IO.chpl"
  _cast3(_e1_args_chpl, ret_to_arg_ref_tmp__chpl, _ln_chpl, _fn_chpl);
#line 3957 "IO.chpl"
  call_tmp_chpl2 = _autoCopy_tmp__chpl;
#line 3957 "IO.chpl"
  _ref_tmp__chpl2 = &str_chpl;
#line 3957 "IO.chpl"
  _ref_tmp__chpl3 = &call_tmp_chpl2;
#line 3957 "IO.chpl"
  chpl___PLUS__ASSIGN_(_ref_tmp__chpl2, _ref_tmp__chpl3, _ln_chpl, _fn_chpl);
#line 3957 "IO.chpl"
  _ref_tmp__chpl4 = &call_tmp_chpl2;
#line 3957 "IO.chpl"
  chpl___TILDE_string(_ref_tmp__chpl4, _ln_chpl, _fn_chpl);
#line 3928 "IO.chpl"
  *(_retArg_chpl) = str_chpl;
#line 3928 "IO.chpl"
  return;
#line 3928 "IO.chpl"
}


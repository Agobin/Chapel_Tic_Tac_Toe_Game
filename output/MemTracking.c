/* MemTracking.chpl:22 */
static void chpl__init_MemTracking(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_bool const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  c_string call_tmp3;
  chpl_bool const_tmp2;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  c_string call_tmp6;
  chpl_bool const_tmp3;
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  c_string call_tmp9;
  chpl_bool const_tmp4;
  chpl_bool call_tmp10;
  chpl_bool call_tmp11;
  c_string call_tmp12;
  uint64_t const_tmp5;
  chpl_bool call_tmp13;
  chpl_bool call_tmp14;
  uint64_t call_tmp15;
  c_string call_tmp16;
  uint64_t const_tmp6;
  chpl_bool call_tmp17;
  chpl_bool call_tmp18;
  uint64_t call_tmp19;
  c_string call_tmp20;
  string const_tmp7;
  chpl_bool call_tmp21;
  chpl_bool call_tmp22;
  string this5;
  c_ptr_uint8_t call_tmp23 = NULL;
  int32_t default_arglocale_id;
  string wrap_call_tmp;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  c_string call_tmp24;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  string const_tmp8;
  chpl_bool call_tmp25;
  chpl_bool call_tmp26;
  string this6;
  c_ptr_uint8_t call_tmp27 = NULL;
  int32_t default_arglocale_id2;
  string wrap_call_tmp2;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  c_string call_tmp28;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  string const_tmp9;
  chpl_bool call_tmp29;
  chpl_bool call_tmp30;
  string this7;
  c_ptr_uint8_t call_tmp31 = NULL;
  int32_t default_arglocale_id3;
  string wrap_call_tmp3;
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
  c_string call_tmp32;
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
  uint64_t call_tmp33;
  uint64_t call_tmp34;
#line 22 "MemTracking.chpl"
  if (chpl__init_MemTracking_p) /* ZLINE: 22 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 22 "MemTracking.chpl"
  {
#line 22 "MemTracking.chpl"
    goto _exit_chpl__init_MemTracking;
#line 22 "MemTracking.chpl"
  }
#line 22 "MemTracking.chpl"
  modFormatStr = "%*s\n";
#line 22 "MemTracking.chpl"
  modStr = "MemTracking";
#line 22 "MemTracking.chpl"
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
#line 22 "MemTracking.chpl"
  refIndentLevel = &moduleInitLevel;
#line 22 "MemTracking.chpl"
  *(refIndentLevel) += INT64(1);
#line 22 "MemTracking.chpl"
  chpl__init_MemTracking_p = UINT8(true);
#line 25 "MemTracking.chpl"
  call_tmp = chpl_config_has_value("memTrack", "Built-in");
#line 25 "MemTracking.chpl"
  call_tmp2 = (! call_tmp);
#line 25 "MemTracking.chpl"
  if (call_tmp2) /* ZLINE: 25 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 25 "MemTracking.chpl"
  {
#line 25 "MemTracking.chpl"
    const_tmp = UINT8(false);
#line 25 "MemTracking.chpl"
  } else /* ZLINE: 25 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 25 "MemTracking.chpl"
  {
#line 25 "MemTracking.chpl"
    call_tmp3 = chpl_config_get_value("memTrack", "Built-in");
#line 25 "MemTracking.chpl"
    const_tmp = _command_line_cast10(call_tmp3, _ln, _fn);
#line 25 "MemTracking.chpl"
  }
#line 25 "MemTracking.chpl"
  memTrack = const_tmp;
#line 26 "MemTracking.chpl"
  call_tmp4 = chpl_config_has_value("memStats", "Built-in");
#line 26 "MemTracking.chpl"
  call_tmp5 = (! call_tmp4);
#line 26 "MemTracking.chpl"
  if (call_tmp5) /* ZLINE: 26 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 26 "MemTracking.chpl"
  {
#line 26 "MemTracking.chpl"
    const_tmp2 = UINT8(false);
#line 26 "MemTracking.chpl"
  } else /* ZLINE: 26 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 26 "MemTracking.chpl"
  {
#line 26 "MemTracking.chpl"
    call_tmp6 = chpl_config_get_value("memStats", "Built-in");
#line 26 "MemTracking.chpl"
    const_tmp2 = _command_line_cast9(call_tmp6, _ln, _fn);
#line 26 "MemTracking.chpl"
  }
#line 26 "MemTracking.chpl"
  memStats = const_tmp2;
#line 27 "MemTracking.chpl"
  call_tmp7 = chpl_config_has_value("memLeaksByType", "Built-in");
#line 27 "MemTracking.chpl"
  call_tmp8 = (! call_tmp7);
#line 27 "MemTracking.chpl"
  if (call_tmp8) /* ZLINE: 27 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 27 "MemTracking.chpl"
  {
#line 27 "MemTracking.chpl"
    const_tmp3 = UINT8(false);
#line 27 "MemTracking.chpl"
  } else /* ZLINE: 27 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 27 "MemTracking.chpl"
  {
#line 27 "MemTracking.chpl"
    call_tmp9 = chpl_config_get_value("memLeaksByType", "Built-in");
#line 27 "MemTracking.chpl"
    const_tmp3 = _command_line_cast8(call_tmp9, _ln, _fn);
#line 27 "MemTracking.chpl"
  }
#line 27 "MemTracking.chpl"
  memLeaksByType = const_tmp3;
#line 28 "MemTracking.chpl"
  call_tmp10 = chpl_config_has_value("memLeaks", "Built-in");
#line 28 "MemTracking.chpl"
  call_tmp11 = (! call_tmp10);
#line 28 "MemTracking.chpl"
  if (call_tmp11) /* ZLINE: 28 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 28 "MemTracking.chpl"
  {
#line 28 "MemTracking.chpl"
    const_tmp4 = UINT8(false);
#line 28 "MemTracking.chpl"
  } else /* ZLINE: 28 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 28 "MemTracking.chpl"
  {
#line 28 "MemTracking.chpl"
    call_tmp12 = chpl_config_get_value("memLeaks", "Built-in");
#line 28 "MemTracking.chpl"
    const_tmp4 = _command_line_cast7(call_tmp12, _ln, _fn);
#line 28 "MemTracking.chpl"
  }
#line 28 "MemTracking.chpl"
  memLeaks = const_tmp4;
#line 29 "MemTracking.chpl"
  call_tmp13 = chpl_config_has_value("memMax", "Built-in");
#line 29 "MemTracking.chpl"
  call_tmp14 = (! call_tmp13);
#line 29 "MemTracking.chpl"
  if (call_tmp14) /* ZLINE: 29 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 29 "MemTracking.chpl"
  {
#line 29 "MemTracking.chpl"
    call_tmp15 = ((uint64_t)(INT64(0)));
#line 29 "MemTracking.chpl"
    const_tmp5 = call_tmp15;
#line 29 "MemTracking.chpl"
  } else /* ZLINE: 29 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 29 "MemTracking.chpl"
  {
#line 29 "MemTracking.chpl"
    call_tmp16 = chpl_config_get_value("memMax", "Built-in");
#line 29 "MemTracking.chpl"
    const_tmp5 = _command_line_cast6(call_tmp16, _ln, _fn);
#line 29 "MemTracking.chpl"
  }
#line 29 "MemTracking.chpl"
  memMax = const_tmp5;
#line 30 "MemTracking.chpl"
  call_tmp17 = chpl_config_has_value("memThreshold", "Built-in");
#line 30 "MemTracking.chpl"
  call_tmp18 = (! call_tmp17);
#line 30 "MemTracking.chpl"
  if (call_tmp18) /* ZLINE: 30 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 30 "MemTracking.chpl"
  {
#line 30 "MemTracking.chpl"
    call_tmp19 = ((uint64_t)(INT64(0)));
#line 30 "MemTracking.chpl"
    const_tmp6 = call_tmp19;
#line 30 "MemTracking.chpl"
  } else /* ZLINE: 30 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 30 "MemTracking.chpl"
  {
#line 30 "MemTracking.chpl"
    call_tmp20 = chpl_config_get_value("memThreshold", "Built-in");
#line 30 "MemTracking.chpl"
    const_tmp6 = _command_line_cast5(call_tmp20, _ln, _fn);
#line 30 "MemTracking.chpl"
  }
#line 30 "MemTracking.chpl"
  memThreshold = const_tmp6;
#line 31 "MemTracking.chpl"
  call_tmp21 = chpl_config_has_value("memLog", "Built-in");
#line 31 "MemTracking.chpl"
  call_tmp22 = (! call_tmp21);
#line 31 "MemTracking.chpl"
  if (call_tmp22) /* ZLINE: 31 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 31 "MemTracking.chpl"
  {
#line 31 "MemTracking.chpl"
    (&this5)->len = INT64(0);
#line 31 "MemTracking.chpl"
    (&this5)->_size = INT64(0);
#line 31 "MemTracking.chpl"
    (&this5)->buff = nil;
#line 31 "MemTracking.chpl"
    (&this5)->owned = UINT8(false);
#line 31 "MemTracking.chpl"
    (&this5)->locale_id = INT32(0);
#line 31 "MemTracking.chpl"
    (&this5)->len = INT64(0);
#line 31 "MemTracking.chpl"
    (&this5)->_size = INT64(0);
#line 31 "MemTracking.chpl"
    call_tmp23 = ((c_ptr_uint8_t)(nil));
#line 31 "MemTracking.chpl"
    (&this5)->buff = call_tmp23;
#line 31 "MemTracking.chpl"
    (&this5)->owned = UINT8(true);
#line 31 "MemTracking.chpl"
    default_arglocale_id = chpl_nodeID;
#line 31 "MemTracking.chpl"
    (&this5)->locale_id = default_arglocale_id;
#line 31 "MemTracking.chpl"
    ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 31 "MemTracking.chpl"
    _construct_string(INT64(0), INT64(0), call_tmp23, UINT8(true), default_arglocale_id, &this5, ret_to_arg_ref_tmp_, _ln, _fn);
#line 31 "MemTracking.chpl"
    const_tmp7 = wrap_call_tmp;
#line 31 "MemTracking.chpl"
  } else /* ZLINE: 31 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 31 "MemTracking.chpl"
  {
#line 31 "MemTracking.chpl"
    call_tmp24 = chpl_config_get_value("memLog", "Built-in");
#line 31 "MemTracking.chpl"
    ret_to_arg_ref_tmp_2 = &const_tmp7;
#line 31 "MemTracking.chpl"
    _command_line_cast4(call_tmp24, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 31 "MemTracking.chpl"
  }
#line 31 "MemTracking.chpl"
  memLog = const_tmp7;
#line 35 "MemTracking.chpl"
  call_tmp25 = chpl_config_has_value("memLeaksLog", "Built-in");
#line 35 "MemTracking.chpl"
  call_tmp26 = (! call_tmp25);
#line 35 "MemTracking.chpl"
  if (call_tmp26) /* ZLINE: 35 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 35 "MemTracking.chpl"
  {
#line 35 "MemTracking.chpl"
    (&this6)->len = INT64(0);
#line 35 "MemTracking.chpl"
    (&this6)->_size = INT64(0);
#line 35 "MemTracking.chpl"
    (&this6)->buff = nil;
#line 35 "MemTracking.chpl"
    (&this6)->owned = UINT8(false);
#line 35 "MemTracking.chpl"
    (&this6)->locale_id = INT32(0);
#line 35 "MemTracking.chpl"
    (&this6)->len = INT64(0);
#line 35 "MemTracking.chpl"
    (&this6)->_size = INT64(0);
#line 35 "MemTracking.chpl"
    call_tmp27 = ((c_ptr_uint8_t)(nil));
#line 35 "MemTracking.chpl"
    (&this6)->buff = call_tmp27;
#line 35 "MemTracking.chpl"
    (&this6)->owned = UINT8(true);
#line 35 "MemTracking.chpl"
    default_arglocale_id2 = chpl_nodeID;
#line 35 "MemTracking.chpl"
    (&this6)->locale_id = default_arglocale_id2;
#line 35 "MemTracking.chpl"
    ret_to_arg_ref_tmp_3 = &wrap_call_tmp2;
#line 35 "MemTracking.chpl"
    _construct_string(INT64(0), INT64(0), call_tmp27, UINT8(true), default_arglocale_id2, &this6, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 35 "MemTracking.chpl"
    const_tmp8 = wrap_call_tmp2;
#line 35 "MemTracking.chpl"
  } else /* ZLINE: 35 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 35 "MemTracking.chpl"
  {
#line 35 "MemTracking.chpl"
    call_tmp28 = chpl_config_get_value("memLeaksLog", "Built-in");
#line 35 "MemTracking.chpl"
    ret_to_arg_ref_tmp_4 = &const_tmp8;
#line 35 "MemTracking.chpl"
    _command_line_cast3(call_tmp28, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 35 "MemTracking.chpl"
  }
#line 35 "MemTracking.chpl"
  memLeaksLog = const_tmp8;
#line 52 "MemTracking.chpl"
  call_tmp29 = chpl_config_has_value("memLeaksByDesc", "Built-in");
#line 52 "MemTracking.chpl"
  call_tmp30 = (! call_tmp29);
#line 52 "MemTracking.chpl"
  if (call_tmp30) /* ZLINE: 52 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 52 "MemTracking.chpl"
  {
#line 52 "MemTracking.chpl"
    (&this7)->len = INT64(0);
#line 52 "MemTracking.chpl"
    (&this7)->_size = INT64(0);
#line 52 "MemTracking.chpl"
    (&this7)->buff = nil;
#line 52 "MemTracking.chpl"
    (&this7)->owned = UINT8(false);
#line 52 "MemTracking.chpl"
    (&this7)->locale_id = INT32(0);
#line 52 "MemTracking.chpl"
    (&this7)->len = INT64(0);
#line 52 "MemTracking.chpl"
    (&this7)->_size = INT64(0);
#line 52 "MemTracking.chpl"
    call_tmp31 = ((c_ptr_uint8_t)(nil));
#line 52 "MemTracking.chpl"
    (&this7)->buff = call_tmp31;
#line 52 "MemTracking.chpl"
    (&this7)->owned = UINT8(true);
#line 52 "MemTracking.chpl"
    default_arglocale_id3 = chpl_nodeID;
#line 52 "MemTracking.chpl"
    (&this7)->locale_id = default_arglocale_id3;
#line 52 "MemTracking.chpl"
    ret_to_arg_ref_tmp_5 = &wrap_call_tmp3;
#line 52 "MemTracking.chpl"
    _construct_string(INT64(0), INT64(0), call_tmp31, UINT8(true), default_arglocale_id3, &this7, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 52 "MemTracking.chpl"
    const_tmp9 = wrap_call_tmp3;
#line 52 "MemTracking.chpl"
  } else /* ZLINE: 52 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 52 "MemTracking.chpl"
  {
#line 52 "MemTracking.chpl"
    call_tmp32 = chpl_config_get_value("memLeaksByDesc", "Built-in");
#line 52 "MemTracking.chpl"
    ret_to_arg_ref_tmp_6 = &const_tmp9;
#line 52 "MemTracking.chpl"
    _command_line_cast2(call_tmp32, ret_to_arg_ref_tmp_6, _ln, _fn);
#line 52 "MemTracking.chpl"
  }
#line 52 "MemTracking.chpl"
  memLeaksByDesc = const_tmp9;
#line 55 "MemTracking.chpl"
  call_tmp33 = memMax;
#line 55 "MemTracking.chpl"
  cMemMax = call_tmp33;
#line 56 "MemTracking.chpl"
  call_tmp34 = memThreshold;
#line 56 "MemTracking.chpl"
  cMemThreshold = call_tmp34;
#line 22 "MemTracking.chpl"
  *(refIndentLevel) -= INT64(1);
#line 22 "MemTracking.chpl"
  _exit_chpl__init_MemTracking:;
#line 22 "MemTracking.chpl"
  return;
#line 22 "MemTracking.chpl"
}

#line 22 "MemTracking.chpl"
/* MemTracking.chpl:71 */
#line 22 "MemTracking.chpl"
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaksByType, _ref_c_string ret_memLeaksByDesc, _ref_chpl_bool ret_memLeaks, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog) {
#line 22 "MemTracking.chpl"
  string local_memLeaksLog;
#line 22 "MemTracking.chpl"
  string local_memLog;
#line 22 "MemTracking.chpl"
  string local__str_literal_302;
#line 22 "MemTracking.chpl"
  string local_memLeaksByDesc;
#line 22 "MemTracking.chpl"
  int32_t local_c_sublocid_any;
#line 22 "MemTracking.chpl"
  uint64_t local_cMemThreshold;
#line 22 "MemTracking.chpl"
  uint64_t local_cMemMax;
#line 22 "MemTracking.chpl"
  chpl_bool local_memLeaks;
#line 22 "MemTracking.chpl"
  chpl_bool local_memLeaksByType;
#line 22 "MemTracking.chpl"
  chpl_bool local_memStats;
#line 22 "MemTracking.chpl"
  chpl_bool local_memTrack;
#line 22 "MemTracking.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 22 "MemTracking.chpl"
  locale call_tmp = NULL;
#line 22 "MemTracking.chpl"
  int64_t call_tmp2;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp3;
#line 22 "MemTracking.chpl"
  int64_t ret;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp4;
#line 22 "MemTracking.chpl"
  string local_memLeaksByDesc2;
#line 22 "MemTracking.chpl"
  _ref_chpl_bool call_tmp5 = NULL;
#line 22 "MemTracking.chpl"
  int32_t coerce_tmp;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp6;
#line 22 "MemTracking.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 22 "MemTracking.chpl"
  c_string call_tmp7;
#line 22 "MemTracking.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 22 "MemTracking.chpl"
  c_string call_tmp8;
#line 22 "MemTracking.chpl"
  int64_t ret2;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp9;
#line 22 "MemTracking.chpl"
  string local_memLog2;
#line 22 "MemTracking.chpl"
  _ref_chpl_bool call_tmp10 = NULL;
#line 22 "MemTracking.chpl"
  int32_t coerce_tmp3;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp11;
#line 22 "MemTracking.chpl"
  c_ptr_uint8_t coerce_tmp4 = NULL;
#line 22 "MemTracking.chpl"
  c_string call_tmp12;
#line 22 "MemTracking.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 22 "MemTracking.chpl"
  c_string call_tmp13;
#line 22 "MemTracking.chpl"
  int64_t ret3;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp14;
#line 22 "MemTracking.chpl"
  string local_memLeaksLog2;
#line 22 "MemTracking.chpl"
  _ref_chpl_bool call_tmp15 = NULL;
#line 22 "MemTracking.chpl"
  int32_t coerce_tmp5;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp16;
#line 22 "MemTracking.chpl"
  c_ptr_uint8_t coerce_tmp6 = NULL;
#line 22 "MemTracking.chpl"
  c_string call_tmp17;
#line 22 "MemTracking.chpl"
  _ref_string _ref_tmp_3 = NULL;
#line 22 "MemTracking.chpl"
  c_string call_tmp18;
#line 22 "MemTracking.chpl"
  int32_t coerce_tmp7;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp19;
#line 22 "MemTracking.chpl"
  c_ptr_uint8_t coerce_tmp8 = NULL;
#line 22 "MemTracking.chpl"
  c_string call_tmp20;
#line 22 "MemTracking.chpl"
  int32_t coerce_tmp9;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp21;
#line 22 "MemTracking.chpl"
  c_ptr_uint8_t coerce_tmp10 = NULL;
#line 22 "MemTracking.chpl"
  c_string call_tmp22;
#line 22 "MemTracking.chpl"
  int32_t coerce_tmp11;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp23;
#line 22 "MemTracking.chpl"
  c_ptr_uint8_t coerce_tmp12 = NULL;
#line 22 "MemTracking.chpl"
  c_string call_tmp24;
#line 106 "MemTracking.chpl"
  local_memLeaksLog = memLeaksLog;
#line 97 "MemTracking.chpl"
  local_memLog = memLog;
#line 92 "MemTracking.chpl"
  local__str_literal_302 = _str_literal_302;
#line 88 "MemTracking.chpl"
  local_memLeaksByDesc = memLeaksByDesc;
#line 87 "MemTracking.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 85 "MemTracking.chpl"
  local_cMemThreshold = cMemThreshold;
#line 84 "MemTracking.chpl"
  local_cMemMax = cMemMax;
#line 83 "MemTracking.chpl"
  local_memLeaks = memLeaks;
#line 82 "MemTracking.chpl"
  local_memLeaksByType = memLeaksByType;
#line 81 "MemTracking.chpl"
  local_memStats = memStats;
#line 80 "MemTracking.chpl"
  local_memTrack = memTrack;
#line 80 "MemTracking.chpl"
  *(ret_memTrack) = local_memTrack;
#line 81 "MemTracking.chpl"
  *(ret_memStats) = local_memStats;
#line 82 "MemTracking.chpl"
  *(ret_memLeaksByType) = local_memLeaksByType;
#line 83 "MemTracking.chpl"
  *(ret_memLeaks) = local_memLeaks;
#line 84 "MemTracking.chpl"
  *(ret_memMax) = local_cMemMax;
#line 85 "MemTracking.chpl"
  *(ret_memThreshold) = local_cMemThreshold;
#line 87 "MemTracking.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 87 "MemTracking.chpl"
  call_tmp = chpl_localeID_to_locale(&_autoCopy_tmp_, INT64(87), INT32(36));
#line 87 "MemTracking.chpl"
  chpl_check_nil(call_tmp, INT64(87), INT64(36));
#line 87 "MemTracking.chpl"
  call_tmp2 = id(call_tmp, INT64(87), INT32(36));
#line 87 "MemTracking.chpl"
  call_tmp3 = (call_tmp2 != INT64(0));
#line 87 "MemTracking.chpl"
  if (call_tmp3) /* ZLINE: 88 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 87 "MemTracking.chpl"
  {
#line 88 "MemTracking.chpl"
    ret = (&local_memLeaksByDesc)->len;
#line 88 "MemTracking.chpl"
    call_tmp4 = (ret != INT64(0));
#line 88 "MemTracking.chpl"
    if (call_tmp4) /* ZLINE: 89 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 88 "MemTracking.chpl"
    {
#line 89 "MemTracking.chpl"
      local_memLeaksByDesc2 = chpl__initCopy3(&local_memLeaksByDesc, INT64(89), INT32(36));
#line 91 "MemTracking.chpl"
      call_tmp5 = &((&local_memLeaksByDesc2)->owned);
#line 91 "MemTracking.chpl"
      *(call_tmp5) = UINT8(false);
#line 92 "MemTracking.chpl"
      coerce_tmp = (&local_memLeaksByDesc2)->locale_id;
#line 92 "MemTracking.chpl"
      call_tmp6 = (coerce_tmp != chpl_nodeID);
#line 92 "MemTracking.chpl"
      if (call_tmp6) /* ZLINE: 92 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 92 "MemTracking.chpl"
      {
#line 92 "MemTracking.chpl"
        halt(&local__str_literal_302, INT64(92), INT32(36));
#line 92 "MemTracking.chpl"
      }
#line 92 "MemTracking.chpl"
      coerce_tmp2 = (&local_memLeaksByDesc2)->buff;
#line 92 "MemTracking.chpl"
      call_tmp7 = ((c_string)(coerce_tmp2));
#line 92 "MemTracking.chpl"
      *(ret_memLeaksByDesc) = call_tmp7;
#line 89 "MemTracking.chpl"
      _ref_tmp_ = &local_memLeaksByDesc2;
#line 89 "MemTracking.chpl"
      chpl___TILDE_string(_ref_tmp_, INT64(89), INT32(36));
#line 89 "MemTracking.chpl"
    } else /* ZLINE: 94 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 89 "MemTracking.chpl"
    {
#line 94 "MemTracking.chpl"
      call_tmp8 = ((c_string)(NULL));
#line 94 "MemTracking.chpl"
      *(ret_memLeaksByDesc) = call_tmp8;
#line 94 "MemTracking.chpl"
    }
#line 97 "MemTracking.chpl"
    ret2 = (&local_memLog)->len;
#line 97 "MemTracking.chpl"
    call_tmp9 = (ret2 != INT64(0));
#line 97 "MemTracking.chpl"
    if (call_tmp9) /* ZLINE: 98 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 97 "MemTracking.chpl"
    {
#line 98 "MemTracking.chpl"
      local_memLog2 = chpl__initCopy3(&local_memLog, INT64(98), INT32(36));
#line 100 "MemTracking.chpl"
      call_tmp10 = &((&local_memLog2)->owned);
#line 100 "MemTracking.chpl"
      *(call_tmp10) = UINT8(false);
#line 101 "MemTracking.chpl"
      coerce_tmp3 = (&local_memLog2)->locale_id;
#line 101 "MemTracking.chpl"
      call_tmp11 = (coerce_tmp3 != chpl_nodeID);
#line 101 "MemTracking.chpl"
      if (call_tmp11) /* ZLINE: 101 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 101 "MemTracking.chpl"
      {
#line 101 "MemTracking.chpl"
        halt(&local__str_literal_302, INT64(101), INT32(36));
#line 101 "MemTracking.chpl"
      }
#line 101 "MemTracking.chpl"
      coerce_tmp4 = (&local_memLog2)->buff;
#line 101 "MemTracking.chpl"
      call_tmp12 = ((c_string)(coerce_tmp4));
#line 101 "MemTracking.chpl"
      *(ret_memLog) = call_tmp12;
#line 98 "MemTracking.chpl"
      _ref_tmp_2 = &local_memLog2;
#line 98 "MemTracking.chpl"
      chpl___TILDE_string(_ref_tmp_2, INT64(98), INT32(36));
#line 98 "MemTracking.chpl"
    } else /* ZLINE: 103 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 98 "MemTracking.chpl"
    {
#line 103 "MemTracking.chpl"
      call_tmp13 = ((c_string)(NULL));
#line 103 "MemTracking.chpl"
      *(ret_memLog) = call_tmp13;
#line 103 "MemTracking.chpl"
    }
#line 106 "MemTracking.chpl"
    ret3 = (&local_memLeaksLog)->len;
#line 106 "MemTracking.chpl"
    call_tmp14 = (ret3 != INT64(0));
#line 106 "MemTracking.chpl"
    if (call_tmp14) /* ZLINE: 107 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 106 "MemTracking.chpl"
    {
#line 107 "MemTracking.chpl"
      local_memLeaksLog2 = chpl__initCopy3(&local_memLeaksLog, INT64(107), INT32(36));
#line 109 "MemTracking.chpl"
      call_tmp15 = &((&local_memLeaksLog2)->owned);
#line 109 "MemTracking.chpl"
      *(call_tmp15) = UINT8(false);
#line 110 "MemTracking.chpl"
      coerce_tmp5 = (&local_memLeaksLog2)->locale_id;
#line 110 "MemTracking.chpl"
      call_tmp16 = (coerce_tmp5 != chpl_nodeID);
#line 110 "MemTracking.chpl"
      if (call_tmp16) /* ZLINE: 110 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 110 "MemTracking.chpl"
      {
#line 110 "MemTracking.chpl"
        halt(&local__str_literal_302, INT64(110), INT32(36));
#line 110 "MemTracking.chpl"
      }
#line 110 "MemTracking.chpl"
      coerce_tmp6 = (&local_memLeaksLog2)->buff;
#line 110 "MemTracking.chpl"
      call_tmp17 = ((c_string)(coerce_tmp6));
#line 110 "MemTracking.chpl"
      *(ret_memLeaksLog) = call_tmp17;
#line 107 "MemTracking.chpl"
      _ref_tmp_3 = &local_memLeaksLog2;
#line 107 "MemTracking.chpl"
      chpl___TILDE_string(_ref_tmp_3, INT64(107), INT32(36));
#line 107 "MemTracking.chpl"
    } else /* ZLINE: 112 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 107 "MemTracking.chpl"
    {
#line 112 "MemTracking.chpl"
      call_tmp18 = ((c_string)(NULL));
#line 112 "MemTracking.chpl"
      *(ret_memLeaksLog) = call_tmp18;
#line 112 "MemTracking.chpl"
    }
#line 112 "MemTracking.chpl"
  } else /* ZLINE: 116 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 112 "MemTracking.chpl"
  {
#line 116 "MemTracking.chpl"
    coerce_tmp7 = (&local_memLeaksByDesc)->locale_id;
#line 116 "MemTracking.chpl"
    call_tmp19 = (coerce_tmp7 != chpl_nodeID);
#line 116 "MemTracking.chpl"
    if (call_tmp19) /* ZLINE: 116 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 116 "MemTracking.chpl"
    {
#line 116 "MemTracking.chpl"
      halt(&local__str_literal_302, INT64(116), INT32(36));
#line 116 "MemTracking.chpl"
    }
#line 116 "MemTracking.chpl"
    coerce_tmp8 = (&local_memLeaksByDesc)->buff;
#line 116 "MemTracking.chpl"
    call_tmp20 = ((c_string)(coerce_tmp8));
#line 116 "MemTracking.chpl"
    *(ret_memLeaksByDesc) = call_tmp20;
#line 117 "MemTracking.chpl"
    coerce_tmp9 = (&local_memLog)->locale_id;
#line 117 "MemTracking.chpl"
    call_tmp21 = (coerce_tmp9 != chpl_nodeID);
#line 117 "MemTracking.chpl"
    if (call_tmp21) /* ZLINE: 117 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 117 "MemTracking.chpl"
    {
#line 117 "MemTracking.chpl"
      halt(&local__str_literal_302, INT64(117), INT32(36));
#line 117 "MemTracking.chpl"
    }
#line 117 "MemTracking.chpl"
    coerce_tmp10 = (&local_memLog)->buff;
#line 117 "MemTracking.chpl"
    call_tmp22 = ((c_string)(coerce_tmp10));
#line 117 "MemTracking.chpl"
    *(ret_memLog) = call_tmp22;
#line 118 "MemTracking.chpl"
    coerce_tmp11 = (&local_memLeaksLog)->locale_id;
#line 118 "MemTracking.chpl"
    call_tmp23 = (coerce_tmp11 != chpl_nodeID);
#line 118 "MemTracking.chpl"
    if (call_tmp23) /* ZLINE: 118 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemTracking.chpl */
#line 118 "MemTracking.chpl"
    {
#line 118 "MemTracking.chpl"
      halt(&local__str_literal_302, INT64(118), INT32(36));
#line 118 "MemTracking.chpl"
    }
#line 118 "MemTracking.chpl"
    coerce_tmp12 = (&local_memLeaksLog)->buff;
#line 118 "MemTracking.chpl"
    call_tmp24 = ((c_string)(coerce_tmp12));
#line 118 "MemTracking.chpl"
    *(ret_memLeaksLog) = call_tmp24;
#line 118 "MemTracking.chpl"
  }
#line 71 "MemTracking.chpl"
  return;
#line 71 "MemTracking.chpl"
}


/* MemTracking.chpl:22 */
static void chpl__init_MemTracking(int64_t _ln, c_string _fn) {
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
  c_string const_tmp7;
  chpl_bool call_tmp21;
  chpl_bool call_tmp22;
  c_string call_tmp23;
  c_string const_tmp8;
  chpl_bool call_tmp24;
  chpl_bool call_tmp25;
  c_string call_tmp26;
  c_string const_tmp9;
  chpl_bool call_tmp27;
  chpl_bool call_tmp28;
  c_string call_tmp29;
  uint64_t call_tmp30;
  uint64_t call_tmp31;
  string_rec_chpl type_tmp;
  string_rec_chpl call_tmp32;
  _ref_string_rec _ref_tmp_ = NULL;
  string_rec_chpl type_tmp2;
  string_rec_chpl call_tmp33;
  _ref_string_rec _ref_tmp_2 = NULL;
  string_rec_chpl type_tmp3;
  string_rec_chpl call_tmp34;
  _ref_string_rec _ref_tmp_3 = NULL;
#line 22 "MemTracking.chpl"
  if (chpl__init_MemTracking_p) /* ZLINE: 22 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
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
  chpl__init_MemTracking_p = true;
#line 22 "MemTracking.chpl"
  {
#line 22 "MemTracking.chpl"
    chpl__init_NewString(_ln, _fn);
#line 22 "MemTracking.chpl"
  }
#line 25 "MemTracking.chpl"
  call_tmp = chpl_config_has_value("memTrack", "Built-in");
#line 25 "MemTracking.chpl"
  call_tmp2 = (! call_tmp);
#line 25 "MemTracking.chpl"
  if (call_tmp2) /* ZLINE: 25 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 25 "MemTracking.chpl"
  {
#line 25 "MemTracking.chpl"
    const_tmp = false;
#line 25 "MemTracking.chpl"
  } else /* ZLINE: 25 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 25 "MemTracking.chpl"
  {
#line 25 "MemTracking.chpl"
    call_tmp3 = chpl_config_get_value("memTrack", "Built-in");
#line 25 "MemTracking.chpl"
    const_tmp = _command_line_cast(call_tmp3, _ln, _fn);
#line 25 "MemTracking.chpl"
  }
#line 25 "MemTracking.chpl"
  memTrack = const_tmp;
#line 26 "MemTracking.chpl"
  call_tmp4 = chpl_config_has_value("memStats", "Built-in");
#line 26 "MemTracking.chpl"
  call_tmp5 = (! call_tmp4);
#line 26 "MemTracking.chpl"
  if (call_tmp5) /* ZLINE: 26 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 26 "MemTracking.chpl"
  {
#line 26 "MemTracking.chpl"
    const_tmp2 = false;
#line 26 "MemTracking.chpl"
  } else /* ZLINE: 26 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 26 "MemTracking.chpl"
  {
#line 26 "MemTracking.chpl"
    call_tmp6 = chpl_config_get_value("memStats", "Built-in");
#line 26 "MemTracking.chpl"
    const_tmp2 = _command_line_cast2(call_tmp6, _ln, _fn);
#line 26 "MemTracking.chpl"
  }
#line 26 "MemTracking.chpl"
  memStats = const_tmp2;
#line 27 "MemTracking.chpl"
  call_tmp7 = chpl_config_has_value("memLeaksByType", "Built-in");
#line 27 "MemTracking.chpl"
  call_tmp8 = (! call_tmp7);
#line 27 "MemTracking.chpl"
  if (call_tmp8) /* ZLINE: 27 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 27 "MemTracking.chpl"
  {
#line 27 "MemTracking.chpl"
    const_tmp3 = false;
#line 27 "MemTracking.chpl"
  } else /* ZLINE: 27 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 27 "MemTracking.chpl"
  {
#line 27 "MemTracking.chpl"
    call_tmp9 = chpl_config_get_value("memLeaksByType", "Built-in");
#line 27 "MemTracking.chpl"
    const_tmp3 = _command_line_cast4(call_tmp9, _ln, _fn);
#line 27 "MemTracking.chpl"
  }
#line 27 "MemTracking.chpl"
  memLeaksByType = const_tmp3;
#line 28 "MemTracking.chpl"
  call_tmp10 = chpl_config_has_value("memLeaks", "Built-in");
#line 28 "MemTracking.chpl"
  call_tmp11 = (! call_tmp10);
#line 28 "MemTracking.chpl"
  if (call_tmp11) /* ZLINE: 28 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 28 "MemTracking.chpl"
  {
#line 28 "MemTracking.chpl"
    const_tmp4 = false;
#line 28 "MemTracking.chpl"
  } else /* ZLINE: 28 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 28 "MemTracking.chpl"
  {
#line 28 "MemTracking.chpl"
    call_tmp12 = chpl_config_get_value("memLeaks", "Built-in");
#line 28 "MemTracking.chpl"
    const_tmp4 = _command_line_cast3(call_tmp12, _ln, _fn);
#line 28 "MemTracking.chpl"
  }
#line 28 "MemTracking.chpl"
  memLeaks = const_tmp4;
#line 29 "MemTracking.chpl"
  call_tmp13 = chpl_config_has_value("memMax", "Built-in");
#line 29 "MemTracking.chpl"
  call_tmp14 = (! call_tmp13);
#line 29 "MemTracking.chpl"
  if (call_tmp14) /* ZLINE: 29 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 29 "MemTracking.chpl"
  {
#line 29 "MemTracking.chpl"
    call_tmp15 = ((uint64_t)(INT64(0)));
#line 29 "MemTracking.chpl"
    const_tmp5 = call_tmp15;
#line 29 "MemTracking.chpl"
  } else /* ZLINE: 29 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 29 "MemTracking.chpl"
  {
#line 29 "MemTracking.chpl"
    call_tmp16 = chpl_config_get_value("memMax", "Built-in");
#line 29 "MemTracking.chpl"
    const_tmp5 = _command_line_cast5(call_tmp16, _ln, _fn);
#line 29 "MemTracking.chpl"
  }
#line 29 "MemTracking.chpl"
  memMax = const_tmp5;
#line 30 "MemTracking.chpl"
  call_tmp17 = chpl_config_has_value("memThreshold", "Built-in");
#line 30 "MemTracking.chpl"
  call_tmp18 = (! call_tmp17);
#line 30 "MemTracking.chpl"
  if (call_tmp18) /* ZLINE: 30 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 30 "MemTracking.chpl"
  {
#line 30 "MemTracking.chpl"
    call_tmp19 = ((uint64_t)(INT64(0)));
#line 30 "MemTracking.chpl"
    const_tmp6 = call_tmp19;
#line 30 "MemTracking.chpl"
  } else /* ZLINE: 30 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 30 "MemTracking.chpl"
  {
#line 30 "MemTracking.chpl"
    call_tmp20 = chpl_config_get_value("memThreshold", "Built-in");
#line 30 "MemTracking.chpl"
    const_tmp6 = _command_line_cast6(call_tmp20, _ln, _fn);
#line 30 "MemTracking.chpl"
  }
#line 30 "MemTracking.chpl"
  memThreshold = const_tmp6;
#line 31 "MemTracking.chpl"
  call_tmp21 = chpl_config_has_value("memLog", "Built-in");
#line 31 "MemTracking.chpl"
  call_tmp22 = (! call_tmp21);
#line 31 "MemTracking.chpl"
  if (call_tmp22) /* ZLINE: 31 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 31 "MemTracking.chpl"
  {
#line 31 "MemTracking.chpl"
    const_tmp7 = "";
#line 31 "MemTracking.chpl"
  } else /* ZLINE: 31 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 31 "MemTracking.chpl"
  {
#line 31 "MemTracking.chpl"
    call_tmp23 = chpl_config_get_value("memLog", "Built-in");
#line 31 "MemTracking.chpl"
    const_tmp7 = _command_line_cast7(call_tmp23);
#line 31 "MemTracking.chpl"
  }
#line 31 "MemTracking.chpl"
  memLog = const_tmp7;
#line 35 "MemTracking.chpl"
  call_tmp24 = chpl_config_has_value("memLeaksLog", "Built-in");
#line 35 "MemTracking.chpl"
  call_tmp25 = (! call_tmp24);
#line 35 "MemTracking.chpl"
  if (call_tmp25) /* ZLINE: 35 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 35 "MemTracking.chpl"
  {
#line 35 "MemTracking.chpl"
    const_tmp8 = "";
#line 35 "MemTracking.chpl"
  } else /* ZLINE: 35 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 35 "MemTracking.chpl"
  {
#line 35 "MemTracking.chpl"
    call_tmp26 = chpl_config_get_value("memLeaksLog", "Built-in");
#line 35 "MemTracking.chpl"
    const_tmp8 = _command_line_cast8(call_tmp26);
#line 35 "MemTracking.chpl"
  }
#line 35 "MemTracking.chpl"
  memLeaksLog = const_tmp8;
#line 52 "MemTracking.chpl"
  call_tmp27 = chpl_config_has_value("memLeaksByDesc", "Built-in");
#line 52 "MemTracking.chpl"
  call_tmp28 = (! call_tmp27);
#line 52 "MemTracking.chpl"
  if (call_tmp28) /* ZLINE: 52 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 52 "MemTracking.chpl"
  {
#line 52 "MemTracking.chpl"
    const_tmp9 = "";
#line 52 "MemTracking.chpl"
  } else /* ZLINE: 52 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 52 "MemTracking.chpl"
  {
#line 52 "MemTracking.chpl"
    call_tmp29 = chpl_config_get_value("memLeaksByDesc", "Built-in");
#line 52 "MemTracking.chpl"
    const_tmp9 = _command_line_cast9(call_tmp29);
#line 52 "MemTracking.chpl"
  }
#line 52 "MemTracking.chpl"
  memLeaksByDesc = const_tmp9;
#line 55 "MemTracking.chpl"
  call_tmp30 = memMax;
#line 55 "MemTracking.chpl"
  cMemMax = call_tmp30;
#line 56 "MemTracking.chpl"
  call_tmp31 = memThreshold;
#line 56 "MemTracking.chpl"
  cMemThreshold = call_tmp31;
#line 60 "MemTracking.chpl"
  call_tmp32 = string_rec_chpl2(_ln, _fn);
#line 60 "MemTracking.chpl"
  type_tmp = call_tmp32;
#line 60 "MemTracking.chpl"
  _ref_tmp_ = &type_tmp;
#line 60 "MemTracking.chpl"
  chpl___ASSIGN_6(_ref_tmp_, memLeaksByDesc, _ln, _fn);
#line 60 "MemTracking.chpl"
  s_memLeaksByDesc = type_tmp;
#line 61 "MemTracking.chpl"
  call_tmp33 = string_rec_chpl2(_ln, _fn);
#line 61 "MemTracking.chpl"
  type_tmp2 = call_tmp33;
#line 61 "MemTracking.chpl"
  _ref_tmp_2 = &type_tmp2;
#line 61 "MemTracking.chpl"
  chpl___ASSIGN_6(_ref_tmp_2, memLog, _ln, _fn);
#line 61 "MemTracking.chpl"
  s_memLog = type_tmp2;
#line 62 "MemTracking.chpl"
  call_tmp34 = string_rec_chpl2(_ln, _fn);
#line 62 "MemTracking.chpl"
  type_tmp3 = call_tmp34;
#line 62 "MemTracking.chpl"
  _ref_tmp_3 = &type_tmp3;
#line 62 "MemTracking.chpl"
  chpl___ASSIGN_6(_ref_tmp_3, memLeaksLog, _ln, _fn);
#line 62 "MemTracking.chpl"
  s_memLeaksLog = type_tmp3;
#line 22 "MemTracking.chpl"
  *(refIndentLevel) -= INT64(1);
#line 22 "MemTracking.chpl"
  _exit_chpl__init_MemTracking:;
#line 22 "MemTracking.chpl"
  return;
#line 22 "MemTracking.chpl"
}

#line 22 "MemTracking.chpl"
/* MemTracking.chpl:77 */
#line 22 "MemTracking.chpl"
void chpl_memTracking_returnConfigVals(_ref_chpl_bool ret_memTrack, _ref_chpl_bool ret_memStats, _ref_chpl_bool ret_memLeaksByType, _ref_c_string ret_memLeaksByDesc, _ref_chpl_bool ret_memLeaks, _ref_uint64_t ret_memMax, _ref_uint64_t ret_memThreshold, _ref_c_string ret_memLog, _ref_c_string ret_memLeaksLog, int64_t _ln, c_string _fn) {
#line 22 "MemTracking.chpl"
  c_string local_memLeaksLog;
#line 22 "MemTracking.chpl"
  c_string local_memLog;
#line 22 "MemTracking.chpl"
  c_string local_memLeaksByDesc;
#line 22 "MemTracking.chpl"
  string_rec_chpl local_s_memLeaksLog;
#line 22 "MemTracking.chpl"
  string_rec_chpl local_s_memLog;
#line 22 "MemTracking.chpl"
  string_rec_chpl local_s_memLeaksByDesc;
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
  chpl_localeID_t call_tmp;
#line 22 "MemTracking.chpl"
  chpl_localeID_t call_tmp2;
#line 22 "MemTracking.chpl"
  locale call_tmp3 = NULL;
#line 22 "MemTracking.chpl"
  int64_t call_tmp4;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp5;
#line 22 "MemTracking.chpl"
  int64_t ret;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp6;
#line 22 "MemTracking.chpl"
  locale ret2 = NULL;
#line 22 "MemTracking.chpl"
  int64_t call_tmp7;
#line 22 "MemTracking.chpl"
  c_string ret3;
#line 22 "MemTracking.chpl"
  int64_t ret4;
#line 22 "MemTracking.chpl"
  c_string_copy call_tmp8;
#line 22 "MemTracking.chpl"
  c_string call_tmp9;
#line 22 "MemTracking.chpl"
  int64_t ret5;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp10;
#line 22 "MemTracking.chpl"
  locale ret6 = NULL;
#line 22 "MemTracking.chpl"
  int64_t call_tmp11;
#line 22 "MemTracking.chpl"
  c_string ret7;
#line 22 "MemTracking.chpl"
  int64_t ret8;
#line 22 "MemTracking.chpl"
  c_string_copy call_tmp12;
#line 22 "MemTracking.chpl"
  c_string call_tmp13;
#line 22 "MemTracking.chpl"
  int64_t ret9;
#line 22 "MemTracking.chpl"
  chpl_bool call_tmp14;
#line 22 "MemTracking.chpl"
  locale ret10 = NULL;
#line 22 "MemTracking.chpl"
  int64_t call_tmp15;
#line 22 "MemTracking.chpl"
  c_string ret11;
#line 22 "MemTracking.chpl"
  int64_t ret12;
#line 22 "MemTracking.chpl"
  c_string_copy call_tmp16;
#line 22 "MemTracking.chpl"
  c_string call_tmp17;
#line 113 "MemTracking.chpl"
  local_memLeaksLog = memLeaksLog;
#line 112 "MemTracking.chpl"
  local_memLog = memLog;
#line 111 "MemTracking.chpl"
  local_memLeaksByDesc = memLeaksByDesc;
#line 105 "MemTracking.chpl"
  local_s_memLeaksLog = s_memLeaksLog;
#line 100 "MemTracking.chpl"
  local_s_memLog = s_memLog;
#line 95 "MemTracking.chpl"
  local_s_memLeaksByDesc = s_memLeaksByDesc;
#line 93 "MemTracking.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 91 "MemTracking.chpl"
  local_cMemThreshold = cMemThreshold;
#line 90 "MemTracking.chpl"
  local_cMemMax = cMemMax;
#line 89 "MemTracking.chpl"
  local_memLeaks = memLeaks;
#line 88 "MemTracking.chpl"
  local_memLeaksByType = memLeaksByType;
#line 87 "MemTracking.chpl"
  local_memStats = memStats;
#line 86 "MemTracking.chpl"
  local_memTrack = memTrack;
#line 86 "MemTracking.chpl"
  *(ret_memTrack) = local_memTrack;
#line 87 "MemTracking.chpl"
  *(ret_memStats) = local_memStats;
#line 88 "MemTracking.chpl"
  *(ret_memLeaksByType) = local_memLeaksByType;
#line 89 "MemTracking.chpl"
  *(ret_memLeaks) = local_memLeaks;
#line 90 "MemTracking.chpl"
  *(ret_memMax) = local_cMemMax;
#line 91 "MemTracking.chpl"
  *(ret_memThreshold) = local_cMemThreshold;
#line 93 "MemTracking.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 93 "MemTracking.chpl"
  call_tmp = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
#line 93 "MemTracking.chpl"
  call_tmp2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp);
#line 93 "MemTracking.chpl"
  call_tmp3 = chpl_localeID_to_locale(&call_tmp2, _ln, _fn);
#line 93 "MemTracking.chpl"
  chpl_check_nil(call_tmp3, INT64(93), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl");
#line 93 "MemTracking.chpl"
  call_tmp4 = id(call_tmp3, _ln, _fn);
#line 93 "MemTracking.chpl"
  call_tmp5 = (call_tmp4 != INT64(0));
#line 93 "MemTracking.chpl"
  if (call_tmp5) /* ZLINE: 95 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 93 "MemTracking.chpl"
  {
#line 95 "MemTracking.chpl"
    ret = (&local_s_memLeaksByDesc)->len_chpl;
#line 95 "MemTracking.chpl"
    call_tmp6 = (ret != INT64(0));
#line 95 "MemTracking.chpl"
    if (call_tmp6) /* ZLINE: 95 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 95 "MemTracking.chpl"
    {
#line 96 "MemTracking.chpl"
      ret2 = (&local_s_memLeaksByDesc)->home_chpl;
#line 96 "MemTracking.chpl"
      chpl_check_nil(ret2, INT64(96), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl");
#line 96 "MemTracking.chpl"
      call_tmp7 = id(ret2, _ln, _fn);
#line 97 "MemTracking.chpl"
      ret3 = (&local_s_memLeaksByDesc)->base_chpl;
#line 98 "MemTracking.chpl"
      ret4 = (&local_s_memLeaksByDesc)->len_chpl;
#line 96 "MemTracking.chpl"
      call_tmp8 = remoteStringCopy(call_tmp7, ret3, ret4, _ln, _fn);
#line 96 "MemTracking.chpl"
      call_tmp9 = ((c_string)(call_tmp8));
#line 96 "MemTracking.chpl"
      *(ret_memLeaksByDesc) = call_tmp9;
#line 96 "MemTracking.chpl"
    } else /* ZLINE: 95 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 96 "MemTracking.chpl"
    {
#line 99 "MemTracking.chpl"
      *(ret_memLeaksByDesc) = "";
#line 99 "MemTracking.chpl"
    }
#line 100 "MemTracking.chpl"
    ret5 = (&local_s_memLog)->len_chpl;
#line 100 "MemTracking.chpl"
    call_tmp10 = (ret5 != INT64(0));
#line 100 "MemTracking.chpl"
    if (call_tmp10) /* ZLINE: 100 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 100 "MemTracking.chpl"
    {
#line 101 "MemTracking.chpl"
      ret6 = (&local_s_memLog)->home_chpl;
#line 101 "MemTracking.chpl"
      chpl_check_nil(ret6, INT64(101), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl");
#line 101 "MemTracking.chpl"
      call_tmp11 = id(ret6, _ln, _fn);
#line 102 "MemTracking.chpl"
      ret7 = (&local_s_memLog)->base_chpl;
#line 103 "MemTracking.chpl"
      ret8 = (&local_s_memLog)->len_chpl;
#line 101 "MemTracking.chpl"
      call_tmp12 = remoteStringCopy(call_tmp11, ret7, ret8, _ln, _fn);
#line 101 "MemTracking.chpl"
      call_tmp13 = ((c_string)(call_tmp12));
#line 101 "MemTracking.chpl"
      *(ret_memLog) = call_tmp13;
#line 101 "MemTracking.chpl"
    } else /* ZLINE: 100 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 101 "MemTracking.chpl"
    {
#line 104 "MemTracking.chpl"
      *(ret_memLog) = "";
#line 104 "MemTracking.chpl"
    }
#line 105 "MemTracking.chpl"
    ret9 = (&local_s_memLeaksLog)->len_chpl;
#line 105 "MemTracking.chpl"
    call_tmp14 = (ret9 != INT64(0));
#line 105 "MemTracking.chpl"
    if (call_tmp14) /* ZLINE: 105 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 105 "MemTracking.chpl"
    {
#line 106 "MemTracking.chpl"
      ret10 = (&local_s_memLeaksLog)->home_chpl;
#line 106 "MemTracking.chpl"
      chpl_check_nil(ret10, INT64(106), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl");
#line 106 "MemTracking.chpl"
      call_tmp15 = id(ret10, _ln, _fn);
#line 107 "MemTracking.chpl"
      ret11 = (&local_s_memLeaksLog)->base_chpl;
#line 108 "MemTracking.chpl"
      ret12 = (&local_s_memLeaksLog)->len_chpl;
#line 106 "MemTracking.chpl"
      call_tmp16 = remoteStringCopy(call_tmp15, ret11, ret12, _ln, _fn);
#line 106 "MemTracking.chpl"
      call_tmp17 = ((c_string)(call_tmp16));
#line 106 "MemTracking.chpl"
      *(ret_memLeaksLog) = call_tmp17;
#line 106 "MemTracking.chpl"
    } else /* ZLINE: 105 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 106 "MemTracking.chpl"
    {
#line 109 "MemTracking.chpl"
      *(ret_memLeaksLog) = "";
#line 109 "MemTracking.chpl"
    }
#line 109 "MemTracking.chpl"
  } else /* ZLINE: 111 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl */
#line 109 "MemTracking.chpl"
  {
#line 111 "MemTracking.chpl"
    *(ret_memLeaksByDesc) = local_memLeaksByDesc;
#line 112 "MemTracking.chpl"
    *(ret_memLog) = local_memLog;
#line 113 "MemTracking.chpl"
    *(ret_memLeaksLog) = local_memLeaksLog;
#line 113 "MemTracking.chpl"
  }
#line 77 "MemTracking.chpl"
  return;
#line 77 "MemTracking.chpl"
}


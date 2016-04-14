/* DSIUtil.chpl:1 */
static void chpl__init_DSIUtil(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 1 "DSIUtil.chpl"
  if (chpl__init_DSIUtil_p) /* ZLINE: 1 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 1 "DSIUtil.chpl"
  {
#line 1 "DSIUtil.chpl"
    goto _exit_chpl__init_DSIUtil_chpl;
#line 1 "DSIUtil.chpl"
  }
#line 1 "DSIUtil.chpl"
  modFormatStr_chpl = "%*s\n";
#line 1 "DSIUtil.chpl"
  modStr_chpl = "DSIUtil";
#line 1 "DSIUtil.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(7), _ln_chpl, _fn_chpl);
#line 1 "DSIUtil.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 1 "DSIUtil.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 1 "DSIUtil.chpl"
  chpl__init_DSIUtil_p = UINT8(true);
#line 1 "DSIUtil.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 1 "DSIUtil.chpl"
  _exit_chpl__init_DSIUtil_chpl:;
#line 1 "DSIUtil.chpl"
  return;
#line 1 "DSIUtil.chpl"
}

#line 1 "DSIUtil.chpl"
/* DSIUtil.chpl:37 */
#line 1 "DSIUtil.chpl"
static void createTuple_chpl(int64_t val_chpl, _ref__tuple_1_star_int64_t _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 1 "DSIUtil.chpl"
  int64_t tup_x1_chpl;
#line 1 "DSIUtil.chpl"
  _ref_int64_t call_tmp_chpl = NULL;
#line 38 "DSIUtil.chpl"
  tup_x1_chpl = INT64(0);
#line 39 "DSIUtil.chpl"
  call_tmp_chpl = &tup_x1_chpl;
#line 39 "DSIUtil.chpl"
  *(call_tmp_chpl) = val_chpl;
#line 37 "DSIUtil.chpl"
  *(*(_retArg_chpl) + INT64(0)) = tup_x1_chpl;
#line 37 "DSIUtil.chpl"
  return;
#line 37 "DSIUtil.chpl"
}

#line 37 "DSIUtil.chpl"
/* DSIUtil.chpl:92 */
#line 37 "DSIUtil.chpl"
static int64_t _computeNumChunks_chpl(int64_t maxTasks_chpl, chpl_bool ignoreRunning_chpl, int64_t minSize_chpl, int64_t numElems_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 37 "DSIUtil.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 37 "DSIUtil.chpl"
  int64_t ret_chpl;
#line 37 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl;
#line 37 "DSIUtil.chpl"
  uint64_t unumElems_chpl;
#line 37 "DSIUtil.chpl"
  uint64_t call_tmp_chpl2;
#line 37 "DSIUtil.chpl"
  int64_t numChunks_chpl;
#line 37 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl3;
#line 37 "DSIUtil.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 37 "DSIUtil.chpl"
  locale call_tmp_chpl4 = NULL;
#line 37 "DSIUtil.chpl"
  int64_t call_tmp_chpl5;
#line 37 "DSIUtil.chpl"
  int64_t call_tmp_chpl6;
#line 37 "DSIUtil.chpl"
  int64_t tmp_chpl;
#line 37 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl7;
#line 37 "DSIUtil.chpl"
  int64_t call_tmp_chpl8;
#line 37 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl9;
#line 37 "DSIUtil.chpl"
  chpl_bool tmp_chpl2;
#line 37 "DSIUtil.chpl"
  int64_t call_tmp_chpl10;
#line 37 "DSIUtil.chpl"
  uint64_t call_tmp_chpl11;
#line 37 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl12;
#line 37 "DSIUtil.chpl"
  chpl_bool tmp_chpl3;
#line 37 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl13;
#line 37 "DSIUtil.chpl"
  int64_t call_tmp_chpl14;
#line 37 "DSIUtil.chpl"
  uint64_t call_tmp_chpl15;
#line 37 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl16;
#line 37 "DSIUtil.chpl"
  chpl_bool tmp_chpl4;
#line 37 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl17;
#line 37 "DSIUtil.chpl"
  uint64_t call_tmp_chpl18;
#line 37 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl19;
#line 37 "DSIUtil.chpl"
  int64_t call_tmp_chpl20;
#line 100 "DSIUtil.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 93 "DSIUtil.chpl"
  call_tmp_chpl = (numElems_chpl <= INT64(0));
#line 93 "DSIUtil.chpl"
  if (call_tmp_chpl) /* ZLINE: 93 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 93 "DSIUtil.chpl"
  {
#line 94 "DSIUtil.chpl"
    ret_chpl = INT64(0);
#line 94 "DSIUtil.chpl"
    goto _end__computeNumChunks_chpl;
#line 94 "DSIUtil.chpl"
  }
#line 97 "DSIUtil.chpl"
  call_tmp_chpl2 = ((uint64_t)(numElems_chpl));
#line 97 "DSIUtil.chpl"
  unumElems_chpl = call_tmp_chpl2;
#line 98 "DSIUtil.chpl"
  numChunks_chpl = maxTasks_chpl;
#line 99 "DSIUtil.chpl"
  call_tmp_chpl3 = (! ignoreRunning_chpl);
#line 99 "DSIUtil.chpl"
  if (call_tmp_chpl3) /* ZLINE: 100 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 99 "DSIUtil.chpl"
  {
#line 100 "DSIUtil.chpl"
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 100 "DSIUtil.chpl"
    call_tmp_chpl4 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl, _ln_chpl, _fn_chpl);
#line 100 "DSIUtil.chpl"
    chpl_check_nil(call_tmp_chpl4, INT64(100), INT64(0));
#line 100 "DSIUtil.chpl"
    call_tmp_chpl5 = runningTasks(call_tmp_chpl4, _ln_chpl, _fn_chpl);
#line 100 "DSIUtil.chpl"
    call_tmp_chpl6 = (call_tmp_chpl5 - INT64(1));
#line 101 "DSIUtil.chpl"
    call_tmp_chpl7 = (call_tmp_chpl6 < maxTasks_chpl);
#line 101 "DSIUtil.chpl"
    if (call_tmp_chpl7) /* ZLINE: 101 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 101 "DSIUtil.chpl"
    {
#line 101 "DSIUtil.chpl"
      call_tmp_chpl8 = (maxTasks_chpl - call_tmp_chpl6);
#line 101 "DSIUtil.chpl"
      tmp_chpl = call_tmp_chpl8;
#line 101 "DSIUtil.chpl"
    } else /* ZLINE: 101 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 101 "DSIUtil.chpl"
    {
#line 101 "DSIUtil.chpl"
      tmp_chpl = INT64(1);
#line 101 "DSIUtil.chpl"
    }
#line 101 "DSIUtil.chpl"
    numChunks_chpl = tmp_chpl;
#line 101 "DSIUtil.chpl"
  }
#line 106 "DSIUtil.chpl"
  call_tmp_chpl9 = (minSize_chpl > INT64(0));
#line 106 "DSIUtil.chpl"
  if (call_tmp_chpl9) /* ZLINE: 108 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 106 "DSIUtil.chpl"
  {
#line 108 "DSIUtil.chpl"
    call_tmp_chpl10 = (minSize_chpl * numChunks_chpl);
#line 108 "DSIUtil.chpl"
    call_tmp_chpl11 = ((uint64_t)(call_tmp_chpl10));
#line 108 "DSIUtil.chpl"
    call_tmp_chpl12 = (call_tmp_chpl2 < call_tmp_chpl11);
#line 108 "DSIUtil.chpl"
    if (call_tmp_chpl12) /* ZLINE: 108 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 108 "DSIUtil.chpl"
    {
#line 108 "DSIUtil.chpl"
      call_tmp_chpl13 = (numChunks_chpl > INT64(1));
#line 108 "DSIUtil.chpl"
      tmp_chpl3 = call_tmp_chpl13;
#line 108 "DSIUtil.chpl"
    } else /* ZLINE: 108 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 108 "DSIUtil.chpl"
    {
#line 108 "DSIUtil.chpl"
      tmp_chpl3 = UINT8(false);
#line 108 "DSIUtil.chpl"
    }
#line 108 "DSIUtil.chpl"
    tmp_chpl2 = tmp_chpl3;
#line 108 "DSIUtil.chpl"
    while (tmp_chpl2) {
#line 109 "DSIUtil.chpl"
      numChunks_chpl -= INT64(1);
#line 108 "DSIUtil.chpl"
      call_tmp_chpl14 = (minSize_chpl * numChunks_chpl);
#line 108 "DSIUtil.chpl"
      call_tmp_chpl15 = ((uint64_t)(call_tmp_chpl14));
#line 108 "DSIUtil.chpl"
      call_tmp_chpl16 = (unumElems_chpl < call_tmp_chpl15);
#line 108 "DSIUtil.chpl"
      if (call_tmp_chpl16) /* ZLINE: 108 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 108 "DSIUtil.chpl"
      {
#line 108 "DSIUtil.chpl"
        call_tmp_chpl17 = (numChunks_chpl > INT64(1));
#line 108 "DSIUtil.chpl"
        tmp_chpl4 = call_tmp_chpl17;
#line 108 "DSIUtil.chpl"
      } else /* ZLINE: 108 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 108 "DSIUtil.chpl"
      {
#line 108 "DSIUtil.chpl"
        tmp_chpl4 = UINT8(false);
#line 108 "DSIUtil.chpl"
      }
#line 108 "DSIUtil.chpl"
      tmp_chpl2 = tmp_chpl4;
#line 108 "DSIUtil.chpl"
    }
#line 108 "DSIUtil.chpl"
  }
#line 112 "DSIUtil.chpl"
  call_tmp_chpl18 = ((uint64_t)(numChunks_chpl));
#line 112 "DSIUtil.chpl"
  call_tmp_chpl19 = (call_tmp_chpl18 > unumElems_chpl);
#line 112 "DSIUtil.chpl"
  if (call_tmp_chpl19) /* ZLINE: 112 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 112 "DSIUtil.chpl"
  {
#line 112 "DSIUtil.chpl"
    call_tmp_chpl20 = ((int64_t)(unumElems_chpl));
#line 112 "DSIUtil.chpl"
    numChunks_chpl = call_tmp_chpl20;
#line 112 "DSIUtil.chpl"
  }
#line 114 "DSIUtil.chpl"
  ret_chpl = numChunks_chpl;
#line 114 "DSIUtil.chpl"
  _end__computeNumChunks_chpl:;
#line 92 "DSIUtil.chpl"
  return ret_chpl;
#line 92 "DSIUtil.chpl"
}

#line 92 "DSIUtil.chpl"
/* DSIUtil.chpl:118 */
#line 92 "DSIUtil.chpl"
static int64_t _computeNumChunks_chpl2(int64_t numElems_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 92 "DSIUtil.chpl"
  int64_t local_dataParMinGranularity_chpl;
#line 92 "DSIUtil.chpl"
  chpl_bool local_dataParIgnoreRunningTasks_chpl;
#line 92 "DSIUtil.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 92 "DSIUtil.chpl"
  int64_t local_dataParTasksPerLocale_chpl;
#line 92 "DSIUtil.chpl"
  int64_t tmp_chpl;
#line 92 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl;
#line 92 "DSIUtil.chpl"
  locale call_tmp_chpl2 = NULL;
#line 92 "DSIUtil.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 92 "DSIUtil.chpl"
  locale call_tmp_chpl3 = NULL;
#line 92 "DSIUtil.chpl"
  int64_t call_tmp_chpl4;
#line 92 "DSIUtil.chpl"
  int64_t call_tmp_chpl5;
#line 92 "DSIUtil.chpl"
  chpl_bool ignoreRunning_chpl;
#line 92 "DSIUtil.chpl"
  int64_t minIndicesPerTask_chpl;
#line 92 "DSIUtil.chpl"
  int64_t call_tmp_chpl6;
#line 124 "DSIUtil.chpl"
  local_dataParMinGranularity_chpl = dataParMinGranularity;
#line 123 "DSIUtil.chpl"
  local_dataParIgnoreRunningTasks_chpl = dataParIgnoreRunningTasks;
#line 120 "DSIUtil.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 120 "DSIUtil.chpl"
  local_dataParTasksPerLocale_chpl = dataParTasksPerLocale;
#line 120 "DSIUtil.chpl"
  call_tmp_chpl = (local_dataParTasksPerLocale_chpl == INT64(0));
#line 120 "DSIUtil.chpl"
  if (call_tmp_chpl) /* ZLINE: 120 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 120 "DSIUtil.chpl"
  {
#line 120 "DSIUtil.chpl"
    _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 120 "DSIUtil.chpl"
    call_tmp_chpl3 = chpl_localeID_to_locale(&_autoCopy_tmp__chpl, _ln_chpl, _fn_chpl);
#line 120 "DSIUtil.chpl"
    call_tmp_chpl2 = call_tmp_chpl3;
#line 120 "DSIUtil.chpl"
    chpl_check_nil(call_tmp_chpl2, INT64(120), INT64(0));
#line 120 "DSIUtil.chpl"
    call_tmp_chpl4 = (call_tmp_chpl2)->maxTaskPar;
#line 120 "DSIUtil.chpl"
    tmp_chpl = call_tmp_chpl4;
#line 120 "DSIUtil.chpl"
  } else /* ZLINE: 120 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 120 "DSIUtil.chpl"
  {
#line 120 "DSIUtil.chpl"
    call_tmp_chpl5 = local_dataParTasksPerLocale_chpl;
#line 120 "DSIUtil.chpl"
    tmp_chpl = call_tmp_chpl5;
#line 120 "DSIUtil.chpl"
  }
#line 123 "DSIUtil.chpl"
  ignoreRunning_chpl = local_dataParIgnoreRunningTasks_chpl;
#line 124 "DSIUtil.chpl"
  minIndicesPerTask_chpl = local_dataParMinGranularity_chpl;
#line 125 "DSIUtil.chpl"
  call_tmp_chpl6 = _computeNumChunks_chpl(tmp_chpl, ignoreRunning_chpl, minIndicesPerTask_chpl, numElems_chpl, _ln_chpl, _fn_chpl);
#line 118 "DSIUtil.chpl"
  return call_tmp_chpl6;
#line 118 "DSIUtil.chpl"
}

#line 118 "DSIUtil.chpl"
/* DSIUtil.chpl:163 */
#line 118 "DSIUtil.chpl"
static uint64_t intCeilXDivByY_chpl(uint64_t x_chpl, uint64_t y_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 118 "DSIUtil.chpl"
  uint64_t call_tmp_chpl;
#line 118 "DSIUtil.chpl"
  uint64_t call_tmp_chpl2;
#line 118 "DSIUtil.chpl"
  uint64_t call_tmp_chpl3;
#line 163 "DSIUtil.chpl"
  call_tmp_chpl = (x_chpl - UINT64(1));
#line 163 "DSIUtil.chpl"
  call_tmp_chpl2 = (call_tmp_chpl / y_chpl);
#line 163 "DSIUtil.chpl"
  call_tmp_chpl3 = (UINT64(1) + call_tmp_chpl2);
#line 163 "DSIUtil.chpl"
  return call_tmp_chpl3;
#line 163 "DSIUtil.chpl"
}

#line 163 "DSIUtil.chpl"
/* DSIUtil.chpl:165 */
#line 163 "DSIUtil.chpl"
static void _computeBlock_chpl(int64_t numelems_chpl, int64_t numblocks_chpl, int64_t blocknum_chpl, int64_t wayhi_chpl, int64_t waylo_chpl, int64_t lo_chpl, _ref__tuple_2_star_int64_t _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 163 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl;
#line 163 "DSIUtil.chpl"
  int64_t tmp_chpl;
#line 163 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl2;
#line 163 "DSIUtil.chpl"
  uint64_t call_tmp_chpl3;
#line 163 "DSIUtil.chpl"
  uint64_t call_tmp_chpl4;
#line 163 "DSIUtil.chpl"
  uint64_t call_tmp_chpl5;
#line 163 "DSIUtil.chpl"
  uint64_t call_tmp_chpl6;
#line 163 "DSIUtil.chpl"
  uint64_t call_tmp_chpl7;
#line 163 "DSIUtil.chpl"
  int64_t call_tmp_chpl8;
#line 163 "DSIUtil.chpl"
  int64_t call_tmp_chpl9;
#line 163 "DSIUtil.chpl"
  int64_t tmp_chpl2;
#line 163 "DSIUtil.chpl"
  int64_t call_tmp_chpl10;
#line 163 "DSIUtil.chpl"
  chpl_bool call_tmp_chpl11;
#line 163 "DSIUtil.chpl"
  uint64_t call_tmp_chpl12;
#line 163 "DSIUtil.chpl"
  int64_t call_tmp_chpl13;
#line 163 "DSIUtil.chpl"
  uint64_t call_tmp_chpl14;
#line 163 "DSIUtil.chpl"
  uint64_t call_tmp_chpl15;
#line 163 "DSIUtil.chpl"
  uint64_t call_tmp_chpl16;
#line 163 "DSIUtil.chpl"
  uint64_t call_tmp_chpl17;
#line 163 "DSIUtil.chpl"
  int64_t call_tmp_chpl18;
#line 163 "DSIUtil.chpl"
  int64_t call_tmp_chpl19;
#line 163 "DSIUtil.chpl"
  int64_t call_tmp_chpl20;
#line 167 "DSIUtil.chpl"
  call_tmp_chpl = (numelems_chpl == INT64(0));
#line 167 "DSIUtil.chpl"
  if (call_tmp_chpl) /* ZLINE: 167 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 167 "DSIUtil.chpl"
  {
#line 165 "DSIUtil.chpl"
    *(*(_retArg_chpl) + INT64(0)) = INT64(1);
#line 165 "DSIUtil.chpl"
    *(*(_retArg_chpl) + INT64(1)) = INT64(0);
#line 168 "DSIUtil.chpl"
    goto _end__computeBlock_chpl;
#line 168 "DSIUtil.chpl"
  }
#line 171 "DSIUtil.chpl"
  call_tmp_chpl2 = (blocknum_chpl == INT64(0));
#line 171 "DSIUtil.chpl"
  if (call_tmp_chpl2) /* ZLINE: 171 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 171 "DSIUtil.chpl"
  {
#line 171 "DSIUtil.chpl"
    tmp_chpl = waylo_chpl;
#line 171 "DSIUtil.chpl"
  } else /* ZLINE: 171 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 171 "DSIUtil.chpl"
  {
#line 171 "DSIUtil.chpl"
    call_tmp_chpl3 = ((uint64_t)(numelems_chpl));
#line 171 "DSIUtil.chpl"
    call_tmp_chpl4 = ((uint64_t)(blocknum_chpl));
#line 171 "DSIUtil.chpl"
    call_tmp_chpl5 = (call_tmp_chpl3 * call_tmp_chpl4);
#line 171 "DSIUtil.chpl"
    call_tmp_chpl6 = ((uint64_t)(numblocks_chpl));
#line 171 "DSIUtil.chpl"
    call_tmp_chpl7 = intCeilXDivByY_chpl(call_tmp_chpl5, call_tmp_chpl6, _ln_chpl, _fn_chpl);
#line 171 "DSIUtil.chpl"
    call_tmp_chpl8 = ((int64_t)(call_tmp_chpl7));
#line 171 "DSIUtil.chpl"
    call_tmp_chpl9 = (lo_chpl + call_tmp_chpl8);
#line 171 "DSIUtil.chpl"
    tmp_chpl = call_tmp_chpl9;
#line 171 "DSIUtil.chpl"
  }
#line 174 "DSIUtil.chpl"
  call_tmp_chpl10 = (numblocks_chpl - INT64(1));
#line 174 "DSIUtil.chpl"
  call_tmp_chpl11 = (blocknum_chpl == call_tmp_chpl10);
#line 174 "DSIUtil.chpl"
  if (call_tmp_chpl11) /* ZLINE: 174 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 174 "DSIUtil.chpl"
  {
#line 174 "DSIUtil.chpl"
    tmp_chpl2 = wayhi_chpl;
#line 174 "DSIUtil.chpl"
  } else /* ZLINE: 174 /home/agobin/Documents/chapel-1.13.0/modules/dists/DSIUtil.chpl */
#line 174 "DSIUtil.chpl"
  {
#line 174 "DSIUtil.chpl"
    call_tmp_chpl12 = ((uint64_t)(numelems_chpl));
#line 174 "DSIUtil.chpl"
    call_tmp_chpl13 = (blocknum_chpl + INT64(1));
#line 174 "DSIUtil.chpl"
    call_tmp_chpl14 = ((uint64_t)(call_tmp_chpl13));
#line 174 "DSIUtil.chpl"
    call_tmp_chpl15 = (call_tmp_chpl12 * call_tmp_chpl14);
#line 174 "DSIUtil.chpl"
    call_tmp_chpl16 = ((uint64_t)(numblocks_chpl));
#line 174 "DSIUtil.chpl"
    call_tmp_chpl17 = intCeilXDivByY_chpl(call_tmp_chpl15, call_tmp_chpl16, _ln_chpl, _fn_chpl);
#line 174 "DSIUtil.chpl"
    call_tmp_chpl18 = ((int64_t)(call_tmp_chpl17));
#line 174 "DSIUtil.chpl"
    call_tmp_chpl19 = (lo_chpl + call_tmp_chpl18);
#line 174 "DSIUtil.chpl"
    call_tmp_chpl20 = (call_tmp_chpl19 - INT64(1));
#line 174 "DSIUtil.chpl"
    tmp_chpl2 = call_tmp_chpl20;
#line 174 "DSIUtil.chpl"
  }
#line 165 "DSIUtil.chpl"
  *(*(_retArg_chpl) + INT64(0)) = tmp_chpl;
#line 165 "DSIUtil.chpl"
  *(*(_retArg_chpl) + INT64(1)) = tmp_chpl2;
#line 165 "DSIUtil.chpl"
  _end__computeBlock_chpl:;
#line 165 "DSIUtil.chpl"
  return;
#line 165 "DSIUtil.chpl"
}


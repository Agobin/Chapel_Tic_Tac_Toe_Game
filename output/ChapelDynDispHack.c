/* ChapelDynDispHack.chpl:20 */
static void chpl__init_ChapelDynDispHack(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int32_t local_c_sublocid_any;
  chpl_localeID_t _autoCopy_tmp_;
  chpl_localeID_t call_tmp;
  chpl_localeID_t call_tmp2;
  locale call_tmp3 = NULL;
  int64_t call_tmp4;
  chpl_bool call_tmp5;
#line 20 "ChapelDynDispHack.chpl"
  if (chpl__init_ChapelDynDispHack_p) /* ZLINE: 20 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDynDispHack.chpl */
#line 20 "ChapelDynDispHack.chpl"
  {
#line 20 "ChapelDynDispHack.chpl"
    goto _exit_chpl__init_ChapelDynDispHack;
#line 20 "ChapelDynDispHack.chpl"
  }
#line 20 "ChapelDynDispHack.chpl"
  modFormatStr = "%*s\n";
#line 20 "ChapelDynDispHack.chpl"
  modStr = "ChapelDynDispHack";
#line 20 "ChapelDynDispHack.chpl"
  printModuleInit(modFormatStr, modStr, INT64(17), _ln, _fn);
#line 20 "ChapelDynDispHack.chpl"
  refIndentLevel = &moduleInitLevel;
#line 20 "ChapelDynDispHack.chpl"
  *(refIndentLevel) += INT64(1);
#line 20 "ChapelDynDispHack.chpl"
  chpl__init_ChapelDynDispHack_p = true;
#line 31 "ChapelDynDispHack.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 31 "ChapelDynDispHack.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 31 "ChapelDynDispHack.chpl"
  call_tmp = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
#line 31 "ChapelDynDispHack.chpl"
  call_tmp2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp);
#line 31 "ChapelDynDispHack.chpl"
  call_tmp3 = chpl_localeID_to_locale(&call_tmp2, _ln, _fn);
#line 31 "ChapelDynDispHack.chpl"
  chpl_check_nil(call_tmp3, INT64(31), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDynDispHack.chpl");
#line 31 "ChapelDynDispHack.chpl"
  call_tmp4 = id(call_tmp3, _ln, _fn);
#line 31 "ChapelDynDispHack.chpl"
  call_tmp5 = (call_tmp4 >= INT64(0));
#line 31 "ChapelDynDispHack.chpl"
  assert_chpl(call_tmp5, _ln, _fn);
#line 20 "ChapelDynDispHack.chpl"
  *(refIndentLevel) -= INT64(1);
#line 20 "ChapelDynDispHack.chpl"
  _exit_chpl__init_ChapelDynDispHack:;
#line 20 "ChapelDynDispHack.chpl"
  return;
#line 20 "ChapelDynDispHack.chpl"
}


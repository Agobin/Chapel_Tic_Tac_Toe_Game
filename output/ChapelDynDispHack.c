/* ChapelDynDispHack.chpl:20 */
static void chpl__init_ChapelDynDispHack(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int32_t local_c_sublocid_any;
  chpl_localeID_t _autoCopy_tmp_;
  locale call_tmp = NULL;
  int64_t call_tmp2;
  chpl_bool call_tmp3;
#line 20 "ChapelDynDispHack.chpl"
  if (chpl__init_ChapelDynDispHack_p) /* ZLINE: 20 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDynDispHack.chpl */
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
  chpl__init_ChapelDynDispHack_p = UINT8(true);
#line 31 "ChapelDynDispHack.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 31 "ChapelDynDispHack.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 31 "ChapelDynDispHack.chpl"
  call_tmp = chpl_localeID_to_locale(&_autoCopy_tmp_, _ln, _fn);
#line 31 "ChapelDynDispHack.chpl"
  chpl_check_nil(call_tmp, INT64(31), INT64(0));
#line 31 "ChapelDynDispHack.chpl"
  call_tmp2 = id(call_tmp, _ln, _fn);
#line 31 "ChapelDynDispHack.chpl"
  call_tmp3 = (call_tmp2 >= INT64(0));
#line 31 "ChapelDynDispHack.chpl"
  assert_chpl(call_tmp3, _ln, _fn);
#line 20 "ChapelDynDispHack.chpl"
  *(refIndentLevel) -= INT64(1);
#line 20 "ChapelDynDispHack.chpl"
  _exit_chpl__init_ChapelDynDispHack:;
#line 20 "ChapelDynDispHack.chpl"
  return;
#line 20 "ChapelDynDispHack.chpl"
}


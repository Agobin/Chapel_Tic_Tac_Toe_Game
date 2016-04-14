/* SysBasic.chpl:42 */
static void chpl__init_SysBasic(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 42 "SysBasic.chpl"
  if (chpl__init_SysBasic_p) /* ZLINE: 42 /home/agobin/Documents/chapel-1.13.0/modules/standard/SysBasic.chpl */
#line 42 "SysBasic.chpl"
  {
#line 42 "SysBasic.chpl"
    goto _exit_chpl__init_SysBasic_chpl;
#line 42 "SysBasic.chpl"
  }
#line 42 "SysBasic.chpl"
  modFormatStr_chpl = "%*s\n";
#line 42 "SysBasic.chpl"
  modStr_chpl = "SysBasic";
#line 42 "SysBasic.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(8), _ln_chpl, _fn_chpl);
#line 42 "SysBasic.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 42 "SysBasic.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 42 "SysBasic.chpl"
  chpl__init_SysBasic_p = UINT8(true);
#line 42 "SysBasic.chpl"
  {
#line 42 "SysBasic.chpl"
    chpl__init_SysCTypes(_ln_chpl, _fn_chpl);
#line 42 "SysBasic.chpl"
  }
#line 42 "SysBasic.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 42 "SysBasic.chpl"
  _exit_chpl__init_SysBasic_chpl:;
#line 42 "SysBasic.chpl"
  return;
#line 42 "SysBasic.chpl"
}


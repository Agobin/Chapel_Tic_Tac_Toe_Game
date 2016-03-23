/* Sys.chpl:44 */
static void chpl__init_Sys(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 44 "Sys.chpl"
  if (chpl__init_Sys_p) /* ZLINE: 44 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Sys.chpl */
#line 44 "Sys.chpl"
  {
#line 44 "Sys.chpl"
    goto _exit_chpl__init_Sys_chpl;
#line 44 "Sys.chpl"
  }
#line 44 "Sys.chpl"
  modFormatStr_chpl = "%*s\n";
#line 44 "Sys.chpl"
  modStr_chpl = "Sys";
#line 44 "Sys.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(3), _ln_chpl, _fn_chpl);
#line 44 "Sys.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 44 "Sys.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 44 "Sys.chpl"
  chpl__init_Sys_p = true;
#line 44 "Sys.chpl"
  {
#line 44 "Sys.chpl"
    chpl__init_SysBasic(_ln_chpl, _fn_chpl);
#line 44 "Sys.chpl"
  }
#line 44 "Sys.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 44 "Sys.chpl"
  _exit_chpl__init_Sys_chpl:;
#line 44 "Sys.chpl"
  return;
#line 44 "Sys.chpl"
}


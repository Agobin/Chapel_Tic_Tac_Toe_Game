/* ttt.chpl:84 */
static void chpl__init_FunctionSysbols(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 84 "ttt.chpl"
  if (chpl__init_FunctionSysbols_p) /* ZLINE: 84 ttt.chpl */
#line 84 "ttt.chpl"
  {
#line 84 "ttt.chpl"
    goto _exit_chpl__init_FunctionSysbols_chpl;
#line 84 "ttt.chpl"
  }
#line 84 "ttt.chpl"
  modFormatStr_chpl = "%*s\n";
#line 84 "ttt.chpl"
  modStr_chpl = "FunctionSysbols";
#line 84 "ttt.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(15), INT64(84), "ttt.chpl");
#line 84 "ttt.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 84 "ttt.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 84 "ttt.chpl"
  chpl__init_FunctionSysbols_p = true;
#line 84 "ttt.chpl"
  {
#line 84 "ttt.chpl"
    chpl__init_ttt(INT64(84), "ttt.chpl");
#line 84 "ttt.chpl"
  }
#line 84 "ttt.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 84 "ttt.chpl"
  _exit_chpl__init_FunctionSysbols_chpl:;
#line 84 "ttt.chpl"
  return;
#line 84 "ttt.chpl"
}

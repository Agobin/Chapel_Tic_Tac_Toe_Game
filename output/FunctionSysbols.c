/* ttt.chpl:189 */
static void chpl__init_FunctionSysbols(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 189 "ttt.chpl"
  if (chpl__init_FunctionSysbols_p) /* ZLINE: 189 ttt.chpl */
#line 189 "ttt.chpl"
  {
#line 189 "ttt.chpl"
    goto _exit_chpl__init_FunctionSysbols_chpl;
#line 189 "ttt.chpl"
  }
#line 189 "ttt.chpl"
  modFormatStr_chpl = "%*s\n";
#line 189 "ttt.chpl"
  modStr_chpl = "FunctionSysbols";
#line 189 "ttt.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(15), INT64(189), "ttt.chpl");
#line 189 "ttt.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 189 "ttt.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 189 "ttt.chpl"
  chpl__init_FunctionSysbols_p = true;
#line 189 "ttt.chpl"
  {
#line 189 "ttt.chpl"
    chpl__init_ttt(INT64(189), "ttt.chpl");
#line 189 "ttt.chpl"
  }
#line 189 "ttt.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 189 "ttt.chpl"
  _exit_chpl__init_FunctionSysbols_chpl:;
#line 189 "ttt.chpl"
  return;
#line 189 "ttt.chpl"
}


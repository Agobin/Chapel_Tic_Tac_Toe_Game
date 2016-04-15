/* ttt.chpl:257 */
static void chpl__init_FunctionSysbols(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 257 "ttt.chpl"
  if (chpl__init_FunctionSysbols_p) /* ZLINE: 257 ttt.chpl */
#line 257 "ttt.chpl"
  {
#line 257 "ttt.chpl"
    goto _exit_chpl__init_FunctionSysbols_chpl;
#line 257 "ttt.chpl"
  }
#line 257 "ttt.chpl"
  modFormatStr_chpl = "%*s\n";
#line 257 "ttt.chpl"
  modStr_chpl = "FunctionSysbols";
#line 257 "ttt.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(15), INT64(257), INT32(42));
#line 257 "ttt.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 257 "ttt.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 257 "ttt.chpl"
  chpl__init_FunctionSysbols_p = UINT8(true);
#line 257 "ttt.chpl"
  {
#line 257 "ttt.chpl"
    chpl__init_ttt(INT64(257), INT32(42));
#line 257 "ttt.chpl"
  }
#line 257 "ttt.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 257 "ttt.chpl"
  _exit_chpl__init_FunctionSysbols_chpl:;
#line 257 "ttt.chpl"
  return;
#line 257 "ttt.chpl"
}


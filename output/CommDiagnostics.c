/* CommDiagnostics.chpl:169 */
static void chpl__init_CommDiagnostics(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 169 "CommDiagnostics.chpl"
  if (chpl__init_CommDiagnostics_p) /* ZLINE: 169 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/CommDiagnostics.chpl */
#line 169 "CommDiagnostics.chpl"
  {
#line 169 "CommDiagnostics.chpl"
    goto _exit_chpl__init_CommDiagnostics_chpl;
#line 169 "CommDiagnostics.chpl"
  }
#line 169 "CommDiagnostics.chpl"
  modFormatStr_chpl = "%*s\n";
#line 169 "CommDiagnostics.chpl"
  modStr_chpl = "CommDiagnostics";
#line 169 "CommDiagnostics.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(15), _ln_chpl, _fn_chpl);
#line 169 "CommDiagnostics.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 169 "CommDiagnostics.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 169 "CommDiagnostics.chpl"
  chpl__init_CommDiagnostics_p = true;
#line 169 "CommDiagnostics.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 169 "CommDiagnostics.chpl"
  _exit_chpl__init_CommDiagnostics_chpl:;
#line 169 "CommDiagnostics.chpl"
  return;
#line 169 "CommDiagnostics.chpl"
}


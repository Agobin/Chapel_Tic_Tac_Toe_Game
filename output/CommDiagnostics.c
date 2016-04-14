/* CommDiagnostics.chpl:168 */
static void chpl__init_CommDiagnostics(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 168 "CommDiagnostics.chpl"
  if (chpl__init_CommDiagnostics_p) /* ZLINE: 168 /home/agobin/Documents/chapel-1.13.0/modules/standard/CommDiagnostics.chpl */
#line 168 "CommDiagnostics.chpl"
  {
#line 168 "CommDiagnostics.chpl"
    goto _exit_chpl__init_CommDiagnostics_chpl;
#line 168 "CommDiagnostics.chpl"
  }
#line 168 "CommDiagnostics.chpl"
  modFormatStr_chpl = "%*s\n";
#line 168 "CommDiagnostics.chpl"
  modStr_chpl = "CommDiagnostics";
#line 168 "CommDiagnostics.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(15), _ln_chpl, _fn_chpl);
#line 168 "CommDiagnostics.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 168 "CommDiagnostics.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 168 "CommDiagnostics.chpl"
  chpl__init_CommDiagnostics_p = UINT8(true);
#line 168 "CommDiagnostics.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 168 "CommDiagnostics.chpl"
  _exit_chpl__init_CommDiagnostics_chpl:;
#line 168 "CommDiagnostics.chpl"
  return;
#line 168 "CommDiagnostics.chpl"
}


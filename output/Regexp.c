/* Regexp.chpl:338 */
static void chpl__init_Regexp(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 338 "Regexp.chpl"
  if (chpl__init_Regexp_p) /* ZLINE: 338 /home/agobin/Documents/chapel-1.13.0/modules/standard/Regexp.chpl */
#line 338 "Regexp.chpl"
  {
#line 338 "Regexp.chpl"
    goto _exit_chpl__init_Regexp_chpl;
#line 338 "Regexp.chpl"
  }
#line 338 "Regexp.chpl"
  modFormatStr_chpl = "%*s\n";
#line 338 "Regexp.chpl"
  modStr_chpl = "Regexp";
#line 338 "Regexp.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(6), _ln_chpl, _fn_chpl);
#line 338 "Regexp.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 338 "Regexp.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 338 "Regexp.chpl"
  chpl__init_Regexp_p = UINT8(true);
#line 338 "Regexp.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 338 "Regexp.chpl"
  _exit_chpl__init_Regexp_chpl:;
#line 338 "Regexp.chpl"
  return;
#line 338 "Regexp.chpl"
}


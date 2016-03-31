/* Math.chpl:47 */
static void chpl__init_Math(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 47 "Math.chpl"
  if (chpl__init_Math_p) /* ZLINE: 47 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Math.chpl */
#line 47 "Math.chpl"
  {
#line 47 "Math.chpl"
    goto _exit_chpl__init_Math_chpl;
#line 47 "Math.chpl"
  }
#line 47 "Math.chpl"
  modFormatStr_chpl = "%*s\n";
#line 47 "Math.chpl"
  modStr_chpl = "Math";
#line 47 "Math.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(4), _ln_chpl, _fn_chpl);
#line 47 "Math.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 47 "Math.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 47 "Math.chpl"
  chpl__init_Math_p = true;
#line 47 "Math.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 47 "Math.chpl"
  _exit_chpl__init_Math_chpl:;
#line 47 "Math.chpl"
  return;
#line 47 "Math.chpl"
}


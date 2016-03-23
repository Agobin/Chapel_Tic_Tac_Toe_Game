/* NewString.chpl:72 */
static void chpl__init_BaseStringType(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 72 "NewString.chpl"
  if (chpl__init_BaseStringType_p) /* ZLINE: 72 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 72 "NewString.chpl"
  {
#line 72 "NewString.chpl"
    goto _exit_chpl__init_BaseStringType_chpl;
#line 72 "NewString.chpl"
  }
#line 72 "NewString.chpl"
  modFormatStr_chpl = "%*s\n";
#line 72 "NewString.chpl"
  modStr_chpl = "BaseStringType";
#line 72 "NewString.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(14), _ln_chpl, _fn_chpl);
#line 72 "NewString.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 72 "NewString.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 72 "NewString.chpl"
  chpl__init_BaseStringType_p = true;
#line 72 "NewString.chpl"
  {
#line 72 "NewString.chpl"
    chpl__init_CString(_ln_chpl, _fn_chpl);
#line 72 "NewString.chpl"
  }
#line 72 "NewString.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 72 "NewString.chpl"
  _exit_chpl__init_BaseStringType_chpl:;
#line 72 "NewString.chpl"
  return;
#line 72 "NewString.chpl"
}


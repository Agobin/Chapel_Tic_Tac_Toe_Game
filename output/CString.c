/* String.chpl:319 */
static void chpl__init_CString(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 319 "String.chpl"
  if (chpl__init_CString_p) /* ZLINE: 319 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/String.chpl */
#line 319 "String.chpl"
  {
#line 319 "String.chpl"
    goto _exit_chpl__init_CString;
#line 319 "String.chpl"
  }
#line 319 "String.chpl"
  modFormatStr = "%*s\n";
#line 319 "String.chpl"
  modStr = "CString";
#line 319 "String.chpl"
  printModuleInit(modFormatStr, modStr, INT64(7), _ln, _fn);
#line 319 "String.chpl"
  refIndentLevel = &moduleInitLevel;
#line 319 "String.chpl"
  *(refIndentLevel) += INT64(1);
#line 319 "String.chpl"
  chpl__init_CString_p = true;
#line 319 "String.chpl"
  *(refIndentLevel) -= INT64(1);
#line 319 "String.chpl"
  _exit_chpl__init_CString:;
#line 319 "String.chpl"
  return;
#line 319 "String.chpl"
}


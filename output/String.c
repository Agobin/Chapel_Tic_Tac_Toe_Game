/* String.chpl:21 */
static void chpl__init_String(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 21 "String.chpl"
  if (chpl__init_String_p) /* ZLINE: 21 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/String.chpl */
#line 21 "String.chpl"
  {
#line 21 "String.chpl"
    goto _exit_chpl__init_String;
#line 21 "String.chpl"
  }
#line 21 "String.chpl"
  modFormatStr = "%*s\n";
#line 21 "String.chpl"
  modStr = "String";
#line 21 "String.chpl"
  printModuleInit(modFormatStr, modStr, INT64(6), _ln, _fn);
#line 21 "String.chpl"
  refIndentLevel = &moduleInitLevel;
#line 21 "String.chpl"
  *(refIndentLevel) += INT64(1);
#line 21 "String.chpl"
  chpl__init_String_p = true;
#line 21 "String.chpl"
  {
#line 21 "String.chpl"
    chpl__init_CString(_ln, _fn);
#line 21 "String.chpl"
  }
#line 21 "String.chpl"
  *(refIndentLevel) -= INT64(1);
#line 21 "String.chpl"
  _exit_chpl__init_String:;
#line 21 "String.chpl"
  return;
#line 21 "String.chpl"
}


/* CString.chpl:41 */
static void chpl__init_CString(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 41 "CString.chpl"
  if (chpl__init_CString_p) /* ZLINE: 41 /home/agobin/Documents/chapel-1.13.0/modules/internal/CString.chpl */
#line 41 "CString.chpl"
  {
#line 41 "CString.chpl"
    goto _exit_chpl__init_CString;
#line 41 "CString.chpl"
  }
#line 41 "CString.chpl"
  modFormatStr = "%*s\n";
#line 41 "CString.chpl"
  modStr = "CString";
#line 41 "CString.chpl"
  printModuleInit(modFormatStr, modStr, INT64(7), _ln, _fn);
#line 41 "CString.chpl"
  refIndentLevel = &moduleInitLevel;
#line 41 "CString.chpl"
  *(refIndentLevel) += INT64(1);
#line 41 "CString.chpl"
  chpl__init_CString_p = UINT8(true);
#line 41 "CString.chpl"
  *(refIndentLevel) -= INT64(1);
#line 41 "CString.chpl"
  _exit_chpl__init_CString:;
#line 41 "CString.chpl"
  return;
#line 41 "CString.chpl"
}


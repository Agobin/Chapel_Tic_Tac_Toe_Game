/* CPtr.chpl:20 */
static void chpl__init_CPtr(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 20 "CPtr.chpl"
  if (chpl__init_CPtr_p) /* ZLINE: 20 /home/agobin/Documents/chapel-1.13.0/modules/internal/CPtr.chpl */
#line 20 "CPtr.chpl"
  {
#line 20 "CPtr.chpl"
    goto _exit_chpl__init_CPtr;
#line 20 "CPtr.chpl"
  }
#line 20 "CPtr.chpl"
  modFormatStr = "%*s\n";
#line 20 "CPtr.chpl"
  modStr = "CPtr";
#line 20 "CPtr.chpl"
  printModuleInit(modFormatStr, modStr, INT64(4), _ln, _fn);
#line 20 "CPtr.chpl"
  refIndentLevel = &moduleInitLevel;
#line 20 "CPtr.chpl"
  *(refIndentLevel) += INT64(1);
#line 20 "CPtr.chpl"
  chpl__init_CPtr_p = UINT8(true);
#line 20 "CPtr.chpl"
  *(refIndentLevel) -= INT64(1);
#line 20 "CPtr.chpl"
  _exit_chpl__init_CPtr:;
#line 20 "CPtr.chpl"
  return;
#line 20 "CPtr.chpl"
}


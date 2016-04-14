/* String.chpl:34 */
static void chpl__init_BaseStringType(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 34 "String.chpl"
  if (chpl__init_BaseStringType_p) /* ZLINE: 34 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 34 "String.chpl"
  {
#line 34 "String.chpl"
    goto _exit_chpl__init_BaseStringType;
#line 34 "String.chpl"
  }
#line 34 "String.chpl"
  modFormatStr = "%*s\n";
#line 34 "String.chpl"
  modStr = "BaseStringType";
#line 34 "String.chpl"
  printModuleInit(modFormatStr, modStr, INT64(14), _ln, _fn);
#line 34 "String.chpl"
  refIndentLevel = &moduleInitLevel;
#line 34 "String.chpl"
  *(refIndentLevel) += INT64(1);
#line 34 "String.chpl"
  chpl__init_BaseStringType_p = UINT8(true);
#line 34 "String.chpl"
  *(refIndentLevel) -= INT64(1);
#line 34 "String.chpl"
  _exit_chpl__init_BaseStringType:;
#line 34 "String.chpl"
  return;
#line 34 "String.chpl"
}


/* MemConsistency.chpl:20 */
static void chpl__init_MemConsistency(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 20 "MemConsistency.chpl"
  if (chpl__init_MemConsistency_p) /* ZLINE: 20 /home/agobin/Documents/chapel-1.13.0/modules/internal/MemConsistency.chpl */
#line 20 "MemConsistency.chpl"
  {
#line 20 "MemConsistency.chpl"
    goto _exit_chpl__init_MemConsistency;
#line 20 "MemConsistency.chpl"
  }
#line 20 "MemConsistency.chpl"
  modFormatStr = "%*s\n";
#line 20 "MemConsistency.chpl"
  modStr = "MemConsistency";
#line 20 "MemConsistency.chpl"
  printModuleInit(modFormatStr, modStr, INT64(14), _ln, _fn);
#line 20 "MemConsistency.chpl"
  refIndentLevel = &moduleInitLevel;
#line 20 "MemConsistency.chpl"
  *(refIndentLevel) += INT64(1);
#line 20 "MemConsistency.chpl"
  chpl__init_MemConsistency_p = UINT8(true);
#line 20 "MemConsistency.chpl"
  *(refIndentLevel) -= INT64(1);
#line 20 "MemConsistency.chpl"
  _exit_chpl__init_MemConsistency:;
#line 20 "MemConsistency.chpl"
  return;
#line 20 "MemConsistency.chpl"
}


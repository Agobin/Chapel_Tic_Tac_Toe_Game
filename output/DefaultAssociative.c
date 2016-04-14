/* DefaultAssociative.chpl:22 */
static void chpl__init_DefaultAssociative(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 22 "DefaultAssociative.chpl"
  if (chpl__init_DefaultAssociative_p) /* ZLINE: 22 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultAssociative.chpl */
#line 22 "DefaultAssociative.chpl"
  {
#line 22 "DefaultAssociative.chpl"
    goto _exit_chpl__init_DefaultAssociative;
#line 22 "DefaultAssociative.chpl"
  }
#line 22 "DefaultAssociative.chpl"
  modFormatStr = "%*s\n";
#line 22 "DefaultAssociative.chpl"
  modStr = "DefaultAssociative";
#line 22 "DefaultAssociative.chpl"
  printModuleInit(modFormatStr, modStr, INT64(18), _ln, _fn);
#line 22 "DefaultAssociative.chpl"
  refIndentLevel = &moduleInitLevel;
#line 22 "DefaultAssociative.chpl"
  *(refIndentLevel) += INT64(1);
#line 22 "DefaultAssociative.chpl"
  chpl__init_DefaultAssociative_p = UINT8(true);
#line 22 "DefaultAssociative.chpl"
  {
#line 22 "DefaultAssociative.chpl"
    chpl__init_DSIUtil(_ln, _fn);
#line 22 "DefaultAssociative.chpl"
  }
#line 22 "DefaultAssociative.chpl"
  *(refIndentLevel) -= INT64(1);
#line 22 "DefaultAssociative.chpl"
  _exit_chpl__init_DefaultAssociative:;
#line 22 "DefaultAssociative.chpl"
  return;
#line 22 "DefaultAssociative.chpl"
}


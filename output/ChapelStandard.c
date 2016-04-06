/* ChapelStandard.chpl:23 */
void chpl__init_ChapelStandard(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 23 "ChapelStandard.chpl"
  if (chpl__init_ChapelStandard_p) /* ZLINE: 23 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelStandard.chpl */
#line 23 "ChapelStandard.chpl"
  {
#line 23 "ChapelStandard.chpl"
    goto _exit_chpl__init_ChapelStandard;
#line 23 "ChapelStandard.chpl"
  }
#line 23 "ChapelStandard.chpl"
  modFormatStr = "%*s\n";
#line 23 "ChapelStandard.chpl"
  modStr = "ChapelStandard";
#line 23 "ChapelStandard.chpl"
  printModuleInit(modFormatStr, modStr, INT64(14), _ln, _fn);
#line 23 "ChapelStandard.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "ChapelStandard.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "ChapelStandard.chpl"
  chpl__init_ChapelStandard_p = true;
#line 23 "ChapelStandard.chpl"
  {
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_String(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_MemConsistency(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_Atomics(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_AtomicsCommon(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_NewString(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelThreads(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelTuple(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelRange(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_LocaleModel(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelLocale(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_DefaultRectangular(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_LocalesArray(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelArray(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelDistribution(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelIO(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_LocaleTree(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_DefaultAssociative(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelTaskTable(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_MemTracking(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelUtil(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_ChapelDynDispHack(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_Assert(_ln, _fn);
#line 23 "ChapelStandard.chpl"
    chpl__init_CommDiagnostics(_ln, _fn);
#line 23 "ChapelStandard.chpl"
  }
#line 23 "ChapelStandard.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "ChapelStandard.chpl"
  _exit_chpl__init_ChapelStandard:;
#line 23 "ChapelStandard.chpl"
  return;
#line 23 "ChapelStandard.chpl"
}


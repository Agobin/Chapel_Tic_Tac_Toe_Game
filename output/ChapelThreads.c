/* ChapelThreads.chpl:29 */
static void chpl__init_ChapelThreads(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int32_t call_tmp;
  int64_t call_tmp2;
#line 29 "ChapelThreads.chpl"
  if (chpl__init_ChapelThreads_p) /* ZLINE: 29 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelThreads.chpl */
#line 29 "ChapelThreads.chpl"
  {
#line 29 "ChapelThreads.chpl"
    goto _exit_chpl__init_ChapelThreads;
#line 29 "ChapelThreads.chpl"
  }
#line 29 "ChapelThreads.chpl"
  modFormatStr = "%*s\n";
#line 29 "ChapelThreads.chpl"
  modStr = "ChapelThreads";
#line 29 "ChapelThreads.chpl"
  printModuleInit(modFormatStr, modStr, INT64(13), _ln, _fn);
#line 29 "ChapelThreads.chpl"
  refIndentLevel = &moduleInitLevel;
#line 29 "ChapelThreads.chpl"
  *(refIndentLevel) += INT64(1);
#line 29 "ChapelThreads.chpl"
  chpl__init_ChapelThreads_p = UINT8(true);
#line 33 "ChapelThreads.chpl"
  call_tmp = chpl_task_getenvNumThreadsPerLocale();
#line 33 "ChapelThreads.chpl"
  call_tmp2 = ((int64_t)(call_tmp));
#line 33 "ChapelThreads.chpl"
  numThreadsPerLocale = call_tmp2;
#line 29 "ChapelThreads.chpl"
  *(refIndentLevel) -= INT64(1);
#line 29 "ChapelThreads.chpl"
  _exit_chpl__init_ChapelThreads:;
#line 29 "ChapelThreads.chpl"
  return;
#line 29 "ChapelThreads.chpl"
}


/* ChapelTaskTable.chpl:22 */
static void chpl__init_ChapelTaskTable(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 22 "ChapelTaskTable.chpl"
  if (chpl__init_ChapelTaskTable_p) /* ZLINE: 22 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/tasktable/off/ChapelTaskTable.chpl */
#line 22 "ChapelTaskTable.chpl"
  {
#line 22 "ChapelTaskTable.chpl"
    goto _exit_chpl__init_ChapelTaskTable;
#line 22 "ChapelTaskTable.chpl"
  }
#line 22 "ChapelTaskTable.chpl"
  modFormatStr = "%*s\n";
#line 22 "ChapelTaskTable.chpl"
  modStr = "ChapelTaskTable";
#line 22 "ChapelTaskTable.chpl"
  printModuleInit(modFormatStr, modStr, INT64(15), _ln, _fn);
#line 22 "ChapelTaskTable.chpl"
  refIndentLevel = &moduleInitLevel;
#line 22 "ChapelTaskTable.chpl"
  *(refIndentLevel) += INT64(1);
#line 22 "ChapelTaskTable.chpl"
  chpl__init_ChapelTaskTable_p = true;
#line 22 "ChapelTaskTable.chpl"
  *(refIndentLevel) -= INT64(1);
#line 22 "ChapelTaskTable.chpl"
  _exit_chpl__init_ChapelTaskTable:;
#line 22 "ChapelTaskTable.chpl"
  return;
#line 22 "ChapelTaskTable.chpl"
}

#line 22 "ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:33 */
#line 22 "ChapelTaskTable.chpl"
void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, c_string filename, uint64_t tl_info) {
#line 33 "ChapelTaskTable.chpl"
  return;
#line 33 "ChapelTaskTable.chpl"
}

#line 33 "ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:40 */
#line 33 "ChapelTaskTable.chpl"
void chpldev_taskTable_remove(chpl_taskID_t taskID) {
#line 40 "ChapelTaskTable.chpl"
  return;
#line 40 "ChapelTaskTable.chpl"
}

#line 40 "ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:44 */
#line 40 "ChapelTaskTable.chpl"
void chpldev_taskTable_set_active(chpl_taskID_t taskID) {
#line 44 "ChapelTaskTable.chpl"
  return;
#line 44 "ChapelTaskTable.chpl"
}

#line 44 "ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:48 */
#line 44 "ChapelTaskTable.chpl"
void chpldev_taskTable_set_suspended(chpl_taskID_t taskID) {
#line 48 "ChapelTaskTable.chpl"
  return;
#line 48 "ChapelTaskTable.chpl"
}

#line 48 "ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:52 */
#line 48 "ChapelTaskTable.chpl"
void chpldev_taskTable_get_tl_info(chpl_taskID_t taskID) {
#line 52 "ChapelTaskTable.chpl"
  return;
#line 52 "ChapelTaskTable.chpl"
}

#line 52 "ChapelTaskTable.chpl"
/* ChapelTaskTable.chpl:56 */
#line 52 "ChapelTaskTable.chpl"
void chpldev_taskTable_print(int64_t _ln, c_string _fn) {
#line 58 "ChapelTaskTable.chpl"
  halt("To use task tracking, you must recompile with --task-tracking", _ln, _fn);
#line 56 "ChapelTaskTable.chpl"
  return;
#line 56 "ChapelTaskTable.chpl"
}


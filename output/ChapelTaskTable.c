/* ChapelTaskTable.chpl:22 */
static void chpl__init_ChapelTaskTable(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 22 "ChapelTaskTable.chpl"
  if (chpl__init_ChapelTaskTable_p) /* ZLINE: 22 /home/agobin/Documents/chapel-1.13.0/modules/internal/tasktable/off/ChapelTaskTable.chpl */
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
  chpl__init_ChapelTaskTable_p = UINT8(true);
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
void chpldev_taskTable_add(chpl_taskID_t taskID, uint32_t lineno, int32_t filename, uint64_t tl_info) {
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
void chpldev_taskTable_print(void) {
#line 52 "ChapelTaskTable.chpl"
  string local__str_literal_1664;
#line 58 "ChapelTaskTable.chpl"
  local__str_literal_1664 = _str_literal_1664;
#line 58 "ChapelTaskTable.chpl"
  halt(&local__str_literal_1664, INT64(58), INT32(35));
#line 56 "ChapelTaskTable.chpl"
  return;
#line 56 "ChapelTaskTable.chpl"
}


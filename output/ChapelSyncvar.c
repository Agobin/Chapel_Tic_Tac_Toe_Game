/* ChapelSyncvar.chpl:40 */
static void chpl__init_ChapelSyncvar(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 40 "ChapelSyncvar.chpl"
  if (chpl__init_ChapelSyncvar_p) /* ZLINE: 40 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelSyncvar.chpl */
#line 40 "ChapelSyncvar.chpl"
  {
#line 40 "ChapelSyncvar.chpl"
    goto _exit_chpl__init_ChapelSyncvar;
#line 40 "ChapelSyncvar.chpl"
  }
#line 40 "ChapelSyncvar.chpl"
  modFormatStr = "%*s\n";
#line 40 "ChapelSyncvar.chpl"
  modStr = "ChapelSyncvar";
#line 40 "ChapelSyncvar.chpl"
  printModuleInit(modFormatStr, modStr, INT64(13), _ln, _fn);
#line 40 "ChapelSyncvar.chpl"
  refIndentLevel = &moduleInitLevel;
#line 40 "ChapelSyncvar.chpl"
  *(refIndentLevel) += INT64(1);
#line 40 "ChapelSyncvar.chpl"
  chpl__init_ChapelSyncvar_p = true;
#line 40 "ChapelSyncvar.chpl"
  {
#line 40 "ChapelSyncvar.chpl"
    chpl__init_MemConsistency(_ln, _fn);
#line 40 "ChapelSyncvar.chpl"
  }
#line 40 "ChapelSyncvar.chpl"
  *(refIndentLevel) -= INT64(1);
#line 40 "ChapelSyncvar.chpl"
  _exit_chpl__init_ChapelSyncvar:;
#line 40 "ChapelSyncvar.chpl"
  return;
#line 40 "ChapelSyncvar.chpl"
}

#line 40 "ChapelSyncvar.chpl"
/* ChapelSyncvar.chpl:55 */
#line 40 "ChapelSyncvar.chpl"
static _syncvar_chpl_bool _construct__syncvar(chpl_bool value, int64_t _ln, c_string _fn) {
#line 40 "ChapelSyncvar.chpl"
  _syncvar_chpl_bool this6 = NULL;
#line 40 "ChapelSyncvar.chpl"
  int64_t call_tmp;
#line 40 "ChapelSyncvar.chpl"
  chpl_opaque cast_tmp;
#line 55 "ChapelSyncvar.chpl"
  call_tmp = sizeof(chpl__syncvar_chpl_bool_object);
#line 55 "ChapelSyncvar.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(0), _ln, _fn);
#line 55 "ChapelSyncvar.chpl"
  this6 = ((_syncvar_chpl_bool)(cast_tmp));
#line 57 "ChapelSyncvar.chpl"
  chpl_check_nil(this6, INT64(57), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelSyncvar.chpl");
#line 57 "ChapelSyncvar.chpl"
  (this6)->value = value;
#line 55 "ChapelSyncvar.chpl"
  chpl_check_nil(this6, INT64(55), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelSyncvar.chpl");
#line 55 "ChapelSyncvar.chpl"
  initialize6(this6);
#line 55 "ChapelSyncvar.chpl"
  return this6;
#line 55 "ChapelSyncvar.chpl"
}

#line 55 "ChapelSyncvar.chpl"
/* ChapelSyncvar.chpl:64 */
#line 55 "ChapelSyncvar.chpl"
static void initialize6(_syncvar_chpl_bool this6) {
#line 65 "ChapelSyncvar.chpl"
  chpl_sync_initAux(&((this6)->sync_aux));
#line 64 "ChapelSyncvar.chpl"
  return;
#line 64 "ChapelSyncvar.chpl"
}

#line 64 "ChapelSyncvar.chpl"
/* ChapelSyncvar.chpl:96 */
#line 64 "ChapelSyncvar.chpl"
static chpl_bool readFE(_syncvar_chpl_bool this6, int64_t _ln, c_string _fn) {
#line 64 "ChapelSyncvar.chpl"
  chpl_bool ret;
#line 100 "ChapelSyncvar.chpl"
  chpl_rmem_consist_release(_ln, _fn);
#line 101 "ChapelSyncvar.chpl"
  chpl_sync_waitFullAndLock(&((this6)->sync_aux), _ln, _fn);
#line 102 "ChapelSyncvar.chpl"
  chpl_check_nil(this6, INT64(102), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelSyncvar.chpl");
#line 102 "ChapelSyncvar.chpl"
  ret = (this6)->value;
#line 103 "ChapelSyncvar.chpl"
  chpl_sync_markAndSignalEmpty(&((this6)->sync_aux));
#line 104 "ChapelSyncvar.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 96 "ChapelSyncvar.chpl"
  return ret;
#line 96 "ChapelSyncvar.chpl"
}

#line 96 "ChapelSyncvar.chpl"
/* ChapelSyncvar.chpl:157 */
#line 96 "ChapelSyncvar.chpl"
static void writeEF(_syncvar_chpl_bool this6, chpl_bool val, int64_t _ln, c_string _fn) {
#line 96 "ChapelSyncvar.chpl"
  _ref_chpl_bool call_tmp = NULL;
#line 159 "ChapelSyncvar.chpl"
  chpl_rmem_consist_release(_ln, _fn);
#line 160 "ChapelSyncvar.chpl"
  chpl_sync_waitEmptyAndLock(&((this6)->sync_aux), _ln, _fn);
#line 161 "ChapelSyncvar.chpl"
  chpl_check_nil(this6, INT64(161), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelSyncvar.chpl");
#line 161 "ChapelSyncvar.chpl"
  call_tmp = &((this6)->value);
#line 161 "ChapelSyncvar.chpl"
  *(call_tmp) = val;
#line 162 "ChapelSyncvar.chpl"
  chpl_sync_markAndSignalFull(&((this6)->sync_aux));
#line 163 "ChapelSyncvar.chpl"
  chpl_rmem_consist_acquire(_ln, _fn);
#line 157 "ChapelSyncvar.chpl"
  return;
#line 157 "ChapelSyncvar.chpl"
}

#line 157 "ChapelSyncvar.chpl"
/* ChapelSyncvar.chpl:167 */
#line 157 "ChapelSyncvar.chpl"
static void chpl___ASSIGN_2(_ref__syncvar_chpl_bool sv, chpl_bool val, int64_t _ln, c_string _fn) {
#line 157 "ChapelSyncvar.chpl"
  _syncvar_chpl_bool coerce_tmp = NULL;
#line 168 "ChapelSyncvar.chpl"
  coerce_tmp = *(sv);
#line 168 "ChapelSyncvar.chpl"
  chpl_check_nil(coerce_tmp, INT64(168), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelSyncvar.chpl");
#line 168 "ChapelSyncvar.chpl"
  writeEF(coerce_tmp, val, _ln, _fn);
#line 167 "ChapelSyncvar.chpl"
  return;
#line 167 "ChapelSyncvar.chpl"
}


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


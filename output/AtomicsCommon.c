/* AtomicsCommon.chpl:20 */
static void chpl__init_AtomicsCommon(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 20 "AtomicsCommon.chpl"
  if (chpl__init_AtomicsCommon_p) /* ZLINE: 20 /home/agobin/Documents/chapel-1.13.0/modules/internal/AtomicsCommon.chpl */
#line 20 "AtomicsCommon.chpl"
  {
#line 20 "AtomicsCommon.chpl"
    goto _exit_chpl__init_AtomicsCommon;
#line 20 "AtomicsCommon.chpl"
  }
#line 20 "AtomicsCommon.chpl"
  modFormatStr = "%*s\n";
#line 20 "AtomicsCommon.chpl"
  modStr = "AtomicsCommon";
#line 20 "AtomicsCommon.chpl"
  printModuleInit(modFormatStr, modStr, INT64(13), _ln, _fn);
#line 20 "AtomicsCommon.chpl"
  refIndentLevel = &moduleInitLevel;
#line 20 "AtomicsCommon.chpl"
  *(refIndentLevel) += INT64(1);
#line 20 "AtomicsCommon.chpl"
  chpl__init_AtomicsCommon_p = UINT8(true);
#line 20 "AtomicsCommon.chpl"
  *(refIndentLevel) -= INT64(1);
#line 20 "AtomicsCommon.chpl"
  _exit_chpl__init_AtomicsCommon:;
#line 20 "AtomicsCommon.chpl"
  return;
#line 20 "AtomicsCommon.chpl"
}

#line 20 "AtomicsCommon.chpl"
/* AtomicsCommon.chpl:21 */
#line 20 "AtomicsCommon.chpl"
static void _construct_atomic_refcnt(atomic_int64* const _cnt, atomic_refcnt* const meme, _ref_atomic_refcnt _retArg, int64_t _ln, int32_t _fn) {
#line 20 "AtomicsCommon.chpl"
  atomic_refcnt this5;
#line 21 "AtomicsCommon.chpl"
  this5 = *(meme);
#line 27 "AtomicsCommon.chpl"
  (&this5)->_cnt = *(_cnt);
#line 21 "AtomicsCommon.chpl"
  *(_retArg) = this5;
#line 21 "AtomicsCommon.chpl"
  return;
#line 21 "AtomicsCommon.chpl"
}


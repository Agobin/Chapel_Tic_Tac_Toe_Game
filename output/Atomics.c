/* Atomics.chpl:70 */
static void chpl__init_Atomics(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 70 "Atomics.chpl"
  if (chpl__init_Atomics_p) /* ZLINE: 70 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/Atomics.chpl */
#line 70 "Atomics.chpl"
  {
#line 70 "Atomics.chpl"
    goto _exit_chpl__init_Atomics;
#line 70 "Atomics.chpl"
  }
#line 70 "Atomics.chpl"
  modFormatStr = "%*s\n";
#line 70 "Atomics.chpl"
  modStr = "Atomics";
#line 70 "Atomics.chpl"
  printModuleInit(modFormatStr, modStr, INT64(7), _ln, _fn);
#line 70 "Atomics.chpl"
  refIndentLevel = &moduleInitLevel;
#line 70 "Atomics.chpl"
  *(refIndentLevel) += INT64(1);
#line 70 "Atomics.chpl"
  chpl__init_Atomics_p = true;
#line 70 "Atomics.chpl"
  {
#line 70 "Atomics.chpl"
    chpl__init_MemConsistency(_ln, _fn);
#line 70 "Atomics.chpl"
  }
#line 70 "Atomics.chpl"
  *(refIndentLevel) -= INT64(1);
#line 70 "Atomics.chpl"
  _exit_chpl__init_Atomics:;
#line 70 "Atomics.chpl"
  return;
#line 70 "Atomics.chpl"
}

#line 70 "Atomics.chpl"
/* Atomics.chpl:266 */
#line 70 "Atomics.chpl"
static void atomic_fence(memory_order order, int64_t _ln, c_string _fn) {
#line 267 "Atomics.chpl"
  atomic_thread_fence(order);
#line 268 "Atomics.chpl"
  chpl_rmem_consist_fence(order, _ln, _fn);
#line 266 "Atomics.chpl"
  return;
#line 266 "Atomics.chpl"
}

#line 266 "Atomics.chpl"
/* Atomics.chpl:309 */
#line 266 "Atomics.chpl"
static atomicflag _construct_atomicflag(atomic_flag _v, atomicflag* const meme, int64_t _ln, c_string _fn) {
#line 266 "Atomics.chpl"
  atomicflag this6;
#line 309 "Atomics.chpl"
  this6 = *(meme);
#line 311 "Atomics.chpl"
  (&this6)->_v = _v;
#line 309 "Atomics.chpl"
  return this6;
#line 309 "Atomics.chpl"
}

#line 309 "Atomics.chpl"
/* Atomics.chpl:1151 */
#line 309 "Atomics.chpl"
static atomic_int64 _construct_atomic_int64(atomic_int_least64_t _v, atomic_int64* const meme, int64_t _ln, c_string _fn) {
#line 309 "Atomics.chpl"
  atomic_int64 this6;
#line 1151 "Atomics.chpl"
  this6 = *(meme);
#line 1153 "Atomics.chpl"
  (&this6)->_v = _v;
#line 1151 "Atomics.chpl"
  return this6;
#line 1151 "Atomics.chpl"
}


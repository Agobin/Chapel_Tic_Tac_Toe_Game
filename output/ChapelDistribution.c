/* ChapelDistribution.chpl:20 */
static void chpl__init_ChapelDistribution(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 20 "ChapelDistribution.chpl"
  if (chpl__init_ChapelDistribution_p) /* ZLINE: 20 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 20 "ChapelDistribution.chpl"
  {
#line 20 "ChapelDistribution.chpl"
    goto _exit_chpl__init_ChapelDistribution;
#line 20 "ChapelDistribution.chpl"
  }
#line 20 "ChapelDistribution.chpl"
  modFormatStr = "%*s\n";
#line 20 "ChapelDistribution.chpl"
  modStr = "ChapelDistribution";
#line 20 "ChapelDistribution.chpl"
  printModuleInit(modFormatStr, modStr, INT64(18), _ln, _fn);
#line 20 "ChapelDistribution.chpl"
  refIndentLevel = &moduleInitLevel;
#line 20 "ChapelDistribution.chpl"
  *(refIndentLevel) += INT64(1);
#line 20 "ChapelDistribution.chpl"
  chpl__init_ChapelDistribution_p = true;
#line 20 "ChapelDistribution.chpl"
  {
#line 20 "ChapelDistribution.chpl"
    chpl__init_List(_ln, _fn);
#line 20 "ChapelDistribution.chpl"
  }
#line 20 "ChapelDistribution.chpl"
  *(refIndentLevel) -= INT64(1);
#line 20 "ChapelDistribution.chpl"
  _exit_chpl__init_ChapelDistribution:;
#line 20 "ChapelDistribution.chpl"
  return;
#line 20 "ChapelDistribution.chpl"
}

#line 20 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:30 */
#line 20 "ChapelDistribution.chpl"
static BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, BaseDist meme, int64_t _ln, c_string _fn) {
#line 20 "ChapelDistribution.chpl"
  BaseDist this6 = NULL;
#line 20 "ChapelDistribution.chpl"
  object T = NULL;
#line 30 "ChapelDistribution.chpl"
  this6 = meme;
#line 30 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(30), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 30 "ChapelDistribution.chpl"
  T = &((this6)->super);
#line 30 "ChapelDistribution.chpl"
  _construct_object(T);
#line 34 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(34), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 34 "ChapelDistribution.chpl"
  (this6)->_distCnt = *(_distCnt);
#line 35 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(35), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 35 "ChapelDistribution.chpl"
  (this6)->_doms = *(_doms);
#line 36 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(36), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 36 "ChapelDistribution.chpl"
  (this6)->_domsLock = *(_domsLock);
#line 30 "ChapelDistribution.chpl"
  return this6;
#line 30 "ChapelDistribution.chpl"
}

#line 30 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:30 */
#line 30 "ChapelDistribution.chpl"
static void chpl__auto_destroy_BaseDist(BaseDist this6, int64_t _ln, c_string _fn) {
#line 30 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 30 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp = NULL;
#line 30 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
#line 30 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 30 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 36 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(36), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 36 "ChapelDistribution.chpl"
  _field_destructor_tmp_ = &((this6)->_domsLock);
#line 36 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(36), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 36 "ChapelDistribution.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 36 "ChapelDistribution.chpl"
  atomic_destroy_flag(call_tmp);
#line 34 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(34), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 34 "ChapelDistribution.chpl"
  _field_destructor_tmp_2 = &((this6)->_distCnt);
#line 34 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(34), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 34 "ChapelDistribution.chpl"
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 34 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(34), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 34 "ChapelDistribution.chpl"
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
#line 34 "ChapelDistribution.chpl"
  atomic_destroy_int_least64_t(call_tmp2);
#line 30 "ChapelDistribution.chpl"
  return;
#line 30 "ChapelDistribution.chpl"
}

#line 30 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:39 */
#line 30 "ChapelDistribution.chpl"
static int64_t destroyDist(BaseDist this6, int64_t _ln, c_string _fn) {
#line 30 "ChapelDistribution.chpl"
  memory_order local_memory_order_seq_cst;
#line 30 "ChapelDistribution.chpl"
  _ref_atomic_refcnt call_tmp = NULL;
#line 30 "ChapelDistribution.chpl"
  _ref_atomic_int64 call_tmp2 = NULL;
#line 30 "ChapelDistribution.chpl"
  memory_order default_argorder;
#line 30 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp3 = NULL;
#line 30 "ChapelDistribution.chpl"
  int64_t call_tmp4;
#line 30 "ChapelDistribution.chpl"
  int64_t call_tmp5;
#line 30 "ChapelDistribution.chpl"
  chpl_bool call_tmp6;
#line 41 "ChapelDistribution.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 40 "ChapelDistribution.chpl"
  compilerAssert();
#line 41 "ChapelDistribution.chpl"
  compilerAssert();
#line 41 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 41 "ChapelDistribution.chpl"
  call_tmp = &((this6)->_distCnt);
#line 41 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 41 "ChapelDistribution.chpl"
  call_tmp2 = &((call_tmp)->_cnt);
#line 41 "ChapelDistribution.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 41 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp2, INT64(41), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 41 "ChapelDistribution.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 41 "ChapelDistribution.chpl"
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
#line 41 "ChapelDistribution.chpl"
  call_tmp5 = (call_tmp4 - INT64(1));
#line 41 "ChapelDistribution.chpl"
  call_tmp6 = (call_tmp5 < INT64(0));
#line 41 "ChapelDistribution.chpl"
  if (call_tmp6) /* ZLINE: 41 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 41 "ChapelDistribution.chpl"
  {
#line 41 "ChapelDistribution.chpl"
    halt("distribution reference count is negative!", _ln, _fn);
#line 41 "ChapelDistribution.chpl"
  }
#line 39 "ChapelDistribution.chpl"
  return call_tmp5;
#line 39 "ChapelDistribution.chpl"
}

#line 39 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:109 */
#line 39 "ChapelDistribution.chpl"
static void dsiDestroyDistClass(BaseDist this6) {
#line 109 "ChapelDistribution.chpl"
  return;
#line 109 "ChapelDistribution.chpl"
}

#line 109 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:118 */
#line 109 "ChapelDistribution.chpl"
static void chpl__auto_destroy_BaseDom(BaseDom this6, int64_t _ln, c_string _fn) {
#line 109 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 109 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp = NULL;
#line 109 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
#line 109 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 109 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 124 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(124), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 124 "ChapelDistribution.chpl"
  _field_destructor_tmp_ = &((this6)->_arrsLock);
#line 124 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(124), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 124 "ChapelDistribution.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 124 "ChapelDistribution.chpl"
  atomic_destroy_flag(call_tmp);
#line 122 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(122), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 122 "ChapelDistribution.chpl"
  _field_destructor_tmp_2 = &((this6)->_domCnt);
#line 122 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(122), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 122 "ChapelDistribution.chpl"
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 122 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(122), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 122 "ChapelDistribution.chpl"
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
#line 122 "ChapelDistribution.chpl"
  atomic_destroy_int_least64_t(call_tmp2);
#line 118 "ChapelDistribution.chpl"
  return;
#line 118 "ChapelDistribution.chpl"
}

#line 118 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:118 */
#line 118 "ChapelDistribution.chpl"
static BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseDom meme, int64_t _ln, c_string _fn) {
#line 118 "ChapelDistribution.chpl"
  BaseDom this6 = NULL;
#line 118 "ChapelDistribution.chpl"
  object T = NULL;
#line 118 "ChapelDistribution.chpl"
  this6 = meme;
#line 118 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(118), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 118 "ChapelDistribution.chpl"
  T = &((this6)->super);
#line 118 "ChapelDistribution.chpl"
  _construct_object(T);
#line 122 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(122), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 122 "ChapelDistribution.chpl"
  (this6)->_domCnt = *(_domCnt);
#line 123 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(123), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 123 "ChapelDistribution.chpl"
  (this6)->_arrs = *(_arrs);
#line 124 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(124), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 124 "ChapelDistribution.chpl"
  (this6)->_arrsLock = *(_arrsLock);
#line 118 "ChapelDistribution.chpl"
  return this6;
#line 118 "ChapelDistribution.chpl"
}

#line 118 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:126 */
#line 118 "ChapelDistribution.chpl"
static BaseDist dsiMyDist(BaseDom this6, int64_t _ln, c_string _fn) {
#line 118 "ChapelDistribution.chpl"
  BaseDist ret = NULL;
#line 127 "ChapelDistribution.chpl"
  halt("internal error: dsiMyDist is not implemented", _ln, _fn);
#line 128 "ChapelDistribution.chpl"
  ret = nil;
#line 126 "ChapelDistribution.chpl"
  return ret;
#line 126 "ChapelDistribution.chpl"
}

#line 126 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:132 */
#line 126 "ChapelDistribution.chpl"
static int64_t destroyDom(BaseDom this6, int64_t _ln, c_string _fn) {
#line 126 "ChapelDistribution.chpl"
  memory_order local_memory_order_seq_cst;
#line 126 "ChapelDistribution.chpl"
  int64_t cnt;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_refcnt call_tmp = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_int64 call_tmp2 = NULL;
#line 126 "ChapelDistribution.chpl"
  memory_order default_argorder;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp3 = NULL;
#line 126 "ChapelDistribution.chpl"
  int64_t call_tmp4;
#line 126 "ChapelDistribution.chpl"
  int64_t call_tmp5;
#line 126 "ChapelDistribution.chpl"
  chpl_bool call_tmp6;
#line 126 "ChapelDistribution.chpl"
  chpl_bool call_tmp7;
#line 126 "ChapelDistribution.chpl"
  chpl_bool T;
#line 126 "ChapelDistribution.chpl"
  chpl_bool call_tmp8;
#line 126 "ChapelDistribution.chpl"
  int32_t _virtual_method_tmp_;
#line 126 "ChapelDistribution.chpl"
  BaseDist dist2 = NULL;
#line 126 "ChapelDistribution.chpl"
  BaseDist call_tmp9 = NULL;
#line 126 "ChapelDistribution.chpl"
  chpl_bool T2;
#line 126 "ChapelDistribution.chpl"
  _ref_atomicflag call_tmp10 = NULL;
#line 126 "ChapelDistribution.chpl"
  memory_order default_argorder2;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp11 = NULL;
#line 126 "ChapelDistribution.chpl"
  chpl_bool call_tmp12;
#line 126 "ChapelDistribution.chpl"
  _ref_atomicflag call_tmp13 = NULL;
#line 126 "ChapelDistribution.chpl"
  memory_order default_argorder3;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp14 = NULL;
#line 126 "ChapelDistribution.chpl"
  chpl_bool call_tmp15;
#line 126 "ChapelDistribution.chpl"
  _ref_list_BaseDom call_tmp16 = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomicflag call_tmp17 = NULL;
#line 126 "ChapelDistribution.chpl"
  memory_order default_argorder4;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp18 = NULL;
#line 126 "ChapelDistribution.chpl"
  int64_t call_tmp19;
#line 126 "ChapelDistribution.chpl"
  chpl_bool call_tmp20;
#line 126 "ChapelDistribution.chpl"
  int32_t _virtual_method_tmp_2;
#line 126 "ChapelDistribution.chpl"
  chpl_opaque call_tmp21;
#line 134 "ChapelDistribution.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 133 "ChapelDistribution.chpl"
  compilerAssert();
#line 134 "ChapelDistribution.chpl"
  compilerAssert();
#line 134 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(134), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 134 "ChapelDistribution.chpl"
  call_tmp = &((this6)->_domCnt);
#line 134 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp, INT64(134), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 134 "ChapelDistribution.chpl"
  call_tmp2 = &((call_tmp)->_cnt);
#line 134 "ChapelDistribution.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 134 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp2, INT64(134), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 134 "ChapelDistribution.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 134 "ChapelDistribution.chpl"
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
#line 134 "ChapelDistribution.chpl"
  call_tmp5 = (call_tmp4 - INT64(1));
#line 134 "ChapelDistribution.chpl"
  call_tmp6 = (call_tmp5 < INT64(0));
#line 134 "ChapelDistribution.chpl"
  if (call_tmp6) /* ZLINE: 134 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 134 "ChapelDistribution.chpl"
  {
#line 134 "ChapelDistribution.chpl"
    halt("domain reference count is negative!", _ln, _fn);
#line 134 "ChapelDistribution.chpl"
  }
#line 134 "ChapelDistribution.chpl"
  cnt = call_tmp5;
#line 135 "ChapelDistribution.chpl"
  call_tmp7 = (call_tmp5 == INT64(0));
#line 135 "ChapelDistribution.chpl"
  if (call_tmp7) /* ZLINE: 135 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 135 "ChapelDistribution.chpl"
  {
#line 135 "ChapelDistribution.chpl"
    chpl_check_nil(this6, INT64(135), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 135 "ChapelDistribution.chpl"
    _virtual_method_tmp_ = ((object)(this6))->chpl__cid;
#line 135 "ChapelDistribution.chpl"
    call_tmp8 = ((chpl_bool(*)(BaseDom))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(1))])(this6);
#line 135 "ChapelDistribution.chpl"
    T = call_tmp8;
#line 135 "ChapelDistribution.chpl"
  } else /* ZLINE: 135 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 135 "ChapelDistribution.chpl"
  {
#line 135 "ChapelDistribution.chpl"
    T = false;
#line 135 "ChapelDistribution.chpl"
  }
#line 135 "ChapelDistribution.chpl"
  if (T) /* ZLINE: 136 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 135 "ChapelDistribution.chpl"
  {
#line 136 "ChapelDistribution.chpl"
    chpl_check_nil(this6, INT64(136), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 136 "ChapelDistribution.chpl"
    call_tmp9 = dsiMyDist(this6, _ln, _fn);
#line 136 "ChapelDistribution.chpl"
    dist2 = call_tmp9;
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(dist2, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 138 "ChapelDistribution.chpl"
    call_tmp10 = &((dist2)->_domsLock);
#line 138 "ChapelDistribution.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp10, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 138 "ChapelDistribution.chpl"
    call_tmp11 = &((call_tmp10)->_v);
#line 138 "ChapelDistribution.chpl"
    call_tmp12 = atomic_flag_test_and_set_explicit(call_tmp11, default_argorder2);
#line 138 "ChapelDistribution.chpl"
    T2 = call_tmp12;
#line 138 "ChapelDistribution.chpl"
    while (T2) {
#line 138 "ChapelDistribution.chpl"
      chpl_task_yield();
#line 138 "ChapelDistribution.chpl"
      chpl_check_nil(dist2, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 138 "ChapelDistribution.chpl"
      call_tmp13 = &((dist2)->_domsLock);
#line 138 "ChapelDistribution.chpl"
      default_argorder3 = local_memory_order_seq_cst;
#line 138 "ChapelDistribution.chpl"
      chpl_check_nil(call_tmp13, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 138 "ChapelDistribution.chpl"
      call_tmp14 = &((call_tmp13)->_v);
#line 138 "ChapelDistribution.chpl"
      call_tmp15 = atomic_flag_test_and_set_explicit(call_tmp14, default_argorder3);
#line 138 "ChapelDistribution.chpl"
      T2 = call_tmp15;
#line 138 "ChapelDistribution.chpl"
    }
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(dist2, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 138 "ChapelDistribution.chpl"
    call_tmp16 = &((dist2)->_doms);
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp16, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 138 "ChapelDistribution.chpl"
    remove_chpl2(call_tmp16, this6, _ln, _fn);
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(dist2, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 138 "ChapelDistribution.chpl"
    call_tmp17 = &((dist2)->_domsLock);
#line 138 "ChapelDistribution.chpl"
    default_argorder4 = local_memory_order_seq_cst;
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp17, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 138 "ChapelDistribution.chpl"
    call_tmp18 = &((call_tmp17)->_v);
#line 138 "ChapelDistribution.chpl"
    atomic_flag_clear_explicit(call_tmp18, default_argorder4);
#line 139 "ChapelDistribution.chpl"
    chpl_check_nil(dist2, INT64(139), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 139 "ChapelDistribution.chpl"
    call_tmp19 = destroyDist(dist2, _ln, _fn);
#line 140 "ChapelDistribution.chpl"
    call_tmp20 = (call_tmp19 == INT64(0));
#line 140 "ChapelDistribution.chpl"
    if (call_tmp20) /* ZLINE: 140 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 140 "ChapelDistribution.chpl"
    {
#line 141 "ChapelDistribution.chpl"
      chpl_check_nil(dist2, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 141 "ChapelDistribution.chpl"
      _virtual_method_tmp_2 = ((object)(dist2))->chpl__cid;
#line 141 "ChapelDistribution.chpl"
      ((void(*)(BaseDist, int64_t, c_string))chpl_vmtable[((INT64(4) * _virtual_method_tmp_2) + INT64(0))])(dist2, _ln, _fn);
#line 141 "ChapelDistribution.chpl"
      call_tmp21 = ((void*)(dist2));
#line 141 "ChapelDistribution.chpl"
      chpl_here_free(call_tmp21, _ln, _fn);
#line 141 "ChapelDistribution.chpl"
    }
#line 141 "ChapelDistribution.chpl"
  }
#line 132 "ChapelDistribution.chpl"
  return cnt;
#line 132 "ChapelDistribution.chpl"
}

#line 132 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:213 */
#line 132 "ChapelDistribution.chpl"
static chpl_bool dsiLinksDistribution(BaseDom this6) {
#line 213 "ChapelDistribution.chpl"
  return true;
#line 213 "ChapelDistribution.chpl"
}

#line 213 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:218 */
#line 213 "ChapelDistribution.chpl"
static BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme, int64_t _ln, c_string _fn) {
#line 213 "ChapelDistribution.chpl"
  BaseRectangularDom this6 = NULL;
#line 213 "ChapelDistribution.chpl"
  BaseDom T = NULL;
#line 218 "ChapelDistribution.chpl"
  this6 = meme;
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(218), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 218 "ChapelDistribution.chpl"
  T = &((this6)->super);
#line 218 "ChapelDistribution.chpl"
  _construct_BaseDom(_domCnt, _arrs, _arrsLock, T, _ln, _fn);
#line 218 "ChapelDistribution.chpl"
  return meme;
#line 218 "ChapelDistribution.chpl"
}

#line 218 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:218 */
#line 218 "ChapelDistribution.chpl"
static void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this6, int64_t _ln, c_string _fn) {
#line 218 "ChapelDistribution.chpl"
  BaseDom _parent_destructor_tmp_ = NULL;
#line 218 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 218 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp = NULL;
#line 218 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
#line 218 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 218 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 218 "ChapelDistribution.chpl"
  _parent_destructor_tmp_ = ((BaseDom)(this6));
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(218), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 218 "ChapelDistribution.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrsLock);
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(218), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 218 "ChapelDistribution.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 218 "ChapelDistribution.chpl"
  atomic_destroy_flag(call_tmp);
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(218), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 218 "ChapelDistribution.chpl"
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_domCnt);
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(218), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 218 "ChapelDistribution.chpl"
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(218), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 218 "ChapelDistribution.chpl"
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
#line 218 "ChapelDistribution.chpl"
  atomic_destroy_int_least64_t(call_tmp2);
#line 218 "ChapelDistribution.chpl"
  return;
#line 218 "ChapelDistribution.chpl"
}

#line 218 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:270 */
#line 218 "ChapelDistribution.chpl"
static BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme, int64_t _ln, c_string _fn) {
#line 218 "ChapelDistribution.chpl"
  BaseArr this6 = NULL;
#line 218 "ChapelDistribution.chpl"
  object T = NULL;
#line 270 "ChapelDistribution.chpl"
  this6 = meme;
#line 270 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(270), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 270 "ChapelDistribution.chpl"
  T = &((this6)->super);
#line 270 "ChapelDistribution.chpl"
  _construct_object(T);
#line 274 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(274), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 274 "ChapelDistribution.chpl"
  (this6)->_arrCnt = *(_arrCnt);
#line 275 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(275), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 275 "ChapelDistribution.chpl"
  (this6)->_arrAlias = _arrAlias;
#line 270 "ChapelDistribution.chpl"
  return this6;
#line 270 "ChapelDistribution.chpl"
}

#line 270 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:270 */
#line 270 "ChapelDistribution.chpl"
static void chpl__auto_destroy_BaseArr(BaseArr this6, int64_t _ln, c_string _fn) {
#line 270 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 270 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 270 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 274 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(274), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 274 "ChapelDistribution.chpl"
  _field_destructor_tmp_ = &((this6)->_arrCnt);
#line 274 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(274), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 274 "ChapelDistribution.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 274 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(274), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 274 "ChapelDistribution.chpl"
  call_tmp = &((_field_destructor_tmp_2)->_v);
#line 274 "ChapelDistribution.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 270 "ChapelDistribution.chpl"
  return;
#line 270 "ChapelDistribution.chpl"
}

#line 270 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:279 */
#line 270 "ChapelDistribution.chpl"
static BaseDom dsiGetBaseDom(BaseArr this6, int64_t _ln, c_string _fn) {
#line 270 "ChapelDistribution.chpl"
  BaseDom ret = NULL;
#line 280 "ChapelDistribution.chpl"
  halt("internal error: dsiGetBaseDom is not implemented", _ln, _fn);
#line 281 "ChapelDistribution.chpl"
  ret = nil;
#line 279 "ChapelDistribution.chpl"
  return ret;
#line 279 "ChapelDistribution.chpl"
}

#line 279 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:285 */
#line 279 "ChapelDistribution.chpl"
static int64_t destroyArr(BaseArr this6, int64_t _ln, c_string _fn) {
#line 279 "ChapelDistribution.chpl"
  memory_order local_memory_order_seq_cst;
#line 279 "ChapelDistribution.chpl"
  int64_t cnt;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt call_tmp = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 call_tmp2 = NULL;
#line 279 "ChapelDistribution.chpl"
  memory_order default_argorder;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp3 = NULL;
#line 279 "ChapelDistribution.chpl"
  int64_t call_tmp4;
#line 279 "ChapelDistribution.chpl"
  int64_t call_tmp5;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp6;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp7;
#line 279 "ChapelDistribution.chpl"
  BaseArr ret = NULL;
#line 279 "ChapelDistribution.chpl"
  object call_tmp8 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp9;
#line 279 "ChapelDistribution.chpl"
  BaseArr ret2 = NULL;
#line 279 "ChapelDistribution.chpl"
  int64_t call_tmp10;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp11;
#line 279 "ChapelDistribution.chpl"
  BaseArr ret3 = NULL;
#line 279 "ChapelDistribution.chpl"
  int32_t _virtual_method_tmp_;
#line 279 "ChapelDistribution.chpl"
  chpl_opaque call_tmp12;
#line 279 "ChapelDistribution.chpl"
  int32_t _virtual_method_tmp_2;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp13;
#line 279 "ChapelDistribution.chpl"
  BaseDom dom = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseDom call_tmp14 = NULL;
#line 279 "ChapelDistribution.chpl"
  int32_t _virtual_method_tmp_3;
#line 279 "ChapelDistribution.chpl"
  chpl_bool T;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag call_tmp15 = NULL;
#line 279 "ChapelDistribution.chpl"
  memory_order default_argorder2;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp16 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp17;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag call_tmp18 = NULL;
#line 279 "ChapelDistribution.chpl"
  memory_order default_argorder3;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp19 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp20;
#line 279 "ChapelDistribution.chpl"
  _ref_list_BaseArr call_tmp21 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag call_tmp22 = NULL;
#line 279 "ChapelDistribution.chpl"
  memory_order default_argorder4;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp23 = NULL;
#line 279 "ChapelDistribution.chpl"
  int64_t call_tmp24;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp25;
#line 279 "ChapelDistribution.chpl"
  int32_t _virtual_method_tmp_4;
#line 279 "ChapelDistribution.chpl"
  chpl_opaque call_tmp26;
#line 287 "ChapelDistribution.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 286 "ChapelDistribution.chpl"
  compilerAssert();
#line 287 "ChapelDistribution.chpl"
  compilerAssert();
#line 287 "ChapelDistribution.chpl"
  chpl_check_nil(this6, INT64(287), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 287 "ChapelDistribution.chpl"
  call_tmp = &((this6)->_arrCnt);
#line 287 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp, INT64(287), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 287 "ChapelDistribution.chpl"
  call_tmp2 = &((call_tmp)->_cnt);
#line 287 "ChapelDistribution.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 287 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp2, INT64(287), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 287 "ChapelDistribution.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 287 "ChapelDistribution.chpl"
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
#line 287 "ChapelDistribution.chpl"
  call_tmp5 = (call_tmp4 - INT64(1));
#line 287 "ChapelDistribution.chpl"
  call_tmp6 = (call_tmp5 < INT64(0));
#line 287 "ChapelDistribution.chpl"
  if (call_tmp6) /* ZLINE: 287 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 287 "ChapelDistribution.chpl"
  {
#line 287 "ChapelDistribution.chpl"
    halt("array reference count is negative!", _ln, _fn);
#line 287 "ChapelDistribution.chpl"
  }
#line 287 "ChapelDistribution.chpl"
  cnt = call_tmp5;
#line 288 "ChapelDistribution.chpl"
  call_tmp7 = (call_tmp5 == INT64(0));
#line 288 "ChapelDistribution.chpl"
  if (call_tmp7) /* ZLINE: 289 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 288 "ChapelDistribution.chpl"
  {
#line 289 "ChapelDistribution.chpl"
    chpl_check_nil(this6, INT64(289), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 289 "ChapelDistribution.chpl"
    ret = (this6)->_arrAlias;
#line 289 "ChapelDistribution.chpl"
    call_tmp8 = ((object)(ret));
#line 289 "ChapelDistribution.chpl"
    call_tmp9 = (call_tmp8 != nil);
#line 289 "ChapelDistribution.chpl"
    if (call_tmp9) /* ZLINE: 290 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 289 "ChapelDistribution.chpl"
    {
#line 291 "ChapelDistribution.chpl"
      chpl_check_nil(this6, INT64(291), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 291 "ChapelDistribution.chpl"
      ret2 = (this6)->_arrAlias;
#line 291 "ChapelDistribution.chpl"
      chpl_check_nil(ret2, INT64(291), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 291 "ChapelDistribution.chpl"
      call_tmp10 = destroyArr(ret2, _ln, _fn);
#line 292 "ChapelDistribution.chpl"
      call_tmp11 = (call_tmp10 == INT64(0));
#line 292 "ChapelDistribution.chpl"
      if (call_tmp11) /* ZLINE: 292 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 292 "ChapelDistribution.chpl"
      {
#line 293 "ChapelDistribution.chpl"
        chpl_check_nil(this6, INT64(293), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 293 "ChapelDistribution.chpl"
        ret3 = (this6)->_arrAlias;
#line 293 "ChapelDistribution.chpl"
        chpl_check_nil(ret3, INT64(293), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 293 "ChapelDistribution.chpl"
        _virtual_method_tmp_ = ((object)(ret3))->chpl__cid;
#line 293 "ChapelDistribution.chpl"
        ((void(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(0))])(ret3, _ln, _fn);
#line 293 "ChapelDistribution.chpl"
        call_tmp12 = ((void*)(ret3));
#line 293 "ChapelDistribution.chpl"
        chpl_here_free(call_tmp12, _ln, _fn);
#line 293 "ChapelDistribution.chpl"
      }
#line 293 "ChapelDistribution.chpl"
    } else /* ZLINE: 296 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
    {
#line 296 "ChapelDistribution.chpl"
      chpl_check_nil(this6, INT64(296), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 296 "ChapelDistribution.chpl"
      _virtual_method_tmp_2 = ((object)(this6))->chpl__cid;
#line 296 "ChapelDistribution.chpl"
      ((void(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(4) * _virtual_method_tmp_2) + INT64(2))])(this6, _ln, _fn);
#line 296 "ChapelDistribution.chpl"
    }
#line 296 "ChapelDistribution.chpl"
  }
#line 299 "ChapelDistribution.chpl"
  call_tmp13 = (call_tmp5 == INT64(0));
#line 299 "ChapelDistribution.chpl"
  if (call_tmp13) /* ZLINE: 300 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 299 "ChapelDistribution.chpl"
  {
#line 300 "ChapelDistribution.chpl"
    chpl_check_nil(this6, INT64(300), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 300 "ChapelDistribution.chpl"
    _virtual_method_tmp_3 = ((object)(this6))->chpl__cid;
#line 300 "ChapelDistribution.chpl"
    call_tmp14 = ((BaseDom(*)(BaseArr, int64_t, c_string))chpl_vmtable[((INT64(4) * _virtual_method_tmp_3) + INT64(3))])(this6, _ln, _fn);
#line 300 "ChapelDistribution.chpl"
    dom = call_tmp14;
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(dom, INT64(302), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 302 "ChapelDistribution.chpl"
    call_tmp15 = &((dom)->_arrsLock);
#line 302 "ChapelDistribution.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp15, INT64(302), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 302 "ChapelDistribution.chpl"
    call_tmp16 = &((call_tmp15)->_v);
#line 302 "ChapelDistribution.chpl"
    call_tmp17 = atomic_flag_test_and_set_explicit(call_tmp16, default_argorder2);
#line 302 "ChapelDistribution.chpl"
    T = call_tmp17;
#line 302 "ChapelDistribution.chpl"
    while (T) {
#line 302 "ChapelDistribution.chpl"
      chpl_task_yield();
#line 302 "ChapelDistribution.chpl"
      chpl_check_nil(dom, INT64(302), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 302 "ChapelDistribution.chpl"
      call_tmp18 = &((dom)->_arrsLock);
#line 302 "ChapelDistribution.chpl"
      default_argorder3 = local_memory_order_seq_cst;
#line 302 "ChapelDistribution.chpl"
      chpl_check_nil(call_tmp18, INT64(302), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 302 "ChapelDistribution.chpl"
      call_tmp19 = &((call_tmp18)->_v);
#line 302 "ChapelDistribution.chpl"
      call_tmp20 = atomic_flag_test_and_set_explicit(call_tmp19, default_argorder3);
#line 302 "ChapelDistribution.chpl"
      T = call_tmp20;
#line 302 "ChapelDistribution.chpl"
    }
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(dom, INT64(302), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 302 "ChapelDistribution.chpl"
    call_tmp21 = &((dom)->_arrs);
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp21, INT64(302), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 302 "ChapelDistribution.chpl"
    remove_chpl(call_tmp21, this6, _ln, _fn);
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(dom, INT64(302), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 302 "ChapelDistribution.chpl"
    call_tmp22 = &((dom)->_arrsLock);
#line 302 "ChapelDistribution.chpl"
    default_argorder4 = local_memory_order_seq_cst;
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp22, INT64(302), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 302 "ChapelDistribution.chpl"
    call_tmp23 = &((call_tmp22)->_v);
#line 302 "ChapelDistribution.chpl"
    atomic_flag_clear_explicit(call_tmp23, default_argorder4);
#line 303 "ChapelDistribution.chpl"
    chpl_check_nil(dom, INT64(303), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 303 "ChapelDistribution.chpl"
    call_tmp24 = destroyDom(dom, _ln, _fn);
#line 304 "ChapelDistribution.chpl"
    call_tmp25 = (call_tmp24 == INT64(0));
#line 304 "ChapelDistribution.chpl"
    if (call_tmp25) /* ZLINE: 304 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl */
#line 304 "ChapelDistribution.chpl"
    {
#line 305 "ChapelDistribution.chpl"
      chpl_check_nil(dom, INT64(305), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelDistribution.chpl");
#line 305 "ChapelDistribution.chpl"
      _virtual_method_tmp_4 = ((object)(dom))->chpl__cid;
#line 305 "ChapelDistribution.chpl"
      ((void(*)(BaseDom, int64_t, c_string))chpl_vmtable[((INT64(4) * _virtual_method_tmp_4) + INT64(0))])(dom, _ln, _fn);
#line 305 "ChapelDistribution.chpl"
      call_tmp26 = ((void*)(dom));
#line 305 "ChapelDistribution.chpl"
      chpl_here_free(call_tmp26, _ln, _fn);
#line 305 "ChapelDistribution.chpl"
    }
#line 305 "ChapelDistribution.chpl"
  }
#line 285 "ChapelDistribution.chpl"
  return cnt;
#line 285 "ChapelDistribution.chpl"
}

#line 285 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:311 */
#line 285 "ChapelDistribution.chpl"
static void dsiDestroyData(BaseArr this6, int64_t _ln, c_string _fn) {
#line 311 "ChapelDistribution.chpl"
  return;
#line 311 "ChapelDistribution.chpl"
}

#line 311 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:313 */
#line 311 "ChapelDistribution.chpl"
static void dsiReallocate(BaseArr this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
#line 314 "ChapelDistribution.chpl"
  halt("reallocating not supported for this array type", _ln, _fn);
#line 313 "ChapelDistribution.chpl"
  return;
#line 313 "ChapelDistribution.chpl"
}

#line 313 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:317 */
#line 313 "ChapelDistribution.chpl"
static void dsiPostReallocate(BaseArr this6) {
#line 317 "ChapelDistribution.chpl"
  return;
#line 317 "ChapelDistribution.chpl"
}


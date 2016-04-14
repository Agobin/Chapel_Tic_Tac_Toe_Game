/* ChapelDistribution.chpl:20 */
static void chpl__init_ChapelDistribution(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 20 "ChapelDistribution.chpl"
  if (chpl__init_ChapelDistribution_p) /* ZLINE: 20 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
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
  chpl__init_ChapelDistribution_p = UINT8(true);
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
static BaseDist _construct_BaseDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, BaseDist meme, int64_t _ln, int32_t _fn) {
#line 20 "ChapelDistribution.chpl"
  BaseDist this5 = NULL;
#line 20 "ChapelDistribution.chpl"
  object T = NULL;
#line 30 "ChapelDistribution.chpl"
  this5 = meme;
#line 30 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(30), INT64(28));
#line 30 "ChapelDistribution.chpl"
  T = &((this5)->super);
#line 30 "ChapelDistribution.chpl"
  _construct_object(T);
#line 34 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(34), INT64(28));
#line 34 "ChapelDistribution.chpl"
  (this5)->_distCnt = *(_distCnt);
#line 35 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(35), INT64(28));
#line 35 "ChapelDistribution.chpl"
  (this5)->_doms = *(_doms);
#line 36 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(36), INT64(28));
#line 36 "ChapelDistribution.chpl"
  (this5)->_domsLock = *(_domsLock);
#line 30 "ChapelDistribution.chpl"
  return this5;
#line 30 "ChapelDistribution.chpl"
}

#line 30 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:30 */
#line 30 "ChapelDistribution.chpl"
static void chpl__auto_destroy_BaseDist(BaseDist this5, int64_t _ln, int32_t _fn) {
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
  chpl_check_nil(this5, INT64(36), INT64(28));
#line 36 "ChapelDistribution.chpl"
  _field_destructor_tmp_ = &((this5)->_domsLock);
#line 36 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(36), INT64(28));
#line 36 "ChapelDistribution.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 36 "ChapelDistribution.chpl"
  atomic_destroy_flag(call_tmp);
#line 34 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(34), INT64(28));
#line 34 "ChapelDistribution.chpl"
  _field_destructor_tmp_2 = &((this5)->_distCnt);
#line 34 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(34), INT64(28));
#line 34 "ChapelDistribution.chpl"
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 34 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(34), INT64(28));
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
static int64_t destroyDist(BaseDist this5, int64_t _ln, int32_t _fn) {
#line 30 "ChapelDistribution.chpl"
  string local__str_literal_1442;
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
  local__str_literal_1442 = _str_literal_1442;
#line 41 "ChapelDistribution.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 40 "ChapelDistribution.chpl"
  compilerAssert();
#line 41 "ChapelDistribution.chpl"
  compilerAssert();
#line 41 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(41), INT64(28));
#line 41 "ChapelDistribution.chpl"
  call_tmp = &((this5)->_distCnt);
#line 41 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp, INT64(41), INT64(28));
#line 41 "ChapelDistribution.chpl"
  call_tmp2 = &((call_tmp)->_cnt);
#line 41 "ChapelDistribution.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 41 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp2, INT64(41), INT64(28));
#line 41 "ChapelDistribution.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 41 "ChapelDistribution.chpl"
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
#line 41 "ChapelDistribution.chpl"
  call_tmp5 = (call_tmp4 - INT64(1));
#line 41 "ChapelDistribution.chpl"
  call_tmp6 = (call_tmp5 < INT64(0));
#line 41 "ChapelDistribution.chpl"
  if (call_tmp6) /* ZLINE: 41 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 41 "ChapelDistribution.chpl"
  {
#line 41 "ChapelDistribution.chpl"
    halt(&local__str_literal_1442, _ln, _fn);
#line 41 "ChapelDistribution.chpl"
  }
#line 39 "ChapelDistribution.chpl"
  return call_tmp5;
#line 39 "ChapelDistribution.chpl"
}

#line 39 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:109 */
#line 39 "ChapelDistribution.chpl"
static void dsiDestroyDistClass(BaseDist this5) {
#line 109 "ChapelDistribution.chpl"
  return;
#line 109 "ChapelDistribution.chpl"
}

#line 109 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:118 */
#line 109 "ChapelDistribution.chpl"
static void chpl__auto_destroy_BaseDom(BaseDom this5, int64_t _ln, int32_t _fn) {
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
  chpl_check_nil(this5, INT64(124), INT64(28));
#line 124 "ChapelDistribution.chpl"
  _field_destructor_tmp_ = &((this5)->_arrsLock);
#line 124 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(124), INT64(28));
#line 124 "ChapelDistribution.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 124 "ChapelDistribution.chpl"
  atomic_destroy_flag(call_tmp);
#line 122 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(122), INT64(28));
#line 122 "ChapelDistribution.chpl"
  _field_destructor_tmp_2 = &((this5)->_domCnt);
#line 122 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(122), INT64(28));
#line 122 "ChapelDistribution.chpl"
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 122 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(122), INT64(28));
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
static BaseDom _construct_BaseDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseDom meme, int64_t _ln, int32_t _fn) {
#line 118 "ChapelDistribution.chpl"
  BaseDom this5 = NULL;
#line 118 "ChapelDistribution.chpl"
  object T = NULL;
#line 118 "ChapelDistribution.chpl"
  this5 = meme;
#line 118 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(118), INT64(28));
#line 118 "ChapelDistribution.chpl"
  T = &((this5)->super);
#line 118 "ChapelDistribution.chpl"
  _construct_object(T);
#line 122 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(122), INT64(28));
#line 122 "ChapelDistribution.chpl"
  (this5)->_domCnt = *(_domCnt);
#line 123 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(123), INT64(28));
#line 123 "ChapelDistribution.chpl"
  (this5)->_arrs = *(_arrs);
#line 124 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(124), INT64(28));
#line 124 "ChapelDistribution.chpl"
  (this5)->_arrsLock = *(_arrsLock);
#line 118 "ChapelDistribution.chpl"
  return this5;
#line 118 "ChapelDistribution.chpl"
}

#line 118 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:126 */
#line 118 "ChapelDistribution.chpl"
static BaseDist dsiMyDist(BaseDom this5, int64_t _ln, int32_t _fn) {
#line 118 "ChapelDistribution.chpl"
  string local__str_literal_1444;
#line 118 "ChapelDistribution.chpl"
  BaseDist ret = NULL;
#line 127 "ChapelDistribution.chpl"
  local__str_literal_1444 = _str_literal_1444;
#line 127 "ChapelDistribution.chpl"
  halt(&local__str_literal_1444, _ln, _fn);
#line 128 "ChapelDistribution.chpl"
  ret = nil;
#line 126 "ChapelDistribution.chpl"
  return ret;
#line 126 "ChapelDistribution.chpl"
}

#line 126 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:132 */
#line 126 "ChapelDistribution.chpl"
static int64_t destroyDom(BaseDom this5, int64_t _ln, int32_t _fn) {
#line 126 "ChapelDistribution.chpl"
  string local__str_literal_1450;
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
  BaseDist delete_tmp = NULL;
#line 126 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_;
#line 126 "ChapelDistribution.chpl"
  DefaultDist _cast_tmp_ = NULL;
#line 126 "ChapelDistribution.chpl"
  BaseDist _parent_destructor_tmp_ = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp21 = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp22 = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_4 = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp23 = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_5 = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_6 = NULL;
#line 126 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp24 = NULL;
#line 126 "ChapelDistribution.chpl"
  c_void_ptr call_tmp25;
#line 134 "ChapelDistribution.chpl"
  local__str_literal_1450 = _str_literal_1450;
#line 134 "ChapelDistribution.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 133 "ChapelDistribution.chpl"
  compilerAssert();
#line 134 "ChapelDistribution.chpl"
  compilerAssert();
#line 134 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(134), INT64(28));
#line 134 "ChapelDistribution.chpl"
  call_tmp = &((this5)->_domCnt);
#line 134 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp, INT64(134), INT64(28));
#line 134 "ChapelDistribution.chpl"
  call_tmp2 = &((call_tmp)->_cnt);
#line 134 "ChapelDistribution.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 134 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp2, INT64(134), INT64(28));
#line 134 "ChapelDistribution.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 134 "ChapelDistribution.chpl"
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
#line 134 "ChapelDistribution.chpl"
  call_tmp5 = (call_tmp4 - INT64(1));
#line 134 "ChapelDistribution.chpl"
  call_tmp6 = (call_tmp5 < INT64(0));
#line 134 "ChapelDistribution.chpl"
  if (call_tmp6) /* ZLINE: 134 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 134 "ChapelDistribution.chpl"
  {
#line 134 "ChapelDistribution.chpl"
    halt(&local__str_literal_1450, _ln, _fn);
#line 134 "ChapelDistribution.chpl"
  }
#line 134 "ChapelDistribution.chpl"
  cnt = call_tmp5;
#line 135 "ChapelDistribution.chpl"
  call_tmp7 = (call_tmp5 == INT64(0));
#line 135 "ChapelDistribution.chpl"
  if (call_tmp7) /* ZLINE: 135 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 135 "ChapelDistribution.chpl"
  {
#line 135 "ChapelDistribution.chpl"
    chpl_check_nil(this5, INT64(135), INT64(28));
#line 135 "ChapelDistribution.chpl"
    _virtual_method_tmp_ = ((object)(this5))->chpl__cid;
#line 135 "ChapelDistribution.chpl"
    call_tmp8 = ((chpl_bool(*)(BaseDom))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(1))])(this5);
#line 135 "ChapelDistribution.chpl"
    T = call_tmp8;
#line 135 "ChapelDistribution.chpl"
  } else /* ZLINE: 135 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 135 "ChapelDistribution.chpl"
  {
#line 135 "ChapelDistribution.chpl"
    T = UINT8(false);
#line 135 "ChapelDistribution.chpl"
  }
#line 135 "ChapelDistribution.chpl"
  if (T) /* ZLINE: 136 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 135 "ChapelDistribution.chpl"
  {
#line 136 "ChapelDistribution.chpl"
    chpl_check_nil(this5, INT64(136), INT64(28));
#line 136 "ChapelDistribution.chpl"
    call_tmp9 = dsiMyDist(this5, _ln, _fn);
#line 136 "ChapelDistribution.chpl"
    dist2 = call_tmp9;
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(dist2, INT64(138), INT64(28));
#line 138 "ChapelDistribution.chpl"
    call_tmp10 = &((dist2)->_domsLock);
#line 138 "ChapelDistribution.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp10, INT64(138), INT64(28));
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
      chpl_check_nil(dist2, INT64(138), INT64(28));
#line 138 "ChapelDistribution.chpl"
      call_tmp13 = &((dist2)->_domsLock);
#line 138 "ChapelDistribution.chpl"
      default_argorder3 = local_memory_order_seq_cst;
#line 138 "ChapelDistribution.chpl"
      chpl_check_nil(call_tmp13, INT64(138), INT64(28));
#line 138 "ChapelDistribution.chpl"
      call_tmp14 = &((call_tmp13)->_v);
#line 138 "ChapelDistribution.chpl"
      call_tmp15 = atomic_flag_test_and_set_explicit(call_tmp14, default_argorder3);
#line 138 "ChapelDistribution.chpl"
      T2 = call_tmp15;
#line 138 "ChapelDistribution.chpl"
    }
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(dist2, INT64(138), INT64(28));
#line 138 "ChapelDistribution.chpl"
    call_tmp16 = &((dist2)->_doms);
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp16, INT64(138), INT64(28));
#line 138 "ChapelDistribution.chpl"
    remove_chpl2(call_tmp16, this5, _ln, _fn);
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(dist2, INT64(138), INT64(28));
#line 138 "ChapelDistribution.chpl"
    call_tmp17 = &((dist2)->_domsLock);
#line 138 "ChapelDistribution.chpl"
    default_argorder4 = local_memory_order_seq_cst;
#line 138 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp17, INT64(138), INT64(28));
#line 138 "ChapelDistribution.chpl"
    call_tmp18 = &((call_tmp17)->_v);
#line 138 "ChapelDistribution.chpl"
    atomic_flag_clear_explicit(call_tmp18, default_argorder4);
#line 139 "ChapelDistribution.chpl"
    chpl_check_nil(dist2, INT64(139), INT64(28));
#line 139 "ChapelDistribution.chpl"
    call_tmp19 = destroyDist(dist2, _ln, _fn);
#line 140 "ChapelDistribution.chpl"
    call_tmp20 = (call_tmp19 == INT64(0));
#line 140 "ChapelDistribution.chpl"
    if (call_tmp20) /* ZLINE: 140 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 140 "ChapelDistribution.chpl"
    {
#line 141 "ChapelDistribution.chpl"
      delete_tmp = dist2;
#line 141 "ChapelDistribution.chpl"
      chpl_check_nil(dist2, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
      _dynamic_dispatch_tmp_ = (((object)(dist2))->chpl__cid == chpl__cid_DefaultDist);
#line 141 "ChapelDistribution.chpl"
      if (_dynamic_dispatch_tmp_) /* ZLINE: 141 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 141 "ChapelDistribution.chpl"
      {
#line 141 "ChapelDistribution.chpl"
        _cast_tmp_ = ((DefaultDist)(dist2));
#line 141 "ChapelDistribution.chpl"
        _parent_destructor_tmp_ = ((BaseDist)(_cast_tmp_));
#line 141 "ChapelDistribution.chpl"
        chpl_check_nil(_parent_destructor_tmp_, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
        _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
#line 141 "ChapelDistribution.chpl"
        chpl_check_nil(_field_destructor_tmp_, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
        call_tmp21 = &((_field_destructor_tmp_)->_v);
#line 141 "ChapelDistribution.chpl"
        atomic_destroy_flag(call_tmp21);
#line 141 "ChapelDistribution.chpl"
        chpl_check_nil(_parent_destructor_tmp_, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
        _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
#line 141 "ChapelDistribution.chpl"
        chpl_check_nil(_field_destructor_tmp_2, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
        _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 141 "ChapelDistribution.chpl"
        chpl_check_nil(_field_destructor_tmp_3, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
        call_tmp22 = &((_field_destructor_tmp_3)->_v);
#line 141 "ChapelDistribution.chpl"
        atomic_destroy_int_least64_t(call_tmp22);
#line 141 "ChapelDistribution.chpl"
      } else /* ZLINE: 141 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 141 "ChapelDistribution.chpl"
      {
#line 141 "ChapelDistribution.chpl"
        chpl_check_nil(delete_tmp, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
        _field_destructor_tmp_4 = &((delete_tmp)->_domsLock);
#line 141 "ChapelDistribution.chpl"
        chpl_check_nil(_field_destructor_tmp_4, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
        call_tmp23 = &((_field_destructor_tmp_4)->_v);
#line 141 "ChapelDistribution.chpl"
        atomic_destroy_flag(call_tmp23);
#line 141 "ChapelDistribution.chpl"
        chpl_check_nil(delete_tmp, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
        _field_destructor_tmp_5 = &((delete_tmp)->_distCnt);
#line 141 "ChapelDistribution.chpl"
        chpl_check_nil(_field_destructor_tmp_5, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
        _field_destructor_tmp_6 = &((_field_destructor_tmp_5)->_cnt);
#line 141 "ChapelDistribution.chpl"
        chpl_check_nil(_field_destructor_tmp_6, INT64(141), INT64(28));
#line 141 "ChapelDistribution.chpl"
        call_tmp24 = &((_field_destructor_tmp_6)->_v);
#line 141 "ChapelDistribution.chpl"
        atomic_destroy_int_least64_t(call_tmp24);
#line 141 "ChapelDistribution.chpl"
      }
#line 141 "ChapelDistribution.chpl"
      call_tmp25 = ((void*)(delete_tmp));
#line 141 "ChapelDistribution.chpl"
      chpl_here_free(call_tmp25, _ln, _fn);
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
static chpl_bool dsiLinksDistribution(BaseDom this5) {
#line 213 "ChapelDistribution.chpl"
  return UINT8(true);
#line 213 "ChapelDistribution.chpl"
}

#line 213 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:218 */
#line 213 "ChapelDistribution.chpl"
static BaseRectangularDom _construct_BaseRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, BaseRectangularDom meme, int64_t _ln, int32_t _fn) {
#line 213 "ChapelDistribution.chpl"
  BaseRectangularDom this5 = NULL;
#line 213 "ChapelDistribution.chpl"
  BaseDom T = NULL;
#line 218 "ChapelDistribution.chpl"
  this5 = meme;
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(218), INT64(28));
#line 218 "ChapelDistribution.chpl"
  T = &((this5)->super);
#line 218 "ChapelDistribution.chpl"
  _construct_BaseDom(_domCnt, _arrs, _arrsLock, T, _ln, _fn);
#line 218 "ChapelDistribution.chpl"
  return meme;
#line 218 "ChapelDistribution.chpl"
}

#line 218 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:218 */
#line 218 "ChapelDistribution.chpl"
static void chpl__auto_destroy_BaseRectangularDom(BaseRectangularDom this5, int64_t _ln, int32_t _fn) {
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
  _parent_destructor_tmp_ = ((BaseDom)(this5));
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(218), INT64(28));
#line 218 "ChapelDistribution.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrsLock);
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(218), INT64(28));
#line 218 "ChapelDistribution.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 218 "ChapelDistribution.chpl"
  atomic_destroy_flag(call_tmp);
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(218), INT64(28));
#line 218 "ChapelDistribution.chpl"
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_domCnt);
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(218), INT64(28));
#line 218 "ChapelDistribution.chpl"
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 218 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(218), INT64(28));
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
static BaseArr _construct_BaseArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, BaseArr meme, int64_t _ln, int32_t _fn) {
#line 218 "ChapelDistribution.chpl"
  BaseArr this5 = NULL;
#line 218 "ChapelDistribution.chpl"
  object T = NULL;
#line 270 "ChapelDistribution.chpl"
  this5 = meme;
#line 270 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(270), INT64(28));
#line 270 "ChapelDistribution.chpl"
  T = &((this5)->super);
#line 270 "ChapelDistribution.chpl"
  _construct_object(T);
#line 274 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(274), INT64(28));
#line 274 "ChapelDistribution.chpl"
  (this5)->_arrCnt = *(_arrCnt);
#line 275 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(275), INT64(28));
#line 275 "ChapelDistribution.chpl"
  (this5)->_arrAlias = _arrAlias;
#line 270 "ChapelDistribution.chpl"
  return this5;
#line 270 "ChapelDistribution.chpl"
}

#line 270 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:270 */
#line 270 "ChapelDistribution.chpl"
static void chpl__auto_destroy_BaseArr(BaseArr this5, int64_t _ln, int32_t _fn) {
#line 270 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 270 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 270 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 274 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(274), INT64(28));
#line 274 "ChapelDistribution.chpl"
  _field_destructor_tmp_ = &((this5)->_arrCnt);
#line 274 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(274), INT64(28));
#line 274 "ChapelDistribution.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 274 "ChapelDistribution.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(274), INT64(28));
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
static BaseDom dsiGetBaseDom(BaseArr this5, int64_t _ln, int32_t _fn) {
#line 270 "ChapelDistribution.chpl"
  string local__str_literal_1456;
#line 270 "ChapelDistribution.chpl"
  BaseDom ret = NULL;
#line 280 "ChapelDistribution.chpl"
  local__str_literal_1456 = _str_literal_1456;
#line 280 "ChapelDistribution.chpl"
  halt(&local__str_literal_1456, _ln, _fn);
#line 281 "ChapelDistribution.chpl"
  ret = nil;
#line 279 "ChapelDistribution.chpl"
  return ret;
#line 279 "ChapelDistribution.chpl"
}

#line 279 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:285 */
#line 279 "ChapelDistribution.chpl"
static int64_t destroyArr(BaseArr this5, int64_t _ln, int32_t _fn) {
#line 279 "ChapelDistribution.chpl"
  string local__str_literal_1477;
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
  BaseArr coerce_tmp = NULL;
#line 279 "ChapelDistribution.chpl"
  object call_tmp8 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp9;
#line 279 "ChapelDistribution.chpl"
  int64_t call_tmp10;
#line 279 "ChapelDistribution.chpl"
  BaseArr coerce_tmp2 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp11;
#line 279 "ChapelDistribution.chpl"
  BaseArr coerce_tmp3 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_ = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp12 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_2;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_2 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseArr _parent_destructor_tmp_2 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_3 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_4 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp13 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_3;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F _cast_tmp_3 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseArr _parent_destructor_tmp_3 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_5 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_6 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp14 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_4;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _cast_tmp_4 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseArr _parent_destructor_tmp_4 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_7 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_8 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp15 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_5;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularArr_string_1_int64_t_F _cast_tmp_5 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseArr _parent_destructor_tmp_5 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_9 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_10 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp16 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_6;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularArr_locale_1_int64_t_F _cast_tmp_6 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseArr _parent_destructor_tmp_6 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_11 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_12 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp17 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_7;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F _cast_tmp_7 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseArr _parent_destructor_tmp_7 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_13 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_14 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp18 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_8;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F _cast_tmp_8 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseArr _parent_destructor_tmp_8 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_15 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_16 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp19 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_9;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _cast_tmp_9 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseArr _parent_destructor_tmp_9 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_17 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_18 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp20 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_10;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularArr_string_1_int64_t_F _cast_tmp_10 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseArr _parent_destructor_tmp_10 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_19 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_20 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp21 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_21 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_22 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp22 = NULL;
#line 279 "ChapelDistribution.chpl"
  c_void_ptr call_tmp23;
#line 279 "ChapelDistribution.chpl"
  BaseArr castDeref = NULL;
#line 279 "ChapelDistribution.chpl"
  int32_t _virtual_method_tmp_;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp24;
#line 279 "ChapelDistribution.chpl"
  BaseDom dom = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseDom call_tmp25 = NULL;
#line 279 "ChapelDistribution.chpl"
  int32_t _virtual_method_tmp_2;
#line 279 "ChapelDistribution.chpl"
  chpl_bool T;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag call_tmp26 = NULL;
#line 279 "ChapelDistribution.chpl"
  memory_order default_argorder2;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp27 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp28;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag call_tmp29 = NULL;
#line 279 "ChapelDistribution.chpl"
  memory_order default_argorder3;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp30 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp31;
#line 279 "ChapelDistribution.chpl"
  _ref_list_BaseArr call_tmp32 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag call_tmp33 = NULL;
#line 279 "ChapelDistribution.chpl"
  memory_order default_argorder4;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp34 = NULL;
#line 279 "ChapelDistribution.chpl"
  int64_t call_tmp35;
#line 279 "ChapelDistribution.chpl"
  chpl_bool call_tmp36;
#line 279 "ChapelDistribution.chpl"
  BaseDom delete_tmp = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_11;
#line 279 "ChapelDistribution.chpl"
  BaseRectangularDom _cast_tmp_11 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_12;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularDom_1_int64_t_F _cast_tmp_12 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseRectangularDom _parent_destructor_tmp_11 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseDom _parent_destructor_tmp_12 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_23 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp37 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_24 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_25 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp38 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_13;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularDom_1_int64_t_F _cast_tmp_13 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseRectangularDom _parent_destructor_tmp_13 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseDom _parent_destructor_tmp_14 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_26 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp39 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_27 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_28 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp40 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseDom _parent_destructor_tmp_15 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_29 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp41 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_30 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_31 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp42 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_14;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularDom_1_int64_t_F _cast_tmp_14 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseRectangularDom _parent_destructor_tmp_16 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseDom _parent_destructor_tmp_17 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_32 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp43 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_33 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_34 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp44 = NULL;
#line 279 "ChapelDistribution.chpl"
  chpl_bool _dynamic_dispatch_tmp_15;
#line 279 "ChapelDistribution.chpl"
  DefaultRectangularDom_1_int64_t_F _cast_tmp_15 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseRectangularDom _parent_destructor_tmp_18 = NULL;
#line 279 "ChapelDistribution.chpl"
  BaseDom _parent_destructor_tmp_19 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_35 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp45 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_36 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_37 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp46 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomicflag _field_destructor_tmp_38 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_flag call_tmp47 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_39 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int64 _field_destructor_tmp_40 = NULL;
#line 279 "ChapelDistribution.chpl"
  _ref_atomic_int_least64_t call_tmp48 = NULL;
#line 279 "ChapelDistribution.chpl"
  c_void_ptr call_tmp49;
#line 287 "ChapelDistribution.chpl"
  local__str_literal_1477 = _str_literal_1477;
#line 287 "ChapelDistribution.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 286 "ChapelDistribution.chpl"
  compilerAssert();
#line 287 "ChapelDistribution.chpl"
  compilerAssert();
#line 287 "ChapelDistribution.chpl"
  chpl_check_nil(this5, INT64(287), INT64(28));
#line 287 "ChapelDistribution.chpl"
  call_tmp = &((this5)->_arrCnt);
#line 287 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp, INT64(287), INT64(28));
#line 287 "ChapelDistribution.chpl"
  call_tmp2 = &((call_tmp)->_cnt);
#line 287 "ChapelDistribution.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 287 "ChapelDistribution.chpl"
  chpl_check_nil(call_tmp2, INT64(287), INT64(28));
#line 287 "ChapelDistribution.chpl"
  call_tmp3 = &((call_tmp2)->_v);
#line 287 "ChapelDistribution.chpl"
  call_tmp4 = atomic_fetch_sub_explicit_int_least64_t(call_tmp3, INT64(1), default_argorder);
#line 287 "ChapelDistribution.chpl"
  call_tmp5 = (call_tmp4 - INT64(1));
#line 287 "ChapelDistribution.chpl"
  call_tmp6 = (call_tmp5 < INT64(0));
#line 287 "ChapelDistribution.chpl"
  if (call_tmp6) /* ZLINE: 287 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 287 "ChapelDistribution.chpl"
  {
#line 287 "ChapelDistribution.chpl"
    halt(&local__str_literal_1477, _ln, _fn);
#line 287 "ChapelDistribution.chpl"
  }
#line 287 "ChapelDistribution.chpl"
  cnt = call_tmp5;
#line 288 "ChapelDistribution.chpl"
  call_tmp7 = (call_tmp5 == INT64(0));
#line 288 "ChapelDistribution.chpl"
  if (call_tmp7) /* ZLINE: 289 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 288 "ChapelDistribution.chpl"
  {
#line 289 "ChapelDistribution.chpl"
    chpl_check_nil(this5, INT64(289), INT64(28));
#line 289 "ChapelDistribution.chpl"
    coerce_tmp = (this5)->_arrAlias;
#line 289 "ChapelDistribution.chpl"
    call_tmp8 = ((object)(coerce_tmp));
#line 289 "ChapelDistribution.chpl"
    call_tmp9 = (call_tmp8 != nil);
#line 289 "ChapelDistribution.chpl"
    if (call_tmp9) /* ZLINE: 290 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 289 "ChapelDistribution.chpl"
    {
#line 291 "ChapelDistribution.chpl"
      chpl_check_nil(this5, INT64(291), INT64(28));
#line 291 "ChapelDistribution.chpl"
      coerce_tmp2 = (this5)->_arrAlias;
#line 291 "ChapelDistribution.chpl"
      chpl_check_nil(coerce_tmp2, INT64(291), INT64(28));
#line 291 "ChapelDistribution.chpl"
      call_tmp10 = destroyArr(coerce_tmp2, _ln, _fn);
#line 292 "ChapelDistribution.chpl"
      call_tmp11 = (call_tmp10 == INT64(0));
#line 292 "ChapelDistribution.chpl"
      if (call_tmp11) /* ZLINE: 292 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 292 "ChapelDistribution.chpl"
      {
#line 293 "ChapelDistribution.chpl"
        chpl_check_nil(this5, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
        coerce_tmp3 = (this5)->_arrAlias;
#line 293 "ChapelDistribution.chpl"
        chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
        _dynamic_dispatch_tmp_ = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
#line 293 "ChapelDistribution.chpl"
        if (_dynamic_dispatch_tmp_) /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
        {
#line 293 "ChapelDistribution.chpl"
          _cast_tmp_ = ((DefaultRectangularArr_locale_1_int64_t_F)(coerce_tmp3));
#line 293 "ChapelDistribution.chpl"
          _parent_destructor_tmp_ = ((BaseArr)(_cast_tmp_));
#line 293 "ChapelDistribution.chpl"
          chpl_check_nil(_parent_destructor_tmp_, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
          _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
          chpl_check_nil(_field_destructor_tmp_, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
          _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 293 "ChapelDistribution.chpl"
          chpl_check_nil(_field_destructor_tmp_2, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
          call_tmp12 = &((_field_destructor_tmp_2)->_v);
#line 293 "ChapelDistribution.chpl"
          atomic_destroy_int_least64_t(call_tmp12);
#line 293 "ChapelDistribution.chpl"
        } else /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
        {
#line 293 "ChapelDistribution.chpl"
          chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
          _dynamic_dispatch_tmp_2 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
#line 293 "ChapelDistribution.chpl"
          if (_dynamic_dispatch_tmp_2) /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
          {
#line 293 "ChapelDistribution.chpl"
            _cast_tmp_2 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(coerce_tmp3));
#line 293 "ChapelDistribution.chpl"
            _parent_destructor_tmp_2 = ((BaseArr)(_cast_tmp_2));
#line 293 "ChapelDistribution.chpl"
            chpl_check_nil(_parent_destructor_tmp_2, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
            _field_destructor_tmp_3 = &((_parent_destructor_tmp_2)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
            _field_destructor_tmp_4 = &((_field_destructor_tmp_3)->_cnt);
#line 293 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_4, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
            call_tmp13 = &((_field_destructor_tmp_4)->_v);
#line 293 "ChapelDistribution.chpl"
            atomic_destroy_int_least64_t(call_tmp13);
#line 293 "ChapelDistribution.chpl"
          } else /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
          {
#line 293 "ChapelDistribution.chpl"
            chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
            _dynamic_dispatch_tmp_3 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F);
#line 293 "ChapelDistribution.chpl"
            if (_dynamic_dispatch_tmp_3) /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
            {
#line 293 "ChapelDistribution.chpl"
              _cast_tmp_3 = ((DefaultRectangularArr_int64_t_1_int64_t_F)(coerce_tmp3));
#line 293 "ChapelDistribution.chpl"
              _parent_destructor_tmp_3 = ((BaseArr)(_cast_tmp_3));
#line 293 "ChapelDistribution.chpl"
              chpl_check_nil(_parent_destructor_tmp_3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
              _field_destructor_tmp_5 = &((_parent_destructor_tmp_3)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
              chpl_check_nil(_field_destructor_tmp_5, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
              _field_destructor_tmp_6 = &((_field_destructor_tmp_5)->_cnt);
#line 293 "ChapelDistribution.chpl"
              chpl_check_nil(_field_destructor_tmp_6, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
              call_tmp14 = &((_field_destructor_tmp_6)->_v);
#line 293 "ChapelDistribution.chpl"
              atomic_destroy_int_least64_t(call_tmp14);
#line 293 "ChapelDistribution.chpl"
            } else /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
            {
#line 293 "ChapelDistribution.chpl"
              chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
              _dynamic_dispatch_tmp_4 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F);
#line 293 "ChapelDistribution.chpl"
              if (_dynamic_dispatch_tmp_4) /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
              {
#line 293 "ChapelDistribution.chpl"
                _cast_tmp_4 = ((DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F)(coerce_tmp3));
#line 293 "ChapelDistribution.chpl"
                _parent_destructor_tmp_4 = ((BaseArr)(_cast_tmp_4));
#line 293 "ChapelDistribution.chpl"
                chpl_check_nil(_parent_destructor_tmp_4, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                _field_destructor_tmp_7 = &((_parent_destructor_tmp_4)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
                chpl_check_nil(_field_destructor_tmp_7, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                _field_destructor_tmp_8 = &((_field_destructor_tmp_7)->_cnt);
#line 293 "ChapelDistribution.chpl"
                chpl_check_nil(_field_destructor_tmp_8, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                call_tmp15 = &((_field_destructor_tmp_8)->_v);
#line 293 "ChapelDistribution.chpl"
                atomic_destroy_int_least64_t(call_tmp15);
#line 293 "ChapelDistribution.chpl"
              } else /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
              {
#line 293 "ChapelDistribution.chpl"
                chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                _dynamic_dispatch_tmp_5 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_string_1_int64_t_F);
#line 293 "ChapelDistribution.chpl"
                if (_dynamic_dispatch_tmp_5) /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                {
#line 293 "ChapelDistribution.chpl"
                  _cast_tmp_5 = ((DefaultRectangularArr_string_1_int64_t_F)(coerce_tmp3));
#line 293 "ChapelDistribution.chpl"
                  _parent_destructor_tmp_5 = ((BaseArr)(_cast_tmp_5));
#line 293 "ChapelDistribution.chpl"
                  chpl_check_nil(_parent_destructor_tmp_5, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                  _field_destructor_tmp_9 = &((_parent_destructor_tmp_5)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
                  chpl_check_nil(_field_destructor_tmp_9, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                  _field_destructor_tmp_10 = &((_field_destructor_tmp_9)->_cnt);
#line 293 "ChapelDistribution.chpl"
                  chpl_check_nil(_field_destructor_tmp_10, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                  call_tmp16 = &((_field_destructor_tmp_10)->_v);
#line 293 "ChapelDistribution.chpl"
                  atomic_destroy_int_least64_t(call_tmp16);
#line 293 "ChapelDistribution.chpl"
                } else /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                {
#line 293 "ChapelDistribution.chpl"
                  chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                  _dynamic_dispatch_tmp_6 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_locale_1_int64_t_F);
#line 293 "ChapelDistribution.chpl"
                  if (_dynamic_dispatch_tmp_6) /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                  {
#line 293 "ChapelDistribution.chpl"
                    _cast_tmp_6 = ((DefaultRectangularArr_locale_1_int64_t_F)(coerce_tmp3));
#line 293 "ChapelDistribution.chpl"
                    _parent_destructor_tmp_6 = ((BaseArr)(_cast_tmp_6));
#line 293 "ChapelDistribution.chpl"
                    chpl_check_nil(_parent_destructor_tmp_6, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                    _field_destructor_tmp_11 = &((_parent_destructor_tmp_6)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
                    chpl_check_nil(_field_destructor_tmp_11, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                    _field_destructor_tmp_12 = &((_field_destructor_tmp_11)->_cnt);
#line 293 "ChapelDistribution.chpl"
                    chpl_check_nil(_field_destructor_tmp_12, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                    call_tmp17 = &((_field_destructor_tmp_12)->_v);
#line 293 "ChapelDistribution.chpl"
                    atomic_destroy_int_least64_t(call_tmp17);
#line 293 "ChapelDistribution.chpl"
                  } else /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                  {
#line 293 "ChapelDistribution.chpl"
                    chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                    _dynamic_dispatch_tmp_7 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F);
#line 293 "ChapelDistribution.chpl"
                    if (_dynamic_dispatch_tmp_7) /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                    {
#line 293 "ChapelDistribution.chpl"
                      _cast_tmp_7 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(coerce_tmp3));
#line 293 "ChapelDistribution.chpl"
                      _parent_destructor_tmp_7 = ((BaseArr)(_cast_tmp_7));
#line 293 "ChapelDistribution.chpl"
                      chpl_check_nil(_parent_destructor_tmp_7, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                      _field_destructor_tmp_13 = &((_parent_destructor_tmp_7)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
                      chpl_check_nil(_field_destructor_tmp_13, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                      _field_destructor_tmp_14 = &((_field_destructor_tmp_13)->_cnt);
#line 293 "ChapelDistribution.chpl"
                      chpl_check_nil(_field_destructor_tmp_14, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                      call_tmp18 = &((_field_destructor_tmp_14)->_v);
#line 293 "ChapelDistribution.chpl"
                      atomic_destroy_int_least64_t(call_tmp18);
#line 293 "ChapelDistribution.chpl"
                    } else /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                    {
#line 293 "ChapelDistribution.chpl"
                      chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                      _dynamic_dispatch_tmp_8 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F);
#line 293 "ChapelDistribution.chpl"
                      if (_dynamic_dispatch_tmp_8) /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                      {
#line 293 "ChapelDistribution.chpl"
                        _cast_tmp_8 = ((DefaultRectangularArr_int64_t_1_int64_t_F)(coerce_tmp3));
#line 293 "ChapelDistribution.chpl"
                        _parent_destructor_tmp_8 = ((BaseArr)(_cast_tmp_8));
#line 293 "ChapelDistribution.chpl"
                        chpl_check_nil(_parent_destructor_tmp_8, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                        _field_destructor_tmp_15 = &((_parent_destructor_tmp_8)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
                        chpl_check_nil(_field_destructor_tmp_15, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                        _field_destructor_tmp_16 = &((_field_destructor_tmp_15)->_cnt);
#line 293 "ChapelDistribution.chpl"
                        chpl_check_nil(_field_destructor_tmp_16, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                        call_tmp19 = &((_field_destructor_tmp_16)->_v);
#line 293 "ChapelDistribution.chpl"
                        atomic_destroy_int_least64_t(call_tmp19);
#line 293 "ChapelDistribution.chpl"
                      } else /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                      {
#line 293 "ChapelDistribution.chpl"
                        chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                        _dynamic_dispatch_tmp_9 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F);
#line 293 "ChapelDistribution.chpl"
                        if (_dynamic_dispatch_tmp_9) /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                        {
#line 293 "ChapelDistribution.chpl"
                          _cast_tmp_9 = ((DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F)(coerce_tmp3));
#line 293 "ChapelDistribution.chpl"
                          _parent_destructor_tmp_9 = ((BaseArr)(_cast_tmp_9));
#line 293 "ChapelDistribution.chpl"
                          chpl_check_nil(_parent_destructor_tmp_9, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                          _field_destructor_tmp_17 = &((_parent_destructor_tmp_9)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
                          chpl_check_nil(_field_destructor_tmp_17, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                          _field_destructor_tmp_18 = &((_field_destructor_tmp_17)->_cnt);
#line 293 "ChapelDistribution.chpl"
                          chpl_check_nil(_field_destructor_tmp_18, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                          call_tmp20 = &((_field_destructor_tmp_18)->_v);
#line 293 "ChapelDistribution.chpl"
                          atomic_destroy_int_least64_t(call_tmp20);
#line 293 "ChapelDistribution.chpl"
                        } else /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                        {
#line 293 "ChapelDistribution.chpl"
                          chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                          _dynamic_dispatch_tmp_10 = (((object)(coerce_tmp3))->chpl__cid == chpl__cid_DefaultRectangularArr_string_1_int64_t_F);
#line 293 "ChapelDistribution.chpl"
                          if (_dynamic_dispatch_tmp_10) /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                          {
#line 293 "ChapelDistribution.chpl"
                            _cast_tmp_10 = ((DefaultRectangularArr_string_1_int64_t_F)(coerce_tmp3));
#line 293 "ChapelDistribution.chpl"
                            _parent_destructor_tmp_10 = ((BaseArr)(_cast_tmp_10));
#line 293 "ChapelDistribution.chpl"
                            chpl_check_nil(_parent_destructor_tmp_10, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                            _field_destructor_tmp_19 = &((_parent_destructor_tmp_10)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
                            chpl_check_nil(_field_destructor_tmp_19, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                            _field_destructor_tmp_20 = &((_field_destructor_tmp_19)->_cnt);
#line 293 "ChapelDistribution.chpl"
                            chpl_check_nil(_field_destructor_tmp_20, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                            call_tmp21 = &((_field_destructor_tmp_20)->_v);
#line 293 "ChapelDistribution.chpl"
                            atomic_destroy_int_least64_t(call_tmp21);
#line 293 "ChapelDistribution.chpl"
                          } else /* ZLINE: 293 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
                          {
#line 293 "ChapelDistribution.chpl"
                            chpl_check_nil(coerce_tmp3, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                            _field_destructor_tmp_21 = &((coerce_tmp3)->_arrCnt);
#line 293 "ChapelDistribution.chpl"
                            chpl_check_nil(_field_destructor_tmp_21, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                            _field_destructor_tmp_22 = &((_field_destructor_tmp_21)->_cnt);
#line 293 "ChapelDistribution.chpl"
                            chpl_check_nil(_field_destructor_tmp_22, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
                            call_tmp22 = &((_field_destructor_tmp_22)->_v);
#line 293 "ChapelDistribution.chpl"
                            atomic_destroy_int_least64_t(call_tmp22);
#line 293 "ChapelDistribution.chpl"
                          }
#line 293 "ChapelDistribution.chpl"
                        }
#line 293 "ChapelDistribution.chpl"
                      }
#line 293 "ChapelDistribution.chpl"
                    }
#line 293 "ChapelDistribution.chpl"
                  }
#line 293 "ChapelDistribution.chpl"
                }
#line 293 "ChapelDistribution.chpl"
              }
#line 293 "ChapelDistribution.chpl"
            }
#line 293 "ChapelDistribution.chpl"
          }
#line 293 "ChapelDistribution.chpl"
        }
#line 293 "ChapelDistribution.chpl"
        chpl_check_nil(this5, INT64(293), INT64(28));
#line 293 "ChapelDistribution.chpl"
        castDeref = (this5)->_arrAlias;
#line 293 "ChapelDistribution.chpl"
        call_tmp23 = ((void*)(castDeref));
#line 293 "ChapelDistribution.chpl"
        chpl_here_free(call_tmp23, _ln, _fn);
#line 293 "ChapelDistribution.chpl"
      }
#line 293 "ChapelDistribution.chpl"
    } else /* ZLINE: 296 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 293 "ChapelDistribution.chpl"
    {
#line 296 "ChapelDistribution.chpl"
      chpl_check_nil(this5, INT64(296), INT64(28));
#line 296 "ChapelDistribution.chpl"
      _virtual_method_tmp_ = ((object)(this5))->chpl__cid;
#line 296 "ChapelDistribution.chpl"
      ((void(*)(BaseArr, int64_t, int32_t))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(1))])(this5, _ln, _fn);
#line 296 "ChapelDistribution.chpl"
    }
#line 296 "ChapelDistribution.chpl"
  }
#line 299 "ChapelDistribution.chpl"
  call_tmp24 = (call_tmp5 == INT64(0));
#line 299 "ChapelDistribution.chpl"
  if (call_tmp24) /* ZLINE: 300 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 299 "ChapelDistribution.chpl"
  {
#line 300 "ChapelDistribution.chpl"
    chpl_check_nil(this5, INT64(300), INT64(28));
#line 300 "ChapelDistribution.chpl"
    _virtual_method_tmp_2 = ((object)(this5))->chpl__cid;
#line 300 "ChapelDistribution.chpl"
    call_tmp25 = ((BaseDom(*)(BaseArr, int64_t, int32_t))chpl_vmtable[((INT64(4) * _virtual_method_tmp_2) + INT64(3))])(this5, _ln, _fn);
#line 300 "ChapelDistribution.chpl"
    dom = call_tmp25;
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(dom, INT64(302), INT64(28));
#line 302 "ChapelDistribution.chpl"
    call_tmp26 = &((dom)->_arrsLock);
#line 302 "ChapelDistribution.chpl"
    default_argorder2 = local_memory_order_seq_cst;
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp26, INT64(302), INT64(28));
#line 302 "ChapelDistribution.chpl"
    call_tmp27 = &((call_tmp26)->_v);
#line 302 "ChapelDistribution.chpl"
    call_tmp28 = atomic_flag_test_and_set_explicit(call_tmp27, default_argorder2);
#line 302 "ChapelDistribution.chpl"
    T = call_tmp28;
#line 302 "ChapelDistribution.chpl"
    while (T) {
#line 302 "ChapelDistribution.chpl"
      chpl_task_yield();
#line 302 "ChapelDistribution.chpl"
      chpl_check_nil(dom, INT64(302), INT64(28));
#line 302 "ChapelDistribution.chpl"
      call_tmp29 = &((dom)->_arrsLock);
#line 302 "ChapelDistribution.chpl"
      default_argorder3 = local_memory_order_seq_cst;
#line 302 "ChapelDistribution.chpl"
      chpl_check_nil(call_tmp29, INT64(302), INT64(28));
#line 302 "ChapelDistribution.chpl"
      call_tmp30 = &((call_tmp29)->_v);
#line 302 "ChapelDistribution.chpl"
      call_tmp31 = atomic_flag_test_and_set_explicit(call_tmp30, default_argorder3);
#line 302 "ChapelDistribution.chpl"
      T = call_tmp31;
#line 302 "ChapelDistribution.chpl"
    }
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(dom, INT64(302), INT64(28));
#line 302 "ChapelDistribution.chpl"
    call_tmp32 = &((dom)->_arrs);
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp32, INT64(302), INT64(28));
#line 302 "ChapelDistribution.chpl"
    remove_chpl(call_tmp32, this5, _ln, _fn);
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(dom, INT64(302), INT64(28));
#line 302 "ChapelDistribution.chpl"
    call_tmp33 = &((dom)->_arrsLock);
#line 302 "ChapelDistribution.chpl"
    default_argorder4 = local_memory_order_seq_cst;
#line 302 "ChapelDistribution.chpl"
    chpl_check_nil(call_tmp33, INT64(302), INT64(28));
#line 302 "ChapelDistribution.chpl"
    call_tmp34 = &((call_tmp33)->_v);
#line 302 "ChapelDistribution.chpl"
    atomic_flag_clear_explicit(call_tmp34, default_argorder4);
#line 303 "ChapelDistribution.chpl"
    chpl_check_nil(dom, INT64(303), INT64(28));
#line 303 "ChapelDistribution.chpl"
    call_tmp35 = destroyDom(dom, _ln, _fn);
#line 304 "ChapelDistribution.chpl"
    call_tmp36 = (call_tmp35 == INT64(0));
#line 304 "ChapelDistribution.chpl"
    if (call_tmp36) /* ZLINE: 304 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 304 "ChapelDistribution.chpl"
    {
#line 305 "ChapelDistribution.chpl"
      delete_tmp = dom;
#line 305 "ChapelDistribution.chpl"
      chpl_check_nil(dom, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
      _dynamic_dispatch_tmp_11 = (((object)(dom))->chpl__cid == chpl__cid_BaseRectangularDom);
#line 305 "ChapelDistribution.chpl"
      if (_dynamic_dispatch_tmp_11) /* ZLINE: 305 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 305 "ChapelDistribution.chpl"
      {
#line 305 "ChapelDistribution.chpl"
        _cast_tmp_11 = ((BaseRectangularDom)(dom));
#line 305 "ChapelDistribution.chpl"
        chpl_check_nil(_cast_tmp_11, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
        _dynamic_dispatch_tmp_12 = (((object)(_cast_tmp_11))->chpl__cid == chpl__cid_DefaultRectangularDom_1_int64_t_F);
#line 305 "ChapelDistribution.chpl"
        if (_dynamic_dispatch_tmp_12) /* ZLINE: 305 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 305 "ChapelDistribution.chpl"
        {
#line 305 "ChapelDistribution.chpl"
          _cast_tmp_12 = ((DefaultRectangularDom_1_int64_t_F)(_cast_tmp_11));
#line 305 "ChapelDistribution.chpl"
          _parent_destructor_tmp_11 = ((BaseRectangularDom)(_cast_tmp_12));
#line 305 "ChapelDistribution.chpl"
          _parent_destructor_tmp_12 = ((BaseDom)(_parent_destructor_tmp_11));
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_parent_destructor_tmp_12, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          _field_destructor_tmp_23 = &((_parent_destructor_tmp_12)->_arrsLock);
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_field_destructor_tmp_23, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          call_tmp37 = &((_field_destructor_tmp_23)->_v);
#line 305 "ChapelDistribution.chpl"
          atomic_destroy_flag(call_tmp37);
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_parent_destructor_tmp_12, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          _field_destructor_tmp_24 = &((_parent_destructor_tmp_12)->_domCnt);
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_field_destructor_tmp_24, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          _field_destructor_tmp_25 = &((_field_destructor_tmp_24)->_cnt);
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_field_destructor_tmp_25, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          call_tmp38 = &((_field_destructor_tmp_25)->_v);
#line 305 "ChapelDistribution.chpl"
          atomic_destroy_int_least64_t(call_tmp38);
#line 305 "ChapelDistribution.chpl"
        } else /* ZLINE: 305 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 305 "ChapelDistribution.chpl"
        {
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_cast_tmp_11, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          _dynamic_dispatch_tmp_13 = (((object)(_cast_tmp_11))->chpl__cid == chpl__cid_DefaultRectangularDom_1_int64_t_F);
#line 305 "ChapelDistribution.chpl"
          if (_dynamic_dispatch_tmp_13) /* ZLINE: 305 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 305 "ChapelDistribution.chpl"
          {
#line 305 "ChapelDistribution.chpl"
            _cast_tmp_13 = ((DefaultRectangularDom_1_int64_t_F)(_cast_tmp_11));
#line 305 "ChapelDistribution.chpl"
            _parent_destructor_tmp_13 = ((BaseRectangularDom)(_cast_tmp_13));
#line 305 "ChapelDistribution.chpl"
            _parent_destructor_tmp_14 = ((BaseDom)(_parent_destructor_tmp_13));
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_parent_destructor_tmp_14, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_26 = &((_parent_destructor_tmp_14)->_arrsLock);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_26, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            call_tmp39 = &((_field_destructor_tmp_26)->_v);
#line 305 "ChapelDistribution.chpl"
            atomic_destroy_flag(call_tmp39);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_parent_destructor_tmp_14, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_27 = &((_parent_destructor_tmp_14)->_domCnt);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_27, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_28 = &((_field_destructor_tmp_27)->_cnt);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_28, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            call_tmp40 = &((_field_destructor_tmp_28)->_v);
#line 305 "ChapelDistribution.chpl"
            atomic_destroy_int_least64_t(call_tmp40);
#line 305 "ChapelDistribution.chpl"
          } else /* ZLINE: 305 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 305 "ChapelDistribution.chpl"
          {
#line 305 "ChapelDistribution.chpl"
            _parent_destructor_tmp_15 = ((BaseDom)(_cast_tmp_11));
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_parent_destructor_tmp_15, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_29 = &((_parent_destructor_tmp_15)->_arrsLock);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_29, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            call_tmp41 = &((_field_destructor_tmp_29)->_v);
#line 305 "ChapelDistribution.chpl"
            atomic_destroy_flag(call_tmp41);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_parent_destructor_tmp_15, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_30 = &((_parent_destructor_tmp_15)->_domCnt);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_30, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_31 = &((_field_destructor_tmp_30)->_cnt);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_31, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            call_tmp42 = &((_field_destructor_tmp_31)->_v);
#line 305 "ChapelDistribution.chpl"
            atomic_destroy_int_least64_t(call_tmp42);
#line 305 "ChapelDistribution.chpl"
          }
#line 305 "ChapelDistribution.chpl"
        }
#line 305 "ChapelDistribution.chpl"
      } else /* ZLINE: 305 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 305 "ChapelDistribution.chpl"
      {
#line 305 "ChapelDistribution.chpl"
        chpl_check_nil(dom, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
        _dynamic_dispatch_tmp_14 = (((object)(dom))->chpl__cid == chpl__cid_DefaultRectangularDom_1_int64_t_F);
#line 305 "ChapelDistribution.chpl"
        if (_dynamic_dispatch_tmp_14) /* ZLINE: 305 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 305 "ChapelDistribution.chpl"
        {
#line 305 "ChapelDistribution.chpl"
          _cast_tmp_14 = ((DefaultRectangularDom_1_int64_t_F)(dom));
#line 305 "ChapelDistribution.chpl"
          _parent_destructor_tmp_16 = ((BaseRectangularDom)(_cast_tmp_14));
#line 305 "ChapelDistribution.chpl"
          _parent_destructor_tmp_17 = ((BaseDom)(_parent_destructor_tmp_16));
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_parent_destructor_tmp_17, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          _field_destructor_tmp_32 = &((_parent_destructor_tmp_17)->_arrsLock);
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_field_destructor_tmp_32, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          call_tmp43 = &((_field_destructor_tmp_32)->_v);
#line 305 "ChapelDistribution.chpl"
          atomic_destroy_flag(call_tmp43);
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_parent_destructor_tmp_17, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          _field_destructor_tmp_33 = &((_parent_destructor_tmp_17)->_domCnt);
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_field_destructor_tmp_33, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          _field_destructor_tmp_34 = &((_field_destructor_tmp_33)->_cnt);
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(_field_destructor_tmp_34, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          call_tmp44 = &((_field_destructor_tmp_34)->_v);
#line 305 "ChapelDistribution.chpl"
          atomic_destroy_int_least64_t(call_tmp44);
#line 305 "ChapelDistribution.chpl"
        } else /* ZLINE: 305 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 305 "ChapelDistribution.chpl"
        {
#line 305 "ChapelDistribution.chpl"
          chpl_check_nil(dom, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
          _dynamic_dispatch_tmp_15 = (((object)(dom))->chpl__cid == chpl__cid_DefaultRectangularDom_1_int64_t_F);
#line 305 "ChapelDistribution.chpl"
          if (_dynamic_dispatch_tmp_15) /* ZLINE: 305 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 305 "ChapelDistribution.chpl"
          {
#line 305 "ChapelDistribution.chpl"
            _cast_tmp_15 = ((DefaultRectangularDom_1_int64_t_F)(dom));
#line 305 "ChapelDistribution.chpl"
            _parent_destructor_tmp_18 = ((BaseRectangularDom)(_cast_tmp_15));
#line 305 "ChapelDistribution.chpl"
            _parent_destructor_tmp_19 = ((BaseDom)(_parent_destructor_tmp_18));
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_parent_destructor_tmp_19, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_35 = &((_parent_destructor_tmp_19)->_arrsLock);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_35, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            call_tmp45 = &((_field_destructor_tmp_35)->_v);
#line 305 "ChapelDistribution.chpl"
            atomic_destroy_flag(call_tmp45);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_parent_destructor_tmp_19, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_36 = &((_parent_destructor_tmp_19)->_domCnt);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_36, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_37 = &((_field_destructor_tmp_36)->_cnt);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_37, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            call_tmp46 = &((_field_destructor_tmp_37)->_v);
#line 305 "ChapelDistribution.chpl"
            atomic_destroy_int_least64_t(call_tmp46);
#line 305 "ChapelDistribution.chpl"
          } else /* ZLINE: 305 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelDistribution.chpl */
#line 305 "ChapelDistribution.chpl"
          {
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(delete_tmp, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_38 = &((delete_tmp)->_arrsLock);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_38, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            call_tmp47 = &((_field_destructor_tmp_38)->_v);
#line 305 "ChapelDistribution.chpl"
            atomic_destroy_flag(call_tmp47);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(delete_tmp, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_39 = &((delete_tmp)->_domCnt);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_39, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            _field_destructor_tmp_40 = &((_field_destructor_tmp_39)->_cnt);
#line 305 "ChapelDistribution.chpl"
            chpl_check_nil(_field_destructor_tmp_40, INT64(305), INT64(28));
#line 305 "ChapelDistribution.chpl"
            call_tmp48 = &((_field_destructor_tmp_40)->_v);
#line 305 "ChapelDistribution.chpl"
            atomic_destroy_int_least64_t(call_tmp48);
#line 305 "ChapelDistribution.chpl"
          }
#line 305 "ChapelDistribution.chpl"
        }
#line 305 "ChapelDistribution.chpl"
      }
#line 305 "ChapelDistribution.chpl"
      call_tmp49 = ((void*)(delete_tmp));
#line 305 "ChapelDistribution.chpl"
      chpl_here_free(call_tmp49, _ln, _fn);
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
static void dsiDestroyData(BaseArr this5, int64_t _ln, int32_t _fn) {
#line 311 "ChapelDistribution.chpl"
  return;
#line 311 "ChapelDistribution.chpl"
}

#line 311 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:313 */
#line 311 "ChapelDistribution.chpl"
static void dsiReallocate(BaseArr this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn) {
#line 311 "ChapelDistribution.chpl"
  string local__str_literal_1459;
#line 314 "ChapelDistribution.chpl"
  local__str_literal_1459 = _str_literal_1459;
#line 314 "ChapelDistribution.chpl"
  halt(&local__str_literal_1459, _ln, _fn);
#line 313 "ChapelDistribution.chpl"
  return;
#line 313 "ChapelDistribution.chpl"
}

#line 313 "ChapelDistribution.chpl"
/* ChapelDistribution.chpl:317 */
#line 313 "ChapelDistribution.chpl"
static void dsiPostReallocate(BaseArr this5) {
#line 317 "ChapelDistribution.chpl"
  return;
#line 317 "ChapelDistribution.chpl"
}


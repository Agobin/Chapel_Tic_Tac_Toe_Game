/* ChapelBase.chpl:23 */
static void chpl__init_ChapelBase(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl___EndCount_atomic_int64_int64_t this5 = NULL;
  int64_t call_tmp;
  c_void_ptr cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this6;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  c_void_ptr call_tmp2;
  chpl___EndCount_atomic_int64_int64_t this7 = NULL;
  int64_t call_tmp3;
  c_void_ptr cast_tmp2;
  atomic_int64 _init_class_tmp_2;
  atomic_int64 this8;
  atomic_int_least64_t ret2;
  atomic_int_least64_t type_tmp2;
  _ref_atomic_int_least64_t _ref_tmp_2 = NULL;
  atomic_int64 wrap_call_tmp2;
  c_void_ptr call_tmp4;
#line 23 "ChapelBase.chpl"
  if (chpl__init_ChapelBase_p) /* ZLINE: 23 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 23 "ChapelBase.chpl"
  {
#line 23 "ChapelBase.chpl"
    goto _exit_chpl__init_ChapelBase;
#line 23 "ChapelBase.chpl"
  }
#line 23 "ChapelBase.chpl"
  modFormatStr = "%*s\n";
#line 23 "ChapelBase.chpl"
  modStr = "ChapelBase";
#line 23 "ChapelBase.chpl"
  printModuleInit(modFormatStr, modStr, INT64(10), _ln, _fn);
#line 23 "ChapelBase.chpl"
  refIndentLevel = &moduleInitLevel;
#line 23 "ChapelBase.chpl"
  *(refIndentLevel) += INT64(1);
#line 23 "ChapelBase.chpl"
  chpl__init_ChapelBase_p = UINT8(true);
#line 23 "ChapelBase.chpl"
  {
#line 23 "ChapelBase.chpl"
    chpl__init_ChapelStringLiterals(_ln, _fn);
#line 23 "ChapelBase.chpl"
  }
#line 782 "ChapelBase.chpl"
  call_tmp = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
#line 782 "ChapelBase.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(2), _ln, _fn);
#line 782 "ChapelBase.chpl"
  this5 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
#line 782 "ChapelBase.chpl"
  ((object)(this5))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this5)->i = _init_class_tmp_;
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this5)->taskCnt = INT64(0);
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this5)->taskList = NULL;
#line 782 "ChapelBase.chpl"
  ret = type_tmp;
#line 782 "ChapelBase.chpl"
  _ref_tmp_ = &ret;
#line 782 "ChapelBase.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 782 "ChapelBase.chpl"
  (&this6)->_v = ret;
#line 782 "ChapelBase.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this6, _ln, _fn);
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this5)->i = wrap_call_tmp;
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this5)->taskCnt = INT64(0);
#line 782 "ChapelBase.chpl"
  call_tmp2 = ((c_void_ptr)(nil));
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this5)->taskList = call_tmp2;
#line 782 "ChapelBase.chpl"
  _construct__EndCount(&wrap_call_tmp, INT64(0), call_tmp2, this5, _ln, _fn);
#line 782 "ChapelBase.chpl"
  call_tmp3 = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
#line 782 "ChapelBase.chpl"
  cast_tmp2 = chpl_here_alloc(call_tmp3, INT16(2), _ln, _fn);
#line 782 "ChapelBase.chpl"
  this7 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp2));
#line 782 "ChapelBase.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this7, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this7)->i = _init_class_tmp_2;
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this7, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this7)->taskCnt = INT64(0);
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this7, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this7)->taskList = NULL;
#line 782 "ChapelBase.chpl"
  ret2 = type_tmp2;
#line 782 "ChapelBase.chpl"
  _ref_tmp_2 = &ret2;
#line 782 "ChapelBase.chpl"
  atomic_init_int_least64_t(_ref_tmp_2, INT64(0));
#line 782 "ChapelBase.chpl"
  (&this8)->_v = ret2;
#line 782 "ChapelBase.chpl"
  wrap_call_tmp2 = _construct_atomic_int64(ret2, &this8, _ln, _fn);
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this7, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this7)->i = wrap_call_tmp2;
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this7, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this7)->taskCnt = INT64(0);
#line 782 "ChapelBase.chpl"
  call_tmp4 = ((c_void_ptr)(nil));
#line 782 "ChapelBase.chpl"
  chpl_check_nil(this7, INT64(782), INT64(2));
#line 782 "ChapelBase.chpl"
  (this7)->taskList = call_tmp4;
#line 782 "ChapelBase.chpl"
  _construct__EndCount(&wrap_call_tmp2, INT64(0), call_tmp4, this7, _ln, _fn);
#line 23 "ChapelBase.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "ChapelBase.chpl"
  _exit_chpl__init_ChapelBase:;
#line 23 "ChapelBase.chpl"
  return;
#line 23 "ChapelBase.chpl"
}

#line 23 "ChapelBase.chpl"
/* ChapelBase.chpl:63 */
#line 23 "ChapelBase.chpl"
static void compilerAssert(void) {
#line 63 "ChapelBase.chpl"
  return;
#line 63 "ChapelBase.chpl"
}

#line 63 "ChapelBase.chpl"
/* ChapelBase.chpl:583 */
#line 63 "ChapelBase.chpl"
static void init_elts2(_ddata_locale x, int64_t s, int64_t _ln, int32_t _fn) {
#line 63 "ChapelBase.chpl"
  int64_t call_tmp;
#line 63 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 63 "ChapelBase.chpl"
  int64_t i;
#line 63 "ChapelBase.chpl"
  locale call_tmp2 = NULL;
#line 644 "ChapelBase.chpl"
  call_tmp = (s - INT64(1));
#line 644 "ChapelBase.chpl"
  _ic__F1_high = call_tmp;
#line 644 "ChapelBase.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp, INT64(1), INT64(0), call_tmp, UINT8(true), _ln, _fn);
#line 644 "ChapelBase.chpl"
  for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 645 "ChapelBase.chpl"
    call_tmp2 = ((locale)(nil));
#line 646 "ChapelBase.chpl"
    *(x + i) = call_tmp2;
#line 646 "ChapelBase.chpl"
  }
#line 583 "ChapelBase.chpl"
  return;
#line 583 "ChapelBase.chpl"
}

#line 583 "ChapelBase.chpl"
/* ChapelBase.chpl:583 */
#line 583 "ChapelBase.chpl"
static void init_elts5(_ddata_localesSignal x, int64_t s, int64_t _ln, int32_t _fn) {
#line 583 "ChapelBase.chpl"
  int64_t call_tmp;
#line 583 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 583 "ChapelBase.chpl"
  int64_t i;
#line 583 "ChapelBase.chpl"
  localesSignal call_tmp2 = NULL;
#line 644 "ChapelBase.chpl"
  call_tmp = (s - INT64(1));
#line 644 "ChapelBase.chpl"
  _ic__F1_high = call_tmp;
#line 644 "ChapelBase.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp, INT64(1), INT64(0), call_tmp, UINT8(true), _ln, _fn);
#line 644 "ChapelBase.chpl"
  for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 645 "ChapelBase.chpl"
    call_tmp2 = ((localesSignal)(nil));
#line 646 "ChapelBase.chpl"
    *(x + i) = call_tmp2;
#line 646 "ChapelBase.chpl"
  }
#line 583 "ChapelBase.chpl"
  return;
#line 583 "ChapelBase.chpl"
}

#line 583 "ChapelBase.chpl"
/* ChapelBase.chpl:583 */
#line 583 "ChapelBase.chpl"
static void init_elts(_ddata_int64_t x, int64_t s, int64_t _ln, int32_t _fn) {
#line 583 "ChapelBase.chpl"
  locale local_dummyLocale = NULL;
#line 583 "ChapelBase.chpl"
  int32_t local_c_sublocid_any;
#line 583 "ChapelBase.chpl"
  int64_t call_tmp;
#line 583 "ChapelBase.chpl"
  chpl_bool call_tmp2;
#line 583 "ChapelBase.chpl"
  chpl_bool T;
#line 583 "ChapelBase.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 583 "ChapelBase.chpl"
  locale call_tmp3 = NULL;
#line 583 "ChapelBase.chpl"
  object call_tmp4 = NULL;
#line 583 "ChapelBase.chpl"
  object call_tmp5 = NULL;
#line 583 "ChapelBase.chpl"
  chpl_bool call_tmp6;
#line 583 "ChapelBase.chpl"
  int64_t call_tmp7;
#line 583 "ChapelBase.chpl"
  range_int64_t_bounded_F call_tmp8;
#line 583 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 583 "ChapelBase.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 583 "ChapelBase.chpl"
  _ddata_int64_t _ic__F1_x1_tet = NULL;
#line 583 "ChapelBase.chpl"
  int64_t len;
#line 583 "ChapelBase.chpl"
  int64_t call_tmp9;
#line 583 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F this5 = NULL;
#line 583 "ChapelBase.chpl"
  int64_t numChunks;
#line 583 "ChapelBase.chpl"
  int64_t T2;
#line 583 "ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 583 "ChapelBase.chpl"
  int64_t call_tmp11;
#line 583 "ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 583 "ChapelBase.chpl"
  range_int64_t_bounded_F _ic__F0_this2;
#line 583 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F this6 = NULL;
#line 583 "ChapelBase.chpl"
  int64_t i;
#line 583 "ChapelBase.chpl"
  int64_t ret;
#line 583 "ChapelBase.chpl"
  int64_t end;
#line 583 "ChapelBase.chpl"
  int64_t ret2;
#line 583 "ChapelBase.chpl"
  _ddata_int64_t x2 = NULL;
#line 583 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
#line 583 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t this7 = NULL;
#line 583 "ChapelBase.chpl"
  int64_t call_tmp13;
#line 583 "ChapelBase.chpl"
  c_void_ptr cast_tmp;
#line 583 "ChapelBase.chpl"
  atomic_int64 _init_class_tmp_;
#line 583 "ChapelBase.chpl"
  atomic_int64 this8;
#line 583 "ChapelBase.chpl"
  atomic_int_least64_t ret3;
#line 583 "ChapelBase.chpl"
  atomic_int_least64_t type_tmp;
#line 583 "ChapelBase.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 583 "ChapelBase.chpl"
  atomic_int64 wrap_call_tmp;
#line 583 "ChapelBase.chpl"
  c_void_ptr call_tmp14;
#line 583 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp2 = NULL;
#line 583 "ChapelBase.chpl"
  int64_t call_tmp15;
#line 583 "ChapelBase.chpl"
  int64_t call_tmp16;
#line 583 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 583 "ChapelBase.chpl"
  int64_t i2;
#line 583 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F this9 = NULL;
#line 583 "ChapelBase.chpl"
  _ddata_int64_t x1_tet = NULL;
#line 583 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
#line 583 "ChapelBase.chpl"
  _class_localscoforall_fn _args_forcoforall_fn = NULL;
#line 583 "ChapelBase.chpl"
  int64_t chpl_here_alloc_size;
#line 583 "ChapelBase.chpl"
  c_void_ptr chpl_here_alloc_tmp;
#line 583 "ChapelBase.chpl"
  c_void_ptr _args_vforcoforall_fn;
#line 583 "ChapelBase.chpl"
  int64_t _args_sizecoforall_fn;
#line 583 "ChapelBase.chpl"
  _ref_c_void_ptr _taskListcoforall_fn = NULL;
#line 583 "ChapelBase.chpl"
  int64_t _taskListNodecoforall_fn;
#line 583 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t delete_tmp = NULL;
#line 583 "ChapelBase.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 583 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp17 = NULL;
#line 583 "ChapelBase.chpl"
  c_void_ptr call_tmp18;
#line 583 "ChapelBase.chpl"
  int64_t call_tmp19;
#line 583 "ChapelBase.chpl"
  int64_t _ic__F1_high2;
#line 583 "ChapelBase.chpl"
  int64_t i3;
#line 631 "ChapelBase.chpl"
  local_dummyLocale = dummyLocale;
#line 631 "ChapelBase.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 627 "ChapelBase.chpl"
  call_tmp = (s * INT64(8));
#line 629 "ChapelBase.chpl"
  call_tmp2 = (call_tmp > INT64(2097152));
#line 631 "ChapelBase.chpl"
  if (call_tmp2) /* ZLINE: 631 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 631 "ChapelBase.chpl"
  {
#line 631 "ChapelBase.chpl"
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 631 "ChapelBase.chpl"
    call_tmp3 = chpl_localeID_to_locale(&_autoCopy_tmp_, _ln, _fn);
#line 631 "ChapelBase.chpl"
    call_tmp4 = ((object)(call_tmp3));
#line 631 "ChapelBase.chpl"
    call_tmp5 = ((object)(local_dummyLocale));
#line 631 "ChapelBase.chpl"
    call_tmp6 = (call_tmp4 != call_tmp5);
#line 631 "ChapelBase.chpl"
    T = call_tmp6;
#line 631 "ChapelBase.chpl"
  } else /* ZLINE: 631 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 631 "ChapelBase.chpl"
  {
#line 631 "ChapelBase.chpl"
    T = UINT8(false);
#line 631 "ChapelBase.chpl"
  }
#line 631 "ChapelBase.chpl"
  if (T) /* ZLINE: 632 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 631 "ChapelBase.chpl"
  {
#line 632 "ChapelBase.chpl"
    call_tmp7 = (s - INT64(1));
#line 632 "ChapelBase.chpl"
    ret_to_arg_ref_tmp_ = &call_tmp8;
#line 632 "ChapelBase.chpl"
    chpl_build_bounded_range(INT64(0), call_tmp7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 632 "ChapelBase.chpl"
    _ic__F0_this = call_tmp8;
#line 632 "ChapelBase.chpl"
    _ic__F1_x1_tet = x;
#line 632 "ChapelBase.chpl"
    this5 = &_ic__F0_this;
#line 632 "ChapelBase.chpl"
    chpl_check_nil(this5, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
    call_tmp9 = length(this5, _ln, _fn);
#line 632 "ChapelBase.chpl"
    len = call_tmp9;
#line 632 "ChapelBase.chpl"
    call_tmp10 = chpl_task_getSerial();
#line 632 "ChapelBase.chpl"
    if (call_tmp10) /* ZLINE: 632 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 632 "ChapelBase.chpl"
    {
#line 632 "ChapelBase.chpl"
      T2 = INT64(1);
#line 632 "ChapelBase.chpl"
    } else /* ZLINE: 632 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 632 "ChapelBase.chpl"
    {
#line 632 "ChapelBase.chpl"
      call_tmp11 = _computeNumChunks_chpl2(call_tmp9, _ln, _fn);
#line 632 "ChapelBase.chpl"
      T2 = call_tmp11;
#line 632 "ChapelBase.chpl"
    }
#line 632 "ChapelBase.chpl"
    numChunks = T2;
#line 632 "ChapelBase.chpl"
    call_tmp12 = (T2 <= INT64(1));
#line 632 "ChapelBase.chpl"
    if (call_tmp12) /* ZLINE: 632 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 632 "ChapelBase.chpl"
    {
#line 632 "ChapelBase.chpl"
      _ic__F0_this2 = _ic__F0_this;
#line 632 "ChapelBase.chpl"
      this6 = &_ic__F0_this2;
#line 632 "ChapelBase.chpl"
      chpl_check_nil(this6, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
      checkIfIterWillOverflow(this6, UINT8(true), _ln, _fn);
#line 632 "ChapelBase.chpl"
      ret = (&_ic__F0_this2)->_low;
#line 632 "ChapelBase.chpl"
      ret2 = (&_ic__F0_this2)->_high;
#line 632 "ChapelBase.chpl"
      end = ret2;
#line 633 "ChapelBase.chpl"
      x2 = _ic__F1_x1_tet;
#line 632 "ChapelBase.chpl"
      for (i = ret; ((i <= end)); i += INT64(1)) {
#line 634 "ChapelBase.chpl"
        *(x2 + i) = INT64(0);
#line 634 "ChapelBase.chpl"
      }
#line 634 "ChapelBase.chpl"
    } else /* ZLINE: 632 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 634 "ChapelBase.chpl"
    {
#line 632 "ChapelBase.chpl"
      call_tmp13 = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
#line 632 "ChapelBase.chpl"
      cast_tmp = chpl_here_alloc(call_tmp13, INT16(2), _ln, _fn);
#line 632 "ChapelBase.chpl"
      this7 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
#line 632 "ChapelBase.chpl"
      ((object)(this7))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
#line 632 "ChapelBase.chpl"
      chpl_check_nil(this7, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
      (this7)->i = _init_class_tmp_;
#line 632 "ChapelBase.chpl"
      chpl_check_nil(this7, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
      (this7)->taskCnt = INT64(0);
#line 632 "ChapelBase.chpl"
      chpl_check_nil(this7, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
      (this7)->taskList = NULL;
#line 632 "ChapelBase.chpl"
      ret3 = type_tmp;
#line 632 "ChapelBase.chpl"
      _ref_tmp_ = &ret3;
#line 632 "ChapelBase.chpl"
      atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 632 "ChapelBase.chpl"
      (&this8)->_v = ret3;
#line 632 "ChapelBase.chpl"
      wrap_call_tmp = _construct_atomic_int64(ret3, &this8, _ln, _fn);
#line 632 "ChapelBase.chpl"
      chpl_check_nil(this7, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
      (this7)->i = wrap_call_tmp;
#line 632 "ChapelBase.chpl"
      chpl_check_nil(this7, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
      (this7)->taskCnt = INT64(0);
#line 632 "ChapelBase.chpl"
      call_tmp14 = ((c_void_ptr)(nil));
#line 632 "ChapelBase.chpl"
      chpl_check_nil(this7, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
      (this7)->taskList = call_tmp14;
#line 632 "ChapelBase.chpl"
      wrap_call_tmp2 = _construct__EndCount(&wrap_call_tmp, INT64(0), call_tmp14, this7, _ln, _fn);
#line 632 "ChapelBase.chpl"
      _coforallCount = wrap_call_tmp2;
#line 632 "ChapelBase.chpl"
      call_tmp15 = (INT64(0) + T2);
#line 632 "ChapelBase.chpl"
      call_tmp16 = (call_tmp15 - INT64(1));
#line 632 "ChapelBase.chpl"
      _ic__F1_high = call_tmp16;
#line 632 "ChapelBase.chpl"
      chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp16, INT64(1), INT64(0), call_tmp16, UINT8(true), _ln, _fn);
#line 632 "ChapelBase.chpl"
      for (i2 = INT64(0); ((i2 <= _ic__F1_high)); i2 += INT64(1)) {
#line 632 "ChapelBase.chpl"
        _upEndCount(_coforallCount, _ln, _fn);
#line 632 "ChapelBase.chpl"
        this9 = &_ic__F0_this;
#line 632 "ChapelBase.chpl"
        x1_tet = _ic__F1_x1_tet;
#line 632 "ChapelBase.chpl"
        rvfDerefTmp = _coforallCount;
#line 632 "ChapelBase.chpl"
        chpl_here_alloc_size = sizeof(chpl__class_localscoforall_fn_object);
#line 632 "ChapelBase.chpl"
        chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(37), _ln, _fn);
#line 632 "ChapelBase.chpl"
        _args_forcoforall_fn = ((_class_localscoforall_fn)(chpl_here_alloc_tmp));
#line 632 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_0_x1_tet = x1_tet;
#line 632 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_1_rvfDerefTmp = rvfDerefTmp;
#line 632 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_2_this = this9;
#line 632 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_3_len = len;
#line 632 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_4__yieldedIndex = i2;
#line 632 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_5_numChunks = numChunks;
#line 632 "ChapelBase.chpl"
        _args_vforcoforall_fn = ((void*)(_args_forcoforall_fn));
#line 632 "ChapelBase.chpl"
        _args_sizecoforall_fn = sizeof(chpl__class_localscoforall_fn_object);
#line 632 "ChapelBase.chpl"
        chpl_check_nil(rvfDerefTmp, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
        _taskListcoforall_fn = &((rvfDerefTmp)->taskList);
#line 632 "ChapelBase.chpl"
        _taskListNodecoforall_fn = chpl_nodeID;
#line 632 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_ln = _ln;
#line 632 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_fn = _fn;
#line 632 "ChapelBase.chpl"
        /*** wrapcoforall_fn ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(0), ((void*)(_args_vforcoforall_fn)), _taskListcoforall_fn, _taskListNodecoforall_fn, INT64(632), INT32(2));
#line 632 "ChapelBase.chpl"
      }
#line 632 "ChapelBase.chpl"
      _waitEndCount(_coforallCount, _ln, _fn);
#line 632 "ChapelBase.chpl"
      delete_tmp = _coforallCount;
#line 632 "ChapelBase.chpl"
      chpl_check_nil(delete_tmp, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
      _field_destructor_tmp_ = &((delete_tmp)->i);
#line 632 "ChapelBase.chpl"
      chpl_check_nil(_field_destructor_tmp_, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
      call_tmp17 = &((_field_destructor_tmp_)->_v);
#line 632 "ChapelBase.chpl"
      atomic_destroy_int_least64_t(call_tmp17);
#line 632 "ChapelBase.chpl"
      call_tmp18 = ((void*)(delete_tmp));
#line 632 "ChapelBase.chpl"
      chpl_here_free(call_tmp18, _ln, _fn);
#line 632 "ChapelBase.chpl"
    }
#line 632 "ChapelBase.chpl"
  } else /* ZLINE: 638 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 632 "ChapelBase.chpl"
  {
#line 638 "ChapelBase.chpl"
    call_tmp19 = (s - INT64(1));
#line 638 "ChapelBase.chpl"
    _ic__F1_high2 = call_tmp19;
#line 638 "ChapelBase.chpl"
    chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp19, INT64(1), INT64(0), call_tmp19, UINT8(true), _ln, _fn);
#line 638 "ChapelBase.chpl"
    for (i3 = INT64(0); ((i3 <= _ic__F1_high2)); i3 += INT64(1)) {
#line 640 "ChapelBase.chpl"
      *(x + i3) = INT64(0);
#line 640 "ChapelBase.chpl"
    }
#line 640 "ChapelBase.chpl"
  }
#line 583 "ChapelBase.chpl"
  return;
#line 583 "ChapelBase.chpl"
}

#line 583 "ChapelBase.chpl"
/* ChapelBase.chpl:583 */
#line 583 "ChapelBase.chpl"
static void init_elts4(_ddata_c_ptr_GtkWidget x, int64_t s, int64_t _ln, int32_t _fn) {
#line 583 "ChapelBase.chpl"
  int64_t call_tmp;
#line 583 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 583 "ChapelBase.chpl"
  int64_t i;
#line 583 "ChapelBase.chpl"
  c_ptr_GtkWidget call_tmp2 = NULL;
#line 644 "ChapelBase.chpl"
  call_tmp = (s - INT64(1));
#line 644 "ChapelBase.chpl"
  _ic__F1_high = call_tmp;
#line 644 "ChapelBase.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp, INT64(1), INT64(0), call_tmp, UINT8(true), _ln, _fn);
#line 644 "ChapelBase.chpl"
  for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 645 "ChapelBase.chpl"
    call_tmp2 = ((c_ptr_GtkWidget)(nil));
#line 646 "ChapelBase.chpl"
    *(x + i) = call_tmp2;
#line 646 "ChapelBase.chpl"
  }
#line 583 "ChapelBase.chpl"
  return;
#line 583 "ChapelBase.chpl"
}

#line 583 "ChapelBase.chpl"
/* ChapelBase.chpl:583 */
#line 583 "ChapelBase.chpl"
static void init_elts3(_ddata_string x, int64_t s, int64_t _ln, int32_t _fn) {
#line 583 "ChapelBase.chpl"
  int64_t call_tmp;
#line 583 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 583 "ChapelBase.chpl"
  int64_t i;
#line 583 "ChapelBase.chpl"
  string this5;
#line 583 "ChapelBase.chpl"
  c_ptr_uint8_t call_tmp2 = NULL;
#line 583 "ChapelBase.chpl"
  int32_t default_arglocale_id;
#line 583 "ChapelBase.chpl"
  string wrap_call_tmp;
#line 583 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 644 "ChapelBase.chpl"
  call_tmp = (s - INT64(1));
#line 644 "ChapelBase.chpl"
  _ic__F1_high = call_tmp;
#line 644 "ChapelBase.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp, INT64(1), INT64(0), call_tmp, UINT8(true), _ln, _fn);
#line 644 "ChapelBase.chpl"
  for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 645 "ChapelBase.chpl"
    (&this5)->len = INT64(0);
#line 645 "ChapelBase.chpl"
    (&this5)->_size = INT64(0);
#line 645 "ChapelBase.chpl"
    (&this5)->buff = nil;
#line 645 "ChapelBase.chpl"
    (&this5)->owned = UINT8(false);
#line 645 "ChapelBase.chpl"
    (&this5)->locale_id = INT32(0);
#line 645 "ChapelBase.chpl"
    (&this5)->len = INT64(0);
#line 645 "ChapelBase.chpl"
    (&this5)->_size = INT64(0);
#line 645 "ChapelBase.chpl"
    call_tmp2 = ((c_ptr_uint8_t)(nil));
#line 645 "ChapelBase.chpl"
    (&this5)->buff = call_tmp2;
#line 645 "ChapelBase.chpl"
    (&this5)->owned = UINT8(true);
#line 645 "ChapelBase.chpl"
    default_arglocale_id = chpl_nodeID;
#line 645 "ChapelBase.chpl"
    (&this5)->locale_id = default_arglocale_id;
#line 645 "ChapelBase.chpl"
    ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 645 "ChapelBase.chpl"
    _construct_string(INT64(0), INT64(0), call_tmp2, UINT8(true), default_arglocale_id, &this5, ret_to_arg_ref_tmp_, _ln, _fn);
#line 646 "ChapelBase.chpl"
    *(x + i) = wrap_call_tmp;
#line 646 "ChapelBase.chpl"
  }
#line 583 "ChapelBase.chpl"
  return;
#line 583 "ChapelBase.chpl"
}

#line 583 "ChapelBase.chpl"
/* ChapelBase.chpl:632 */
#line 583 "ChapelBase.chpl"
static void wrapcoforall_fn(_class_localscoforall_fn dummy_c) {
#line 583 "ChapelBase.chpl"
  int32_t _fn;
#line 583 "ChapelBase.chpl"
  int64_t _ln;
#line 583 "ChapelBase.chpl"
  _ddata_int64_t _0_x1_tet = NULL;
#line 583 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t _1_rvfDerefTmp = NULL;
#line 583 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F _2_this = NULL;
#line 583 "ChapelBase.chpl"
  int64_t _3_len;
#line 583 "ChapelBase.chpl"
  int64_t _4__yieldedIndex;
#line 583 "ChapelBase.chpl"
  int64_t _5_numChunks;
#line 632 "ChapelBase.chpl"
  _fn = (dummy_c)->_fn;
#line 632 "ChapelBase.chpl"
  _ln = (dummy_c)->_ln;
#line 632 "ChapelBase.chpl"
  chpl_check_nil(dummy_c, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
  _0_x1_tet = (dummy_c)->_0_x1_tet;
#line 632 "ChapelBase.chpl"
  chpl_check_nil(dummy_c, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
  _1_rvfDerefTmp = (dummy_c)->_1_rvfDerefTmp;
#line 632 "ChapelBase.chpl"
  chpl_check_nil(dummy_c, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
  _2_this = (dummy_c)->_2_this;
#line 632 "ChapelBase.chpl"
  chpl_check_nil(dummy_c, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
  _3_len = (dummy_c)->_3_len;
#line 632 "ChapelBase.chpl"
  chpl_check_nil(dummy_c, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
  _4__yieldedIndex = (dummy_c)->_4__yieldedIndex;
#line 632 "ChapelBase.chpl"
  chpl_check_nil(dummy_c, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
  _5_numChunks = (dummy_c)->_5_numChunks;
#line 632 "ChapelBase.chpl"
  coforall_fn(_0_x1_tet, _1_rvfDerefTmp, _2_this, _3_len, _4__yieldedIndex, _5_numChunks, _ln, _fn);
#line 632 "ChapelBase.chpl"
  chpl_here_free(((void*)(dummy_c)), _ln, _fn);
#line 632 "ChapelBase.chpl"
  return;
#line 632 "ChapelBase.chpl"
}

#line 632 "ChapelBase.chpl"
/* ChapelBase.chpl:632 */
#line 632 "ChapelBase.chpl"
static void coforall_fn(_ddata_int64_t x1_tet, chpl___EndCount_atomic_int64_int64_t _coforallCount, _ref_range_int64_t_bounded_F this5, int64_t len, int64_t chunk, int64_t numChunks, int64_t _ln, int32_t _fn) {
#line 632 "ChapelBase.chpl"
  _tuple_2_star_int64_t const_tmp;
#line 632 "ChapelBase.chpl"
  int64_t tmp_x1;
#line 632 "ChapelBase.chpl"
  int64_t tmp_x2;
#line 632 "ChapelBase.chpl"
  int64_t ret;
#line 632 "ChapelBase.chpl"
  int64_t ret2;
#line 632 "ChapelBase.chpl"
  int64_t ret3;
#line 632 "ChapelBase.chpl"
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
#line 632 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 632 "ChapelBase.chpl"
  int64_t i;
#line 632 "ChapelBase.chpl"
  _ddata_int64_t x = NULL;
#line 632 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
  ret = (this5)->_high;
#line 632 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
  ret2 = (this5)->_low;
#line 632 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(632), INT64(2));
#line 632 "ChapelBase.chpl"
  ret3 = (this5)->_low;
#line 632 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &const_tmp;
#line 632 "ChapelBase.chpl"
  _computeBlock_chpl(len, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_, _ln, _fn);
#line 632 "ChapelBase.chpl"
  tmp_x1 = *(const_tmp + INT64(0));
#line 632 "ChapelBase.chpl"
  tmp_x2 = *(const_tmp + INT64(1));
#line 632 "ChapelBase.chpl"
  _ic__F1_high = tmp_x2;
#line 632 "ChapelBase.chpl"
  chpl_checkIfRangeIterWillOverflow(tmp_x1, tmp_x2, INT64(1), tmp_x1, tmp_x2, UINT8(true), _ln, _fn);
#line 633 "ChapelBase.chpl"
  x = x1_tet;
#line 632 "ChapelBase.chpl"
  for (i = tmp_x1; ((i <= _ic__F1_high)); i += INT64(1)) {
#line 634 "ChapelBase.chpl"
    *(x + i) = INT64(0);
#line 634 "ChapelBase.chpl"
  }
#line 632 "ChapelBase.chpl"
  _downEndCount(_coforallCount, _ln, _fn);
#line 632 "ChapelBase.chpl"
  return;
#line 632 "ChapelBase.chpl"
}

#line 632 "ChapelBase.chpl"
/* ChapelBase.chpl:752 */
#line 632 "ChapelBase.chpl"
static chpl___EndCount_atomic_int64_int64_t _construct__EndCount(atomic_int64* const i, int64_t taskCnt, c_void_ptr taskList, chpl___EndCount_atomic_int64_int64_t meme, int64_t _ln, int32_t _fn) {
#line 632 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t this5 = NULL;
#line 632 "ChapelBase.chpl"
  object T = NULL;
#line 752 "ChapelBase.chpl"
  this5 = meme;
#line 752 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(752), INT64(2));
#line 752 "ChapelBase.chpl"
  T = &((this5)->super);
#line 752 "ChapelBase.chpl"
  _construct_object(T);
#line 755 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(755), INT64(2));
#line 755 "ChapelBase.chpl"
  (this5)->i = *(i);
#line 756 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(756), INT64(2));
#line 756 "ChapelBase.chpl"
  (this5)->taskCnt = taskCnt;
#line 757 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(757), INT64(2));
#line 757 "ChapelBase.chpl"
  (this5)->taskList = taskList;
#line 752 "ChapelBase.chpl"
  return this5;
#line 752 "ChapelBase.chpl"
}

#line 752 "ChapelBase.chpl"
/* ChapelBase.chpl:752 */
#line 752 "ChapelBase.chpl"
static void chpl__auto_destroy__EndCount(chpl___EndCount_atomic_int64_int64_t this5, int64_t _ln, int32_t _fn) {
#line 752 "ChapelBase.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 752 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 755 "ChapelBase.chpl"
  chpl_check_nil(this5, INT64(755), INT64(2));
#line 755 "ChapelBase.chpl"
  _field_destructor_tmp_ = &((this5)->i);
#line 755 "ChapelBase.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(755), INT64(2));
#line 755 "ChapelBase.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 755 "ChapelBase.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 752 "ChapelBase.chpl"
  return;
#line 752 "ChapelBase.chpl"
}

#line 752 "ChapelBase.chpl"
/* ChapelBase.chpl:796 */
#line 752 "ChapelBase.chpl"
static void _upEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, int32_t _fn) {
#line 752 "ChapelBase.chpl"
  memory_order local_memory_order_relaxed;
#line 752 "ChapelBase.chpl"
  int32_t local_c_sublocid_any;
#line 752 "ChapelBase.chpl"
  memory_order local_memory_order_release;
#line 752 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp = NULL;
#line 752 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 752 "ChapelBase.chpl"
  _ref_int64_t call_tmp3 = NULL;
#line 752 "ChapelBase.chpl"
  locale call_tmp4 = NULL;
#line 752 "ChapelBase.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 752 "ChapelBase.chpl"
  locale call_tmp5 = NULL;
#line 752 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp6 = NULL;
#line 752 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp7 = NULL;
#line 811 "ChapelBase.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 811 "ChapelBase.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 804 "ChapelBase.chpl"
  local_memory_order_release = memory_order_release;
#line 804 "ChapelBase.chpl"
  chpl_rmem_consist_fence(local_memory_order_release, _ln, _fn);
#line 806 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(806), INT64(2));
#line 806 "ChapelBase.chpl"
  call_tmp = &((e)->i);
#line 806 "ChapelBase.chpl"
  chpl_check_nil(call_tmp, INT64(806), INT64(2));
#line 806 "ChapelBase.chpl"
  call_tmp2 = &((call_tmp)->_v);
#line 806 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp2, INT64(1), local_memory_order_release);
#line 807 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(807), INT64(2));
#line 807 "ChapelBase.chpl"
  call_tmp3 = &((e)->taskCnt);
#line 807 "ChapelBase.chpl"
  *(call_tmp3) += INT64(1);
#line 811 "ChapelBase.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 811 "ChapelBase.chpl"
  call_tmp5 = chpl_localeID_to_locale(&_autoCopy_tmp_, _ln, _fn);
#line 811 "ChapelBase.chpl"
  call_tmp4 = call_tmp5;
#line 811 "ChapelBase.chpl"
  chpl_check_nil(call_tmp4, INT64(811), INT64(2));
#line 811 "ChapelBase.chpl"
  call_tmp6 = &((call_tmp4)->runningTaskCounter);
#line 811 "ChapelBase.chpl"
  chpl_check_nil(call_tmp6, INT64(811), INT64(2));
#line 811 "ChapelBase.chpl"
  call_tmp7 = &((call_tmp6)->_v);
#line 811 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp7, INT64(1), local_memory_order_relaxed);
#line 796 "ChapelBase.chpl"
  return;
#line 796 "ChapelBase.chpl"
}

#line 796 "ChapelBase.chpl"
/* ChapelBase.chpl:819 */
#line 796 "ChapelBase.chpl"
static void _downEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, int32_t _fn) {
#line 796 "ChapelBase.chpl"
  memory_order local_memory_order_release;
#line 796 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp = NULL;
#line 796 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 820 "ChapelBase.chpl"
  local_memory_order_release = memory_order_release;
#line 820 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(820), INT64(2));
#line 820 "ChapelBase.chpl"
  call_tmp = &((e)->i);
#line 820 "ChapelBase.chpl"
  chpl_check_nil(call_tmp, INT64(820), INT64(2));
#line 820 "ChapelBase.chpl"
  call_tmp2 = &((call_tmp)->_v);
#line 820 "ChapelBase.chpl"
  atomic_fetch_sub_explicit_int_least64_t(call_tmp2, INT64(1), local_memory_order_release);
#line 819 "ChapelBase.chpl"
  return;
#line 819 "ChapelBase.chpl"
}

#line 819 "ChapelBase.chpl"
/* ChapelBase.chpl:826 */
#line 819 "ChapelBase.chpl"
static void _waitEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, int32_t _fn) {
#line 819 "ChapelBase.chpl"
  memory_order local_memory_order_acquire;
#line 819 "ChapelBase.chpl"
  memory_order local_memory_order_relaxed;
#line 819 "ChapelBase.chpl"
  int32_t local_c_sublocid_any;
#line 819 "ChapelBase.chpl"
  _ref_c_void_ptr call_tmp = NULL;
#line 819 "ChapelBase.chpl"
  locale call_tmp2 = NULL;
#line 819 "ChapelBase.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 819 "ChapelBase.chpl"
  locale call_tmp3 = NULL;
#line 819 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp4 = NULL;
#line 819 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp5 = NULL;
#line 819 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp6 = NULL;
#line 819 "ChapelBase.chpl"
  chpl_bool T;
#line 819 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp7 = NULL;
#line 819 "ChapelBase.chpl"
  int64_t call_tmp8;
#line 819 "ChapelBase.chpl"
  chpl_bool call_tmp9;
#line 819 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp10 = NULL;
#line 819 "ChapelBase.chpl"
  int64_t call_tmp11;
#line 819 "ChapelBase.chpl"
  chpl_bool call_tmp12;
#line 819 "ChapelBase.chpl"
  int64_t call_tmp13;
#line 819 "ChapelBase.chpl"
  locale call_tmp14 = NULL;
#line 819 "ChapelBase.chpl"
  chpl_localeID_t _autoCopy_tmp_2;
#line 819 "ChapelBase.chpl"
  locale call_tmp15 = NULL;
#line 819 "ChapelBase.chpl"
  int64_t call_tmp16;
#line 819 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp17 = NULL;
#line 819 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp18 = NULL;
#line 836 "ChapelBase.chpl"
  local_memory_order_acquire = memory_order_acquire;
#line 833 "ChapelBase.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 833 "ChapelBase.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 828 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(828), INT64(2));
#line 828 "ChapelBase.chpl"
  call_tmp = &((e)->taskList);
#line 828 "ChapelBase.chpl"
  chpl_taskListExecute(call_tmp, _ln, _fn);
#line 833 "ChapelBase.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 833 "ChapelBase.chpl"
  call_tmp3 = chpl_localeID_to_locale(&_autoCopy_tmp_, _ln, _fn);
#line 833 "ChapelBase.chpl"
  call_tmp2 = call_tmp3;
#line 833 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(833), INT64(2));
#line 833 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp2)->runningTaskCounter);
#line 833 "ChapelBase.chpl"
  chpl_check_nil(call_tmp4, INT64(833), INT64(2));
#line 833 "ChapelBase.chpl"
  call_tmp5 = &((call_tmp4)->_v);
#line 833 "ChapelBase.chpl"
  atomic_fetch_sub_explicit_int_least64_t(call_tmp5, INT64(1), local_memory_order_relaxed);
#line 836 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(836), INT64(2));
#line 836 "ChapelBase.chpl"
  call_tmp6 = &((e)->i);
#line 836 "ChapelBase.chpl"
  chpl_check_nil(call_tmp6, INT64(836), INT64(2));
#line 836 "ChapelBase.chpl"
  call_tmp7 = &((call_tmp6)->_v);
#line 836 "ChapelBase.chpl"
  call_tmp8 = atomic_load_explicit_int_least64_t(call_tmp7, local_memory_order_relaxed);
#line 836 "ChapelBase.chpl"
  call_tmp9 = (call_tmp8 != INT64(0));
#line 836 "ChapelBase.chpl"
  T = call_tmp9;
#line 836 "ChapelBase.chpl"
  while (T) {
#line 836 "ChapelBase.chpl"
    chpl_task_yield();
#line 836 "ChapelBase.chpl"
    chpl_check_nil(call_tmp6, INT64(836), INT64(2));
#line 836 "ChapelBase.chpl"
    call_tmp10 = &((call_tmp6)->_v);
#line 836 "ChapelBase.chpl"
    call_tmp11 = atomic_load_explicit_int_least64_t(call_tmp10, local_memory_order_relaxed);
#line 836 "ChapelBase.chpl"
    call_tmp12 = (call_tmp11 != INT64(0));
#line 836 "ChapelBase.chpl"
    T = call_tmp12;
#line 836 "ChapelBase.chpl"
  }
#line 836 "ChapelBase.chpl"
  atomic_thread_fence(local_memory_order_acquire);
#line 839 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(839), INT64(2));
#line 839 "ChapelBase.chpl"
  call_tmp13 = (e)->taskCnt;
#line 841 "ChapelBase.chpl"
  _autoCopy_tmp_2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 841 "ChapelBase.chpl"
  call_tmp15 = chpl_localeID_to_locale(&_autoCopy_tmp_2, _ln, _fn);
#line 841 "ChapelBase.chpl"
  call_tmp14 = call_tmp15;
#line 841 "ChapelBase.chpl"
  call_tmp16 = (call_tmp13 - INT64(1));
#line 841 "ChapelBase.chpl"
  chpl_check_nil(call_tmp14, INT64(841), INT64(2));
#line 841 "ChapelBase.chpl"
  call_tmp17 = &((call_tmp14)->runningTaskCounter);
#line 841 "ChapelBase.chpl"
  chpl_check_nil(call_tmp17, INT64(841), INT64(2));
#line 841 "ChapelBase.chpl"
  call_tmp18 = &((call_tmp17)->_v);
#line 841 "ChapelBase.chpl"
  atomic_fetch_sub_explicit_int_least64_t(call_tmp18, call_tmp16, local_memory_order_relaxed);
#line 826 "ChapelBase.chpl"
  return;
#line 826 "ChapelBase.chpl"
}

#line 826 "ChapelBase.chpl"
/* ChapelBase.chpl:858 */
#line 826 "ChapelBase.chpl"
static void _waitEndCount2(chpl___EndCount_atomic_int64_int64_t _endCount, int64_t _ln, int32_t _fn) {
#line 860 "ChapelBase.chpl"
  _waitEndCount(_endCount, _ln, _fn);
#line 858 "ChapelBase.chpl"
  return;
#line 858 "ChapelBase.chpl"
}

#line 858 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 858 "ChapelBase.chpl"
static chpl_bool _command_line_cast(c_string x, int64_t _ln, int32_t _fn) {
#line 858 "ChapelBase.chpl"
  string call_tmp;
#line 858 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 858 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 858 "ChapelBase.chpl"
  chpl_bool call_tmp2;
#line 858 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  call_tmp2 = _cast2(&_autoCopy_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return call_tmp2;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static chpl_bool _command_line_cast11(c_string x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string call_tmp;
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  chpl_bool call_tmp2;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  call_tmp2 = _cast2(&_autoCopy_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return call_tmp2;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static void _command_line_cast2(c_string x, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  *(_retArg) = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  return;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static void _command_line_cast3(c_string x, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  *(_retArg) = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  return;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static void _command_line_cast4(c_string x, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  *(_retArg) = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  return;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static uint64_t _command_line_cast5(c_string x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string local__str_literal_302;
#line 864 "ChapelBase.chpl"
  string call_tmp;
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  uint64_t ret;
#line 864 "ChapelBase.chpl"
  string localX;
#line 864 "ChapelBase.chpl"
  string call_tmp2;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 864 "ChapelBase.chpl"
  int32_t coerce_tmp;
#line 864 "ChapelBase.chpl"
  chpl_bool call_tmp3;
#line 864 "ChapelBase.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 864 "ChapelBase.chpl"
  c_string call_tmp4;
#line 864 "ChapelBase.chpl"
  uint64_t call_tmp5;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 864 "ChapelBase.chpl"
  local__str_literal_302 = _str_literal_302;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 864 "ChapelBase.chpl"
  string2(&_autoCopy_tmp_, UINT8(false), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 864 "ChapelBase.chpl"
  localX = call_tmp2;
#line 864 "ChapelBase.chpl"
  coerce_tmp = (&localX)->locale_id;
#line 864 "ChapelBase.chpl"
  call_tmp3 = (coerce_tmp != chpl_nodeID);
#line 864 "ChapelBase.chpl"
  if (call_tmp3) /* ZLINE: 864 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 864 "ChapelBase.chpl"
  {
#line 864 "ChapelBase.chpl"
    halt(&local__str_literal_302, _ln, _fn);
#line 864 "ChapelBase.chpl"
  }
#line 864 "ChapelBase.chpl"
  coerce_tmp2 = (&localX)->buff;
#line 864 "ChapelBase.chpl"
  call_tmp4 = ((c_string)(coerce_tmp2));
#line 864 "ChapelBase.chpl"
  call_tmp5 = c_string_to_uint64_t(call_tmp4, _ln, _fn);
#line 864 "ChapelBase.chpl"
  ret = call_tmp5;
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &localX;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  goto _end__cast;
#line 864 "ChapelBase.chpl"
  _end__cast:;
#line 864 "ChapelBase.chpl"
  _ref_tmp_2 = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return ret;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static chpl_bool _command_line_cast7(c_string x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string call_tmp;
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  chpl_bool call_tmp2;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  call_tmp2 = _cast2(&_autoCopy_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return call_tmp2;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static int64_t _command_line_cast13(c_string x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string local__str_literal_302;
#line 864 "ChapelBase.chpl"
  string call_tmp;
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  int64_t ret;
#line 864 "ChapelBase.chpl"
  string localX;
#line 864 "ChapelBase.chpl"
  string call_tmp2;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 864 "ChapelBase.chpl"
  int32_t coerce_tmp;
#line 864 "ChapelBase.chpl"
  chpl_bool call_tmp3;
#line 864 "ChapelBase.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 864 "ChapelBase.chpl"
  c_string call_tmp4;
#line 864 "ChapelBase.chpl"
  int64_t call_tmp5;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 864 "ChapelBase.chpl"
  local__str_literal_302 = _str_literal_302;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 864 "ChapelBase.chpl"
  string2(&_autoCopy_tmp_, UINT8(false), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 864 "ChapelBase.chpl"
  localX = call_tmp2;
#line 864 "ChapelBase.chpl"
  coerce_tmp = (&localX)->locale_id;
#line 864 "ChapelBase.chpl"
  call_tmp3 = (coerce_tmp != chpl_nodeID);
#line 864 "ChapelBase.chpl"
  if (call_tmp3) /* ZLINE: 864 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 864 "ChapelBase.chpl"
  {
#line 864 "ChapelBase.chpl"
    halt(&local__str_literal_302, _ln, _fn);
#line 864 "ChapelBase.chpl"
  }
#line 864 "ChapelBase.chpl"
  coerce_tmp2 = (&localX)->buff;
#line 864 "ChapelBase.chpl"
  call_tmp4 = ((c_string)(coerce_tmp2));
#line 864 "ChapelBase.chpl"
  call_tmp5 = c_string_to_int64_t(call_tmp4, _ln, _fn);
#line 864 "ChapelBase.chpl"
  ret = call_tmp5;
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &localX;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  goto _end__cast;
#line 864 "ChapelBase.chpl"
  _end__cast:;
#line 864 "ChapelBase.chpl"
  _ref_tmp_2 = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return ret;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static int64_t _command_line_cast14(c_string x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string local__str_literal_302;
#line 864 "ChapelBase.chpl"
  string call_tmp;
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  int64_t ret;
#line 864 "ChapelBase.chpl"
  string localX;
#line 864 "ChapelBase.chpl"
  string call_tmp2;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 864 "ChapelBase.chpl"
  int32_t coerce_tmp;
#line 864 "ChapelBase.chpl"
  chpl_bool call_tmp3;
#line 864 "ChapelBase.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 864 "ChapelBase.chpl"
  c_string call_tmp4;
#line 864 "ChapelBase.chpl"
  int64_t call_tmp5;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 864 "ChapelBase.chpl"
  local__str_literal_302 = _str_literal_302;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 864 "ChapelBase.chpl"
  string2(&_autoCopy_tmp_, UINT8(false), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 864 "ChapelBase.chpl"
  localX = call_tmp2;
#line 864 "ChapelBase.chpl"
  coerce_tmp = (&localX)->locale_id;
#line 864 "ChapelBase.chpl"
  call_tmp3 = (coerce_tmp != chpl_nodeID);
#line 864 "ChapelBase.chpl"
  if (call_tmp3) /* ZLINE: 864 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 864 "ChapelBase.chpl"
  {
#line 864 "ChapelBase.chpl"
    halt(&local__str_literal_302, _ln, _fn);
#line 864 "ChapelBase.chpl"
  }
#line 864 "ChapelBase.chpl"
  coerce_tmp2 = (&localX)->buff;
#line 864 "ChapelBase.chpl"
  call_tmp4 = ((c_string)(coerce_tmp2));
#line 864 "ChapelBase.chpl"
  call_tmp5 = c_string_to_int64_t(call_tmp4, _ln, _fn);
#line 864 "ChapelBase.chpl"
  ret = call_tmp5;
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &localX;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  goto _end__cast;
#line 864 "ChapelBase.chpl"
  _end__cast:;
#line 864 "ChapelBase.chpl"
  _ref_tmp_2 = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return ret;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static int64_t _command_line_cast12(c_string x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string local__str_literal_302;
#line 864 "ChapelBase.chpl"
  string call_tmp;
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  int64_t ret;
#line 864 "ChapelBase.chpl"
  string localX;
#line 864 "ChapelBase.chpl"
  string call_tmp2;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 864 "ChapelBase.chpl"
  int32_t coerce_tmp;
#line 864 "ChapelBase.chpl"
  chpl_bool call_tmp3;
#line 864 "ChapelBase.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 864 "ChapelBase.chpl"
  c_string call_tmp4;
#line 864 "ChapelBase.chpl"
  int64_t call_tmp5;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 864 "ChapelBase.chpl"
  local__str_literal_302 = _str_literal_302;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 864 "ChapelBase.chpl"
  string2(&_autoCopy_tmp_, UINT8(false), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 864 "ChapelBase.chpl"
  localX = call_tmp2;
#line 864 "ChapelBase.chpl"
  coerce_tmp = (&localX)->locale_id;
#line 864 "ChapelBase.chpl"
  call_tmp3 = (coerce_tmp != chpl_nodeID);
#line 864 "ChapelBase.chpl"
  if (call_tmp3) /* ZLINE: 864 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 864 "ChapelBase.chpl"
  {
#line 864 "ChapelBase.chpl"
    halt(&local__str_literal_302, _ln, _fn);
#line 864 "ChapelBase.chpl"
  }
#line 864 "ChapelBase.chpl"
  coerce_tmp2 = (&localX)->buff;
#line 864 "ChapelBase.chpl"
  call_tmp4 = ((c_string)(coerce_tmp2));
#line 864 "ChapelBase.chpl"
  call_tmp5 = c_string_to_int64_t(call_tmp4, _ln, _fn);
#line 864 "ChapelBase.chpl"
  ret = call_tmp5;
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &localX;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  goto _end__cast;
#line 864 "ChapelBase.chpl"
  _end__cast:;
#line 864 "ChapelBase.chpl"
  _ref_tmp_2 = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return ret;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static chpl_bool _command_line_cast9(c_string x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string call_tmp;
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  chpl_bool call_tmp2;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  call_tmp2 = _cast2(&_autoCopy_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return call_tmp2;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static uint64_t _command_line_cast6(c_string x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string local__str_literal_302;
#line 864 "ChapelBase.chpl"
  string call_tmp;
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  uint64_t ret;
#line 864 "ChapelBase.chpl"
  string localX;
#line 864 "ChapelBase.chpl"
  string call_tmp2;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 864 "ChapelBase.chpl"
  int32_t coerce_tmp;
#line 864 "ChapelBase.chpl"
  chpl_bool call_tmp3;
#line 864 "ChapelBase.chpl"
  c_ptr_uint8_t coerce_tmp2 = NULL;
#line 864 "ChapelBase.chpl"
  c_string call_tmp4;
#line 864 "ChapelBase.chpl"
  uint64_t call_tmp5;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 864 "ChapelBase.chpl"
  local__str_literal_302 = _str_literal_302;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp2;
#line 864 "ChapelBase.chpl"
  string2(&_autoCopy_tmp_, UINT8(false), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 864 "ChapelBase.chpl"
  localX = call_tmp2;
#line 864 "ChapelBase.chpl"
  coerce_tmp = (&localX)->locale_id;
#line 864 "ChapelBase.chpl"
  call_tmp3 = (coerce_tmp != chpl_nodeID);
#line 864 "ChapelBase.chpl"
  if (call_tmp3) /* ZLINE: 864 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelBase.chpl */
#line 864 "ChapelBase.chpl"
  {
#line 864 "ChapelBase.chpl"
    halt(&local__str_literal_302, _ln, _fn);
#line 864 "ChapelBase.chpl"
  }
#line 864 "ChapelBase.chpl"
  coerce_tmp2 = (&localX)->buff;
#line 864 "ChapelBase.chpl"
  call_tmp4 = ((c_string)(coerce_tmp2));
#line 864 "ChapelBase.chpl"
  call_tmp5 = c_string_to_uint64_t(call_tmp4, _ln, _fn);
#line 864 "ChapelBase.chpl"
  ret = call_tmp5;
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &localX;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  goto _end__cast;
#line 864 "ChapelBase.chpl"
  _end__cast:;
#line 864 "ChapelBase.chpl"
  _ref_tmp_2 = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return ret;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static chpl_bool _command_line_cast8(c_string x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string call_tmp;
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  chpl_bool call_tmp2;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  call_tmp2 = _cast2(&_autoCopy_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return call_tmp2;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:864 */
#line 864 "ChapelBase.chpl"
static chpl_bool _command_line_cast10(c_string x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  string call_tmp;
#line 864 "ChapelBase.chpl"
  string _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  chpl_bool call_tmp2;
#line 864 "ChapelBase.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 864 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  _cast(x, ret_to_arg_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  call_tmp = _autoCopy_tmp_;
#line 864 "ChapelBase.chpl"
  call_tmp2 = _cast2(&_autoCopy_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  _ref_tmp_ = &call_tmp;
#line 864 "ChapelBase.chpl"
  chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 864 "ChapelBase.chpl"
  return call_tmp2;
#line 864 "ChapelBase.chpl"
}

#line 864 "ChapelBase.chpl"
/* ChapelBase.chpl:1011 */
#line 864 "ChapelBase.chpl"
static DefaultDist chpl__autoCopy(DefaultDist x, int64_t _ln, int32_t _fn) {
#line 864 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 864 "ChapelBase.chpl"
  DefaultDist ret = NULL;
#line 864 "ChapelBase.chpl"
  BaseDist coerce_tmp = NULL;
#line 864 "ChapelBase.chpl"
  BaseDist call_tmp = NULL;
#line 864 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 864 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 864 "ChapelBase.chpl"
  memory_order default_argorder;
#line 864 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1012 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1012 "ChapelBase.chpl"
  ret = x;
#line 1012 "ChapelBase.chpl"
  call_tmp = ((BaseDist)(ret));
#line 1012 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1012 "ChapelBase.chpl"
  compilerAssert();
#line 1012 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1012), INT64(2));
#line 1012 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_distCnt);
#line 1012 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1012), INT64(2));
#line 1012 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1012 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1012 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1012), INT64(2));
#line 1012 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1012 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1011 "ChapelBase.chpl"
  return x;
#line 1011 "ChapelBase.chpl"
}

#line 1011 "ChapelBase.chpl"
/* ChapelBase.chpl:1019 */
#line 1011 "ChapelBase.chpl"
static DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1011 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1011 "ChapelBase.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1011 "ChapelBase.chpl"
  BaseDom coerce_tmp = NULL;
#line 1011 "ChapelBase.chpl"
  BaseDom call_tmp = NULL;
#line 1011 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1011 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1011 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1011 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1020 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1020 "ChapelBase.chpl"
  ret = x;
#line 1020 "ChapelBase.chpl"
  call_tmp = ((BaseDom)(ret));
#line 1020 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1020 "ChapelBase.chpl"
  compilerAssert();
#line 1020 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1020), INT64(2));
#line 1020 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_domCnt);
#line 1020 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1020), INT64(2));
#line 1020 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1020 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1020 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1020), INT64(2));
#line 1020 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1020 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1019 "ChapelBase.chpl"
  return x;
#line 1019 "ChapelBase.chpl"
}

#line 1019 "ChapelBase.chpl"
/* ChapelBase.chpl:1027 */
#line 1019 "ChapelBase.chpl"
static DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy4(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1019 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1019 "ChapelBase.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 1019 "ChapelBase.chpl"
  BaseArr coerce_tmp = NULL;
#line 1019 "ChapelBase.chpl"
  BaseArr call_tmp = NULL;
#line 1019 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1019 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1019 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1019 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1028 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1028 "ChapelBase.chpl"
  ret = x;
#line 1028 "ChapelBase.chpl"
  call_tmp = ((BaseArr)(ret));
#line 1028 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1028 "ChapelBase.chpl"
  compilerAssert();
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_arrCnt);
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1028 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1028 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1027 "ChapelBase.chpl"
  return x;
#line 1027 "ChapelBase.chpl"
}

#line 1027 "ChapelBase.chpl"
/* ChapelBase.chpl:1027 */
#line 1027 "ChapelBase.chpl"
static DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy3(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1027 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1027 "ChapelBase.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
#line 1027 "ChapelBase.chpl"
  BaseArr coerce_tmp = NULL;
#line 1027 "ChapelBase.chpl"
  BaseArr call_tmp = NULL;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1027 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1028 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1028 "ChapelBase.chpl"
  ret = x;
#line 1028 "ChapelBase.chpl"
  call_tmp = ((BaseArr)(ret));
#line 1028 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1028 "ChapelBase.chpl"
  compilerAssert();
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_arrCnt);
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1028 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1028 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1027 "ChapelBase.chpl"
  return x;
#line 1027 "ChapelBase.chpl"
}

#line 1027 "ChapelBase.chpl"
/* ChapelBase.chpl:1027 */
#line 1027 "ChapelBase.chpl"
static DefaultRectangularArr_int64_t_1_int64_t_F chpl__autoCopy5(DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1027 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1027 "ChapelBase.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret = NULL;
#line 1027 "ChapelBase.chpl"
  BaseArr coerce_tmp = NULL;
#line 1027 "ChapelBase.chpl"
  BaseArr call_tmp = NULL;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1027 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1028 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1028 "ChapelBase.chpl"
  ret = x;
#line 1028 "ChapelBase.chpl"
  call_tmp = ((BaseArr)(ret));
#line 1028 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1028 "ChapelBase.chpl"
  compilerAssert();
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_arrCnt);
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1028 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1028 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1027 "ChapelBase.chpl"
  return x;
#line 1027 "ChapelBase.chpl"
}

#line 1027 "ChapelBase.chpl"
/* ChapelBase.chpl:1027 */
#line 1027 "ChapelBase.chpl"
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F chpl__autoCopy7(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1027 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1027 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret = NULL;
#line 1027 "ChapelBase.chpl"
  BaseArr coerce_tmp = NULL;
#line 1027 "ChapelBase.chpl"
  BaseArr call_tmp = NULL;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1027 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1028 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1028 "ChapelBase.chpl"
  ret = x;
#line 1028 "ChapelBase.chpl"
  call_tmp = ((BaseArr)(ret));
#line 1028 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1028 "ChapelBase.chpl"
  compilerAssert();
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_arrCnt);
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1028 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1028 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1027 "ChapelBase.chpl"
  return x;
#line 1027 "ChapelBase.chpl"
}

#line 1027 "ChapelBase.chpl"
/* ChapelBase.chpl:1027 */
#line 1027 "ChapelBase.chpl"
static DefaultRectangularArr_string_1_int64_t_F chpl__autoCopy6(DefaultRectangularArr_string_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1027 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1027 "ChapelBase.chpl"
  DefaultRectangularArr_string_1_int64_t_F ret = NULL;
#line 1027 "ChapelBase.chpl"
  BaseArr coerce_tmp = NULL;
#line 1027 "ChapelBase.chpl"
  BaseArr call_tmp = NULL;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1027 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1027 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1028 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1028 "ChapelBase.chpl"
  ret = x;
#line 1028 "ChapelBase.chpl"
  call_tmp = ((BaseArr)(ret));
#line 1028 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1028 "ChapelBase.chpl"
  compilerAssert();
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_arrCnt);
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1028 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1028 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1028), INT64(2));
#line 1028 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1028 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1027 "ChapelBase.chpl"
  return x;
#line 1027 "ChapelBase.chpl"
}

#line 1027 "ChapelBase.chpl"
/* ChapelBase.chpl:1072 */
#line 1027 "ChapelBase.chpl"
static void chpl__autoDestroy(DefaultDist x, int64_t _ln, int32_t _fn) {
#line 1073 "ChapelBase.chpl"
  chpl___TILDE__distribution(x, _ln, _fn);
#line 1072 "ChapelBase.chpl"
  return;
#line 1072 "ChapelBase.chpl"
}

#line 1072 "ChapelBase.chpl"
/* ChapelBase.chpl:1077 */
#line 1072 "ChapelBase.chpl"
static void chpl__autoDestroy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1078 "ChapelBase.chpl"
  chpl___TILDE__domain(x, _ln, _fn);
#line 1077 "ChapelBase.chpl"
  return;
#line 1077 "ChapelBase.chpl"
}

#line 1077 "ChapelBase.chpl"
/* ChapelBase.chpl:1082 */
#line 1077 "ChapelBase.chpl"
static void chpl__autoDestroy6(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1083 "ChapelBase.chpl"
  chpl___TILDE__array(x, _ln, _fn);
#line 1082 "ChapelBase.chpl"
  return;
#line 1082 "ChapelBase.chpl"
}

#line 1082 "ChapelBase.chpl"
/* ChapelBase.chpl:1082 */
#line 1082 "ChapelBase.chpl"
static void chpl__autoDestroy5(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1083 "ChapelBase.chpl"
  chpl___TILDE__array2(x, _ln, _fn);
#line 1082 "ChapelBase.chpl"
  return;
#line 1082 "ChapelBase.chpl"
}

#line 1082 "ChapelBase.chpl"
/* ChapelBase.chpl:1082 */
#line 1082 "ChapelBase.chpl"
static void chpl__autoDestroy4(DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1083 "ChapelBase.chpl"
  chpl___TILDE__array4(x, _ln, _fn);
#line 1082 "ChapelBase.chpl"
  return;
#line 1082 "ChapelBase.chpl"
}

#line 1082 "ChapelBase.chpl"
/* ChapelBase.chpl:1082 */
#line 1082 "ChapelBase.chpl"
static void chpl__autoDestroy3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F x, int64_t _ln, int32_t _fn) {
#line 1083 "ChapelBase.chpl"
  chpl___TILDE__array3(x, _ln, _fn);
#line 1082 "ChapelBase.chpl"
  return;
#line 1082 "ChapelBase.chpl"
}


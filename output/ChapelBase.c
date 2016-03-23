/* ChapelBase.chpl:23 */
static void chpl__init_ChapelBase(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl___EndCount_atomic_int64_int64_t this6 = NULL;
  int64_t call_tmp;
  chpl_opaque cast_tmp;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this7;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  chpl_task_list_p ret2;
  chpl___EndCount_atomic_int64_int64_t this8 = NULL;
  int64_t call_tmp2;
  chpl_opaque cast_tmp2;
  atomic_int64 _init_class_tmp_2;
  atomic_int64 this9;
  atomic_int_least64_t ret3;
  atomic_int_least64_t type_tmp2;
  _ref_atomic_int_least64_t _ref_tmp_2 = NULL;
  atomic_int64 wrap_call_tmp2;
  chpl_task_list_p ret4;
#line 23 "ChapelBase.chpl"
  if (chpl__init_ChapelBase_p) /* ZLINE: 23 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl */
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
  chpl__init_ChapelBase_p = true;
#line 861 "ChapelBase.chpl"
  call_tmp = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
#line 861 "ChapelBase.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(1), _ln, _fn);
#line 861 "ChapelBase.chpl"
  this6 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
#line 861 "ChapelBase.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this6)->i = _init_class_tmp_;
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this6)->taskCnt = INT64(0);
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this6)->taskList = NULL;
#line 861 "ChapelBase.chpl"
  ret = type_tmp;
#line 861 "ChapelBase.chpl"
  _ref_tmp_ = &ret;
#line 861 "ChapelBase.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 861 "ChapelBase.chpl"
  (&this7)->_v = ret;
#line 861 "ChapelBase.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this7, _ln, _fn);
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this6)->i = wrap_call_tmp;
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this6)->taskCnt = INT64(0);
#line 861 "ChapelBase.chpl"
  ret2 = NULL;
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this6)->taskList = ret2;
#line 861 "ChapelBase.chpl"
  _construct__EndCount(&wrap_call_tmp, INT64(0), ret2, this6, _ln, _fn);
#line 861 "ChapelBase.chpl"
  call_tmp2 = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
#line 861 "ChapelBase.chpl"
  cast_tmp2 = chpl_here_alloc(call_tmp2, INT16(1), _ln, _fn);
#line 861 "ChapelBase.chpl"
  this8 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp2));
#line 861 "ChapelBase.chpl"
  ((object)(this8))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this8, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this8)->i = _init_class_tmp_2;
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this8, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this8)->taskCnt = INT64(0);
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this8, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this8)->taskList = NULL;
#line 861 "ChapelBase.chpl"
  ret3 = type_tmp2;
#line 861 "ChapelBase.chpl"
  _ref_tmp_2 = &ret3;
#line 861 "ChapelBase.chpl"
  atomic_init_int_least64_t(_ref_tmp_2, INT64(0));
#line 861 "ChapelBase.chpl"
  (&this9)->_v = ret3;
#line 861 "ChapelBase.chpl"
  wrap_call_tmp2 = _construct_atomic_int64(ret3, &this9, _ln, _fn);
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this8, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this8)->i = wrap_call_tmp2;
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this8, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this8)->taskCnt = INT64(0);
#line 861 "ChapelBase.chpl"
  ret4 = NULL;
#line 861 "ChapelBase.chpl"
  chpl_check_nil(this8, INT64(861), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 861 "ChapelBase.chpl"
  (this8)->taskList = ret4;
#line 861 "ChapelBase.chpl"
  _construct__EndCount(&wrap_call_tmp2, INT64(0), ret4, this8, _ln, _fn);
#line 23 "ChapelBase.chpl"
  *(refIndentLevel) -= INT64(1);
#line 23 "ChapelBase.chpl"
  _exit_chpl__init_ChapelBase:;
#line 23 "ChapelBase.chpl"
  return;
#line 23 "ChapelBase.chpl"
}

#line 23 "ChapelBase.chpl"
/* ChapelBase.chpl:182 */
#line 23 "ChapelBase.chpl"
static void compilerAssert(void) {
#line 182 "ChapelBase.chpl"
  return;
#line 182 "ChapelBase.chpl"
}

#line 182 "ChapelBase.chpl"
/* ChapelBase.chpl:669 */
#line 182 "ChapelBase.chpl"
static void init_elts2(_ddata_locale x, int64_t s, int64_t _ln, c_string _fn) {
#line 182 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 182 "ChapelBase.chpl"
  int64_t i;
#line 182 "ChapelBase.chpl"
  locale call_tmp = NULL;
#line 182 "ChapelBase.chpl"
  int64_t call_tmp2;
#line 724 "ChapelBase.chpl"
  _ic__F1_high = s;
#line 724 "ChapelBase.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), s, INT64(1), INT64(1), s, true, _ln, _fn);
#line 724 "ChapelBase.chpl"
  for (i = INT64(1); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 725 "ChapelBase.chpl"
    call_tmp = ((locale)(nil));
#line 726 "ChapelBase.chpl"
    call_tmp2 = (i - INT64(1));
#line 726 "ChapelBase.chpl"
    *(x + call_tmp2) = call_tmp;
#line 726 "ChapelBase.chpl"
  }
#line 669 "ChapelBase.chpl"
  return;
#line 669 "ChapelBase.chpl"
}

#line 669 "ChapelBase.chpl"
/* ChapelBase.chpl:669 */
#line 669 "ChapelBase.chpl"
static void init_elts(_ddata_localesSignal x, int64_t s, int64_t _ln, c_string _fn) {
#line 669 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 669 "ChapelBase.chpl"
  int64_t i;
#line 669 "ChapelBase.chpl"
  localesSignal call_tmp = NULL;
#line 669 "ChapelBase.chpl"
  int64_t call_tmp2;
#line 724 "ChapelBase.chpl"
  _ic__F1_high = s;
#line 724 "ChapelBase.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), s, INT64(1), INT64(1), s, true, _ln, _fn);
#line 724 "ChapelBase.chpl"
  for (i = INT64(1); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 725 "ChapelBase.chpl"
    call_tmp = ((localesSignal)(nil));
#line 726 "ChapelBase.chpl"
    call_tmp2 = (i - INT64(1));
#line 726 "ChapelBase.chpl"
    *(x + call_tmp2) = call_tmp;
#line 726 "ChapelBase.chpl"
  }
#line 669 "ChapelBase.chpl"
  return;
#line 669 "ChapelBase.chpl"
}

#line 669 "ChapelBase.chpl"
/* ChapelBase.chpl:669 */
#line 669 "ChapelBase.chpl"
static void init_elts4(_ddata_int64_t x, int64_t s, int64_t _ln, c_string _fn) {
#line 669 "ChapelBase.chpl"
  locale local_dummyLocale = NULL;
#line 669 "ChapelBase.chpl"
  int32_t local_c_sublocid_any;
#line 669 "ChapelBase.chpl"
  int64_t call_tmp;
#line 669 "ChapelBase.chpl"
  chpl_bool call_tmp2;
#line 669 "ChapelBase.chpl"
  chpl_bool T;
#line 669 "ChapelBase.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 669 "ChapelBase.chpl"
  chpl_localeID_t call_tmp3;
#line 669 "ChapelBase.chpl"
  chpl_localeID_t call_tmp4;
#line 669 "ChapelBase.chpl"
  locale call_tmp5 = NULL;
#line 669 "ChapelBase.chpl"
  object call_tmp6 = NULL;
#line 669 "ChapelBase.chpl"
  object call_tmp7 = NULL;
#line 669 "ChapelBase.chpl"
  chpl_bool call_tmp8;
#line 669 "ChapelBase.chpl"
  range_int64_t_bounded_F call_tmp9;
#line 669 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 669 "ChapelBase.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 669 "ChapelBase.chpl"
  _ddata_int64_t _ic__F1_x1_tet = NULL;
#line 669 "ChapelBase.chpl"
  int64_t len;
#line 669 "ChapelBase.chpl"
  int64_t call_tmp10;
#line 669 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F this6 = NULL;
#line 669 "ChapelBase.chpl"
  int64_t numChunks;
#line 669 "ChapelBase.chpl"
  int64_t T2;
#line 669 "ChapelBase.chpl"
  chpl_bool call_tmp11;
#line 669 "ChapelBase.chpl"
  int64_t call_tmp12;
#line 669 "ChapelBase.chpl"
  chpl_bool call_tmp13;
#line 669 "ChapelBase.chpl"
  range_int64_t_bounded_F _ic__F0_this2;
#line 669 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F this7 = NULL;
#line 669 "ChapelBase.chpl"
  int64_t i;
#line 669 "ChapelBase.chpl"
  int64_t ret;
#line 669 "ChapelBase.chpl"
  int64_t end;
#line 669 "ChapelBase.chpl"
  int64_t ret2;
#line 669 "ChapelBase.chpl"
  _ddata_int64_t x2 = NULL;
#line 669 "ChapelBase.chpl"
  int64_t call_tmp14;
#line 669 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t _coforallCount = NULL;
#line 669 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t this8 = NULL;
#line 669 "ChapelBase.chpl"
  int64_t call_tmp15;
#line 669 "ChapelBase.chpl"
  chpl_opaque cast_tmp;
#line 669 "ChapelBase.chpl"
  atomic_int64 _init_class_tmp_;
#line 669 "ChapelBase.chpl"
  atomic_int64 this9;
#line 669 "ChapelBase.chpl"
  atomic_int_least64_t ret3;
#line 669 "ChapelBase.chpl"
  atomic_int_least64_t type_tmp;
#line 669 "ChapelBase.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 669 "ChapelBase.chpl"
  atomic_int64 wrap_call_tmp;
#line 669 "ChapelBase.chpl"
  chpl_task_list_p ret4;
#line 669 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp2 = NULL;
#line 669 "ChapelBase.chpl"
  range_int64_t_boundedLow_F call_tmp16;
#line 669 "ChapelBase.chpl"
  _ref_range_int64_t_boundedLow_F ret_to_arg_ref_tmp_2 = NULL;
#line 669 "ChapelBase.chpl"
  range_int64_t_bounded_F call_tmp17;
#line 669 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 669 "ChapelBase.chpl"
  range_int64_t_bounded_F _ic__F0_this3;
#line 669 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F this10 = NULL;
#line 669 "ChapelBase.chpl"
  int64_t i2;
#line 669 "ChapelBase.chpl"
  int64_t ret5;
#line 669 "ChapelBase.chpl"
  int64_t end2;
#line 669 "ChapelBase.chpl"
  int64_t ret6;
#line 669 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F this11 = NULL;
#line 669 "ChapelBase.chpl"
  _ddata_int64_t x1_tet = NULL;
#line 669 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t rvfDerefTmp = NULL;
#line 669 "ChapelBase.chpl"
  _class_localscoforall_fn _args_forcoforall_fn = NULL;
#line 669 "ChapelBase.chpl"
  int64_t chpl_here_alloc_size;
#line 669 "ChapelBase.chpl"
  chpl_opaque chpl_here_alloc_tmp;
#line 669 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t delete_tmp = NULL;
#line 669 "ChapelBase.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 669 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp18 = NULL;
#line 669 "ChapelBase.chpl"
  chpl_opaque call_tmp19;
#line 669 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 669 "ChapelBase.chpl"
  int64_t i3;
#line 669 "ChapelBase.chpl"
  int64_t call_tmp20;
#line 711 "ChapelBase.chpl"
  local_dummyLocale = dummyLocale;
#line 711 "ChapelBase.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 707 "ChapelBase.chpl"
  call_tmp = (s * INT64(8));
#line 709 "ChapelBase.chpl"
  call_tmp2 = (call_tmp > INT64(2097152));
#line 711 "ChapelBase.chpl"
  if (call_tmp2) /* ZLINE: 711 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl */
#line 711 "ChapelBase.chpl"
  {
#line 711 "ChapelBase.chpl"
    _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 711 "ChapelBase.chpl"
    call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
#line 711 "ChapelBase.chpl"
    call_tmp4 = chpl__initCopy_chpl_rt_localeID_t(call_tmp3);
#line 711 "ChapelBase.chpl"
    call_tmp5 = chpl_localeID_to_locale(&call_tmp4, _ln, _fn);
#line 711 "ChapelBase.chpl"
    call_tmp6 = ((object)(call_tmp5));
#line 711 "ChapelBase.chpl"
    call_tmp7 = ((object)(local_dummyLocale));
#line 711 "ChapelBase.chpl"
    call_tmp8 = (call_tmp6 != call_tmp7);
#line 711 "ChapelBase.chpl"
    T = call_tmp8;
#line 711 "ChapelBase.chpl"
  } else /* ZLINE: 711 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl */
#line 711 "ChapelBase.chpl"
  {
#line 711 "ChapelBase.chpl"
    T = false;
#line 711 "ChapelBase.chpl"
  }
#line 711 "ChapelBase.chpl"
  if (T) /* ZLINE: 712 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl */
#line 711 "ChapelBase.chpl"
  {
#line 712 "ChapelBase.chpl"
    ret_to_arg_ref_tmp_ = &call_tmp9;
#line 712 "ChapelBase.chpl"
    chpl_build_bounded_range(INT64(1), s, ret_to_arg_ref_tmp_, _ln, _fn);
#line 712 "ChapelBase.chpl"
    _ic__F0_this = call_tmp9;
#line 712 "ChapelBase.chpl"
    _ic__F1_x1_tet = x;
#line 712 "ChapelBase.chpl"
    this6 = &_ic__F0_this;
#line 712 "ChapelBase.chpl"
    chpl_check_nil(this6, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
    call_tmp10 = length(this6, _ln, _fn);
#line 712 "ChapelBase.chpl"
    len = call_tmp10;
#line 712 "ChapelBase.chpl"
    call_tmp11 = chpl_task_getSerial();
#line 712 "ChapelBase.chpl"
    if (call_tmp11) /* ZLINE: 712 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl */
#line 712 "ChapelBase.chpl"
    {
#line 712 "ChapelBase.chpl"
      T2 = INT64(1);
#line 712 "ChapelBase.chpl"
    } else /* ZLINE: 712 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl */
#line 712 "ChapelBase.chpl"
    {
#line 712 "ChapelBase.chpl"
      call_tmp12 = _computeNumChunks_chpl2(call_tmp10, _ln, _fn);
#line 712 "ChapelBase.chpl"
      T2 = call_tmp12;
#line 712 "ChapelBase.chpl"
    }
#line 712 "ChapelBase.chpl"
    numChunks = T2;
#line 712 "ChapelBase.chpl"
    call_tmp13 = (T2 <= INT64(1));
#line 712 "ChapelBase.chpl"
    if (call_tmp13) /* ZLINE: 712 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl */
#line 712 "ChapelBase.chpl"
    {
#line 712 "ChapelBase.chpl"
      _ic__F0_this2 = _ic__F0_this;
#line 712 "ChapelBase.chpl"
      this7 = &_ic__F0_this2;
#line 712 "ChapelBase.chpl"
      chpl_check_nil(this7, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      checkIfIterWillOverflow(this7, true, _ln, _fn);
#line 712 "ChapelBase.chpl"
      ret = (&_ic__F0_this2)->_low;
#line 712 "ChapelBase.chpl"
      ret2 = (&_ic__F0_this2)->_high;
#line 712 "ChapelBase.chpl"
      end = ret2;
#line 713 "ChapelBase.chpl"
      x2 = _ic__F1_x1_tet;
#line 712 "ChapelBase.chpl"
      for (i = ret; ((i <= end)); i += INT64(1)) {
#line 714 "ChapelBase.chpl"
        call_tmp14 = (i - INT64(1));
#line 714 "ChapelBase.chpl"
        *(x2 + call_tmp14) = INT64(0);
#line 714 "ChapelBase.chpl"
      }
#line 714 "ChapelBase.chpl"
    } else /* ZLINE: 712 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl */
#line 714 "ChapelBase.chpl"
    {
#line 712 "ChapelBase.chpl"
      call_tmp15 = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
#line 712 "ChapelBase.chpl"
      cast_tmp = chpl_here_alloc(call_tmp15, INT16(1), _ln, _fn);
#line 712 "ChapelBase.chpl"
      this8 = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp));
#line 712 "ChapelBase.chpl"
      ((object)(this8))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
#line 712 "ChapelBase.chpl"
      chpl_check_nil(this8, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      (this8)->i = _init_class_tmp_;
#line 712 "ChapelBase.chpl"
      chpl_check_nil(this8, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      (this8)->taskCnt = INT64(0);
#line 712 "ChapelBase.chpl"
      chpl_check_nil(this8, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      (this8)->taskList = NULL;
#line 712 "ChapelBase.chpl"
      ret3 = type_tmp;
#line 712 "ChapelBase.chpl"
      _ref_tmp_ = &ret3;
#line 712 "ChapelBase.chpl"
      atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 712 "ChapelBase.chpl"
      (&this9)->_v = ret3;
#line 712 "ChapelBase.chpl"
      wrap_call_tmp = _construct_atomic_int64(ret3, &this9, _ln, _fn);
#line 712 "ChapelBase.chpl"
      chpl_check_nil(this8, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      (this8)->i = wrap_call_tmp;
#line 712 "ChapelBase.chpl"
      chpl_check_nil(this8, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      (this8)->taskCnt = INT64(0);
#line 712 "ChapelBase.chpl"
      ret4 = NULL;
#line 712 "ChapelBase.chpl"
      chpl_check_nil(this8, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      (this8)->taskList = ret4;
#line 712 "ChapelBase.chpl"
      wrap_call_tmp2 = _construct__EndCount(&wrap_call_tmp, INT64(0), ret4, this8, _ln, _fn);
#line 712 "ChapelBase.chpl"
      _coforallCount = wrap_call_tmp2;
#line 712 "ChapelBase.chpl"
      ret_to_arg_ref_tmp_2 = &call_tmp16;
#line 712 "ChapelBase.chpl"
      chpl_build_partially_bounded_range(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 712 "ChapelBase.chpl"
      ret_to_arg_ref_tmp_3 = &call_tmp17;
#line 712 "ChapelBase.chpl"
      chpl___POUND_(&call_tmp16, T2, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 712 "ChapelBase.chpl"
      _ic__F0_this3 = call_tmp17;
#line 712 "ChapelBase.chpl"
      this10 = &_ic__F0_this3;
#line 712 "ChapelBase.chpl"
      chpl_check_nil(this10, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      checkIfIterWillOverflow(this10, true, _ln, _fn);
#line 712 "ChapelBase.chpl"
      ret5 = (&_ic__F0_this3)->_low;
#line 712 "ChapelBase.chpl"
      ret6 = (&_ic__F0_this3)->_high;
#line 712 "ChapelBase.chpl"
      end2 = ret6;
#line 712 "ChapelBase.chpl"
      for (i2 = ret5; ((i2 <= end2)); i2 += INT64(1)) {
#line 712 "ChapelBase.chpl"
        _upEndCount(_coforallCount, _ln, _fn);
#line 712 "ChapelBase.chpl"
        this11 = &_ic__F0_this;
#line 712 "ChapelBase.chpl"
        x1_tet = _ic__F1_x1_tet;
#line 712 "ChapelBase.chpl"
        rvfDerefTmp = _coforallCount;
#line 712 "ChapelBase.chpl"
        chpl_here_alloc_size = sizeof(chpl__class_localscoforall_fn_object);
#line 712 "ChapelBase.chpl"
        chpl_here_alloc_tmp = chpl_here_alloc(chpl_here_alloc_size, INT16(33), _ln, _fn);
#line 712 "ChapelBase.chpl"
        _args_forcoforall_fn = ((_class_localscoforall_fn)(chpl_here_alloc_tmp));
#line 712 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_0_x1_tet = x1_tet;
#line 712 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_1_numChunks = numChunks;
#line 712 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_2_rvfDerefTmp = rvfDerefTmp;
#line 712 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_3_this = this11;
#line 712 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_4_len = len;
#line 712 "ChapelBase.chpl"
        chpl_check_nil(_args_forcoforall_fn, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_5__yieldedIndex = i2;
#line 712 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_ln = _ln;
#line 712 "ChapelBase.chpl"
        (_args_forcoforall_fn)->_fn = _fn;
#line 712 "ChapelBase.chpl"
        /*** wrapcoforall_fn ***/ chpl_taskListAddCoStmt(INT32(-2), INT64(0), ((void*)(_args_forcoforall_fn)), &(((_args_forcoforall_fn)->_2_rvfDerefTmp)->taskList), chpl_nodeID, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      }
#line 712 "ChapelBase.chpl"
      chpl_taskListProcess((_coforallCount)->taskList, _ln, _fn);
#line 712 "ChapelBase.chpl"
      _waitEndCount(_coforallCount, _ln, _fn);
#line 712 "ChapelBase.chpl"
      delete_tmp = _coforallCount;
#line 712 "ChapelBase.chpl"
      chpl_check_nil(delete_tmp, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      _field_destructor_tmp_ = &((delete_tmp)->i);
#line 712 "ChapelBase.chpl"
      chpl_check_nil(_field_destructor_tmp_, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
      call_tmp18 = &((_field_destructor_tmp_)->_v);
#line 712 "ChapelBase.chpl"
      atomic_destroy_int_least64_t(call_tmp18);
#line 712 "ChapelBase.chpl"
      call_tmp19 = ((void*)(delete_tmp));
#line 712 "ChapelBase.chpl"
      chpl_here_free(call_tmp19, _ln, _fn);
#line 712 "ChapelBase.chpl"
    }
#line 712 "ChapelBase.chpl"
  } else /* ZLINE: 718 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl */
#line 712 "ChapelBase.chpl"
  {
#line 718 "ChapelBase.chpl"
    _ic__F1_high = s;
#line 718 "ChapelBase.chpl"
    chpl_checkIfRangeIterWillOverflow(INT64(1), s, INT64(1), INT64(1), s, true, _ln, _fn);
#line 718 "ChapelBase.chpl"
    for (i3 = INT64(1); ((i3 <= _ic__F1_high)); i3 += INT64(1)) {
#line 720 "ChapelBase.chpl"
      call_tmp20 = (i3 - INT64(1));
#line 720 "ChapelBase.chpl"
      *(x + call_tmp20) = INT64(0);
#line 720 "ChapelBase.chpl"
    }
#line 720 "ChapelBase.chpl"
  }
#line 669 "ChapelBase.chpl"
  return;
#line 669 "ChapelBase.chpl"
}

#line 669 "ChapelBase.chpl"
/* ChapelBase.chpl:669 */
#line 669 "ChapelBase.chpl"
static void init_elts3(_ddata_chpl_string x, int64_t s, int64_t _ln, c_string _fn) {
#line 669 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 669 "ChapelBase.chpl"
  int64_t i;
#line 669 "ChapelBase.chpl"
  chpl_string ret;
#line 669 "ChapelBase.chpl"
  int64_t call_tmp;
#line 724 "ChapelBase.chpl"
  _ic__F1_high = s;
#line 724 "ChapelBase.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), s, INT64(1), INT64(1), s, true, _ln, _fn);
#line 725 "ChapelBase.chpl"
  ret = defaultStringValue;
#line 724 "ChapelBase.chpl"
  for (i = INT64(1); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 726 "ChapelBase.chpl"
    call_tmp = (i - INT64(1));
#line 726 "ChapelBase.chpl"
    *(x + call_tmp) = ret;
#line 726 "ChapelBase.chpl"
  }
#line 669 "ChapelBase.chpl"
  return;
#line 669 "ChapelBase.chpl"
}

#line 669 "ChapelBase.chpl"
/* ChapelBase.chpl:712 */
#line 669 "ChapelBase.chpl"
static void wrapcoforall_fn(_class_localscoforall_fn c) {
#line 669 "ChapelBase.chpl"
  int64_t _ln;
#line 669 "ChapelBase.chpl"
  c_string _fn;
#line 669 "ChapelBase.chpl"
  _ddata_int64_t _0_x1_tet = NULL;
#line 669 "ChapelBase.chpl"
  int64_t _1_numChunks;
#line 669 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t _2_rvfDerefTmp = NULL;
#line 669 "ChapelBase.chpl"
  _ref_range_int64_t_bounded_F _3_this = NULL;
#line 669 "ChapelBase.chpl"
  int64_t _4_len;
#line 669 "ChapelBase.chpl"
  int64_t _5__yieldedIndex;
#line 712 "ChapelBase.chpl"
  _ln = (c)->_ln;
#line 712 "ChapelBase.chpl"
  _fn = (c)->_fn;
#line 712 "ChapelBase.chpl"
  chpl_check_nil(c, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
  _0_x1_tet = (c)->_0_x1_tet;
#line 712 "ChapelBase.chpl"
  chpl_check_nil(c, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
  _1_numChunks = (c)->_1_numChunks;
#line 712 "ChapelBase.chpl"
  chpl_check_nil(c, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
  _2_rvfDerefTmp = (c)->_2_rvfDerefTmp;
#line 712 "ChapelBase.chpl"
  chpl_check_nil(c, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
  _3_this = (c)->_3_this;
#line 712 "ChapelBase.chpl"
  chpl_check_nil(c, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
  _4_len = (c)->_4_len;
#line 712 "ChapelBase.chpl"
  chpl_check_nil(c, INT64(712), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 712 "ChapelBase.chpl"
  _5__yieldedIndex = (c)->_5__yieldedIndex;
#line 712 "ChapelBase.chpl"
  coforall_fn(_0_x1_tet, _1_numChunks, _2_rvfDerefTmp, _3_this, _4_len, _5__yieldedIndex, _ln, _fn);
#line 712 "ChapelBase.chpl"
  chpl_here_free(((void*)(c)), _ln, _fn);
#line 712 "ChapelBase.chpl"
  return;
#line 712 "ChapelBase.chpl"
}

#line 712 "ChapelBase.chpl"
/* ChapelBase.chpl:831 */
#line 712 "ChapelBase.chpl"
static void chpl__auto_destroy__EndCount(chpl___EndCount_atomic_int64_int64_t this6, int64_t _ln, c_string _fn) {
#line 712 "ChapelBase.chpl"
  _ref_atomic_int64 _field_destructor_tmp_ = NULL;
#line 712 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 834 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(834), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 834 "ChapelBase.chpl"
  _field_destructor_tmp_ = &((this6)->i);
#line 834 "ChapelBase.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(834), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 834 "ChapelBase.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 834 "ChapelBase.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 831 "ChapelBase.chpl"
  return;
#line 831 "ChapelBase.chpl"
}

#line 831 "ChapelBase.chpl"
/* ChapelBase.chpl:831 */
#line 831 "ChapelBase.chpl"
static chpl___EndCount_atomic_int64_int64_t _construct__EndCount(atomic_int64* const i, int64_t taskCnt, chpl_task_list_p taskList, chpl___EndCount_atomic_int64_int64_t meme, int64_t _ln, c_string _fn) {
#line 831 "ChapelBase.chpl"
  chpl___EndCount_atomic_int64_int64_t this6 = NULL;
#line 831 "ChapelBase.chpl"
  object T = NULL;
#line 831 "ChapelBase.chpl"
  this6 = meme;
#line 831 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(831), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 831 "ChapelBase.chpl"
  T = &((this6)->super);
#line 831 "ChapelBase.chpl"
  _construct_object(T);
#line 834 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(834), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 834 "ChapelBase.chpl"
  (this6)->i = *(i);
#line 835 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(835), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 835 "ChapelBase.chpl"
  (this6)->taskCnt = taskCnt;
#line 836 "ChapelBase.chpl"
  chpl_check_nil(this6, INT64(836), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 836 "ChapelBase.chpl"
  (this6)->taskList = taskList;
#line 831 "ChapelBase.chpl"
  return this6;
#line 831 "ChapelBase.chpl"
}

#line 831 "ChapelBase.chpl"
/* ChapelBase.chpl:875 */
#line 831 "ChapelBase.chpl"
static void _upEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, c_string _fn) {
#line 831 "ChapelBase.chpl"
  memory_order local_memory_order_relaxed;
#line 831 "ChapelBase.chpl"
  int32_t local_c_sublocid_any;
#line 831 "ChapelBase.chpl"
  memory_order local_memory_order_release;
#line 831 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp = NULL;
#line 831 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 831 "ChapelBase.chpl"
  _ref_int64_t call_tmp3 = NULL;
#line 831 "ChapelBase.chpl"
  locale call_tmp4 = NULL;
#line 831 "ChapelBase.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 831 "ChapelBase.chpl"
  chpl_localeID_t call_tmp5;
#line 831 "ChapelBase.chpl"
  chpl_localeID_t call_tmp6;
#line 831 "ChapelBase.chpl"
  locale call_tmp7 = NULL;
#line 831 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp8 = NULL;
#line 831 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp9 = NULL;
#line 890 "ChapelBase.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 890 "ChapelBase.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 883 "ChapelBase.chpl"
  local_memory_order_release = memory_order_release;
#line 883 "ChapelBase.chpl"
  chpl_rmem_consist_fence(local_memory_order_release, _ln, _fn);
#line 885 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(885), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 885 "ChapelBase.chpl"
  call_tmp = &((e)->i);
#line 885 "ChapelBase.chpl"
  chpl_check_nil(call_tmp, INT64(885), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 885 "ChapelBase.chpl"
  call_tmp2 = &((call_tmp)->_v);
#line 885 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp2, INT64(1), local_memory_order_release);
#line 886 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(886), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 886 "ChapelBase.chpl"
  call_tmp3 = &((e)->taskCnt);
#line 886 "ChapelBase.chpl"
  *(call_tmp3) += INT64(1);
#line 890 "ChapelBase.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 890 "ChapelBase.chpl"
  call_tmp5 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
#line 890 "ChapelBase.chpl"
  call_tmp6 = chpl__initCopy_chpl_rt_localeID_t(call_tmp5);
#line 890 "ChapelBase.chpl"
  call_tmp7 = chpl_localeID_to_locale(&call_tmp6, _ln, _fn);
#line 890 "ChapelBase.chpl"
  call_tmp4 = call_tmp7;
#line 890 "ChapelBase.chpl"
  chpl_check_nil(call_tmp4, INT64(890), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 890 "ChapelBase.chpl"
  call_tmp8 = &((call_tmp4)->runningTaskCounter);
#line 890 "ChapelBase.chpl"
  chpl_check_nil(call_tmp8, INT64(890), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 890 "ChapelBase.chpl"
  call_tmp9 = &((call_tmp8)->_v);
#line 890 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp9, INT64(1), local_memory_order_relaxed);
#line 875 "ChapelBase.chpl"
  return;
#line 875 "ChapelBase.chpl"
}

#line 875 "ChapelBase.chpl"
/* ChapelBase.chpl:898 */
#line 875 "ChapelBase.chpl"
static void _downEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, c_string _fn) {
#line 875 "ChapelBase.chpl"
  memory_order local_memory_order_release;
#line 875 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp = NULL;
#line 875 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 899 "ChapelBase.chpl"
  local_memory_order_release = memory_order_release;
#line 899 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(899), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 899 "ChapelBase.chpl"
  call_tmp = &((e)->i);
#line 899 "ChapelBase.chpl"
  chpl_check_nil(call_tmp, INT64(899), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 899 "ChapelBase.chpl"
  call_tmp2 = &((call_tmp)->_v);
#line 899 "ChapelBase.chpl"
  atomic_fetch_sub_explicit_int_least64_t(call_tmp2, INT64(1), local_memory_order_release);
#line 898 "ChapelBase.chpl"
  return;
#line 898 "ChapelBase.chpl"
}

#line 898 "ChapelBase.chpl"
/* ChapelBase.chpl:905 */
#line 898 "ChapelBase.chpl"
static void _waitEndCount(chpl___EndCount_atomic_int64_int64_t e, int64_t _ln, c_string _fn) {
#line 898 "ChapelBase.chpl"
  memory_order local_memory_order_acquire;
#line 898 "ChapelBase.chpl"
  memory_order local_memory_order_relaxed;
#line 898 "ChapelBase.chpl"
  int32_t local_c_sublocid_any;
#line 898 "ChapelBase.chpl"
  chpl_task_list_p ret;
#line 898 "ChapelBase.chpl"
  locale call_tmp = NULL;
#line 898 "ChapelBase.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 898 "ChapelBase.chpl"
  chpl_localeID_t call_tmp2;
#line 898 "ChapelBase.chpl"
  chpl_localeID_t call_tmp3;
#line 898 "ChapelBase.chpl"
  locale call_tmp4 = NULL;
#line 898 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp5 = NULL;
#line 898 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp6 = NULL;
#line 898 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp7 = NULL;
#line 898 "ChapelBase.chpl"
  chpl_bool T;
#line 898 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp8 = NULL;
#line 898 "ChapelBase.chpl"
  int64_t call_tmp9;
#line 898 "ChapelBase.chpl"
  chpl_bool call_tmp10;
#line 898 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp11 = NULL;
#line 898 "ChapelBase.chpl"
  int64_t call_tmp12;
#line 898 "ChapelBase.chpl"
  chpl_bool call_tmp13;
#line 898 "ChapelBase.chpl"
  int64_t ret2;
#line 898 "ChapelBase.chpl"
  locale call_tmp14 = NULL;
#line 898 "ChapelBase.chpl"
  chpl_localeID_t _autoCopy_tmp_2;
#line 898 "ChapelBase.chpl"
  chpl_localeID_t call_tmp15;
#line 898 "ChapelBase.chpl"
  chpl_localeID_t call_tmp16;
#line 898 "ChapelBase.chpl"
  locale call_tmp17 = NULL;
#line 898 "ChapelBase.chpl"
  int64_t call_tmp18;
#line 898 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp19 = NULL;
#line 898 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp20 = NULL;
#line 898 "ChapelBase.chpl"
  chpl_task_list_p ret3;
#line 915 "ChapelBase.chpl"
  local_memory_order_acquire = memory_order_acquire;
#line 912 "ChapelBase.chpl"
  local_memory_order_relaxed = memory_order_relaxed;
#line 912 "ChapelBase.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 907 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(907), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 907 "ChapelBase.chpl"
  ret = (e)->taskList;
#line 907 "ChapelBase.chpl"
  chpl_taskListExecute(ret, _ln, _fn);
#line 912 "ChapelBase.chpl"
  _autoCopy_tmp_ = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 912 "ChapelBase.chpl"
  call_tmp2 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_);
#line 912 "ChapelBase.chpl"
  call_tmp3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp2);
#line 912 "ChapelBase.chpl"
  call_tmp4 = chpl_localeID_to_locale(&call_tmp3, _ln, _fn);
#line 912 "ChapelBase.chpl"
  call_tmp = call_tmp4;
#line 912 "ChapelBase.chpl"
  chpl_check_nil(call_tmp, INT64(912), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 912 "ChapelBase.chpl"
  call_tmp5 = &((call_tmp)->runningTaskCounter);
#line 912 "ChapelBase.chpl"
  chpl_check_nil(call_tmp5, INT64(912), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 912 "ChapelBase.chpl"
  call_tmp6 = &((call_tmp5)->_v);
#line 912 "ChapelBase.chpl"
  atomic_fetch_sub_explicit_int_least64_t(call_tmp6, INT64(1), local_memory_order_relaxed);
#line 915 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(915), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 915 "ChapelBase.chpl"
  call_tmp7 = &((e)->i);
#line 915 "ChapelBase.chpl"
  chpl_check_nil(call_tmp7, INT64(915), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 915 "ChapelBase.chpl"
  call_tmp8 = &((call_tmp7)->_v);
#line 915 "ChapelBase.chpl"
  call_tmp9 = atomic_load_explicit_int_least64_t(call_tmp8, local_memory_order_relaxed);
#line 915 "ChapelBase.chpl"
  call_tmp10 = (call_tmp9 != INT64(0));
#line 915 "ChapelBase.chpl"
  T = call_tmp10;
#line 915 "ChapelBase.chpl"
  while (T) {
#line 915 "ChapelBase.chpl"
    chpl_task_yield();
#line 915 "ChapelBase.chpl"
    chpl_check_nil(call_tmp7, INT64(915), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 915 "ChapelBase.chpl"
    call_tmp11 = &((call_tmp7)->_v);
#line 915 "ChapelBase.chpl"
    call_tmp12 = atomic_load_explicit_int_least64_t(call_tmp11, local_memory_order_relaxed);
#line 915 "ChapelBase.chpl"
    call_tmp13 = (call_tmp12 != INT64(0));
#line 915 "ChapelBase.chpl"
    T = call_tmp13;
#line 915 "ChapelBase.chpl"
  }
#line 915 "ChapelBase.chpl"
  atomic_thread_fence(local_memory_order_acquire);
#line 918 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(918), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 918 "ChapelBase.chpl"
  ret2 = (e)->taskCnt;
#line 920 "ChapelBase.chpl"
  _autoCopy_tmp_2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any);
#line 920 "ChapelBase.chpl"
  call_tmp15 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp_2);
#line 920 "ChapelBase.chpl"
  call_tmp16 = chpl__initCopy_chpl_rt_localeID_t(call_tmp15);
#line 920 "ChapelBase.chpl"
  call_tmp17 = chpl_localeID_to_locale(&call_tmp16, _ln, _fn);
#line 920 "ChapelBase.chpl"
  call_tmp14 = call_tmp17;
#line 920 "ChapelBase.chpl"
  call_tmp18 = (ret2 - INT64(1));
#line 920 "ChapelBase.chpl"
  chpl_check_nil(call_tmp14, INT64(920), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 920 "ChapelBase.chpl"
  call_tmp19 = &((call_tmp14)->runningTaskCounter);
#line 920 "ChapelBase.chpl"
  chpl_check_nil(call_tmp19, INT64(920), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 920 "ChapelBase.chpl"
  call_tmp20 = &((call_tmp19)->_v);
#line 920 "ChapelBase.chpl"
  atomic_fetch_sub_explicit_int_least64_t(call_tmp20, call_tmp18, local_memory_order_relaxed);
#line 934 "ChapelBase.chpl"
  chpl_check_nil(e, INT64(934), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 934 "ChapelBase.chpl"
  ret3 = (e)->taskList;
#line 934 "ChapelBase.chpl"
  chpl_taskListFree(ret3, _ln, _fn);
#line 905 "ChapelBase.chpl"
  return;
#line 905 "ChapelBase.chpl"
}

#line 905 "ChapelBase.chpl"
/* ChapelBase.chpl:947 */
#line 905 "ChapelBase.chpl"
static void _waitEndCount2(chpl___EndCount_atomic_int64_int64_t _endCount, int64_t _ln, c_string _fn) {
#line 949 "ChapelBase.chpl"
  _waitEndCount(_endCount, _ln, _fn);
#line 947 "ChapelBase.chpl"
  return;
#line 947 "ChapelBase.chpl"
}

#line 947 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 947 "ChapelBase.chpl"
static int64_t _command_line_cast7(c_string x, int64_t _ln, c_string _fn) {
#line 947 "ChapelBase.chpl"
  int64_t call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_int64_t(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static int64_t _command_line_cast9(c_string x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  int64_t call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_int64_t(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static chpl_bool _command_line_cast2(c_string x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  chpl_bool call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static c_string _command_line_cast3(c_string x) {
#line 953 "ChapelBase.chpl"
  return x;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static c_string _command_line_cast4(c_string x) {
#line 953 "ChapelBase.chpl"
  return x;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static c_string _command_line_cast6(c_string x) {
#line 953 "ChapelBase.chpl"
  return x;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static uint64_t _command_line_cast10(c_string x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  uint64_t call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_uint64_t(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static chpl_bool _command_line_cast12(c_string x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  chpl_bool call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static chpl_bool _command_line_cast8(c_string x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  chpl_bool call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static int64_t _command_line_cast5(c_string x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  int64_t call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_int64_t(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static chpl_bool _command_line_cast14(c_string x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  chpl_bool call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static chpl_bool _command_line_cast(c_string x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  chpl_bool call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static chpl_bool _command_line_cast13(c_string x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  chpl_bool call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_chpl_bool(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:953 */
#line 953 "ChapelBase.chpl"
static uint64_t _command_line_cast11(c_string x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  uint64_t call_tmp;
#line 953 "ChapelBase.chpl"
  call_tmp = c_string_to_uint64_t(x, _ln, _fn);
#line 953 "ChapelBase.chpl"
  return call_tmp;
#line 953 "ChapelBase.chpl"
}

#line 953 "ChapelBase.chpl"
/* ChapelBase.chpl:1099 */
#line 953 "ChapelBase.chpl"
static DefaultDist chpl__autoCopy(DefaultDist x, int64_t _ln, c_string _fn) {
#line 953 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 953 "ChapelBase.chpl"
  DefaultDist ret = NULL;
#line 953 "ChapelBase.chpl"
  BaseDist coerce_tmp = NULL;
#line 953 "ChapelBase.chpl"
  BaseDist call_tmp = NULL;
#line 953 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 953 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 953 "ChapelBase.chpl"
  memory_order default_argorder;
#line 953 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1100 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1100 "ChapelBase.chpl"
  ret = x;
#line 1100 "ChapelBase.chpl"
  call_tmp = ((BaseDist)(ret));
#line 1100 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1100 "ChapelBase.chpl"
  compilerAssert();
#line 1100 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1100), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1100 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_distCnt);
#line 1100 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1100), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1100 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1100 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1100 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1100), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1100 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1100 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1099 "ChapelBase.chpl"
  return x;
#line 1099 "ChapelBase.chpl"
}

#line 1099 "ChapelBase.chpl"
/* ChapelBase.chpl:1107 */
#line 1099 "ChapelBase.chpl"
static DefaultRectangularDom_1_int64_t_F chpl__autoCopy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 1099 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1099 "ChapelBase.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1099 "ChapelBase.chpl"
  BaseDom coerce_tmp = NULL;
#line 1099 "ChapelBase.chpl"
  BaseDom call_tmp = NULL;
#line 1099 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1099 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1099 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1099 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1108 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1108 "ChapelBase.chpl"
  ret = x;
#line 1108 "ChapelBase.chpl"
  call_tmp = ((BaseDom)(ret));
#line 1108 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1108 "ChapelBase.chpl"
  compilerAssert();
#line 1108 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1108), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1108 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_domCnt);
#line 1108 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1108), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1108 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1108 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1108 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1108), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1108 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1108 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1107 "ChapelBase.chpl"
  return x;
#line 1107 "ChapelBase.chpl"
}

#line 1107 "ChapelBase.chpl"
/* ChapelBase.chpl:1115 */
#line 1107 "ChapelBase.chpl"
static DefaultRectangularArr_locale_1_int64_t_F chpl__autoCopy5(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 1107 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1107 "ChapelBase.chpl"
  DefaultRectangularArr_locale_1_int64_t_F ret = NULL;
#line 1107 "ChapelBase.chpl"
  BaseArr coerce_tmp = NULL;
#line 1107 "ChapelBase.chpl"
  BaseArr call_tmp = NULL;
#line 1107 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1107 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1107 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1107 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1116 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1116 "ChapelBase.chpl"
  ret = x;
#line 1116 "ChapelBase.chpl"
  call_tmp = ((BaseArr)(ret));
#line 1116 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1116 "ChapelBase.chpl"
  compilerAssert();
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_arrCnt);
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1116 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1116 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1115 "ChapelBase.chpl"
  return x;
#line 1115 "ChapelBase.chpl"
}

#line 1115 "ChapelBase.chpl"
/* ChapelBase.chpl:1115 */
#line 1115 "ChapelBase.chpl"
static DefaultRectangularArr_localesSignal_1_int64_t_F chpl__autoCopy6(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 1115 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1115 "ChapelBase.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F ret = NULL;
#line 1115 "ChapelBase.chpl"
  BaseArr coerce_tmp = NULL;
#line 1115 "ChapelBase.chpl"
  BaseArr call_tmp = NULL;
#line 1115 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1115 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1115 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1115 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1116 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1116 "ChapelBase.chpl"
  ret = x;
#line 1116 "ChapelBase.chpl"
  call_tmp = ((BaseArr)(ret));
#line 1116 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1116 "ChapelBase.chpl"
  compilerAssert();
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_arrCnt);
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1116 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1116 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1115 "ChapelBase.chpl"
  return x;
#line 1115 "ChapelBase.chpl"
}

#line 1115 "ChapelBase.chpl"
/* ChapelBase.chpl:1115 */
#line 1115 "ChapelBase.chpl"
static DefaultRectangularArr_int64_t_1_int64_t_F chpl__autoCopy4(DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 1115 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1115 "ChapelBase.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret = NULL;
#line 1115 "ChapelBase.chpl"
  BaseArr coerce_tmp = NULL;
#line 1115 "ChapelBase.chpl"
  BaseArr call_tmp = NULL;
#line 1115 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1115 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1115 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1115 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1116 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1116 "ChapelBase.chpl"
  ret = x;
#line 1116 "ChapelBase.chpl"
  call_tmp = ((BaseArr)(ret));
#line 1116 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1116 "ChapelBase.chpl"
  compilerAssert();
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_arrCnt);
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1116 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1116 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1115 "ChapelBase.chpl"
  return x;
#line 1115 "ChapelBase.chpl"
}

#line 1115 "ChapelBase.chpl"
/* ChapelBase.chpl:1115 */
#line 1115 "ChapelBase.chpl"
static DefaultRectangularArr_chpl_string_1_int64_t_F chpl__autoCopy3(DefaultRectangularArr_chpl_string_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 1115 "ChapelBase.chpl"
  memory_order local_memory_order_seq_cst;
#line 1115 "ChapelBase.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F ret = NULL;
#line 1115 "ChapelBase.chpl"
  BaseArr coerce_tmp = NULL;
#line 1115 "ChapelBase.chpl"
  BaseArr call_tmp = NULL;
#line 1115 "ChapelBase.chpl"
  _ref_atomic_refcnt call_tmp2 = NULL;
#line 1115 "ChapelBase.chpl"
  _ref_atomic_int64 call_tmp3 = NULL;
#line 1115 "ChapelBase.chpl"
  memory_order default_argorder;
#line 1115 "ChapelBase.chpl"
  _ref_atomic_int_least64_t call_tmp4 = NULL;
#line 1116 "ChapelBase.chpl"
  local_memory_order_seq_cst = memory_order_seq_cst;
#line 1116 "ChapelBase.chpl"
  ret = x;
#line 1116 "ChapelBase.chpl"
  call_tmp = ((BaseArr)(ret));
#line 1116 "ChapelBase.chpl"
  coerce_tmp = call_tmp;
#line 1116 "ChapelBase.chpl"
  compilerAssert();
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(coerce_tmp, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp2 = &((coerce_tmp)->_arrCnt);
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(call_tmp2, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp3 = &((call_tmp2)->_cnt);
#line 1116 "ChapelBase.chpl"
  default_argorder = local_memory_order_seq_cst;
#line 1116 "ChapelBase.chpl"
  chpl_check_nil(call_tmp3, INT64(1116), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelBase.chpl");
#line 1116 "ChapelBase.chpl"
  call_tmp4 = &((call_tmp3)->_v);
#line 1116 "ChapelBase.chpl"
  atomic_fetch_add_explicit_int_least64_t(call_tmp4, INT64(1), default_argorder);
#line 1115 "ChapelBase.chpl"
  return x;
#line 1115 "ChapelBase.chpl"
}

#line 1115 "ChapelBase.chpl"
/* ChapelBase.chpl:1153 */
#line 1115 "ChapelBase.chpl"
static void chpl__autoDestroy(DefaultDist x, int64_t _ln, c_string _fn) {
#line 1154 "ChapelBase.chpl"
  chpl___TILDE__distribution(x, _ln, _fn);
#line 1153 "ChapelBase.chpl"
  return;
#line 1153 "ChapelBase.chpl"
}

#line 1153 "ChapelBase.chpl"
/* ChapelBase.chpl:1158 */
#line 1153 "ChapelBase.chpl"
static void chpl__autoDestroy2(DefaultRectangularDom_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 1159 "ChapelBase.chpl"
  chpl___TILDE__domain(x, _ln, _fn);
#line 1158 "ChapelBase.chpl"
  return;
#line 1158 "ChapelBase.chpl"
}

#line 1158 "ChapelBase.chpl"
/* ChapelBase.chpl:1163 */
#line 1158 "ChapelBase.chpl"
static void chpl__autoDestroy5(DefaultRectangularArr_locale_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 1164 "ChapelBase.chpl"
  chpl___TILDE__array2(x, _ln, _fn);
#line 1163 "ChapelBase.chpl"
  return;
#line 1163 "ChapelBase.chpl"
}

#line 1163 "ChapelBase.chpl"
/* ChapelBase.chpl:1163 */
#line 1163 "ChapelBase.chpl"
static void chpl__autoDestroy4(DefaultRectangularArr_localesSignal_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 1164 "ChapelBase.chpl"
  chpl___TILDE__array3(x, _ln, _fn);
#line 1163 "ChapelBase.chpl"
  return;
#line 1163 "ChapelBase.chpl"
}

#line 1163 "ChapelBase.chpl"
/* ChapelBase.chpl:1163 */
#line 1163 "ChapelBase.chpl"
static void chpl__autoDestroy3(DefaultRectangularArr_int64_t_1_int64_t_F x, int64_t _ln, c_string _fn) {
#line 1164 "ChapelBase.chpl"
  chpl___TILDE__array(x, _ln, _fn);
#line 1163 "ChapelBase.chpl"
  return;
#line 1163 "ChapelBase.chpl"
}

#line 1163 "ChapelBase.chpl"
/* ChapelRange.chpl:1507 */
#line 1163 "ChapelBase.chpl"
static void coforall_fn(_ddata_int64_t x1_tet, int64_t numChunks, chpl___EndCount_atomic_int64_int64_t _coforallCount, _ref_range_int64_t_bounded_F this6, int64_t len, int64_t chunk, int64_t _ln, c_string _fn) {
#line 1163 "ChapelBase.chpl"
  _tuple_2_star_int64_t const_tmp;
#line 1163 "ChapelBase.chpl"
  int64_t tmp_x1;
#line 1163 "ChapelBase.chpl"
  int64_t tmp_x2;
#line 1163 "ChapelBase.chpl"
  int64_t ret;
#line 1163 "ChapelBase.chpl"
  int64_t ret2;
#line 1163 "ChapelBase.chpl"
  int64_t ret3;
#line 1163 "ChapelBase.chpl"
  _ref__tuple_2_star_int64_t ret_to_arg_ref_tmp_ = NULL;
#line 1163 "ChapelBase.chpl"
  int64_t _ic__F1_high;
#line 1163 "ChapelBase.chpl"
  int64_t i;
#line 1163 "ChapelBase.chpl"
  _ddata_int64_t x = NULL;
#line 1163 "ChapelBase.chpl"
  int64_t call_tmp;
#line 1521 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(1521), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 1521 "ChapelRange.chpl"
  ret = (this6)->_high;
#line 1521 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(1521), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 1521 "ChapelRange.chpl"
  ret2 = (this6)->_low;
#line 1521 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(1521), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 1521 "ChapelRange.chpl"
  ret3 = (this6)->_low;
#line 1521 "ChapelRange.chpl"
  ret_to_arg_ref_tmp_ = &const_tmp;
#line 1521 "ChapelRange.chpl"
  _computeBlock_chpl(len, numChunks, chunk, ret, ret2, ret3, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1521 "ChapelRange.chpl"
  tmp_x1 = *(const_tmp + INT64(0));
#line 1521 "ChapelRange.chpl"
  tmp_x2 = *(const_tmp + INT64(1));
#line 1522 "ChapelRange.chpl"
  _ic__F1_high = tmp_x2;
#line 1522 "ChapelRange.chpl"
  chpl_checkIfRangeIterWillOverflow(tmp_x1, tmp_x2, INT64(1), tmp_x1, tmp_x2, true, _ln, _fn);
#line 713 "ChapelBase.chpl"
  x = x1_tet;
#line 1522 "ChapelRange.chpl"
  for (i = tmp_x1; ((i <= _ic__F1_high)); i += INT64(1)) {
#line 714 "ChapelBase.chpl"
    call_tmp = (i - INT64(1));
#line 714 "ChapelBase.chpl"
    *(x + call_tmp) = INT64(0);
#line 714 "ChapelBase.chpl"
  }
#line 1507 "ChapelRange.chpl"
  _downEndCount(_coforallCount, _ln, _fn);
#line 1507 "ChapelRange.chpl"
  return;
#line 1507 "ChapelRange.chpl"
}


/* DefaultRectangular.chpl:22 */
static void chpl__init_DefaultRectangular(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  string local__str_literal_891;
  string local__str_literal_889;
  int64_t const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  c_string call_tmp3;
  chpl_bool const_tmp2;
  chpl_bool call_tmp4;
  chpl_bool call_tmp5;
  c_string call_tmp6;
  int64_t const_tmp3;
  chpl_bool call_tmp7;
  chpl_bool call_tmp8;
  c_string call_tmp9;
  chpl_bool call_tmp10;
  chpl_bool call_tmp11;
  DefaultDist this5 = NULL;
  int64_t call_tmp12;
  c_void_ptr cast_tmp;
  atomic_refcnt this6;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this7;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
  list_BaseDom_chpl this8;
  listNode_BaseDom_chpl call_tmp13 = NULL;
  listNode_BaseDom_chpl call_tmp14 = NULL;
  list_BaseDom_chpl wrap_call_tmp3;
  _ref_list_BaseDom ret_to_arg_ref_tmp_2 = NULL;
  atomicflag this9;
  atomic_flag ret2;
  atomic_flag type_tmp2;
  _ref_atomic_flag _ref_tmp_2 = NULL;
  atomicflag wrap_call_tmp4;
  DefaultDist wrap_call_tmp5 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_3 = NULL;
#line 22 "DefaultRectangular.chpl"
  if (chpl__init_DefaultRectangular_p) /* ZLINE: 22 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 22 "DefaultRectangular.chpl"
  {
#line 22 "DefaultRectangular.chpl"
    goto _exit_chpl__init_DefaultRectangular;
#line 22 "DefaultRectangular.chpl"
  }
#line 22 "DefaultRectangular.chpl"
  modFormatStr = "%*s\n";
#line 22 "DefaultRectangular.chpl"
  modStr = "DefaultRectangular";
#line 22 "DefaultRectangular.chpl"
  printModuleInit(modFormatStr, modStr, INT64(18), _ln, _fn);
#line 22 "DefaultRectangular.chpl"
  refIndentLevel = &moduleInitLevel;
#line 22 "DefaultRectangular.chpl"
  *(refIndentLevel) += INT64(1);
#line 22 "DefaultRectangular.chpl"
  chpl__init_DefaultRectangular_p = UINT8(true);
#line 22 "DefaultRectangular.chpl"
  {
#line 22 "DefaultRectangular.chpl"
    chpl__init_DSIUtil(_ln, _fn);
#line 22 "DefaultRectangular.chpl"
    chpl__init_ChapelArray(_ln, _fn);
#line 22 "DefaultRectangular.chpl"
  }
#line 30 "DefaultRectangular.chpl"
  local__str_literal_891 = _str_literal_891;
#line 29 "DefaultRectangular.chpl"
  local__str_literal_889 = _str_literal_889;
#line 24 "DefaultRectangular.chpl"
  call_tmp = chpl_config_has_value("dataParTasksPerLocale", "Built-in");
#line 24 "DefaultRectangular.chpl"
  call_tmp2 = (! call_tmp);
#line 24 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 24 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 24 "DefaultRectangular.chpl"
  {
#line 24 "DefaultRectangular.chpl"
    const_tmp = INT64(0);
#line 24 "DefaultRectangular.chpl"
  } else /* ZLINE: 24 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 24 "DefaultRectangular.chpl"
  {
#line 24 "DefaultRectangular.chpl"
    call_tmp3 = chpl_config_get_value("dataParTasksPerLocale", "Built-in");
#line 24 "DefaultRectangular.chpl"
    const_tmp = _command_line_cast13(call_tmp3, _ln, _fn);
#line 24 "DefaultRectangular.chpl"
  }
#line 24 "DefaultRectangular.chpl"
  dataParTasksPerLocale = const_tmp;
#line 25 "DefaultRectangular.chpl"
  call_tmp4 = chpl_config_has_value("dataParIgnoreRunningTasks", "Built-in");
#line 25 "DefaultRectangular.chpl"
  call_tmp5 = (! call_tmp4);
#line 25 "DefaultRectangular.chpl"
  if (call_tmp5) /* ZLINE: 25 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 25 "DefaultRectangular.chpl"
  {
#line 25 "DefaultRectangular.chpl"
    const_tmp2 = UINT8(false);
#line 25 "DefaultRectangular.chpl"
  } else /* ZLINE: 25 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 25 "DefaultRectangular.chpl"
  {
#line 25 "DefaultRectangular.chpl"
    call_tmp6 = chpl_config_get_value("dataParIgnoreRunningTasks", "Built-in");
#line 25 "DefaultRectangular.chpl"
    const_tmp2 = _command_line_cast(call_tmp6, _ln, _fn);
#line 25 "DefaultRectangular.chpl"
  }
#line 25 "DefaultRectangular.chpl"
  dataParIgnoreRunningTasks = const_tmp2;
#line 27 "DefaultRectangular.chpl"
  call_tmp7 = chpl_config_has_value("dataParMinGranularity", "Built-in");
#line 27 "DefaultRectangular.chpl"
  call_tmp8 = (! call_tmp7);
#line 27 "DefaultRectangular.chpl"
  if (call_tmp8) /* ZLINE: 27 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 27 "DefaultRectangular.chpl"
  {
#line 27 "DefaultRectangular.chpl"
    const_tmp3 = INT64(1);
#line 27 "DefaultRectangular.chpl"
  } else /* ZLINE: 27 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 27 "DefaultRectangular.chpl"
  {
#line 27 "DefaultRectangular.chpl"
    call_tmp9 = chpl_config_get_value("dataParMinGranularity", "Built-in");
#line 27 "DefaultRectangular.chpl"
    const_tmp3 = _command_line_cast14(call_tmp9, _ln, _fn);
#line 27 "DefaultRectangular.chpl"
  }
#line 27 "DefaultRectangular.chpl"
  dataParMinGranularity = const_tmp3;
#line 29 "DefaultRectangular.chpl"
  call_tmp10 = (dataParTasksPerLocale < INT64(0));
#line 29 "DefaultRectangular.chpl"
  if (call_tmp10) /* ZLINE: 29 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 29 "DefaultRectangular.chpl"
  {
#line 29 "DefaultRectangular.chpl"
    halt(&local__str_literal_889, _ln, _fn);
#line 29 "DefaultRectangular.chpl"
  }
#line 30 "DefaultRectangular.chpl"
  call_tmp11 = (dataParMinGranularity <= INT64(0));
#line 30 "DefaultRectangular.chpl"
  if (call_tmp11) /* ZLINE: 30 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 30 "DefaultRectangular.chpl"
  {
#line 30 "DefaultRectangular.chpl"
    halt(&local__str_literal_891, _ln, _fn);
#line 30 "DefaultRectangular.chpl"
  }
#line 75 "DefaultRectangular.chpl"
  call_tmp12 = sizeof(chpl_DefaultDist_object);
#line 75 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp12, INT16(6), _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  this5 = ((DefaultDist)(cast_tmp));
#line 75 "DefaultRectangular.chpl"
  ((object)(this5))->chpl__cid = chpl__cid_DefaultDist;
#line 75 "DefaultRectangular.chpl"
  (&this6)->_cnt = _init_class_tmp_;
#line 75 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 75 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 75 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 75 "DefaultRectangular.chpl"
  (&this7)->_v = ret;
#line 75 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this7, _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  (&this6)->_cnt = wrap_call_tmp;
#line 75 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 75 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this6, ret_to_arg_ref_tmp_, _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  (&this8)->first_chpl = nil;
#line 75 "DefaultRectangular.chpl"
  (&this8)->last_chpl = nil;
#line 75 "DefaultRectangular.chpl"
  (&this8)->length_chpl = INT64(0);
#line 75 "DefaultRectangular.chpl"
  call_tmp13 = ((listNode_BaseDom_chpl)(nil));
#line 75 "DefaultRectangular.chpl"
  (&this8)->first_chpl = call_tmp13;
#line 75 "DefaultRectangular.chpl"
  call_tmp14 = ((listNode_BaseDom_chpl)(nil));
#line 75 "DefaultRectangular.chpl"
  (&this8)->last_chpl = call_tmp14;
#line 75 "DefaultRectangular.chpl"
  (&this8)->length_chpl = INT64(0);
#line 75 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &wrap_call_tmp3;
#line 75 "DefaultRectangular.chpl"
  _construct_list_chpl(call_tmp13, call_tmp14, INT64(0), &this8, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  ret2 = type_tmp2;
#line 75 "DefaultRectangular.chpl"
  _ref_tmp_2 = &ret2;
#line 75 "DefaultRectangular.chpl"
  atomic_init_flag(_ref_tmp_2, UINT8(false));
#line 75 "DefaultRectangular.chpl"
  (&this9)->_v = ret2;
#line 75 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_atomicflag(ret2, &this9, _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  wrap_call_tmp5 = _construct_DefaultDist(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, this5, _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &defaultDist;
#line 75 "DefaultRectangular.chpl"
  chpl__buildDistValue(wrap_call_tmp5, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 22 "DefaultRectangular.chpl"
  *(refIndentLevel) -= INT64(1);
#line 22 "DefaultRectangular.chpl"
  _exit_chpl__init_DefaultRectangular:;
#line 22 "DefaultRectangular.chpl"
  return;
#line 22 "DefaultRectangular.chpl"
}

#line 22 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:43 */
#line 22 "DefaultRectangular.chpl"
static DefaultDist _construct_DefaultDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, DefaultDist meme, int64_t _ln, int32_t _fn) {
#line 22 "DefaultRectangular.chpl"
  DefaultDist this5 = NULL;
#line 22 "DefaultRectangular.chpl"
  BaseDist T = NULL;
#line 43 "DefaultRectangular.chpl"
  this5 = meme;
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(43), INT64(25));
#line 43 "DefaultRectangular.chpl"
  T = &((this5)->super);
#line 43 "DefaultRectangular.chpl"
  _construct_BaseDist(_distCnt, _doms, _domsLock, T, _ln, _fn);
#line 43 "DefaultRectangular.chpl"
  return meme;
#line 43 "DefaultRectangular.chpl"
}

#line 43 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:43 */
#line 43 "DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultDist(DefaultDist this5, int64_t _ln, int32_t _fn) {
#line 43 "DefaultRectangular.chpl"
  BaseDist _parent_destructor_tmp_ = NULL;
#line 43 "DefaultRectangular.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 43 "DefaultRectangular.chpl"
  _ref_atomic_flag call_tmp = NULL;
#line 43 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
#line 43 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 43 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 43 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseDist)(this5));
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(43), INT64(25));
#line 43 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(43), INT64(25));
#line 43 "DefaultRectangular.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 43 "DefaultRectangular.chpl"
  atomic_destroy_flag(call_tmp);
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(43), INT64(25));
#line 43 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(43), INT64(25));
#line 43 "DefaultRectangular.chpl"
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(43), INT64(25));
#line 43 "DefaultRectangular.chpl"
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
#line 43 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp2);
#line 43 "DefaultRectangular.chpl"
  return;
#line 43 "DefaultRectangular.chpl"
}

#line 43 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:44 */
#line 43 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiNewRectangularDom(DefaultDist this5, int64_t _ln, int32_t _fn) {
#line 43 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
#line 45 "DefaultRectangular.chpl"
  call_tmp = DefaultRectangularDom(this5, _ln, _fn);
#line 44 "DefaultRectangular.chpl"
  return call_tmp;
#line 44 "DefaultRectangular.chpl"
}

#line 44 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:60 */
#line 44 "DefaultRectangular.chpl"
static DefaultDist dsiClone(DefaultDist this5) {
#line 60 "DefaultRectangular.chpl"
  return this5;
#line 60 "DefaultRectangular.chpl"
}

#line 60 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:76 */
#line 60 "DefaultRectangular.chpl"
static void chpl_defaultDistInitPrivate(int64_t _ln, int32_t _fn) {
#line 60 "DefaultRectangular.chpl"
  DefaultDist ret = NULL;
#line 60 "DefaultRectangular.chpl"
  object call_tmp = NULL;
#line 60 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 60 "DefaultRectangular.chpl"
  DefaultDist const_tmp = NULL;
#line 60 "DefaultRectangular.chpl"
  DefaultDist nd = NULL;
#line 60 "DefaultRectangular.chpl"
  DefaultDist this5 = NULL;
#line 60 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 60 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 60 "DefaultRectangular.chpl"
  atomic_refcnt this6;
#line 60 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_;
#line 60 "DefaultRectangular.chpl"
  atomic_int64 this7;
#line 60 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 60 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 60 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 60 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 60 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 60 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 60 "DefaultRectangular.chpl"
  list_BaseDom_chpl this8;
#line 60 "DefaultRectangular.chpl"
  listNode_BaseDom_chpl call_tmp4 = NULL;
#line 60 "DefaultRectangular.chpl"
  listNode_BaseDom_chpl call_tmp5 = NULL;
#line 60 "DefaultRectangular.chpl"
  list_BaseDom_chpl wrap_call_tmp3;
#line 60 "DefaultRectangular.chpl"
  _ref_list_BaseDom ret_to_arg_ref_tmp_2 = NULL;
#line 60 "DefaultRectangular.chpl"
  atomicflag this9;
#line 60 "DefaultRectangular.chpl"
  atomic_flag ret3;
#line 60 "DefaultRectangular.chpl"
  atomic_flag type_tmp2;
#line 60 "DefaultRectangular.chpl"
  _ref_atomic_flag _ref_tmp_2 = NULL;
#line 60 "DefaultRectangular.chpl"
  atomicflag wrap_call_tmp4;
#line 60 "DefaultRectangular.chpl"
  DefaultDist wrap_call_tmp5 = NULL;
#line 60 "DefaultRectangular.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_3 = NULL;
#line 60 "DefaultRectangular.chpl"
  DefaultDist call_tmp6 = NULL;
#line 60 "DefaultRectangular.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_4 = NULL;
#line 77 "DefaultRectangular.chpl"
  ret = defaultDist;
#line 77 "DefaultRectangular.chpl"
  call_tmp = ((object)(ret));
#line 77 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp == nil);
#line 77 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 84 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 77 "DefaultRectangular.chpl"
  {
#line 84 "DefaultRectangular.chpl"
    call_tmp3 = sizeof(chpl_DefaultDist_object);
#line 84 "DefaultRectangular.chpl"
    cast_tmp = chpl_here_alloc(call_tmp3, INT16(6), _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    this5 = ((DefaultDist)(cast_tmp));
#line 84 "DefaultRectangular.chpl"
    ((object)(this5))->chpl__cid = chpl__cid_DefaultDist;
#line 84 "DefaultRectangular.chpl"
    (&this6)->_cnt = _init_class_tmp_;
#line 84 "DefaultRectangular.chpl"
    ret2 = type_tmp;
#line 84 "DefaultRectangular.chpl"
    _ref_tmp_ = &ret2;
#line 84 "DefaultRectangular.chpl"
    atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 84 "DefaultRectangular.chpl"
    (&this7)->_v = ret2;
#line 84 "DefaultRectangular.chpl"
    wrap_call_tmp = _construct_atomic_int64(ret2, &this7, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    (&this6)->_cnt = wrap_call_tmp;
#line 84 "DefaultRectangular.chpl"
    ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 84 "DefaultRectangular.chpl"
    _construct_atomic_refcnt(&wrap_call_tmp, &this6, ret_to_arg_ref_tmp_, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    (&this8)->first_chpl = nil;
#line 84 "DefaultRectangular.chpl"
    (&this8)->last_chpl = nil;
#line 84 "DefaultRectangular.chpl"
    (&this8)->length_chpl = INT64(0);
#line 84 "DefaultRectangular.chpl"
    call_tmp4 = ((listNode_BaseDom_chpl)(nil));
#line 84 "DefaultRectangular.chpl"
    (&this8)->first_chpl = call_tmp4;
#line 84 "DefaultRectangular.chpl"
    call_tmp5 = ((listNode_BaseDom_chpl)(nil));
#line 84 "DefaultRectangular.chpl"
    (&this8)->last_chpl = call_tmp5;
#line 84 "DefaultRectangular.chpl"
    (&this8)->length_chpl = INT64(0);
#line 84 "DefaultRectangular.chpl"
    ret_to_arg_ref_tmp_2 = &wrap_call_tmp3;
#line 84 "DefaultRectangular.chpl"
    _construct_list_chpl(call_tmp4, call_tmp5, INT64(0), &this8, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    ret3 = type_tmp2;
#line 84 "DefaultRectangular.chpl"
    _ref_tmp_2 = &ret3;
#line 84 "DefaultRectangular.chpl"
    atomic_init_flag(_ref_tmp_2, UINT8(false));
#line 84 "DefaultRectangular.chpl"
    (&this9)->_v = ret3;
#line 84 "DefaultRectangular.chpl"
    wrap_call_tmp4 = _construct_atomicflag(ret3, &this9, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    wrap_call_tmp5 = _construct_DefaultDist(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, this5, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    ret_to_arg_ref_tmp_3 = &const_tmp;
#line 84 "DefaultRectangular.chpl"
    chpl__buildDistValue(wrap_call_tmp5, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    nd = const_tmp;
#line 85 "DefaultRectangular.chpl"
    ret_to_arg_ref_tmp_4 = &call_tmp6;
#line 85 "DefaultRectangular.chpl"
    chpl_check_nil(const_tmp, INT64(85), INT64(25));
#line 85 "DefaultRectangular.chpl"
    clone2(const_tmp, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 85 "DefaultRectangular.chpl"
    defaultDist = call_tmp6;
#line 84 "DefaultRectangular.chpl"
    chpl__autoDestroy(nd, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
  }
#line 76 "DefaultRectangular.chpl"
  return;
#line 76 "DefaultRectangular.chpl"
}

#line 76 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:89 */
#line 76 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F _construct_DefaultRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_1_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 76 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this5 = NULL;
#line 76 "DefaultRectangular.chpl"
  BaseRectangularDom T = NULL;
#line 89 "DefaultRectangular.chpl"
  this5 = meme;
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(89), INT64(25));
#line 89 "DefaultRectangular.chpl"
  T = &((this5)->super);
#line 89 "DefaultRectangular.chpl"
  _construct_BaseRectangularDom(_domCnt, _arrs, _arrsLock, T, _ln, _fn);
#line 93 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(93), INT64(25));
#line 93 "DefaultRectangular.chpl"
  (this5)->dist = dist2;
#line 94 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(94), INT64(25));
#line 94 "DefaultRectangular.chpl"
  *((this5)->ranges + INT64(0)) = *(*(ranges) + INT64(0));
#line 89 "DefaultRectangular.chpl"
  return this5;
#line 89 "DefaultRectangular.chpl"
}

#line 89 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:89 */
#line 89 "DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 89 "DefaultRectangular.chpl"
  BaseRectangularDom _parent_destructor_tmp_ = NULL;
#line 89 "DefaultRectangular.chpl"
  BaseDom _parent_destructor_tmp_2 = NULL;
#line 89 "DefaultRectangular.chpl"
  _ref_atomicflag _field_destructor_tmp_ = NULL;
#line 89 "DefaultRectangular.chpl"
  _ref_atomic_flag call_tmp = NULL;
#line 89 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_2 = NULL;
#line 89 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_3 = NULL;
#line 89 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp2 = NULL;
#line 89 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseRectangularDom)(this5));
#line 89 "DefaultRectangular.chpl"
  _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_2, INT64(89), INT64(25));
#line 89 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(89), INT64(25));
#line 89 "DefaultRectangular.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 89 "DefaultRectangular.chpl"
  atomic_destroy_flag(call_tmp);
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_2, INT64(89), INT64(25));
#line 89 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(89), INT64(25));
#line 89 "DefaultRectangular.chpl"
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(89), INT64(25));
#line 89 "DefaultRectangular.chpl"
  call_tmp2 = &((_field_destructor_tmp_3)->_v);
#line 89 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp2);
#line 89 "DefaultRectangular.chpl"
  return;
#line 89 "DefaultRectangular.chpl"
}

#line 89 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:97 */
#line 89 "DefaultRectangular.chpl"
static chpl_bool dsiLinksDistribution2(DefaultRectangularDom_1_int64_t_F this5) {
#line 97 "DefaultRectangular.chpl"
  return UINT8(false);
#line 97 "DefaultRectangular.chpl"
}

#line 97 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:99 */
#line 97 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F DefaultRectangularDom(DefaultDist dist2, int64_t _ln, int32_t _fn) {
#line 97 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this5 = NULL;
#line 97 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this6 = NULL;
#line 97 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 97 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 97 "DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_bounded_F _init_class_tmp_;
#line 97 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_2;
#line 97 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 97 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_3;
#line 97 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 97 "DefaultRectangular.chpl"
  atomic_int_least64_t ret;
#line 97 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 97 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 97 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 97 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 97 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 97 "DefaultRectangular.chpl"
  list_BaseArr_chpl this9;
#line 97 "DefaultRectangular.chpl"
  listNode_BaseArr_chpl call_tmp2 = NULL;
#line 97 "DefaultRectangular.chpl"
  listNode_BaseArr_chpl call_tmp3 = NULL;
#line 97 "DefaultRectangular.chpl"
  list_BaseArr_chpl wrap_call_tmp3;
#line 97 "DefaultRectangular.chpl"
  _ref_list_BaseArr ret_to_arg_ref_tmp_2 = NULL;
#line 97 "DefaultRectangular.chpl"
  atomicflag this10;
#line 97 "DefaultRectangular.chpl"
  atomic_flag ret2;
#line 97 "DefaultRectangular.chpl"
  atomic_flag type_tmp2;
#line 97 "DefaultRectangular.chpl"
  _ref_atomic_flag _ref_tmp_2 = NULL;
#line 97 "DefaultRectangular.chpl"
  atomicflag wrap_call_tmp4;
#line 97 "DefaultRectangular.chpl"
  DefaultDist call_tmp4 = NULL;
#line 97 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp5;
#line 97 "DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_bounded_F this11;
#line 97 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp6 = NULL;
#line 97 "DefaultRectangular.chpl"
  _ref_DefaultDist call_tmp5 = NULL;
#line 99 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularDom_1_int64_t_F_object);
#line 99 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(7), _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularDom_1_int64_t_F)(cast_tmp));
#line 99 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularDom_1_int64_t_F;
#line 99 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(99), INT64(25));
#line 99 "DefaultRectangular.chpl"
  (this6)->dist = nil;
#line 99 "DefaultRectangular.chpl"
  (&_init_class_tmp_2)->_low = INT64(0);
#line 99 "DefaultRectangular.chpl"
  (&_init_class_tmp_2)->_high = INT64(0);
#line 99 "DefaultRectangular.chpl"
  (&_init_class_tmp_2)->_stride = INT64(0);
#line 99 "DefaultRectangular.chpl"
  (&_init_class_tmp_2)->_alignment = INT64(0);
#line 99 "DefaultRectangular.chpl"
  (&_init_class_tmp_2)->_aligned = UINT8(false);
#line 99 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = _init_class_tmp_2;
#line 99 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(99), INT64(25));
#line 99 "DefaultRectangular.chpl"
  *((this6)->ranges + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 99 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_3;
#line 99 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 99 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 99 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 99 "DefaultRectangular.chpl"
  (&this8)->_v = ret;
#line 99 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 99 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 99 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  (&this9)->first_chpl = nil;
#line 99 "DefaultRectangular.chpl"
  (&this9)->last_chpl = nil;
#line 99 "DefaultRectangular.chpl"
  (&this9)->length_chpl = INT64(0);
#line 99 "DefaultRectangular.chpl"
  call_tmp2 = ((listNode_BaseArr_chpl)(nil));
#line 99 "DefaultRectangular.chpl"
  (&this9)->first_chpl = call_tmp2;
#line 99 "DefaultRectangular.chpl"
  call_tmp3 = ((listNode_BaseArr_chpl)(nil));
#line 99 "DefaultRectangular.chpl"
  (&this9)->last_chpl = call_tmp3;
#line 99 "DefaultRectangular.chpl"
  (&this9)->length_chpl = INT64(0);
#line 99 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &wrap_call_tmp3;
#line 99 "DefaultRectangular.chpl"
  _construct_list_chpl2(call_tmp2, call_tmp3, INT64(0), &this9, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  ret2 = type_tmp2;
#line 99 "DefaultRectangular.chpl"
  _ref_tmp_2 = &ret2;
#line 99 "DefaultRectangular.chpl"
  atomic_init_flag(_ref_tmp_2, UINT8(false));
#line 99 "DefaultRectangular.chpl"
  (&this10)->_v = ret2;
#line 99 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_atomicflag(ret2, &this10, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  call_tmp4 = ((DefaultDist)(nil));
#line 99 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(99), INT64(25));
#line 99 "DefaultRectangular.chpl"
  (this6)->dist = call_tmp4;
#line 99 "DefaultRectangular.chpl"
  wrap_call_tmp5 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = wrap_call_tmp5;
#line 99 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(99), INT64(25));
#line 99 "DefaultRectangular.chpl"
  *((this6)->ranges + INT64(0)) = *(this11 + INT64(0));
#line 99 "DefaultRectangular.chpl"
  wrap_call_tmp6 = _construct_DefaultRectangularDom(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, call_tmp4, &this11, this6, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  this5 = wrap_call_tmp6;
#line 100 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(100), INT64(25));
#line 100 "DefaultRectangular.chpl"
  call_tmp5 = &((this5)->dist);
#line 100 "DefaultRectangular.chpl"
  *(call_tmp5) = dist2;
#line 99 "DefaultRectangular.chpl"
  return this5;
#line 99 "DefaultRectangular.chpl"
}

#line 99 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:114 */
#line 99 "DefaultRectangular.chpl"
static void dsiGetIndices(DefaultRectangularDom_1_int64_t_F this5, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn) {
#line 99 "DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_bounded_F ret;
#line 114 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(114), INT64(25));
#line 114 "DefaultRectangular.chpl"
  *(ret + INT64(0)) = *((this5)->ranges + INT64(0));
#line 114 "DefaultRectangular.chpl"
  *(*(_retArg) + INT64(0)) = *(ret + INT64(0));
#line 114 "DefaultRectangular.chpl"
  return;
#line 114 "DefaultRectangular.chpl"
}

#line 114 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:116 */
#line 114 "DefaultRectangular.chpl"
static void dsiSetIndices(DefaultRectangularDom_1_int64_t_F this5, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, int32_t _fn) {
#line 114 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp = NULL;
#line 121 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(121), INT64(25));
#line 121 "DefaultRectangular.chpl"
  call_tmp = &((this5)->ranges);
#line 121 "DefaultRectangular.chpl"
  *(*(call_tmp) + INT64(0)) = *(*(x) + INT64(0));
#line 116 "DefaultRectangular.chpl"
  return;
#line 116 "DefaultRectangular.chpl"
}

#line 116 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:452 */
#line 116 "DefaultRectangular.chpl"
static chpl_bool dsiMember(DefaultRectangularDom_1_int64_t_F this5, _tuple_1_star_int64_t* const ind, int64_t _ln, int32_t _fn) {
#line 116 "DefaultRectangular.chpl"
  chpl_bool ret;
#line 116 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F call_tmp = NULL;
#line 116 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 116 "DefaultRectangular.chpl"
  int64_t coerce_tmp;
#line 116 "DefaultRectangular.chpl"
  chpl_bool ret2;
#line 116 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 116 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 116 "DefaultRectangular.chpl"
  int64_t coerce_tmp3;
#line 116 "DefaultRectangular.chpl"
  chpl_bool call_tmp3;
#line 116 "DefaultRectangular.chpl"
  chpl_bool call_tmp4;
#line 454 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(454), INT64(25));
#line 454 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->ranges);
#line 454 "DefaultRectangular.chpl"
  call_tmp = (*(_this_tmp_) + INT64(0));
#line 454 "DefaultRectangular.chpl"
  coerce_tmp = *(*(ind) + INT64(0));
#line 454 "DefaultRectangular.chpl"
  chpl_check_nil(call_tmp, INT64(454), INT64(25));
#line 454 "DefaultRectangular.chpl"
  coerce_tmp2 = (call_tmp)->_high;
#line 454 "DefaultRectangular.chpl"
  call_tmp2 = (coerce_tmp > coerce_tmp2);
#line 454 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 454 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 454 "DefaultRectangular.chpl"
  {
#line 454 "DefaultRectangular.chpl"
    ret2 = UINT8(false);
#line 454 "DefaultRectangular.chpl"
    goto _end_member;
#line 454 "DefaultRectangular.chpl"
  }
#line 454 "DefaultRectangular.chpl"
  chpl_check_nil(call_tmp, INT64(454), INT64(25));
#line 454 "DefaultRectangular.chpl"
  coerce_tmp3 = (call_tmp)->_low;
#line 454 "DefaultRectangular.chpl"
  call_tmp3 = (coerce_tmp < coerce_tmp3);
#line 454 "DefaultRectangular.chpl"
  if (call_tmp3) /* ZLINE: 454 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 454 "DefaultRectangular.chpl"
  {
#line 454 "DefaultRectangular.chpl"
    ret2 = UINT8(false);
#line 454 "DefaultRectangular.chpl"
    goto _end_member;
#line 454 "DefaultRectangular.chpl"
  }
#line 454 "DefaultRectangular.chpl"
  ret2 = UINT8(true);
#line 454 "DefaultRectangular.chpl"
  _end_member:;
#line 454 "DefaultRectangular.chpl"
  call_tmp4 = (! ret2);
#line 454 "DefaultRectangular.chpl"
  if (call_tmp4) /* ZLINE: 454 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 454 "DefaultRectangular.chpl"
  {
#line 455 "DefaultRectangular.chpl"
    ret = UINT8(false);
#line 455 "DefaultRectangular.chpl"
    goto _end_dsiMember;
#line 455 "DefaultRectangular.chpl"
  }
#line 456 "DefaultRectangular.chpl"
  ret = UINT8(true);
#line 456 "DefaultRectangular.chpl"
  _end_dsiMember:;
#line 452 "DefaultRectangular.chpl"
  return ret;
#line 452 "DefaultRectangular.chpl"
}

#line 452 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:480 */
#line 452 "DefaultRectangular.chpl"
static void dsiDim(DefaultRectangularDom_1_int64_t_F this5, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn) {
#line 452 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret;
#line 452 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 481 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(481), INT64(25));
#line 481 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->ranges);
#line 481 "DefaultRectangular.chpl"
  ret = *(*(_this_tmp_) + INT64(0));
#line 481 "DefaultRectangular.chpl"
  *(_retArg) = ret;
#line 480 "DefaultRectangular.chpl"
  return;
#line 480 "DefaultRectangular.chpl"
}

#line 480 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:483 */
#line 480 "DefaultRectangular.chpl"
static int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 480 "DefaultRectangular.chpl"
  int64_t sum;
#line 480 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F call_tmp = NULL;
#line 480 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 480 "DefaultRectangular.chpl"
  int64_t call_tmp2;
#line 484 "DefaultRectangular.chpl"
  sum = INT64(1);
#line 486 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(486), INT64(25));
#line 486 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->ranges);
#line 486 "DefaultRectangular.chpl"
  call_tmp = (*(_this_tmp_) + INT64(0));
#line 486 "DefaultRectangular.chpl"
  chpl_check_nil(call_tmp, INT64(486), INT64(25));
#line 486 "DefaultRectangular.chpl"
  call_tmp2 = length(call_tmp, _ln, _fn);
#line 486 "DefaultRectangular.chpl"
  sum *= call_tmp2;
#line 483 "DefaultRectangular.chpl"
  return sum;
#line 483 "DefaultRectangular.chpl"
}

#line 483 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:491 */
#line 483 "DefaultRectangular.chpl"
static int64_t dsiLow(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 483 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F call_tmp = NULL;
#line 483 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 483 "DefaultRectangular.chpl"
  int64_t ret;
#line 493 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(493), INT64(25));
#line 493 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->ranges);
#line 493 "DefaultRectangular.chpl"
  call_tmp = (*(_this_tmp_) + INT64(0));
#line 493 "DefaultRectangular.chpl"
  chpl_check_nil(call_tmp, INT64(493), INT64(25));
#line 493 "DefaultRectangular.chpl"
  ret = (call_tmp)->_low;
#line 491 "DefaultRectangular.chpl"
  return ret;
#line 491 "DefaultRectangular.chpl"
}

#line 491 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:579 */
#line 491 "DefaultRectangular.chpl"
static DefaultRectangularArr_int64_t_1_int64_t_F dsiBuildArray5(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 491 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F this6 = NULL;
#line 491 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 491 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 491 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_4;
#line 491 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 491 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_5;
#line 491 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 491 "DefaultRectangular.chpl"
  atomic_int_least64_t ret;
#line 491 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 491 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 491 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 491 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 491 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 491 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this9;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 491 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp3 = NULL;
#line 491 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp4 = NULL;
#line 491 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp3;
#line 491 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F wrap_call_tmp4 = NULL;
#line 580 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_int64_t_1_int64_t_F_object);
#line 580 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(25), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularArr_int64_t_1_int64_t_F)(cast_tmp));
#line 580 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dom = nil;
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->data = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->shiftedData = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_low = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_high = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_stride = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_alignment = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_aligned = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = _init_class_tmp_4;
#line 580 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_5;
#line 580 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 580 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 580 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 580 "DefaultRectangular.chpl"
  (&this8)->_v = ret;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 580 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 580 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dom = this5;
#line 580 "DefaultRectangular.chpl"
  *(this9 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(this9 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(this10 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(this11 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_int64_t)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->data = call_tmp3;
#line 580 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_int64_t)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->shiftedData = call_tmp4;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = wrap_call_tmp3;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_DefaultRectangularArr2(&wrap_call_tmp2, call_tmp2, this5, &this9, &this10, &this11, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this6, _ln, _fn);
#line 579 "DefaultRectangular.chpl"
  return wrap_call_tmp4;
#line 579 "DefaultRectangular.chpl"
}

#line 579 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:579 */
#line 579 "DefaultRectangular.chpl"
static DefaultRectangularArr_string_1_int64_t_F dsiBuildArray(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_string_1_int64_t_F this6 = NULL;
#line 579 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 579 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 579 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_4;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_5;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 579 "DefaultRectangular.chpl"
  atomic_int_least64_t ret;
#line 579 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 579 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 579 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this9;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 579 "DefaultRectangular.chpl"
  _ddata_string call_tmp3 = NULL;
#line 579 "DefaultRectangular.chpl"
  _ddata_string call_tmp4 = NULL;
#line 579 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp3;
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_string_1_int64_t_F wrap_call_tmp4 = NULL;
#line 580 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_string_1_int64_t_F_object);
#line 580 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(30), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularArr_string_1_int64_t_F)(cast_tmp));
#line 580 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularArr_string_1_int64_t_F;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dom = nil;
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->data = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->shiftedData = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_low = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_high = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_stride = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_alignment = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_aligned = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = _init_class_tmp_4;
#line 580 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_5;
#line 580 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 580 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 580 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 580 "DefaultRectangular.chpl"
  (&this8)->_v = ret;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 580 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 580 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dom = this5;
#line 580 "DefaultRectangular.chpl"
  *(this9 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(this9 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(this10 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(this11 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_string)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->data = call_tmp3;
#line 580 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_string)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->shiftedData = call_tmp4;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = wrap_call_tmp3;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_DefaultRectangularArr3(&wrap_call_tmp2, call_tmp2, this5, &this9, &this10, &this11, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this6, _ln, _fn);
#line 579 "DefaultRectangular.chpl"
  return wrap_call_tmp4;
#line 579 "DefaultRectangular.chpl"
}

#line 579 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:579 */
#line 579 "DefaultRectangular.chpl"
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F dsiBuildArray4(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6 = NULL;
#line 579 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 579 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 579 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_4;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_5;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 579 "DefaultRectangular.chpl"
  atomic_int_least64_t ret;
#line 579 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 579 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 579 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this9;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 579 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp3 = NULL;
#line 579 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp4 = NULL;
#line 579 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp3;
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F wrap_call_tmp4 = NULL;
#line 580 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F_object);
#line 580 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(28), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F)(cast_tmp));
#line 580 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dom = nil;
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->data = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->shiftedData = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_low = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_high = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_stride = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_alignment = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_aligned = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = _init_class_tmp_4;
#line 580 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_5;
#line 580 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 580 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 580 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 580 "DefaultRectangular.chpl"
  (&this8)->_v = ret;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 580 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 580 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dom = this5;
#line 580 "DefaultRectangular.chpl"
  *(this9 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(this9 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(this10 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(this11 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->data = call_tmp3;
#line 580 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->shiftedData = call_tmp4;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = wrap_call_tmp3;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_DefaultRectangularArr(&wrap_call_tmp2, call_tmp2, this5, &this9, &this10, &this11, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this6, _ln, _fn);
#line 579 "DefaultRectangular.chpl"
  return wrap_call_tmp4;
#line 579 "DefaultRectangular.chpl"
}

#line 579 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:579 */
#line 579 "DefaultRectangular.chpl"
static DefaultRectangularArr_localesSignal_1_int64_t_F dsiBuildArray2(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this6 = NULL;
#line 579 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 579 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 579 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_4;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_5;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 579 "DefaultRectangular.chpl"
  atomic_int_least64_t ret;
#line 579 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 579 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 579 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this9;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 579 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp3 = NULL;
#line 579 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp4 = NULL;
#line 579 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp3;
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp4 = NULL;
#line 580 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object);
#line 580 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(19), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(cast_tmp));
#line 580 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dom = nil;
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->data = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->shiftedData = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_low = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_high = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_stride = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_alignment = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_aligned = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = _init_class_tmp_4;
#line 580 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_5;
#line 580 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 580 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 580 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 580 "DefaultRectangular.chpl"
  (&this8)->_v = ret;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 580 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 580 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dom = this5;
#line 580 "DefaultRectangular.chpl"
  *(this9 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(this9 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(this10 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(this11 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_localesSignal)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->data = call_tmp3;
#line 580 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_localesSignal)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->shiftedData = call_tmp4;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = wrap_call_tmp3;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_DefaultRectangularArr4(&wrap_call_tmp2, call_tmp2, this5, &this9, &this10, &this11, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this6, _ln, _fn);
#line 579 "DefaultRectangular.chpl"
  return wrap_call_tmp4;
#line 579 "DefaultRectangular.chpl"
}

#line 579 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:579 */
#line 579 "DefaultRectangular.chpl"
static DefaultRectangularArr_locale_1_int64_t_F dsiBuildArray3(DefaultRectangularDom_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F this6 = NULL;
#line 579 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 579 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 579 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_4;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_5;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 579 "DefaultRectangular.chpl"
  atomic_int_least64_t ret;
#line 579 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 579 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 579 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this9;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 579 "DefaultRectangular.chpl"
  _ddata_locale call_tmp3 = NULL;
#line 579 "DefaultRectangular.chpl"
  _ddata_locale call_tmp4 = NULL;
#line 579 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp3;
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp4 = NULL;
#line 580 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_locale_1_int64_t_F_object);
#line 580 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(11), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularArr_locale_1_int64_t_F)(cast_tmp));
#line 580 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularArr_locale_1_int64_t_F;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dom = nil;
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->data = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->shiftedData = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_low = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_high = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_stride = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_alignment = INT64(0);
#line 580 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_aligned = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = _init_class_tmp_4;
#line 580 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_5;
#line 580 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 580 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 580 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 580 "DefaultRectangular.chpl"
  (&this8)->_v = ret;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 580 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 580 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dom = this5;
#line 580 "DefaultRectangular.chpl"
  *(this9 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(this9 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(this10 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(this11 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_locale)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->data = call_tmp3;
#line 580 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_locale)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->shiftedData = call_tmp4;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(580), INT64(25));
#line 580 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = wrap_call_tmp3;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_DefaultRectangularArr5(&wrap_call_tmp2, call_tmp2, this5, &this9, &this10, &this11, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this6, _ln, _fn);
#line 579 "DefaultRectangular.chpl"
  return wrap_call_tmp4;
#line 579 "DefaultRectangular.chpl"
}

#line 579 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:584 */
#line 579 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiBuildRectangularDom(DefaultRectangularDom_1_int64_t_F this5, _tuple_1_star_range_int64_t_bounded_F* const ranges, int64_t _ln, int32_t _fn) {
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F dom = NULL;
#line 579 "DefaultRectangular.chpl"
  DefaultDist coerce_tmp = NULL;
#line 579 "DefaultRectangular.chpl"
  int64_t _ic__F1_high;
#line 579 "DefaultRectangular.chpl"
  int64_t i;
#line 579 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F call_tmp = NULL;
#line 579 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F call_tmp2 = NULL;
#line 579 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp2;
#line 588 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(588), INT64(25));
#line 588 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dist;
#line 588 "DefaultRectangular.chpl"
  dom = DefaultRectangularDom(coerce_tmp, _ln, _fn);
#line 589 "DefaultRectangular.chpl"
  _ic__F1_high = INT64(1);
#line 589 "DefaultRectangular.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(1), INT64(1), INT64(1), INT64(1), UINT8(true), _ln, _fn);
#line 589 "DefaultRectangular.chpl"
  for (i = INT64(1); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 590 "DefaultRectangular.chpl"
    chpl_check_nil(dom, INT64(590), INT64(25));
#line 590 "DefaultRectangular.chpl"
    _this_tmp_ = &((dom)->ranges);
#line 590 "DefaultRectangular.chpl"
    chpl_check_nil(_this_tmp_, INT64(590), INT64(25));
#line 590 "DefaultRectangular.chpl"
    call_tmp = this4(_this_tmp_, i, _ln, _fn);
#line 590 "DefaultRectangular.chpl"
    _ref_tmp_ = ranges;
#line 590 "DefaultRectangular.chpl"
    chpl_check_nil(_ref_tmp_, INT64(590), INT64(25));
#line 590 "DefaultRectangular.chpl"
    call_tmp2 = this4(_ref_tmp_, i, _ln, _fn);
#line 590 "DefaultRectangular.chpl"
    coerce_tmp2 = *(call_tmp2);
#line 590 "DefaultRectangular.chpl"
    *(call_tmp) = coerce_tmp2;
#line 590 "DefaultRectangular.chpl"
  }
#line 584 "DefaultRectangular.chpl"
  return dom;
#line 584 "DefaultRectangular.chpl"
}

#line 584 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 584 "DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularArr3(DefaultRectangularArr_string_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 584 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 584 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 584 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 584 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 629 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(this5));
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  call_tmp = &((_field_destructor_tmp_2)->_v);
#line 629 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 629 "DefaultRectangular.chpl"
  return;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 629 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 629 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(this5));
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  call_tmp = &((_field_destructor_tmp_2)->_v);
#line 629 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 629 "DefaultRectangular.chpl"
  return;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 629 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 629 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(this5));
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  call_tmp = &((_field_destructor_tmp_2)->_v);
#line 629 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 629 "DefaultRectangular.chpl"
  return;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularArr5(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 629 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 629 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(this5));
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  call_tmp = &((_field_destructor_tmp_2)->_v);
#line 629 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 629 "DefaultRectangular.chpl"
  return;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularArr4(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 629 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 629 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(this5));
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  call_tmp = &((_field_destructor_tmp_2)->_v);
#line 629 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp);
#line 629 "DefaultRectangular.chpl"
  return;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularArr_string_1_int64_t_F _construct_DefaultRectangularArr3(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_string data, _ddata_string shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_string_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularArr_string_1_int64_t_F this5 = NULL;
#line 629 "DefaultRectangular.chpl"
  BaseArr T = NULL;
#line 629 "DefaultRectangular.chpl"
  this5 = meme;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  T = &((this5)->super);
#line 629 "DefaultRectangular.chpl"
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
#line 635 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(635), INT64(25));
#line 635 "DefaultRectangular.chpl"
  (this5)->dom = dom;
#line 637 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(637), INT64(25));
#line 637 "DefaultRectangular.chpl"
  *((this5)->off + INT64(0)) = *(*(off) + INT64(0));
#line 638 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(638), INT64(25));
#line 638 "DefaultRectangular.chpl"
  *((this5)->blk + INT64(0)) = *(*(blk) + INT64(0));
#line 639 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(639), INT64(25));
#line 639 "DefaultRectangular.chpl"
  *((this5)->str + INT64(0)) = *(*(str) + INT64(0));
#line 640 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(640), INT64(25));
#line 640 "DefaultRectangular.chpl"
  (this5)->origin = origin;
#line 641 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(641), INT64(25));
#line 641 "DefaultRectangular.chpl"
  (this5)->factoredOffs = factoredOffs;
#line 643 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(643), INT64(25));
#line 643 "DefaultRectangular.chpl"
  (this5)->data = data;
#line 645 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(645), INT64(25));
#line 645 "DefaultRectangular.chpl"
  (this5)->shiftedData = shiftedData;
#line 646 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(646), INT64(25));
#line 646 "DefaultRectangular.chpl"
  (this5)->noinit_data = noinit_data;
#line 653 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(653), INT64(25));
#line 653 "DefaultRectangular.chpl"
  (this5)->dataAllocRange = *(dataAllocRange);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  initialize7(this5, _ln, _fn);
#line 629 "DefaultRectangular.chpl"
  return this5;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _construct_DefaultRectangularArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_c_ptr_GtkWidget data, _ddata_c_ptr_GtkWidget shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5 = NULL;
#line 629 "DefaultRectangular.chpl"
  BaseArr T = NULL;
#line 629 "DefaultRectangular.chpl"
  this5 = meme;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  T = &((this5)->super);
#line 629 "DefaultRectangular.chpl"
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
#line 635 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(635), INT64(25));
#line 635 "DefaultRectangular.chpl"
  (this5)->dom = dom;
#line 637 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(637), INT64(25));
#line 637 "DefaultRectangular.chpl"
  *((this5)->off + INT64(0)) = *(*(off) + INT64(0));
#line 638 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(638), INT64(25));
#line 638 "DefaultRectangular.chpl"
  *((this5)->blk + INT64(0)) = *(*(blk) + INT64(0));
#line 639 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(639), INT64(25));
#line 639 "DefaultRectangular.chpl"
  *((this5)->str + INT64(0)) = *(*(str) + INT64(0));
#line 640 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(640), INT64(25));
#line 640 "DefaultRectangular.chpl"
  (this5)->origin = origin;
#line 641 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(641), INT64(25));
#line 641 "DefaultRectangular.chpl"
  (this5)->factoredOffs = factoredOffs;
#line 643 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(643), INT64(25));
#line 643 "DefaultRectangular.chpl"
  (this5)->data = data;
#line 645 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(645), INT64(25));
#line 645 "DefaultRectangular.chpl"
  (this5)->shiftedData = shiftedData;
#line 646 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(646), INT64(25));
#line 646 "DefaultRectangular.chpl"
  (this5)->noinit_data = noinit_data;
#line 653 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(653), INT64(25));
#line 653 "DefaultRectangular.chpl"
  (this5)->dataAllocRange = *(dataAllocRange);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  initialize9(this5, _ln, _fn);
#line 629 "DefaultRectangular.chpl"
  return this5;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularArr_int64_t_1_int64_t_F _construct_DefaultRectangularArr2(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_int64_t data, _ddata_int64_t shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_int64_t_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F this5 = NULL;
#line 629 "DefaultRectangular.chpl"
  BaseArr T = NULL;
#line 629 "DefaultRectangular.chpl"
  this5 = meme;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  T = &((this5)->super);
#line 629 "DefaultRectangular.chpl"
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
#line 635 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(635), INT64(25));
#line 635 "DefaultRectangular.chpl"
  (this5)->dom = dom;
#line 637 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(637), INT64(25));
#line 637 "DefaultRectangular.chpl"
  *((this5)->off + INT64(0)) = *(*(off) + INT64(0));
#line 638 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(638), INT64(25));
#line 638 "DefaultRectangular.chpl"
  *((this5)->blk + INT64(0)) = *(*(blk) + INT64(0));
#line 639 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(639), INT64(25));
#line 639 "DefaultRectangular.chpl"
  *((this5)->str + INT64(0)) = *(*(str) + INT64(0));
#line 640 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(640), INT64(25));
#line 640 "DefaultRectangular.chpl"
  (this5)->origin = origin;
#line 641 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(641), INT64(25));
#line 641 "DefaultRectangular.chpl"
  (this5)->factoredOffs = factoredOffs;
#line 643 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(643), INT64(25));
#line 643 "DefaultRectangular.chpl"
  (this5)->data = data;
#line 645 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(645), INT64(25));
#line 645 "DefaultRectangular.chpl"
  (this5)->shiftedData = shiftedData;
#line 646 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(646), INT64(25));
#line 646 "DefaultRectangular.chpl"
  (this5)->noinit_data = noinit_data;
#line 653 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(653), INT64(25));
#line 653 "DefaultRectangular.chpl"
  (this5)->dataAllocRange = *(dataAllocRange);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  initialize6(this5, _ln, _fn);
#line 629 "DefaultRectangular.chpl"
  return this5;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct_DefaultRectangularArr4(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_localesSignal data, _ddata_localesSignal shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this5 = NULL;
#line 629 "DefaultRectangular.chpl"
  BaseArr T = NULL;
#line 629 "DefaultRectangular.chpl"
  this5 = meme;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  T = &((this5)->super);
#line 629 "DefaultRectangular.chpl"
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
#line 635 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(635), INT64(25));
#line 635 "DefaultRectangular.chpl"
  (this5)->dom = dom;
#line 637 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(637), INT64(25));
#line 637 "DefaultRectangular.chpl"
  *((this5)->off + INT64(0)) = *(*(off) + INT64(0));
#line 638 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(638), INT64(25));
#line 638 "DefaultRectangular.chpl"
  *((this5)->blk + INT64(0)) = *(*(blk) + INT64(0));
#line 639 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(639), INT64(25));
#line 639 "DefaultRectangular.chpl"
  *((this5)->str + INT64(0)) = *(*(str) + INT64(0));
#line 640 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(640), INT64(25));
#line 640 "DefaultRectangular.chpl"
  (this5)->origin = origin;
#line 641 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(641), INT64(25));
#line 641 "DefaultRectangular.chpl"
  (this5)->factoredOffs = factoredOffs;
#line 643 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(643), INT64(25));
#line 643 "DefaultRectangular.chpl"
  (this5)->data = data;
#line 645 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(645), INT64(25));
#line 645 "DefaultRectangular.chpl"
  (this5)->shiftedData = shiftedData;
#line 646 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(646), INT64(25));
#line 646 "DefaultRectangular.chpl"
  (this5)->noinit_data = noinit_data;
#line 653 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(653), INT64(25));
#line 653 "DefaultRectangular.chpl"
  (this5)->dataAllocRange = *(dataAllocRange);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  initialize8(this5, _ln, _fn);
#line 629 "DefaultRectangular.chpl"
  return this5;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularArr_locale_1_int64_t_F _construct_DefaultRectangularArr5(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_locale data, _ddata_locale shiftedData, chpl_bool noinit_data, range_int64_t_bounded_F* const dataAllocRange, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, int32_t _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F this5 = NULL;
#line 629 "DefaultRectangular.chpl"
  BaseArr T = NULL;
#line 629 "DefaultRectangular.chpl"
  this5 = meme;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  T = &((this5)->super);
#line 629 "DefaultRectangular.chpl"
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
#line 635 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(635), INT64(25));
#line 635 "DefaultRectangular.chpl"
  (this5)->dom = dom;
#line 637 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(637), INT64(25));
#line 637 "DefaultRectangular.chpl"
  *((this5)->off + INT64(0)) = *(*(off) + INT64(0));
#line 638 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(638), INT64(25));
#line 638 "DefaultRectangular.chpl"
  *((this5)->blk + INT64(0)) = *(*(blk) + INT64(0));
#line 639 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(639), INT64(25));
#line 639 "DefaultRectangular.chpl"
  *((this5)->str + INT64(0)) = *(*(str) + INT64(0));
#line 640 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(640), INT64(25));
#line 640 "DefaultRectangular.chpl"
  (this5)->origin = origin;
#line 641 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(641), INT64(25));
#line 641 "DefaultRectangular.chpl"
  (this5)->factoredOffs = factoredOffs;
#line 643 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(643), INT64(25));
#line 643 "DefaultRectangular.chpl"
  (this5)->data = data;
#line 645 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(645), INT64(25));
#line 645 "DefaultRectangular.chpl"
  (this5)->shiftedData = shiftedData;
#line 646 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(646), INT64(25));
#line 646 "DefaultRectangular.chpl"
  (this5)->noinit_data = noinit_data;
#line 653 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(653), INT64(25));
#line 653 "DefaultRectangular.chpl"
  (this5)->dataAllocRange = *(dataAllocRange);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(629), INT64(25));
#line 629 "DefaultRectangular.chpl"
  initialize10(this5, _ln, _fn);
#line 629 "DefaultRectangular.chpl"
  return this5;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:668 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom5(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 668 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(668), INT64(25));
#line 668 "DefaultRectangular.chpl"
  ret = (this5)->dom;
#line 668 "DefaultRectangular.chpl"
  return ret;
#line 668 "DefaultRectangular.chpl"
}

#line 668 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:668 */
#line 668 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom2(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 668 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 668 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(668), INT64(25));
#line 668 "DefaultRectangular.chpl"
  ret = (this5)->dom;
#line 668 "DefaultRectangular.chpl"
  return ret;
#line 668 "DefaultRectangular.chpl"
}

#line 668 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:668 */
#line 668 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom3(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 668 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 668 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(668), INT64(25));
#line 668 "DefaultRectangular.chpl"
  ret = (this5)->dom;
#line 668 "DefaultRectangular.chpl"
  return ret;
#line 668 "DefaultRectangular.chpl"
}

#line 668 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:668 */
#line 668 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom4(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 668 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 668 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(668), INT64(25));
#line 668 "DefaultRectangular.chpl"
  ret = (this5)->dom;
#line 668 "DefaultRectangular.chpl"
  return ret;
#line 668 "DefaultRectangular.chpl"
}

#line 668 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:668 */
#line 668 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom6(DefaultRectangularArr_string_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 668 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 668 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(668), INT64(25));
#line 668 "DefaultRectangular.chpl"
  ret = (this5)->dom;
#line 668 "DefaultRectangular.chpl"
  return ret;
#line 668 "DefaultRectangular.chpl"
}

#line 668 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:670 */
#line 668 "DefaultRectangular.chpl"
static void dsiDestroyData3(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 668 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 668 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 668 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 668 "DefaultRectangular.chpl"
  _ddata_locale dv = NULL;
#line 668 "DefaultRectangular.chpl"
  _ddata_locale coerce_tmp2 = NULL;
#line 671 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(671), INT64(25));
#line 671 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dom;
#line 671 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(671), INT64(25));
#line 671 "DefaultRectangular.chpl"
  call_tmp = dsiNumIndices(coerce_tmp, _ln, _fn);
#line 671 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp > INT64(0));
#line 671 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 672 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 671 "DefaultRectangular.chpl"
  {
#line 673 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(673), INT64(25));
#line 673 "DefaultRectangular.chpl"
    dv = (this5)->data;
#line 674 "DefaultRectangular.chpl"
  }
#line 686 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(686), INT64(25));
#line 686 "DefaultRectangular.chpl"
  coerce_tmp2 = (this5)->data;
#line 686 "DefaultRectangular.chpl"
  chpl_array_free(coerce_tmp2, _ln, _fn);
#line 670 "DefaultRectangular.chpl"
  return;
#line 670 "DefaultRectangular.chpl"
}

#line 670 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:670 */
#line 670 "DefaultRectangular.chpl"
static void dsiDestroyData4(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 670 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 670 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 670 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 670 "DefaultRectangular.chpl"
  _ddata_localesSignal dv = NULL;
#line 670 "DefaultRectangular.chpl"
  _ddata_localesSignal coerce_tmp2 = NULL;
#line 671 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(671), INT64(25));
#line 671 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dom;
#line 671 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(671), INT64(25));
#line 671 "DefaultRectangular.chpl"
  call_tmp = dsiNumIndices(coerce_tmp, _ln, _fn);
#line 671 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp > INT64(0));
#line 671 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 672 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 671 "DefaultRectangular.chpl"
  {
#line 673 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(673), INT64(25));
#line 673 "DefaultRectangular.chpl"
    dv = (this5)->data;
#line 674 "DefaultRectangular.chpl"
  }
#line 686 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(686), INT64(25));
#line 686 "DefaultRectangular.chpl"
  coerce_tmp2 = (this5)->data;
#line 686 "DefaultRectangular.chpl"
  chpl_array_free(coerce_tmp2, _ln, _fn);
#line 670 "DefaultRectangular.chpl"
  return;
#line 670 "DefaultRectangular.chpl"
}

#line 670 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:670 */
#line 670 "DefaultRectangular.chpl"
static void dsiDestroyData2(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 670 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 670 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 670 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 670 "DefaultRectangular.chpl"
  _ddata_int64_t dv = NULL;
#line 670 "DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp2 = NULL;
#line 671 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(671), INT64(25));
#line 671 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dom;
#line 671 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(671), INT64(25));
#line 671 "DefaultRectangular.chpl"
  call_tmp = dsiNumIndices(coerce_tmp, _ln, _fn);
#line 671 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp > INT64(0));
#line 671 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 672 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 671 "DefaultRectangular.chpl"
  {
#line 673 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(673), INT64(25));
#line 673 "DefaultRectangular.chpl"
    dv = (this5)->data;
#line 674 "DefaultRectangular.chpl"
  }
#line 686 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(686), INT64(25));
#line 686 "DefaultRectangular.chpl"
  coerce_tmp2 = (this5)->data;
#line 686 "DefaultRectangular.chpl"
  chpl_array_free(coerce_tmp2, _ln, _fn);
#line 670 "DefaultRectangular.chpl"
  return;
#line 670 "DefaultRectangular.chpl"
}

#line 670 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:670 */
#line 670 "DefaultRectangular.chpl"
static void dsiDestroyData5(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 670 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 670 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 670 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 670 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget dv = NULL;
#line 670 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 670 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
#line 670 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 670 "DefaultRectangular.chpl"
  int64_t _ic__F1_high;
#line 670 "DefaultRectangular.chpl"
  int64_t i;
#line 670 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget dv2 = NULL;
#line 670 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp3 = NULL;
#line 671 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(671), INT64(25));
#line 671 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dom;
#line 671 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(671), INT64(25));
#line 671 "DefaultRectangular.chpl"
  call_tmp = dsiNumIndices(coerce_tmp, _ln, _fn);
#line 671 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp > INT64(0));
#line 671 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 672 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 671 "DefaultRectangular.chpl"
  {
#line 673 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(673), INT64(25));
#line 673 "DefaultRectangular.chpl"
    dv = (this5)->data;
#line 677 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(677), INT64(25));
#line 677 "DefaultRectangular.chpl"
    coerce_tmp2 = (this5)->dom;
#line 677 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp2, INT64(677), INT64(25));
#line 677 "DefaultRectangular.chpl"
    call_tmp3 = dsiNumIndices(coerce_tmp2, _ln, _fn);
#line 677 "DefaultRectangular.chpl"
    call_tmp4 = (call_tmp3 - INT64(1));
#line 677 "DefaultRectangular.chpl"
    _ic__F1_high = call_tmp4;
#line 677 "DefaultRectangular.chpl"
    chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp4, INT64(1), INT64(0), call_tmp4, UINT8(true), _ln, _fn);
#line 679 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(679), INT64(25));
#line 679 "DefaultRectangular.chpl"
    dv2 = (this5)->data;
#line 677 "DefaultRectangular.chpl"
    for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 680 "DefaultRectangular.chpl"
    }
#line 680 "DefaultRectangular.chpl"
  }
#line 686 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(686), INT64(25));
#line 686 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->data;
#line 686 "DefaultRectangular.chpl"
  chpl_array_free(coerce_tmp3, _ln, _fn);
#line 670 "DefaultRectangular.chpl"
  return;
#line 670 "DefaultRectangular.chpl"
}

#line 670 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:670 */
#line 670 "DefaultRectangular.chpl"
static void dsiDestroyData6(DefaultRectangularArr_string_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 670 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 670 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 670 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 670 "DefaultRectangular.chpl"
  _ddata_string dv = NULL;
#line 670 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 670 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
#line 670 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 670 "DefaultRectangular.chpl"
  int64_t _ic__F1_high;
#line 670 "DefaultRectangular.chpl"
  int64_t i;
#line 670 "DefaultRectangular.chpl"
  _ddata_string dv2 = NULL;
#line 670 "DefaultRectangular.chpl"
  _ref_string er = NULL;
#line 670 "DefaultRectangular.chpl"
  string ev;
#line 670 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 670 "DefaultRectangular.chpl"
  _ddata_string coerce_tmp3 = NULL;
#line 671 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(671), INT64(25));
#line 671 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dom;
#line 671 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(671), INT64(25));
#line 671 "DefaultRectangular.chpl"
  call_tmp = dsiNumIndices(coerce_tmp, _ln, _fn);
#line 671 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp > INT64(0));
#line 671 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 672 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 671 "DefaultRectangular.chpl"
  {
#line 673 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(673), INT64(25));
#line 673 "DefaultRectangular.chpl"
    dv = (this5)->data;
#line 677 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(677), INT64(25));
#line 677 "DefaultRectangular.chpl"
    coerce_tmp2 = (this5)->dom;
#line 677 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp2, INT64(677), INT64(25));
#line 677 "DefaultRectangular.chpl"
    call_tmp3 = dsiNumIndices(coerce_tmp2, _ln, _fn);
#line 677 "DefaultRectangular.chpl"
    call_tmp4 = (call_tmp3 - INT64(1));
#line 677 "DefaultRectangular.chpl"
    _ic__F1_high = call_tmp4;
#line 677 "DefaultRectangular.chpl"
    chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp4, INT64(1), INT64(0), call_tmp4, UINT8(true), _ln, _fn);
#line 679 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(679), INT64(25));
#line 679 "DefaultRectangular.chpl"
    dv2 = (this5)->data;
#line 677 "DefaultRectangular.chpl"
    for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 680 "DefaultRectangular.chpl"
      er = (dv2 + i);
#line 681 "DefaultRectangular.chpl"
      ev = *(er);
#line 682 "DefaultRectangular.chpl"
      _ref_tmp_ = &ev;
#line 682 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_, _ln, _fn);
#line 682 "DefaultRectangular.chpl"
    }
#line 682 "DefaultRectangular.chpl"
  }
#line 686 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(686), INT64(25));
#line 686 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->data;
#line 686 "DefaultRectangular.chpl"
  chpl_array_free(coerce_tmp3, _ln, _fn);
#line 670 "DefaultRectangular.chpl"
  return;
#line 670 "DefaultRectangular.chpl"
}

#line 670 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:781 */
#line 670 "DefaultRectangular.chpl"
static void computeFactoredOffs2(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 670 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp = NULL;
#line 670 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 670 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 670 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 670 "DefaultRectangular.chpl"
  int64_t coerce_tmp;
#line 670 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 670 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 670 "DefaultRectangular.chpl"
  int64_t coerce_tmp3;
#line 670 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 782 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(782), INT64(25));
#line 782 "DefaultRectangular.chpl"
  call_tmp = &((this5)->factoredOffs);
#line 782 "DefaultRectangular.chpl"
  *(call_tmp) = INT64(0);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  call_tmp2 = &((this5)->factoredOffs);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->blk);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this5)->off);
#line 784 "DefaultRectangular.chpl"
  coerce_tmp = *(*(_this_tmp_) + INT64(0));
#line 784 "DefaultRectangular.chpl"
  coerce_tmp2 = *(*(_this_tmp_2) + INT64(0));
#line 784 "DefaultRectangular.chpl"
  call_tmp3 = (coerce_tmp * coerce_tmp2);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->factoredOffs;
#line 784 "DefaultRectangular.chpl"
  call_tmp4 = (coerce_tmp3 + call_tmp3);
#line 784 "DefaultRectangular.chpl"
  *(call_tmp2) = call_tmp4;
#line 781 "DefaultRectangular.chpl"
  return;
#line 781 "DefaultRectangular.chpl"
}

#line 781 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:781 */
#line 781 "DefaultRectangular.chpl"
static void computeFactoredOffs4(DefaultRectangularArr_string_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp3;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 782 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(782), INT64(25));
#line 782 "DefaultRectangular.chpl"
  call_tmp = &((this5)->factoredOffs);
#line 782 "DefaultRectangular.chpl"
  *(call_tmp) = INT64(0);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  call_tmp2 = &((this5)->factoredOffs);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->blk);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this5)->off);
#line 784 "DefaultRectangular.chpl"
  coerce_tmp = *(*(_this_tmp_) + INT64(0));
#line 784 "DefaultRectangular.chpl"
  coerce_tmp2 = *(*(_this_tmp_2) + INT64(0));
#line 784 "DefaultRectangular.chpl"
  call_tmp3 = (coerce_tmp * coerce_tmp2);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->factoredOffs;
#line 784 "DefaultRectangular.chpl"
  call_tmp4 = (coerce_tmp3 + call_tmp3);
#line 784 "DefaultRectangular.chpl"
  *(call_tmp2) = call_tmp4;
#line 781 "DefaultRectangular.chpl"
  return;
#line 781 "DefaultRectangular.chpl"
}

#line 781 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:781 */
#line 781 "DefaultRectangular.chpl"
static void computeFactoredOffs3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp3;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 782 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(782), INT64(25));
#line 782 "DefaultRectangular.chpl"
  call_tmp = &((this5)->factoredOffs);
#line 782 "DefaultRectangular.chpl"
  *(call_tmp) = INT64(0);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  call_tmp2 = &((this5)->factoredOffs);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->blk);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this5)->off);
#line 784 "DefaultRectangular.chpl"
  coerce_tmp = *(*(_this_tmp_) + INT64(0));
#line 784 "DefaultRectangular.chpl"
  coerce_tmp2 = *(*(_this_tmp_2) + INT64(0));
#line 784 "DefaultRectangular.chpl"
  call_tmp3 = (coerce_tmp * coerce_tmp2);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->factoredOffs;
#line 784 "DefaultRectangular.chpl"
  call_tmp4 = (coerce_tmp3 + call_tmp3);
#line 784 "DefaultRectangular.chpl"
  *(call_tmp2) = call_tmp4;
#line 781 "DefaultRectangular.chpl"
  return;
#line 781 "DefaultRectangular.chpl"
}

#line 781 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:781 */
#line 781 "DefaultRectangular.chpl"
static void computeFactoredOffs(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp3;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 782 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(782), INT64(25));
#line 782 "DefaultRectangular.chpl"
  call_tmp = &((this5)->factoredOffs);
#line 782 "DefaultRectangular.chpl"
  *(call_tmp) = INT64(0);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  call_tmp2 = &((this5)->factoredOffs);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->blk);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this5)->off);
#line 784 "DefaultRectangular.chpl"
  coerce_tmp = *(*(_this_tmp_) + INT64(0));
#line 784 "DefaultRectangular.chpl"
  coerce_tmp2 = *(*(_this_tmp_2) + INT64(0));
#line 784 "DefaultRectangular.chpl"
  call_tmp3 = (coerce_tmp * coerce_tmp2);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->factoredOffs;
#line 784 "DefaultRectangular.chpl"
  call_tmp4 = (coerce_tmp3 + call_tmp3);
#line 784 "DefaultRectangular.chpl"
  *(call_tmp2) = call_tmp4;
#line 781 "DefaultRectangular.chpl"
  return;
#line 781 "DefaultRectangular.chpl"
}

#line 781 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:781 */
#line 781 "DefaultRectangular.chpl"
static void computeFactoredOffs5(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp3;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 782 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(782), INT64(25));
#line 782 "DefaultRectangular.chpl"
  call_tmp = &((this5)->factoredOffs);
#line 782 "DefaultRectangular.chpl"
  *(call_tmp) = INT64(0);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  call_tmp2 = &((this5)->factoredOffs);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->blk);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this5)->off);
#line 784 "DefaultRectangular.chpl"
  coerce_tmp = *(*(_this_tmp_) + INT64(0));
#line 784 "DefaultRectangular.chpl"
  coerce_tmp2 = *(*(_this_tmp_2) + INT64(0));
#line 784 "DefaultRectangular.chpl"
  call_tmp3 = (coerce_tmp * coerce_tmp2);
#line 784 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(784), INT64(25));
#line 784 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->factoredOffs;
#line 784 "DefaultRectangular.chpl"
  call_tmp4 = (coerce_tmp3 + call_tmp3);
#line 784 "DefaultRectangular.chpl"
  *(call_tmp2) = call_tmp4;
#line 781 "DefaultRectangular.chpl"
  return;
#line 781 "DefaultRectangular.chpl"
}

#line 781 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:809 */
#line 781 "DefaultRectangular.chpl"
static void initialize7(DefaultRectangularArr_string_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 781 "DefaultRectangular.chpl"
  chpl_bool coerce_tmp;
#line 781 "DefaultRectangular.chpl"
  chpl_bool call_tmp;
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 781 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 781 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 781 "DefaultRectangular.chpl"
  int64_t ret;
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 781 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 781 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp3 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_4 = NULL;
#line 781 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp7;
#line 781 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 781 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp5;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 781 "DefaultRectangular.chpl"
  _ref__ddata_string call_tmp10 = NULL;
#line 781 "DefaultRectangular.chpl"
  string _formal_type_tmp_;
#line 781 "DefaultRectangular.chpl"
  _ddata_string call_tmp11 = NULL;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 781 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp6 = NULL;
#line 781 "DefaultRectangular.chpl"
  chpl_bool call_tmp13;
#line 781 "DefaultRectangular.chpl"
  _ref__ddata_string call_tmp14 = NULL;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp7;
#line 781 "DefaultRectangular.chpl"
  int64_t coerce_tmp8;
#line 781 "DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 781 "DefaultRectangular.chpl"
  _ddata_string coerce_tmp9 = NULL;
#line 781 "DefaultRectangular.chpl"
  _ddata_string call_tmp16 = NULL;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(810), INT64(25));
#line 810 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->noinit_data;
#line 810 "DefaultRectangular.chpl"
  call_tmp = (coerce_tmp == UINT8(true));
#line 810 "DefaultRectangular.chpl"
  if (call_tmp) /* ZLINE: 810 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 810 "DefaultRectangular.chpl"
  {
#line 810 "DefaultRectangular.chpl"
    goto _end_initialize;
#line 810 "DefaultRectangular.chpl"
  }
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->off);
#line 812 "DefaultRectangular.chpl"
  call_tmp2 = (*(_this_tmp_) + INT64(0));
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  coerce_tmp2 = (this5)->dom;
#line 812 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp3;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 812 "DefaultRectangular.chpl"
  ret = (&call_tmp3)->_low;
#line 812 "DefaultRectangular.chpl"
  *(call_tmp2) = ret;
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this5)->str);
#line 813 "DefaultRectangular.chpl"
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->dom;
#line 813 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp5;
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp3, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp3, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 813 "DefaultRectangular.chpl"
  *(call_tmp4) = INT64(1);
#line 815 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(815), INT64(25));
#line 815 "DefaultRectangular.chpl"
  _this_tmp_3 = &((this5)->blk);
#line 815 "DefaultRectangular.chpl"
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
#line 815 "DefaultRectangular.chpl"
  *(call_tmp6) = INT64(1);
#line 818 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(818), INT64(25));
#line 818 "DefaultRectangular.chpl"
  computeFactoredOffs4(this5, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  _this_tmp_4 = &((this5)->blk);
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  coerce_tmp4 = (this5)->dom;
#line 819 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp7;
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  _ref_tmp_ = &call_tmp7;
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(_ref_tmp_, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  coerce_tmp5 = *(*(_this_tmp_4) + INT64(0));
#line 819 "DefaultRectangular.chpl"
  call_tmp9 = (coerce_tmp5 * call_tmp8);
#line 820 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(820), INT64(25));
#line 820 "DefaultRectangular.chpl"
  call_tmp10 = &((this5)->data);
#line 820 "DefaultRectangular.chpl"
  call_tmp11 = ((_ddata_string)(nil));
#line 820 "DefaultRectangular.chpl"
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(string), _ln, _fn);
#line 820 "DefaultRectangular.chpl"
  init_elts3(call_tmp11, call_tmp9, _ln, _fn);
#line 820 "DefaultRectangular.chpl"
  *(call_tmp10) = call_tmp11;
#line 821 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
  coerce_tmp6 = (this5)->dom;
#line 821 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp6, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
  call_tmp12 = dsiNumIndices(coerce_tmp6, _ln, _fn);
#line 821 "DefaultRectangular.chpl"
  call_tmp13 = (call_tmp12 > INT64(0));
#line 821 "DefaultRectangular.chpl"
  if (call_tmp13) /* ZLINE: 821 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 821 "DefaultRectangular.chpl"
  {
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    call_tmp14 = &((this5)->shiftedData);
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp7 = (this5)->origin;
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp8 = (this5)->factoredOffs;
#line 821 "DefaultRectangular.chpl"
    call_tmp15 = (coerce_tmp7 - coerce_tmp8);
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp9 = (this5)->data;
#line 821 "DefaultRectangular.chpl"
    call_tmp16 = ((_ddata_string)(nil));
#line 821 "DefaultRectangular.chpl"
    call_tmp16 = (coerce_tmp9 + call_tmp15);
#line 821 "DefaultRectangular.chpl"
    *(call_tmp14) = call_tmp16;
#line 821 "DefaultRectangular.chpl"
  }
#line 821 "DefaultRectangular.chpl"
  _end_initialize:;
#line 809 "DefaultRectangular.chpl"
  return;
#line 809 "DefaultRectangular.chpl"
}

#line 809 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:809 */
#line 809 "DefaultRectangular.chpl"
static void initialize9(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 809 "DefaultRectangular.chpl"
  chpl_bool coerce_tmp;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t ret;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_4 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp7;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp5;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 809 "DefaultRectangular.chpl"
  _ref__ddata_c_ptr_GtkWidget call_tmp10 = NULL;
#line 809 "DefaultRectangular.chpl"
  c_ptr_GtkWidget _formal_type_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp11 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp6 = NULL;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp13;
#line 809 "DefaultRectangular.chpl"
  _ref__ddata_c_ptr_GtkWidget call_tmp14 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp7;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp8;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 809 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp9 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp16 = NULL;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(810), INT64(25));
#line 810 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->noinit_data;
#line 810 "DefaultRectangular.chpl"
  call_tmp = (coerce_tmp == UINT8(true));
#line 810 "DefaultRectangular.chpl"
  if (call_tmp) /* ZLINE: 810 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 810 "DefaultRectangular.chpl"
  {
#line 810 "DefaultRectangular.chpl"
    goto _end_initialize;
#line 810 "DefaultRectangular.chpl"
  }
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->off);
#line 812 "DefaultRectangular.chpl"
  call_tmp2 = (*(_this_tmp_) + INT64(0));
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  coerce_tmp2 = (this5)->dom;
#line 812 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp3;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 812 "DefaultRectangular.chpl"
  ret = (&call_tmp3)->_low;
#line 812 "DefaultRectangular.chpl"
  *(call_tmp2) = ret;
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this5)->str);
#line 813 "DefaultRectangular.chpl"
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->dom;
#line 813 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp5;
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp3, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp3, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 813 "DefaultRectangular.chpl"
  *(call_tmp4) = INT64(1);
#line 815 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(815), INT64(25));
#line 815 "DefaultRectangular.chpl"
  _this_tmp_3 = &((this5)->blk);
#line 815 "DefaultRectangular.chpl"
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
#line 815 "DefaultRectangular.chpl"
  *(call_tmp6) = INT64(1);
#line 818 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(818), INT64(25));
#line 818 "DefaultRectangular.chpl"
  computeFactoredOffs3(this5, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  _this_tmp_4 = &((this5)->blk);
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  coerce_tmp4 = (this5)->dom;
#line 819 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp7;
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  _ref_tmp_ = &call_tmp7;
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(_ref_tmp_, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  coerce_tmp5 = *(*(_this_tmp_4) + INT64(0));
#line 819 "DefaultRectangular.chpl"
  call_tmp9 = (coerce_tmp5 * call_tmp8);
#line 820 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(820), INT64(25));
#line 820 "DefaultRectangular.chpl"
  call_tmp10 = &((this5)->data);
#line 820 "DefaultRectangular.chpl"
  call_tmp11 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 820 "DefaultRectangular.chpl"
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(c_ptr_GtkWidget), _ln, _fn);
#line 820 "DefaultRectangular.chpl"
  init_elts4(call_tmp11, call_tmp9, _ln, _fn);
#line 820 "DefaultRectangular.chpl"
  *(call_tmp10) = call_tmp11;
#line 821 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
  coerce_tmp6 = (this5)->dom;
#line 821 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp6, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
  call_tmp12 = dsiNumIndices(coerce_tmp6, _ln, _fn);
#line 821 "DefaultRectangular.chpl"
  call_tmp13 = (call_tmp12 > INT64(0));
#line 821 "DefaultRectangular.chpl"
  if (call_tmp13) /* ZLINE: 821 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 821 "DefaultRectangular.chpl"
  {
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    call_tmp14 = &((this5)->shiftedData);
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp7 = (this5)->origin;
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp8 = (this5)->factoredOffs;
#line 821 "DefaultRectangular.chpl"
    call_tmp15 = (coerce_tmp7 - coerce_tmp8);
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp9 = (this5)->data;
#line 821 "DefaultRectangular.chpl"
    call_tmp16 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 821 "DefaultRectangular.chpl"
    call_tmp16 = (coerce_tmp9 + call_tmp15);
#line 821 "DefaultRectangular.chpl"
    *(call_tmp14) = call_tmp16;
#line 821 "DefaultRectangular.chpl"
  }
#line 821 "DefaultRectangular.chpl"
  _end_initialize:;
#line 809 "DefaultRectangular.chpl"
  return;
#line 809 "DefaultRectangular.chpl"
}

#line 809 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:809 */
#line 809 "DefaultRectangular.chpl"
static void initialize6(DefaultRectangularArr_int64_t_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 809 "DefaultRectangular.chpl"
  chpl_bool coerce_tmp;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t ret;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_4 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp7;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp5;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 809 "DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp10 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t _formal_type_tmp_;
#line 809 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp11 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp6 = NULL;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp13;
#line 809 "DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp14 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp7;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp8;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 809 "DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp9 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp16 = NULL;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(810), INT64(25));
#line 810 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->noinit_data;
#line 810 "DefaultRectangular.chpl"
  call_tmp = (coerce_tmp == UINT8(true));
#line 810 "DefaultRectangular.chpl"
  if (call_tmp) /* ZLINE: 810 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 810 "DefaultRectangular.chpl"
  {
#line 810 "DefaultRectangular.chpl"
    goto _end_initialize;
#line 810 "DefaultRectangular.chpl"
  }
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->off);
#line 812 "DefaultRectangular.chpl"
  call_tmp2 = (*(_this_tmp_) + INT64(0));
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  coerce_tmp2 = (this5)->dom;
#line 812 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp3;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 812 "DefaultRectangular.chpl"
  ret = (&call_tmp3)->_low;
#line 812 "DefaultRectangular.chpl"
  *(call_tmp2) = ret;
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this5)->str);
#line 813 "DefaultRectangular.chpl"
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->dom;
#line 813 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp5;
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp3, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp3, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 813 "DefaultRectangular.chpl"
  *(call_tmp4) = INT64(1);
#line 815 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(815), INT64(25));
#line 815 "DefaultRectangular.chpl"
  _this_tmp_3 = &((this5)->blk);
#line 815 "DefaultRectangular.chpl"
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
#line 815 "DefaultRectangular.chpl"
  *(call_tmp6) = INT64(1);
#line 818 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(818), INT64(25));
#line 818 "DefaultRectangular.chpl"
  computeFactoredOffs(this5, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  _this_tmp_4 = &((this5)->blk);
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  coerce_tmp4 = (this5)->dom;
#line 819 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp7;
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  _ref_tmp_ = &call_tmp7;
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(_ref_tmp_, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  coerce_tmp5 = *(*(_this_tmp_4) + INT64(0));
#line 819 "DefaultRectangular.chpl"
  call_tmp9 = (coerce_tmp5 * call_tmp8);
#line 820 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(820), INT64(25));
#line 820 "DefaultRectangular.chpl"
  call_tmp10 = &((this5)->data);
#line 820 "DefaultRectangular.chpl"
  call_tmp11 = ((_ddata_int64_t)(nil));
#line 820 "DefaultRectangular.chpl"
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(int64_t), _ln, _fn);
#line 820 "DefaultRectangular.chpl"
  init_elts(call_tmp11, call_tmp9, _ln, _fn);
#line 820 "DefaultRectangular.chpl"
  *(call_tmp10) = call_tmp11;
#line 821 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
  coerce_tmp6 = (this5)->dom;
#line 821 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp6, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
  call_tmp12 = dsiNumIndices(coerce_tmp6, _ln, _fn);
#line 821 "DefaultRectangular.chpl"
  call_tmp13 = (call_tmp12 > INT64(0));
#line 821 "DefaultRectangular.chpl"
  if (call_tmp13) /* ZLINE: 821 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 821 "DefaultRectangular.chpl"
  {
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    call_tmp14 = &((this5)->shiftedData);
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp7 = (this5)->origin;
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp8 = (this5)->factoredOffs;
#line 821 "DefaultRectangular.chpl"
    call_tmp15 = (coerce_tmp7 - coerce_tmp8);
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp9 = (this5)->data;
#line 821 "DefaultRectangular.chpl"
    call_tmp16 = ((_ddata_int64_t)(nil));
#line 821 "DefaultRectangular.chpl"
    call_tmp16 = (coerce_tmp9 + call_tmp15);
#line 821 "DefaultRectangular.chpl"
    *(call_tmp14) = call_tmp16;
#line 821 "DefaultRectangular.chpl"
  }
#line 821 "DefaultRectangular.chpl"
  _end_initialize:;
#line 809 "DefaultRectangular.chpl"
  return;
#line 809 "DefaultRectangular.chpl"
}

#line 809 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:809 */
#line 809 "DefaultRectangular.chpl"
static void initialize8(DefaultRectangularArr_localesSignal_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 809 "DefaultRectangular.chpl"
  chpl_bool coerce_tmp;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t ret;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_4 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp7;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp5;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 809 "DefaultRectangular.chpl"
  _ref__ddata_localesSignal call_tmp10 = NULL;
#line 809 "DefaultRectangular.chpl"
  localesSignal _formal_type_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp11 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp6 = NULL;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp13;
#line 809 "DefaultRectangular.chpl"
  _ref__ddata_localesSignal call_tmp14 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp7;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp8;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 809 "DefaultRectangular.chpl"
  _ddata_localesSignal coerce_tmp9 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp16 = NULL;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(810), INT64(25));
#line 810 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->noinit_data;
#line 810 "DefaultRectangular.chpl"
  call_tmp = (coerce_tmp == UINT8(true));
#line 810 "DefaultRectangular.chpl"
  if (call_tmp) /* ZLINE: 810 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 810 "DefaultRectangular.chpl"
  {
#line 810 "DefaultRectangular.chpl"
    goto _end_initialize;
#line 810 "DefaultRectangular.chpl"
  }
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->off);
#line 812 "DefaultRectangular.chpl"
  call_tmp2 = (*(_this_tmp_) + INT64(0));
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  coerce_tmp2 = (this5)->dom;
#line 812 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp3;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 812 "DefaultRectangular.chpl"
  ret = (&call_tmp3)->_low;
#line 812 "DefaultRectangular.chpl"
  *(call_tmp2) = ret;
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this5)->str);
#line 813 "DefaultRectangular.chpl"
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->dom;
#line 813 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp5;
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp3, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp3, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 813 "DefaultRectangular.chpl"
  *(call_tmp4) = INT64(1);
#line 815 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(815), INT64(25));
#line 815 "DefaultRectangular.chpl"
  _this_tmp_3 = &((this5)->blk);
#line 815 "DefaultRectangular.chpl"
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
#line 815 "DefaultRectangular.chpl"
  *(call_tmp6) = INT64(1);
#line 818 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(818), INT64(25));
#line 818 "DefaultRectangular.chpl"
  computeFactoredOffs2(this5, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  _this_tmp_4 = &((this5)->blk);
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  coerce_tmp4 = (this5)->dom;
#line 819 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp7;
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  _ref_tmp_ = &call_tmp7;
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(_ref_tmp_, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  coerce_tmp5 = *(*(_this_tmp_4) + INT64(0));
#line 819 "DefaultRectangular.chpl"
  call_tmp9 = (coerce_tmp5 * call_tmp8);
#line 820 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(820), INT64(25));
#line 820 "DefaultRectangular.chpl"
  call_tmp10 = &((this5)->data);
#line 820 "DefaultRectangular.chpl"
  call_tmp11 = ((_ddata_localesSignal)(nil));
#line 820 "DefaultRectangular.chpl"
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(localesSignal), _ln, _fn);
#line 820 "DefaultRectangular.chpl"
  init_elts5(call_tmp11, call_tmp9, _ln, _fn);
#line 820 "DefaultRectangular.chpl"
  *(call_tmp10) = call_tmp11;
#line 821 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
  coerce_tmp6 = (this5)->dom;
#line 821 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp6, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
  call_tmp12 = dsiNumIndices(coerce_tmp6, _ln, _fn);
#line 821 "DefaultRectangular.chpl"
  call_tmp13 = (call_tmp12 > INT64(0));
#line 821 "DefaultRectangular.chpl"
  if (call_tmp13) /* ZLINE: 821 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 821 "DefaultRectangular.chpl"
  {
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    call_tmp14 = &((this5)->shiftedData);
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp7 = (this5)->origin;
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp8 = (this5)->factoredOffs;
#line 821 "DefaultRectangular.chpl"
    call_tmp15 = (coerce_tmp7 - coerce_tmp8);
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp9 = (this5)->data;
#line 821 "DefaultRectangular.chpl"
    call_tmp16 = ((_ddata_localesSignal)(nil));
#line 821 "DefaultRectangular.chpl"
    call_tmp16 = (coerce_tmp9 + call_tmp15);
#line 821 "DefaultRectangular.chpl"
    *(call_tmp14) = call_tmp16;
#line 821 "DefaultRectangular.chpl"
  }
#line 821 "DefaultRectangular.chpl"
  _end_initialize:;
#line 809 "DefaultRectangular.chpl"
  return;
#line 809 "DefaultRectangular.chpl"
}

#line 809 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:809 */
#line 809 "DefaultRectangular.chpl"
static void initialize10(DefaultRectangularArr_locale_1_int64_t_F this5, int64_t _ln, int32_t _fn) {
#line 809 "DefaultRectangular.chpl"
  chpl_bool coerce_tmp;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t ret;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_4 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp7;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp5;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 809 "DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp10 = NULL;
#line 809 "DefaultRectangular.chpl"
  locale _formal_type_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  _ddata_locale call_tmp11 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp6 = NULL;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp13;
#line 809 "DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp14 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp7;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp8;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 809 "DefaultRectangular.chpl"
  _ddata_locale coerce_tmp9 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ddata_locale call_tmp16 = NULL;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(810), INT64(25));
#line 810 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->noinit_data;
#line 810 "DefaultRectangular.chpl"
  call_tmp = (coerce_tmp == UINT8(true));
#line 810 "DefaultRectangular.chpl"
  if (call_tmp) /* ZLINE: 810 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 810 "DefaultRectangular.chpl"
  {
#line 810 "DefaultRectangular.chpl"
    goto _end_initialize;
#line 810 "DefaultRectangular.chpl"
  }
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  _this_tmp_ = &((this5)->off);
#line 812 "DefaultRectangular.chpl"
  call_tmp2 = (*(_this_tmp_) + INT64(0));
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  coerce_tmp2 = (this5)->dom;
#line 812 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp3;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp2, INT64(812), INT64(25));
#line 812 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 812 "DefaultRectangular.chpl"
  ret = (&call_tmp3)->_low;
#line 812 "DefaultRectangular.chpl"
  *(call_tmp2) = ret;
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this5)->str);
#line 813 "DefaultRectangular.chpl"
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  coerce_tmp3 = (this5)->dom;
#line 813 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp5;
#line 813 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp3, INT64(813), INT64(25));
#line 813 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp3, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 813 "DefaultRectangular.chpl"
  *(call_tmp4) = INT64(1);
#line 815 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(815), INT64(25));
#line 815 "DefaultRectangular.chpl"
  _this_tmp_3 = &((this5)->blk);
#line 815 "DefaultRectangular.chpl"
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
#line 815 "DefaultRectangular.chpl"
  *(call_tmp6) = INT64(1);
#line 818 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(818), INT64(25));
#line 818 "DefaultRectangular.chpl"
  computeFactoredOffs5(this5, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  _this_tmp_4 = &((this5)->blk);
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  coerce_tmp4 = (this5)->dom;
#line 819 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp7;
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp4, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  dsiDim(coerce_tmp4, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  _ref_tmp_ = &call_tmp7;
#line 819 "DefaultRectangular.chpl"
  chpl_check_nil(_ref_tmp_, INT64(819), INT64(25));
#line 819 "DefaultRectangular.chpl"
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
#line 819 "DefaultRectangular.chpl"
  coerce_tmp5 = *(*(_this_tmp_4) + INT64(0));
#line 819 "DefaultRectangular.chpl"
  call_tmp9 = (coerce_tmp5 * call_tmp8);
#line 820 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(820), INT64(25));
#line 820 "DefaultRectangular.chpl"
  call_tmp10 = &((this5)->data);
#line 820 "DefaultRectangular.chpl"
  call_tmp11 = ((_ddata_locale)(nil));
#line 820 "DefaultRectangular.chpl"
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(locale), _ln, _fn);
#line 820 "DefaultRectangular.chpl"
  init_elts2(call_tmp11, call_tmp9, _ln, _fn);
#line 820 "DefaultRectangular.chpl"
  *(call_tmp10) = call_tmp11;
#line 821 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
  coerce_tmp6 = (this5)->dom;
#line 821 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp6, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
  call_tmp12 = dsiNumIndices(coerce_tmp6, _ln, _fn);
#line 821 "DefaultRectangular.chpl"
  call_tmp13 = (call_tmp12 > INT64(0));
#line 821 "DefaultRectangular.chpl"
  if (call_tmp13) /* ZLINE: 821 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 821 "DefaultRectangular.chpl"
  {
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    call_tmp14 = &((this5)->shiftedData);
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp7 = (this5)->origin;
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp8 = (this5)->factoredOffs;
#line 821 "DefaultRectangular.chpl"
    call_tmp15 = (coerce_tmp7 - coerce_tmp8);
#line 821 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(821), INT64(25));
#line 821 "DefaultRectangular.chpl"
    coerce_tmp9 = (this5)->data;
#line 821 "DefaultRectangular.chpl"
    call_tmp16 = ((_ddata_locale)(nil));
#line 821 "DefaultRectangular.chpl"
    call_tmp16 = (coerce_tmp9 + call_tmp15);
#line 821 "DefaultRectangular.chpl"
    *(call_tmp14) = call_tmp16;
#line 821 "DefaultRectangular.chpl"
  }
#line 821 "DefaultRectangular.chpl"
  _end_initialize:;
#line 809 "DefaultRectangular.chpl"
  return;
#line 809 "DefaultRectangular.chpl"
}

#line 809 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1038 */
#line 809 "DefaultRectangular.chpl"
static void dsiReallocate3(DefaultRectangularArr_localesSignal_1_int64_t_F this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn) {
#line 809 "DefaultRectangular.chpl"
  string local__str_literal_974;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F copy = NULL;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this6 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 809 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_4;
#line 809 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 809 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_5;
#line 809 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 809 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 809 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 809 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 809 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 809 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this9;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 809 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp3;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp5 = NULL;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp2;
#line 809 "DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_3 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this12 = NULL;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp3;
#line 809 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 809 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F this13 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t i;
#line 809 "DefaultRectangular.chpl"
  int64_t ret4;
#line 809 "DefaultRectangular.chpl"
  int64_t end;
#line 809 "DefaultRectangular.chpl"
  int64_t ret5;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this14;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp7;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp8;
#line 809 "DefaultRectangular.chpl"
  string call_tmp9;
#line 809 "DefaultRectangular.chpl"
  string _autoCopy_tmp_;
#line 809 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
#line 809 "DefaultRectangular.chpl"
  string call_tmp10;
#line 809 "DefaultRectangular.chpl"
  string _autoCopy_tmp_2;
#line 809 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_3 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t sum;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp11 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp5;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp6;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 809 "DefaultRectangular.chpl"
  _ddata_localesSignal coerce_tmp7 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_localesSignal call_tmp13 = NULL;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind2;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this15;
#line 809 "DefaultRectangular.chpl"
  localesSignal ret6 = NULL;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp14;
#line 809 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp8 = NULL;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp15;
#line 809 "DefaultRectangular.chpl"
  string call_tmp16;
#line 809 "DefaultRectangular.chpl"
  string _autoCopy_tmp_3;
#line 809 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
#line 809 "DefaultRectangular.chpl"
  string call_tmp17;
#line 809 "DefaultRectangular.chpl"
  string _autoCopy_tmp_4;
#line 809 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_7 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_4 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_5 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t sum2;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp9;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp10;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp19;
#line 809 "DefaultRectangular.chpl"
  _ddata_localesSignal coerce_tmp11 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_localesSignal call_tmp20 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp21 = NULL;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp12;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp22 = NULL;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp13;
#line 809 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp23 = NULL;
#line 809 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp14;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp24 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp15;
#line 809 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp25 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t coerce_tmp16;
#line 809 "DefaultRectangular.chpl"
  _ref__ddata_localesSignal call_tmp26 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ddata_localesSignal coerce_tmp17 = NULL;
#line 809 "DefaultRectangular.chpl"
  int64_t call_tmp27;
#line 809 "DefaultRectangular.chpl"
  chpl_bool call_tmp28;
#line 809 "DefaultRectangular.chpl"
  _ref__ddata_localesSignal call_tmp29 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ddata_localesSignal coerce_tmp18 = NULL;
#line 809 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 809 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp30 = NULL;
#line 809 "DefaultRectangular.chpl"
  c_void_ptr call_tmp31;
#line 1057 "DefaultRectangular.chpl"
  local__str_literal_974 = _str_literal_974;
#line 1048 "DefaultRectangular.chpl"
  ret = d;
#line 1045 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object);
#line 1045 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(19), _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(cast_tmp));
#line 1045 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dom = nil;
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->data = nil;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->shiftedData = nil;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_low = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_high = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_stride = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_alignment = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_aligned = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = _init_class_tmp_4;
#line 1045 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_5;
#line 1045 "DefaultRectangular.chpl"
  ret2 = type_tmp;
#line 1045 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret2;
#line 1045 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 1045 "DefaultRectangular.chpl"
  (&this8)->_v = ret2;
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret2, &this8, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 1045 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 1045 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dom = ret;
#line 1045 "DefaultRectangular.chpl"
  *(this9 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(this9 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(this10 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(this11 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_localesSignal)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->data = call_tmp3;
#line 1045 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_localesSignal)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->shiftedData = call_tmp4;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = wrap_call_tmp3;
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_DefaultRectangularArr4(&wrap_call_tmp2, call_tmp2, ret, &this9, &this10, &this11, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this6, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  copy = wrap_call_tmp4;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dom;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  call_tmp5 = &((coerce_tmp)->ranges);
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp2 = *(*(call_tmp5) + INT64(0));
#line 1056 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp6;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  this2(d, &coerce_tmp2, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  ret3 = call_tmp6;
#line 1056 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &default_argoffset;
#line 1056 "DefaultRectangular.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_3, _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  this12 = ret3;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this12, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  _this_tmp_ = &((this12)->ranges);
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp3 = *(*(_this_tmp_) + INT64(0));
#line 1056 "DefaultRectangular.chpl"
  _ic__F0_this = coerce_tmp3;
#line 1056 "DefaultRectangular.chpl"
  this13 = &_ic__F0_this;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this13, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  checkIfIterWillOverflow(this13, UINT8(true), _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  ret4 = (&_ic__F0_this)->_low;
#line 1056 "DefaultRectangular.chpl"
  ret5 = (&_ic__F0_this)->_high;
#line 1056 "DefaultRectangular.chpl"
  end = ret5;
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  call_tmp18 = &((this5)->blk);
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  coerce_tmp11 = (this5)->shiftedData;
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  call_tmp11 = &((copy)->blk);
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  coerce_tmp7 = (copy)->shiftedData;
#line 1056 "DefaultRectangular.chpl"
  for (i = ret4; ((i <= end)); i += INT64(1)) {
#line 1057 "DefaultRectangular.chpl"
    *(this14 + INT64(0)) = i;
#line 1057 "DefaultRectangular.chpl"
    *(ind + INT64(0)) = *(this14 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp4 = (copy)->dom;
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp4, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    call_tmp7 = dsiMember(coerce_tmp4, &this14, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    call_tmp8 = (! call_tmp7);
#line 1057 "DefaultRectangular.chpl"
    if (call_tmp8) /* ZLINE: 1057 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1057 "DefaultRectangular.chpl"
    {
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_4 = &_autoCopy_tmp_;
#line 1057 "DefaultRectangular.chpl"
      _stringify_index(&this14, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp9 = _autoCopy_tmp_;
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_5 = &_autoCopy_tmp_2;
#line 1057 "DefaultRectangular.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp10 = _autoCopy_tmp_2;
#line 1057 "DefaultRectangular.chpl"
      halt(&_autoCopy_tmp_2, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_2 = &call_tmp9;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_3 = &call_tmp10;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_3, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    }
#line 1057 "DefaultRectangular.chpl"
    sum = INT64(0);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp5 = *(ind + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp6 = *(*(call_tmp11) + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    call_tmp12 = (coerce_tmp5 * coerce_tmp6);
#line 1057 "DefaultRectangular.chpl"
    sum += call_tmp12;
#line 1057 "DefaultRectangular.chpl"
    call_tmp13 = (coerce_tmp7 + sum);
#line 1057 "DefaultRectangular.chpl"
    *(this15 + INT64(0)) = i;
#line 1057 "DefaultRectangular.chpl"
    *(ind2 + INT64(0)) = *(this15 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp8 = (this5)->dom;
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp8, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    call_tmp14 = dsiMember(coerce_tmp8, &this15, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    call_tmp15 = (! call_tmp14);
#line 1057 "DefaultRectangular.chpl"
    if (call_tmp15) /* ZLINE: 1057 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1057 "DefaultRectangular.chpl"
    {
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_6 = &_autoCopy_tmp_3;
#line 1057 "DefaultRectangular.chpl"
      _stringify_index(&this15, ret_to_arg_ref_tmp_6, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp16 = _autoCopy_tmp_3;
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_7 = &_autoCopy_tmp_4;
#line 1057 "DefaultRectangular.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_3, ret_to_arg_ref_tmp_7, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp17 = _autoCopy_tmp_4;
#line 1057 "DefaultRectangular.chpl"
      halt(&_autoCopy_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_4 = &call_tmp16;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_5 = &call_tmp17;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_5, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    }
#line 1057 "DefaultRectangular.chpl"
    sum2 = INT64(0);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp9 = *(ind2 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp10 = *(*(call_tmp18) + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    call_tmp19 = (coerce_tmp9 * coerce_tmp10);
#line 1057 "DefaultRectangular.chpl"
    sum2 += call_tmp19;
#line 1057 "DefaultRectangular.chpl"
    call_tmp20 = (coerce_tmp11 + sum2);
#line 1057 "DefaultRectangular.chpl"
    ret6 = *(call_tmp20);
#line 1057 "DefaultRectangular.chpl"
    *(call_tmp13) = ret6;
#line 1057 "DefaultRectangular.chpl"
  }
#line 1056 "DefaultRectangular.chpl"
  chpl__autoDestroy2(call_tmp6, _ln, _fn);
#line 1058 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1058), INT64(25));
#line 1058 "DefaultRectangular.chpl"
  call_tmp21 = &((this5)->off);
#line 1058 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1058), INT64(25));
#line 1058 "DefaultRectangular.chpl"
  *(coerce_tmp12 + INT64(0)) = *((copy)->off + INT64(0));
#line 1058 "DefaultRectangular.chpl"
  *(*(call_tmp21) + INT64(0)) = *(coerce_tmp12 + INT64(0));
#line 1059 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1059), INT64(25));
#line 1059 "DefaultRectangular.chpl"
  call_tmp22 = &((this5)->blk);
#line 1059 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1059), INT64(25));
#line 1059 "DefaultRectangular.chpl"
  *(coerce_tmp13 + INT64(0)) = *((copy)->blk + INT64(0));
#line 1059 "DefaultRectangular.chpl"
  *(*(call_tmp22) + INT64(0)) = *(coerce_tmp13 + INT64(0));
#line 1060 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1060), INT64(25));
#line 1060 "DefaultRectangular.chpl"
  call_tmp23 = &((this5)->str);
#line 1060 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1060), INT64(25));
#line 1060 "DefaultRectangular.chpl"
  *(coerce_tmp14 + INT64(0)) = *((copy)->str + INT64(0));
#line 1060 "DefaultRectangular.chpl"
  *(*(call_tmp23) + INT64(0)) = *(coerce_tmp14 + INT64(0));
#line 1061 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1061), INT64(25));
#line 1061 "DefaultRectangular.chpl"
  call_tmp24 = &((this5)->origin);
#line 1061 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1061), INT64(25));
#line 1061 "DefaultRectangular.chpl"
  coerce_tmp15 = (copy)->origin;
#line 1061 "DefaultRectangular.chpl"
  *(call_tmp24) = coerce_tmp15;
#line 1062 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1062), INT64(25));
#line 1062 "DefaultRectangular.chpl"
  call_tmp25 = &((this5)->factoredOffs);
#line 1062 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1062), INT64(25));
#line 1062 "DefaultRectangular.chpl"
  coerce_tmp16 = (copy)->factoredOffs;
#line 1062 "DefaultRectangular.chpl"
  *(call_tmp25) = coerce_tmp16;
#line 1063 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1063), INT64(25));
#line 1063 "DefaultRectangular.chpl"
  dsiDestroyData4(this5, _ln, _fn);
#line 1064 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1064), INT64(25));
#line 1064 "DefaultRectangular.chpl"
  call_tmp26 = &((this5)->data);
#line 1064 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1064), INT64(25));
#line 1064 "DefaultRectangular.chpl"
  coerce_tmp17 = (copy)->data;
#line 1064 "DefaultRectangular.chpl"
  *(call_tmp26) = coerce_tmp17;
#line 1074 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1074), INT64(25));
#line 1074 "DefaultRectangular.chpl"
  call_tmp27 = numIndices(d, _ln, _fn);
#line 1074 "DefaultRectangular.chpl"
  call_tmp28 = (call_tmp27 > INT64(0));
#line 1074 "DefaultRectangular.chpl"
  if (call_tmp28) /* ZLINE: 1074 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1074 "DefaultRectangular.chpl"
  {
#line 1075 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(1075), INT64(25));
#line 1075 "DefaultRectangular.chpl"
    call_tmp29 = &((this5)->shiftedData);
#line 1075 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1075), INT64(25));
#line 1075 "DefaultRectangular.chpl"
    coerce_tmp18 = (copy)->shiftedData;
#line 1075 "DefaultRectangular.chpl"
    *(call_tmp29) = coerce_tmp18;
#line 1075 "DefaultRectangular.chpl"
  }
#line 1077 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(copy));
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  call_tmp30 = &((_field_destructor_tmp_2)->_v);
#line 1077 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp30);
#line 1077 "DefaultRectangular.chpl"
  call_tmp31 = ((void*)(copy));
#line 1077 "DefaultRectangular.chpl"
  chpl_here_free(call_tmp31, _ln, _fn);
#line 1038 "DefaultRectangular.chpl"
  return;
#line 1038 "DefaultRectangular.chpl"
}

#line 1038 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1038 */
#line 1038 "DefaultRectangular.chpl"
static void dsiReallocate2(DefaultRectangularArr_int64_t_1_int64_t_F this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn) {
#line 1038 "DefaultRectangular.chpl"
  string local__str_literal_974;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F copy = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F this6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 1038 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_4;
#line 1038 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_5;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 1038 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 1038 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 1038 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this9;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 1038 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp3;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F wrap_call_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp2;
#line 1038 "DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this12 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp3;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 1038 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F this13 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t i;
#line 1038 "DefaultRectangular.chpl"
  int64_t ret4;
#line 1038 "DefaultRectangular.chpl"
  int64_t end;
#line 1038 "DefaultRectangular.chpl"
  int64_t ret5;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this14;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp7;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp8;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp9;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp10;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_2;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t sum;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp11 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp5;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp6;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 1038 "DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp7 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind2;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this15;
#line 1038 "DefaultRectangular.chpl"
  int64_t ret6;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp14;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp8 = NULL;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp15;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp16;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_3;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp17;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_4;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_7 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t sum2;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp9;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp10;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp19;
#line 1038 "DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp11 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp21 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp12;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp22 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp13;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp23 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp14;
#line 1038 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp24 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp15;
#line 1038 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp25 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp16;
#line 1038 "DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp26 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp17 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp27;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp28;
#line 1038 "DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp29 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp18 = NULL;
#line 1038 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp30 = NULL;
#line 1038 "DefaultRectangular.chpl"
  c_void_ptr call_tmp31;
#line 1057 "DefaultRectangular.chpl"
  local__str_literal_974 = _str_literal_974;
#line 1048 "DefaultRectangular.chpl"
  ret = d;
#line 1045 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_int64_t_1_int64_t_F_object);
#line 1045 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(25), _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularArr_int64_t_1_int64_t_F)(cast_tmp));
#line 1045 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dom = nil;
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->data = nil;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->shiftedData = nil;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_low = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_high = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_stride = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_alignment = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_aligned = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = _init_class_tmp_4;
#line 1045 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_5;
#line 1045 "DefaultRectangular.chpl"
  ret2 = type_tmp;
#line 1045 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret2;
#line 1045 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 1045 "DefaultRectangular.chpl"
  (&this8)->_v = ret2;
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret2, &this8, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 1045 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 1045 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dom = ret;
#line 1045 "DefaultRectangular.chpl"
  *(this9 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(this9 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(this10 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(this11 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_int64_t)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->data = call_tmp3;
#line 1045 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_int64_t)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->shiftedData = call_tmp4;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = wrap_call_tmp3;
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_DefaultRectangularArr2(&wrap_call_tmp2, call_tmp2, ret, &this9, &this10, &this11, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this6, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  copy = wrap_call_tmp4;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dom;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  call_tmp5 = &((coerce_tmp)->ranges);
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp2 = *(*(call_tmp5) + INT64(0));
#line 1056 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp6;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  this2(d, &coerce_tmp2, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  ret3 = call_tmp6;
#line 1056 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &default_argoffset;
#line 1056 "DefaultRectangular.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_3, _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  this12 = ret3;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this12, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  _this_tmp_ = &((this12)->ranges);
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp3 = *(*(_this_tmp_) + INT64(0));
#line 1056 "DefaultRectangular.chpl"
  _ic__F0_this = coerce_tmp3;
#line 1056 "DefaultRectangular.chpl"
  this13 = &_ic__F0_this;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this13, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  checkIfIterWillOverflow(this13, UINT8(true), _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  ret4 = (&_ic__F0_this)->_low;
#line 1056 "DefaultRectangular.chpl"
  ret5 = (&_ic__F0_this)->_high;
#line 1056 "DefaultRectangular.chpl"
  end = ret5;
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  call_tmp18 = &((this5)->blk);
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  coerce_tmp11 = (this5)->shiftedData;
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  call_tmp11 = &((copy)->blk);
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  coerce_tmp7 = (copy)->shiftedData;
#line 1056 "DefaultRectangular.chpl"
  for (i = ret4; ((i <= end)); i += INT64(1)) {
#line 1057 "DefaultRectangular.chpl"
    *(this14 + INT64(0)) = i;
#line 1057 "DefaultRectangular.chpl"
    *(ind + INT64(0)) = *(this14 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp4 = (copy)->dom;
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp4, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    call_tmp7 = dsiMember(coerce_tmp4, &this14, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    call_tmp8 = (! call_tmp7);
#line 1057 "DefaultRectangular.chpl"
    if (call_tmp8) /* ZLINE: 1057 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1057 "DefaultRectangular.chpl"
    {
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_4 = &_autoCopy_tmp_;
#line 1057 "DefaultRectangular.chpl"
      _stringify_index(&this14, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp9 = _autoCopy_tmp_;
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_5 = &_autoCopy_tmp_2;
#line 1057 "DefaultRectangular.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp10 = _autoCopy_tmp_2;
#line 1057 "DefaultRectangular.chpl"
      halt(&_autoCopy_tmp_2, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_2 = &call_tmp9;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_3 = &call_tmp10;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_3, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    }
#line 1057 "DefaultRectangular.chpl"
    sum = INT64(0);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp5 = *(ind + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp6 = *(*(call_tmp11) + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    call_tmp12 = (coerce_tmp5 * coerce_tmp6);
#line 1057 "DefaultRectangular.chpl"
    sum += call_tmp12;
#line 1057 "DefaultRectangular.chpl"
    call_tmp13 = (coerce_tmp7 + sum);
#line 1057 "DefaultRectangular.chpl"
    *(this15 + INT64(0)) = i;
#line 1057 "DefaultRectangular.chpl"
    *(ind2 + INT64(0)) = *(this15 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp8 = (this5)->dom;
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp8, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    call_tmp14 = dsiMember(coerce_tmp8, &this15, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    call_tmp15 = (! call_tmp14);
#line 1057 "DefaultRectangular.chpl"
    if (call_tmp15) /* ZLINE: 1057 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1057 "DefaultRectangular.chpl"
    {
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_6 = &_autoCopy_tmp_3;
#line 1057 "DefaultRectangular.chpl"
      _stringify_index(&this15, ret_to_arg_ref_tmp_6, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp16 = _autoCopy_tmp_3;
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_7 = &_autoCopy_tmp_4;
#line 1057 "DefaultRectangular.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_3, ret_to_arg_ref_tmp_7, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp17 = _autoCopy_tmp_4;
#line 1057 "DefaultRectangular.chpl"
      halt(&_autoCopy_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_4 = &call_tmp16;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_5 = &call_tmp17;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_5, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    }
#line 1057 "DefaultRectangular.chpl"
    sum2 = INT64(0);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp9 = *(ind2 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp10 = *(*(call_tmp18) + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    call_tmp19 = (coerce_tmp9 * coerce_tmp10);
#line 1057 "DefaultRectangular.chpl"
    sum2 += call_tmp19;
#line 1057 "DefaultRectangular.chpl"
    call_tmp20 = (coerce_tmp11 + sum2);
#line 1057 "DefaultRectangular.chpl"
    ret6 = *(call_tmp20);
#line 1057 "DefaultRectangular.chpl"
    *(call_tmp13) = ret6;
#line 1057 "DefaultRectangular.chpl"
  }
#line 1056 "DefaultRectangular.chpl"
  chpl__autoDestroy2(call_tmp6, _ln, _fn);
#line 1058 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1058), INT64(25));
#line 1058 "DefaultRectangular.chpl"
  call_tmp21 = &((this5)->off);
#line 1058 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1058), INT64(25));
#line 1058 "DefaultRectangular.chpl"
  *(coerce_tmp12 + INT64(0)) = *((copy)->off + INT64(0));
#line 1058 "DefaultRectangular.chpl"
  *(*(call_tmp21) + INT64(0)) = *(coerce_tmp12 + INT64(0));
#line 1059 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1059), INT64(25));
#line 1059 "DefaultRectangular.chpl"
  call_tmp22 = &((this5)->blk);
#line 1059 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1059), INT64(25));
#line 1059 "DefaultRectangular.chpl"
  *(coerce_tmp13 + INT64(0)) = *((copy)->blk + INT64(0));
#line 1059 "DefaultRectangular.chpl"
  *(*(call_tmp22) + INT64(0)) = *(coerce_tmp13 + INT64(0));
#line 1060 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1060), INT64(25));
#line 1060 "DefaultRectangular.chpl"
  call_tmp23 = &((this5)->str);
#line 1060 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1060), INT64(25));
#line 1060 "DefaultRectangular.chpl"
  *(coerce_tmp14 + INT64(0)) = *((copy)->str + INT64(0));
#line 1060 "DefaultRectangular.chpl"
  *(*(call_tmp23) + INT64(0)) = *(coerce_tmp14 + INT64(0));
#line 1061 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1061), INT64(25));
#line 1061 "DefaultRectangular.chpl"
  call_tmp24 = &((this5)->origin);
#line 1061 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1061), INT64(25));
#line 1061 "DefaultRectangular.chpl"
  coerce_tmp15 = (copy)->origin;
#line 1061 "DefaultRectangular.chpl"
  *(call_tmp24) = coerce_tmp15;
#line 1062 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1062), INT64(25));
#line 1062 "DefaultRectangular.chpl"
  call_tmp25 = &((this5)->factoredOffs);
#line 1062 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1062), INT64(25));
#line 1062 "DefaultRectangular.chpl"
  coerce_tmp16 = (copy)->factoredOffs;
#line 1062 "DefaultRectangular.chpl"
  *(call_tmp25) = coerce_tmp16;
#line 1063 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1063), INT64(25));
#line 1063 "DefaultRectangular.chpl"
  dsiDestroyData2(this5, _ln, _fn);
#line 1064 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1064), INT64(25));
#line 1064 "DefaultRectangular.chpl"
  call_tmp26 = &((this5)->data);
#line 1064 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1064), INT64(25));
#line 1064 "DefaultRectangular.chpl"
  coerce_tmp17 = (copy)->data;
#line 1064 "DefaultRectangular.chpl"
  *(call_tmp26) = coerce_tmp17;
#line 1074 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1074), INT64(25));
#line 1074 "DefaultRectangular.chpl"
  call_tmp27 = numIndices(d, _ln, _fn);
#line 1074 "DefaultRectangular.chpl"
  call_tmp28 = (call_tmp27 > INT64(0));
#line 1074 "DefaultRectangular.chpl"
  if (call_tmp28) /* ZLINE: 1074 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1074 "DefaultRectangular.chpl"
  {
#line 1075 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(1075), INT64(25));
#line 1075 "DefaultRectangular.chpl"
    call_tmp29 = &((this5)->shiftedData);
#line 1075 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1075), INT64(25));
#line 1075 "DefaultRectangular.chpl"
    coerce_tmp18 = (copy)->shiftedData;
#line 1075 "DefaultRectangular.chpl"
    *(call_tmp29) = coerce_tmp18;
#line 1075 "DefaultRectangular.chpl"
  }
#line 1077 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(copy));
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  call_tmp30 = &((_field_destructor_tmp_2)->_v);
#line 1077 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp30);
#line 1077 "DefaultRectangular.chpl"
  call_tmp31 = ((void*)(copy));
#line 1077 "DefaultRectangular.chpl"
  chpl_here_free(call_tmp31, _ln, _fn);
#line 1038 "DefaultRectangular.chpl"
  return;
#line 1038 "DefaultRectangular.chpl"
}

#line 1038 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1038 */
#line 1038 "DefaultRectangular.chpl"
static void dsiReallocate4(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn) {
#line 1038 "DefaultRectangular.chpl"
  string local__str_literal_974;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F copy = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 1038 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_4;
#line 1038 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_5;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 1038 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 1038 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 1038 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this9;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 1038 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp3;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F wrap_call_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp2;
#line 1038 "DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this12 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp3;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 1038 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F this13 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t i;
#line 1038 "DefaultRectangular.chpl"
  int64_t ret4;
#line 1038 "DefaultRectangular.chpl"
  int64_t end;
#line 1038 "DefaultRectangular.chpl"
  int64_t ret5;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this14;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp7;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp8;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp9;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp10;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_2;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t sum;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp11 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp5;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp6;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 1038 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp7 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_c_ptr_GtkWidget call_tmp13 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind2;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this15;
#line 1038 "DefaultRectangular.chpl"
  c_ptr_GtkWidget ret6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp14;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp8 = NULL;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp15;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp16;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_3;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp17;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_4;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_7 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t sum2;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp9;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp10;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp19;
#line 1038 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp11 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_c_ptr_GtkWidget call_tmp20 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp21 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp12;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp22 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp13;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp23 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp14;
#line 1038 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp24 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp15;
#line 1038 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp25 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp16;
#line 1038 "DefaultRectangular.chpl"
  _ref__ddata_c_ptr_GtkWidget call_tmp26 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp17 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp27;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp28;
#line 1038 "DefaultRectangular.chpl"
  _ref__ddata_c_ptr_GtkWidget call_tmp29 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp18 = NULL;
#line 1038 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp30 = NULL;
#line 1038 "DefaultRectangular.chpl"
  c_void_ptr call_tmp31;
#line 1057 "DefaultRectangular.chpl"
  local__str_literal_974 = _str_literal_974;
#line 1048 "DefaultRectangular.chpl"
  ret = d;
#line 1045 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F_object);
#line 1045 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(28), _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F)(cast_tmp));
#line 1045 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dom = nil;
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->data = nil;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->shiftedData = nil;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_low = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_high = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_stride = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_alignment = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_aligned = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = _init_class_tmp_4;
#line 1045 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_5;
#line 1045 "DefaultRectangular.chpl"
  ret2 = type_tmp;
#line 1045 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret2;
#line 1045 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 1045 "DefaultRectangular.chpl"
  (&this8)->_v = ret2;
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret2, &this8, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 1045 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 1045 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dom = ret;
#line 1045 "DefaultRectangular.chpl"
  *(this9 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(this9 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(this10 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(this11 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->data = call_tmp3;
#line 1045 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->shiftedData = call_tmp4;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = wrap_call_tmp3;
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_DefaultRectangularArr(&wrap_call_tmp2, call_tmp2, ret, &this9, &this10, &this11, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this6, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  copy = wrap_call_tmp4;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dom;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  call_tmp5 = &((coerce_tmp)->ranges);
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp2 = *(*(call_tmp5) + INT64(0));
#line 1056 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp6;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  this2(d, &coerce_tmp2, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  ret3 = call_tmp6;
#line 1056 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &default_argoffset;
#line 1056 "DefaultRectangular.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_3, _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  this12 = ret3;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this12, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  _this_tmp_ = &((this12)->ranges);
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp3 = *(*(_this_tmp_) + INT64(0));
#line 1056 "DefaultRectangular.chpl"
  _ic__F0_this = coerce_tmp3;
#line 1056 "DefaultRectangular.chpl"
  this13 = &_ic__F0_this;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this13, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  checkIfIterWillOverflow(this13, UINT8(true), _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  ret4 = (&_ic__F0_this)->_low;
#line 1056 "DefaultRectangular.chpl"
  ret5 = (&_ic__F0_this)->_high;
#line 1056 "DefaultRectangular.chpl"
  end = ret5;
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  call_tmp18 = &((this5)->blk);
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  coerce_tmp11 = (this5)->shiftedData;
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  call_tmp11 = &((copy)->blk);
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  coerce_tmp7 = (copy)->shiftedData;
#line 1056 "DefaultRectangular.chpl"
  for (i = ret4; ((i <= end)); i += INT64(1)) {
#line 1057 "DefaultRectangular.chpl"
    *(this14 + INT64(0)) = i;
#line 1057 "DefaultRectangular.chpl"
    *(ind + INT64(0)) = *(this14 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp4 = (copy)->dom;
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp4, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    call_tmp7 = dsiMember(coerce_tmp4, &this14, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    call_tmp8 = (! call_tmp7);
#line 1057 "DefaultRectangular.chpl"
    if (call_tmp8) /* ZLINE: 1057 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1057 "DefaultRectangular.chpl"
    {
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_4 = &_autoCopy_tmp_;
#line 1057 "DefaultRectangular.chpl"
      _stringify_index(&this14, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp9 = _autoCopy_tmp_;
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_5 = &_autoCopy_tmp_2;
#line 1057 "DefaultRectangular.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp10 = _autoCopy_tmp_2;
#line 1057 "DefaultRectangular.chpl"
      halt(&_autoCopy_tmp_2, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_2 = &call_tmp9;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_3 = &call_tmp10;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_3, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    }
#line 1057 "DefaultRectangular.chpl"
    sum = INT64(0);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp5 = *(ind + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp6 = *(*(call_tmp11) + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    call_tmp12 = (coerce_tmp5 * coerce_tmp6);
#line 1057 "DefaultRectangular.chpl"
    sum += call_tmp12;
#line 1057 "DefaultRectangular.chpl"
    call_tmp13 = (coerce_tmp7 + sum);
#line 1057 "DefaultRectangular.chpl"
    *(this15 + INT64(0)) = i;
#line 1057 "DefaultRectangular.chpl"
    *(ind2 + INT64(0)) = *(this15 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp8 = (this5)->dom;
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp8, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    call_tmp14 = dsiMember(coerce_tmp8, &this15, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    call_tmp15 = (! call_tmp14);
#line 1057 "DefaultRectangular.chpl"
    if (call_tmp15) /* ZLINE: 1057 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1057 "DefaultRectangular.chpl"
    {
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_6 = &_autoCopy_tmp_3;
#line 1057 "DefaultRectangular.chpl"
      _stringify_index(&this15, ret_to_arg_ref_tmp_6, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp16 = _autoCopy_tmp_3;
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_7 = &_autoCopy_tmp_4;
#line 1057 "DefaultRectangular.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_3, ret_to_arg_ref_tmp_7, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp17 = _autoCopy_tmp_4;
#line 1057 "DefaultRectangular.chpl"
      halt(&_autoCopy_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_4 = &call_tmp16;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_5 = &call_tmp17;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_5, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    }
#line 1057 "DefaultRectangular.chpl"
    sum2 = INT64(0);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp9 = *(ind2 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp10 = *(*(call_tmp18) + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    call_tmp19 = (coerce_tmp9 * coerce_tmp10);
#line 1057 "DefaultRectangular.chpl"
    sum2 += call_tmp19;
#line 1057 "DefaultRectangular.chpl"
    call_tmp20 = (coerce_tmp11 + sum2);
#line 1057 "DefaultRectangular.chpl"
    ret6 = *(call_tmp20);
#line 1057 "DefaultRectangular.chpl"
    *(call_tmp13) = ret6;
#line 1057 "DefaultRectangular.chpl"
  }
#line 1056 "DefaultRectangular.chpl"
  chpl__autoDestroy2(call_tmp6, _ln, _fn);
#line 1058 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1058), INT64(25));
#line 1058 "DefaultRectangular.chpl"
  call_tmp21 = &((this5)->off);
#line 1058 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1058), INT64(25));
#line 1058 "DefaultRectangular.chpl"
  *(coerce_tmp12 + INT64(0)) = *((copy)->off + INT64(0));
#line 1058 "DefaultRectangular.chpl"
  *(*(call_tmp21) + INT64(0)) = *(coerce_tmp12 + INT64(0));
#line 1059 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1059), INT64(25));
#line 1059 "DefaultRectangular.chpl"
  call_tmp22 = &((this5)->blk);
#line 1059 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1059), INT64(25));
#line 1059 "DefaultRectangular.chpl"
  *(coerce_tmp13 + INT64(0)) = *((copy)->blk + INT64(0));
#line 1059 "DefaultRectangular.chpl"
  *(*(call_tmp22) + INT64(0)) = *(coerce_tmp13 + INT64(0));
#line 1060 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1060), INT64(25));
#line 1060 "DefaultRectangular.chpl"
  call_tmp23 = &((this5)->str);
#line 1060 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1060), INT64(25));
#line 1060 "DefaultRectangular.chpl"
  *(coerce_tmp14 + INT64(0)) = *((copy)->str + INT64(0));
#line 1060 "DefaultRectangular.chpl"
  *(*(call_tmp23) + INT64(0)) = *(coerce_tmp14 + INT64(0));
#line 1061 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1061), INT64(25));
#line 1061 "DefaultRectangular.chpl"
  call_tmp24 = &((this5)->origin);
#line 1061 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1061), INT64(25));
#line 1061 "DefaultRectangular.chpl"
  coerce_tmp15 = (copy)->origin;
#line 1061 "DefaultRectangular.chpl"
  *(call_tmp24) = coerce_tmp15;
#line 1062 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1062), INT64(25));
#line 1062 "DefaultRectangular.chpl"
  call_tmp25 = &((this5)->factoredOffs);
#line 1062 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1062), INT64(25));
#line 1062 "DefaultRectangular.chpl"
  coerce_tmp16 = (copy)->factoredOffs;
#line 1062 "DefaultRectangular.chpl"
  *(call_tmp25) = coerce_tmp16;
#line 1063 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1063), INT64(25));
#line 1063 "DefaultRectangular.chpl"
  dsiDestroyData5(this5, _ln, _fn);
#line 1064 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1064), INT64(25));
#line 1064 "DefaultRectangular.chpl"
  call_tmp26 = &((this5)->data);
#line 1064 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1064), INT64(25));
#line 1064 "DefaultRectangular.chpl"
  coerce_tmp17 = (copy)->data;
#line 1064 "DefaultRectangular.chpl"
  *(call_tmp26) = coerce_tmp17;
#line 1074 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1074), INT64(25));
#line 1074 "DefaultRectangular.chpl"
  call_tmp27 = numIndices(d, _ln, _fn);
#line 1074 "DefaultRectangular.chpl"
  call_tmp28 = (call_tmp27 > INT64(0));
#line 1074 "DefaultRectangular.chpl"
  if (call_tmp28) /* ZLINE: 1074 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1074 "DefaultRectangular.chpl"
  {
#line 1075 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(1075), INT64(25));
#line 1075 "DefaultRectangular.chpl"
    call_tmp29 = &((this5)->shiftedData);
#line 1075 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1075), INT64(25));
#line 1075 "DefaultRectangular.chpl"
    coerce_tmp18 = (copy)->shiftedData;
#line 1075 "DefaultRectangular.chpl"
    *(call_tmp29) = coerce_tmp18;
#line 1075 "DefaultRectangular.chpl"
  }
#line 1077 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(copy));
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  call_tmp30 = &((_field_destructor_tmp_2)->_v);
#line 1077 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp30);
#line 1077 "DefaultRectangular.chpl"
  call_tmp31 = ((void*)(copy));
#line 1077 "DefaultRectangular.chpl"
  chpl_here_free(call_tmp31, _ln, _fn);
#line 1038 "DefaultRectangular.chpl"
  return;
#line 1038 "DefaultRectangular.chpl"
}

#line 1038 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1038 */
#line 1038 "DefaultRectangular.chpl"
static void dsiReallocate5(DefaultRectangularArr_string_1_int64_t_F this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn) {
#line 1038 "DefaultRectangular.chpl"
  string local__str_literal_974;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_string_1_int64_t_F copy = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_string_1_int64_t_F this6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 1038 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_4;
#line 1038 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_5;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 1038 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 1038 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 1038 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this9;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 1038 "DefaultRectangular.chpl"
  _ddata_string call_tmp3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_string call_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp3;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_string_1_int64_t_F wrap_call_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp2;
#line 1038 "DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this12 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp3;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 1038 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F this13 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t i;
#line 1038 "DefaultRectangular.chpl"
  int64_t ret4;
#line 1038 "DefaultRectangular.chpl"
  int64_t end;
#line 1038 "DefaultRectangular.chpl"
  int64_t ret5;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this14;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp7;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp8;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp9;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp10;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_2;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t sum;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp11 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp5;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp6;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 1038 "DefaultRectangular.chpl"
  _ddata_string coerce_tmp7 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string call_tmp13 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind2;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this15;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp14;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp8 = NULL;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp15;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp16;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_3;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp17;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_4;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_7 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t sum2;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp9;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp10;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp19;
#line 1038 "DefaultRectangular.chpl"
  _ddata_string coerce_tmp11 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string call_tmp20 = NULL;
#line 1038 "DefaultRectangular.chpl"
  string coerce_tmp12;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp21 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp13;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp22 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp14;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp23 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp15;
#line 1038 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp24 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp16;
#line 1038 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp25 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp17;
#line 1038 "DefaultRectangular.chpl"
  _ref__ddata_string call_tmp26 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_string coerce_tmp18 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp27;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp28;
#line 1038 "DefaultRectangular.chpl"
  _ref__ddata_string call_tmp29 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_string coerce_tmp19 = NULL;
#line 1038 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp30 = NULL;
#line 1038 "DefaultRectangular.chpl"
  c_void_ptr call_tmp31;
#line 1057 "DefaultRectangular.chpl"
  local__str_literal_974 = _str_literal_974;
#line 1048 "DefaultRectangular.chpl"
  ret = d;
#line 1045 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_string_1_int64_t_F_object);
#line 1045 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(30), _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularArr_string_1_int64_t_F)(cast_tmp));
#line 1045 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularArr_string_1_int64_t_F;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dom = nil;
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->data = nil;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->shiftedData = nil;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_low = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_high = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_stride = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_alignment = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_aligned = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = _init_class_tmp_4;
#line 1045 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_5;
#line 1045 "DefaultRectangular.chpl"
  ret2 = type_tmp;
#line 1045 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret2;
#line 1045 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 1045 "DefaultRectangular.chpl"
  (&this8)->_v = ret2;
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret2, &this8, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 1045 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 1045 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dom = ret;
#line 1045 "DefaultRectangular.chpl"
  *(this9 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(this9 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(this10 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(this11 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_string)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->data = call_tmp3;
#line 1045 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_string)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->shiftedData = call_tmp4;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = wrap_call_tmp3;
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_DefaultRectangularArr3(&wrap_call_tmp2, call_tmp2, ret, &this9, &this10, &this11, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this6, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  copy = wrap_call_tmp4;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dom;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  call_tmp5 = &((coerce_tmp)->ranges);
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp2 = *(*(call_tmp5) + INT64(0));
#line 1056 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp6;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  this2(d, &coerce_tmp2, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  ret3 = call_tmp6;
#line 1056 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &default_argoffset;
#line 1056 "DefaultRectangular.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_3, _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  this12 = ret3;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this12, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  _this_tmp_ = &((this12)->ranges);
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp3 = *(*(_this_tmp_) + INT64(0));
#line 1056 "DefaultRectangular.chpl"
  _ic__F0_this = coerce_tmp3;
#line 1056 "DefaultRectangular.chpl"
  this13 = &_ic__F0_this;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this13, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  checkIfIterWillOverflow(this13, UINT8(true), _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  ret4 = (&_ic__F0_this)->_low;
#line 1056 "DefaultRectangular.chpl"
  ret5 = (&_ic__F0_this)->_high;
#line 1056 "DefaultRectangular.chpl"
  end = ret5;
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  call_tmp18 = &((this5)->blk);
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  coerce_tmp11 = (this5)->shiftedData;
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  call_tmp11 = &((copy)->blk);
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  coerce_tmp7 = (copy)->shiftedData;
#line 1056 "DefaultRectangular.chpl"
  for (i = ret4; ((i <= end)); i += INT64(1)) {
#line 1057 "DefaultRectangular.chpl"
    *(this14 + INT64(0)) = i;
#line 1057 "DefaultRectangular.chpl"
    *(ind + INT64(0)) = *(this14 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp4 = (copy)->dom;
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp4, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    call_tmp7 = dsiMember(coerce_tmp4, &this14, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    call_tmp8 = (! call_tmp7);
#line 1057 "DefaultRectangular.chpl"
    if (call_tmp8) /* ZLINE: 1057 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1057 "DefaultRectangular.chpl"
    {
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_4 = &_autoCopy_tmp_;
#line 1057 "DefaultRectangular.chpl"
      _stringify_index(&this14, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp9 = _autoCopy_tmp_;
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_5 = &_autoCopy_tmp_2;
#line 1057 "DefaultRectangular.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp10 = _autoCopy_tmp_2;
#line 1057 "DefaultRectangular.chpl"
      halt(&_autoCopy_tmp_2, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_2 = &call_tmp9;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_3 = &call_tmp10;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_3, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    }
#line 1057 "DefaultRectangular.chpl"
    sum = INT64(0);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp5 = *(ind + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp6 = *(*(call_tmp11) + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    call_tmp12 = (coerce_tmp5 * coerce_tmp6);
#line 1057 "DefaultRectangular.chpl"
    sum += call_tmp12;
#line 1057 "DefaultRectangular.chpl"
    call_tmp13 = (coerce_tmp7 + sum);
#line 1057 "DefaultRectangular.chpl"
    *(this15 + INT64(0)) = i;
#line 1057 "DefaultRectangular.chpl"
    *(ind2 + INT64(0)) = *(this15 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp8 = (this5)->dom;
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp8, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    call_tmp14 = dsiMember(coerce_tmp8, &this15, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    call_tmp15 = (! call_tmp14);
#line 1057 "DefaultRectangular.chpl"
    if (call_tmp15) /* ZLINE: 1057 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1057 "DefaultRectangular.chpl"
    {
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_6 = &_autoCopy_tmp_3;
#line 1057 "DefaultRectangular.chpl"
      _stringify_index(&this15, ret_to_arg_ref_tmp_6, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp16 = _autoCopy_tmp_3;
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_7 = &_autoCopy_tmp_4;
#line 1057 "DefaultRectangular.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_3, ret_to_arg_ref_tmp_7, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp17 = _autoCopy_tmp_4;
#line 1057 "DefaultRectangular.chpl"
      halt(&_autoCopy_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_4 = &call_tmp16;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_5 = &call_tmp17;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_5, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    }
#line 1057 "DefaultRectangular.chpl"
    sum2 = INT64(0);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp9 = *(ind2 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp10 = *(*(call_tmp18) + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    call_tmp19 = (coerce_tmp9 * coerce_tmp10);
#line 1057 "DefaultRectangular.chpl"
    sum2 += call_tmp19;
#line 1057 "DefaultRectangular.chpl"
    call_tmp20 = (coerce_tmp11 + sum2);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp12 = *(call_tmp20);
#line 1057 "DefaultRectangular.chpl"
    chpl___ASSIGN_2(call_tmp13, &coerce_tmp12, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
  }
#line 1056 "DefaultRectangular.chpl"
  chpl__autoDestroy2(call_tmp6, _ln, _fn);
#line 1058 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1058), INT64(25));
#line 1058 "DefaultRectangular.chpl"
  call_tmp21 = &((this5)->off);
#line 1058 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1058), INT64(25));
#line 1058 "DefaultRectangular.chpl"
  *(coerce_tmp13 + INT64(0)) = *((copy)->off + INT64(0));
#line 1058 "DefaultRectangular.chpl"
  *(*(call_tmp21) + INT64(0)) = *(coerce_tmp13 + INT64(0));
#line 1059 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1059), INT64(25));
#line 1059 "DefaultRectangular.chpl"
  call_tmp22 = &((this5)->blk);
#line 1059 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1059), INT64(25));
#line 1059 "DefaultRectangular.chpl"
  *(coerce_tmp14 + INT64(0)) = *((copy)->blk + INT64(0));
#line 1059 "DefaultRectangular.chpl"
  *(*(call_tmp22) + INT64(0)) = *(coerce_tmp14 + INT64(0));
#line 1060 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1060), INT64(25));
#line 1060 "DefaultRectangular.chpl"
  call_tmp23 = &((this5)->str);
#line 1060 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1060), INT64(25));
#line 1060 "DefaultRectangular.chpl"
  *(coerce_tmp15 + INT64(0)) = *((copy)->str + INT64(0));
#line 1060 "DefaultRectangular.chpl"
  *(*(call_tmp23) + INT64(0)) = *(coerce_tmp15 + INT64(0));
#line 1061 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1061), INT64(25));
#line 1061 "DefaultRectangular.chpl"
  call_tmp24 = &((this5)->origin);
#line 1061 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1061), INT64(25));
#line 1061 "DefaultRectangular.chpl"
  coerce_tmp16 = (copy)->origin;
#line 1061 "DefaultRectangular.chpl"
  *(call_tmp24) = coerce_tmp16;
#line 1062 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1062), INT64(25));
#line 1062 "DefaultRectangular.chpl"
  call_tmp25 = &((this5)->factoredOffs);
#line 1062 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1062), INT64(25));
#line 1062 "DefaultRectangular.chpl"
  coerce_tmp17 = (copy)->factoredOffs;
#line 1062 "DefaultRectangular.chpl"
  *(call_tmp25) = coerce_tmp17;
#line 1063 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1063), INT64(25));
#line 1063 "DefaultRectangular.chpl"
  dsiDestroyData6(this5, _ln, _fn);
#line 1064 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1064), INT64(25));
#line 1064 "DefaultRectangular.chpl"
  call_tmp26 = &((this5)->data);
#line 1064 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1064), INT64(25));
#line 1064 "DefaultRectangular.chpl"
  coerce_tmp18 = (copy)->data;
#line 1064 "DefaultRectangular.chpl"
  *(call_tmp26) = coerce_tmp18;
#line 1074 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1074), INT64(25));
#line 1074 "DefaultRectangular.chpl"
  call_tmp27 = numIndices(d, _ln, _fn);
#line 1074 "DefaultRectangular.chpl"
  call_tmp28 = (call_tmp27 > INT64(0));
#line 1074 "DefaultRectangular.chpl"
  if (call_tmp28) /* ZLINE: 1074 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1074 "DefaultRectangular.chpl"
  {
#line 1075 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(1075), INT64(25));
#line 1075 "DefaultRectangular.chpl"
    call_tmp29 = &((this5)->shiftedData);
#line 1075 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1075), INT64(25));
#line 1075 "DefaultRectangular.chpl"
    coerce_tmp19 = (copy)->shiftedData;
#line 1075 "DefaultRectangular.chpl"
    *(call_tmp29) = coerce_tmp19;
#line 1075 "DefaultRectangular.chpl"
  }
#line 1077 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(copy));
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  call_tmp30 = &((_field_destructor_tmp_2)->_v);
#line 1077 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp30);
#line 1077 "DefaultRectangular.chpl"
  call_tmp31 = ((void*)(copy));
#line 1077 "DefaultRectangular.chpl"
  chpl_here_free(call_tmp31, _ln, _fn);
#line 1038 "DefaultRectangular.chpl"
  return;
#line 1038 "DefaultRectangular.chpl"
}

#line 1038 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:1038 */
#line 1038 "DefaultRectangular.chpl"
static void dsiReallocate6(DefaultRectangularArr_locale_1_int64_t_F this5, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, int32_t _fn) {
#line 1038 "DefaultRectangular.chpl"
  string local__str_literal_974;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F copy = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F this6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 1038 "DefaultRectangular.chpl"
  c_void_ptr cast_tmp;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_4;
#line 1038 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_5;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 this8;
#line 1038 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 1038 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 1038 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_refcnt ret_to_arg_ref_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this9;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 1038 "DefaultRectangular.chpl"
  _ddata_locale call_tmp3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_locale call_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F wrap_call_tmp3;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp2;
#line 1038 "DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this12 = NULL;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F coerce_tmp3;
#line 1038 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 1038 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F this13 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t i;
#line 1038 "DefaultRectangular.chpl"
  int64_t ret4;
#line 1038 "DefaultRectangular.chpl"
  int64_t end;
#line 1038 "DefaultRectangular.chpl"
  int64_t ret5;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this14;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp7;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp8;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp9;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp10;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_2;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_3 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t sum;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp11 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp5;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp6;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 1038 "DefaultRectangular.chpl"
  _ddata_locale coerce_tmp7 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_locale call_tmp13 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind2;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this15;
#line 1038 "DefaultRectangular.chpl"
  locale ret6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp14;
#line 1038 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp8 = NULL;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp15;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp16;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_3;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
#line 1038 "DefaultRectangular.chpl"
  string call_tmp17;
#line 1038 "DefaultRectangular.chpl"
  string _autoCopy_tmp_4;
#line 1038 "DefaultRectangular.chpl"
  _ref_string ret_to_arg_ref_tmp_7 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_4 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_string _ref_tmp_5 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t sum2;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp9;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp10;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp19;
#line 1038 "DefaultRectangular.chpl"
  _ddata_locale coerce_tmp11 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_locale call_tmp20 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp21 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp12;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp22 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp13;
#line 1038 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp23 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp14;
#line 1038 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp24 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp15;
#line 1038 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp25 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t coerce_tmp16;
#line 1038 "DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp26 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_locale coerce_tmp17 = NULL;
#line 1038 "DefaultRectangular.chpl"
  int64_t call_tmp27;
#line 1038 "DefaultRectangular.chpl"
  chpl_bool call_tmp28;
#line 1038 "DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp29 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ddata_locale coerce_tmp18 = NULL;
#line 1038 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 1038 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp30 = NULL;
#line 1038 "DefaultRectangular.chpl"
  c_void_ptr call_tmp31;
#line 1057 "DefaultRectangular.chpl"
  local__str_literal_974 = _str_literal_974;
#line 1048 "DefaultRectangular.chpl"
  ret = d;
#line 1045 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_locale_1_int64_t_F_object);
#line 1045 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(11), _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  this6 = ((DefaultRectangularArr_locale_1_int64_t_F)(cast_tmp));
#line 1045 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultRectangularArr_locale_1_int64_t_F;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dom = nil;
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->data = nil;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->shiftedData = nil;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_low = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_high = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_stride = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_alignment = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  (&_init_class_tmp_4)->_aligned = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = _init_class_tmp_4;
#line 1045 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_5;
#line 1045 "DefaultRectangular.chpl"
  ret2 = type_tmp;
#line 1045 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret2;
#line 1045 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 1045 "DefaultRectangular.chpl"
  (&this8)->_v = ret2;
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret2, &this8, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 1045 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp2;
#line 1045 "DefaultRectangular.chpl"
  _construct_atomic_refcnt(&wrap_call_tmp, &this7, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dom = ret;
#line 1045 "DefaultRectangular.chpl"
  *(this9 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(this9 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(this10 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(this11 + INT64(0));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->origin = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->factoredOffs = INT64(0);
#line 1045 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_locale)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->data = call_tmp3;
#line 1045 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_locale)(nil));
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->shiftedData = call_tmp4;
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->noinit_data = UINT8(false);
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp3 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1045), INT64(25));
#line 1045 "DefaultRectangular.chpl"
  (this6)->dataAllocRange = wrap_call_tmp3;
#line 1045 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_DefaultRectangularArr5(&wrap_call_tmp2, call_tmp2, ret, &this9, &this10, &this11, INT64(0), INT64(0), call_tmp3, call_tmp4, UINT8(false), &wrap_call_tmp3, this6, _ln, _fn);
#line 1045 "DefaultRectangular.chpl"
  copy = wrap_call_tmp4;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp = (this5)->dom;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  call_tmp5 = &((coerce_tmp)->ranges);
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp2 = *(*(call_tmp5) + INT64(0));
#line 1056 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp6;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  this2(d, &coerce_tmp2, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  ret3 = call_tmp6;
#line 1056 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &default_argoffset;
#line 1056 "DefaultRectangular.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_3, _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  this12 = ret3;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this12, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  _this_tmp_ = &((this12)->ranges);
#line 1056 "DefaultRectangular.chpl"
  coerce_tmp3 = *(*(_this_tmp_) + INT64(0));
#line 1056 "DefaultRectangular.chpl"
  _ic__F0_this = coerce_tmp3;
#line 1056 "DefaultRectangular.chpl"
  this13 = &_ic__F0_this;
#line 1056 "DefaultRectangular.chpl"
  chpl_check_nil(this13, INT64(1056), INT64(25));
#line 1056 "DefaultRectangular.chpl"
  checkIfIterWillOverflow(this13, UINT8(true), _ln, _fn);
#line 1056 "DefaultRectangular.chpl"
  ret4 = (&_ic__F0_this)->_low;
#line 1056 "DefaultRectangular.chpl"
  ret5 = (&_ic__F0_this)->_high;
#line 1056 "DefaultRectangular.chpl"
  end = ret5;
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  call_tmp18 = &((this5)->blk);
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  coerce_tmp11 = (this5)->shiftedData;
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  call_tmp11 = &((copy)->blk);
#line 1057 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
  coerce_tmp7 = (copy)->shiftedData;
#line 1056 "DefaultRectangular.chpl"
  for (i = ret4; ((i <= end)); i += INT64(1)) {
#line 1057 "DefaultRectangular.chpl"
    *(this14 + INT64(0)) = i;
#line 1057 "DefaultRectangular.chpl"
    *(ind + INT64(0)) = *(this14 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp4 = (copy)->dom;
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp4, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    call_tmp7 = dsiMember(coerce_tmp4, &this14, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    call_tmp8 = (! call_tmp7);
#line 1057 "DefaultRectangular.chpl"
    if (call_tmp8) /* ZLINE: 1057 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1057 "DefaultRectangular.chpl"
    {
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_4 = &_autoCopy_tmp_;
#line 1057 "DefaultRectangular.chpl"
      _stringify_index(&this14, ret_to_arg_ref_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp9 = _autoCopy_tmp_;
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_5 = &_autoCopy_tmp_2;
#line 1057 "DefaultRectangular.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_, ret_to_arg_ref_tmp_5, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp10 = _autoCopy_tmp_2;
#line 1057 "DefaultRectangular.chpl"
      halt(&_autoCopy_tmp_2, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_2 = &call_tmp9;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_2, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_3 = &call_tmp10;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_3, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    }
#line 1057 "DefaultRectangular.chpl"
    sum = INT64(0);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp5 = *(ind + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp6 = *(*(call_tmp11) + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    call_tmp12 = (coerce_tmp5 * coerce_tmp6);
#line 1057 "DefaultRectangular.chpl"
    sum += call_tmp12;
#line 1057 "DefaultRectangular.chpl"
    call_tmp13 = (coerce_tmp7 + sum);
#line 1057 "DefaultRectangular.chpl"
    *(this15 + INT64(0)) = i;
#line 1057 "DefaultRectangular.chpl"
    *(ind2 + INT64(0)) = *(this15 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp8 = (this5)->dom;
#line 1057 "DefaultRectangular.chpl"
    chpl_check_nil(coerce_tmp8, INT64(1057), INT64(25));
#line 1057 "DefaultRectangular.chpl"
    call_tmp14 = dsiMember(coerce_tmp8, &this15, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    call_tmp15 = (! call_tmp14);
#line 1057 "DefaultRectangular.chpl"
    if (call_tmp15) /* ZLINE: 1057 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1057 "DefaultRectangular.chpl"
    {
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_6 = &_autoCopy_tmp_3;
#line 1057 "DefaultRectangular.chpl"
      _stringify_index(&this15, ret_to_arg_ref_tmp_6, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp16 = _autoCopy_tmp_3;
#line 1057 "DefaultRectangular.chpl"
      ret_to_arg_ref_tmp_7 = &_autoCopy_tmp_4;
#line 1057 "DefaultRectangular.chpl"
      chpl___PLUS_(&local__str_literal_974, &_autoCopy_tmp_3, ret_to_arg_ref_tmp_7, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      call_tmp17 = _autoCopy_tmp_4;
#line 1057 "DefaultRectangular.chpl"
      halt(&_autoCopy_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_4 = &call_tmp16;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_4, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
      _ref_tmp_5 = &call_tmp17;
#line 1057 "DefaultRectangular.chpl"
      chpl___TILDE_string(_ref_tmp_5, _ln, _fn);
#line 1057 "DefaultRectangular.chpl"
    }
#line 1057 "DefaultRectangular.chpl"
    sum2 = INT64(0);
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp9 = *(ind2 + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    coerce_tmp10 = *(*(call_tmp18) + INT64(0));
#line 1057 "DefaultRectangular.chpl"
    call_tmp19 = (coerce_tmp9 * coerce_tmp10);
#line 1057 "DefaultRectangular.chpl"
    sum2 += call_tmp19;
#line 1057 "DefaultRectangular.chpl"
    call_tmp20 = (coerce_tmp11 + sum2);
#line 1057 "DefaultRectangular.chpl"
    ret6 = *(call_tmp20);
#line 1057 "DefaultRectangular.chpl"
    *(call_tmp13) = ret6;
#line 1057 "DefaultRectangular.chpl"
  }
#line 1056 "DefaultRectangular.chpl"
  chpl__autoDestroy2(call_tmp6, _ln, _fn);
#line 1058 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1058), INT64(25));
#line 1058 "DefaultRectangular.chpl"
  call_tmp21 = &((this5)->off);
#line 1058 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1058), INT64(25));
#line 1058 "DefaultRectangular.chpl"
  *(coerce_tmp12 + INT64(0)) = *((copy)->off + INT64(0));
#line 1058 "DefaultRectangular.chpl"
  *(*(call_tmp21) + INT64(0)) = *(coerce_tmp12 + INT64(0));
#line 1059 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1059), INT64(25));
#line 1059 "DefaultRectangular.chpl"
  call_tmp22 = &((this5)->blk);
#line 1059 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1059), INT64(25));
#line 1059 "DefaultRectangular.chpl"
  *(coerce_tmp13 + INT64(0)) = *((copy)->blk + INT64(0));
#line 1059 "DefaultRectangular.chpl"
  *(*(call_tmp22) + INT64(0)) = *(coerce_tmp13 + INT64(0));
#line 1060 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1060), INT64(25));
#line 1060 "DefaultRectangular.chpl"
  call_tmp23 = &((this5)->str);
#line 1060 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1060), INT64(25));
#line 1060 "DefaultRectangular.chpl"
  *(coerce_tmp14 + INT64(0)) = *((copy)->str + INT64(0));
#line 1060 "DefaultRectangular.chpl"
  *(*(call_tmp23) + INT64(0)) = *(coerce_tmp14 + INT64(0));
#line 1061 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1061), INT64(25));
#line 1061 "DefaultRectangular.chpl"
  call_tmp24 = &((this5)->origin);
#line 1061 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1061), INT64(25));
#line 1061 "DefaultRectangular.chpl"
  coerce_tmp15 = (copy)->origin;
#line 1061 "DefaultRectangular.chpl"
  *(call_tmp24) = coerce_tmp15;
#line 1062 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1062), INT64(25));
#line 1062 "DefaultRectangular.chpl"
  call_tmp25 = &((this5)->factoredOffs);
#line 1062 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1062), INT64(25));
#line 1062 "DefaultRectangular.chpl"
  coerce_tmp16 = (copy)->factoredOffs;
#line 1062 "DefaultRectangular.chpl"
  *(call_tmp25) = coerce_tmp16;
#line 1063 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1063), INT64(25));
#line 1063 "DefaultRectangular.chpl"
  dsiDestroyData3(this5, _ln, _fn);
#line 1064 "DefaultRectangular.chpl"
  chpl_check_nil(this5, INT64(1064), INT64(25));
#line 1064 "DefaultRectangular.chpl"
  call_tmp26 = &((this5)->data);
#line 1064 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1064), INT64(25));
#line 1064 "DefaultRectangular.chpl"
  coerce_tmp17 = (copy)->data;
#line 1064 "DefaultRectangular.chpl"
  *(call_tmp26) = coerce_tmp17;
#line 1074 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1074), INT64(25));
#line 1074 "DefaultRectangular.chpl"
  call_tmp27 = numIndices(d, _ln, _fn);
#line 1074 "DefaultRectangular.chpl"
  call_tmp28 = (call_tmp27 > INT64(0));
#line 1074 "DefaultRectangular.chpl"
  if (call_tmp28) /* ZLINE: 1074 /home/agobin/Documents/chapel-1.13.0/modules/internal/DefaultRectangular.chpl */
#line 1074 "DefaultRectangular.chpl"
  {
#line 1075 "DefaultRectangular.chpl"
    chpl_check_nil(this5, INT64(1075), INT64(25));
#line 1075 "DefaultRectangular.chpl"
    call_tmp29 = &((this5)->shiftedData);
#line 1075 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1075), INT64(25));
#line 1075 "DefaultRectangular.chpl"
    coerce_tmp18 = (copy)->shiftedData;
#line 1075 "DefaultRectangular.chpl"
    *(call_tmp29) = coerce_tmp18;
#line 1075 "DefaultRectangular.chpl"
  }
#line 1077 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(copy));
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1077 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(1077), INT64(25));
#line 1077 "DefaultRectangular.chpl"
  call_tmp30 = &((_field_destructor_tmp_2)->_v);
#line 1077 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp30);
#line 1077 "DefaultRectangular.chpl"
  call_tmp31 = ((void*)(copy));
#line 1077 "DefaultRectangular.chpl"
  chpl_here_free(call_tmp31, _ln, _fn);
#line 1038 "DefaultRectangular.chpl"
  return;
#line 1038 "DefaultRectangular.chpl"
}


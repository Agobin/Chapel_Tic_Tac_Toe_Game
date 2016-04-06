/* DefaultRectangular.chpl:22 */
static void chpl__init_DefaultRectangular(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
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
  DefaultDist this6 = NULL;
  int64_t call_tmp12;
  chpl_opaque cast_tmp;
  atomic_refcnt this7;
  atomic_int64 _init_class_tmp_;
  atomic_int64 this8;
  atomic_int_least64_t ret;
  atomic_int_least64_t type_tmp;
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
  atomic_int64 wrap_call_tmp;
  atomic_refcnt wrap_call_tmp2;
  list_BaseDom_chpl this9;
  listNode_BaseDom_chpl call_tmp13 = NULL;
  listNode_BaseDom_chpl call_tmp14 = NULL;
  list_BaseDom_chpl wrap_call_tmp3;
  atomicflag this10;
  atomic_flag ret2;
  atomic_flag type_tmp2;
  _ref_atomic_flag _ref_tmp_2 = NULL;
  atomicflag wrap_call_tmp4;
  DefaultDist wrap_call_tmp5 = NULL;
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 22 "DefaultRectangular.chpl"
  if (chpl__init_DefaultRectangular_p) /* ZLINE: 22 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
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
  chpl__init_DefaultRectangular_p = true;
#line 22 "DefaultRectangular.chpl"
  {
#line 22 "DefaultRectangular.chpl"
    chpl__init_DSIUtil(_ln, _fn);
#line 22 "DefaultRectangular.chpl"
    chpl__init_ChapelArray(_ln, _fn);
#line 22 "DefaultRectangular.chpl"
  }
#line 24 "DefaultRectangular.chpl"
  call_tmp = chpl_config_has_value("dataParTasksPerLocale", "Built-in");
#line 24 "DefaultRectangular.chpl"
  call_tmp2 = (! call_tmp);
#line 24 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 24 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 24 "DefaultRectangular.chpl"
  {
#line 24 "DefaultRectangular.chpl"
    const_tmp = INT64(0);
#line 24 "DefaultRectangular.chpl"
  } else /* ZLINE: 24 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 24 "DefaultRectangular.chpl"
  {
#line 24 "DefaultRectangular.chpl"
    call_tmp3 = chpl_config_get_value("dataParTasksPerLocale", "Built-in");
#line 24 "DefaultRectangular.chpl"
    const_tmp = _command_line_cast8(call_tmp3, _ln, _fn);
#line 24 "DefaultRectangular.chpl"
  }
#line 24 "DefaultRectangular.chpl"
  dataParTasksPerLocale = const_tmp;
#line 25 "DefaultRectangular.chpl"
  call_tmp4 = chpl_config_has_value("dataParIgnoreRunningTasks", "Built-in");
#line 25 "DefaultRectangular.chpl"
  call_tmp5 = (! call_tmp4);
#line 25 "DefaultRectangular.chpl"
  if (call_tmp5) /* ZLINE: 25 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 25 "DefaultRectangular.chpl"
  {
#line 25 "DefaultRectangular.chpl"
    const_tmp2 = false;
#line 25 "DefaultRectangular.chpl"
  } else /* ZLINE: 25 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 25 "DefaultRectangular.chpl"
  {
#line 25 "DefaultRectangular.chpl"
    call_tmp6 = chpl_config_get_value("dataParIgnoreRunningTasks", "Built-in");
#line 25 "DefaultRectangular.chpl"
    const_tmp2 = _command_line_cast9(call_tmp6, _ln, _fn);
#line 25 "DefaultRectangular.chpl"
  }
#line 25 "DefaultRectangular.chpl"
  dataParIgnoreRunningTasks = const_tmp2;
#line 27 "DefaultRectangular.chpl"
  call_tmp7 = chpl_config_has_value("dataParMinGranularity", "Built-in");
#line 27 "DefaultRectangular.chpl"
  call_tmp8 = (! call_tmp7);
#line 27 "DefaultRectangular.chpl"
  if (call_tmp8) /* ZLINE: 27 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 27 "DefaultRectangular.chpl"
  {
#line 27 "DefaultRectangular.chpl"
    const_tmp3 = INT64(1);
#line 27 "DefaultRectangular.chpl"
  } else /* ZLINE: 27 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 27 "DefaultRectangular.chpl"
  {
#line 27 "DefaultRectangular.chpl"
    call_tmp9 = chpl_config_get_value("dataParMinGranularity", "Built-in");
#line 27 "DefaultRectangular.chpl"
    const_tmp3 = _command_line_cast10(call_tmp9, _ln, _fn);
#line 27 "DefaultRectangular.chpl"
  }
#line 27 "DefaultRectangular.chpl"
  dataParMinGranularity = const_tmp3;
#line 29 "DefaultRectangular.chpl"
  call_tmp10 = (dataParTasksPerLocale < INT64(0));
#line 29 "DefaultRectangular.chpl"
  if (call_tmp10) /* ZLINE: 29 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 29 "DefaultRectangular.chpl"
  {
#line 29 "DefaultRectangular.chpl"
    halt("dataParTasksPerLocale must be >= 0", _ln, _fn);
#line 29 "DefaultRectangular.chpl"
  }
#line 30 "DefaultRectangular.chpl"
  call_tmp11 = (dataParMinGranularity <= INT64(0));
#line 30 "DefaultRectangular.chpl"
  if (call_tmp11) /* ZLINE: 30 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 30 "DefaultRectangular.chpl"
  {
#line 30 "DefaultRectangular.chpl"
    halt("dataParMinGranularity must be > 0", _ln, _fn);
#line 30 "DefaultRectangular.chpl"
  }
#line 75 "DefaultRectangular.chpl"
  call_tmp12 = sizeof(chpl_DefaultDist_object);
#line 75 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp12, INT16(5), _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  this6 = ((DefaultDist)(cast_tmp));
#line 75 "DefaultRectangular.chpl"
  ((object)(this6))->chpl__cid = chpl__cid_DefaultDist;
#line 75 "DefaultRectangular.chpl"
  (&this7)->_cnt = _init_class_tmp_;
#line 75 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 75 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 75 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 75 "DefaultRectangular.chpl"
  (&this8)->_v = ret;
#line 75 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this8, _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  (&this7)->_cnt = wrap_call_tmp;
#line 75 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this7, _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  (&this9)->first_chpl = nil;
#line 75 "DefaultRectangular.chpl"
  (&this9)->last_chpl = nil;
#line 75 "DefaultRectangular.chpl"
  (&this9)->length_chpl = INT64(0);
#line 75 "DefaultRectangular.chpl"
  call_tmp13 = ((listNode_BaseDom_chpl)(nil));
#line 75 "DefaultRectangular.chpl"
  (&this9)->first_chpl = call_tmp13;
#line 75 "DefaultRectangular.chpl"
  call_tmp14 = ((listNode_BaseDom_chpl)(nil));
#line 75 "DefaultRectangular.chpl"
  (&this9)->last_chpl = call_tmp14;
#line 75 "DefaultRectangular.chpl"
  (&this9)->length_chpl = INT64(0);
#line 75 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_list_chpl2(call_tmp13, call_tmp14, INT64(0), &this9, _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  ret2 = type_tmp2;
#line 75 "DefaultRectangular.chpl"
  _ref_tmp_2 = &ret2;
#line 75 "DefaultRectangular.chpl"
  atomic_init_flag(_ref_tmp_2, false);
#line 75 "DefaultRectangular.chpl"
  (&this10)->_v = ret2;
#line 75 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_atomicflag(ret2, &this10, _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  wrap_call_tmp5 = _construct_DefaultDist(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, this6, _ln, _fn);
#line 75 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &defaultDist;
#line 75 "DefaultRectangular.chpl"
  chpl__buildDistValue(wrap_call_tmp5, ret_to_arg_ref_tmp_, _ln, _fn);
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
static DefaultDist _construct_DefaultDist(atomic_refcnt* const _distCnt, list_BaseDom_chpl* const _doms, atomicflag* const _domsLock, DefaultDist meme, int64_t _ln, c_string _fn) {
#line 22 "DefaultRectangular.chpl"
  DefaultDist this6 = NULL;
#line 22 "DefaultRectangular.chpl"
  BaseDist T = NULL;
#line 43 "DefaultRectangular.chpl"
  this6 = meme;
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(43), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 43 "DefaultRectangular.chpl"
  T = &((this6)->super);
#line 43 "DefaultRectangular.chpl"
  _construct_BaseDist(_distCnt, _doms, _domsLock, T, _ln, _fn);
#line 43 "DefaultRectangular.chpl"
  return meme;
#line 43 "DefaultRectangular.chpl"
}

#line 43 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:43 */
#line 43 "DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultDist(DefaultDist this6, int64_t _ln, c_string _fn) {
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
  _parent_destructor_tmp_ = ((BaseDist)(this6));
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(43), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 43 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_domsLock);
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(43), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 43 "DefaultRectangular.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 43 "DefaultRectangular.chpl"
  atomic_destroy_flag(call_tmp);
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(43), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 43 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_)->_distCnt);
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(43), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 43 "DefaultRectangular.chpl"
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 43 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(43), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
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
static DefaultRectangularDom_1_int64_t_F dsiNewRectangularDom(DefaultDist this6, int64_t _ln, c_string _fn) {
#line 43 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp = NULL;
#line 45 "DefaultRectangular.chpl"
  call_tmp = DefaultRectangularDom(this6, _ln, _fn);
#line 44 "DefaultRectangular.chpl"
  return call_tmp;
#line 44 "DefaultRectangular.chpl"
}

#line 44 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:60 */
#line 44 "DefaultRectangular.chpl"
static DefaultDist dsiClone(DefaultDist this6) {
#line 60 "DefaultRectangular.chpl"
  return this6;
#line 60 "DefaultRectangular.chpl"
}

#line 60 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:76 */
#line 60 "DefaultRectangular.chpl"
static void chpl_defaultDistInitPrivate(int64_t _ln, c_string _fn) {
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
  DefaultDist this6 = NULL;
#line 60 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 60 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 60 "DefaultRectangular.chpl"
  atomic_refcnt this7;
#line 60 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_;
#line 60 "DefaultRectangular.chpl"
  atomic_int64 this8;
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
  list_BaseDom_chpl this9;
#line 60 "DefaultRectangular.chpl"
  listNode_BaseDom_chpl call_tmp4 = NULL;
#line 60 "DefaultRectangular.chpl"
  listNode_BaseDom_chpl call_tmp5 = NULL;
#line 60 "DefaultRectangular.chpl"
  list_BaseDom_chpl wrap_call_tmp3;
#line 60 "DefaultRectangular.chpl"
  atomicflag this10;
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
  _ref_DefaultDist ret_to_arg_ref_tmp_ = NULL;
#line 60 "DefaultRectangular.chpl"
  DefaultDist call_tmp6 = NULL;
#line 60 "DefaultRectangular.chpl"
  _ref_DefaultDist ret_to_arg_ref_tmp_2 = NULL;
#line 77 "DefaultRectangular.chpl"
  ret = defaultDist;
#line 77 "DefaultRectangular.chpl"
  call_tmp = ((object)(ret));
#line 77 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp == nil);
#line 77 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 84 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 77 "DefaultRectangular.chpl"
  {
#line 84 "DefaultRectangular.chpl"
    call_tmp3 = sizeof(chpl_DefaultDist_object);
#line 84 "DefaultRectangular.chpl"
    cast_tmp = chpl_here_alloc(call_tmp3, INT16(5), _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    this6 = ((DefaultDist)(cast_tmp));
#line 84 "DefaultRectangular.chpl"
    ((object)(this6))->chpl__cid = chpl__cid_DefaultDist;
#line 84 "DefaultRectangular.chpl"
    (&this7)->_cnt = _init_class_tmp_;
#line 84 "DefaultRectangular.chpl"
    ret2 = type_tmp;
#line 84 "DefaultRectangular.chpl"
    _ref_tmp_ = &ret2;
#line 84 "DefaultRectangular.chpl"
    atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 84 "DefaultRectangular.chpl"
    (&this8)->_v = ret2;
#line 84 "DefaultRectangular.chpl"
    wrap_call_tmp = _construct_atomic_int64(ret2, &this8, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    (&this7)->_cnt = wrap_call_tmp;
#line 84 "DefaultRectangular.chpl"
    wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this7, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    (&this9)->first_chpl = nil;
#line 84 "DefaultRectangular.chpl"
    (&this9)->last_chpl = nil;
#line 84 "DefaultRectangular.chpl"
    (&this9)->length_chpl = INT64(0);
#line 84 "DefaultRectangular.chpl"
    call_tmp4 = ((listNode_BaseDom_chpl)(nil));
#line 84 "DefaultRectangular.chpl"
    (&this9)->first_chpl = call_tmp4;
#line 84 "DefaultRectangular.chpl"
    call_tmp5 = ((listNode_BaseDom_chpl)(nil));
#line 84 "DefaultRectangular.chpl"
    (&this9)->last_chpl = call_tmp5;
#line 84 "DefaultRectangular.chpl"
    (&this9)->length_chpl = INT64(0);
#line 84 "DefaultRectangular.chpl"
    wrap_call_tmp3 = _construct_list_chpl2(call_tmp4, call_tmp5, INT64(0), &this9, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    ret3 = type_tmp2;
#line 84 "DefaultRectangular.chpl"
    _ref_tmp_2 = &ret3;
#line 84 "DefaultRectangular.chpl"
    atomic_init_flag(_ref_tmp_2, false);
#line 84 "DefaultRectangular.chpl"
    (&this10)->_v = ret3;
#line 84 "DefaultRectangular.chpl"
    wrap_call_tmp4 = _construct_atomicflag(ret3, &this10, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    wrap_call_tmp5 = _construct_DefaultDist(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, this6, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    ret_to_arg_ref_tmp_ = &const_tmp;
#line 84 "DefaultRectangular.chpl"
    chpl__buildDistValue(wrap_call_tmp5, ret_to_arg_ref_tmp_, _ln, _fn);
#line 84 "DefaultRectangular.chpl"
    nd = const_tmp;
#line 85 "DefaultRectangular.chpl"
    ret_to_arg_ref_tmp_2 = &call_tmp6;
#line 85 "DefaultRectangular.chpl"
    chpl_check_nil(const_tmp, INT64(85), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 85 "DefaultRectangular.chpl"
    clone2(const_tmp, ret_to_arg_ref_tmp_2, _ln, _fn);
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
static DefaultRectangularDom_1_int64_t_F _construct_DefaultRectangularDom(atomic_refcnt* const _domCnt, list_BaseArr_chpl* const _arrs, atomicflag* const _arrsLock, DefaultDist dist2, _tuple_1_star_range_int64_t_bounded_F* const ranges, DefaultRectangularDom_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 76 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this6 = NULL;
#line 76 "DefaultRectangular.chpl"
  BaseRectangularDom T = NULL;
#line 89 "DefaultRectangular.chpl"
  this6 = meme;
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(89), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 89 "DefaultRectangular.chpl"
  T = &((this6)->super);
#line 89 "DefaultRectangular.chpl"
  _construct_BaseRectangularDom(_domCnt, _arrs, _arrsLock, T, _ln, _fn);
#line 93 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(93), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 93 "DefaultRectangular.chpl"
  (this6)->dist = dist2;
#line 94 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(94), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 94 "DefaultRectangular.chpl"
  *((this6)->ranges + INT64(0)) = *(*(ranges) + INT64(0));
#line 89 "DefaultRectangular.chpl"
  return this6;
#line 89 "DefaultRectangular.chpl"
}

#line 89 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:89 */
#line 89 "DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularDom(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn) {
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
  _parent_destructor_tmp_ = ((BaseRectangularDom)(this6));
#line 89 "DefaultRectangular.chpl"
  _parent_destructor_tmp_2 = ((BaseDom)(_parent_destructor_tmp_));
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_2, INT64(89), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 89 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_2)->_arrsLock);
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(89), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 89 "DefaultRectangular.chpl"
  call_tmp = &((_field_destructor_tmp_)->_v);
#line 89 "DefaultRectangular.chpl"
  atomic_destroy_flag(call_tmp);
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_2, INT64(89), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 89 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_parent_destructor_tmp_2)->_domCnt);
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(89), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 89 "DefaultRectangular.chpl"
  _field_destructor_tmp_3 = &((_field_destructor_tmp_2)->_cnt);
#line 89 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_3, INT64(89), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
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
static chpl_bool dsiLinksDistribution2(DefaultRectangularDom_1_int64_t_F this6) {
#line 97 "DefaultRectangular.chpl"
  return false;
#line 97 "DefaultRectangular.chpl"
}

#line 97 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:99 */
#line 97 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F DefaultRectangularDom(DefaultDist dist2, int64_t _ln, c_string _fn) {
#line 97 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this6 = NULL;
#line 97 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this7 = NULL;
#line 97 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 97 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 97 "DefaultRectangular.chpl"
  _tuple_1_star_range_int64_t_bounded_F _init_class_tmp_;
#line 97 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _init_class_tmp_2;
#line 97 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 97 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_3;
#line 97 "DefaultRectangular.chpl"
  atomic_int64 this9;
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
  list_BaseArr_chpl this10;
#line 97 "DefaultRectangular.chpl"
  listNode_BaseArr_chpl call_tmp2 = NULL;
#line 97 "DefaultRectangular.chpl"
  listNode_BaseArr_chpl call_tmp3 = NULL;
#line 97 "DefaultRectangular.chpl"
  list_BaseArr_chpl wrap_call_tmp3;
#line 97 "DefaultRectangular.chpl"
  atomicflag this11;
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
  _tuple_1_star_range_int64_t_bounded_F this12;
#line 97 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F wrap_call_tmp6 = NULL;
#line 97 "DefaultRectangular.chpl"
  _ref_DefaultDist call_tmp5 = NULL;
#line 99 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularDom_1_int64_t_F_object);
#line 99 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(6), _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularDom_1_int64_t_F)(cast_tmp));
#line 99 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularDom_1_int64_t_F;
#line 99 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(99), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 99 "DefaultRectangular.chpl"
  (this7)->dist = nil;
#line 99 "DefaultRectangular.chpl"
  (&_init_class_tmp_2)->_low = INT64(0);
#line 99 "DefaultRectangular.chpl"
  (&_init_class_tmp_2)->_high = INT64(0);
#line 99 "DefaultRectangular.chpl"
  (&_init_class_tmp_2)->_stride = INT64(0);
#line 99 "DefaultRectangular.chpl"
  (&_init_class_tmp_2)->_alignment = INT64(0);
#line 99 "DefaultRectangular.chpl"
  (&_init_class_tmp_2)->_aligned = false;
#line 99 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = _init_class_tmp_2;
#line 99 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(99), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 99 "DefaultRectangular.chpl"
  *((this7)->ranges + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 99 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_3;
#line 99 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 99 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 99 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 99 "DefaultRectangular.chpl"
  (&this9)->_v = ret;
#line 99 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this9, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 99 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  (&this10)->first_chpl = nil;
#line 99 "DefaultRectangular.chpl"
  (&this10)->last_chpl = nil;
#line 99 "DefaultRectangular.chpl"
  (&this10)->length_chpl = INT64(0);
#line 99 "DefaultRectangular.chpl"
  call_tmp2 = ((listNode_BaseArr_chpl)(nil));
#line 99 "DefaultRectangular.chpl"
  (&this10)->first_chpl = call_tmp2;
#line 99 "DefaultRectangular.chpl"
  call_tmp3 = ((listNode_BaseArr_chpl)(nil));
#line 99 "DefaultRectangular.chpl"
  (&this10)->last_chpl = call_tmp3;
#line 99 "DefaultRectangular.chpl"
  (&this10)->length_chpl = INT64(0);
#line 99 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_list_chpl(call_tmp2, call_tmp3, INT64(0), &this10, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  ret2 = type_tmp2;
#line 99 "DefaultRectangular.chpl"
  _ref_tmp_2 = &ret2;
#line 99 "DefaultRectangular.chpl"
  atomic_init_flag(_ref_tmp_2, false);
#line 99 "DefaultRectangular.chpl"
  (&this11)->_v = ret2;
#line 99 "DefaultRectangular.chpl"
  wrap_call_tmp4 = _construct_atomicflag(ret2, &this11, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  call_tmp4 = ((DefaultDist)(nil));
#line 99 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(99), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 99 "DefaultRectangular.chpl"
  (this7)->dist = call_tmp4;
#line 99 "DefaultRectangular.chpl"
  wrap_call_tmp5 = range2(INT64(1), INT64(0), INT64(1), INT64(0), false, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = wrap_call_tmp5;
#line 99 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(99), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 99 "DefaultRectangular.chpl"
  *((this7)->ranges + INT64(0)) = *(this12 + INT64(0));
#line 99 "DefaultRectangular.chpl"
  wrap_call_tmp6 = _construct_DefaultRectangularDom(&wrap_call_tmp2, &wrap_call_tmp3, &wrap_call_tmp4, call_tmp4, &this12, this7, _ln, _fn);
#line 99 "DefaultRectangular.chpl"
  this6 = wrap_call_tmp6;
#line 100 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(100), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 100 "DefaultRectangular.chpl"
  call_tmp5 = &((this6)->dist);
#line 100 "DefaultRectangular.chpl"
  *(call_tmp5) = dist2;
#line 99 "DefaultRectangular.chpl"
  return this6;
#line 99 "DefaultRectangular.chpl"
}

#line 99 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:114 */
#line 99 "DefaultRectangular.chpl"
static void dsiGetIndices(DefaultRectangularDom_1_int64_t_F this6, _ref__tuple_1_star_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
#line 99 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x1;
#line 99 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
#line 114 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(114), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 114 "DefaultRectangular.chpl"
  ret_ = &((this6)->ranges);
#line 114 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 114 "DefaultRectangular.chpl"
  *(*(_retArg) + INT64(0)) = ret_x1;
#line 114 "DefaultRectangular.chpl"
  return;
#line 114 "DefaultRectangular.chpl"
}

#line 114 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:116 */
#line 114 "DefaultRectangular.chpl"
static void dsiSetIndices(DefaultRectangularDom_1_int64_t_F this6, _tuple_1_star_range_int64_t_bounded_F* const x, int64_t _ln, c_string _fn) {
#line 114 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F call_tmp = NULL;
#line 121 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(121), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 121 "DefaultRectangular.chpl"
  call_tmp = &((this6)->ranges);
#line 121 "DefaultRectangular.chpl"
  *(*(call_tmp) + INT64(0)) = *(*(x) + INT64(0));
#line 116 "DefaultRectangular.chpl"
  return;
#line 116 "DefaultRectangular.chpl"
}

#line 116 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:452 */
#line 116 "DefaultRectangular.chpl"
static chpl_bool dsiMember(DefaultRectangularDom_1_int64_t_F this6, _tuple_1_star_int64_t* const ind, int64_t _ln, c_string _fn) {
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
  int64_t ret3;
#line 116 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 116 "DefaultRectangular.chpl"
  int64_t ret4;
#line 116 "DefaultRectangular.chpl"
  chpl_bool call_tmp3;
#line 116 "DefaultRectangular.chpl"
  chpl_bool call_tmp4;
#line 454 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(454), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 454 "DefaultRectangular.chpl"
  _this_tmp_ = &((this6)->ranges);
#line 454 "DefaultRectangular.chpl"
  call_tmp = (*(_this_tmp_) + INT64(0));
#line 454 "DefaultRectangular.chpl"
  coerce_tmp = *(*(ind) + INT64(0));
#line 454 "DefaultRectangular.chpl"
  chpl_check_nil(call_tmp, INT64(454), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 454 "DefaultRectangular.chpl"
  ret3 = (call_tmp)->_high;
#line 454 "DefaultRectangular.chpl"
  call_tmp2 = (coerce_tmp > ret3);
#line 454 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 454 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 454 "DefaultRectangular.chpl"
  {
#line 454 "DefaultRectangular.chpl"
    ret2 = false;
#line 454 "DefaultRectangular.chpl"
    goto _end_member;
#line 454 "DefaultRectangular.chpl"
  }
#line 454 "DefaultRectangular.chpl"
  chpl_check_nil(call_tmp, INT64(454), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 454 "DefaultRectangular.chpl"
  ret4 = (call_tmp)->_low;
#line 454 "DefaultRectangular.chpl"
  call_tmp3 = (coerce_tmp < ret4);
#line 454 "DefaultRectangular.chpl"
  if (call_tmp3) /* ZLINE: 454 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 454 "DefaultRectangular.chpl"
  {
#line 454 "DefaultRectangular.chpl"
    ret2 = false;
#line 454 "DefaultRectangular.chpl"
    goto _end_member;
#line 454 "DefaultRectangular.chpl"
  }
#line 454 "DefaultRectangular.chpl"
  ret2 = true;
#line 454 "DefaultRectangular.chpl"
  _end_member:;
#line 454 "DefaultRectangular.chpl"
  call_tmp4 = (! ret2);
#line 454 "DefaultRectangular.chpl"
  if (call_tmp4) /* ZLINE: 454 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 454 "DefaultRectangular.chpl"
  {
#line 455 "DefaultRectangular.chpl"
    ret = false;
#line 455 "DefaultRectangular.chpl"
    goto _end_dsiMember;
#line 455 "DefaultRectangular.chpl"
  }
#line 456 "DefaultRectangular.chpl"
  ret = true;
#line 456 "DefaultRectangular.chpl"
  _end_dsiMember:;
#line 452 "DefaultRectangular.chpl"
  return ret;
#line 452 "DefaultRectangular.chpl"
}

#line 452 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:480 */
#line 452 "DefaultRectangular.chpl"
static void dsiDim(DefaultRectangularDom_1_int64_t_F this6, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
#line 452 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x1;
#line 452 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
#line 481 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(481), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 481 "DefaultRectangular.chpl"
  ret_ = &((this6)->ranges);
#line 481 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 481 "DefaultRectangular.chpl"
  *(_retArg) = ret_x1;
#line 480 "DefaultRectangular.chpl"
  return;
#line 480 "DefaultRectangular.chpl"
}

#line 480 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:483 */
#line 480 "DefaultRectangular.chpl"
static int64_t dsiNumIndices(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn) {
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
  chpl_check_nil(this6, INT64(486), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 486 "DefaultRectangular.chpl"
  _this_tmp_ = &((this6)->ranges);
#line 486 "DefaultRectangular.chpl"
  call_tmp = (*(_this_tmp_) + INT64(0));
#line 486 "DefaultRectangular.chpl"
  chpl_check_nil(call_tmp, INT64(486), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
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
static int64_t dsiLow(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 483 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F call_tmp = NULL;
#line 483 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 483 "DefaultRectangular.chpl"
  int64_t ret;
#line 493 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(493), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 493 "DefaultRectangular.chpl"
  _this_tmp_ = &((this6)->ranges);
#line 493 "DefaultRectangular.chpl"
  call_tmp = (*(_this_tmp_) + INT64(0));
#line 493 "DefaultRectangular.chpl"
  chpl_check_nil(call_tmp, INT64(493), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 493 "DefaultRectangular.chpl"
  ret = (call_tmp)->_low;
#line 491 "DefaultRectangular.chpl"
  return ret;
#line 491 "DefaultRectangular.chpl"
}

#line 491 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:579 */
#line 491 "DefaultRectangular.chpl"
static DefaultRectangularArr_int64_t_1_int64_t_F dsiBuildArray5(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 491 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F this7 = NULL;
#line 491 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 491 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 491 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 491 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_4;
#line 491 "DefaultRectangular.chpl"
  atomic_int64 this9;
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
  BaseArr call_tmp2 = NULL;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 491 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this12;
#line 491 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp3 = NULL;
#line 491 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp4 = NULL;
#line 491 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F wrap_call_tmp3 = NULL;
#line 580 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_int64_t_1_int64_t_F_object);
#line 580 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(24), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularArr_int64_t_1_int64_t_F)(cast_tmp));
#line 580 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->dom = nil;
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->data = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->shiftedData = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 580 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_4;
#line 580 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 580 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 580 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 580 "DefaultRectangular.chpl"
  (&this9)->_v = ret;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this9, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->dom = this6;
#line 580 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(this10 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(this11 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(this12 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_int64_t)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->data = call_tmp3;
#line 580 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_int64_t)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->shiftedData = call_tmp4;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_DefaultRectangularArr(&wrap_call_tmp2, call_tmp2, this6, &this10, &this11, &this12, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this7, _ln, _fn);
#line 579 "DefaultRectangular.chpl"
  return wrap_call_tmp3;
#line 579 "DefaultRectangular.chpl"
}

#line 579 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:579 */
#line 579 "DefaultRectangular.chpl"
static DefaultRectangularArr_chpl_string_1_int64_t_F dsiBuildArray(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F this7 = NULL;
#line 579 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 579 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_4;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 this9;
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
  BaseArr call_tmp2 = NULL;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this12;
#line 579 "DefaultRectangular.chpl"
  _ddata_chpl_string call_tmp3 = NULL;
#line 579 "DefaultRectangular.chpl"
  _ddata_chpl_string call_tmp4 = NULL;
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F wrap_call_tmp3 = NULL;
#line 580 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_chpl_string_1_int64_t_F_object);
#line 580 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(29), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularArr_chpl_string_1_int64_t_F)(cast_tmp));
#line 580 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularArr_chpl_string_1_int64_t_F;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->dom = nil;
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->data = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->shiftedData = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 580 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_4;
#line 580 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 580 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 580 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 580 "DefaultRectangular.chpl"
  (&this9)->_v = ret;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this9, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->dom = this6;
#line 580 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(this10 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(this11 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(this12 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_chpl_string)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->data = call_tmp3;
#line 580 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_chpl_string)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->shiftedData = call_tmp4;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_DefaultRectangularArr2(&wrap_call_tmp2, call_tmp2, this6, &this10, &this11, &this12, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this7, _ln, _fn);
#line 579 "DefaultRectangular.chpl"
  return wrap_call_tmp3;
#line 579 "DefaultRectangular.chpl"
}

#line 579 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:579 */
#line 579 "DefaultRectangular.chpl"
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F dsiBuildArray2(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this7 = NULL;
#line 579 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 579 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_4;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 this9;
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
  BaseArr call_tmp2 = NULL;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this12;
#line 579 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp3 = NULL;
#line 579 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp4 = NULL;
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F wrap_call_tmp3 = NULL;
#line 580 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F_object);
#line 580 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(27), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F)(cast_tmp));
#line 580 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->dom = nil;
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->data = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->shiftedData = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 580 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_4;
#line 580 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 580 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 580 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 580 "DefaultRectangular.chpl"
  (&this9)->_v = ret;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this9, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->dom = this6;
#line 580 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(this10 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(this11 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(this12 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->data = call_tmp3;
#line 580 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->shiftedData = call_tmp4;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_DefaultRectangularArr5(&wrap_call_tmp2, call_tmp2, this6, &this10, &this11, &this12, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this7, _ln, _fn);
#line 579 "DefaultRectangular.chpl"
  return wrap_call_tmp3;
#line 579 "DefaultRectangular.chpl"
}

#line 579 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:579 */
#line 579 "DefaultRectangular.chpl"
static DefaultRectangularArr_localesSignal_1_int64_t_F dsiBuildArray4(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this7 = NULL;
#line 579 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 579 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_4;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 this9;
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
  BaseArr call_tmp2 = NULL;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this12;
#line 579 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp3 = NULL;
#line 579 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp4 = NULL;
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp3 = NULL;
#line 580 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object);
#line 580 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(17), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(cast_tmp));
#line 580 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->dom = nil;
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->data = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->shiftedData = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 580 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_4;
#line 580 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 580 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 580 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 580 "DefaultRectangular.chpl"
  (&this9)->_v = ret;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this9, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->dom = this6;
#line 580 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(this10 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(this11 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(this12 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_localesSignal)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->data = call_tmp3;
#line 580 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_localesSignal)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->shiftedData = call_tmp4;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_DefaultRectangularArr4(&wrap_call_tmp2, call_tmp2, this6, &this10, &this11, &this12, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this7, _ln, _fn);
#line 579 "DefaultRectangular.chpl"
  return wrap_call_tmp3;
#line 579 "DefaultRectangular.chpl"
}

#line 579 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:579 */
#line 579 "DefaultRectangular.chpl"
static DefaultRectangularArr_locale_1_int64_t_F dsiBuildArray3(DefaultRectangularDom_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F this7 = NULL;
#line 579 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 579 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 579 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_4;
#line 579 "DefaultRectangular.chpl"
  atomic_int64 this9;
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
  BaseArr call_tmp2 = NULL;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 579 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this12;
#line 579 "DefaultRectangular.chpl"
  _ddata_locale call_tmp3 = NULL;
#line 579 "DefaultRectangular.chpl"
  _ddata_locale call_tmp4 = NULL;
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp3 = NULL;
#line 580 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_locale_1_int64_t_F_object);
#line 580 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(9), _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularArr_locale_1_int64_t_F)(cast_tmp));
#line 580 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularArr_locale_1_int64_t_F;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->dom = nil;
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->data = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->shiftedData = nil;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 580 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_4;
#line 580 "DefaultRectangular.chpl"
  ret = type_tmp;
#line 580 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret;
#line 580 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 580 "DefaultRectangular.chpl"
  (&this9)->_v = ret;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret, &this9, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 580 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->dom = this6;
#line 580 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(this10 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(this11 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(this12 + INT64(0));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 580 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_locale)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->data = call_tmp3;
#line 580 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_locale)(nil));
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->shiftedData = call_tmp4;
#line 580 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(580), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 580 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 580 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_DefaultRectangularArr3(&wrap_call_tmp2, call_tmp2, this6, &this10, &this11, &this12, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this7, _ln, _fn);
#line 579 "DefaultRectangular.chpl"
  return wrap_call_tmp3;
#line 579 "DefaultRectangular.chpl"
}

#line 579 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:584 */
#line 579 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiBuildRectangularDom(DefaultRectangularDom_1_int64_t_F this6, _tuple_1_star_range_int64_t_bounded_F* const ranges, int64_t _ln, c_string _fn) {
#line 579 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F dom = NULL;
#line 579 "DefaultRectangular.chpl"
  DefaultDist ret = NULL;
#line 579 "DefaultRectangular.chpl"
  int64_t _ic__F1_high;
#line 579 "DefaultRectangular.chpl"
  int64_t i;
#line 579 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F call_tmp = NULL;
#line 579 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  range_int64_t_bounded_F T;
#line 579 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 579 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 588 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(588), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 588 "DefaultRectangular.chpl"
  ret = (this6)->dist;
#line 588 "DefaultRectangular.chpl"
  dom = DefaultRectangularDom(ret, _ln, _fn);
#line 589 "DefaultRectangular.chpl"
  _ic__F1_high = INT64(1);
#line 589 "DefaultRectangular.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(1), INT64(1), INT64(1), INT64(1), true, _ln, _fn);
#line 589 "DefaultRectangular.chpl"
  for (i = INT64(1); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 590 "DefaultRectangular.chpl"
    chpl_check_nil(dom, INT64(590), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 590 "DefaultRectangular.chpl"
    _this_tmp_ = &((dom)->ranges);
#line 590 "DefaultRectangular.chpl"
    chpl_check_nil(_this_tmp_, INT64(590), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 590 "DefaultRectangular.chpl"
    call_tmp = this4(_this_tmp_, i, _ln, _fn);
#line 590 "DefaultRectangular.chpl"
    ret_to_arg_ref_tmp_ = &T;
#line 590 "DefaultRectangular.chpl"
    _ref_tmp_ = ranges;
#line 590 "DefaultRectangular.chpl"
    chpl_check_nil(_ref_tmp_, INT64(590), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 590 "DefaultRectangular.chpl"
    this5(_ref_tmp_, i, ret_to_arg_ref_tmp_, _ln, _fn);
#line 590 "DefaultRectangular.chpl"
    *(call_tmp) = T;
#line 590 "DefaultRectangular.chpl"
  }
#line 584 "DefaultRectangular.chpl"
  return dom;
#line 584 "DefaultRectangular.chpl"
}

#line 584 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 584 "DefaultRectangular.chpl"
static void chpl__auto_destroy_DefaultRectangularArr(DefaultRectangularArr_chpl_string_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 584 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 584 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 584 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 584 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 629 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(this6));
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
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
static void chpl__auto_destroy_DefaultRectangularArr3(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 629 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 629 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(this6));
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
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
static void chpl__auto_destroy_DefaultRectangularArr2(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 629 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 629 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(this6));
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
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
static void chpl__auto_destroy_DefaultRectangularArr5(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 629 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 629 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(this6));
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
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
static void chpl__auto_destroy_DefaultRectangularArr4(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 629 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 629 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp = NULL;
#line 629 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(this6));
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
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
static DefaultRectangularArr_chpl_string_1_int64_t_F _construct_DefaultRectangularArr2(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_chpl_string data, _ddata_chpl_string shiftedData, chpl_bool noinit_data, DefaultRectangularArr_chpl_string_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F this6 = NULL;
#line 629 "DefaultRectangular.chpl"
  BaseArr T = NULL;
#line 629 "DefaultRectangular.chpl"
  this6 = meme;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  T = &((this6)->super);
#line 629 "DefaultRectangular.chpl"
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
#line 635 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(635), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 635 "DefaultRectangular.chpl"
  (this6)->dom = dom;
#line 637 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(637), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 637 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(*(off) + INT64(0));
#line 638 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(638), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 638 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(*(blk) + INT64(0));
#line 639 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(639), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 639 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(*(str) + INT64(0));
#line 640 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(640), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 640 "DefaultRectangular.chpl"
  (this6)->origin = origin;
#line 641 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(641), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 641 "DefaultRectangular.chpl"
  (this6)->factoredOffs = factoredOffs;
#line 643 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(643), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 643 "DefaultRectangular.chpl"
  (this6)->data = data;
#line 645 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(645), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 645 "DefaultRectangular.chpl"
  (this6)->shiftedData = shiftedData;
#line 646 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(646), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 646 "DefaultRectangular.chpl"
  (this6)->noinit_data = noinit_data;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  initialize8(this6, _ln, _fn);
#line 629 "DefaultRectangular.chpl"
  return this6;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F _construct_DefaultRectangularArr5(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_c_ptr_GtkWidget data, _ddata_c_ptr_GtkWidget shiftedData, chpl_bool noinit_data, DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6 = NULL;
#line 629 "DefaultRectangular.chpl"
  BaseArr T = NULL;
#line 629 "DefaultRectangular.chpl"
  this6 = meme;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  T = &((this6)->super);
#line 629 "DefaultRectangular.chpl"
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
#line 635 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(635), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 635 "DefaultRectangular.chpl"
  (this6)->dom = dom;
#line 637 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(637), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 637 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(*(off) + INT64(0));
#line 638 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(638), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 638 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(*(blk) + INT64(0));
#line 639 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(639), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 639 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(*(str) + INT64(0));
#line 640 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(640), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 640 "DefaultRectangular.chpl"
  (this6)->origin = origin;
#line 641 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(641), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 641 "DefaultRectangular.chpl"
  (this6)->factoredOffs = factoredOffs;
#line 643 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(643), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 643 "DefaultRectangular.chpl"
  (this6)->data = data;
#line 645 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(645), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 645 "DefaultRectangular.chpl"
  (this6)->shiftedData = shiftedData;
#line 646 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(646), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 646 "DefaultRectangular.chpl"
  (this6)->noinit_data = noinit_data;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  initialize10(this6, _ln, _fn);
#line 629 "DefaultRectangular.chpl"
  return this6;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularArr_int64_t_1_int64_t_F _construct_DefaultRectangularArr(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_int64_t data, _ddata_int64_t shiftedData, chpl_bool noinit_data, DefaultRectangularArr_int64_t_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F this6 = NULL;
#line 629 "DefaultRectangular.chpl"
  BaseArr T = NULL;
#line 629 "DefaultRectangular.chpl"
  this6 = meme;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  T = &((this6)->super);
#line 629 "DefaultRectangular.chpl"
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
#line 635 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(635), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 635 "DefaultRectangular.chpl"
  (this6)->dom = dom;
#line 637 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(637), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 637 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(*(off) + INT64(0));
#line 638 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(638), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 638 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(*(blk) + INT64(0));
#line 639 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(639), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 639 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(*(str) + INT64(0));
#line 640 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(640), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 640 "DefaultRectangular.chpl"
  (this6)->origin = origin;
#line 641 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(641), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 641 "DefaultRectangular.chpl"
  (this6)->factoredOffs = factoredOffs;
#line 643 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(643), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 643 "DefaultRectangular.chpl"
  (this6)->data = data;
#line 645 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(645), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 645 "DefaultRectangular.chpl"
  (this6)->shiftedData = shiftedData;
#line 646 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(646), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 646 "DefaultRectangular.chpl"
  (this6)->noinit_data = noinit_data;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  initialize9(this6, _ln, _fn);
#line 629 "DefaultRectangular.chpl"
  return this6;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularArr_localesSignal_1_int64_t_F _construct_DefaultRectangularArr4(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_localesSignal data, _ddata_localesSignal shiftedData, chpl_bool noinit_data, DefaultRectangularArr_localesSignal_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this6 = NULL;
#line 629 "DefaultRectangular.chpl"
  BaseArr T = NULL;
#line 629 "DefaultRectangular.chpl"
  this6 = meme;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  T = &((this6)->super);
#line 629 "DefaultRectangular.chpl"
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
#line 635 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(635), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 635 "DefaultRectangular.chpl"
  (this6)->dom = dom;
#line 637 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(637), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 637 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(*(off) + INT64(0));
#line 638 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(638), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 638 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(*(blk) + INT64(0));
#line 639 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(639), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 639 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(*(str) + INT64(0));
#line 640 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(640), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 640 "DefaultRectangular.chpl"
  (this6)->origin = origin;
#line 641 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(641), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 641 "DefaultRectangular.chpl"
  (this6)->factoredOffs = factoredOffs;
#line 643 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(643), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 643 "DefaultRectangular.chpl"
  (this6)->data = data;
#line 645 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(645), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 645 "DefaultRectangular.chpl"
  (this6)->shiftedData = shiftedData;
#line 646 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(646), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 646 "DefaultRectangular.chpl"
  (this6)->noinit_data = noinit_data;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  initialize7(this6, _ln, _fn);
#line 629 "DefaultRectangular.chpl"
  return this6;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:629 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularArr_locale_1_int64_t_F _construct_DefaultRectangularArr3(atomic_refcnt* const _arrCnt, BaseArr _arrAlias, DefaultRectangularDom_1_int64_t_F dom, _tuple_1_star_int64_t* const off, _tuple_1_star_int64_t* const blk, _tuple_1_star_int64_t* const str, int64_t origin, int64_t factoredOffs, _ddata_locale data, _ddata_locale shiftedData, chpl_bool noinit_data, DefaultRectangularArr_locale_1_int64_t_F meme, int64_t _ln, c_string _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F this6 = NULL;
#line 629 "DefaultRectangular.chpl"
  BaseArr T = NULL;
#line 629 "DefaultRectangular.chpl"
  this6 = meme;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  T = &((this6)->super);
#line 629 "DefaultRectangular.chpl"
  _construct_BaseArr(_arrCnt, _arrAlias, T, _ln, _fn);
#line 635 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(635), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 635 "DefaultRectangular.chpl"
  (this6)->dom = dom;
#line 637 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(637), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 637 "DefaultRectangular.chpl"
  *((this6)->off + INT64(0)) = *(*(off) + INT64(0));
#line 638 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(638), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 638 "DefaultRectangular.chpl"
  *((this6)->blk + INT64(0)) = *(*(blk) + INT64(0));
#line 639 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(639), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 639 "DefaultRectangular.chpl"
  *((this6)->str + INT64(0)) = *(*(str) + INT64(0));
#line 640 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(640), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 640 "DefaultRectangular.chpl"
  (this6)->origin = origin;
#line 641 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(641), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 641 "DefaultRectangular.chpl"
  (this6)->factoredOffs = factoredOffs;
#line 643 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(643), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 643 "DefaultRectangular.chpl"
  (this6)->data = data;
#line 645 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(645), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 645 "DefaultRectangular.chpl"
  (this6)->shiftedData = shiftedData;
#line 646 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(646), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 646 "DefaultRectangular.chpl"
  (this6)->noinit_data = noinit_data;
#line 629 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(629), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 629 "DefaultRectangular.chpl"
  initialize6(this6, _ln, _fn);
#line 629 "DefaultRectangular.chpl"
  return this6;
#line 629 "DefaultRectangular.chpl"
}

#line 629 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:661 */
#line 629 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom2(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 629 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 661 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(661), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 661 "DefaultRectangular.chpl"
  ret = (this6)->dom;
#line 661 "DefaultRectangular.chpl"
  return ret;
#line 661 "DefaultRectangular.chpl"
}

#line 661 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:661 */
#line 661 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom3(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 661 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 661 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(661), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 661 "DefaultRectangular.chpl"
  ret = (this6)->dom;
#line 661 "DefaultRectangular.chpl"
  return ret;
#line 661 "DefaultRectangular.chpl"
}

#line 661 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:661 */
#line 661 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom4(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 661 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 661 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(661), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 661 "DefaultRectangular.chpl"
  ret = (this6)->dom;
#line 661 "DefaultRectangular.chpl"
  return ret;
#line 661 "DefaultRectangular.chpl"
}

#line 661 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:661 */
#line 661 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom5(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 661 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 661 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(661), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 661 "DefaultRectangular.chpl"
  ret = (this6)->dom;
#line 661 "DefaultRectangular.chpl"
  return ret;
#line 661 "DefaultRectangular.chpl"
}

#line 661 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:661 */
#line 661 "DefaultRectangular.chpl"
static DefaultRectangularDom_1_int64_t_F dsiGetBaseDom6(DefaultRectangularArr_chpl_string_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 661 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 661 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(661), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 661 "DefaultRectangular.chpl"
  ret = (this6)->dom;
#line 661 "DefaultRectangular.chpl"
  return ret;
#line 661 "DefaultRectangular.chpl"
}

#line 661 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:663 */
#line 661 "DefaultRectangular.chpl"
static void dsiDestroyData6(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 661 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 661 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 661 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 661 "DefaultRectangular.chpl"
  _ddata_locale ret2 = NULL;
#line 661 "DefaultRectangular.chpl"
  _ddata_locale dv = NULL;
#line 661 "DefaultRectangular.chpl"
  _ddata_locale ret3 = NULL;
#line 664 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(664), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 664 "DefaultRectangular.chpl"
  ret = (this6)->dom;
#line 664 "DefaultRectangular.chpl"
  chpl_check_nil(ret, INT64(664), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 664 "DefaultRectangular.chpl"
  call_tmp = dsiNumIndices(ret, _ln, _fn);
#line 664 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp > INT64(0));
#line 664 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 665 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 664 "DefaultRectangular.chpl"
  {
#line 665 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(665), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 665 "DefaultRectangular.chpl"
    ret2 = (this6)->data;
#line 666 "DefaultRectangular.chpl"
    dv = ret2;
#line 667 "DefaultRectangular.chpl"
  }
#line 679 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(679), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 679 "DefaultRectangular.chpl"
  ret3 = (this6)->data;
#line 679 "DefaultRectangular.chpl"
  chpl_array_free(ret3, _ln, _fn);
#line 663 "DefaultRectangular.chpl"
  return;
#line 663 "DefaultRectangular.chpl"
}

#line 663 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:663 */
#line 663 "DefaultRectangular.chpl"
static void dsiDestroyData2(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 663 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 663 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 663 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 663 "DefaultRectangular.chpl"
  _ddata_localesSignal ret2 = NULL;
#line 663 "DefaultRectangular.chpl"
  _ddata_localesSignal dv = NULL;
#line 663 "DefaultRectangular.chpl"
  _ddata_localesSignal ret3 = NULL;
#line 664 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(664), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 664 "DefaultRectangular.chpl"
  ret = (this6)->dom;
#line 664 "DefaultRectangular.chpl"
  chpl_check_nil(ret, INT64(664), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 664 "DefaultRectangular.chpl"
  call_tmp = dsiNumIndices(ret, _ln, _fn);
#line 664 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp > INT64(0));
#line 664 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 665 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 664 "DefaultRectangular.chpl"
  {
#line 665 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(665), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 665 "DefaultRectangular.chpl"
    ret2 = (this6)->data;
#line 666 "DefaultRectangular.chpl"
    dv = ret2;
#line 667 "DefaultRectangular.chpl"
  }
#line 679 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(679), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 679 "DefaultRectangular.chpl"
  ret3 = (this6)->data;
#line 679 "DefaultRectangular.chpl"
  chpl_array_free(ret3, _ln, _fn);
#line 663 "DefaultRectangular.chpl"
  return;
#line 663 "DefaultRectangular.chpl"
}

#line 663 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:663 */
#line 663 "DefaultRectangular.chpl"
static void dsiDestroyData5(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 663 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 663 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 663 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 663 "DefaultRectangular.chpl"
  _ddata_int64_t ret2 = NULL;
#line 663 "DefaultRectangular.chpl"
  _ddata_int64_t dv = NULL;
#line 663 "DefaultRectangular.chpl"
  _ddata_int64_t ret3 = NULL;
#line 664 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(664), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 664 "DefaultRectangular.chpl"
  ret = (this6)->dom;
#line 664 "DefaultRectangular.chpl"
  chpl_check_nil(ret, INT64(664), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 664 "DefaultRectangular.chpl"
  call_tmp = dsiNumIndices(ret, _ln, _fn);
#line 664 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp > INT64(0));
#line 664 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 665 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 664 "DefaultRectangular.chpl"
  {
#line 665 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(665), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 665 "DefaultRectangular.chpl"
    ret2 = (this6)->data;
#line 666 "DefaultRectangular.chpl"
    dv = ret2;
#line 667 "DefaultRectangular.chpl"
  }
#line 679 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(679), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 679 "DefaultRectangular.chpl"
  ret3 = (this6)->data;
#line 679 "DefaultRectangular.chpl"
  chpl_array_free(ret3, _ln, _fn);
#line 663 "DefaultRectangular.chpl"
  return;
#line 663 "DefaultRectangular.chpl"
}

#line 663 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:663 */
#line 663 "DefaultRectangular.chpl"
static void dsiDestroyData4(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 663 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 663 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 663 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 663 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget ret2 = NULL;
#line 663 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget dv = NULL;
#line 663 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 663 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 663 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 663 "DefaultRectangular.chpl"
  int64_t _ic__F1_high;
#line 663 "DefaultRectangular.chpl"
  int64_t i;
#line 663 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget ret4 = NULL;
#line 663 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget dv2 = NULL;
#line 663 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget ret5 = NULL;
#line 664 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(664), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 664 "DefaultRectangular.chpl"
  ret = (this6)->dom;
#line 664 "DefaultRectangular.chpl"
  chpl_check_nil(ret, INT64(664), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 664 "DefaultRectangular.chpl"
  call_tmp = dsiNumIndices(ret, _ln, _fn);
#line 664 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp > INT64(0));
#line 664 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 665 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 664 "DefaultRectangular.chpl"
  {
#line 665 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(665), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 665 "DefaultRectangular.chpl"
    ret2 = (this6)->data;
#line 666 "DefaultRectangular.chpl"
    dv = ret2;
#line 670 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(670), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 670 "DefaultRectangular.chpl"
    ret3 = (this6)->dom;
#line 670 "DefaultRectangular.chpl"
    chpl_check_nil(ret3, INT64(670), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 670 "DefaultRectangular.chpl"
    call_tmp3 = dsiNumIndices(ret3, _ln, _fn);
#line 670 "DefaultRectangular.chpl"
    call_tmp4 = (call_tmp3 - INT64(1));
#line 670 "DefaultRectangular.chpl"
    _ic__F1_high = call_tmp4;
#line 670 "DefaultRectangular.chpl"
    chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp4, INT64(1), INT64(0), call_tmp4, true, _ln, _fn);
#line 671 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(671), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 671 "DefaultRectangular.chpl"
    ret4 = (this6)->data;
#line 672 "DefaultRectangular.chpl"
    dv2 = ret4;
#line 670 "DefaultRectangular.chpl"
    for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 673 "DefaultRectangular.chpl"
    }
#line 673 "DefaultRectangular.chpl"
  }
#line 679 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(679), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 679 "DefaultRectangular.chpl"
  ret5 = (this6)->data;
#line 679 "DefaultRectangular.chpl"
  chpl_array_free(ret5, _ln, _fn);
#line 663 "DefaultRectangular.chpl"
  return;
#line 663 "DefaultRectangular.chpl"
}

#line 663 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:663 */
#line 663 "DefaultRectangular.chpl"
static void dsiDestroyData3(DefaultRectangularArr_chpl_string_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 663 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 663 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 663 "DefaultRectangular.chpl"
  chpl_bool call_tmp2;
#line 663 "DefaultRectangular.chpl"
  _ddata_chpl_string ret2 = NULL;
#line 663 "DefaultRectangular.chpl"
  _ddata_chpl_string dv = NULL;
#line 663 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 663 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 663 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 663 "DefaultRectangular.chpl"
  int64_t _ic__F1_high;
#line 663 "DefaultRectangular.chpl"
  int64_t i;
#line 663 "DefaultRectangular.chpl"
  _ddata_chpl_string ret4 = NULL;
#line 663 "DefaultRectangular.chpl"
  _ddata_chpl_string dv2 = NULL;
#line 663 "DefaultRectangular.chpl"
  _ddata_chpl_string ret5 = NULL;
#line 664 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(664), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 664 "DefaultRectangular.chpl"
  ret = (this6)->dom;
#line 664 "DefaultRectangular.chpl"
  chpl_check_nil(ret, INT64(664), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 664 "DefaultRectangular.chpl"
  call_tmp = dsiNumIndices(ret, _ln, _fn);
#line 664 "DefaultRectangular.chpl"
  call_tmp2 = (call_tmp > INT64(0));
#line 664 "DefaultRectangular.chpl"
  if (call_tmp2) /* ZLINE: 665 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 664 "DefaultRectangular.chpl"
  {
#line 665 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(665), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 665 "DefaultRectangular.chpl"
    ret2 = (this6)->data;
#line 666 "DefaultRectangular.chpl"
    dv = ret2;
#line 670 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(670), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 670 "DefaultRectangular.chpl"
    ret3 = (this6)->dom;
#line 670 "DefaultRectangular.chpl"
    chpl_check_nil(ret3, INT64(670), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 670 "DefaultRectangular.chpl"
    call_tmp3 = dsiNumIndices(ret3, _ln, _fn);
#line 670 "DefaultRectangular.chpl"
    call_tmp4 = (call_tmp3 - INT64(1));
#line 670 "DefaultRectangular.chpl"
    _ic__F1_high = call_tmp4;
#line 670 "DefaultRectangular.chpl"
    chpl_checkIfRangeIterWillOverflow(INT64(0), call_tmp4, INT64(1), INT64(0), call_tmp4, true, _ln, _fn);
#line 671 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(671), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 671 "DefaultRectangular.chpl"
    ret4 = (this6)->data;
#line 672 "DefaultRectangular.chpl"
    dv2 = ret4;
#line 670 "DefaultRectangular.chpl"
    for (i = INT64(0); ((i <= _ic__F1_high)); i += INT64(1)) {
#line 673 "DefaultRectangular.chpl"
    }
#line 673 "DefaultRectangular.chpl"
  }
#line 679 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(679), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 679 "DefaultRectangular.chpl"
  ret5 = (this6)->data;
#line 679 "DefaultRectangular.chpl"
  chpl_array_free(ret5, _ln, _fn);
#line 663 "DefaultRectangular.chpl"
  return;
#line 663 "DefaultRectangular.chpl"
}

#line 663 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:777 */
#line 663 "DefaultRectangular.chpl"
static void computeFactoredOffs3(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 663 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp = NULL;
#line 663 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 663 "DefaultRectangular.chpl"
  int64_t ret;
#line 663 "DefaultRectangular.chpl"
  int64_t ret_x1;
#line 663 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 663 "DefaultRectangular.chpl"
  int64_t ret_x12;
#line 663 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_2 = NULL;
#line 663 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 663 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 778 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(778), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 778 "DefaultRectangular.chpl"
  call_tmp = &((this6)->factoredOffs);
#line 778 "DefaultRectangular.chpl"
  *(call_tmp) = INT64(0);
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  call_tmp2 = &((this6)->factoredOffs);
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret = (this6)->factoredOffs;
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret_ = &((this6)->blk);
#line 780 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret_2 = &((this6)->off);
#line 780 "DefaultRectangular.chpl"
  ret_x12 = *(*(ret_2) + INT64(0));
#line 780 "DefaultRectangular.chpl"
  call_tmp3 = (ret_x1 * ret_x12);
#line 780 "DefaultRectangular.chpl"
  call_tmp4 = (ret + call_tmp3);
#line 780 "DefaultRectangular.chpl"
  *(call_tmp2) = call_tmp4;
#line 777 "DefaultRectangular.chpl"
  return;
#line 777 "DefaultRectangular.chpl"
}

#line 777 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:777 */
#line 777 "DefaultRectangular.chpl"
static void computeFactoredOffs4(DefaultRectangularArr_chpl_string_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp = NULL;
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret;
#line 777 "DefaultRectangular.chpl"
  int64_t ret_x1;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret_x12;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_2 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 778 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(778), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 778 "DefaultRectangular.chpl"
  call_tmp = &((this6)->factoredOffs);
#line 778 "DefaultRectangular.chpl"
  *(call_tmp) = INT64(0);
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  call_tmp2 = &((this6)->factoredOffs);
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret = (this6)->factoredOffs;
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret_ = &((this6)->blk);
#line 780 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret_2 = &((this6)->off);
#line 780 "DefaultRectangular.chpl"
  ret_x12 = *(*(ret_2) + INT64(0));
#line 780 "DefaultRectangular.chpl"
  call_tmp3 = (ret_x1 * ret_x12);
#line 780 "DefaultRectangular.chpl"
  call_tmp4 = (ret + call_tmp3);
#line 780 "DefaultRectangular.chpl"
  *(call_tmp2) = call_tmp4;
#line 777 "DefaultRectangular.chpl"
  return;
#line 777 "DefaultRectangular.chpl"
}

#line 777 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:777 */
#line 777 "DefaultRectangular.chpl"
static void computeFactoredOffs2(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp = NULL;
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret;
#line 777 "DefaultRectangular.chpl"
  int64_t ret_x1;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret_x12;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_2 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 778 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(778), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 778 "DefaultRectangular.chpl"
  call_tmp = &((this6)->factoredOffs);
#line 778 "DefaultRectangular.chpl"
  *(call_tmp) = INT64(0);
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  call_tmp2 = &((this6)->factoredOffs);
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret = (this6)->factoredOffs;
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret_ = &((this6)->blk);
#line 780 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret_2 = &((this6)->off);
#line 780 "DefaultRectangular.chpl"
  ret_x12 = *(*(ret_2) + INT64(0));
#line 780 "DefaultRectangular.chpl"
  call_tmp3 = (ret_x1 * ret_x12);
#line 780 "DefaultRectangular.chpl"
  call_tmp4 = (ret + call_tmp3);
#line 780 "DefaultRectangular.chpl"
  *(call_tmp2) = call_tmp4;
#line 777 "DefaultRectangular.chpl"
  return;
#line 777 "DefaultRectangular.chpl"
}

#line 777 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:777 */
#line 777 "DefaultRectangular.chpl"
static void computeFactoredOffs5(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp = NULL;
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret;
#line 777 "DefaultRectangular.chpl"
  int64_t ret_x1;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret_x12;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_2 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 778 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(778), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 778 "DefaultRectangular.chpl"
  call_tmp = &((this6)->factoredOffs);
#line 778 "DefaultRectangular.chpl"
  *(call_tmp) = INT64(0);
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  call_tmp2 = &((this6)->factoredOffs);
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret = (this6)->factoredOffs;
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret_ = &((this6)->blk);
#line 780 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret_2 = &((this6)->off);
#line 780 "DefaultRectangular.chpl"
  ret_x12 = *(*(ret_2) + INT64(0));
#line 780 "DefaultRectangular.chpl"
  call_tmp3 = (ret_x1 * ret_x12);
#line 780 "DefaultRectangular.chpl"
  call_tmp4 = (ret + call_tmp3);
#line 780 "DefaultRectangular.chpl"
  *(call_tmp2) = call_tmp4;
#line 777 "DefaultRectangular.chpl"
  return;
#line 777 "DefaultRectangular.chpl"
}

#line 777 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:777 */
#line 777 "DefaultRectangular.chpl"
static void computeFactoredOffs(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp = NULL;
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret;
#line 777 "DefaultRectangular.chpl"
  int64_t ret_x1;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret_x12;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_2 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp3;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp4;
#line 778 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(778), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 778 "DefaultRectangular.chpl"
  call_tmp = &((this6)->factoredOffs);
#line 778 "DefaultRectangular.chpl"
  *(call_tmp) = INT64(0);
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  call_tmp2 = &((this6)->factoredOffs);
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret = (this6)->factoredOffs;
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret_ = &((this6)->blk);
#line 780 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 780 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(780), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 780 "DefaultRectangular.chpl"
  ret_2 = &((this6)->off);
#line 780 "DefaultRectangular.chpl"
  ret_x12 = *(*(ret_2) + INT64(0));
#line 780 "DefaultRectangular.chpl"
  call_tmp3 = (ret_x1 * ret_x12);
#line 780 "DefaultRectangular.chpl"
  call_tmp4 = (ret + call_tmp3);
#line 780 "DefaultRectangular.chpl"
  *(call_tmp2) = call_tmp4;
#line 777 "DefaultRectangular.chpl"
  return;
#line 777 "DefaultRectangular.chpl"
}

#line 777 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:800 */
#line 777 "DefaultRectangular.chpl"
static void initialize8(DefaultRectangularArr_chpl_string_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 777 "DefaultRectangular.chpl"
  chpl_bool ret;
#line 777 "DefaultRectangular.chpl"
  chpl_bool call_tmp;
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 777 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 777 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 777 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret3;
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 777 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 777 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 777 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 777 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret_x1;
#line 777 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 777 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret5 = NULL;
#line 777 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp7;
#line 777 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 777 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 777 "DefaultRectangular.chpl"
  _ref__ddata_chpl_string call_tmp10 = NULL;
#line 777 "DefaultRectangular.chpl"
  chpl_string _formal_type_tmp_;
#line 777 "DefaultRectangular.chpl"
  _ddata_chpl_string call_tmp11 = NULL;
#line 777 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 777 "DefaultRectangular.chpl"
  chpl_bool call_tmp13;
#line 777 "DefaultRectangular.chpl"
  _ref__ddata_chpl_string call_tmp14 = NULL;
#line 777 "DefaultRectangular.chpl"
  _ddata_chpl_string ret7 = NULL;
#line 777 "DefaultRectangular.chpl"
  int64_t ret8;
#line 777 "DefaultRectangular.chpl"
  int64_t ret9;
#line 777 "DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 777 "DefaultRectangular.chpl"
  _ddata_chpl_string call_tmp16 = NULL;
#line 801 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(801), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 801 "DefaultRectangular.chpl"
  ret = (this6)->noinit_data;
#line 801 "DefaultRectangular.chpl"
  call_tmp = (ret == true);
#line 801 "DefaultRectangular.chpl"
  if (call_tmp) /* ZLINE: 801 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 801 "DefaultRectangular.chpl"
  {
#line 801 "DefaultRectangular.chpl"
    goto _end_initialize;
#line 801 "DefaultRectangular.chpl"
  }
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  _this_tmp_ = &((this6)->off);
#line 803 "DefaultRectangular.chpl"
  call_tmp2 = (*(_this_tmp_) + INT64(0));
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  ret2 = (this6)->dom;
#line 803 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp3;
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(ret2, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  dsiDim(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 803 "DefaultRectangular.chpl"
  ret3 = (&call_tmp3)->_low;
#line 803 "DefaultRectangular.chpl"
  *(call_tmp2) = ret3;
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this6)->str);
#line 804 "DefaultRectangular.chpl"
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  ret4 = (this6)->dom;
#line 804 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp5;
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(ret4, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  dsiDim(ret4, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 804 "DefaultRectangular.chpl"
  *(call_tmp4) = INT64(1);
#line 806 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(806), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 806 "DefaultRectangular.chpl"
  _this_tmp_3 = &((this6)->blk);
#line 806 "DefaultRectangular.chpl"
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
#line 806 "DefaultRectangular.chpl"
  *(call_tmp6) = INT64(1);
#line 809 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(809), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 809 "DefaultRectangular.chpl"
  computeFactoredOffs4(this6, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  ret_ = &((this6)->blk);
#line 810 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  ret5 = (this6)->dom;
#line 810 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp7;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(ret5, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  dsiDim(ret5, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  _ref_tmp_ = &call_tmp7;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(_ref_tmp_, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  call_tmp9 = (ret_x1 * call_tmp8);
#line 811 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(811), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 811 "DefaultRectangular.chpl"
  call_tmp10 = &((this6)->data);
#line 811 "DefaultRectangular.chpl"
  call_tmp11 = ((_ddata_chpl_string)(nil));
#line 811 "DefaultRectangular.chpl"
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(chpl_string), _ln, _fn);
#line 811 "DefaultRectangular.chpl"
  init_elts5(call_tmp11, call_tmp9, _ln, _fn);
#line 811 "DefaultRectangular.chpl"
  *(call_tmp10) = call_tmp11;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
  ret6 = (this6)->dom;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(ret6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
  call_tmp12 = dsiNumIndices(ret6, _ln, _fn);
#line 812 "DefaultRectangular.chpl"
  call_tmp13 = (call_tmp12 > INT64(0));
#line 812 "DefaultRectangular.chpl"
  if (call_tmp13) /* ZLINE: 812 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 812 "DefaultRectangular.chpl"
  {
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    call_tmp14 = &((this6)->shiftedData);
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret7 = (this6)->data;
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret8 = (this6)->origin;
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret9 = (this6)->factoredOffs;
#line 812 "DefaultRectangular.chpl"
    call_tmp15 = (ret8 - ret9);
#line 812 "DefaultRectangular.chpl"
    call_tmp16 = ((_ddata_chpl_string)(nil));
#line 812 "DefaultRectangular.chpl"
    call_tmp16 = (ret7 + call_tmp15);
#line 812 "DefaultRectangular.chpl"
    *(call_tmp14) = call_tmp16;
#line 812 "DefaultRectangular.chpl"
  }
#line 812 "DefaultRectangular.chpl"
  _end_initialize:;
#line 800 "DefaultRectangular.chpl"
  return;
#line 800 "DefaultRectangular.chpl"
}

#line 800 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:800 */
#line 800 "DefaultRectangular.chpl"
static void initialize10(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 800 "DefaultRectangular.chpl"
  chpl_bool ret;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret3;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret_x1;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret5 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp7;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 800 "DefaultRectangular.chpl"
  _ref__ddata_c_ptr_GtkWidget call_tmp10 = NULL;
#line 800 "DefaultRectangular.chpl"
  c_ptr_GtkWidget_chpl _formal_type_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp11 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp13;
#line 800 "DefaultRectangular.chpl"
  _ref__ddata_c_ptr_GtkWidget call_tmp14 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget ret7 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret8;
#line 800 "DefaultRectangular.chpl"
  int64_t ret9;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 800 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp16 = NULL;
#line 801 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(801), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 801 "DefaultRectangular.chpl"
  ret = (this6)->noinit_data;
#line 801 "DefaultRectangular.chpl"
  call_tmp = (ret == true);
#line 801 "DefaultRectangular.chpl"
  if (call_tmp) /* ZLINE: 801 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 801 "DefaultRectangular.chpl"
  {
#line 801 "DefaultRectangular.chpl"
    goto _end_initialize;
#line 801 "DefaultRectangular.chpl"
  }
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  _this_tmp_ = &((this6)->off);
#line 803 "DefaultRectangular.chpl"
  call_tmp2 = (*(_this_tmp_) + INT64(0));
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  ret2 = (this6)->dom;
#line 803 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp3;
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(ret2, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  dsiDim(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 803 "DefaultRectangular.chpl"
  ret3 = (&call_tmp3)->_low;
#line 803 "DefaultRectangular.chpl"
  *(call_tmp2) = ret3;
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this6)->str);
#line 804 "DefaultRectangular.chpl"
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  ret4 = (this6)->dom;
#line 804 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp5;
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(ret4, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  dsiDim(ret4, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 804 "DefaultRectangular.chpl"
  *(call_tmp4) = INT64(1);
#line 806 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(806), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 806 "DefaultRectangular.chpl"
  _this_tmp_3 = &((this6)->blk);
#line 806 "DefaultRectangular.chpl"
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
#line 806 "DefaultRectangular.chpl"
  *(call_tmp6) = INT64(1);
#line 809 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(809), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 809 "DefaultRectangular.chpl"
  computeFactoredOffs2(this6, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  ret_ = &((this6)->blk);
#line 810 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  ret5 = (this6)->dom;
#line 810 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp7;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(ret5, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  dsiDim(ret5, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  _ref_tmp_ = &call_tmp7;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(_ref_tmp_, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  call_tmp9 = (ret_x1 * call_tmp8);
#line 811 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(811), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 811 "DefaultRectangular.chpl"
  call_tmp10 = &((this6)->data);
#line 811 "DefaultRectangular.chpl"
  call_tmp11 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 811 "DefaultRectangular.chpl"
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(c_ptr_GtkWidget_chpl), _ln, _fn);
#line 811 "DefaultRectangular.chpl"
  init_elts(call_tmp11, call_tmp9, _ln, _fn);
#line 811 "DefaultRectangular.chpl"
  *(call_tmp10) = call_tmp11;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
  ret6 = (this6)->dom;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(ret6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
  call_tmp12 = dsiNumIndices(ret6, _ln, _fn);
#line 812 "DefaultRectangular.chpl"
  call_tmp13 = (call_tmp12 > INT64(0));
#line 812 "DefaultRectangular.chpl"
  if (call_tmp13) /* ZLINE: 812 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 812 "DefaultRectangular.chpl"
  {
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    call_tmp14 = &((this6)->shiftedData);
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret7 = (this6)->data;
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret8 = (this6)->origin;
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret9 = (this6)->factoredOffs;
#line 812 "DefaultRectangular.chpl"
    call_tmp15 = (ret8 - ret9);
#line 812 "DefaultRectangular.chpl"
    call_tmp16 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 812 "DefaultRectangular.chpl"
    call_tmp16 = (ret7 + call_tmp15);
#line 812 "DefaultRectangular.chpl"
    *(call_tmp14) = call_tmp16;
#line 812 "DefaultRectangular.chpl"
  }
#line 812 "DefaultRectangular.chpl"
  _end_initialize:;
#line 800 "DefaultRectangular.chpl"
  return;
#line 800 "DefaultRectangular.chpl"
}

#line 800 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:800 */
#line 800 "DefaultRectangular.chpl"
static void initialize9(DefaultRectangularArr_int64_t_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 800 "DefaultRectangular.chpl"
  chpl_bool ret;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret3;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret_x1;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret5 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp7;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 800 "DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp10 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t _formal_type_tmp_;
#line 800 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp11 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp13;
#line 800 "DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp14 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_int64_t ret7 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret8;
#line 800 "DefaultRectangular.chpl"
  int64_t ret9;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 800 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp16 = NULL;
#line 801 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(801), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 801 "DefaultRectangular.chpl"
  ret = (this6)->noinit_data;
#line 801 "DefaultRectangular.chpl"
  call_tmp = (ret == true);
#line 801 "DefaultRectangular.chpl"
  if (call_tmp) /* ZLINE: 801 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 801 "DefaultRectangular.chpl"
  {
#line 801 "DefaultRectangular.chpl"
    goto _end_initialize;
#line 801 "DefaultRectangular.chpl"
  }
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  _this_tmp_ = &((this6)->off);
#line 803 "DefaultRectangular.chpl"
  call_tmp2 = (*(_this_tmp_) + INT64(0));
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  ret2 = (this6)->dom;
#line 803 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp3;
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(ret2, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  dsiDim(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 803 "DefaultRectangular.chpl"
  ret3 = (&call_tmp3)->_low;
#line 803 "DefaultRectangular.chpl"
  *(call_tmp2) = ret3;
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this6)->str);
#line 804 "DefaultRectangular.chpl"
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  ret4 = (this6)->dom;
#line 804 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp5;
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(ret4, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  dsiDim(ret4, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 804 "DefaultRectangular.chpl"
  *(call_tmp4) = INT64(1);
#line 806 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(806), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 806 "DefaultRectangular.chpl"
  _this_tmp_3 = &((this6)->blk);
#line 806 "DefaultRectangular.chpl"
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
#line 806 "DefaultRectangular.chpl"
  *(call_tmp6) = INT64(1);
#line 809 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(809), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 809 "DefaultRectangular.chpl"
  computeFactoredOffs5(this6, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  ret_ = &((this6)->blk);
#line 810 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  ret5 = (this6)->dom;
#line 810 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp7;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(ret5, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  dsiDim(ret5, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  _ref_tmp_ = &call_tmp7;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(_ref_tmp_, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  call_tmp9 = (ret_x1 * call_tmp8);
#line 811 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(811), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 811 "DefaultRectangular.chpl"
  call_tmp10 = &((this6)->data);
#line 811 "DefaultRectangular.chpl"
  call_tmp11 = ((_ddata_int64_t)(nil));
#line 811 "DefaultRectangular.chpl"
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(int64_t), _ln, _fn);
#line 811 "DefaultRectangular.chpl"
  init_elts4(call_tmp11, call_tmp9, _ln, _fn);
#line 811 "DefaultRectangular.chpl"
  *(call_tmp10) = call_tmp11;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
  ret6 = (this6)->dom;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(ret6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
  call_tmp12 = dsiNumIndices(ret6, _ln, _fn);
#line 812 "DefaultRectangular.chpl"
  call_tmp13 = (call_tmp12 > INT64(0));
#line 812 "DefaultRectangular.chpl"
  if (call_tmp13) /* ZLINE: 812 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 812 "DefaultRectangular.chpl"
  {
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    call_tmp14 = &((this6)->shiftedData);
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret7 = (this6)->data;
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret8 = (this6)->origin;
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret9 = (this6)->factoredOffs;
#line 812 "DefaultRectangular.chpl"
    call_tmp15 = (ret8 - ret9);
#line 812 "DefaultRectangular.chpl"
    call_tmp16 = ((_ddata_int64_t)(nil));
#line 812 "DefaultRectangular.chpl"
    call_tmp16 = (ret7 + call_tmp15);
#line 812 "DefaultRectangular.chpl"
    *(call_tmp14) = call_tmp16;
#line 812 "DefaultRectangular.chpl"
  }
#line 812 "DefaultRectangular.chpl"
  _end_initialize:;
#line 800 "DefaultRectangular.chpl"
  return;
#line 800 "DefaultRectangular.chpl"
}

#line 800 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:800 */
#line 800 "DefaultRectangular.chpl"
static void initialize7(DefaultRectangularArr_localesSignal_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 800 "DefaultRectangular.chpl"
  chpl_bool ret;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret3;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret_x1;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret5 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp7;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 800 "DefaultRectangular.chpl"
  _ref__ddata_localesSignal call_tmp10 = NULL;
#line 800 "DefaultRectangular.chpl"
  localesSignal _formal_type_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp11 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp13;
#line 800 "DefaultRectangular.chpl"
  _ref__ddata_localesSignal call_tmp14 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal ret7 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret8;
#line 800 "DefaultRectangular.chpl"
  int64_t ret9;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp16 = NULL;
#line 801 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(801), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 801 "DefaultRectangular.chpl"
  ret = (this6)->noinit_data;
#line 801 "DefaultRectangular.chpl"
  call_tmp = (ret == true);
#line 801 "DefaultRectangular.chpl"
  if (call_tmp) /* ZLINE: 801 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 801 "DefaultRectangular.chpl"
  {
#line 801 "DefaultRectangular.chpl"
    goto _end_initialize;
#line 801 "DefaultRectangular.chpl"
  }
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  _this_tmp_ = &((this6)->off);
#line 803 "DefaultRectangular.chpl"
  call_tmp2 = (*(_this_tmp_) + INT64(0));
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  ret2 = (this6)->dom;
#line 803 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp3;
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(ret2, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  dsiDim(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 803 "DefaultRectangular.chpl"
  ret3 = (&call_tmp3)->_low;
#line 803 "DefaultRectangular.chpl"
  *(call_tmp2) = ret3;
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this6)->str);
#line 804 "DefaultRectangular.chpl"
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  ret4 = (this6)->dom;
#line 804 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp5;
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(ret4, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  dsiDim(ret4, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 804 "DefaultRectangular.chpl"
  *(call_tmp4) = INT64(1);
#line 806 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(806), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 806 "DefaultRectangular.chpl"
  _this_tmp_3 = &((this6)->blk);
#line 806 "DefaultRectangular.chpl"
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
#line 806 "DefaultRectangular.chpl"
  *(call_tmp6) = INT64(1);
#line 809 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(809), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 809 "DefaultRectangular.chpl"
  computeFactoredOffs3(this6, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  ret_ = &((this6)->blk);
#line 810 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  ret5 = (this6)->dom;
#line 810 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp7;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(ret5, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  dsiDim(ret5, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  _ref_tmp_ = &call_tmp7;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(_ref_tmp_, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  call_tmp9 = (ret_x1 * call_tmp8);
#line 811 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(811), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 811 "DefaultRectangular.chpl"
  call_tmp10 = &((this6)->data);
#line 811 "DefaultRectangular.chpl"
  call_tmp11 = ((_ddata_localesSignal)(nil));
#line 811 "DefaultRectangular.chpl"
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(localesSignal), _ln, _fn);
#line 811 "DefaultRectangular.chpl"
  init_elts3(call_tmp11, call_tmp9, _ln, _fn);
#line 811 "DefaultRectangular.chpl"
  *(call_tmp10) = call_tmp11;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
  ret6 = (this6)->dom;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(ret6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
  call_tmp12 = dsiNumIndices(ret6, _ln, _fn);
#line 812 "DefaultRectangular.chpl"
  call_tmp13 = (call_tmp12 > INT64(0));
#line 812 "DefaultRectangular.chpl"
  if (call_tmp13) /* ZLINE: 812 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 812 "DefaultRectangular.chpl"
  {
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    call_tmp14 = &((this6)->shiftedData);
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret7 = (this6)->data;
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret8 = (this6)->origin;
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret9 = (this6)->factoredOffs;
#line 812 "DefaultRectangular.chpl"
    call_tmp15 = (ret8 - ret9);
#line 812 "DefaultRectangular.chpl"
    call_tmp16 = ((_ddata_localesSignal)(nil));
#line 812 "DefaultRectangular.chpl"
    call_tmp16 = (ret7 + call_tmp15);
#line 812 "DefaultRectangular.chpl"
    *(call_tmp14) = call_tmp16;
#line 812 "DefaultRectangular.chpl"
  }
#line 812 "DefaultRectangular.chpl"
  _end_initialize:;
#line 800 "DefaultRectangular.chpl"
  return;
#line 800 "DefaultRectangular.chpl"
}

#line 800 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:800 */
#line 800 "DefaultRectangular.chpl"
static void initialize6(DefaultRectangularArr_locale_1_int64_t_F this6, int64_t _ln, c_string _fn) {
#line 800 "DefaultRectangular.chpl"
  chpl_bool ret;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret2 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp3;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret3;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp5;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp6 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t _this_tmp_3 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret_x1;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_ = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret5 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F call_tmp7;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_3 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp8;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F _ref_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 800 "DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp10 = NULL;
#line 800 "DefaultRectangular.chpl"
  locale _formal_type_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_locale call_tmp11 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret6 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp12;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp13;
#line 800 "DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp14 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_locale ret7 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret8;
#line 800 "DefaultRectangular.chpl"
  int64_t ret9;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp15;
#line 800 "DefaultRectangular.chpl"
  _ddata_locale call_tmp16 = NULL;
#line 801 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(801), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 801 "DefaultRectangular.chpl"
  ret = (this6)->noinit_data;
#line 801 "DefaultRectangular.chpl"
  call_tmp = (ret == true);
#line 801 "DefaultRectangular.chpl"
  if (call_tmp) /* ZLINE: 801 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 801 "DefaultRectangular.chpl"
  {
#line 801 "DefaultRectangular.chpl"
    goto _end_initialize;
#line 801 "DefaultRectangular.chpl"
  }
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  _this_tmp_ = &((this6)->off);
#line 803 "DefaultRectangular.chpl"
  call_tmp2 = (*(_this_tmp_) + INT64(0));
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  ret2 = (this6)->dom;
#line 803 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp3;
#line 803 "DefaultRectangular.chpl"
  chpl_check_nil(ret2, INT64(803), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 803 "DefaultRectangular.chpl"
  dsiDim(ret2, ret_to_arg_ref_tmp_, _ln, _fn);
#line 803 "DefaultRectangular.chpl"
  ret3 = (&call_tmp3)->_low;
#line 803 "DefaultRectangular.chpl"
  *(call_tmp2) = ret3;
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  _this_tmp_2 = &((this6)->str);
#line 804 "DefaultRectangular.chpl"
  call_tmp4 = (*(_this_tmp_2) + INT64(0));
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  ret4 = (this6)->dom;
#line 804 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp5;
#line 804 "DefaultRectangular.chpl"
  chpl_check_nil(ret4, INT64(804), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 804 "DefaultRectangular.chpl"
  dsiDim(ret4, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 804 "DefaultRectangular.chpl"
  *(call_tmp4) = INT64(1);
#line 806 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(806), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 806 "DefaultRectangular.chpl"
  _this_tmp_3 = &((this6)->blk);
#line 806 "DefaultRectangular.chpl"
  call_tmp6 = (*(_this_tmp_3) + INT64(0));
#line 806 "DefaultRectangular.chpl"
  *(call_tmp6) = INT64(1);
#line 809 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(809), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 809 "DefaultRectangular.chpl"
  computeFactoredOffs(this6, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  ret_ = &((this6)->blk);
#line 810 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  ret5 = (this6)->dom;
#line 810 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_3 = &call_tmp7;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(ret5, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  dsiDim(ret5, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  _ref_tmp_ = &call_tmp7;
#line 810 "DefaultRectangular.chpl"
  chpl_check_nil(_ref_tmp_, INT64(810), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 810 "DefaultRectangular.chpl"
  call_tmp8 = length(_ref_tmp_, _ln, _fn);
#line 810 "DefaultRectangular.chpl"
  call_tmp9 = (ret_x1 * call_tmp8);
#line 811 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(811), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 811 "DefaultRectangular.chpl"
  call_tmp10 = &((this6)->data);
#line 811 "DefaultRectangular.chpl"
  call_tmp11 = ((_ddata_locale)(nil));
#line 811 "DefaultRectangular.chpl"
  call_tmp11 = chpl_array_alloc(call_tmp9, sizeof(locale), _ln, _fn);
#line 811 "DefaultRectangular.chpl"
  init_elts2(call_tmp11, call_tmp9, _ln, _fn);
#line 811 "DefaultRectangular.chpl"
  *(call_tmp10) = call_tmp11;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
  ret6 = (this6)->dom;
#line 812 "DefaultRectangular.chpl"
  chpl_check_nil(ret6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
  call_tmp12 = dsiNumIndices(ret6, _ln, _fn);
#line 812 "DefaultRectangular.chpl"
  call_tmp13 = (call_tmp12 > INT64(0));
#line 812 "DefaultRectangular.chpl"
  if (call_tmp13) /* ZLINE: 812 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 812 "DefaultRectangular.chpl"
  {
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    call_tmp14 = &((this6)->shiftedData);
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret7 = (this6)->data;
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret8 = (this6)->origin;
#line 812 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(812), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 812 "DefaultRectangular.chpl"
    ret9 = (this6)->factoredOffs;
#line 812 "DefaultRectangular.chpl"
    call_tmp15 = (ret8 - ret9);
#line 812 "DefaultRectangular.chpl"
    call_tmp16 = ((_ddata_locale)(nil));
#line 812 "DefaultRectangular.chpl"
    call_tmp16 = (ret7 + call_tmp15);
#line 812 "DefaultRectangular.chpl"
    *(call_tmp14) = call_tmp16;
#line 812 "DefaultRectangular.chpl"
  }
#line 812 "DefaultRectangular.chpl"
  _end_initialize:;
#line 800 "DefaultRectangular.chpl"
  return;
#line 800 "DefaultRectangular.chpl"
}

#line 800 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:988 */
#line 800 "DefaultRectangular.chpl"
static void dsiReallocate5(DefaultRectangularArr_localesSignal_1_int64_t_F this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F copy = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F this7 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 800 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 800 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 800 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_4;
#line 800 "DefaultRectangular.chpl"
  atomic_int64 this9;
#line 800 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 800 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 800 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 800 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 800 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this12;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp3 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal call_tmp4 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularArr_localesSignal_1_int64_t_F wrap_call_tmp3 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x1;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this13 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x12;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 800 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F this14 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t i;
#line 800 "DefaultRectangular.chpl"
  int64_t ret5;
#line 800 "DefaultRectangular.chpl"
  int64_t end;
#line 800 "DefaultRectangular.chpl"
  int64_t ret6;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this15;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret7 = NULL;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp6;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp7;
#line 800 "DefaultRectangular.chpl"
  chpl_string call_tmp8;
#line 800 "DefaultRectangular.chpl"
  int64_t sum;
#line 800 "DefaultRectangular.chpl"
  int64_t ret_x13;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_3 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal ret8 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal coerce_tmp3 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref_localesSignal call_tmp10 = NULL;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind2;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this16;
#line 800 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret9 = NULL;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp11;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp12;
#line 800 "DefaultRectangular.chpl"
  chpl_string call_tmp13;
#line 800 "DefaultRectangular.chpl"
  int64_t sum2;
#line 800 "DefaultRectangular.chpl"
  int64_t ret_x14;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_4 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t coerce_tmp4;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp14;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal ret10 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal coerce_tmp5 = NULL;
#line 800 "DefaultRectangular.chpl"
  localesSignal ret11 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref_localesSignal call_tmp15 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp16 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret_x15;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_5 = NULL;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp6;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp17 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret_x16;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_6 = NULL;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp7;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret_x17;
#line 800 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_7 = NULL;
#line 800 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp8;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp19 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret12;
#line 800 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t ret13;
#line 800 "DefaultRectangular.chpl"
  _ref__ddata_localesSignal call_tmp21 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal ret14 = NULL;
#line 800 "DefaultRectangular.chpl"
  int64_t call_tmp22;
#line 800 "DefaultRectangular.chpl"
  chpl_bool call_tmp23;
#line 800 "DefaultRectangular.chpl"
  _ref__ddata_localesSignal call_tmp24 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ddata_localesSignal ret15 = NULL;
#line 800 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 800 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp25 = NULL;
#line 800 "DefaultRectangular.chpl"
  chpl_opaque call_tmp26;
#line 994 "DefaultRectangular.chpl"
  ret = d;
#line 991 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_localesSignal_1_int64_t_F_object);
#line 991 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(17), _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularArr_localesSignal_1_int64_t_F)(cast_tmp));
#line 991 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularArr_localesSignal_1_int64_t_F;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->dom = nil;
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->data = nil;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->shiftedData = nil;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 991 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_4;
#line 991 "DefaultRectangular.chpl"
  ret2 = type_tmp;
#line 991 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret2;
#line 991 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 991 "DefaultRectangular.chpl"
  (&this9)->_v = ret2;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret2, &this9, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->dom = ret;
#line 991 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(this10 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(this11 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(this12 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 991 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_localesSignal)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->data = call_tmp3;
#line 991 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_localesSignal)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->shiftedData = call_tmp4;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_DefaultRectangularArr4(&wrap_call_tmp2, call_tmp2, ret, &this10, &this11, &this12, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this7, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  copy = wrap_call_tmp3;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret3 = (this6)->dom;
#line 995 "DefaultRectangular.chpl"
  coerce_tmp = ret3;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret_ = &((coerce_tmp)->ranges);
#line 995 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 995 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp5;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  this2(d, &ret_x1, ret_to_arg_ref_tmp_, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  ret4 = call_tmp5;
#line 995 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &default_argoffset;
#line 995 "DefaultRectangular.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  this13 = ret4;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this13, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret_2 = &((this13)->ranges);
#line 995 "DefaultRectangular.chpl"
  ret_x12 = *(*(ret_2) + INT64(0));
#line 995 "DefaultRectangular.chpl"
  _ic__F0_this = ret_x12;
#line 995 "DefaultRectangular.chpl"
  this14 = &_ic__F0_this;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this14, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  checkIfIterWillOverflow(this14, true, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  ret5 = (&_ic__F0_this)->_low;
#line 995 "DefaultRectangular.chpl"
  ret6 = (&_ic__F0_this)->_high;
#line 995 "DefaultRectangular.chpl"
  end = ret6;
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret_4 = &((this6)->blk);
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret10 = (this6)->shiftedData;
#line 996 "DefaultRectangular.chpl"
  coerce_tmp5 = ret10;
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret_3 = &((copy)->blk);
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret8 = (copy)->shiftedData;
#line 996 "DefaultRectangular.chpl"
  coerce_tmp3 = ret8;
#line 995 "DefaultRectangular.chpl"
  for (i = ret5; ((i <= end)); i += INT64(1)) {
#line 996 "DefaultRectangular.chpl"
    *(this15 + INT64(0)) = i;
#line 996 "DefaultRectangular.chpl"
    *(ind + INT64(0)) = *(this15 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    ret7 = (copy)->dom;
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(ret7, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    call_tmp6 = dsiMember(ret7, &this15, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    call_tmp7 = (! call_tmp6);
#line 996 "DefaultRectangular.chpl"
    if (call_tmp7) /* ZLINE: 996 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 996 "DefaultRectangular.chpl"
    {
#line 996 "DefaultRectangular.chpl"
      string_from_c_string(&call_tmp8, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 996 "DefaultRectangular.chpl"
      halt2(call_tmp8, &this15, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    }
#line 996 "DefaultRectangular.chpl"
    sum = INT64(0);
#line 996 "DefaultRectangular.chpl"
    ret_x13 = *(*(ret_3) + INT64(0));
#line 996 "DefaultRectangular.chpl"
    coerce_tmp2 = *(ind + INT64(0));
#line 996 "DefaultRectangular.chpl"
    call_tmp9 = (coerce_tmp2 * ret_x13);
#line 996 "DefaultRectangular.chpl"
    sum += call_tmp9;
#line 996 "DefaultRectangular.chpl"
    call_tmp10 = (coerce_tmp3 + sum);
#line 996 "DefaultRectangular.chpl"
    *(this16 + INT64(0)) = i;
#line 996 "DefaultRectangular.chpl"
    *(ind2 + INT64(0)) = *(this16 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    ret9 = (this6)->dom;
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(ret9, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    call_tmp11 = dsiMember(ret9, &this16, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    call_tmp12 = (! call_tmp11);
#line 996 "DefaultRectangular.chpl"
    if (call_tmp12) /* ZLINE: 996 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 996 "DefaultRectangular.chpl"
    {
#line 996 "DefaultRectangular.chpl"
      string_from_c_string(&call_tmp13, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 996 "DefaultRectangular.chpl"
      halt2(call_tmp13, &this16, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    }
#line 996 "DefaultRectangular.chpl"
    sum2 = INT64(0);
#line 996 "DefaultRectangular.chpl"
    ret_x14 = *(*(ret_4) + INT64(0));
#line 996 "DefaultRectangular.chpl"
    coerce_tmp4 = *(ind2 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    call_tmp14 = (coerce_tmp4 * ret_x14);
#line 996 "DefaultRectangular.chpl"
    sum2 += call_tmp14;
#line 996 "DefaultRectangular.chpl"
    call_tmp15 = (coerce_tmp5 + sum2);
#line 996 "DefaultRectangular.chpl"
    ret11 = *(call_tmp15);
#line 996 "DefaultRectangular.chpl"
    *(call_tmp10) = ret11;
#line 996 "DefaultRectangular.chpl"
  }
#line 995 "DefaultRectangular.chpl"
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
#line 997 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 997 "DefaultRectangular.chpl"
  call_tmp16 = &((this6)->off);
#line 997 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 997 "DefaultRectangular.chpl"
  ret_5 = &((copy)->off);
#line 997 "DefaultRectangular.chpl"
  ret_x15 = *(*(ret_5) + INT64(0));
#line 997 "DefaultRectangular.chpl"
  *(coerce_tmp6 + INT64(0)) = ret_x15;
#line 997 "DefaultRectangular.chpl"
  *(*(call_tmp16) + INT64(0)) = *(coerce_tmp6 + INT64(0));
#line 998 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 998 "DefaultRectangular.chpl"
  call_tmp17 = &((this6)->blk);
#line 998 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 998 "DefaultRectangular.chpl"
  ret_6 = &((copy)->blk);
#line 998 "DefaultRectangular.chpl"
  ret_x16 = *(*(ret_6) + INT64(0));
#line 998 "DefaultRectangular.chpl"
  *(coerce_tmp7 + INT64(0)) = ret_x16;
#line 998 "DefaultRectangular.chpl"
  *(*(call_tmp17) + INT64(0)) = *(coerce_tmp7 + INT64(0));
#line 999 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 999 "DefaultRectangular.chpl"
  call_tmp18 = &((this6)->str);
#line 999 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 999 "DefaultRectangular.chpl"
  ret_7 = &((copy)->str);
#line 999 "DefaultRectangular.chpl"
  ret_x17 = *(*(ret_7) + INT64(0));
#line 999 "DefaultRectangular.chpl"
  *(coerce_tmp8 + INT64(0)) = ret_x17;
#line 999 "DefaultRectangular.chpl"
  *(*(call_tmp18) + INT64(0)) = *(coerce_tmp8 + INT64(0));
#line 1000 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1000), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1000 "DefaultRectangular.chpl"
  call_tmp19 = &((this6)->origin);
#line 1000 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1000), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1000 "DefaultRectangular.chpl"
  ret12 = (copy)->origin;
#line 1000 "DefaultRectangular.chpl"
  *(call_tmp19) = ret12;
#line 1001 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1001 "DefaultRectangular.chpl"
  call_tmp20 = &((this6)->factoredOffs);
#line 1001 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1001 "DefaultRectangular.chpl"
  ret13 = (copy)->factoredOffs;
#line 1001 "DefaultRectangular.chpl"
  *(call_tmp20) = ret13;
#line 1002 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1002), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1002 "DefaultRectangular.chpl"
  dsiDestroyData2(this6, _ln, _fn);
#line 1003 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1003), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1003 "DefaultRectangular.chpl"
  call_tmp21 = &((this6)->data);
#line 1003 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1003), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1003 "DefaultRectangular.chpl"
  ret14 = (copy)->data;
#line 1003 "DefaultRectangular.chpl"
  *(call_tmp21) = ret14;
#line 1008 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1008), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1008 "DefaultRectangular.chpl"
  call_tmp22 = numIndices(d, _ln, _fn);
#line 1008 "DefaultRectangular.chpl"
  call_tmp23 = (call_tmp22 > INT64(0));
#line 1008 "DefaultRectangular.chpl"
  if (call_tmp23) /* ZLINE: 1008 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 1008 "DefaultRectangular.chpl"
  {
#line 1009 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(1009), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1009 "DefaultRectangular.chpl"
    call_tmp24 = &((this6)->shiftedData);
#line 1009 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1009), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1009 "DefaultRectangular.chpl"
    ret15 = (copy)->shiftedData;
#line 1009 "DefaultRectangular.chpl"
    *(call_tmp24) = ret15;
#line 1009 "DefaultRectangular.chpl"
  }
#line 1011 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(copy));
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  call_tmp25 = &((_field_destructor_tmp_2)->_v);
#line 1011 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp25);
#line 1011 "DefaultRectangular.chpl"
  call_tmp26 = ((void*)(copy));
#line 1011 "DefaultRectangular.chpl"
  chpl_here_free(call_tmp26, _ln, _fn);
#line 988 "DefaultRectangular.chpl"
  return;
#line 988 "DefaultRectangular.chpl"
}

#line 988 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:988 */
#line 988 "DefaultRectangular.chpl"
static void dsiReallocate6(DefaultRectangularArr_int64_t_1_int64_t_F this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F copy = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F this7 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 988 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 988 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_4;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 this9;
#line 988 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 988 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 988 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 988 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this12;
#line 988 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_int64_t call_tmp4 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F wrap_call_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x1;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this13 = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x12;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 988 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F this14 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t i;
#line 988 "DefaultRectangular.chpl"
  int64_t ret5;
#line 988 "DefaultRectangular.chpl"
  int64_t end;
#line 988 "DefaultRectangular.chpl"
  int64_t ret6;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this15;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret7 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp6;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp7;
#line 988 "DefaultRectangular.chpl"
  chpl_string call_tmp8;
#line 988 "DefaultRectangular.chpl"
  int64_t sum;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x13;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_3 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 988 "DefaultRectangular.chpl"
  _ddata_int64_t ret8 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp10 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind2;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this16;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret9 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp11;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp12;
#line 988 "DefaultRectangular.chpl"
  chpl_string call_tmp13;
#line 988 "DefaultRectangular.chpl"
  int64_t sum2;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x14;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_4 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t coerce_tmp4;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp14;
#line 988 "DefaultRectangular.chpl"
  _ddata_int64_t ret10 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_int64_t coerce_tmp5 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret11;
#line 988 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp16 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x15;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_5 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp6;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp17 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x16;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_6 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp7;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x17;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_7 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp8;
#line 988 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp19 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret12;
#line 988 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret13;
#line 988 "DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp21 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_int64_t ret14 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp22;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp23;
#line 988 "DefaultRectangular.chpl"
  _ref__ddata_int64_t call_tmp24 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_int64_t ret15 = NULL;
#line 988 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp25 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_opaque call_tmp26;
#line 994 "DefaultRectangular.chpl"
  ret = d;
#line 991 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_int64_t_1_int64_t_F_object);
#line 991 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(24), _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularArr_int64_t_1_int64_t_F)(cast_tmp));
#line 991 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularArr_int64_t_1_int64_t_F;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->dom = nil;
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->data = nil;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->shiftedData = nil;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 991 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_4;
#line 991 "DefaultRectangular.chpl"
  ret2 = type_tmp;
#line 991 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret2;
#line 991 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 991 "DefaultRectangular.chpl"
  (&this9)->_v = ret2;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret2, &this9, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->dom = ret;
#line 991 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(this10 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(this11 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(this12 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 991 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_int64_t)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->data = call_tmp3;
#line 991 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_int64_t)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->shiftedData = call_tmp4;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_DefaultRectangularArr(&wrap_call_tmp2, call_tmp2, ret, &this10, &this11, &this12, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this7, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  copy = wrap_call_tmp3;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret3 = (this6)->dom;
#line 995 "DefaultRectangular.chpl"
  coerce_tmp = ret3;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret_ = &((coerce_tmp)->ranges);
#line 995 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 995 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp5;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  this2(d, &ret_x1, ret_to_arg_ref_tmp_, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  ret4 = call_tmp5;
#line 995 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &default_argoffset;
#line 995 "DefaultRectangular.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  this13 = ret4;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this13, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret_2 = &((this13)->ranges);
#line 995 "DefaultRectangular.chpl"
  ret_x12 = *(*(ret_2) + INT64(0));
#line 995 "DefaultRectangular.chpl"
  _ic__F0_this = ret_x12;
#line 995 "DefaultRectangular.chpl"
  this14 = &_ic__F0_this;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this14, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  checkIfIterWillOverflow(this14, true, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  ret5 = (&_ic__F0_this)->_low;
#line 995 "DefaultRectangular.chpl"
  ret6 = (&_ic__F0_this)->_high;
#line 995 "DefaultRectangular.chpl"
  end = ret6;
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret_4 = &((this6)->blk);
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret10 = (this6)->shiftedData;
#line 996 "DefaultRectangular.chpl"
  coerce_tmp5 = ret10;
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret_3 = &((copy)->blk);
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret8 = (copy)->shiftedData;
#line 996 "DefaultRectangular.chpl"
  coerce_tmp3 = ret8;
#line 995 "DefaultRectangular.chpl"
  for (i = ret5; ((i <= end)); i += INT64(1)) {
#line 996 "DefaultRectangular.chpl"
    *(this15 + INT64(0)) = i;
#line 996 "DefaultRectangular.chpl"
    *(ind + INT64(0)) = *(this15 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    ret7 = (copy)->dom;
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(ret7, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    call_tmp6 = dsiMember(ret7, &this15, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    call_tmp7 = (! call_tmp6);
#line 996 "DefaultRectangular.chpl"
    if (call_tmp7) /* ZLINE: 996 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 996 "DefaultRectangular.chpl"
    {
#line 996 "DefaultRectangular.chpl"
      string_from_c_string(&call_tmp8, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 996 "DefaultRectangular.chpl"
      halt2(call_tmp8, &this15, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    }
#line 996 "DefaultRectangular.chpl"
    sum = INT64(0);
#line 996 "DefaultRectangular.chpl"
    ret_x13 = *(*(ret_3) + INT64(0));
#line 996 "DefaultRectangular.chpl"
    coerce_tmp2 = *(ind + INT64(0));
#line 996 "DefaultRectangular.chpl"
    call_tmp9 = (coerce_tmp2 * ret_x13);
#line 996 "DefaultRectangular.chpl"
    sum += call_tmp9;
#line 996 "DefaultRectangular.chpl"
    call_tmp10 = (coerce_tmp3 + sum);
#line 996 "DefaultRectangular.chpl"
    *(this16 + INT64(0)) = i;
#line 996 "DefaultRectangular.chpl"
    *(ind2 + INT64(0)) = *(this16 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    ret9 = (this6)->dom;
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(ret9, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    call_tmp11 = dsiMember(ret9, &this16, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    call_tmp12 = (! call_tmp11);
#line 996 "DefaultRectangular.chpl"
    if (call_tmp12) /* ZLINE: 996 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 996 "DefaultRectangular.chpl"
    {
#line 996 "DefaultRectangular.chpl"
      string_from_c_string(&call_tmp13, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 996 "DefaultRectangular.chpl"
      halt2(call_tmp13, &this16, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    }
#line 996 "DefaultRectangular.chpl"
    sum2 = INT64(0);
#line 996 "DefaultRectangular.chpl"
    ret_x14 = *(*(ret_4) + INT64(0));
#line 996 "DefaultRectangular.chpl"
    coerce_tmp4 = *(ind2 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    call_tmp14 = (coerce_tmp4 * ret_x14);
#line 996 "DefaultRectangular.chpl"
    sum2 += call_tmp14;
#line 996 "DefaultRectangular.chpl"
    call_tmp15 = (coerce_tmp5 + sum2);
#line 996 "DefaultRectangular.chpl"
    ret11 = *(call_tmp15);
#line 996 "DefaultRectangular.chpl"
    *(call_tmp10) = ret11;
#line 996 "DefaultRectangular.chpl"
  }
#line 995 "DefaultRectangular.chpl"
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
#line 997 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 997 "DefaultRectangular.chpl"
  call_tmp16 = &((this6)->off);
#line 997 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 997 "DefaultRectangular.chpl"
  ret_5 = &((copy)->off);
#line 997 "DefaultRectangular.chpl"
  ret_x15 = *(*(ret_5) + INT64(0));
#line 997 "DefaultRectangular.chpl"
  *(coerce_tmp6 + INT64(0)) = ret_x15;
#line 997 "DefaultRectangular.chpl"
  *(*(call_tmp16) + INT64(0)) = *(coerce_tmp6 + INT64(0));
#line 998 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 998 "DefaultRectangular.chpl"
  call_tmp17 = &((this6)->blk);
#line 998 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 998 "DefaultRectangular.chpl"
  ret_6 = &((copy)->blk);
#line 998 "DefaultRectangular.chpl"
  ret_x16 = *(*(ret_6) + INT64(0));
#line 998 "DefaultRectangular.chpl"
  *(coerce_tmp7 + INT64(0)) = ret_x16;
#line 998 "DefaultRectangular.chpl"
  *(*(call_tmp17) + INT64(0)) = *(coerce_tmp7 + INT64(0));
#line 999 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 999 "DefaultRectangular.chpl"
  call_tmp18 = &((this6)->str);
#line 999 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 999 "DefaultRectangular.chpl"
  ret_7 = &((copy)->str);
#line 999 "DefaultRectangular.chpl"
  ret_x17 = *(*(ret_7) + INT64(0));
#line 999 "DefaultRectangular.chpl"
  *(coerce_tmp8 + INT64(0)) = ret_x17;
#line 999 "DefaultRectangular.chpl"
  *(*(call_tmp18) + INT64(0)) = *(coerce_tmp8 + INT64(0));
#line 1000 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1000), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1000 "DefaultRectangular.chpl"
  call_tmp19 = &((this6)->origin);
#line 1000 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1000), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1000 "DefaultRectangular.chpl"
  ret12 = (copy)->origin;
#line 1000 "DefaultRectangular.chpl"
  *(call_tmp19) = ret12;
#line 1001 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1001 "DefaultRectangular.chpl"
  call_tmp20 = &((this6)->factoredOffs);
#line 1001 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1001 "DefaultRectangular.chpl"
  ret13 = (copy)->factoredOffs;
#line 1001 "DefaultRectangular.chpl"
  *(call_tmp20) = ret13;
#line 1002 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1002), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1002 "DefaultRectangular.chpl"
  dsiDestroyData5(this6, _ln, _fn);
#line 1003 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1003), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1003 "DefaultRectangular.chpl"
  call_tmp21 = &((this6)->data);
#line 1003 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1003), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1003 "DefaultRectangular.chpl"
  ret14 = (copy)->data;
#line 1003 "DefaultRectangular.chpl"
  *(call_tmp21) = ret14;
#line 1008 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1008), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1008 "DefaultRectangular.chpl"
  call_tmp22 = numIndices(d, _ln, _fn);
#line 1008 "DefaultRectangular.chpl"
  call_tmp23 = (call_tmp22 > INT64(0));
#line 1008 "DefaultRectangular.chpl"
  if (call_tmp23) /* ZLINE: 1008 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 1008 "DefaultRectangular.chpl"
  {
#line 1009 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(1009), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1009 "DefaultRectangular.chpl"
    call_tmp24 = &((this6)->shiftedData);
#line 1009 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1009), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1009 "DefaultRectangular.chpl"
    ret15 = (copy)->shiftedData;
#line 1009 "DefaultRectangular.chpl"
    *(call_tmp24) = ret15;
#line 1009 "DefaultRectangular.chpl"
  }
#line 1011 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(copy));
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  call_tmp25 = &((_field_destructor_tmp_2)->_v);
#line 1011 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp25);
#line 1011 "DefaultRectangular.chpl"
  call_tmp26 = ((void*)(copy));
#line 1011 "DefaultRectangular.chpl"
  chpl_here_free(call_tmp26, _ln, _fn);
#line 988 "DefaultRectangular.chpl"
  return;
#line 988 "DefaultRectangular.chpl"
}

#line 988 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:988 */
#line 988 "DefaultRectangular.chpl"
static void dsiReallocate4(DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F copy = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F this7 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 988 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 988 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_4;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 this9;
#line 988 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 988 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 988 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 988 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this12;
#line 988 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget call_tmp4 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F wrap_call_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x1;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this13 = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x12;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 988 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F this14 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t i;
#line 988 "DefaultRectangular.chpl"
  int64_t ret5;
#line 988 "DefaultRectangular.chpl"
  int64_t end;
#line 988 "DefaultRectangular.chpl"
  int64_t ret6;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this15;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret7 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp6;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp7;
#line 988 "DefaultRectangular.chpl"
  chpl_string call_tmp8;
#line 988 "DefaultRectangular.chpl"
  int64_t sum;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x13;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_3 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 988 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget ret8 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_c_ptr_GtkWidget call_tmp10 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind2;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this16;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret9 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp11;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp12;
#line 988 "DefaultRectangular.chpl"
  chpl_string call_tmp13;
#line 988 "DefaultRectangular.chpl"
  int64_t sum2;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x14;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_4 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t coerce_tmp4;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp14;
#line 988 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget ret10 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp5 = NULL;
#line 988 "DefaultRectangular.chpl"
  c_ptr_GtkWidget_chpl ret11 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_c_ptr_GtkWidget call_tmp15 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp16 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x15;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_5 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp6;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp17 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x16;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_6 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp7;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x17;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_7 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp8;
#line 988 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp19 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret12;
#line 988 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret13;
#line 988 "DefaultRectangular.chpl"
  _ref__ddata_c_ptr_GtkWidget call_tmp21 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget ret14 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp22;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp23;
#line 988 "DefaultRectangular.chpl"
  _ref__ddata_c_ptr_GtkWidget call_tmp24 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_c_ptr_GtkWidget ret15 = NULL;
#line 988 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp25 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_opaque call_tmp26;
#line 994 "DefaultRectangular.chpl"
  ret = d;
#line 991 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F_object);
#line 991 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(27), _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F)(cast_tmp));
#line 991 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->dom = nil;
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->data = nil;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->shiftedData = nil;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 991 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_4;
#line 991 "DefaultRectangular.chpl"
  ret2 = type_tmp;
#line 991 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret2;
#line 991 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 991 "DefaultRectangular.chpl"
  (&this9)->_v = ret2;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret2, &this9, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->dom = ret;
#line 991 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(this10 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(this11 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(this12 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 991 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->data = call_tmp3;
#line 991 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_c_ptr_GtkWidget)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->shiftedData = call_tmp4;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_DefaultRectangularArr5(&wrap_call_tmp2, call_tmp2, ret, &this10, &this11, &this12, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this7, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  copy = wrap_call_tmp3;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret3 = (this6)->dom;
#line 995 "DefaultRectangular.chpl"
  coerce_tmp = ret3;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret_ = &((coerce_tmp)->ranges);
#line 995 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 995 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp5;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  this2(d, &ret_x1, ret_to_arg_ref_tmp_, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  ret4 = call_tmp5;
#line 995 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &default_argoffset;
#line 995 "DefaultRectangular.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  this13 = ret4;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this13, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret_2 = &((this13)->ranges);
#line 995 "DefaultRectangular.chpl"
  ret_x12 = *(*(ret_2) + INT64(0));
#line 995 "DefaultRectangular.chpl"
  _ic__F0_this = ret_x12;
#line 995 "DefaultRectangular.chpl"
  this14 = &_ic__F0_this;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this14, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  checkIfIterWillOverflow(this14, true, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  ret5 = (&_ic__F0_this)->_low;
#line 995 "DefaultRectangular.chpl"
  ret6 = (&_ic__F0_this)->_high;
#line 995 "DefaultRectangular.chpl"
  end = ret6;
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret_4 = &((this6)->blk);
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret10 = (this6)->shiftedData;
#line 996 "DefaultRectangular.chpl"
  coerce_tmp5 = ret10;
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret_3 = &((copy)->blk);
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret8 = (copy)->shiftedData;
#line 996 "DefaultRectangular.chpl"
  coerce_tmp3 = ret8;
#line 995 "DefaultRectangular.chpl"
  for (i = ret5; ((i <= end)); i += INT64(1)) {
#line 996 "DefaultRectangular.chpl"
    *(this15 + INT64(0)) = i;
#line 996 "DefaultRectangular.chpl"
    *(ind + INT64(0)) = *(this15 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    ret7 = (copy)->dom;
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(ret7, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    call_tmp6 = dsiMember(ret7, &this15, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    call_tmp7 = (! call_tmp6);
#line 996 "DefaultRectangular.chpl"
    if (call_tmp7) /* ZLINE: 996 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 996 "DefaultRectangular.chpl"
    {
#line 996 "DefaultRectangular.chpl"
      string_from_c_string(&call_tmp8, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 996 "DefaultRectangular.chpl"
      halt2(call_tmp8, &this15, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    }
#line 996 "DefaultRectangular.chpl"
    sum = INT64(0);
#line 996 "DefaultRectangular.chpl"
    ret_x13 = *(*(ret_3) + INT64(0));
#line 996 "DefaultRectangular.chpl"
    coerce_tmp2 = *(ind + INT64(0));
#line 996 "DefaultRectangular.chpl"
    call_tmp9 = (coerce_tmp2 * ret_x13);
#line 996 "DefaultRectangular.chpl"
    sum += call_tmp9;
#line 996 "DefaultRectangular.chpl"
    call_tmp10 = (coerce_tmp3 + sum);
#line 996 "DefaultRectangular.chpl"
    *(this16 + INT64(0)) = i;
#line 996 "DefaultRectangular.chpl"
    *(ind2 + INT64(0)) = *(this16 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    ret9 = (this6)->dom;
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(ret9, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    call_tmp11 = dsiMember(ret9, &this16, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    call_tmp12 = (! call_tmp11);
#line 996 "DefaultRectangular.chpl"
    if (call_tmp12) /* ZLINE: 996 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 996 "DefaultRectangular.chpl"
    {
#line 996 "DefaultRectangular.chpl"
      string_from_c_string(&call_tmp13, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 996 "DefaultRectangular.chpl"
      halt2(call_tmp13, &this16, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    }
#line 996 "DefaultRectangular.chpl"
    sum2 = INT64(0);
#line 996 "DefaultRectangular.chpl"
    ret_x14 = *(*(ret_4) + INT64(0));
#line 996 "DefaultRectangular.chpl"
    coerce_tmp4 = *(ind2 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    call_tmp14 = (coerce_tmp4 * ret_x14);
#line 996 "DefaultRectangular.chpl"
    sum2 += call_tmp14;
#line 996 "DefaultRectangular.chpl"
    call_tmp15 = (coerce_tmp5 + sum2);
#line 996 "DefaultRectangular.chpl"
    ret11 = *(call_tmp15);
#line 996 "DefaultRectangular.chpl"
    *(call_tmp10) = ret11;
#line 996 "DefaultRectangular.chpl"
  }
#line 995 "DefaultRectangular.chpl"
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
#line 997 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 997 "DefaultRectangular.chpl"
  call_tmp16 = &((this6)->off);
#line 997 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 997 "DefaultRectangular.chpl"
  ret_5 = &((copy)->off);
#line 997 "DefaultRectangular.chpl"
  ret_x15 = *(*(ret_5) + INT64(0));
#line 997 "DefaultRectangular.chpl"
  *(coerce_tmp6 + INT64(0)) = ret_x15;
#line 997 "DefaultRectangular.chpl"
  *(*(call_tmp16) + INT64(0)) = *(coerce_tmp6 + INT64(0));
#line 998 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 998 "DefaultRectangular.chpl"
  call_tmp17 = &((this6)->blk);
#line 998 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 998 "DefaultRectangular.chpl"
  ret_6 = &((copy)->blk);
#line 998 "DefaultRectangular.chpl"
  ret_x16 = *(*(ret_6) + INT64(0));
#line 998 "DefaultRectangular.chpl"
  *(coerce_tmp7 + INT64(0)) = ret_x16;
#line 998 "DefaultRectangular.chpl"
  *(*(call_tmp17) + INT64(0)) = *(coerce_tmp7 + INT64(0));
#line 999 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 999 "DefaultRectangular.chpl"
  call_tmp18 = &((this6)->str);
#line 999 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 999 "DefaultRectangular.chpl"
  ret_7 = &((copy)->str);
#line 999 "DefaultRectangular.chpl"
  ret_x17 = *(*(ret_7) + INT64(0));
#line 999 "DefaultRectangular.chpl"
  *(coerce_tmp8 + INT64(0)) = ret_x17;
#line 999 "DefaultRectangular.chpl"
  *(*(call_tmp18) + INT64(0)) = *(coerce_tmp8 + INT64(0));
#line 1000 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1000), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1000 "DefaultRectangular.chpl"
  call_tmp19 = &((this6)->origin);
#line 1000 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1000), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1000 "DefaultRectangular.chpl"
  ret12 = (copy)->origin;
#line 1000 "DefaultRectangular.chpl"
  *(call_tmp19) = ret12;
#line 1001 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1001 "DefaultRectangular.chpl"
  call_tmp20 = &((this6)->factoredOffs);
#line 1001 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1001 "DefaultRectangular.chpl"
  ret13 = (copy)->factoredOffs;
#line 1001 "DefaultRectangular.chpl"
  *(call_tmp20) = ret13;
#line 1002 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1002), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1002 "DefaultRectangular.chpl"
  dsiDestroyData4(this6, _ln, _fn);
#line 1003 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1003), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1003 "DefaultRectangular.chpl"
  call_tmp21 = &((this6)->data);
#line 1003 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1003), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1003 "DefaultRectangular.chpl"
  ret14 = (copy)->data;
#line 1003 "DefaultRectangular.chpl"
  *(call_tmp21) = ret14;
#line 1008 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1008), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1008 "DefaultRectangular.chpl"
  call_tmp22 = numIndices(d, _ln, _fn);
#line 1008 "DefaultRectangular.chpl"
  call_tmp23 = (call_tmp22 > INT64(0));
#line 1008 "DefaultRectangular.chpl"
  if (call_tmp23) /* ZLINE: 1008 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 1008 "DefaultRectangular.chpl"
  {
#line 1009 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(1009), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1009 "DefaultRectangular.chpl"
    call_tmp24 = &((this6)->shiftedData);
#line 1009 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1009), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1009 "DefaultRectangular.chpl"
    ret15 = (copy)->shiftedData;
#line 1009 "DefaultRectangular.chpl"
    *(call_tmp24) = ret15;
#line 1009 "DefaultRectangular.chpl"
  }
#line 1011 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(copy));
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  call_tmp25 = &((_field_destructor_tmp_2)->_v);
#line 1011 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp25);
#line 1011 "DefaultRectangular.chpl"
  call_tmp26 = ((void*)(copy));
#line 1011 "DefaultRectangular.chpl"
  chpl_here_free(call_tmp26, _ln, _fn);
#line 988 "DefaultRectangular.chpl"
  return;
#line 988 "DefaultRectangular.chpl"
}

#line 988 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:988 */
#line 988 "DefaultRectangular.chpl"
static void dsiReallocate3(DefaultRectangularArr_chpl_string_1_int64_t_F this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F copy = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F this7 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 988 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 988 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_4;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 this9;
#line 988 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 988 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 988 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 988 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this12;
#line 988 "DefaultRectangular.chpl"
  _ddata_chpl_string call_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_chpl_string call_tmp4 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F wrap_call_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x1;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this13 = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x12;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 988 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F this14 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t i;
#line 988 "DefaultRectangular.chpl"
  int64_t ret5;
#line 988 "DefaultRectangular.chpl"
  int64_t end;
#line 988 "DefaultRectangular.chpl"
  int64_t ret6;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this15;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret7 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp6;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp7;
#line 988 "DefaultRectangular.chpl"
  chpl_string call_tmp8;
#line 988 "DefaultRectangular.chpl"
  int64_t sum;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x13;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_3 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 988 "DefaultRectangular.chpl"
  _ddata_chpl_string ret8 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_chpl_string coerce_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_chpl_string call_tmp10 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind2;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this16;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret9 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp11;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp12;
#line 988 "DefaultRectangular.chpl"
  chpl_string call_tmp13;
#line 988 "DefaultRectangular.chpl"
  int64_t sum2;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x14;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_4 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t coerce_tmp4;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp14;
#line 988 "DefaultRectangular.chpl"
  _ddata_chpl_string ret10 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_chpl_string coerce_tmp5 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_string ret11;
#line 988 "DefaultRectangular.chpl"
  _ref_chpl_string call_tmp15 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp16 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x15;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_5 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp6;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp17 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x16;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_6 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp7;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x17;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_7 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp8;
#line 988 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp19 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret12;
#line 988 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret13;
#line 988 "DefaultRectangular.chpl"
  _ref__ddata_chpl_string call_tmp21 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_chpl_string ret14 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp22;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp23;
#line 988 "DefaultRectangular.chpl"
  _ref__ddata_chpl_string call_tmp24 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_chpl_string ret15 = NULL;
#line 988 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp25 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_opaque call_tmp26;
#line 994 "DefaultRectangular.chpl"
  ret = d;
#line 991 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_chpl_string_1_int64_t_F_object);
#line 991 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(29), _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularArr_chpl_string_1_int64_t_F)(cast_tmp));
#line 991 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularArr_chpl_string_1_int64_t_F;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->dom = nil;
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->data = nil;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->shiftedData = nil;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 991 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_4;
#line 991 "DefaultRectangular.chpl"
  ret2 = type_tmp;
#line 991 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret2;
#line 991 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 991 "DefaultRectangular.chpl"
  (&this9)->_v = ret2;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret2, &this9, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->dom = ret;
#line 991 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(this10 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(this11 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(this12 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 991 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_chpl_string)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->data = call_tmp3;
#line 991 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_chpl_string)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->shiftedData = call_tmp4;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_DefaultRectangularArr2(&wrap_call_tmp2, call_tmp2, ret, &this10, &this11, &this12, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this7, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  copy = wrap_call_tmp3;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret3 = (this6)->dom;
#line 995 "DefaultRectangular.chpl"
  coerce_tmp = ret3;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret_ = &((coerce_tmp)->ranges);
#line 995 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 995 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp5;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  this2(d, &ret_x1, ret_to_arg_ref_tmp_, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  ret4 = call_tmp5;
#line 995 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &default_argoffset;
#line 995 "DefaultRectangular.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  this13 = ret4;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this13, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret_2 = &((this13)->ranges);
#line 995 "DefaultRectangular.chpl"
  ret_x12 = *(*(ret_2) + INT64(0));
#line 995 "DefaultRectangular.chpl"
  _ic__F0_this = ret_x12;
#line 995 "DefaultRectangular.chpl"
  this14 = &_ic__F0_this;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this14, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  checkIfIterWillOverflow(this14, true, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  ret5 = (&_ic__F0_this)->_low;
#line 995 "DefaultRectangular.chpl"
  ret6 = (&_ic__F0_this)->_high;
#line 995 "DefaultRectangular.chpl"
  end = ret6;
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret_4 = &((this6)->blk);
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret10 = (this6)->shiftedData;
#line 996 "DefaultRectangular.chpl"
  coerce_tmp5 = ret10;
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret_3 = &((copy)->blk);
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret8 = (copy)->shiftedData;
#line 996 "DefaultRectangular.chpl"
  coerce_tmp3 = ret8;
#line 995 "DefaultRectangular.chpl"
  for (i = ret5; ((i <= end)); i += INT64(1)) {
#line 996 "DefaultRectangular.chpl"
    *(this15 + INT64(0)) = i;
#line 996 "DefaultRectangular.chpl"
    *(ind + INT64(0)) = *(this15 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    ret7 = (copy)->dom;
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(ret7, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    call_tmp6 = dsiMember(ret7, &this15, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    call_tmp7 = (! call_tmp6);
#line 996 "DefaultRectangular.chpl"
    if (call_tmp7) /* ZLINE: 996 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 996 "DefaultRectangular.chpl"
    {
#line 996 "DefaultRectangular.chpl"
      string_from_c_string(&call_tmp8, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 996 "DefaultRectangular.chpl"
      halt2(call_tmp8, &this15, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    }
#line 996 "DefaultRectangular.chpl"
    sum = INT64(0);
#line 996 "DefaultRectangular.chpl"
    ret_x13 = *(*(ret_3) + INT64(0));
#line 996 "DefaultRectangular.chpl"
    coerce_tmp2 = *(ind + INT64(0));
#line 996 "DefaultRectangular.chpl"
    call_tmp9 = (coerce_tmp2 * ret_x13);
#line 996 "DefaultRectangular.chpl"
    sum += call_tmp9;
#line 996 "DefaultRectangular.chpl"
    call_tmp10 = (coerce_tmp3 + sum);
#line 996 "DefaultRectangular.chpl"
    *(this16 + INT64(0)) = i;
#line 996 "DefaultRectangular.chpl"
    *(ind2 + INT64(0)) = *(this16 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    ret9 = (this6)->dom;
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(ret9, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    call_tmp11 = dsiMember(ret9, &this16, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    call_tmp12 = (! call_tmp11);
#line 996 "DefaultRectangular.chpl"
    if (call_tmp12) /* ZLINE: 996 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 996 "DefaultRectangular.chpl"
    {
#line 996 "DefaultRectangular.chpl"
      string_from_c_string(&call_tmp13, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 996 "DefaultRectangular.chpl"
      halt2(call_tmp13, &this16, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    }
#line 996 "DefaultRectangular.chpl"
    sum2 = INT64(0);
#line 996 "DefaultRectangular.chpl"
    ret_x14 = *(*(ret_4) + INT64(0));
#line 996 "DefaultRectangular.chpl"
    coerce_tmp4 = *(ind2 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    call_tmp14 = (coerce_tmp4 * ret_x14);
#line 996 "DefaultRectangular.chpl"
    sum2 += call_tmp14;
#line 996 "DefaultRectangular.chpl"
    call_tmp15 = (coerce_tmp5 + sum2);
#line 996 "DefaultRectangular.chpl"
    ret11 = *(call_tmp15);
#line 996 "DefaultRectangular.chpl"
    *(call_tmp10) = ret11;
#line 996 "DefaultRectangular.chpl"
  }
#line 995 "DefaultRectangular.chpl"
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
#line 997 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 997 "DefaultRectangular.chpl"
  call_tmp16 = &((this6)->off);
#line 997 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 997 "DefaultRectangular.chpl"
  ret_5 = &((copy)->off);
#line 997 "DefaultRectangular.chpl"
  ret_x15 = *(*(ret_5) + INT64(0));
#line 997 "DefaultRectangular.chpl"
  *(coerce_tmp6 + INT64(0)) = ret_x15;
#line 997 "DefaultRectangular.chpl"
  *(*(call_tmp16) + INT64(0)) = *(coerce_tmp6 + INT64(0));
#line 998 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 998 "DefaultRectangular.chpl"
  call_tmp17 = &((this6)->blk);
#line 998 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 998 "DefaultRectangular.chpl"
  ret_6 = &((copy)->blk);
#line 998 "DefaultRectangular.chpl"
  ret_x16 = *(*(ret_6) + INT64(0));
#line 998 "DefaultRectangular.chpl"
  *(coerce_tmp7 + INT64(0)) = ret_x16;
#line 998 "DefaultRectangular.chpl"
  *(*(call_tmp17) + INT64(0)) = *(coerce_tmp7 + INT64(0));
#line 999 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 999 "DefaultRectangular.chpl"
  call_tmp18 = &((this6)->str);
#line 999 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 999 "DefaultRectangular.chpl"
  ret_7 = &((copy)->str);
#line 999 "DefaultRectangular.chpl"
  ret_x17 = *(*(ret_7) + INT64(0));
#line 999 "DefaultRectangular.chpl"
  *(coerce_tmp8 + INT64(0)) = ret_x17;
#line 999 "DefaultRectangular.chpl"
  *(*(call_tmp18) + INT64(0)) = *(coerce_tmp8 + INT64(0));
#line 1000 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1000), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1000 "DefaultRectangular.chpl"
  call_tmp19 = &((this6)->origin);
#line 1000 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1000), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1000 "DefaultRectangular.chpl"
  ret12 = (copy)->origin;
#line 1000 "DefaultRectangular.chpl"
  *(call_tmp19) = ret12;
#line 1001 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1001 "DefaultRectangular.chpl"
  call_tmp20 = &((this6)->factoredOffs);
#line 1001 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1001 "DefaultRectangular.chpl"
  ret13 = (copy)->factoredOffs;
#line 1001 "DefaultRectangular.chpl"
  *(call_tmp20) = ret13;
#line 1002 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1002), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1002 "DefaultRectangular.chpl"
  dsiDestroyData3(this6, _ln, _fn);
#line 1003 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1003), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1003 "DefaultRectangular.chpl"
  call_tmp21 = &((this6)->data);
#line 1003 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1003), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1003 "DefaultRectangular.chpl"
  ret14 = (copy)->data;
#line 1003 "DefaultRectangular.chpl"
  *(call_tmp21) = ret14;
#line 1008 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1008), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1008 "DefaultRectangular.chpl"
  call_tmp22 = numIndices(d, _ln, _fn);
#line 1008 "DefaultRectangular.chpl"
  call_tmp23 = (call_tmp22 > INT64(0));
#line 1008 "DefaultRectangular.chpl"
  if (call_tmp23) /* ZLINE: 1008 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 1008 "DefaultRectangular.chpl"
  {
#line 1009 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(1009), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1009 "DefaultRectangular.chpl"
    call_tmp24 = &((this6)->shiftedData);
#line 1009 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1009), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1009 "DefaultRectangular.chpl"
    ret15 = (copy)->shiftedData;
#line 1009 "DefaultRectangular.chpl"
    *(call_tmp24) = ret15;
#line 1009 "DefaultRectangular.chpl"
  }
#line 1011 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(copy));
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  call_tmp25 = &((_field_destructor_tmp_2)->_v);
#line 1011 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp25);
#line 1011 "DefaultRectangular.chpl"
  call_tmp26 = ((void*)(copy));
#line 1011 "DefaultRectangular.chpl"
  chpl_here_free(call_tmp26, _ln, _fn);
#line 988 "DefaultRectangular.chpl"
  return;
#line 988 "DefaultRectangular.chpl"
}

#line 988 "DefaultRectangular.chpl"
/* DefaultRectangular.chpl:988 */
#line 988 "DefaultRectangular.chpl"
static void dsiReallocate2(DefaultRectangularArr_locale_1_int64_t_F this6, DefaultRectangularDom_1_int64_t_F d, int64_t _ln, c_string _fn) {
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F copy = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F this7 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp;
#line 988 "DefaultRectangular.chpl"
  chpl_opaque cast_tmp;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_2;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t _init_class_tmp_3;
#line 988 "DefaultRectangular.chpl"
  atomic_refcnt this8;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 _init_class_tmp_4;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 this9;
#line 988 "DefaultRectangular.chpl"
  atomic_int_least64_t ret2;
#line 988 "DefaultRectangular.chpl"
  atomic_int_least64_t type_tmp;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t _ref_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  atomic_int64 wrap_call_tmp;
#line 988 "DefaultRectangular.chpl"
  atomic_refcnt wrap_call_tmp2;
#line 988 "DefaultRectangular.chpl"
  BaseArr call_tmp2 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this10;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this11;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this12;
#line 988 "DefaultRectangular.chpl"
  _ddata_locale call_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_locale call_tmp4 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularArr_locale_1_int64_t_F wrap_call_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret3 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x1;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_ = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp5 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret4 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F this13 = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F ret_x12;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F ret_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 988 "DefaultRectangular.chpl"
  _ref_range_int64_t_bounded_F this14 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t i;
#line 988 "DefaultRectangular.chpl"
  int64_t ret5;
#line 988 "DefaultRectangular.chpl"
  int64_t end;
#line 988 "DefaultRectangular.chpl"
  int64_t ret6;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this15;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret7 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp6;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp7;
#line 988 "DefaultRectangular.chpl"
  chpl_string call_tmp8;
#line 988 "DefaultRectangular.chpl"
  int64_t sum;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x13;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_3 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t coerce_tmp2;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp9;
#line 988 "DefaultRectangular.chpl"
  _ddata_locale ret8 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_locale coerce_tmp3 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_locale call_tmp10 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t ind2;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t this16;
#line 988 "DefaultRectangular.chpl"
  DefaultRectangularDom_1_int64_t_F ret9 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp11;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp12;
#line 988 "DefaultRectangular.chpl"
  chpl_string call_tmp13;
#line 988 "DefaultRectangular.chpl"
  int64_t sum2;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x14;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_4 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t coerce_tmp4;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp14;
#line 988 "DefaultRectangular.chpl"
  _ddata_locale ret10 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_locale coerce_tmp5 = NULL;
#line 988 "DefaultRectangular.chpl"
  locale ret11 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_locale call_tmp15 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp16 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x15;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_5 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp6;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp17 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x16;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_6 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp7;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t call_tmp18 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret_x17;
#line 988 "DefaultRectangular.chpl"
  _ref__tuple_1_star_int64_t ret_7 = NULL;
#line 988 "DefaultRectangular.chpl"
  _tuple_1_star_int64_t coerce_tmp8;
#line 988 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp19 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret12;
#line 988 "DefaultRectangular.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t ret13;
#line 988 "DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp21 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_locale ret14 = NULL;
#line 988 "DefaultRectangular.chpl"
  int64_t call_tmp22;
#line 988 "DefaultRectangular.chpl"
  chpl_bool call_tmp23;
#line 988 "DefaultRectangular.chpl"
  _ref__ddata_locale call_tmp24 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ddata_locale ret15 = NULL;
#line 988 "DefaultRectangular.chpl"
  BaseArr _parent_destructor_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_refcnt _field_destructor_tmp_ = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int64 _field_destructor_tmp_2 = NULL;
#line 988 "DefaultRectangular.chpl"
  _ref_atomic_int_least64_t call_tmp25 = NULL;
#line 988 "DefaultRectangular.chpl"
  chpl_opaque call_tmp26;
#line 994 "DefaultRectangular.chpl"
  ret = d;
#line 991 "DefaultRectangular.chpl"
  call_tmp = sizeof(chpl_DefaultRectangularArr_locale_1_int64_t_F_object);
#line 991 "DefaultRectangular.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(9), _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  this7 = ((DefaultRectangularArr_locale_1_int64_t_F)(cast_tmp));
#line 991 "DefaultRectangular.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_DefaultRectangularArr_locale_1_int64_t_F;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->dom = nil;
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_ + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(_init_class_tmp_ + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_2 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(_init_class_tmp_2 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(_init_class_tmp_3 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(_init_class_tmp_3 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->data = nil;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->shiftedData = nil;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 991 "DefaultRectangular.chpl"
  (&this8)->_cnt = _init_class_tmp_4;
#line 991 "DefaultRectangular.chpl"
  ret2 = type_tmp;
#line 991 "DefaultRectangular.chpl"
  _ref_tmp_ = &ret2;
#line 991 "DefaultRectangular.chpl"
  atomic_init_int_least64_t(_ref_tmp_, INT64(0));
#line 991 "DefaultRectangular.chpl"
  (&this9)->_v = ret2;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp = _construct_atomic_int64(ret2, &this9, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  (&this8)->_cnt = wrap_call_tmp;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp2 = _construct_atomic_refcnt(&wrap_call_tmp, &this8, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  call_tmp2 = ((BaseArr)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->dom = ret;
#line 991 "DefaultRectangular.chpl"
  *(this10 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->off + INT64(0)) = *(this10 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(this11 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->blk + INT64(0)) = *(this11 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  *(this12 + INT64(0)) = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  *((this7)->str + INT64(0)) = *(this12 + INT64(0));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->origin = INT64(0);
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->factoredOffs = INT64(0);
#line 991 "DefaultRectangular.chpl"
  call_tmp3 = ((_ddata_locale)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->data = call_tmp3;
#line 991 "DefaultRectangular.chpl"
  call_tmp4 = ((_ddata_locale)(nil));
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->shiftedData = call_tmp4;
#line 991 "DefaultRectangular.chpl"
  chpl_check_nil(this7, INT64(991), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 991 "DefaultRectangular.chpl"
  (this7)->noinit_data = false;
#line 991 "DefaultRectangular.chpl"
  wrap_call_tmp3 = _construct_DefaultRectangularArr3(&wrap_call_tmp2, call_tmp2, ret, &this10, &this11, &this12, INT64(0), INT64(0), call_tmp3, call_tmp4, false, this7, _ln, _fn);
#line 991 "DefaultRectangular.chpl"
  copy = wrap_call_tmp3;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret3 = (this6)->dom;
#line 995 "DefaultRectangular.chpl"
  coerce_tmp = ret3;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(coerce_tmp, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret_ = &((coerce_tmp)->ranges);
#line 995 "DefaultRectangular.chpl"
  ret_x1 = *(*(ret_) + INT64(0));
#line 995 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp5;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  this2(d, &ret_x1, ret_to_arg_ref_tmp_, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  ret4 = call_tmp5;
#line 995 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_2 = &default_argoffset;
#line 995 "DefaultRectangular.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  this13 = ret4;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this13, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  ret_2 = &((this13)->ranges);
#line 995 "DefaultRectangular.chpl"
  ret_x12 = *(*(ret_2) + INT64(0));
#line 995 "DefaultRectangular.chpl"
  _ic__F0_this = ret_x12;
#line 995 "DefaultRectangular.chpl"
  this14 = &_ic__F0_this;
#line 995 "DefaultRectangular.chpl"
  chpl_check_nil(this14, INT64(995), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 995 "DefaultRectangular.chpl"
  checkIfIterWillOverflow(this14, true, _ln, _fn);
#line 995 "DefaultRectangular.chpl"
  ret5 = (&_ic__F0_this)->_low;
#line 995 "DefaultRectangular.chpl"
  ret6 = (&_ic__F0_this)->_high;
#line 995 "DefaultRectangular.chpl"
  end = ret6;
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret_4 = &((this6)->blk);
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret10 = (this6)->shiftedData;
#line 996 "DefaultRectangular.chpl"
  coerce_tmp5 = ret10;
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret_3 = &((copy)->blk);
#line 996 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
  ret8 = (copy)->shiftedData;
#line 996 "DefaultRectangular.chpl"
  coerce_tmp3 = ret8;
#line 995 "DefaultRectangular.chpl"
  for (i = ret5; ((i <= end)); i += INT64(1)) {
#line 996 "DefaultRectangular.chpl"
    *(this15 + INT64(0)) = i;
#line 996 "DefaultRectangular.chpl"
    *(ind + INT64(0)) = *(this15 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    ret7 = (copy)->dom;
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(ret7, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    call_tmp6 = dsiMember(ret7, &this15, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    call_tmp7 = (! call_tmp6);
#line 996 "DefaultRectangular.chpl"
    if (call_tmp7) /* ZLINE: 996 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 996 "DefaultRectangular.chpl"
    {
#line 996 "DefaultRectangular.chpl"
      string_from_c_string(&call_tmp8, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 996 "DefaultRectangular.chpl"
      halt2(call_tmp8, &this15, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    }
#line 996 "DefaultRectangular.chpl"
    sum = INT64(0);
#line 996 "DefaultRectangular.chpl"
    ret_x13 = *(*(ret_3) + INT64(0));
#line 996 "DefaultRectangular.chpl"
    coerce_tmp2 = *(ind + INT64(0));
#line 996 "DefaultRectangular.chpl"
    call_tmp9 = (coerce_tmp2 * ret_x13);
#line 996 "DefaultRectangular.chpl"
    sum += call_tmp9;
#line 996 "DefaultRectangular.chpl"
    call_tmp10 = (coerce_tmp3 + sum);
#line 996 "DefaultRectangular.chpl"
    *(this16 + INT64(0)) = i;
#line 996 "DefaultRectangular.chpl"
    *(ind2 + INT64(0)) = *(this16 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    ret9 = (this6)->dom;
#line 996 "DefaultRectangular.chpl"
    chpl_check_nil(ret9, INT64(996), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 996 "DefaultRectangular.chpl"
    call_tmp11 = dsiMember(ret9, &this16, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    call_tmp12 = (! call_tmp11);
#line 996 "DefaultRectangular.chpl"
    if (call_tmp12) /* ZLINE: 996 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 996 "DefaultRectangular.chpl"
    {
#line 996 "DefaultRectangular.chpl"
      string_from_c_string(&call_tmp13, "array index out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 996 "DefaultRectangular.chpl"
      halt2(call_tmp13, &this16, _ln, _fn);
#line 996 "DefaultRectangular.chpl"
    }
#line 996 "DefaultRectangular.chpl"
    sum2 = INT64(0);
#line 996 "DefaultRectangular.chpl"
    ret_x14 = *(*(ret_4) + INT64(0));
#line 996 "DefaultRectangular.chpl"
    coerce_tmp4 = *(ind2 + INT64(0));
#line 996 "DefaultRectangular.chpl"
    call_tmp14 = (coerce_tmp4 * ret_x14);
#line 996 "DefaultRectangular.chpl"
    sum2 += call_tmp14;
#line 996 "DefaultRectangular.chpl"
    call_tmp15 = (coerce_tmp5 + sum2);
#line 996 "DefaultRectangular.chpl"
    ret11 = *(call_tmp15);
#line 996 "DefaultRectangular.chpl"
    *(call_tmp10) = ret11;
#line 996 "DefaultRectangular.chpl"
  }
#line 995 "DefaultRectangular.chpl"
  chpl__autoDestroy2(call_tmp5, _ln, _fn);
#line 997 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 997 "DefaultRectangular.chpl"
  call_tmp16 = &((this6)->off);
#line 997 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 997 "DefaultRectangular.chpl"
  ret_5 = &((copy)->off);
#line 997 "DefaultRectangular.chpl"
  ret_x15 = *(*(ret_5) + INT64(0));
#line 997 "DefaultRectangular.chpl"
  *(coerce_tmp6 + INT64(0)) = ret_x15;
#line 997 "DefaultRectangular.chpl"
  *(*(call_tmp16) + INT64(0)) = *(coerce_tmp6 + INT64(0));
#line 998 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 998 "DefaultRectangular.chpl"
  call_tmp17 = &((this6)->blk);
#line 998 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(998), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 998 "DefaultRectangular.chpl"
  ret_6 = &((copy)->blk);
#line 998 "DefaultRectangular.chpl"
  ret_x16 = *(*(ret_6) + INT64(0));
#line 998 "DefaultRectangular.chpl"
  *(coerce_tmp7 + INT64(0)) = ret_x16;
#line 998 "DefaultRectangular.chpl"
  *(*(call_tmp17) + INT64(0)) = *(coerce_tmp7 + INT64(0));
#line 999 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 999 "DefaultRectangular.chpl"
  call_tmp18 = &((this6)->str);
#line 999 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 999 "DefaultRectangular.chpl"
  ret_7 = &((copy)->str);
#line 999 "DefaultRectangular.chpl"
  ret_x17 = *(*(ret_7) + INT64(0));
#line 999 "DefaultRectangular.chpl"
  *(coerce_tmp8 + INT64(0)) = ret_x17;
#line 999 "DefaultRectangular.chpl"
  *(*(call_tmp18) + INT64(0)) = *(coerce_tmp8 + INT64(0));
#line 1000 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1000), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1000 "DefaultRectangular.chpl"
  call_tmp19 = &((this6)->origin);
#line 1000 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1000), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1000 "DefaultRectangular.chpl"
  ret12 = (copy)->origin;
#line 1000 "DefaultRectangular.chpl"
  *(call_tmp19) = ret12;
#line 1001 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1001 "DefaultRectangular.chpl"
  call_tmp20 = &((this6)->factoredOffs);
#line 1001 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1001 "DefaultRectangular.chpl"
  ret13 = (copy)->factoredOffs;
#line 1001 "DefaultRectangular.chpl"
  *(call_tmp20) = ret13;
#line 1002 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1002), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1002 "DefaultRectangular.chpl"
  dsiDestroyData6(this6, _ln, _fn);
#line 1003 "DefaultRectangular.chpl"
  chpl_check_nil(this6, INT64(1003), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1003 "DefaultRectangular.chpl"
  call_tmp21 = &((this6)->data);
#line 1003 "DefaultRectangular.chpl"
  chpl_check_nil(copy, INT64(1003), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1003 "DefaultRectangular.chpl"
  ret14 = (copy)->data;
#line 1003 "DefaultRectangular.chpl"
  *(call_tmp21) = ret14;
#line 1008 "DefaultRectangular.chpl"
  chpl_check_nil(d, INT64(1008), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1008 "DefaultRectangular.chpl"
  call_tmp22 = numIndices(d, _ln, _fn);
#line 1008 "DefaultRectangular.chpl"
  call_tmp23 = (call_tmp22 > INT64(0));
#line 1008 "DefaultRectangular.chpl"
  if (call_tmp23) /* ZLINE: 1008 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl */
#line 1008 "DefaultRectangular.chpl"
  {
#line 1009 "DefaultRectangular.chpl"
    chpl_check_nil(this6, INT64(1009), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1009 "DefaultRectangular.chpl"
    call_tmp24 = &((this6)->shiftedData);
#line 1009 "DefaultRectangular.chpl"
    chpl_check_nil(copy, INT64(1009), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1009 "DefaultRectangular.chpl"
    ret15 = (copy)->shiftedData;
#line 1009 "DefaultRectangular.chpl"
    *(call_tmp24) = ret15;
#line 1009 "DefaultRectangular.chpl"
  }
#line 1011 "DefaultRectangular.chpl"
  _parent_destructor_tmp_ = ((BaseArr)(copy));
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_parent_destructor_tmp_, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  _field_destructor_tmp_ = &((_parent_destructor_tmp_)->_arrCnt);
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  _field_destructor_tmp_2 = &((_field_destructor_tmp_)->_cnt);
#line 1011 "DefaultRectangular.chpl"
  chpl_check_nil(_field_destructor_tmp_2, INT64(1011), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 1011 "DefaultRectangular.chpl"
  call_tmp25 = &((_field_destructor_tmp_2)->_v);
#line 1011 "DefaultRectangular.chpl"
  atomic_destroy_int_least64_t(call_tmp25);
#line 1011 "DefaultRectangular.chpl"
  call_tmp26 = ((void*)(copy));
#line 1011 "DefaultRectangular.chpl"
  chpl_here_free(call_tmp26, _ln, _fn);
#line 988 "DefaultRectangular.chpl"
  return;
#line 988 "DefaultRectangular.chpl"
}


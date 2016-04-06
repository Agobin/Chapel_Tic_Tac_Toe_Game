/* NewString.chpl:108 */
static void chpl__init_NewString(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 108 "NewString.chpl"
  if (chpl__init_NewString_p) /* ZLINE: 108 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 108 "NewString.chpl"
  {
#line 108 "NewString.chpl"
    goto _exit_chpl__init_NewString_chpl;
#line 108 "NewString.chpl"
  }
#line 108 "NewString.chpl"
  modFormatStr_chpl = "%*s\n";
#line 108 "NewString.chpl"
  modStr_chpl = "NewString";
#line 108 "NewString.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(9), _ln_chpl, _fn_chpl);
#line 108 "NewString.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 108 "NewString.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 108 "NewString.chpl"
  chpl__init_NewString_p = true;
#line 108 "NewString.chpl"
  {
#line 108 "NewString.chpl"
    chpl__init_BaseStringType(_ln_chpl, _fn_chpl);
#line 108 "NewString.chpl"
  }
#line 108 "NewString.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 108 "NewString.chpl"
  _exit_chpl__init_NewString_chpl:;
#line 108 "NewString.chpl"
  return;
#line 108 "NewString.chpl"
}

#line 108 "NewString.chpl"
/* NewString.chpl:111 */
#line 108 "NewString.chpl"
static string_refcnt_chpl _construct_string_refcnt_chpl(atomic_refcnt* const val_chpl, string_refcnt_chpl meme_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 108 "NewString.chpl"
  string_refcnt_chpl this_chpl = NULL;
#line 108 "NewString.chpl"
  object tmp_chpl = NULL;
#line 111 "NewString.chpl"
  this_chpl = meme_chpl;
#line 111 "NewString.chpl"
  chpl_check_nil(this_chpl, INT64(111), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 111 "NewString.chpl"
  tmp_chpl = &((this_chpl)->super_chpl);
#line 111 "NewString.chpl"
  _construct_object(tmp_chpl);
#line 112 "NewString.chpl"
  chpl_check_nil(this_chpl, INT64(112), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 112 "NewString.chpl"
  (this_chpl)->val_chpl = *(val_chpl);
#line 111 "NewString.chpl"
  return this_chpl;
#line 111 "NewString.chpl"
}

#line 111 "NewString.chpl"
/* NewString.chpl:111 */
#line 111 "NewString.chpl"
static void chpl__auto_destroy_string_refcnt(string_refcnt_chpl this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 111 "NewString.chpl"
  _ref_atomic_refcnt _field_destructor_tmp__chpl = NULL;
#line 111 "NewString.chpl"
  _ref_atomic_int64 _field_destructor_tmp__chpl2 = NULL;
#line 111 "NewString.chpl"
  _ref_atomic_int_least64_t call_tmp_chpl = NULL;
#line 112 "NewString.chpl"
  chpl_check_nil(this_chpl, INT64(112), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 112 "NewString.chpl"
  _field_destructor_tmp__chpl = &((this_chpl)->val_chpl);
#line 112 "NewString.chpl"
  chpl_check_nil(_field_destructor_tmp__chpl, INT64(112), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 112 "NewString.chpl"
  _field_destructor_tmp__chpl2 = &((_field_destructor_tmp__chpl)->_cnt);
#line 112 "NewString.chpl"
  chpl_check_nil(_field_destructor_tmp__chpl2, INT64(112), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 112 "NewString.chpl"
  call_tmp_chpl = &((_field_destructor_tmp__chpl2)->_v);
#line 112 "NewString.chpl"
  atomic_destroy_int_least64_t(call_tmp_chpl);
#line 111 "NewString.chpl"
  return;
#line 111 "NewString.chpl"
}

#line 111 "NewString.chpl"
/* NewString.chpl:121 */
#line 111 "NewString.chpl"
static string_rec_chpl _construct_string_rec_chpl(c_string base_chpl, int64_t len_chpl, locale home_chpl, string_refcnt_chpl refCnt_chpl, string_refcnt_chpl aliasRefCnt_chpl, string_rec_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 111 "NewString.chpl"
  string_rec_chpl this_chpl;
#line 121 "NewString.chpl"
  this_chpl = *(meme_chpl);
#line 122 "NewString.chpl"
  (&this_chpl)->base_chpl = base_chpl;
#line 123 "NewString.chpl"
  (&this_chpl)->len_chpl = len_chpl;
#line 124 "NewString.chpl"
  (&this_chpl)->home_chpl = home_chpl;
#line 125 "NewString.chpl"
  (&this_chpl)->refCnt_chpl = refCnt_chpl;
#line 126 "NewString.chpl"
  (&this_chpl)->aliasRefCnt_chpl = aliasRefCnt_chpl;
#line 121 "NewString.chpl"
  return this_chpl;
#line 121 "NewString.chpl"
}

#line 121 "NewString.chpl"
/* NewString.chpl:128 */
#line 121 "NewString.chpl"
static string_rec_chpl string_rec_chpl2(int64_t _ln_chpl, c_string _fn_chpl) {
#line 121 "NewString.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 121 "NewString.chpl"
  string_rec_chpl this_chpl;
#line 121 "NewString.chpl"
  string_rec_chpl this_chpl2;
#line 121 "NewString.chpl"
  locale call_tmp_chpl = NULL;
#line 121 "NewString.chpl"
  string_refcnt_chpl call_tmp_chpl2 = NULL;
#line 121 "NewString.chpl"
  string_refcnt_chpl call_tmp_chpl3 = NULL;
#line 121 "NewString.chpl"
  string_rec_chpl wrap_call_tmp_chpl;
#line 121 "NewString.chpl"
  _ref_locale call_tmp_chpl4 = NULL;
#line 121 "NewString.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 121 "NewString.chpl"
  chpl_localeID_t call_tmp_chpl5;
#line 121 "NewString.chpl"
  chpl_localeID_t call_tmp_chpl6;
#line 121 "NewString.chpl"
  locale call_tmp_chpl7 = NULL;
#line 121 "NewString.chpl"
  _ref_string_refcnt call_tmp_chpl8 = NULL;
#line 121 "NewString.chpl"
  string_refcnt_chpl this_chpl3 = NULL;
#line 121 "NewString.chpl"
  int64_t call_tmp_chpl9;
#line 121 "NewString.chpl"
  chpl_opaque cast_tmp_chpl;
#line 121 "NewString.chpl"
  atomic_refcnt _init_class_tmp__chpl;
#line 121 "NewString.chpl"
  atomic_int64 _init_class_tmp__chpl2;
#line 121 "NewString.chpl"
  atomic_refcnt this_chpl4;
#line 121 "NewString.chpl"
  atomic_int64 _init_class_tmp__chpl3;
#line 121 "NewString.chpl"
  atomic_int64 this_chpl5;
#line 121 "NewString.chpl"
  atomic_int_least64_t ret_chpl;
#line 121 "NewString.chpl"
  atomic_int_least64_t type_tmp_chpl;
#line 121 "NewString.chpl"
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
#line 121 "NewString.chpl"
  atomic_int64 wrap_call_tmp_chpl2;
#line 121 "NewString.chpl"
  atomic_refcnt wrap_call_tmp_chpl3;
#line 121 "NewString.chpl"
  string_refcnt_chpl wrap_call_tmp_chpl4 = NULL;
#line 121 "NewString.chpl"
  _ref_string_refcnt call_tmp_chpl10 = NULL;
#line 121 "NewString.chpl"
  string_refcnt_chpl ret_chpl2 = NULL;
#line 130 "NewString.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 128 "NewString.chpl"
  (&this_chpl2)->base_chpl = "";
#line 128 "NewString.chpl"
  (&this_chpl2)->len_chpl = INT64(0);
#line 128 "NewString.chpl"
  (&this_chpl2)->home_chpl = nil;
#line 128 "NewString.chpl"
  (&this_chpl2)->refCnt_chpl = nil;
#line 128 "NewString.chpl"
  (&this_chpl2)->aliasRefCnt_chpl = nil;
#line 128 "NewString.chpl"
  (&this_chpl2)->base_chpl = "";
#line 128 "NewString.chpl"
  (&this_chpl2)->len_chpl = INT64(0);
#line 128 "NewString.chpl"
  call_tmp_chpl = ((locale)(nil));
#line 128 "NewString.chpl"
  (&this_chpl2)->home_chpl = call_tmp_chpl;
#line 128 "NewString.chpl"
  call_tmp_chpl2 = ((string_refcnt_chpl)(nil));
#line 128 "NewString.chpl"
  (&this_chpl2)->refCnt_chpl = call_tmp_chpl2;
#line 128 "NewString.chpl"
  call_tmp_chpl3 = ((string_refcnt_chpl)(nil));
#line 128 "NewString.chpl"
  (&this_chpl2)->aliasRefCnt_chpl = call_tmp_chpl3;
#line 128 "NewString.chpl"
  wrap_call_tmp_chpl = _construct_string_rec_chpl("", INT64(0), call_tmp_chpl, call_tmp_chpl2, call_tmp_chpl3, &this_chpl2, _ln_chpl, _fn_chpl);
#line 128 "NewString.chpl"
  this_chpl = wrap_call_tmp_chpl;
#line 130 "NewString.chpl"
  call_tmp_chpl4 = &((&this_chpl)->home_chpl);
#line 130 "NewString.chpl"
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 130 "NewString.chpl"
  call_tmp_chpl5 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl);
#line 130 "NewString.chpl"
  call_tmp_chpl6 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl5);
#line 130 "NewString.chpl"
  call_tmp_chpl7 = chpl_localeID_to_locale(&call_tmp_chpl6, _ln_chpl, _fn_chpl);
#line 130 "NewString.chpl"
  *(call_tmp_chpl4) = call_tmp_chpl7;
#line 131 "NewString.chpl"
  call_tmp_chpl8 = &((&this_chpl)->refCnt_chpl);
#line 131 "NewString.chpl"
  call_tmp_chpl9 = sizeof(chpl_string_refcnt_chpl_object);
#line 131 "NewString.chpl"
  cast_tmp_chpl = chpl_here_alloc(call_tmp_chpl9, INT16(22), _ln_chpl, _fn_chpl);
#line 131 "NewString.chpl"
  this_chpl3 = ((string_refcnt_chpl)(cast_tmp_chpl));
#line 131 "NewString.chpl"
  ((object)(this_chpl3))->chpl__cid = chpl__cid_string_refcnt_chpl;
#line 131 "NewString.chpl"
  (&_init_class_tmp__chpl)->_cnt = _init_class_tmp__chpl2;
#line 131 "NewString.chpl"
  chpl_check_nil(this_chpl3, INT64(131), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 131 "NewString.chpl"
  (this_chpl3)->val_chpl = _init_class_tmp__chpl;
#line 131 "NewString.chpl"
  (&this_chpl4)->_cnt = _init_class_tmp__chpl3;
#line 131 "NewString.chpl"
  ret_chpl = type_tmp_chpl;
#line 131 "NewString.chpl"
  _ref_tmp__chpl = &ret_chpl;
#line 131 "NewString.chpl"
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
#line 131 "NewString.chpl"
  (&this_chpl5)->_v = ret_chpl;
#line 131 "NewString.chpl"
  wrap_call_tmp_chpl2 = _construct_atomic_int64(ret_chpl, &this_chpl5, _ln_chpl, _fn_chpl);
#line 131 "NewString.chpl"
  (&this_chpl4)->_cnt = wrap_call_tmp_chpl2;
#line 131 "NewString.chpl"
  wrap_call_tmp_chpl3 = _construct_atomic_refcnt(&wrap_call_tmp_chpl2, &this_chpl4, _ln_chpl, _fn_chpl);
#line 131 "NewString.chpl"
  chpl_check_nil(this_chpl3, INT64(131), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 131 "NewString.chpl"
  (this_chpl3)->val_chpl = wrap_call_tmp_chpl3;
#line 131 "NewString.chpl"
  wrap_call_tmp_chpl4 = _construct_string_refcnt_chpl(&wrap_call_tmp_chpl3, this_chpl3, _ln_chpl, _fn_chpl);
#line 131 "NewString.chpl"
  *(call_tmp_chpl8) = wrap_call_tmp_chpl4;
#line 132 "NewString.chpl"
  call_tmp_chpl10 = &((&this_chpl)->aliasRefCnt_chpl);
#line 132 "NewString.chpl"
  ret_chpl2 = (&this_chpl)->refCnt_chpl;
#line 132 "NewString.chpl"
  *(call_tmp_chpl10) = ret_chpl2;
#line 128 "NewString.chpl"
  return this_chpl;
#line 128 "NewString.chpl"
}

#line 128 "NewString.chpl"
/* NewString.chpl:136 */
#line 128 "NewString.chpl"
static void chpl___TILDE_string_rec(_ref_string_rec this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 128 "NewString.chpl"
  memory_order local_memory_order_seq_cst_chpl;
#line 128 "NewString.chpl"
  chpl_bool ret_chpl;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl2 = NULL;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl3 = NULL;
#line 128 "NewString.chpl"
  object call_tmp_chpl = NULL;
#line 128 "NewString.chpl"
  object call_tmp_chpl2 = NULL;
#line 128 "NewString.chpl"
  chpl_bool call_tmp_chpl3;
#line 128 "NewString.chpl"
  int64_t ret_chpl4;
#line 128 "NewString.chpl"
  chpl_bool call_tmp_chpl4;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl5 = NULL;
#line 128 "NewString.chpl"
  string_refcnt_chpl coerce_tmp_chpl = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_refcnt _field_destructor_tmp__chpl = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_int64 _field_destructor_tmp__chpl2 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_int_least64_t call_tmp_chpl5 = NULL;
#line 128 "NewString.chpl"
  chpl_opaque call_tmp_chpl6;
#line 128 "NewString.chpl"
  int64_t ret_chpl6;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl7 = NULL;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl8 = NULL;
#line 128 "NewString.chpl"
  object call_tmp_chpl7 = NULL;
#line 128 "NewString.chpl"
  object call_tmp_chpl8 = NULL;
#line 128 "NewString.chpl"
  chpl_bool call_tmp_chpl9;
#line 128 "NewString.chpl"
  chpl_bool call_tmp_chpl10;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl9 = NULL;
#line 128 "NewString.chpl"
  string_refcnt_chpl coerce_tmp_chpl2 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_refcnt call_tmp_chpl11 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_int64 call_tmp_chpl12 = NULL;
#line 128 "NewString.chpl"
  memory_order default_argorder_chpl;
#line 128 "NewString.chpl"
  _ref_atomic_int_least64_t call_tmp_chpl13 = NULL;
#line 128 "NewString.chpl"
  int64_t call_tmp_chpl14;
#line 128 "NewString.chpl"
  int64_t call_tmp_chpl15;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl10 = NULL;
#line 128 "NewString.chpl"
  string_refcnt_chpl coerce_tmp_chpl3 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_refcnt call_tmp_chpl16 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_int64 call_tmp_chpl17 = NULL;
#line 128 "NewString.chpl"
  memory_order default_argorder_chpl2;
#line 128 "NewString.chpl"
  _ref_atomic_int_least64_t call_tmp_chpl18 = NULL;
#line 128 "NewString.chpl"
  int64_t call_tmp_chpl19;
#line 128 "NewString.chpl"
  int64_t call_tmp_chpl20;
#line 128 "NewString.chpl"
  chpl_bool call_tmp_chpl21;
#line 128 "NewString.chpl"
  chpl_bool call_tmp_chpl22;
#line 128 "NewString.chpl"
  _ref_c_string call_tmp_chpl23 = NULL;
#line 128 "NewString.chpl"
  c_string coerce_tmp_chpl4;
#line 128 "NewString.chpl"
  c_string call_tmp_chpl24;
#line 128 "NewString.chpl"
  int64_t call_tmp_chpl25;
#line 128 "NewString.chpl"
  chpl_bool call_tmp_chpl26;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl11 = NULL;
#line 128 "NewString.chpl"
  string_refcnt_chpl coerce_tmp_chpl5 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_refcnt _field_destructor_tmp__chpl3 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_int64 _field_destructor_tmp__chpl4 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_int_least64_t call_tmp_chpl27 = NULL;
#line 128 "NewString.chpl"
  chpl_opaque call_tmp_chpl28;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl12 = NULL;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl13 = NULL;
#line 128 "NewString.chpl"
  object call_tmp_chpl29 = NULL;
#line 128 "NewString.chpl"
  object call_tmp_chpl30 = NULL;
#line 128 "NewString.chpl"
  chpl_bool call_tmp_chpl31;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl14 = NULL;
#line 128 "NewString.chpl"
  string_refcnt_chpl coerce_tmp_chpl6 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_refcnt _field_destructor_tmp__chpl5 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_int64 _field_destructor_tmp__chpl6 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_int_least64_t call_tmp_chpl32 = NULL;
#line 128 "NewString.chpl"
  chpl_opaque call_tmp_chpl33;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl15 = NULL;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl16 = NULL;
#line 128 "NewString.chpl"
  object call_tmp_chpl34 = NULL;
#line 128 "NewString.chpl"
  object call_tmp_chpl35 = NULL;
#line 128 "NewString.chpl"
  chpl_bool call_tmp_chpl36;
#line 128 "NewString.chpl"
  string_refcnt_chpl ret_chpl17 = NULL;
#line 128 "NewString.chpl"
  string_refcnt_chpl coerce_tmp_chpl7 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_refcnt _field_destructor_tmp__chpl7 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_int64 _field_destructor_tmp__chpl8 = NULL;
#line 128 "NewString.chpl"
  _ref_atomic_int_least64_t call_tmp_chpl37 = NULL;
#line 128 "NewString.chpl"
  chpl_opaque call_tmp_chpl38;
#line 141 "NewString.chpl"
  local_memory_order_seq_cst_chpl = memory_order_seq_cst;
#line 138 "NewString.chpl"
  chpl_check_nil(this_chpl, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 138 "NewString.chpl"
  ret_chpl2 = (this_chpl)->refCnt_chpl;
#line 138 "NewString.chpl"
  chpl_check_nil(this_chpl, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 138 "NewString.chpl"
  ret_chpl3 = (this_chpl)->aliasRefCnt_chpl;
#line 138 "NewString.chpl"
  call_tmp_chpl = ((object)(ret_chpl2));
#line 138 "NewString.chpl"
  call_tmp_chpl2 = ((object)(ret_chpl3));
#line 138 "NewString.chpl"
  call_tmp_chpl3 = (call_tmp_chpl != call_tmp_chpl2);
#line 138 "NewString.chpl"
  if (call_tmp_chpl3) /* ZLINE: 138 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 138 "NewString.chpl"
  {
#line 138 "NewString.chpl"
    ret_chpl = false;
#line 138 "NewString.chpl"
    goto _end_isEmptyString_chpl;
#line 138 "NewString.chpl"
  } else /* ZLINE: 138 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 138 "NewString.chpl"
  {
#line 138 "NewString.chpl"
    chpl_check_nil(this_chpl, INT64(138), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 138 "NewString.chpl"
    ret_chpl4 = (this_chpl)->len_chpl;
#line 138 "NewString.chpl"
    call_tmp_chpl4 = (ret_chpl4 == INT64(0));
#line 138 "NewString.chpl"
    ret_chpl = call_tmp_chpl4;
#line 138 "NewString.chpl"
    goto _end_isEmptyString_chpl;
#line 138 "NewString.chpl"
  }
#line 138 "NewString.chpl"
  _end_isEmptyString_chpl:;
#line 138 "NewString.chpl"
  if (ret_chpl) /* ZLINE: 139 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 138 "NewString.chpl"
  {
#line 139 "NewString.chpl"
    chpl_check_nil(this_chpl, INT64(139), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 139 "NewString.chpl"
    ret_chpl5 = (this_chpl)->refCnt_chpl;
#line 139 "NewString.chpl"
    coerce_tmp_chpl = ret_chpl5;
#line 139 "NewString.chpl"
    chpl_check_nil(coerce_tmp_chpl, INT64(139), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 139 "NewString.chpl"
    _field_destructor_tmp__chpl = &((coerce_tmp_chpl)->val_chpl);
#line 139 "NewString.chpl"
    chpl_check_nil(_field_destructor_tmp__chpl, INT64(139), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 139 "NewString.chpl"
    _field_destructor_tmp__chpl2 = &((_field_destructor_tmp__chpl)->_cnt);
#line 139 "NewString.chpl"
    chpl_check_nil(_field_destructor_tmp__chpl2, INT64(139), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 139 "NewString.chpl"
    call_tmp_chpl5 = &((_field_destructor_tmp__chpl2)->_v);
#line 139 "NewString.chpl"
    atomic_destroy_int_least64_t(call_tmp_chpl5);
#line 139 "NewString.chpl"
    call_tmp_chpl6 = ((void*)(ret_chpl5));
#line 139 "NewString.chpl"
    chpl_here_free(call_tmp_chpl6, _ln_chpl, _fn_chpl);
#line 139 "NewString.chpl"
  } else /* ZLINE: 141 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 139 "NewString.chpl"
  {
#line 141 "NewString.chpl"
    chpl_check_nil(this_chpl, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 141 "NewString.chpl"
    ret_chpl7 = (this_chpl)->refCnt_chpl;
#line 141 "NewString.chpl"
    chpl_check_nil(this_chpl, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 141 "NewString.chpl"
    ret_chpl8 = (this_chpl)->aliasRefCnt_chpl;
#line 141 "NewString.chpl"
    call_tmp_chpl7 = ((object)(ret_chpl7));
#line 141 "NewString.chpl"
    call_tmp_chpl8 = ((object)(ret_chpl8));
#line 141 "NewString.chpl"
    call_tmp_chpl9 = (call_tmp_chpl7 != call_tmp_chpl8);
#line 141 "NewString.chpl"
    call_tmp_chpl10 = (! call_tmp_chpl9);
#line 141 "NewString.chpl"
    if (call_tmp_chpl10) /* ZLINE: 141 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 141 "NewString.chpl"
    {
#line 141 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 141 "NewString.chpl"
      ret_chpl9 = (this_chpl)->refCnt_chpl;
#line 141 "NewString.chpl"
      coerce_tmp_chpl2 = ret_chpl9;
#line 141 "NewString.chpl"
      chpl_check_nil(coerce_tmp_chpl2, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 141 "NewString.chpl"
      call_tmp_chpl11 = &((coerce_tmp_chpl2)->val_chpl);
#line 141 "NewString.chpl"
      chpl_check_nil(call_tmp_chpl11, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 141 "NewString.chpl"
      call_tmp_chpl12 = &((call_tmp_chpl11)->_cnt);
#line 141 "NewString.chpl"
      default_argorder_chpl = local_memory_order_seq_cst_chpl;
#line 141 "NewString.chpl"
      chpl_check_nil(call_tmp_chpl12, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 141 "NewString.chpl"
      call_tmp_chpl13 = &((call_tmp_chpl12)->_v);
#line 141 "NewString.chpl"
      call_tmp_chpl14 = atomic_fetch_sub_explicit_int_least64_t(call_tmp_chpl13, INT64(1), default_argorder_chpl);
#line 141 "NewString.chpl"
      call_tmp_chpl15 = (call_tmp_chpl14 - INT64(1));
#line 141 "NewString.chpl"
      ret_chpl6 = call_tmp_chpl15;
#line 141 "NewString.chpl"
      goto _end_decRefCnt_chpl;
#line 141 "NewString.chpl"
    } else /* ZLINE: 141 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 141 "NewString.chpl"
    {
#line 141 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 141 "NewString.chpl"
      ret_chpl10 = (this_chpl)->aliasRefCnt_chpl;
#line 141 "NewString.chpl"
      coerce_tmp_chpl3 = ret_chpl10;
#line 141 "NewString.chpl"
      chpl_check_nil(coerce_tmp_chpl3, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 141 "NewString.chpl"
      call_tmp_chpl16 = &((coerce_tmp_chpl3)->val_chpl);
#line 141 "NewString.chpl"
      chpl_check_nil(call_tmp_chpl16, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 141 "NewString.chpl"
      call_tmp_chpl17 = &((call_tmp_chpl16)->_cnt);
#line 141 "NewString.chpl"
      default_argorder_chpl2 = local_memory_order_seq_cst_chpl;
#line 141 "NewString.chpl"
      chpl_check_nil(call_tmp_chpl17, INT64(141), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 141 "NewString.chpl"
      call_tmp_chpl18 = &((call_tmp_chpl17)->_v);
#line 141 "NewString.chpl"
      call_tmp_chpl19 = atomic_fetch_sub_explicit_int_least64_t(call_tmp_chpl18, INT64(1), default_argorder_chpl2);
#line 141 "NewString.chpl"
      call_tmp_chpl20 = (call_tmp_chpl19 - INT64(1));
#line 141 "NewString.chpl"
      ret_chpl6 = call_tmp_chpl20;
#line 141 "NewString.chpl"
      goto _end_decRefCnt_chpl;
#line 141 "NewString.chpl"
    }
#line 141 "NewString.chpl"
    _end_decRefCnt_chpl:;
#line 142 "NewString.chpl"
    call_tmp_chpl21 = (ret_chpl6 < INT64(0));
#line 142 "NewString.chpl"
    if (call_tmp_chpl21) /* ZLINE: 142 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 142 "NewString.chpl"
    {
#line 142 "NewString.chpl"
      halt("string reference count is negative!", _ln_chpl, _fn_chpl);
#line 142 "NewString.chpl"
    }
#line 143 "NewString.chpl"
    call_tmp_chpl22 = (ret_chpl6 == INT64(0));
#line 143 "NewString.chpl"
    if (call_tmp_chpl22) /* ZLINE: 144 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 143 "NewString.chpl"
    {
#line 146 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(146), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 146 "NewString.chpl"
      call_tmp_chpl23 = &((this_chpl)->base_chpl);
#line 146 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(146), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 146 "NewString.chpl"
      coerce_tmp_chpl4 = (this_chpl)->base_chpl;
#line 146 "NewString.chpl"
      call_tmp_chpl24 = ((c_string)(NULL));
#line 146 "NewString.chpl"
      call_tmp_chpl25 = string_compare(coerce_tmp_chpl4, call_tmp_chpl24);
#line 146 "NewString.chpl"
      call_tmp_chpl26 = (call_tmp_chpl25 == INT64(0));
#line 146 "NewString.chpl"
      if (call_tmp_chpl26) /* ZLINE: 146 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 146 "NewString.chpl"
      {
#line 146 "NewString.chpl"
        goto _end_free_baseType_chpl;
#line 146 "NewString.chpl"
      }
#line 146 "NewString.chpl"
      chpl_rt_free_c_string(call_tmp_chpl23, _ln_chpl, _fn_chpl);
#line 146 "NewString.chpl"
      _end_free_baseType_chpl:;
#line 147 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(147), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 147 "NewString.chpl"
      ret_chpl11 = (this_chpl)->refCnt_chpl;
#line 147 "NewString.chpl"
      coerce_tmp_chpl5 = ret_chpl11;
#line 147 "NewString.chpl"
      chpl_check_nil(coerce_tmp_chpl5, INT64(147), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 147 "NewString.chpl"
      _field_destructor_tmp__chpl3 = &((coerce_tmp_chpl5)->val_chpl);
#line 147 "NewString.chpl"
      chpl_check_nil(_field_destructor_tmp__chpl3, INT64(147), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 147 "NewString.chpl"
      _field_destructor_tmp__chpl4 = &((_field_destructor_tmp__chpl3)->_cnt);
#line 147 "NewString.chpl"
      chpl_check_nil(_field_destructor_tmp__chpl4, INT64(147), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 147 "NewString.chpl"
      call_tmp_chpl27 = &((_field_destructor_tmp__chpl4)->_v);
#line 147 "NewString.chpl"
      atomic_destroy_int_least64_t(call_tmp_chpl27);
#line 147 "NewString.chpl"
      call_tmp_chpl28 = ((void*)(ret_chpl11));
#line 147 "NewString.chpl"
      chpl_here_free(call_tmp_chpl28, _ln_chpl, _fn_chpl);
#line 147 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(147), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 147 "NewString.chpl"
      ret_chpl12 = (this_chpl)->refCnt_chpl;
#line 147 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(147), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 147 "NewString.chpl"
      ret_chpl13 = (this_chpl)->aliasRefCnt_chpl;
#line 147 "NewString.chpl"
      call_tmp_chpl29 = ((object)(ret_chpl12));
#line 147 "NewString.chpl"
      call_tmp_chpl30 = ((object)(ret_chpl13));
#line 147 "NewString.chpl"
      call_tmp_chpl31 = (call_tmp_chpl29 != call_tmp_chpl30);
#line 147 "NewString.chpl"
      if (call_tmp_chpl31) /* ZLINE: 147 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 147 "NewString.chpl"
      {
#line 147 "NewString.chpl"
        chpl_check_nil(this_chpl, INT64(147), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 147 "NewString.chpl"
        ret_chpl14 = (this_chpl)->aliasRefCnt_chpl;
#line 147 "NewString.chpl"
        coerce_tmp_chpl6 = ret_chpl14;
#line 147 "NewString.chpl"
        chpl_check_nil(coerce_tmp_chpl6, INT64(147), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 147 "NewString.chpl"
        _field_destructor_tmp__chpl5 = &((coerce_tmp_chpl6)->val_chpl);
#line 147 "NewString.chpl"
        chpl_check_nil(_field_destructor_tmp__chpl5, INT64(147), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 147 "NewString.chpl"
        _field_destructor_tmp__chpl6 = &((_field_destructor_tmp__chpl5)->_cnt);
#line 147 "NewString.chpl"
        chpl_check_nil(_field_destructor_tmp__chpl6, INT64(147), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 147 "NewString.chpl"
        call_tmp_chpl32 = &((_field_destructor_tmp__chpl6)->_v);
#line 147 "NewString.chpl"
        atomic_destroy_int_least64_t(call_tmp_chpl32);
#line 147 "NewString.chpl"
        call_tmp_chpl33 = ((void*)(ret_chpl14));
#line 147 "NewString.chpl"
        chpl_here_free(call_tmp_chpl33, _ln_chpl, _fn_chpl);
#line 147 "NewString.chpl"
      }
#line 147 "NewString.chpl"
    } else /* ZLINE: 150 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 147 "NewString.chpl"
    {
#line 151 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(151), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 151 "NewString.chpl"
      ret_chpl15 = (this_chpl)->refCnt_chpl;
#line 151 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(151), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 151 "NewString.chpl"
      ret_chpl16 = (this_chpl)->aliasRefCnt_chpl;
#line 151 "NewString.chpl"
      call_tmp_chpl34 = ((object)(ret_chpl15));
#line 151 "NewString.chpl"
      call_tmp_chpl35 = ((object)(ret_chpl16));
#line 151 "NewString.chpl"
      call_tmp_chpl36 = (call_tmp_chpl34 != call_tmp_chpl35);
#line 151 "NewString.chpl"
      if (call_tmp_chpl36) /* ZLINE: 151 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 151 "NewString.chpl"
      {
#line 151 "NewString.chpl"
        chpl_check_nil(this_chpl, INT64(151), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 151 "NewString.chpl"
        ret_chpl17 = (this_chpl)->refCnt_chpl;
#line 151 "NewString.chpl"
        coerce_tmp_chpl7 = ret_chpl17;
#line 151 "NewString.chpl"
        chpl_check_nil(coerce_tmp_chpl7, INT64(151), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 151 "NewString.chpl"
        _field_destructor_tmp__chpl7 = &((coerce_tmp_chpl7)->val_chpl);
#line 151 "NewString.chpl"
        chpl_check_nil(_field_destructor_tmp__chpl7, INT64(151), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 151 "NewString.chpl"
        _field_destructor_tmp__chpl8 = &((_field_destructor_tmp__chpl7)->_cnt);
#line 151 "NewString.chpl"
        chpl_check_nil(_field_destructor_tmp__chpl8, INT64(151), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 151 "NewString.chpl"
        call_tmp_chpl37 = &((_field_destructor_tmp__chpl8)->_v);
#line 151 "NewString.chpl"
        atomic_destroy_int_least64_t(call_tmp_chpl37);
#line 151 "NewString.chpl"
        call_tmp_chpl38 = ((void*)(ret_chpl17));
#line 151 "NewString.chpl"
        chpl_here_free(call_tmp_chpl38, _ln_chpl, _fn_chpl);
#line 151 "NewString.chpl"
      }
#line 151 "NewString.chpl"
    }
#line 151 "NewString.chpl"
  }
#line 136 "NewString.chpl"
  return;
#line 136 "NewString.chpl"
}

#line 136 "NewString.chpl"
/* NewString.chpl:158 */
#line 136 "NewString.chpl"
static void reinitString_chpl(_ref_string_rec this_chpl, c_string s_chpl, int64_t slen_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 136 "NewString.chpl"
  memory_order local_memory_order_seq_cst_chpl;
#line 136 "NewString.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 136 "NewString.chpl"
  int32_t call_tmp_chpl;
#line 136 "NewString.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 136 "NewString.chpl"
  chpl_localeID_t call_tmp_chpl2;
#line 136 "NewString.chpl"
  chpl_localeID_t call_tmp_chpl3;
#line 136 "NewString.chpl"
  locale call_tmp_chpl4 = NULL;
#line 136 "NewString.chpl"
  int64_t call_tmp_chpl5;
#line 136 "NewString.chpl"
  int64_t call_tmp_chpl6;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl7;
#line 136 "NewString.chpl"
  locale ret_chpl = NULL;
#line 136 "NewString.chpl"
  int64_t call_tmp_chpl8;
#line 136 "NewString.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl2;
#line 136 "NewString.chpl"
  chpl_localeID_t call_tmp_chpl9;
#line 136 "NewString.chpl"
  chpl_localeID_t call_tmp_chpl10;
#line 136 "NewString.chpl"
  locale call_tmp_chpl11 = NULL;
#line 136 "NewString.chpl"
  int64_t call_tmp_chpl12;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl13;
#line 136 "NewString.chpl"
  chpl_bool ret_chpl2;
#line 136 "NewString.chpl"
  string_refcnt_chpl ret_chpl3 = NULL;
#line 136 "NewString.chpl"
  string_refcnt_chpl ret_chpl4 = NULL;
#line 136 "NewString.chpl"
  object call_tmp_chpl14 = NULL;
#line 136 "NewString.chpl"
  object call_tmp_chpl15 = NULL;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl16;
#line 136 "NewString.chpl"
  int64_t ret_chpl5;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl17;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl18;
#line 136 "NewString.chpl"
  chpl_bool tmp_chpl;
#line 136 "NewString.chpl"
  int64_t call_tmp_chpl19;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl20;
#line 136 "NewString.chpl"
  string_refcnt_chpl ret_chpl6 = NULL;
#line 136 "NewString.chpl"
  string_refcnt_chpl coerce_tmp_chpl = NULL;
#line 136 "NewString.chpl"
  _ref_atomic_refcnt call_tmp_chpl21 = NULL;
#line 136 "NewString.chpl"
  _ref_atomic_int64 call_tmp_chpl22 = NULL;
#line 136 "NewString.chpl"
  memory_order default_argorder_chpl;
#line 136 "NewString.chpl"
  _ref_atomic_int_least64_t call_tmp_chpl23 = NULL;
#line 136 "NewString.chpl"
  int64_t tmp_chpl2;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl24;
#line 136 "NewString.chpl"
  int64_t call_tmp_chpl25;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl26;
#line 136 "NewString.chpl"
  int64_t ret_chpl7;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl27;
#line 136 "NewString.chpl"
  _ref_c_string call_tmp_chpl28 = NULL;
#line 136 "NewString.chpl"
  c_string ret_chpl8;
#line 136 "NewString.chpl"
  c_string call_tmp_chpl29;
#line 136 "NewString.chpl"
  int64_t ret_chpl9;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl30;
#line 136 "NewString.chpl"
  _ref_c_string call_tmp_chpl31 = NULL;
#line 136 "NewString.chpl"
  c_string coerce_tmp_chpl2;
#line 136 "NewString.chpl"
  c_string call_tmp_chpl32;
#line 136 "NewString.chpl"
  int64_t call_tmp_chpl33;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl34;
#line 136 "NewString.chpl"
  _ref_c_string call_tmp_chpl35 = NULL;
#line 136 "NewString.chpl"
  c_string call_tmp_chpl36;
#line 136 "NewString.chpl"
  int64_t ret_chpl10;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl37;
#line 136 "NewString.chpl"
  _ref_c_string call_tmp_chpl38 = NULL;
#line 136 "NewString.chpl"
  c_string coerce_tmp_chpl3;
#line 136 "NewString.chpl"
  c_string call_tmp_chpl39;
#line 136 "NewString.chpl"
  int64_t call_tmp_chpl40;
#line 136 "NewString.chpl"
  chpl_bool call_tmp_chpl41;
#line 136 "NewString.chpl"
  _ref_c_string call_tmp_chpl42 = NULL;
#line 136 "NewString.chpl"
  _ref_int64_t call_tmp_chpl43 = NULL;
#line 164 "NewString.chpl"
  local_memory_order_seq_cst_chpl = memory_order_seq_cst;
#line 159 "NewString.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 159 "NewString.chpl"
  call_tmp_chpl = chpl_nodeID;
#line 159 "NewString.chpl"
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 159 "NewString.chpl"
  call_tmp_chpl2 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl);
#line 159 "NewString.chpl"
  call_tmp_chpl3 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl2);
#line 159 "NewString.chpl"
  call_tmp_chpl4 = chpl_localeID_to_locale(&call_tmp_chpl3, _ln_chpl, _fn_chpl);
#line 159 "NewString.chpl"
  chpl_check_nil(call_tmp_chpl4, INT64(159), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 159 "NewString.chpl"
  call_tmp_chpl5 = id(call_tmp_chpl4, _ln_chpl, _fn_chpl);
#line 159 "NewString.chpl"
  call_tmp_chpl6 = ((int64_t)(call_tmp_chpl));
#line 159 "NewString.chpl"
  call_tmp_chpl7 = (call_tmp_chpl6 == call_tmp_chpl5);
#line 159 "NewString.chpl"
  assert_chpl(call_tmp_chpl7, _ln_chpl, _fn_chpl);
#line 160 "NewString.chpl"
  chpl_check_nil(this_chpl, INT64(160), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 160 "NewString.chpl"
  ret_chpl = (this_chpl)->home_chpl;
#line 160 "NewString.chpl"
  chpl_check_nil(ret_chpl, INT64(160), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 160 "NewString.chpl"
  call_tmp_chpl8 = id(ret_chpl, _ln_chpl, _fn_chpl);
#line 160 "NewString.chpl"
  _autoCopy_tmp__chpl2 = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 160 "NewString.chpl"
  call_tmp_chpl9 = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl2);
#line 160 "NewString.chpl"
  call_tmp_chpl10 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl9);
#line 160 "NewString.chpl"
  call_tmp_chpl11 = chpl_localeID_to_locale(&call_tmp_chpl10, _ln_chpl, _fn_chpl);
#line 160 "NewString.chpl"
  chpl_check_nil(call_tmp_chpl11, INT64(160), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 160 "NewString.chpl"
  call_tmp_chpl12 = id(call_tmp_chpl11, _ln_chpl, _fn_chpl);
#line 160 "NewString.chpl"
  call_tmp_chpl13 = (call_tmp_chpl8 == call_tmp_chpl12);
#line 160 "NewString.chpl"
  assert_chpl(call_tmp_chpl13, _ln_chpl, _fn_chpl);
#line 162 "NewString.chpl"
  chpl_check_nil(this_chpl, INT64(162), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 162 "NewString.chpl"
  ret_chpl3 = (this_chpl)->refCnt_chpl;
#line 162 "NewString.chpl"
  chpl_check_nil(this_chpl, INT64(162), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 162 "NewString.chpl"
  ret_chpl4 = (this_chpl)->aliasRefCnt_chpl;
#line 162 "NewString.chpl"
  call_tmp_chpl14 = ((object)(ret_chpl3));
#line 162 "NewString.chpl"
  call_tmp_chpl15 = ((object)(ret_chpl4));
#line 162 "NewString.chpl"
  call_tmp_chpl16 = (call_tmp_chpl14 != call_tmp_chpl15);
#line 162 "NewString.chpl"
  if (call_tmp_chpl16) /* ZLINE: 162 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 162 "NewString.chpl"
  {
#line 162 "NewString.chpl"
    ret_chpl2 = false;
#line 162 "NewString.chpl"
    goto _end_isEmptyString_chpl;
#line 162 "NewString.chpl"
  } else /* ZLINE: 162 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 162 "NewString.chpl"
  {
#line 162 "NewString.chpl"
    chpl_check_nil(this_chpl, INT64(162), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 162 "NewString.chpl"
    ret_chpl5 = (this_chpl)->len_chpl;
#line 162 "NewString.chpl"
    call_tmp_chpl17 = (ret_chpl5 == INT64(0));
#line 162 "NewString.chpl"
    ret_chpl2 = call_tmp_chpl17;
#line 162 "NewString.chpl"
    goto _end_isEmptyString_chpl;
#line 162 "NewString.chpl"
  }
#line 162 "NewString.chpl"
  _end_isEmptyString_chpl:;
#line 162 "NewString.chpl"
  if (ret_chpl2) /* ZLINE: 163 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 162 "NewString.chpl"
  {
#line 163 "NewString.chpl"
    call_tmp_chpl18 = (slen_chpl == INT64(0));
#line 163 "NewString.chpl"
    if (call_tmp_chpl18) /* ZLINE: 163 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 163 "NewString.chpl"
    {
#line 163 "NewString.chpl"
      tmp_chpl = true;
#line 163 "NewString.chpl"
    } else /* ZLINE: 163 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 163 "NewString.chpl"
    {
#line 163 "NewString.chpl"
      call_tmp_chpl19 = string_compare(s_chpl, "");
#line 163 "NewString.chpl"
      call_tmp_chpl20 = (call_tmp_chpl19 == INT64(0));
#line 163 "NewString.chpl"
      tmp_chpl = call_tmp_chpl20;
#line 163 "NewString.chpl"
    }
#line 163 "NewString.chpl"
    if (tmp_chpl) /* ZLINE: 163 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 163 "NewString.chpl"
    {
#line 163 "NewString.chpl"
      goto _end_reinitString_chpl;
#line 163 "NewString.chpl"
    } else /* ZLINE: 163 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 163 "NewString.chpl"
    {
#line 164 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(164), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 164 "NewString.chpl"
      ret_chpl6 = (this_chpl)->refCnt_chpl;
#line 164 "NewString.chpl"
      coerce_tmp_chpl = ret_chpl6;
#line 164 "NewString.chpl"
      chpl_check_nil(coerce_tmp_chpl, INT64(164), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 164 "NewString.chpl"
      call_tmp_chpl21 = &((coerce_tmp_chpl)->val_chpl);
#line 164 "NewString.chpl"
      chpl_check_nil(call_tmp_chpl21, INT64(164), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 164 "NewString.chpl"
      call_tmp_chpl22 = &((call_tmp_chpl21)->_cnt);
#line 164 "NewString.chpl"
      default_argorder_chpl = local_memory_order_seq_cst_chpl;
#line 164 "NewString.chpl"
      chpl_check_nil(call_tmp_chpl22, INT64(164), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 164 "NewString.chpl"
      call_tmp_chpl23 = &((call_tmp_chpl22)->_v);
#line 164 "NewString.chpl"
      atomic_fetch_add_explicit_int_least64_t(call_tmp_chpl23, INT64(1), default_argorder_chpl);
#line 164 "NewString.chpl"
    }
#line 164 "NewString.chpl"
  }
#line 166 "NewString.chpl"
  call_tmp_chpl24 = (slen_chpl == INT64(-1));
#line 166 "NewString.chpl"
  if (call_tmp_chpl24) /* ZLINE: 166 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 166 "NewString.chpl"
  {
#line 166 "NewString.chpl"
    call_tmp_chpl25 = string_length(s_chpl);
#line 166 "NewString.chpl"
    tmp_chpl2 = call_tmp_chpl25;
#line 166 "NewString.chpl"
  } else /* ZLINE: 166 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 166 "NewString.chpl"
  {
#line 166 "NewString.chpl"
    tmp_chpl2 = slen_chpl;
#line 166 "NewString.chpl"
  }
#line 168 "NewString.chpl"
  call_tmp_chpl26 = (tmp_chpl2 != INT64(0));
#line 168 "NewString.chpl"
  if (call_tmp_chpl26) /* ZLINE: 169 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 168 "NewString.chpl"
  {
#line 169 "NewString.chpl"
    chpl_check_nil(this_chpl, INT64(169), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 169 "NewString.chpl"
    ret_chpl7 = (this_chpl)->len_chpl;
#line 169 "NewString.chpl"
    call_tmp_chpl27 = (tmp_chpl2 < ret_chpl7);
#line 169 "NewString.chpl"
    if (call_tmp_chpl27) /* ZLINE: 171 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 169 "NewString.chpl"
    {
#line 171 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(171), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 171 "NewString.chpl"
      call_tmp_chpl28 = &((this_chpl)->base_chpl);
#line 171 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(171), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 171 "NewString.chpl"
      ret_chpl8 = (this_chpl)->base_chpl;
#line 171 "NewString.chpl"
      call_tmp_chpl29 = stringMove(ret_chpl8, s_chpl, tmp_chpl2, _ln_chpl, _fn_chpl);
#line 171 "NewString.chpl"
      *(call_tmp_chpl28) = call_tmp_chpl29;
#line 171 "NewString.chpl"
    } else /* ZLINE: 174 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 171 "NewString.chpl"
    {
#line 174 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(174), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 174 "NewString.chpl"
      ret_chpl9 = (this_chpl)->len_chpl;
#line 174 "NewString.chpl"
      call_tmp_chpl30 = (ret_chpl9 != INT64(0));
#line 174 "NewString.chpl"
      if (call_tmp_chpl30) /* ZLINE: 174 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 174 "NewString.chpl"
      {
#line 175 "NewString.chpl"
        chpl_check_nil(this_chpl, INT64(175), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 175 "NewString.chpl"
        call_tmp_chpl31 = &((this_chpl)->base_chpl);
#line 175 "NewString.chpl"
        chpl_check_nil(this_chpl, INT64(175), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 175 "NewString.chpl"
        coerce_tmp_chpl2 = (this_chpl)->base_chpl;
#line 175 "NewString.chpl"
        call_tmp_chpl32 = ((c_string)(NULL));
#line 175 "NewString.chpl"
        call_tmp_chpl33 = string_compare(coerce_tmp_chpl2, call_tmp_chpl32);
#line 175 "NewString.chpl"
        call_tmp_chpl34 = (call_tmp_chpl33 == INT64(0));
#line 175 "NewString.chpl"
        if (call_tmp_chpl34) /* ZLINE: 175 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 175 "NewString.chpl"
        {
#line 175 "NewString.chpl"
          goto _end_free_baseType_chpl;
#line 175 "NewString.chpl"
        }
#line 175 "NewString.chpl"
        chpl_rt_free_c_string(call_tmp_chpl31, _ln_chpl, _fn_chpl);
#line 175 "NewString.chpl"
        _end_free_baseType_chpl:;
#line 175 "NewString.chpl"
      }
#line 177 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(177), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 177 "NewString.chpl"
      call_tmp_chpl35 = &((this_chpl)->base_chpl);
#line 177 "NewString.chpl"
      call_tmp_chpl36 = stringMove("", s_chpl, tmp_chpl2, _ln_chpl, _fn_chpl);
#line 177 "NewString.chpl"
      *(call_tmp_chpl35) = call_tmp_chpl36;
#line 177 "NewString.chpl"
    }
#line 177 "NewString.chpl"
  } else /* ZLINE: 181 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 177 "NewString.chpl"
  {
#line 181 "NewString.chpl"
    chpl_check_nil(this_chpl, INT64(181), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 181 "NewString.chpl"
    ret_chpl10 = (this_chpl)->len_chpl;
#line 181 "NewString.chpl"
    call_tmp_chpl37 = (ret_chpl10 != INT64(0));
#line 181 "NewString.chpl"
    if (call_tmp_chpl37) /* ZLINE: 181 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 181 "NewString.chpl"
    {
#line 181 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(181), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 181 "NewString.chpl"
      call_tmp_chpl38 = &((this_chpl)->base_chpl);
#line 181 "NewString.chpl"
      chpl_check_nil(this_chpl, INT64(181), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 181 "NewString.chpl"
      coerce_tmp_chpl3 = (this_chpl)->base_chpl;
#line 181 "NewString.chpl"
      call_tmp_chpl39 = ((c_string)(NULL));
#line 181 "NewString.chpl"
      call_tmp_chpl40 = string_compare(coerce_tmp_chpl3, call_tmp_chpl39);
#line 181 "NewString.chpl"
      call_tmp_chpl41 = (call_tmp_chpl40 == INT64(0));
#line 181 "NewString.chpl"
      if (call_tmp_chpl41) /* ZLINE: 181 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 181 "NewString.chpl"
      {
#line 181 "NewString.chpl"
        goto _end_free_baseType_chpl2;
#line 181 "NewString.chpl"
      }
#line 181 "NewString.chpl"
      chpl_rt_free_c_string(call_tmp_chpl38, _ln_chpl, _fn_chpl);
#line 181 "NewString.chpl"
      _end_free_baseType_chpl2:;
#line 181 "NewString.chpl"
    }
#line 182 "NewString.chpl"
    chpl_check_nil(this_chpl, INT64(182), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 182 "NewString.chpl"
    call_tmp_chpl42 = &((this_chpl)->base_chpl);
#line 182 "NewString.chpl"
    *(call_tmp_chpl42) = "";
#line 182 "NewString.chpl"
  }
#line 184 "NewString.chpl"
  chpl_check_nil(this_chpl, INT64(184), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 184 "NewString.chpl"
  call_tmp_chpl43 = &((this_chpl)->len_chpl);
#line 184 "NewString.chpl"
  *(call_tmp_chpl43) = tmp_chpl2;
#line 184 "NewString.chpl"
  _end_reinitString_chpl:;
#line 158 "NewString.chpl"
  return;
#line 158 "NewString.chpl"
}

#line 158 "NewString.chpl"
/* NewString.chpl:397 */
#line 158 "NewString.chpl"
static void chpl___ASSIGN_6(_ref_string_rec lhs_chpl, c_string rhs_c_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 158 "NewString.chpl"
  int32_t local_c_sublocid_any_chpl;
#line 158 "NewString.chpl"
  chpl_localeID_t _autoCopy_tmp__chpl;
#line 158 "NewString.chpl"
  chpl_localeID_t call_tmp_chpl;
#line 158 "NewString.chpl"
  chpl_localeID_t call_tmp_chpl2;
#line 158 "NewString.chpl"
  locale call_tmp_chpl3 = NULL;
#line 158 "NewString.chpl"
  int64_t call_tmp_chpl4;
#line 158 "NewString.chpl"
  int32_t call_tmp_chpl5;
#line 158 "NewString.chpl"
  int64_t call_tmp_chpl6;
#line 158 "NewString.chpl"
  chpl_bool call_tmp_chpl7;
#line 158 "NewString.chpl"
  chpl_bool tmp_chpl;
#line 158 "NewString.chpl"
  locale ret_chpl = NULL;
#line 158 "NewString.chpl"
  int64_t call_tmp_chpl8;
#line 158 "NewString.chpl"
  chpl_bool call_tmp_chpl9;
#line 158 "NewString.chpl"
  int64_t call_tmp_chpl10;
#line 399 "NewString.chpl"
  local_c_sublocid_any_chpl = c_sublocid_any;
#line 399 "NewString.chpl"
  _autoCopy_tmp__chpl = chpl_rt_buildLocaleID(chpl_nodeID, local_c_sublocid_any_chpl);
#line 399 "NewString.chpl"
  call_tmp_chpl = chpl__initCopy_chpl_rt_localeID_t(_autoCopy_tmp__chpl);
#line 399 "NewString.chpl"
  call_tmp_chpl2 = chpl__initCopy_chpl_rt_localeID_t(call_tmp_chpl);
#line 399 "NewString.chpl"
  call_tmp_chpl3 = chpl_localeID_to_locale(&call_tmp_chpl2, _ln_chpl, _fn_chpl);
#line 399 "NewString.chpl"
  chpl_check_nil(call_tmp_chpl3, INT64(399), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 399 "NewString.chpl"
  call_tmp_chpl4 = id(call_tmp_chpl3, _ln_chpl, _fn_chpl);
#line 401 "NewString.chpl"
  call_tmp_chpl5 = chpl_nodeID;
#line 401 "NewString.chpl"
  call_tmp_chpl6 = ((int64_t)(call_tmp_chpl5));
#line 401 "NewString.chpl"
  call_tmp_chpl7 = (call_tmp_chpl6 != call_tmp_chpl4);
#line 401 "NewString.chpl"
  if (call_tmp_chpl7) /* ZLINE: 401 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 401 "NewString.chpl"
  {
#line 401 "NewString.chpl"
    tmp_chpl = true;
#line 401 "NewString.chpl"
  } else /* ZLINE: 401 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 401 "NewString.chpl"
  {
#line 401 "NewString.chpl"
    chpl_check_nil(lhs_chpl, INT64(401), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 401 "NewString.chpl"
    ret_chpl = (lhs_chpl)->home_chpl;
#line 401 "NewString.chpl"
    chpl_check_nil(ret_chpl, INT64(401), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 401 "NewString.chpl"
    call_tmp_chpl8 = id(ret_chpl, _ln_chpl, _fn_chpl);
#line 401 "NewString.chpl"
    call_tmp_chpl9 = (call_tmp_chpl8 != call_tmp_chpl4);
#line 401 "NewString.chpl"
    tmp_chpl = call_tmp_chpl9;
#line 401 "NewString.chpl"
  }
#line 401 "NewString.chpl"
  if (tmp_chpl) /* ZLINE: 401 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl */
#line 401 "NewString.chpl"
  {
#line 402 "NewString.chpl"
    halt("Cannot assign a remote c_string to a string.", _ln_chpl, _fn_chpl);
#line 402 "NewString.chpl"
  }
#line 403 "NewString.chpl"
  call_tmp_chpl10 = string_length(rhs_c_chpl);
#line 404 "NewString.chpl"
  chpl_check_nil(lhs_chpl, INT64(404), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/NewString.chpl");
#line 404 "NewString.chpl"
  reinitString_chpl(lhs_chpl, rhs_c_chpl, call_tmp_chpl10, _ln_chpl, _fn_chpl);
#line 397 "NewString.chpl"
  return;
#line 397 "NewString.chpl"
}


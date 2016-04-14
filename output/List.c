/* List.chpl:27 */
static void chpl__init_List(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 27 "List.chpl"
  if (chpl__init_List_p) /* ZLINE: 27 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 27 "List.chpl"
  {
#line 27 "List.chpl"
    goto _exit_chpl__init_List_chpl;
#line 27 "List.chpl"
  }
#line 27 "List.chpl"
  modFormatStr_chpl = "%*s\n";
#line 27 "List.chpl"
  modStr_chpl = "List";
#line 27 "List.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(4), _ln_chpl, _fn_chpl);
#line 27 "List.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 27 "List.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 27 "List.chpl"
  chpl__init_List_p = UINT8(true);
#line 27 "List.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 27 "List.chpl"
  _exit_chpl__init_List_chpl:;
#line 27 "List.chpl"
  return;
#line 27 "List.chpl"
}

#line 27 "List.chpl"
/* List.chpl:30 */
#line 27 "List.chpl"
static listNode_BaseArr_chpl _construct_listNode_chpl(BaseArr data_chpl, listNode_BaseArr_chpl next_chpl, listNode_BaseArr_chpl meme_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 27 "List.chpl"
  listNode_BaseArr_chpl this_chpl = NULL;
#line 27 "List.chpl"
  object tmp_chpl = NULL;
#line 30 "List.chpl"
  this_chpl = meme_chpl;
#line 30 "List.chpl"
  chpl_check_nil(this_chpl, INT64(30), INT64(0));
#line 30 "List.chpl"
  tmp_chpl = &((this_chpl)->super_chpl);
#line 30 "List.chpl"
  _construct_object(tmp_chpl);
#line 32 "List.chpl"
  chpl_check_nil(this_chpl, INT64(32), INT64(0));
#line 32 "List.chpl"
  (this_chpl)->data_chpl = data_chpl;
#line 33 "List.chpl"
  chpl_check_nil(this_chpl, INT64(33), INT64(0));
#line 33 "List.chpl"
  (this_chpl)->next_chpl = next_chpl;
#line 30 "List.chpl"
  return this_chpl;
#line 30 "List.chpl"
}

#line 30 "List.chpl"
/* List.chpl:30 */
#line 30 "List.chpl"
static void chpl__auto_destroy_listNode(listNode_BaseArr_chpl this_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 30 "List.chpl"
  return;
#line 30 "List.chpl"
}

#line 30 "List.chpl"
/* List.chpl:30 */
#line 30 "List.chpl"
static void chpl__auto_destroy_listNode2(listNode_BaseDom_chpl this_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 30 "List.chpl"
  return;
#line 30 "List.chpl"
}

#line 30 "List.chpl"
/* List.chpl:45 */
#line 30 "List.chpl"
static void _construct_list_chpl2(listNode_BaseArr_chpl first_chpl, listNode_BaseArr_chpl last_chpl, int64_t length_chpl, list_BaseArr_chpl* const meme_chpl, _ref_list_BaseArr _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 30 "List.chpl"
  list_BaseArr_chpl this_chpl;
#line 45 "List.chpl"
  this_chpl = *(meme_chpl);
#line 51 "List.chpl"
  (&this_chpl)->first_chpl = first_chpl;
#line 53 "List.chpl"
  (&this_chpl)->last_chpl = last_chpl;
#line 57 "List.chpl"
  (&this_chpl)->length_chpl = length_chpl;
#line 45 "List.chpl"
  *(_retArg_chpl) = this_chpl;
#line 45 "List.chpl"
  return;
#line 45 "List.chpl"
}

#line 45 "List.chpl"
/* List.chpl:45 */
#line 45 "List.chpl"
static void _construct_list_chpl(listNode_BaseDom_chpl first_chpl, listNode_BaseDom_chpl last_chpl, int64_t length_chpl, list_BaseDom_chpl* const meme_chpl, _ref_list_BaseDom _retArg_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 45 "List.chpl"
  list_BaseDom_chpl this_chpl;
#line 45 "List.chpl"
  this_chpl = *(meme_chpl);
#line 51 "List.chpl"
  (&this_chpl)->first_chpl = first_chpl;
#line 53 "List.chpl"
  (&this_chpl)->last_chpl = last_chpl;
#line 57 "List.chpl"
  (&this_chpl)->length_chpl = length_chpl;
#line 45 "List.chpl"
  *(_retArg_chpl) = this_chpl;
#line 45 "List.chpl"
  return;
#line 45 "List.chpl"
}

#line 45 "List.chpl"
/* List.chpl:82 */
#line 45 "List.chpl"
static void append_chpl(_ref_list_BaseArr this_chpl, BaseArr e_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 45 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl = NULL;
#line 45 "List.chpl"
  object call_tmp_chpl = NULL;
#line 45 "List.chpl"
  chpl_bool call_tmp_chpl2;
#line 45 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl2 = NULL;
#line 45 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl3 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl this_chpl2 = NULL;
#line 45 "List.chpl"
  int64_t call_tmp_chpl4;
#line 45 "List.chpl"
  c_void_ptr cast_tmp_chpl;
#line 45 "List.chpl"
  listNode_BaseArr_chpl call_tmp_chpl5 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl wrap_call_tmp_chpl = NULL;
#line 45 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl6 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl3 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl4 = NULL;
#line 45 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl7 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl this_chpl3 = NULL;
#line 45 "List.chpl"
  int64_t call_tmp_chpl8;
#line 45 "List.chpl"
  c_void_ptr cast_tmp_chpl2;
#line 45 "List.chpl"
  listNode_BaseArr_chpl call_tmp_chpl9 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl wrap_call_tmp_chpl2 = NULL;
#line 45 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl10 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl5 = NULL;
#line 45 "List.chpl"
  _ref_int64_t call_tmp_chpl11 = NULL;
#line 83 "List.chpl"
  chpl_check_nil(this_chpl, INT64(83), INT64(0));
#line 83 "List.chpl"
  coerce_tmp_chpl = (this_chpl)->last_chpl;
#line 83 "List.chpl"
  call_tmp_chpl = ((object)(coerce_tmp_chpl));
#line 83 "List.chpl"
  call_tmp_chpl2 = (call_tmp_chpl != nil);
#line 83 "List.chpl"
  if (call_tmp_chpl2) /* ZLINE: 84 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 83 "List.chpl"
  {
#line 84 "List.chpl"
    chpl_check_nil(this_chpl, INT64(84), INT64(0));
#line 84 "List.chpl"
    coerce_tmp_chpl2 = (this_chpl)->last_chpl;
#line 84 "List.chpl"
    chpl_check_nil(coerce_tmp_chpl2, INT64(84), INT64(0));
#line 84 "List.chpl"
    call_tmp_chpl3 = &((coerce_tmp_chpl2)->next_chpl);
#line 84 "List.chpl"
    call_tmp_chpl4 = sizeof(chpl_listNode_BaseArr_chpl_object);
#line 84 "List.chpl"
    cast_tmp_chpl = chpl_here_alloc(call_tmp_chpl4, INT16(4), _ln_chpl, _fn_chpl);
#line 84 "List.chpl"
    this_chpl2 = ((listNode_BaseArr_chpl)(cast_tmp_chpl));
#line 84 "List.chpl"
    ((object)(this_chpl2))->chpl__cid = chpl__cid_listNode_BaseArr_chpl;
#line 84 "List.chpl"
    chpl_check_nil(this_chpl2, INT64(84), INT64(0));
#line 84 "List.chpl"
    (this_chpl2)->data_chpl = nil;
#line 84 "List.chpl"
    chpl_check_nil(this_chpl2, INT64(84), INT64(0));
#line 84 "List.chpl"
    (this_chpl2)->next_chpl = nil;
#line 84 "List.chpl"
    chpl_check_nil(this_chpl2, INT64(84), INT64(0));
#line 84 "List.chpl"
    (this_chpl2)->data_chpl = e_chpl;
#line 84 "List.chpl"
    call_tmp_chpl5 = ((listNode_BaseArr_chpl)(nil));
#line 84 "List.chpl"
    chpl_check_nil(this_chpl2, INT64(84), INT64(0));
#line 84 "List.chpl"
    (this_chpl2)->next_chpl = call_tmp_chpl5;
#line 84 "List.chpl"
    wrap_call_tmp_chpl = _construct_listNode_chpl(e_chpl, call_tmp_chpl5, this_chpl2, _ln_chpl, _fn_chpl);
#line 84 "List.chpl"
    *(call_tmp_chpl3) = wrap_call_tmp_chpl;
#line 85 "List.chpl"
    chpl_check_nil(this_chpl, INT64(85), INT64(0));
#line 85 "List.chpl"
    call_tmp_chpl6 = &((this_chpl)->last_chpl);
#line 85 "List.chpl"
    chpl_check_nil(this_chpl, INT64(85), INT64(0));
#line 85 "List.chpl"
    coerce_tmp_chpl3 = (this_chpl)->last_chpl;
#line 85 "List.chpl"
    chpl_check_nil(coerce_tmp_chpl3, INT64(85), INT64(0));
#line 85 "List.chpl"
    coerce_tmp_chpl4 = (coerce_tmp_chpl3)->next_chpl;
#line 85 "List.chpl"
    *(call_tmp_chpl6) = coerce_tmp_chpl4;
#line 85 "List.chpl"
  } else /* ZLINE: 87 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 85 "List.chpl"
  {
#line 87 "List.chpl"
    chpl_check_nil(this_chpl, INT64(87), INT64(0));
#line 87 "List.chpl"
    call_tmp_chpl7 = &((this_chpl)->first_chpl);
#line 87 "List.chpl"
    call_tmp_chpl8 = sizeof(chpl_listNode_BaseArr_chpl_object);
#line 87 "List.chpl"
    cast_tmp_chpl2 = chpl_here_alloc(call_tmp_chpl8, INT16(4), _ln_chpl, _fn_chpl);
#line 87 "List.chpl"
    this_chpl3 = ((listNode_BaseArr_chpl)(cast_tmp_chpl2));
#line 87 "List.chpl"
    ((object)(this_chpl3))->chpl__cid = chpl__cid_listNode_BaseArr_chpl;
#line 87 "List.chpl"
    chpl_check_nil(this_chpl3, INT64(87), INT64(0));
#line 87 "List.chpl"
    (this_chpl3)->data_chpl = nil;
#line 87 "List.chpl"
    chpl_check_nil(this_chpl3, INT64(87), INT64(0));
#line 87 "List.chpl"
    (this_chpl3)->next_chpl = nil;
#line 87 "List.chpl"
    chpl_check_nil(this_chpl3, INT64(87), INT64(0));
#line 87 "List.chpl"
    (this_chpl3)->data_chpl = e_chpl;
#line 87 "List.chpl"
    call_tmp_chpl9 = ((listNode_BaseArr_chpl)(nil));
#line 87 "List.chpl"
    chpl_check_nil(this_chpl3, INT64(87), INT64(0));
#line 87 "List.chpl"
    (this_chpl3)->next_chpl = call_tmp_chpl9;
#line 87 "List.chpl"
    wrap_call_tmp_chpl2 = _construct_listNode_chpl(e_chpl, call_tmp_chpl9, this_chpl3, _ln_chpl, _fn_chpl);
#line 87 "List.chpl"
    *(call_tmp_chpl7) = wrap_call_tmp_chpl2;
#line 88 "List.chpl"
    chpl_check_nil(this_chpl, INT64(88), INT64(0));
#line 88 "List.chpl"
    call_tmp_chpl10 = &((this_chpl)->last_chpl);
#line 88 "List.chpl"
    chpl_check_nil(this_chpl, INT64(88), INT64(0));
#line 88 "List.chpl"
    coerce_tmp_chpl5 = (this_chpl)->first_chpl;
#line 88 "List.chpl"
    *(call_tmp_chpl10) = coerce_tmp_chpl5;
#line 88 "List.chpl"
  }
#line 90 "List.chpl"
  chpl_check_nil(this_chpl, INT64(90), INT64(0));
#line 90 "List.chpl"
  call_tmp_chpl11 = &((this_chpl)->length_chpl);
#line 90 "List.chpl"
  *(call_tmp_chpl11) += INT64(1);
#line 82 "List.chpl"
  return;
#line 82 "List.chpl"
}

#line 82 "List.chpl"
/* List.chpl:138 */
#line 82 "List.chpl"
static void remove_chpl2(_ref_list_BaseDom this_chpl, BaseDom x_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 82 "List.chpl"
  listNode_BaseDom_chpl tmp_chpl = NULL;
#line 82 "List.chpl"
  listNode_BaseDom_chpl coerce_tmp_chpl = NULL;
#line 82 "List.chpl"
  listNode_BaseDom_chpl prev_chpl = NULL;
#line 82 "List.chpl"
  listNode_BaseDom_chpl type_tmp_chpl = NULL;
#line 82 "List.chpl"
  chpl_bool tmp_chpl2;
#line 82 "List.chpl"
  object call_tmp_chpl = NULL;
#line 82 "List.chpl"
  chpl_bool call_tmp_chpl2;
#line 82 "List.chpl"
  chpl_bool tmp_chpl3;
#line 82 "List.chpl"
  listNode_BaseDom_chpl tmp_chpl4 = NULL;
#line 82 "List.chpl"
  BaseDom coerce_tmp_chpl2 = NULL;
#line 82 "List.chpl"
  object call_tmp_chpl3 = NULL;
#line 82 "List.chpl"
  object call_tmp_chpl4 = NULL;
#line 82 "List.chpl"
  chpl_bool call_tmp_chpl5;
#line 82 "List.chpl"
  listNode_BaseDom_chpl coerce_tmp_chpl3 = NULL;
#line 82 "List.chpl"
  object call_tmp_chpl6 = NULL;
#line 82 "List.chpl"
  chpl_bool call_tmp_chpl7;
#line 82 "List.chpl"
  chpl_bool tmp_chpl5;
#line 82 "List.chpl"
  listNode_BaseDom_chpl tmp_chpl6 = NULL;
#line 82 "List.chpl"
  BaseDom coerce_tmp_chpl4 = NULL;
#line 82 "List.chpl"
  object call_tmp_chpl8 = NULL;
#line 82 "List.chpl"
  object call_tmp_chpl9 = NULL;
#line 82 "List.chpl"
  chpl_bool call_tmp_chpl10;
#line 82 "List.chpl"
  object call_tmp_chpl11 = NULL;
#line 82 "List.chpl"
  chpl_bool call_tmp_chpl12;
#line 82 "List.chpl"
  object call_tmp_chpl13 = NULL;
#line 82 "List.chpl"
  chpl_bool call_tmp_chpl14;
#line 82 "List.chpl"
  _ref_listNode_BaseDom call_tmp_chpl15 = NULL;
#line 82 "List.chpl"
  listNode_BaseDom_chpl coerce_tmp_chpl5 = NULL;
#line 82 "List.chpl"
  listNode_BaseDom_chpl coerce_tmp_chpl6 = NULL;
#line 82 "List.chpl"
  object call_tmp_chpl16 = NULL;
#line 82 "List.chpl"
  object call_tmp_chpl17 = NULL;
#line 82 "List.chpl"
  chpl_bool call_tmp_chpl18;
#line 82 "List.chpl"
  _ref_listNode_BaseDom call_tmp_chpl19 = NULL;
#line 82 "List.chpl"
  listNode_BaseDom_chpl coerce_tmp_chpl7 = NULL;
#line 82 "List.chpl"
  listNode_BaseDom_chpl coerce_tmp_chpl8 = NULL;
#line 82 "List.chpl"
  object call_tmp_chpl20 = NULL;
#line 82 "List.chpl"
  object call_tmp_chpl21 = NULL;
#line 82 "List.chpl"
  chpl_bool call_tmp_chpl22;
#line 82 "List.chpl"
  _ref_listNode_BaseDom call_tmp_chpl23 = NULL;
#line 82 "List.chpl"
  c_void_ptr call_tmp_chpl24;
#line 82 "List.chpl"
  _ref_int64_t call_tmp_chpl25 = NULL;
#line 139 "List.chpl"
  chpl_check_nil(this_chpl, INT64(139), INT64(0));
#line 139 "List.chpl"
  coerce_tmp_chpl = (this_chpl)->first_chpl;
#line 139 "List.chpl"
  tmp_chpl = coerce_tmp_chpl;
#line 140 "List.chpl"
  type_tmp_chpl = nil;
#line 140 "List.chpl"
  prev_chpl = type_tmp_chpl;
#line 141 "List.chpl"
  call_tmp_chpl = ((object)(coerce_tmp_chpl));
#line 141 "List.chpl"
  call_tmp_chpl2 = (call_tmp_chpl != nil);
#line 141 "List.chpl"
  if (call_tmp_chpl2) /* ZLINE: 141 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 141 "List.chpl"
  {
#line 141 "List.chpl"
    tmp_chpl4 = coerce_tmp_chpl;
#line 141 "List.chpl"
    chpl_check_nil(tmp_chpl4, INT64(141), INT64(0));
#line 141 "List.chpl"
    coerce_tmp_chpl2 = (tmp_chpl4)->data_chpl;
#line 141 "List.chpl"
    call_tmp_chpl3 = ((object)(coerce_tmp_chpl2));
#line 141 "List.chpl"
    call_tmp_chpl4 = ((object)(x_chpl));
#line 141 "List.chpl"
    call_tmp_chpl5 = (call_tmp_chpl3 != call_tmp_chpl4);
#line 141 "List.chpl"
    tmp_chpl3 = call_tmp_chpl5;
#line 141 "List.chpl"
  } else /* ZLINE: 141 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 141 "List.chpl"
  {
#line 141 "List.chpl"
    tmp_chpl3 = UINT8(false);
#line 141 "List.chpl"
  }
#line 141 "List.chpl"
  tmp_chpl2 = tmp_chpl3;
#line 141 "List.chpl"
  while (tmp_chpl2) {
#line 142 "List.chpl"
    prev_chpl = tmp_chpl;
#line 143 "List.chpl"
    chpl_check_nil(tmp_chpl, INT64(143), INT64(0));
#line 143 "List.chpl"
    coerce_tmp_chpl3 = (tmp_chpl)->next_chpl;
#line 143 "List.chpl"
    tmp_chpl = coerce_tmp_chpl3;
#line 141 "List.chpl"
    call_tmp_chpl6 = ((object)(coerce_tmp_chpl3));
#line 141 "List.chpl"
    call_tmp_chpl7 = (call_tmp_chpl6 != nil);
#line 141 "List.chpl"
    if (call_tmp_chpl7) /* ZLINE: 141 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 141 "List.chpl"
    {
#line 141 "List.chpl"
      tmp_chpl6 = coerce_tmp_chpl3;
#line 141 "List.chpl"
      chpl_check_nil(tmp_chpl6, INT64(141), INT64(0));
#line 141 "List.chpl"
      coerce_tmp_chpl4 = (tmp_chpl6)->data_chpl;
#line 141 "List.chpl"
      call_tmp_chpl8 = ((object)(coerce_tmp_chpl4));
#line 141 "List.chpl"
      call_tmp_chpl9 = ((object)(x_chpl));
#line 141 "List.chpl"
      call_tmp_chpl10 = (call_tmp_chpl8 != call_tmp_chpl9);
#line 141 "List.chpl"
      tmp_chpl5 = call_tmp_chpl10;
#line 141 "List.chpl"
    } else /* ZLINE: 141 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 141 "List.chpl"
    {
#line 141 "List.chpl"
      tmp_chpl5 = UINT8(false);
#line 141 "List.chpl"
    }
#line 141 "List.chpl"
    tmp_chpl2 = tmp_chpl5;
#line 141 "List.chpl"
  }
#line 145 "List.chpl"
  call_tmp_chpl11 = ((object)(tmp_chpl));
#line 145 "List.chpl"
  call_tmp_chpl12 = (call_tmp_chpl11 != nil);
#line 145 "List.chpl"
  if (call_tmp_chpl12) /* ZLINE: 146 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 145 "List.chpl"
  {
#line 146 "List.chpl"
    call_tmp_chpl13 = ((object)(prev_chpl));
#line 146 "List.chpl"
    call_tmp_chpl14 = (call_tmp_chpl13 != nil);
#line 146 "List.chpl"
    if (call_tmp_chpl14) /* ZLINE: 146 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 146 "List.chpl"
    {
#line 147 "List.chpl"
      chpl_check_nil(prev_chpl, INT64(147), INT64(0));
#line 147 "List.chpl"
      call_tmp_chpl15 = &((prev_chpl)->next_chpl);
#line 147 "List.chpl"
      chpl_check_nil(tmp_chpl, INT64(147), INT64(0));
#line 147 "List.chpl"
      coerce_tmp_chpl5 = (tmp_chpl)->next_chpl;
#line 147 "List.chpl"
      *(call_tmp_chpl15) = coerce_tmp_chpl5;
#line 147 "List.chpl"
    }
#line 148 "List.chpl"
    chpl_check_nil(this_chpl, INT64(148), INT64(0));
#line 148 "List.chpl"
    coerce_tmp_chpl6 = (this_chpl)->first_chpl;
#line 148 "List.chpl"
    call_tmp_chpl16 = ((object)(coerce_tmp_chpl6));
#line 148 "List.chpl"
    call_tmp_chpl17 = ((object)(tmp_chpl));
#line 148 "List.chpl"
    call_tmp_chpl18 = (call_tmp_chpl16 == call_tmp_chpl17);
#line 148 "List.chpl"
    if (call_tmp_chpl18) /* ZLINE: 148 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 148 "List.chpl"
    {
#line 149 "List.chpl"
      chpl_check_nil(this_chpl, INT64(149), INT64(0));
#line 149 "List.chpl"
      call_tmp_chpl19 = &((this_chpl)->first_chpl);
#line 149 "List.chpl"
      chpl_check_nil(tmp_chpl, INT64(149), INT64(0));
#line 149 "List.chpl"
      coerce_tmp_chpl7 = (tmp_chpl)->next_chpl;
#line 149 "List.chpl"
      *(call_tmp_chpl19) = coerce_tmp_chpl7;
#line 149 "List.chpl"
    }
#line 150 "List.chpl"
    chpl_check_nil(this_chpl, INT64(150), INT64(0));
#line 150 "List.chpl"
    coerce_tmp_chpl8 = (this_chpl)->last_chpl;
#line 150 "List.chpl"
    call_tmp_chpl20 = ((object)(coerce_tmp_chpl8));
#line 150 "List.chpl"
    call_tmp_chpl21 = ((object)(tmp_chpl));
#line 150 "List.chpl"
    call_tmp_chpl22 = (call_tmp_chpl20 == call_tmp_chpl21);
#line 150 "List.chpl"
    if (call_tmp_chpl22) /* ZLINE: 150 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 150 "List.chpl"
    {
#line 151 "List.chpl"
      chpl_check_nil(this_chpl, INT64(151), INT64(0));
#line 151 "List.chpl"
      call_tmp_chpl23 = &((this_chpl)->last_chpl);
#line 151 "List.chpl"
      *(call_tmp_chpl23) = prev_chpl;
#line 151 "List.chpl"
    }
#line 152 "List.chpl"
    call_tmp_chpl24 = ((void*)(tmp_chpl));
#line 152 "List.chpl"
    chpl_here_free(call_tmp_chpl24, _ln_chpl, _fn_chpl);
#line 153 "List.chpl"
    chpl_check_nil(this_chpl, INT64(153), INT64(0));
#line 153 "List.chpl"
    call_tmp_chpl25 = &((this_chpl)->length_chpl);
#line 153 "List.chpl"
    *(call_tmp_chpl25) -= INT64(1);
#line 153 "List.chpl"
  }
#line 138 "List.chpl"
  return;
#line 138 "List.chpl"
}

#line 138 "List.chpl"
/* List.chpl:138 */
#line 138 "List.chpl"
static void remove_chpl(_ref_list_BaseArr this_chpl, BaseArr x_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 138 "List.chpl"
  listNode_BaseArr_chpl tmp_chpl = NULL;
#line 138 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl = NULL;
#line 138 "List.chpl"
  listNode_BaseArr_chpl prev_chpl = NULL;
#line 138 "List.chpl"
  listNode_BaseArr_chpl type_tmp_chpl = NULL;
#line 138 "List.chpl"
  chpl_bool tmp_chpl2;
#line 138 "List.chpl"
  object call_tmp_chpl = NULL;
#line 138 "List.chpl"
  chpl_bool call_tmp_chpl2;
#line 138 "List.chpl"
  chpl_bool tmp_chpl3;
#line 138 "List.chpl"
  listNode_BaseArr_chpl tmp_chpl4 = NULL;
#line 138 "List.chpl"
  BaseArr coerce_tmp_chpl2 = NULL;
#line 138 "List.chpl"
  object call_tmp_chpl3 = NULL;
#line 138 "List.chpl"
  object call_tmp_chpl4 = NULL;
#line 138 "List.chpl"
  chpl_bool call_tmp_chpl5;
#line 138 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl3 = NULL;
#line 138 "List.chpl"
  object call_tmp_chpl6 = NULL;
#line 138 "List.chpl"
  chpl_bool call_tmp_chpl7;
#line 138 "List.chpl"
  chpl_bool tmp_chpl5;
#line 138 "List.chpl"
  listNode_BaseArr_chpl tmp_chpl6 = NULL;
#line 138 "List.chpl"
  BaseArr coerce_tmp_chpl4 = NULL;
#line 138 "List.chpl"
  object call_tmp_chpl8 = NULL;
#line 138 "List.chpl"
  object call_tmp_chpl9 = NULL;
#line 138 "List.chpl"
  chpl_bool call_tmp_chpl10;
#line 138 "List.chpl"
  object call_tmp_chpl11 = NULL;
#line 138 "List.chpl"
  chpl_bool call_tmp_chpl12;
#line 138 "List.chpl"
  object call_tmp_chpl13 = NULL;
#line 138 "List.chpl"
  chpl_bool call_tmp_chpl14;
#line 138 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl15 = NULL;
#line 138 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl5 = NULL;
#line 138 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl6 = NULL;
#line 138 "List.chpl"
  object call_tmp_chpl16 = NULL;
#line 138 "List.chpl"
  object call_tmp_chpl17 = NULL;
#line 138 "List.chpl"
  chpl_bool call_tmp_chpl18;
#line 138 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl19 = NULL;
#line 138 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl7 = NULL;
#line 138 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl8 = NULL;
#line 138 "List.chpl"
  object call_tmp_chpl20 = NULL;
#line 138 "List.chpl"
  object call_tmp_chpl21 = NULL;
#line 138 "List.chpl"
  chpl_bool call_tmp_chpl22;
#line 138 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl23 = NULL;
#line 138 "List.chpl"
  c_void_ptr call_tmp_chpl24;
#line 138 "List.chpl"
  _ref_int64_t call_tmp_chpl25 = NULL;
#line 139 "List.chpl"
  chpl_check_nil(this_chpl, INT64(139), INT64(0));
#line 139 "List.chpl"
  coerce_tmp_chpl = (this_chpl)->first_chpl;
#line 139 "List.chpl"
  tmp_chpl = coerce_tmp_chpl;
#line 140 "List.chpl"
  type_tmp_chpl = nil;
#line 140 "List.chpl"
  prev_chpl = type_tmp_chpl;
#line 141 "List.chpl"
  call_tmp_chpl = ((object)(coerce_tmp_chpl));
#line 141 "List.chpl"
  call_tmp_chpl2 = (call_tmp_chpl != nil);
#line 141 "List.chpl"
  if (call_tmp_chpl2) /* ZLINE: 141 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 141 "List.chpl"
  {
#line 141 "List.chpl"
    tmp_chpl4 = coerce_tmp_chpl;
#line 141 "List.chpl"
    chpl_check_nil(tmp_chpl4, INT64(141), INT64(0));
#line 141 "List.chpl"
    coerce_tmp_chpl2 = (tmp_chpl4)->data_chpl;
#line 141 "List.chpl"
    call_tmp_chpl3 = ((object)(coerce_tmp_chpl2));
#line 141 "List.chpl"
    call_tmp_chpl4 = ((object)(x_chpl));
#line 141 "List.chpl"
    call_tmp_chpl5 = (call_tmp_chpl3 != call_tmp_chpl4);
#line 141 "List.chpl"
    tmp_chpl3 = call_tmp_chpl5;
#line 141 "List.chpl"
  } else /* ZLINE: 141 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 141 "List.chpl"
  {
#line 141 "List.chpl"
    tmp_chpl3 = UINT8(false);
#line 141 "List.chpl"
  }
#line 141 "List.chpl"
  tmp_chpl2 = tmp_chpl3;
#line 141 "List.chpl"
  while (tmp_chpl2) {
#line 142 "List.chpl"
    prev_chpl = tmp_chpl;
#line 143 "List.chpl"
    chpl_check_nil(tmp_chpl, INT64(143), INT64(0));
#line 143 "List.chpl"
    coerce_tmp_chpl3 = (tmp_chpl)->next_chpl;
#line 143 "List.chpl"
    tmp_chpl = coerce_tmp_chpl3;
#line 141 "List.chpl"
    call_tmp_chpl6 = ((object)(coerce_tmp_chpl3));
#line 141 "List.chpl"
    call_tmp_chpl7 = (call_tmp_chpl6 != nil);
#line 141 "List.chpl"
    if (call_tmp_chpl7) /* ZLINE: 141 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 141 "List.chpl"
    {
#line 141 "List.chpl"
      tmp_chpl6 = coerce_tmp_chpl3;
#line 141 "List.chpl"
      chpl_check_nil(tmp_chpl6, INT64(141), INT64(0));
#line 141 "List.chpl"
      coerce_tmp_chpl4 = (tmp_chpl6)->data_chpl;
#line 141 "List.chpl"
      call_tmp_chpl8 = ((object)(coerce_tmp_chpl4));
#line 141 "List.chpl"
      call_tmp_chpl9 = ((object)(x_chpl));
#line 141 "List.chpl"
      call_tmp_chpl10 = (call_tmp_chpl8 != call_tmp_chpl9);
#line 141 "List.chpl"
      tmp_chpl5 = call_tmp_chpl10;
#line 141 "List.chpl"
    } else /* ZLINE: 141 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 141 "List.chpl"
    {
#line 141 "List.chpl"
      tmp_chpl5 = UINT8(false);
#line 141 "List.chpl"
    }
#line 141 "List.chpl"
    tmp_chpl2 = tmp_chpl5;
#line 141 "List.chpl"
  }
#line 145 "List.chpl"
  call_tmp_chpl11 = ((object)(tmp_chpl));
#line 145 "List.chpl"
  call_tmp_chpl12 = (call_tmp_chpl11 != nil);
#line 145 "List.chpl"
  if (call_tmp_chpl12) /* ZLINE: 146 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 145 "List.chpl"
  {
#line 146 "List.chpl"
    call_tmp_chpl13 = ((object)(prev_chpl));
#line 146 "List.chpl"
    call_tmp_chpl14 = (call_tmp_chpl13 != nil);
#line 146 "List.chpl"
    if (call_tmp_chpl14) /* ZLINE: 146 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 146 "List.chpl"
    {
#line 147 "List.chpl"
      chpl_check_nil(prev_chpl, INT64(147), INT64(0));
#line 147 "List.chpl"
      call_tmp_chpl15 = &((prev_chpl)->next_chpl);
#line 147 "List.chpl"
      chpl_check_nil(tmp_chpl, INT64(147), INT64(0));
#line 147 "List.chpl"
      coerce_tmp_chpl5 = (tmp_chpl)->next_chpl;
#line 147 "List.chpl"
      *(call_tmp_chpl15) = coerce_tmp_chpl5;
#line 147 "List.chpl"
    }
#line 148 "List.chpl"
    chpl_check_nil(this_chpl, INT64(148), INT64(0));
#line 148 "List.chpl"
    coerce_tmp_chpl6 = (this_chpl)->first_chpl;
#line 148 "List.chpl"
    call_tmp_chpl16 = ((object)(coerce_tmp_chpl6));
#line 148 "List.chpl"
    call_tmp_chpl17 = ((object)(tmp_chpl));
#line 148 "List.chpl"
    call_tmp_chpl18 = (call_tmp_chpl16 == call_tmp_chpl17);
#line 148 "List.chpl"
    if (call_tmp_chpl18) /* ZLINE: 148 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 148 "List.chpl"
    {
#line 149 "List.chpl"
      chpl_check_nil(this_chpl, INT64(149), INT64(0));
#line 149 "List.chpl"
      call_tmp_chpl19 = &((this_chpl)->first_chpl);
#line 149 "List.chpl"
      chpl_check_nil(tmp_chpl, INT64(149), INT64(0));
#line 149 "List.chpl"
      coerce_tmp_chpl7 = (tmp_chpl)->next_chpl;
#line 149 "List.chpl"
      *(call_tmp_chpl19) = coerce_tmp_chpl7;
#line 149 "List.chpl"
    }
#line 150 "List.chpl"
    chpl_check_nil(this_chpl, INT64(150), INT64(0));
#line 150 "List.chpl"
    coerce_tmp_chpl8 = (this_chpl)->last_chpl;
#line 150 "List.chpl"
    call_tmp_chpl20 = ((object)(coerce_tmp_chpl8));
#line 150 "List.chpl"
    call_tmp_chpl21 = ((object)(tmp_chpl));
#line 150 "List.chpl"
    call_tmp_chpl22 = (call_tmp_chpl20 == call_tmp_chpl21);
#line 150 "List.chpl"
    if (call_tmp_chpl22) /* ZLINE: 150 /home/agobin/Documents/chapel-1.13.0/modules/standard/List.chpl */
#line 150 "List.chpl"
    {
#line 151 "List.chpl"
      chpl_check_nil(this_chpl, INT64(151), INT64(0));
#line 151 "List.chpl"
      call_tmp_chpl23 = &((this_chpl)->last_chpl);
#line 151 "List.chpl"
      *(call_tmp_chpl23) = prev_chpl;
#line 151 "List.chpl"
    }
#line 152 "List.chpl"
    call_tmp_chpl24 = ((void*)(tmp_chpl));
#line 152 "List.chpl"
    chpl_here_free(call_tmp_chpl24, _ln_chpl, _fn_chpl);
#line 153 "List.chpl"
    chpl_check_nil(this_chpl, INT64(153), INT64(0));
#line 153 "List.chpl"
    call_tmp_chpl25 = &((this_chpl)->length_chpl);
#line 153 "List.chpl"
    *(call_tmp_chpl25) -= INT64(1);
#line 153 "List.chpl"
  }
#line 138 "List.chpl"
  return;
#line 138 "List.chpl"
}


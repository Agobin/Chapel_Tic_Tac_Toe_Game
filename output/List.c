/* List.chpl:27 */
static void chpl__init_List(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 27 "List.chpl"
  if (chpl__init_List_p) /* ZLINE: 27 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
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
  chpl__init_List_p = true;
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
static listNode_BaseArr_chpl _construct_listNode_chpl(BaseArr data_chpl, listNode_BaseArr_chpl next_chpl, listNode_BaseArr_chpl meme_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 27 "List.chpl"
  listNode_BaseArr_chpl this_chpl = NULL;
#line 27 "List.chpl"
  object tmp_chpl = NULL;
#line 30 "List.chpl"
  this_chpl = meme_chpl;
#line 30 "List.chpl"
  chpl_check_nil(this_chpl, INT64(30), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 30 "List.chpl"
  tmp_chpl = &((this_chpl)->super_chpl);
#line 30 "List.chpl"
  _construct_object(tmp_chpl);
#line 32 "List.chpl"
  chpl_check_nil(this_chpl, INT64(32), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 32 "List.chpl"
  (this_chpl)->data_chpl = data_chpl;
#line 33 "List.chpl"
  chpl_check_nil(this_chpl, INT64(33), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 33 "List.chpl"
  (this_chpl)->next_chpl = next_chpl;
#line 30 "List.chpl"
  return this_chpl;
#line 30 "List.chpl"
}

#line 30 "List.chpl"
/* List.chpl:30 */
#line 30 "List.chpl"
static void chpl__auto_destroy_listNode(listNode_BaseArr_chpl this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 30 "List.chpl"
  return;
#line 30 "List.chpl"
}

#line 30 "List.chpl"
/* List.chpl:30 */
#line 30 "List.chpl"
static void chpl__auto_destroy_listNode2(listNode_BaseDom_chpl this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 30 "List.chpl"
  return;
#line 30 "List.chpl"
}

#line 30 "List.chpl"
/* List.chpl:45 */
#line 30 "List.chpl"
static list_BaseArr_chpl _construct_list_chpl2(listNode_BaseArr_chpl first_chpl, listNode_BaseArr_chpl last_chpl, int64_t length_chpl, list_BaseArr_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
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
  return this_chpl;
#line 45 "List.chpl"
}

#line 45 "List.chpl"
/* List.chpl:45 */
#line 45 "List.chpl"
static list_BaseDom_chpl _construct_list_chpl(listNode_BaseDom_chpl first_chpl, listNode_BaseDom_chpl last_chpl, int64_t length_chpl, list_BaseDom_chpl* const meme_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
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
  return this_chpl;
#line 45 "List.chpl"
}

#line 45 "List.chpl"
/* List.chpl:75 */
#line 45 "List.chpl"
static void append_chpl(_ref_list_BaseArr this_chpl, BaseArr e_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 45 "List.chpl"
  listNode_BaseArr_chpl ret_chpl = NULL;
#line 45 "List.chpl"
  object call_tmp_chpl = NULL;
#line 45 "List.chpl"
  chpl_bool call_tmp_chpl2;
#line 45 "List.chpl"
  listNode_BaseArr_chpl ret_chpl2 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl = NULL;
#line 45 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl3 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl this_chpl2 = NULL;
#line 45 "List.chpl"
  int64_t call_tmp_chpl4;
#line 45 "List.chpl"
  chpl_opaque cast_tmp_chpl;
#line 45 "List.chpl"
  listNode_BaseArr_chpl call_tmp_chpl5 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl wrap_call_tmp_chpl = NULL;
#line 45 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl6 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl ret_chpl3 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl coerce_tmp_chpl2 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl ret_chpl4 = NULL;
#line 45 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl7 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl this_chpl3 = NULL;
#line 45 "List.chpl"
  int64_t call_tmp_chpl8;
#line 45 "List.chpl"
  chpl_opaque cast_tmp_chpl2;
#line 45 "List.chpl"
  listNode_BaseArr_chpl call_tmp_chpl9 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl wrap_call_tmp_chpl2 = NULL;
#line 45 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl10 = NULL;
#line 45 "List.chpl"
  listNode_BaseArr_chpl ret_chpl5 = NULL;
#line 45 "List.chpl"
  _ref_int64_t call_tmp_chpl11 = NULL;
#line 76 "List.chpl"
  chpl_check_nil(this_chpl, INT64(76), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 76 "List.chpl"
  ret_chpl = (this_chpl)->last_chpl;
#line 76 "List.chpl"
  call_tmp_chpl = ((object)(ret_chpl));
#line 76 "List.chpl"
  call_tmp_chpl2 = (call_tmp_chpl != nil);
#line 76 "List.chpl"
  if (call_tmp_chpl2) /* ZLINE: 77 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 76 "List.chpl"
  {
#line 77 "List.chpl"
    chpl_check_nil(this_chpl, INT64(77), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 77 "List.chpl"
    ret_chpl2 = (this_chpl)->last_chpl;
#line 77 "List.chpl"
    coerce_tmp_chpl = ret_chpl2;
#line 77 "List.chpl"
    chpl_check_nil(coerce_tmp_chpl, INT64(77), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 77 "List.chpl"
    call_tmp_chpl3 = &((coerce_tmp_chpl)->next_chpl);
#line 77 "List.chpl"
    call_tmp_chpl4 = sizeof(chpl_listNode_BaseArr_chpl_object);
#line 77 "List.chpl"
    cast_tmp_chpl = chpl_here_alloc(call_tmp_chpl4, INT16(3), _ln_chpl, _fn_chpl);
#line 77 "List.chpl"
    this_chpl2 = ((listNode_BaseArr_chpl)(cast_tmp_chpl));
#line 77 "List.chpl"
    ((object)(this_chpl2))->chpl__cid = chpl__cid_listNode_BaseArr_chpl;
#line 77 "List.chpl"
    chpl_check_nil(this_chpl2, INT64(77), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 77 "List.chpl"
    (this_chpl2)->data_chpl = nil;
#line 77 "List.chpl"
    chpl_check_nil(this_chpl2, INT64(77), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 77 "List.chpl"
    (this_chpl2)->next_chpl = nil;
#line 77 "List.chpl"
    chpl_check_nil(this_chpl2, INT64(77), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 77 "List.chpl"
    (this_chpl2)->data_chpl = e_chpl;
#line 77 "List.chpl"
    call_tmp_chpl5 = ((listNode_BaseArr_chpl)(nil));
#line 77 "List.chpl"
    chpl_check_nil(this_chpl2, INT64(77), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 77 "List.chpl"
    (this_chpl2)->next_chpl = call_tmp_chpl5;
#line 77 "List.chpl"
    wrap_call_tmp_chpl = _construct_listNode_chpl(e_chpl, call_tmp_chpl5, this_chpl2, _ln_chpl, _fn_chpl);
#line 77 "List.chpl"
    *(call_tmp_chpl3) = wrap_call_tmp_chpl;
#line 78 "List.chpl"
    chpl_check_nil(this_chpl, INT64(78), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 78 "List.chpl"
    call_tmp_chpl6 = &((this_chpl)->last_chpl);
#line 78 "List.chpl"
    chpl_check_nil(this_chpl, INT64(78), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 78 "List.chpl"
    ret_chpl3 = (this_chpl)->last_chpl;
#line 78 "List.chpl"
    coerce_tmp_chpl2 = ret_chpl3;
#line 78 "List.chpl"
    chpl_check_nil(coerce_tmp_chpl2, INT64(78), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 78 "List.chpl"
    ret_chpl4 = (coerce_tmp_chpl2)->next_chpl;
#line 78 "List.chpl"
    *(call_tmp_chpl6) = ret_chpl4;
#line 78 "List.chpl"
  } else /* ZLINE: 80 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 78 "List.chpl"
  {
#line 80 "List.chpl"
    chpl_check_nil(this_chpl, INT64(80), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 80 "List.chpl"
    call_tmp_chpl7 = &((this_chpl)->first_chpl);
#line 80 "List.chpl"
    call_tmp_chpl8 = sizeof(chpl_listNode_BaseArr_chpl_object);
#line 80 "List.chpl"
    cast_tmp_chpl2 = chpl_here_alloc(call_tmp_chpl8, INT16(3), _ln_chpl, _fn_chpl);
#line 80 "List.chpl"
    this_chpl3 = ((listNode_BaseArr_chpl)(cast_tmp_chpl2));
#line 80 "List.chpl"
    ((object)(this_chpl3))->chpl__cid = chpl__cid_listNode_BaseArr_chpl;
#line 80 "List.chpl"
    chpl_check_nil(this_chpl3, INT64(80), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 80 "List.chpl"
    (this_chpl3)->data_chpl = nil;
#line 80 "List.chpl"
    chpl_check_nil(this_chpl3, INT64(80), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 80 "List.chpl"
    (this_chpl3)->next_chpl = nil;
#line 80 "List.chpl"
    chpl_check_nil(this_chpl3, INT64(80), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 80 "List.chpl"
    (this_chpl3)->data_chpl = e_chpl;
#line 80 "List.chpl"
    call_tmp_chpl9 = ((listNode_BaseArr_chpl)(nil));
#line 80 "List.chpl"
    chpl_check_nil(this_chpl3, INT64(80), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 80 "List.chpl"
    (this_chpl3)->next_chpl = call_tmp_chpl9;
#line 80 "List.chpl"
    wrap_call_tmp_chpl2 = _construct_listNode_chpl(e_chpl, call_tmp_chpl9, this_chpl3, _ln_chpl, _fn_chpl);
#line 80 "List.chpl"
    *(call_tmp_chpl7) = wrap_call_tmp_chpl2;
#line 81 "List.chpl"
    chpl_check_nil(this_chpl, INT64(81), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 81 "List.chpl"
    call_tmp_chpl10 = &((this_chpl)->last_chpl);
#line 81 "List.chpl"
    chpl_check_nil(this_chpl, INT64(81), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 81 "List.chpl"
    ret_chpl5 = (this_chpl)->first_chpl;
#line 81 "List.chpl"
    *(call_tmp_chpl10) = ret_chpl5;
#line 81 "List.chpl"
  }
#line 83 "List.chpl"
  chpl_check_nil(this_chpl, INT64(83), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 83 "List.chpl"
  call_tmp_chpl11 = &((this_chpl)->length_chpl);
#line 83 "List.chpl"
  *(call_tmp_chpl11) += INT64(1);
#line 75 "List.chpl"
  return;
#line 75 "List.chpl"
}

#line 75 "List.chpl"
/* List.chpl:117 */
#line 75 "List.chpl"
static void remove_chpl(_ref_list_BaseDom this_chpl, BaseDom x_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 75 "List.chpl"
  listNode_BaseDom_chpl tmp_chpl = NULL;
#line 75 "List.chpl"
  listNode_BaseDom_chpl ret_chpl = NULL;
#line 75 "List.chpl"
  listNode_BaseDom_chpl prev_chpl = NULL;
#line 75 "List.chpl"
  listNode_BaseDom_chpl type_tmp_chpl = NULL;
#line 75 "List.chpl"
  chpl_bool tmp_chpl2;
#line 75 "List.chpl"
  object call_tmp_chpl = NULL;
#line 75 "List.chpl"
  chpl_bool call_tmp_chpl2;
#line 75 "List.chpl"
  chpl_bool tmp_chpl3;
#line 75 "List.chpl"
  listNode_BaseDom_chpl tmp_chpl4 = NULL;
#line 75 "List.chpl"
  BaseDom ret_chpl2 = NULL;
#line 75 "List.chpl"
  object call_tmp_chpl3 = NULL;
#line 75 "List.chpl"
  object call_tmp_chpl4 = NULL;
#line 75 "List.chpl"
  chpl_bool call_tmp_chpl5;
#line 75 "List.chpl"
  listNode_BaseDom_chpl ret_chpl3 = NULL;
#line 75 "List.chpl"
  object call_tmp_chpl6 = NULL;
#line 75 "List.chpl"
  chpl_bool call_tmp_chpl7;
#line 75 "List.chpl"
  chpl_bool tmp_chpl5;
#line 75 "List.chpl"
  listNode_BaseDom_chpl tmp_chpl6 = NULL;
#line 75 "List.chpl"
  BaseDom ret_chpl4 = NULL;
#line 75 "List.chpl"
  object call_tmp_chpl8 = NULL;
#line 75 "List.chpl"
  object call_tmp_chpl9 = NULL;
#line 75 "List.chpl"
  chpl_bool call_tmp_chpl10;
#line 75 "List.chpl"
  object call_tmp_chpl11 = NULL;
#line 75 "List.chpl"
  chpl_bool call_tmp_chpl12;
#line 75 "List.chpl"
  object call_tmp_chpl13 = NULL;
#line 75 "List.chpl"
  chpl_bool call_tmp_chpl14;
#line 75 "List.chpl"
  _ref_listNode_BaseDom call_tmp_chpl15 = NULL;
#line 75 "List.chpl"
  listNode_BaseDom_chpl ret_chpl5 = NULL;
#line 75 "List.chpl"
  listNode_BaseDom_chpl ret_chpl6 = NULL;
#line 75 "List.chpl"
  object call_tmp_chpl16 = NULL;
#line 75 "List.chpl"
  object call_tmp_chpl17 = NULL;
#line 75 "List.chpl"
  chpl_bool call_tmp_chpl18;
#line 75 "List.chpl"
  _ref_listNode_BaseDom call_tmp_chpl19 = NULL;
#line 75 "List.chpl"
  listNode_BaseDom_chpl ret_chpl7 = NULL;
#line 75 "List.chpl"
  listNode_BaseDom_chpl ret_chpl8 = NULL;
#line 75 "List.chpl"
  object call_tmp_chpl20 = NULL;
#line 75 "List.chpl"
  object call_tmp_chpl21 = NULL;
#line 75 "List.chpl"
  chpl_bool call_tmp_chpl22;
#line 75 "List.chpl"
  _ref_listNode_BaseDom call_tmp_chpl23 = NULL;
#line 75 "List.chpl"
  chpl_opaque call_tmp_chpl24;
#line 75 "List.chpl"
  _ref_int64_t call_tmp_chpl25 = NULL;
#line 118 "List.chpl"
  chpl_check_nil(this_chpl, INT64(118), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 118 "List.chpl"
  ret_chpl = (this_chpl)->first_chpl;
#line 118 "List.chpl"
  tmp_chpl = ret_chpl;
#line 119 "List.chpl"
  type_tmp_chpl = nil;
#line 119 "List.chpl"
  prev_chpl = type_tmp_chpl;
#line 120 "List.chpl"
  call_tmp_chpl = ((object)(ret_chpl));
#line 120 "List.chpl"
  call_tmp_chpl2 = (call_tmp_chpl != nil);
#line 120 "List.chpl"
  if (call_tmp_chpl2) /* ZLINE: 120 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 120 "List.chpl"
  {
#line 120 "List.chpl"
    tmp_chpl4 = ret_chpl;
#line 120 "List.chpl"
    chpl_check_nil(tmp_chpl4, INT64(120), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 120 "List.chpl"
    ret_chpl2 = (tmp_chpl4)->data_chpl;
#line 120 "List.chpl"
    call_tmp_chpl3 = ((object)(ret_chpl2));
#line 120 "List.chpl"
    call_tmp_chpl4 = ((object)(x_chpl));
#line 120 "List.chpl"
    call_tmp_chpl5 = (call_tmp_chpl3 != call_tmp_chpl4);
#line 120 "List.chpl"
    tmp_chpl3 = call_tmp_chpl5;
#line 120 "List.chpl"
  } else /* ZLINE: 120 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 120 "List.chpl"
  {
#line 120 "List.chpl"
    tmp_chpl3 = false;
#line 120 "List.chpl"
  }
#line 120 "List.chpl"
  tmp_chpl2 = tmp_chpl3;
#line 120 "List.chpl"
  while (tmp_chpl2) {
#line 121 "List.chpl"
    prev_chpl = tmp_chpl;
#line 122 "List.chpl"
    chpl_check_nil(tmp_chpl, INT64(122), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 122 "List.chpl"
    ret_chpl3 = (tmp_chpl)->next_chpl;
#line 122 "List.chpl"
    tmp_chpl = ret_chpl3;
#line 120 "List.chpl"
    call_tmp_chpl6 = ((object)(ret_chpl3));
#line 120 "List.chpl"
    call_tmp_chpl7 = (call_tmp_chpl6 != nil);
#line 120 "List.chpl"
    if (call_tmp_chpl7) /* ZLINE: 120 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 120 "List.chpl"
    {
#line 120 "List.chpl"
      tmp_chpl6 = ret_chpl3;
#line 120 "List.chpl"
      chpl_check_nil(tmp_chpl6, INT64(120), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 120 "List.chpl"
      ret_chpl4 = (tmp_chpl6)->data_chpl;
#line 120 "List.chpl"
      call_tmp_chpl8 = ((object)(ret_chpl4));
#line 120 "List.chpl"
      call_tmp_chpl9 = ((object)(x_chpl));
#line 120 "List.chpl"
      call_tmp_chpl10 = (call_tmp_chpl8 != call_tmp_chpl9);
#line 120 "List.chpl"
      tmp_chpl5 = call_tmp_chpl10;
#line 120 "List.chpl"
    } else /* ZLINE: 120 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 120 "List.chpl"
    {
#line 120 "List.chpl"
      tmp_chpl5 = false;
#line 120 "List.chpl"
    }
#line 120 "List.chpl"
    tmp_chpl2 = tmp_chpl5;
#line 120 "List.chpl"
  }
#line 124 "List.chpl"
  call_tmp_chpl11 = ((object)(tmp_chpl));
#line 124 "List.chpl"
  call_tmp_chpl12 = (call_tmp_chpl11 != nil);
#line 124 "List.chpl"
  if (call_tmp_chpl12) /* ZLINE: 125 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 124 "List.chpl"
  {
#line 125 "List.chpl"
    call_tmp_chpl13 = ((object)(prev_chpl));
#line 125 "List.chpl"
    call_tmp_chpl14 = (call_tmp_chpl13 != nil);
#line 125 "List.chpl"
    if (call_tmp_chpl14) /* ZLINE: 125 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 125 "List.chpl"
    {
#line 126 "List.chpl"
      chpl_check_nil(prev_chpl, INT64(126), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 126 "List.chpl"
      call_tmp_chpl15 = &((prev_chpl)->next_chpl);
#line 126 "List.chpl"
      chpl_check_nil(tmp_chpl, INT64(126), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 126 "List.chpl"
      ret_chpl5 = (tmp_chpl)->next_chpl;
#line 126 "List.chpl"
      *(call_tmp_chpl15) = ret_chpl5;
#line 126 "List.chpl"
    }
#line 127 "List.chpl"
    chpl_check_nil(this_chpl, INT64(127), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 127 "List.chpl"
    ret_chpl6 = (this_chpl)->first_chpl;
#line 127 "List.chpl"
    call_tmp_chpl16 = ((object)(ret_chpl6));
#line 127 "List.chpl"
    call_tmp_chpl17 = ((object)(tmp_chpl));
#line 127 "List.chpl"
    call_tmp_chpl18 = (call_tmp_chpl16 == call_tmp_chpl17);
#line 127 "List.chpl"
    if (call_tmp_chpl18) /* ZLINE: 127 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 127 "List.chpl"
    {
#line 128 "List.chpl"
      chpl_check_nil(this_chpl, INT64(128), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 128 "List.chpl"
      call_tmp_chpl19 = &((this_chpl)->first_chpl);
#line 128 "List.chpl"
      chpl_check_nil(tmp_chpl, INT64(128), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 128 "List.chpl"
      ret_chpl7 = (tmp_chpl)->next_chpl;
#line 128 "List.chpl"
      *(call_tmp_chpl19) = ret_chpl7;
#line 128 "List.chpl"
    }
#line 129 "List.chpl"
    chpl_check_nil(this_chpl, INT64(129), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 129 "List.chpl"
    ret_chpl8 = (this_chpl)->last_chpl;
#line 129 "List.chpl"
    call_tmp_chpl20 = ((object)(ret_chpl8));
#line 129 "List.chpl"
    call_tmp_chpl21 = ((object)(tmp_chpl));
#line 129 "List.chpl"
    call_tmp_chpl22 = (call_tmp_chpl20 == call_tmp_chpl21);
#line 129 "List.chpl"
    if (call_tmp_chpl22) /* ZLINE: 129 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 129 "List.chpl"
    {
#line 130 "List.chpl"
      chpl_check_nil(this_chpl, INT64(130), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 130 "List.chpl"
      call_tmp_chpl23 = &((this_chpl)->last_chpl);
#line 130 "List.chpl"
      *(call_tmp_chpl23) = prev_chpl;
#line 130 "List.chpl"
    }
#line 131 "List.chpl"
    call_tmp_chpl24 = ((void*)(tmp_chpl));
#line 131 "List.chpl"
    chpl_here_free(call_tmp_chpl24, _ln_chpl, _fn_chpl);
#line 132 "List.chpl"
    chpl_check_nil(this_chpl, INT64(132), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 132 "List.chpl"
    call_tmp_chpl25 = &((this_chpl)->length_chpl);
#line 132 "List.chpl"
    *(call_tmp_chpl25) -= INT64(1);
#line 132 "List.chpl"
  }
#line 117 "List.chpl"
  return;
#line 117 "List.chpl"
}

#line 117 "List.chpl"
/* List.chpl:117 */
#line 117 "List.chpl"
static void remove_chpl2(_ref_list_BaseArr this_chpl, BaseArr x_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 117 "List.chpl"
  listNode_BaseArr_chpl tmp_chpl = NULL;
#line 117 "List.chpl"
  listNode_BaseArr_chpl ret_chpl = NULL;
#line 117 "List.chpl"
  listNode_BaseArr_chpl prev_chpl = NULL;
#line 117 "List.chpl"
  listNode_BaseArr_chpl type_tmp_chpl = NULL;
#line 117 "List.chpl"
  chpl_bool tmp_chpl2;
#line 117 "List.chpl"
  object call_tmp_chpl = NULL;
#line 117 "List.chpl"
  chpl_bool call_tmp_chpl2;
#line 117 "List.chpl"
  chpl_bool tmp_chpl3;
#line 117 "List.chpl"
  listNode_BaseArr_chpl tmp_chpl4 = NULL;
#line 117 "List.chpl"
  BaseArr ret_chpl2 = NULL;
#line 117 "List.chpl"
  object call_tmp_chpl3 = NULL;
#line 117 "List.chpl"
  object call_tmp_chpl4 = NULL;
#line 117 "List.chpl"
  chpl_bool call_tmp_chpl5;
#line 117 "List.chpl"
  listNode_BaseArr_chpl ret_chpl3 = NULL;
#line 117 "List.chpl"
  object call_tmp_chpl6 = NULL;
#line 117 "List.chpl"
  chpl_bool call_tmp_chpl7;
#line 117 "List.chpl"
  chpl_bool tmp_chpl5;
#line 117 "List.chpl"
  listNode_BaseArr_chpl tmp_chpl6 = NULL;
#line 117 "List.chpl"
  BaseArr ret_chpl4 = NULL;
#line 117 "List.chpl"
  object call_tmp_chpl8 = NULL;
#line 117 "List.chpl"
  object call_tmp_chpl9 = NULL;
#line 117 "List.chpl"
  chpl_bool call_tmp_chpl10;
#line 117 "List.chpl"
  object call_tmp_chpl11 = NULL;
#line 117 "List.chpl"
  chpl_bool call_tmp_chpl12;
#line 117 "List.chpl"
  object call_tmp_chpl13 = NULL;
#line 117 "List.chpl"
  chpl_bool call_tmp_chpl14;
#line 117 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl15 = NULL;
#line 117 "List.chpl"
  listNode_BaseArr_chpl ret_chpl5 = NULL;
#line 117 "List.chpl"
  listNode_BaseArr_chpl ret_chpl6 = NULL;
#line 117 "List.chpl"
  object call_tmp_chpl16 = NULL;
#line 117 "List.chpl"
  object call_tmp_chpl17 = NULL;
#line 117 "List.chpl"
  chpl_bool call_tmp_chpl18;
#line 117 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl19 = NULL;
#line 117 "List.chpl"
  listNode_BaseArr_chpl ret_chpl7 = NULL;
#line 117 "List.chpl"
  listNode_BaseArr_chpl ret_chpl8 = NULL;
#line 117 "List.chpl"
  object call_tmp_chpl20 = NULL;
#line 117 "List.chpl"
  object call_tmp_chpl21 = NULL;
#line 117 "List.chpl"
  chpl_bool call_tmp_chpl22;
#line 117 "List.chpl"
  _ref_listNode_BaseArr call_tmp_chpl23 = NULL;
#line 117 "List.chpl"
  chpl_opaque call_tmp_chpl24;
#line 117 "List.chpl"
  _ref_int64_t call_tmp_chpl25 = NULL;
#line 118 "List.chpl"
  chpl_check_nil(this_chpl, INT64(118), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 118 "List.chpl"
  ret_chpl = (this_chpl)->first_chpl;
#line 118 "List.chpl"
  tmp_chpl = ret_chpl;
#line 119 "List.chpl"
  type_tmp_chpl = nil;
#line 119 "List.chpl"
  prev_chpl = type_tmp_chpl;
#line 120 "List.chpl"
  call_tmp_chpl = ((object)(ret_chpl));
#line 120 "List.chpl"
  call_tmp_chpl2 = (call_tmp_chpl != nil);
#line 120 "List.chpl"
  if (call_tmp_chpl2) /* ZLINE: 120 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 120 "List.chpl"
  {
#line 120 "List.chpl"
    tmp_chpl4 = ret_chpl;
#line 120 "List.chpl"
    chpl_check_nil(tmp_chpl4, INT64(120), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 120 "List.chpl"
    ret_chpl2 = (tmp_chpl4)->data_chpl;
#line 120 "List.chpl"
    call_tmp_chpl3 = ((object)(ret_chpl2));
#line 120 "List.chpl"
    call_tmp_chpl4 = ((object)(x_chpl));
#line 120 "List.chpl"
    call_tmp_chpl5 = (call_tmp_chpl3 != call_tmp_chpl4);
#line 120 "List.chpl"
    tmp_chpl3 = call_tmp_chpl5;
#line 120 "List.chpl"
  } else /* ZLINE: 120 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 120 "List.chpl"
  {
#line 120 "List.chpl"
    tmp_chpl3 = false;
#line 120 "List.chpl"
  }
#line 120 "List.chpl"
  tmp_chpl2 = tmp_chpl3;
#line 120 "List.chpl"
  while (tmp_chpl2) {
#line 121 "List.chpl"
    prev_chpl = tmp_chpl;
#line 122 "List.chpl"
    chpl_check_nil(tmp_chpl, INT64(122), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 122 "List.chpl"
    ret_chpl3 = (tmp_chpl)->next_chpl;
#line 122 "List.chpl"
    tmp_chpl = ret_chpl3;
#line 120 "List.chpl"
    call_tmp_chpl6 = ((object)(ret_chpl3));
#line 120 "List.chpl"
    call_tmp_chpl7 = (call_tmp_chpl6 != nil);
#line 120 "List.chpl"
    if (call_tmp_chpl7) /* ZLINE: 120 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 120 "List.chpl"
    {
#line 120 "List.chpl"
      tmp_chpl6 = ret_chpl3;
#line 120 "List.chpl"
      chpl_check_nil(tmp_chpl6, INT64(120), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 120 "List.chpl"
      ret_chpl4 = (tmp_chpl6)->data_chpl;
#line 120 "List.chpl"
      call_tmp_chpl8 = ((object)(ret_chpl4));
#line 120 "List.chpl"
      call_tmp_chpl9 = ((object)(x_chpl));
#line 120 "List.chpl"
      call_tmp_chpl10 = (call_tmp_chpl8 != call_tmp_chpl9);
#line 120 "List.chpl"
      tmp_chpl5 = call_tmp_chpl10;
#line 120 "List.chpl"
    } else /* ZLINE: 120 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 120 "List.chpl"
    {
#line 120 "List.chpl"
      tmp_chpl5 = false;
#line 120 "List.chpl"
    }
#line 120 "List.chpl"
    tmp_chpl2 = tmp_chpl5;
#line 120 "List.chpl"
  }
#line 124 "List.chpl"
  call_tmp_chpl11 = ((object)(tmp_chpl));
#line 124 "List.chpl"
  call_tmp_chpl12 = (call_tmp_chpl11 != nil);
#line 124 "List.chpl"
  if (call_tmp_chpl12) /* ZLINE: 125 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 124 "List.chpl"
  {
#line 125 "List.chpl"
    call_tmp_chpl13 = ((object)(prev_chpl));
#line 125 "List.chpl"
    call_tmp_chpl14 = (call_tmp_chpl13 != nil);
#line 125 "List.chpl"
    if (call_tmp_chpl14) /* ZLINE: 125 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 125 "List.chpl"
    {
#line 126 "List.chpl"
      chpl_check_nil(prev_chpl, INT64(126), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 126 "List.chpl"
      call_tmp_chpl15 = &((prev_chpl)->next_chpl);
#line 126 "List.chpl"
      chpl_check_nil(tmp_chpl, INT64(126), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 126 "List.chpl"
      ret_chpl5 = (tmp_chpl)->next_chpl;
#line 126 "List.chpl"
      *(call_tmp_chpl15) = ret_chpl5;
#line 126 "List.chpl"
    }
#line 127 "List.chpl"
    chpl_check_nil(this_chpl, INT64(127), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 127 "List.chpl"
    ret_chpl6 = (this_chpl)->first_chpl;
#line 127 "List.chpl"
    call_tmp_chpl16 = ((object)(ret_chpl6));
#line 127 "List.chpl"
    call_tmp_chpl17 = ((object)(tmp_chpl));
#line 127 "List.chpl"
    call_tmp_chpl18 = (call_tmp_chpl16 == call_tmp_chpl17);
#line 127 "List.chpl"
    if (call_tmp_chpl18) /* ZLINE: 127 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 127 "List.chpl"
    {
#line 128 "List.chpl"
      chpl_check_nil(this_chpl, INT64(128), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 128 "List.chpl"
      call_tmp_chpl19 = &((this_chpl)->first_chpl);
#line 128 "List.chpl"
      chpl_check_nil(tmp_chpl, INT64(128), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 128 "List.chpl"
      ret_chpl7 = (tmp_chpl)->next_chpl;
#line 128 "List.chpl"
      *(call_tmp_chpl19) = ret_chpl7;
#line 128 "List.chpl"
    }
#line 129 "List.chpl"
    chpl_check_nil(this_chpl, INT64(129), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 129 "List.chpl"
    ret_chpl8 = (this_chpl)->last_chpl;
#line 129 "List.chpl"
    call_tmp_chpl20 = ((object)(ret_chpl8));
#line 129 "List.chpl"
    call_tmp_chpl21 = ((object)(tmp_chpl));
#line 129 "List.chpl"
    call_tmp_chpl22 = (call_tmp_chpl20 == call_tmp_chpl21);
#line 129 "List.chpl"
    if (call_tmp_chpl22) /* ZLINE: 129 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl */
#line 129 "List.chpl"
    {
#line 130 "List.chpl"
      chpl_check_nil(this_chpl, INT64(130), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 130 "List.chpl"
      call_tmp_chpl23 = &((this_chpl)->last_chpl);
#line 130 "List.chpl"
      *(call_tmp_chpl23) = prev_chpl;
#line 130 "List.chpl"
    }
#line 131 "List.chpl"
    call_tmp_chpl24 = ((void*)(tmp_chpl));
#line 131 "List.chpl"
    chpl_here_free(call_tmp_chpl24, _ln_chpl, _fn_chpl);
#line 132 "List.chpl"
    chpl_check_nil(this_chpl, INT64(132), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/List.chpl");
#line 132 "List.chpl"
    call_tmp_chpl25 = &((this_chpl)->length_chpl);
#line 132 "List.chpl"
    *(call_tmp_chpl25) -= INT64(1);
#line 132 "List.chpl"
  }
#line 117 "List.chpl"
  return;
#line 117 "List.chpl"
}


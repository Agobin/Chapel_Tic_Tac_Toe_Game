/* gtk.chpl:1 */
static void chpl__init_gtk(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 1 "gtk.chpl"
  if (chpl__init_gtk_p) /* ZLINE: 1 ./gtk.chpl */
#line 1 "gtk.chpl"
  {
#line 1 "gtk.chpl"
    goto _exit_chpl__init_gtk_chpl;
#line 1 "gtk.chpl"
  }
#line 1 "gtk.chpl"
  modFormatStr_chpl = "%*s\n";
#line 1 "gtk.chpl"
  modStr_chpl = "gtk";
#line 1 "gtk.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(3), INT64(1), INT32(43));
#line 1 "gtk.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 1 "gtk.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 1 "gtk.chpl"
  chpl__init_gtk_p = UINT8(true);
#line 1 "gtk.chpl"
  {
#line 1 "gtk.chpl"
    chpl__init_gtk_types(INT64(1), INT32(43));
#line 1 "gtk.chpl"
  }
#line 1 "gtk.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 1 "gtk.chpl"
  _exit_chpl__init_gtk_chpl:;
#line 1 "gtk.chpl"
  return;
#line 1 "gtk.chpl"
}

#line 1 "gtk.chpl"
/* gtk.chpl:114 */
#line 1 "gtk.chpl"
static void gtk_init_chpl(DefaultRectangularArr_string_1_int64_t_F args_chpl) {
#line 1 "gtk.chpl"
  string local__str_literal_302_chpl;
#line 1 "gtk.chpl"
  string local__str_literal_974_chpl;
#line 1 "gtk.chpl"
  int32_t argc_chpl;
#line 1 "gtk.chpl"
  int32_t call_tmp_chpl;
#line 1 "gtk.chpl"
  c_string cStr_chpl;
#line 1 "gtk.chpl"
  c_string type_tmp_chpl;
#line 1 "gtk.chpl"
  _tuple_1_star_int64_t i_chpl;
#line 1 "gtk.chpl"
  _tuple_1_star_int64_t this_chpl;
#line 1 "gtk.chpl"
  DefaultRectangularArr_string_1_int64_t_F call_tmp_chpl2 = NULL;
#line 1 "gtk.chpl"
  DefaultRectangularArr_string_1_int64_t_F ret_chpl2 = NULL;
#line 1 "gtk.chpl"
  chpl_bool call_tmp_chpl3;
#line 1 "gtk.chpl"
  DefaultRectangularDom_1_int64_t_F coerce_tmp_chpl = NULL;
#line 1 "gtk.chpl"
  chpl_bool call_tmp_chpl4;
#line 1 "gtk.chpl"
  string call_tmp_chpl5;
#line 1 "gtk.chpl"
  string _autoCopy_tmp__chpl;
#line 1 "gtk.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl = NULL;
#line 1 "gtk.chpl"
  string call_tmp_chpl6;
#line 1 "gtk.chpl"
  string _autoCopy_tmp__chpl2;
#line 1 "gtk.chpl"
  _ref_string ret_to_arg_ref_tmp__chpl2 = NULL;
#line 1 "gtk.chpl"
  _ref_string _ref_tmp__chpl = NULL;
#line 1 "gtk.chpl"
  _ref_string _ref_tmp__chpl2 = NULL;
#line 1 "gtk.chpl"
  int64_t sum_chpl;
#line 1 "gtk.chpl"
  _ref__tuple_1_star_int64_t call_tmp_chpl7 = NULL;
#line 1 "gtk.chpl"
  int64_t coerce_tmp_chpl2;
#line 1 "gtk.chpl"
  int64_t coerce_tmp_chpl3;
#line 1 "gtk.chpl"
  int64_t call_tmp_chpl8;
#line 1 "gtk.chpl"
  _ddata_string coerce_tmp_chpl4 = NULL;
#line 1 "gtk.chpl"
  _ref_string call_tmp_chpl9 = NULL;
#line 1 "gtk.chpl"
  string coerce_tmp_chpl5;
#line 1 "gtk.chpl"
  _ref_c_string _ref_tmp__chpl3 = NULL;
#line 1 "gtk.chpl"
  int32_t coerce_tmp_chpl6;
#line 1 "gtk.chpl"
  chpl_bool call_tmp_chpl10;
#line 1 "gtk.chpl"
  c_ptr_uint8_t coerce_tmp_chpl7 = NULL;
#line 1 "gtk.chpl"
  c_string call_tmp_chpl11;
#line 1 "gtk.chpl"
  _ref_int32_t _ref_tmp__chpl4 = NULL;
#line 1 "gtk.chpl"
  _ref_c_string _ref_tmp__chpl5 = NULL;
#line 116 "gtk.chpl"
  local__str_literal_302_chpl = _str_literal_302;
#line 116 "gtk.chpl"
  local__str_literal_974_chpl = _str_literal_974;
#line 115 "gtk.chpl"
  call_tmp_chpl = ((int32_t)(INT64(1)));
#line 115 "gtk.chpl"
  argc_chpl = call_tmp_chpl;
#line 116 "gtk.chpl"
  type_tmp_chpl = "";
#line 116 "gtk.chpl"
  *(this_chpl + INT64(0)) = INT64(0);
#line 116 "gtk.chpl"
  *(i_chpl + INT64(0)) = *(this_chpl + INT64(0));
#line 116 "gtk.chpl"
  ret_chpl2 = args_chpl;
#line 116 "gtk.chpl"
  call_tmp_chpl2 = ret_chpl2;
#line 116 "gtk.chpl"
  chpl_check_nil(call_tmp_chpl2, INT64(116), INT64(43));
#line 116 "gtk.chpl"
  coerce_tmp_chpl = (call_tmp_chpl2)->dom;
#line 116 "gtk.chpl"
  chpl_check_nil(coerce_tmp_chpl, INT64(116), INT64(43));
#line 116 "gtk.chpl"
  call_tmp_chpl3 = dsiMember(coerce_tmp_chpl, &this_chpl, INT64(116), INT32(43));
#line 116 "gtk.chpl"
  call_tmp_chpl4 = (! call_tmp_chpl3);
#line 116 "gtk.chpl"
  if (call_tmp_chpl4) /* ZLINE: 116 ./gtk.chpl */
#line 116 "gtk.chpl"
  {
#line 116 "gtk.chpl"
    ret_to_arg_ref_tmp__chpl = &_autoCopy_tmp__chpl;
#line 116 "gtk.chpl"
    _stringify_index(&this_chpl, ret_to_arg_ref_tmp__chpl, INT64(116), INT32(43));
#line 116 "gtk.chpl"
    call_tmp_chpl5 = _autoCopy_tmp__chpl;
#line 116 "gtk.chpl"
    ret_to_arg_ref_tmp__chpl2 = &_autoCopy_tmp__chpl2;
#line 116 "gtk.chpl"
    chpl___PLUS_(&local__str_literal_974_chpl, &_autoCopy_tmp__chpl, ret_to_arg_ref_tmp__chpl2, INT64(116), INT32(43));
#line 116 "gtk.chpl"
    call_tmp_chpl6 = _autoCopy_tmp__chpl2;
#line 116 "gtk.chpl"
    halt(&_autoCopy_tmp__chpl2, INT64(116), INT32(43));
#line 116 "gtk.chpl"
    _ref_tmp__chpl = &call_tmp_chpl5;
#line 116 "gtk.chpl"
    chpl___TILDE_string(_ref_tmp__chpl, INT64(116), INT32(43));
#line 116 "gtk.chpl"
    _ref_tmp__chpl2 = &call_tmp_chpl6;
#line 116 "gtk.chpl"
    chpl___TILDE_string(_ref_tmp__chpl2, INT64(116), INT32(43));
#line 116 "gtk.chpl"
  }
#line 116 "gtk.chpl"
  sum_chpl = INT64(0);
#line 116 "gtk.chpl"
  chpl_check_nil(call_tmp_chpl2, INT64(116), INT64(43));
#line 116 "gtk.chpl"
  call_tmp_chpl7 = &((call_tmp_chpl2)->blk);
#line 116 "gtk.chpl"
  coerce_tmp_chpl2 = *(i_chpl + INT64(0));
#line 116 "gtk.chpl"
  coerce_tmp_chpl3 = *(*(call_tmp_chpl7) + INT64(0));
#line 116 "gtk.chpl"
  call_tmp_chpl8 = (coerce_tmp_chpl2 * coerce_tmp_chpl3);
#line 116 "gtk.chpl"
  sum_chpl += call_tmp_chpl8;
#line 116 "gtk.chpl"
  chpl_check_nil(call_tmp_chpl2, INT64(116), INT64(43));
#line 116 "gtk.chpl"
  coerce_tmp_chpl4 = (call_tmp_chpl2)->shiftedData;
#line 116 "gtk.chpl"
  call_tmp_chpl9 = (coerce_tmp_chpl4 + sum_chpl);
#line 116 "gtk.chpl"
  coerce_tmp_chpl5 = *(call_tmp_chpl9);
#line 116 "gtk.chpl"
  _ref_tmp__chpl3 = &type_tmp_chpl;
#line 116 "gtk.chpl"
  coerce_tmp_chpl6 = (&coerce_tmp_chpl5)->locale_id;
#line 116 "gtk.chpl"
  call_tmp_chpl10 = (coerce_tmp_chpl6 != chpl_nodeID);
#line 116 "gtk.chpl"
  if (call_tmp_chpl10) /* ZLINE: 116 ./gtk.chpl */
#line 116 "gtk.chpl"
  {
#line 116 "gtk.chpl"
    halt(&local__str_literal_302_chpl, INT64(116), INT32(43));
#line 116 "gtk.chpl"
  }
#line 116 "gtk.chpl"
  coerce_tmp_chpl7 = (&coerce_tmp_chpl5)->buff;
#line 116 "gtk.chpl"
  call_tmp_chpl11 = ((c_string)(coerce_tmp_chpl7));
#line 116 "gtk.chpl"
  *(_ref_tmp__chpl3) = call_tmp_chpl11;
#line 116 "gtk.chpl"
  cStr_chpl = type_tmp_chpl;
#line 117 "gtk.chpl"
  _ref_tmp__chpl4 = &argc_chpl;
#line 117 "gtk.chpl"
  _ref_tmp__chpl5 = &cStr_chpl;
#line 117 "gtk.chpl"
  chpl_init(_ref_tmp__chpl4, _ref_tmp__chpl5);
#line 114 "gtk.chpl"
  return;
#line 114 "gtk.chpl"
}


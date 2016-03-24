/* gtk.chpl:1 */
static void chpl__init_gtk(int64_t _ln_chpl, c_string _fn_chpl) {
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
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(3), INT64(1), "./gtk.chpl");
#line 1 "gtk.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 1 "gtk.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 1 "gtk.chpl"
  chpl__init_gtk_p = true;
#line 1 "gtk.chpl"
  {
#line 1 "gtk.chpl"
    chpl__init_gtk_types(INT64(1), "./gtk.chpl");
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
/* gtk.chpl:111 */
#line 1 "gtk.chpl"
static void gtk_init_chpl(DefaultRectangularArr_chpl_string_1_int64_t_F args_chpl) {
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
  DefaultRectangularArr_chpl_string_1_int64_t_F call_tmp_chpl2 = NULL;
#line 1 "gtk.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F ret_chpl2 = NULL;
#line 1 "gtk.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl3 = NULL;
#line 1 "gtk.chpl"
  chpl_bool call_tmp_chpl3;
#line 1 "gtk.chpl"
  chpl_bool call_tmp_chpl4;
#line 1 "gtk.chpl"
  chpl_string call_tmp_chpl5;
#line 1 "gtk.chpl"
  int64_t sum_chpl;
#line 1 "gtk.chpl"
  int64_t ret_x1_chpl;
#line 1 "gtk.chpl"
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
#line 1 "gtk.chpl"
  int64_t coerce_tmp_chpl;
#line 1 "gtk.chpl"
  int64_t call_tmp_chpl6;
#line 1 "gtk.chpl"
  _ddata_chpl_string ret_chpl4 = NULL;
#line 1 "gtk.chpl"
  _ddata_chpl_string coerce_tmp_chpl2 = NULL;
#line 1 "gtk.chpl"
  chpl_string ret_chpl5;
#line 1 "gtk.chpl"
  _ref_chpl_string call_tmp_chpl7 = NULL;
#line 1 "gtk.chpl"
  _ref_c_string _ref_tmp__chpl = NULL;
#line 1 "gtk.chpl"
  c_string call_tmp_chpl8;
#line 1 "gtk.chpl"
  _ref_int32_t _ref_tmp__chpl2 = NULL;
#line 1 "gtk.chpl"
  _ref_c_string _ref_tmp__chpl3 = NULL;
#line 112 "gtk.chpl"
  call_tmp_chpl = ((int32_t)(INT64(1)));
#line 112 "gtk.chpl"
  argc_chpl = call_tmp_chpl;
#line 113 "gtk.chpl"
  type_tmp_chpl = "";
#line 113 "gtk.chpl"
  *(this_chpl + INT64(0)) = INT64(0);
#line 113 "gtk.chpl"
  *(i_chpl + INT64(0)) = *(this_chpl + INT64(0));
#line 113 "gtk.chpl"
  ret_chpl2 = args_chpl;
#line 113 "gtk.chpl"
  call_tmp_chpl2 = ret_chpl2;
#line 113 "gtk.chpl"
  chpl_check_nil(call_tmp_chpl2, INT64(113), "./gtk.chpl");
#line 113 "gtk.chpl"
  ret_chpl3 = (call_tmp_chpl2)->dom;
#line 113 "gtk.chpl"
  chpl_check_nil(ret_chpl3, INT64(113), "./gtk.chpl");
#line 113 "gtk.chpl"
  call_tmp_chpl3 = dsiMember(ret_chpl3, &this_chpl, INT64(113), "./gtk.chpl");
#line 113 "gtk.chpl"
  call_tmp_chpl4 = (! call_tmp_chpl3);
#line 113 "gtk.chpl"
  if (call_tmp_chpl4) /* ZLINE: 113 ./gtk.chpl */
#line 113 "gtk.chpl"
  {
#line 113 "gtk.chpl"
    string_from_c_string(&call_tmp_chpl5, "array index out of bounds: ", INT64(0), INT64(0), INT64(113), "./gtk.chpl");
#line 113 "gtk.chpl"
    halt3(call_tmp_chpl5, &this_chpl, INT64(113), "./gtk.chpl");
#line 113 "gtk.chpl"
  }
#line 113 "gtk.chpl"
  sum_chpl = INT64(0);
#line 113 "gtk.chpl"
  chpl_check_nil(call_tmp_chpl2, INT64(113), "./gtk.chpl");
#line 113 "gtk.chpl"
  ret__chpl = &((call_tmp_chpl2)->blk);
#line 113 "gtk.chpl"
  ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 113 "gtk.chpl"
  coerce_tmp_chpl = *(i_chpl + INT64(0));
#line 113 "gtk.chpl"
  call_tmp_chpl6 = (coerce_tmp_chpl * ret_x1_chpl);
#line 113 "gtk.chpl"
  sum_chpl += call_tmp_chpl6;
#line 113 "gtk.chpl"
  chpl_check_nil(call_tmp_chpl2, INT64(113), "./gtk.chpl");
#line 113 "gtk.chpl"
  ret_chpl4 = (call_tmp_chpl2)->shiftedData;
#line 113 "gtk.chpl"
  coerce_tmp_chpl2 = ret_chpl4;
#line 113 "gtk.chpl"
  call_tmp_chpl7 = (coerce_tmp_chpl2 + sum_chpl);
#line 113 "gtk.chpl"
  ret_chpl5 = *(call_tmp_chpl7);
#line 113 "gtk.chpl"
  _ref_tmp__chpl = &type_tmp_chpl;
#line 113 "gtk.chpl"
  c_string_from_string(&call_tmp_chpl8, &ret_chpl5, INT64(113), "./gtk.chpl");
#line 113 "gtk.chpl"
  *(_ref_tmp__chpl) = call_tmp_chpl8;
#line 113 "gtk.chpl"
  cStr_chpl = type_tmp_chpl;
#line 114 "gtk.chpl"
  _ref_tmp__chpl2 = &argc_chpl;
#line 114 "gtk.chpl"
  _ref_tmp__chpl3 = &cStr_chpl;
#line 114 "gtk.chpl"
  chpl_init(_ref_tmp__chpl2, _ref_tmp__chpl3);
#line 111 "gtk.chpl"
  return;
#line 111 "gtk.chpl"
}


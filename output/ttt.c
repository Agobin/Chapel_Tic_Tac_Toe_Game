/* ttt.chpl:1 */
static void chpl__init_ttt(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  DefaultRectangularArr_int64_t_1_int64_t_F type_tmp_chpl = NULL;
  range_int64_t_bounded_F call_tmp_chpl;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp_chpl2 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl2 = NULL;
  chpl___RuntimeTypeInfo4 call_tmp_chpl3;
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp__chpl = NULL;
  _ref_DefaultRectangularArr_int64_t_1_int64_t_F ret_to_arg_ref_tmp__chpl3 = NULL;
  c_ptr_GtkWidget_chpl call_tmp_chpl4 = NULL;
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F type_tmp_chpl2 = NULL;
  range_int64_t_bounded_F call_tmp_chpl5;
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl4 = NULL;
  DefaultRectangularDom_1_int64_t_F call_tmp_chpl6 = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl5 = NULL;
  chpl___RuntimeTypeInfo5 call_tmp_chpl7;
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp__chpl2 = NULL;
  _ref_DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_to_arg_ref_tmp__chpl6 = NULL;
  c_ptr_GtkWidget_chpl call_tmp_chpl8 = NULL;
#line 1 "ttt.chpl"
  if (chpl__init_ttt_p) /* ZLINE: 1 ttt.chpl */
#line 1 "ttt.chpl"
  {
#line 1 "ttt.chpl"
    goto _exit_chpl__init_ttt_chpl;
#line 1 "ttt.chpl"
  }
#line 1 "ttt.chpl"
  modFormatStr_chpl = "%*s\n";
#line 1 "ttt.chpl"
  modStr_chpl = "ttt";
#line 1 "ttt.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(3), INT64(1), "ttt.chpl");
#line 1 "ttt.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 1 "ttt.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 1 "ttt.chpl"
  chpl__init_ttt_p = true;
#line 1 "ttt.chpl"
  {
#line 1 "ttt.chpl"
    chpl__init_gtk(INT64(1), "ttt.chpl");
#line 1 "ttt.chpl"
    chpl__init_FunctionSysbols(INT64(1), "ttt.chpl");
#line 1 "ttt.chpl"
  }
#line 3 "ttt.chpl"
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl;
#line 3 "ttt.chpl"
  chpl_build_bounded_range(INT64(1), INT64(9), ret_to_arg_ref_tmp__chpl, INT64(3), "ttt.chpl");
#line 3 "ttt.chpl"
  ret_to_arg_ref_tmp__chpl2 = &call_tmp_chpl2;
#line 3 "ttt.chpl"
  chpl__ensureDomainExpr2(&call_tmp_chpl, ret_to_arg_ref_tmp__chpl2, INT64(3), "ttt.chpl");
#line 3 "ttt.chpl"
  call_tmp_chpl3 = chpl__buildArrayRuntimeType5(call_tmp_chpl2, INT64(3), "ttt.chpl");
#line 3 "ttt.chpl"
  _runtime_type_tmp__chpl = (&call_tmp_chpl3)->dom;
#line 3 "ttt.chpl"
  ret_to_arg_ref_tmp__chpl3 = &type_tmp_chpl;
#line 3 "ttt.chpl"
  chpl__convertRuntimeTypeToValue4(_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl3, INT64(3), "ttt.chpl");
#line 3 "ttt.chpl"
  boardMatrix_chpl = type_tmp_chpl;
#line 3 "ttt.chpl"
  chpl__autoDestroy2(call_tmp_chpl2, INT64(3), "ttt.chpl");
#line 4 "ttt.chpl"
  call_tmp_chpl4 = ((c_ptr_GtkWidget_chpl)(nil));
#line 4 "ttt.chpl"
  output_chpl = call_tmp_chpl4;
#line 5 "ttt.chpl"
  playerTime_chpl = INT64(0);
#line 6 "ttt.chpl"
  ret_to_arg_ref_tmp__chpl4 = &call_tmp_chpl5;
#line 6 "ttt.chpl"
  chpl_build_bounded_range(INT64(1), INT64(9), ret_to_arg_ref_tmp__chpl4, INT64(6), "ttt.chpl");
#line 6 "ttt.chpl"
  ret_to_arg_ref_tmp__chpl5 = &call_tmp_chpl6;
#line 6 "ttt.chpl"
  chpl__ensureDomainExpr2(&call_tmp_chpl5, ret_to_arg_ref_tmp__chpl5, INT64(6), "ttt.chpl");
#line 6 "ttt.chpl"
  call_tmp_chpl7 = chpl__buildArrayRuntimeType3(call_tmp_chpl6, INT64(6), "ttt.chpl");
#line 6 "ttt.chpl"
  _runtime_type_tmp__chpl2 = (&call_tmp_chpl7)->dom;
#line 6 "ttt.chpl"
  ret_to_arg_ref_tmp__chpl6 = &type_tmp_chpl2;
#line 6 "ttt.chpl"
  chpl__convertRuntimeTypeToValue2(_runtime_type_tmp__chpl2, ret_to_arg_ref_tmp__chpl6, INT64(6), "ttt.chpl");
#line 6 "ttt.chpl"
  button_array_chpl = type_tmp_chpl2;
#line 6 "ttt.chpl"
  chpl__autoDestroy2(call_tmp_chpl6, INT64(6), "ttt.chpl");
#line 7 "ttt.chpl"
  call_tmp_chpl8 = ((c_ptr_GtkWidget_chpl)(nil));
#line 7 "ttt.chpl"
  board_chpl = call_tmp_chpl8;
#line 8 "ttt.chpl"
  gameOver_chpl = false;
#line 1 "ttt.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 1 "ttt.chpl"
  _exit_chpl__init_ttt_chpl:;
#line 1 "ttt.chpl"
  return;
#line 1 "ttt.chpl"
}

#line 1 "ttt.chpl"
/* ChapelBase.chpl:23 */
#line 1 "ttt.chpl"
static void chpl__autoDestroyGlobals(void) {
#line 1 "ttt.chpl"
  channel_T_dynamic_T_chpl local_stderr_chpl;
#line 1 "ttt.chpl"
  channel_T_dynamic_T_chpl local_stdout_chpl;
#line 1 "ttt.chpl"
  channel_F_dynamic_T_chpl local_stdin_chpl;
#line 1 "ttt.chpl"
  string_rec_chpl local_s_memLeaksLog_chpl;
#line 1 "ttt.chpl"
  string_rec_chpl local_s_memLog_chpl;
#line 1 "ttt.chpl"
  string_rec_chpl local_s_memLeaksByDesc_chpl;
#line 1 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F local_LocaleSpace_chpl = NULL;
#line 1 "ttt.chpl"
  DefaultRectangularArr_locale_1_int64_t_F local_chpl_emptyLocales_chpl = NULL;
#line 1 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F local_chpl_emptyLocaleSpace_chpl = NULL;
#line 1 "ttt.chpl"
  _ref_string_rec _ref_tmp__chpl = NULL;
#line 1 "ttt.chpl"
  _ref_string_rec _ref_tmp__chpl2 = NULL;
#line 1 "ttt.chpl"
  _ref_string_rec _ref_tmp__chpl3 = NULL;
#line 1 "ttt.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl4 = NULL;
#line 1 "ttt.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl5 = NULL;
#line 1 "ttt.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl6 = NULL;
#line 4495 "IO.chpl"
  local_stderr_chpl = stderr_chpl;
#line 4493 "IO.chpl"
  local_stdout_chpl = stdout_chpl;
#line 4491 "IO.chpl"
  local_stdin_chpl = stdin_chpl;
#line 62 "MemTracking.chpl"
  local_s_memLeaksLog_chpl = s_memLeaksLog;
#line 61 "MemTracking.chpl"
  local_s_memLog_chpl = s_memLog;
#line 60 "MemTracking.chpl"
  local_s_memLeaksByDesc_chpl = s_memLeaksByDesc;
#line 55 "LocalesArray.chpl"
  local_LocaleSpace_chpl = LocaleSpace;
#line 87 "LocaleModel.chpl"
  local_chpl_emptyLocales_chpl = chpl_emptyLocales;
#line 86 "LocaleModel.chpl"
  local_chpl_emptyLocaleSpace_chpl = chpl_emptyLocaleSpace;
#line 86 "LocaleModel.chpl"
  chpl__autoDestroy2(local_chpl_emptyLocaleSpace_chpl, INT64(86), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 87 "LocaleModel.chpl"
  chpl__autoDestroy6(local_chpl_emptyLocales_chpl, INT64(87), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 75 "DefaultRectangular.chpl"
  chpl__autoDestroy(defaultDist, INT64(75), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 51 "LocalesArray.chpl"
  chpl__autoDestroy6(Locales, INT64(51), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/LocalesArray.chpl");
#line 55 "LocalesArray.chpl"
  chpl__autoDestroy2(local_LocaleSpace_chpl, INT64(55), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/LocalesArray.chpl");
#line 60 "MemTracking.chpl"
  _ref_tmp__chpl = &local_s_memLeaksByDesc_chpl;
#line 60 "MemTracking.chpl"
  chpl___TILDE_string_rec(_ref_tmp__chpl, INT64(60), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl");
#line 61 "MemTracking.chpl"
  _ref_tmp__chpl2 = &local_s_memLog_chpl;
#line 61 "MemTracking.chpl"
  chpl___TILDE_string_rec(_ref_tmp__chpl2, INT64(61), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl");
#line 62 "MemTracking.chpl"
  _ref_tmp__chpl3 = &local_s_memLeaksLog_chpl;
#line 62 "MemTracking.chpl"
  chpl___TILDE_string_rec(_ref_tmp__chpl3, INT64(62), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/MemTracking.chpl");
#line 3 "ttt.chpl"
  chpl__autoDestroy3(boardMatrix_chpl, INT64(3), "ttt.chpl");
#line 6 "ttt.chpl"
  chpl__autoDestroy4(button_array_chpl, INT64(6), "ttt.chpl");
#line 4491 "IO.chpl"
  _ref_tmp__chpl4 = &local_stdin_chpl;
#line 4491 "IO.chpl"
  chpl___TILDE_channel(_ref_tmp__chpl4, INT64(4491), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 4493 "IO.chpl"
  _ref_tmp__chpl5 = &local_stdout_chpl;
#line 4493 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl5, INT64(4493), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 4495 "IO.chpl"
  _ref_tmp__chpl6 = &local_stderr_chpl;
#line 4495 "IO.chpl"
  chpl___TILDE_channel2(_ref_tmp__chpl6, INT64(4495), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/IO.chpl");
#line 23 "ChapelBase.chpl"
  return;
#line 23 "ChapelBase.chpl"
}

#line 23 "ChapelBase.chpl"
/* ttt.chpl:89 */
#line 23 "ChapelBase.chpl"
static void chpl_user_main(DefaultRectangularArr_chpl_string_1_int64_t_F args_chpl) {
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl window_chpl = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl call_tmp_chpl = NULL;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl2;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl3;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWindow_chpl call_tmp_chpl4 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl call_tmp_chpl5 = NULL;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl6;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl7;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl resetBtn_chpl = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl call_tmp_chpl8 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl stopBtn_chpl = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl call_tmp_chpl9 = NULL;
#line 23 "ChapelBase.chpl"
  GCallback call_tmp_chpl10;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl call_tmp_chpl11 = NULL;
#line 23 "ChapelBase.chpl"
  int64_t counter_chpl;
#line 23 "ChapelBase.chpl"
  int64_t one_chpl;
#line 23 "ChapelBase.chpl"
  int64_t two_chpl;
#line 23 "ChapelBase.chpl"
  int64_t _ic__F1_high_chpl;
#line 23 "ChapelBase.chpl"
  int64_t i_chpl;
#line 23 "ChapelBase.chpl"
  int64_t i_chpl2;
#line 23 "ChapelBase.chpl"
  int64_t _ic__F1_high_chpl2;
#line 23 "ChapelBase.chpl"
  int64_t i_chpl3;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t i_chpl4;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t this_chpl;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp_chpl12 = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_chpl = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl2 = NULL;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl13;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl14;
#line 23 "ChapelBase.chpl"
  chpl_string call_tmp_chpl15;
#line 23 "ChapelBase.chpl"
  int64_t sum_chpl;
#line 23 "ChapelBase.chpl"
  int64_t ret_x1_chpl;
#line 23 "ChapelBase.chpl"
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
#line 23 "ChapelBase.chpl"
  int64_t coerce_tmp_chpl;
#line 23 "ChapelBase.chpl"
  int64_t call_tmp_chpl16;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget ret_chpl3 = NULL;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp_chpl2 = NULL;
#line 23 "ChapelBase.chpl"
  _ref_c_ptr_GtkWidget call_tmp_chpl17 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl call_tmp_chpl18 = NULL;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl19;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t i_chpl5;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t this_chpl2;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp_chpl20 = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_chpl4 = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl5 = NULL;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl21;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl22;
#line 23 "ChapelBase.chpl"
  chpl_string call_tmp_chpl23;
#line 23 "ChapelBase.chpl"
  int64_t sum_chpl2;
#line 23 "ChapelBase.chpl"
  int64_t ret_x1_chpl2;
#line 23 "ChapelBase.chpl"
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
#line 23 "ChapelBase.chpl"
  int64_t coerce_tmp_chpl3;
#line 23 "ChapelBase.chpl"
  int64_t call_tmp_chpl24;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget ret_chpl6 = NULL;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp_chpl4 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl ret_chpl7 = NULL;
#line 23 "ChapelBase.chpl"
  _ref_c_ptr_GtkWidget call_tmp_chpl25 = NULL;
#line 23 "ChapelBase.chpl"
  GCallback call_tmp_chpl26;
#line 23 "ChapelBase.chpl"
  _ref_int64_t _ref_tmp__chpl = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_int64_t_chpl call_tmp_chpl27 = NULL;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl28;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t i_chpl6;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t this_chpl3;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp_chpl29 = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_chpl8 = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl9 = NULL;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl30;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl31;
#line 23 "ChapelBase.chpl"
  chpl_string call_tmp_chpl32;
#line 23 "ChapelBase.chpl"
  int64_t sum_chpl3;
#line 23 "ChapelBase.chpl"
  int64_t ret_x1_chpl3;
#line 23 "ChapelBase.chpl"
  _ref__tuple_1_star_int64_t ret__chpl3 = NULL;
#line 23 "ChapelBase.chpl"
  int64_t coerce_tmp_chpl5;
#line 23 "ChapelBase.chpl"
  int64_t call_tmp_chpl33;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget ret_chpl10 = NULL;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp_chpl6 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl ret_chpl11 = NULL;
#line 23 "ChapelBase.chpl"
  _ref_c_ptr_GtkWidget call_tmp_chpl34 = NULL;
#line 23 "ChapelBase.chpl"
  GCallback call_tmp_chpl35;
#line 23 "ChapelBase.chpl"
  _ref_int64_t _ref_tmp__chpl2 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_int64_t_chpl call_tmp_chpl36 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkTable_chpl call_tmp_chpl37 = NULL;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t i_chpl7;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t this_chpl4;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp_chpl38 = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_chpl12 = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl13 = NULL;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl39;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl40;
#line 23 "ChapelBase.chpl"
  chpl_string call_tmp_chpl41;
#line 23 "ChapelBase.chpl"
  int64_t sum_chpl4;
#line 23 "ChapelBase.chpl"
  int64_t ret_x1_chpl4;
#line 23 "ChapelBase.chpl"
  _ref__tuple_1_star_int64_t ret__chpl4 = NULL;
#line 23 "ChapelBase.chpl"
  int64_t coerce_tmp_chpl7;
#line 23 "ChapelBase.chpl"
  int64_t call_tmp_chpl42;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget ret_chpl14 = NULL;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp_chpl8 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl ret_chpl15 = NULL;
#line 23 "ChapelBase.chpl"
  _ref_c_ptr_GtkWidget call_tmp_chpl43 = NULL;
#line 23 "ChapelBase.chpl"
  int64_t call_tmp_chpl44;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl45;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl46;
#line 23 "ChapelBase.chpl"
  int64_t call_tmp_chpl47;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl48;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl49;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkTable_chpl call_tmp_chpl50 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkTable_chpl call_tmp_chpl51 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkTable_chpl call_tmp_chpl52 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkContainer_chpl call_tmp_chpl53 = NULL;
#line 23 "ChapelBase.chpl"
  _ref_c_ptr_GtkWidget _ref_tmp__chpl3 = NULL;
#line 94 "ttt.chpl"
  gtk_init_chpl(args_chpl);
#line 96 "ttt.chpl"
  call_tmp_chpl2 = ((int32_t)(INT64(600)));
#line 96 "ttt.chpl"
  call_tmp_chpl3 = ((int32_t)(INT64(500)));
#line 96 "ttt.chpl"
  call_tmp_chpl = chpl_window_new("Tic Tac Toe Game", call_tmp_chpl2, call_tmp_chpl3);
#line 96 "ttt.chpl"
  window_chpl = call_tmp_chpl;
#line 97 "ttt.chpl"
  call_tmp_chpl4 = GTK_WINDOW(call_tmp_chpl);
#line 97 "ttt.chpl"
  gtk_window_set_resizable(call_tmp_chpl4, false);
#line 100 "ttt.chpl"
  call_tmp_chpl6 = ((int32_t)(INT64(5)));
#line 100 "ttt.chpl"
  call_tmp_chpl7 = ((int32_t)(INT64(3)));
#line 100 "ttt.chpl"
  call_tmp_chpl5 = gtk_table_new(call_tmp_chpl6, call_tmp_chpl7, true);
#line 100 "ttt.chpl"
  board_chpl = call_tmp_chpl5;
#line 103 "ttt.chpl"
  call_tmp_chpl8 = gtk_button_new_with_mnemonic("Reset game");
#line 103 "ttt.chpl"
  resetBtn_chpl = call_tmp_chpl8;
#line 104 "ttt.chpl"
  call_tmp_chpl9 = gtk_button_new_with_mnemonic("Quit game");
#line 104 "ttt.chpl"
  stopBtn_chpl = call_tmp_chpl9;
#line 108 "ttt.chpl"
  call_tmp_chpl10 = G_CALLBACK(gtk_widget_destroy);
#line 108 "ttt.chpl"
  g_signal_connect_swapped(call_tmp_chpl9, "clicked", call_tmp_chpl10, call_tmp_chpl);
#line 111 "ttt.chpl"
  call_tmp_chpl11 = gtk_label_new("Player one start play");
#line 111 "ttt.chpl"
  output_chpl = call_tmp_chpl11;
#line 114 "ttt.chpl"
  counter_chpl = INT64(1);
#line 116 "ttt.chpl"
  one_chpl = INT64(1);
#line 116 "ttt.chpl"
  two_chpl = INT64(2);
#line 117 "ttt.chpl"
  _ic__F1_high_chpl = INT64(3);
#line 117 "ttt.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(3), INT64(1), INT64(1), INT64(3), true, INT64(117), "ttt.chpl");
#line 118 "ttt.chpl"
  _ic__F1_high_chpl2 = INT64(3);
#line 117 "ttt.chpl"
  for (i_chpl = INT64(1); ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
#line 117 "ttt.chpl"
    i_chpl2 = i_chpl;
#line 118 "ttt.chpl"
    chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(3), INT64(1), INT64(1), INT64(3), true, INT64(118), "ttt.chpl");
#line 128 "ttt.chpl"
    call_tmp_chpl44 = (i_chpl2 - INT64(1));
#line 118 "ttt.chpl"
    for (i_chpl3 = INT64(1); ((i_chpl3 <= _ic__F1_high_chpl2)); i_chpl3 += INT64(1)) {
#line 119 "ttt.chpl"
      *(this_chpl + INT64(0)) = counter_chpl;
#line 119 "ttt.chpl"
      *(i_chpl4 + INT64(0)) = *(this_chpl + INT64(0));
#line 119 "ttt.chpl"
      ret_chpl = button_array_chpl;
#line 119 "ttt.chpl"
      call_tmp_chpl12 = ret_chpl;
#line 119 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl12, INT64(119), "ttt.chpl");
#line 119 "ttt.chpl"
      ret_chpl2 = (call_tmp_chpl12)->dom;
#line 119 "ttt.chpl"
      chpl_check_nil(ret_chpl2, INT64(119), "ttt.chpl");
#line 119 "ttt.chpl"
      call_tmp_chpl13 = dsiMember(ret_chpl2, &this_chpl, INT64(119), "ttt.chpl");
#line 119 "ttt.chpl"
      call_tmp_chpl14 = (! call_tmp_chpl13);
#line 119 "ttt.chpl"
      if (call_tmp_chpl14) /* ZLINE: 119 ttt.chpl */
#line 119 "ttt.chpl"
      {
#line 119 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl15, "array index out of bounds: ", INT64(0), INT64(0), INT64(119), "ttt.chpl");
#line 119 "ttt.chpl"
        halt2(call_tmp_chpl15, &this_chpl, INT64(119), "ttt.chpl");
#line 119 "ttt.chpl"
      }
#line 119 "ttt.chpl"
      sum_chpl = INT64(0);
#line 119 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl12, INT64(119), "ttt.chpl");
#line 119 "ttt.chpl"
      ret__chpl = &((call_tmp_chpl12)->blk);
#line 119 "ttt.chpl"
      ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 119 "ttt.chpl"
      coerce_tmp_chpl = *(i_chpl4 + INT64(0));
#line 119 "ttt.chpl"
      call_tmp_chpl16 = (coerce_tmp_chpl * ret_x1_chpl);
#line 119 "ttt.chpl"
      sum_chpl += call_tmp_chpl16;
#line 119 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl12, INT64(119), "ttt.chpl");
#line 119 "ttt.chpl"
      ret_chpl3 = (call_tmp_chpl12)->shiftedData;
#line 119 "ttt.chpl"
      coerce_tmp_chpl2 = ret_chpl3;
#line 119 "ttt.chpl"
      call_tmp_chpl17 = (coerce_tmp_chpl2 + sum_chpl);
#line 119 "ttt.chpl"
      call_tmp_chpl18 = gtk_button_new_with_label(" ");
#line 119 "ttt.chpl"
      *(call_tmp_chpl17) = call_tmp_chpl18;
#line 121 "ttt.chpl"
      call_tmp_chpl19 = (counter_chpl == INT64(1));
#line 121 "ttt.chpl"
      if (call_tmp_chpl19) /* ZLINE: 122 ttt.chpl */
#line 121 "ttt.chpl"
      {
#line 123 "ttt.chpl"
        *(this_chpl2 + INT64(0)) = counter_chpl;
#line 123 "ttt.chpl"
        *(i_chpl5 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 123 "ttt.chpl"
        ret_chpl4 = button_array_chpl;
#line 123 "ttt.chpl"
        call_tmp_chpl20 = ret_chpl4;
#line 123 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl20, INT64(123), "ttt.chpl");
#line 123 "ttt.chpl"
        ret_chpl5 = (call_tmp_chpl20)->dom;
#line 123 "ttt.chpl"
        chpl_check_nil(ret_chpl5, INT64(123), "ttt.chpl");
#line 123 "ttt.chpl"
        call_tmp_chpl21 = dsiMember(ret_chpl5, &this_chpl2, INT64(123), "ttt.chpl");
#line 123 "ttt.chpl"
        call_tmp_chpl22 = (! call_tmp_chpl21);
#line 123 "ttt.chpl"
        if (call_tmp_chpl22) /* ZLINE: 123 ttt.chpl */
#line 123 "ttt.chpl"
        {
#line 123 "ttt.chpl"
          string_from_c_string(&call_tmp_chpl23, "array index out of bounds: ", INT64(0), INT64(0), INT64(123), "ttt.chpl");
#line 123 "ttt.chpl"
          halt2(call_tmp_chpl23, &this_chpl2, INT64(123), "ttt.chpl");
#line 123 "ttt.chpl"
        }
#line 123 "ttt.chpl"
        sum_chpl2 = INT64(0);
#line 123 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl20, INT64(123), "ttt.chpl");
#line 123 "ttt.chpl"
        ret__chpl2 = &((call_tmp_chpl20)->blk);
#line 123 "ttt.chpl"
        ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 123 "ttt.chpl"
        coerce_tmp_chpl3 = *(i_chpl5 + INT64(0));
#line 123 "ttt.chpl"
        call_tmp_chpl24 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 123 "ttt.chpl"
        sum_chpl2 += call_tmp_chpl24;
#line 123 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl20, INT64(123), "ttt.chpl");
#line 123 "ttt.chpl"
        ret_chpl6 = (call_tmp_chpl20)->shiftedData;
#line 123 "ttt.chpl"
        coerce_tmp_chpl4 = ret_chpl6;
#line 123 "ttt.chpl"
        call_tmp_chpl25 = (coerce_tmp_chpl4 + sum_chpl2);
#line 123 "ttt.chpl"
        ret_chpl7 = *(call_tmp_chpl25);
#line 123 "ttt.chpl"
        call_tmp_chpl26 = G_CALLBACK(record_move);
#line 123 "ttt.chpl"
        _ref_tmp__chpl = &one_chpl;
#line 123 "ttt.chpl"
        call_tmp_chpl27 = c_pointer_return(_ref_tmp__chpl);
#line 123 "ttt.chpl"
        g_signal_connect(ret_chpl7, "clicked", call_tmp_chpl26, call_tmp_chpl27);
#line 123 "ttt.chpl"
      } else /* ZLINE: 121 ttt.chpl */
#line 123 "ttt.chpl"
      {
#line 121 "ttt.chpl"
        call_tmp_chpl28 = (counter_chpl == INT64(2));
#line 121 "ttt.chpl"
        if (call_tmp_chpl28) /* ZLINE: 124 ttt.chpl */
#line 121 "ttt.chpl"
        {
#line 125 "ttt.chpl"
          *(this_chpl3 + INT64(0)) = counter_chpl;
#line 125 "ttt.chpl"
          *(i_chpl6 + INT64(0)) = *(this_chpl3 + INT64(0));
#line 125 "ttt.chpl"
          ret_chpl8 = button_array_chpl;
#line 125 "ttt.chpl"
          call_tmp_chpl29 = ret_chpl8;
#line 125 "ttt.chpl"
          chpl_check_nil(call_tmp_chpl29, INT64(125), "ttt.chpl");
#line 125 "ttt.chpl"
          ret_chpl9 = (call_tmp_chpl29)->dom;
#line 125 "ttt.chpl"
          chpl_check_nil(ret_chpl9, INT64(125), "ttt.chpl");
#line 125 "ttt.chpl"
          call_tmp_chpl30 = dsiMember(ret_chpl9, &this_chpl3, INT64(125), "ttt.chpl");
#line 125 "ttt.chpl"
          call_tmp_chpl31 = (! call_tmp_chpl30);
#line 125 "ttt.chpl"
          if (call_tmp_chpl31) /* ZLINE: 125 ttt.chpl */
#line 125 "ttt.chpl"
          {
#line 125 "ttt.chpl"
            string_from_c_string(&call_tmp_chpl32, "array index out of bounds: ", INT64(0), INT64(0), INT64(125), "ttt.chpl");
#line 125 "ttt.chpl"
            halt2(call_tmp_chpl32, &this_chpl3, INT64(125), "ttt.chpl");
#line 125 "ttt.chpl"
          }
#line 125 "ttt.chpl"
          sum_chpl3 = INT64(0);
#line 125 "ttt.chpl"
          chpl_check_nil(call_tmp_chpl29, INT64(125), "ttt.chpl");
#line 125 "ttt.chpl"
          ret__chpl3 = &((call_tmp_chpl29)->blk);
#line 125 "ttt.chpl"
          ret_x1_chpl3 = *(*(ret__chpl3) + INT64(0));
#line 125 "ttt.chpl"
          coerce_tmp_chpl5 = *(i_chpl6 + INT64(0));
#line 125 "ttt.chpl"
          call_tmp_chpl33 = (coerce_tmp_chpl5 * ret_x1_chpl3);
#line 125 "ttt.chpl"
          sum_chpl3 += call_tmp_chpl33;
#line 125 "ttt.chpl"
          chpl_check_nil(call_tmp_chpl29, INT64(125), "ttt.chpl");
#line 125 "ttt.chpl"
          ret_chpl10 = (call_tmp_chpl29)->shiftedData;
#line 125 "ttt.chpl"
          coerce_tmp_chpl6 = ret_chpl10;
#line 125 "ttt.chpl"
          call_tmp_chpl34 = (coerce_tmp_chpl6 + sum_chpl3);
#line 125 "ttt.chpl"
          ret_chpl11 = *(call_tmp_chpl34);
#line 125 "ttt.chpl"
          call_tmp_chpl35 = G_CALLBACK(record_move);
#line 125 "ttt.chpl"
          _ref_tmp__chpl2 = &two_chpl;
#line 125 "ttt.chpl"
          call_tmp_chpl36 = c_pointer_return(_ref_tmp__chpl2);
#line 125 "ttt.chpl"
          g_signal_connect(ret_chpl11, "clicked", call_tmp_chpl35, call_tmp_chpl36);
#line 125 "ttt.chpl"
        }
#line 125 "ttt.chpl"
      }
#line 128 "ttt.chpl"
      call_tmp_chpl37 = GTK_TABLE(board_chpl);
#line 128 "ttt.chpl"
      *(this_chpl4 + INT64(0)) = counter_chpl;
#line 128 "ttt.chpl"
      *(i_chpl7 + INT64(0)) = *(this_chpl4 + INT64(0));
#line 128 "ttt.chpl"
      ret_chpl12 = button_array_chpl;
#line 128 "ttt.chpl"
      call_tmp_chpl38 = ret_chpl12;
#line 128 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl38, INT64(128), "ttt.chpl");
#line 128 "ttt.chpl"
      ret_chpl13 = (call_tmp_chpl38)->dom;
#line 128 "ttt.chpl"
      chpl_check_nil(ret_chpl13, INT64(128), "ttt.chpl");
#line 128 "ttt.chpl"
      call_tmp_chpl39 = dsiMember(ret_chpl13, &this_chpl4, INT64(128), "ttt.chpl");
#line 128 "ttt.chpl"
      call_tmp_chpl40 = (! call_tmp_chpl39);
#line 128 "ttt.chpl"
      if (call_tmp_chpl40) /* ZLINE: 128 ttt.chpl */
#line 128 "ttt.chpl"
      {
#line 128 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl41, "array index out of bounds: ", INT64(0), INT64(0), INT64(128), "ttt.chpl");
#line 128 "ttt.chpl"
        halt2(call_tmp_chpl41, &this_chpl4, INT64(128), "ttt.chpl");
#line 128 "ttt.chpl"
      }
#line 128 "ttt.chpl"
      sum_chpl4 = INT64(0);
#line 128 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl38, INT64(128), "ttt.chpl");
#line 128 "ttt.chpl"
      ret__chpl4 = &((call_tmp_chpl38)->blk);
#line 128 "ttt.chpl"
      ret_x1_chpl4 = *(*(ret__chpl4) + INT64(0));
#line 128 "ttt.chpl"
      coerce_tmp_chpl7 = *(i_chpl7 + INT64(0));
#line 128 "ttt.chpl"
      call_tmp_chpl42 = (coerce_tmp_chpl7 * ret_x1_chpl4);
#line 128 "ttt.chpl"
      sum_chpl4 += call_tmp_chpl42;
#line 128 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl38, INT64(128), "ttt.chpl");
#line 128 "ttt.chpl"
      ret_chpl14 = (call_tmp_chpl38)->shiftedData;
#line 128 "ttt.chpl"
      coerce_tmp_chpl8 = ret_chpl14;
#line 128 "ttt.chpl"
      call_tmp_chpl43 = (coerce_tmp_chpl8 + sum_chpl4);
#line 128 "ttt.chpl"
      ret_chpl15 = *(call_tmp_chpl43);
#line 128 "ttt.chpl"
      call_tmp_chpl45 = ((int32_t)(call_tmp_chpl44));
#line 128 "ttt.chpl"
      call_tmp_chpl46 = ((int32_t)(i_chpl2));
#line 128 "ttt.chpl"
      call_tmp_chpl47 = (i_chpl3 - INT64(1));
#line 128 "ttt.chpl"
      call_tmp_chpl48 = ((int32_t)(call_tmp_chpl47));
#line 128 "ttt.chpl"
      call_tmp_chpl49 = ((int32_t)(i_chpl3));
#line 128 "ttt.chpl"
      gtk_table_attach_defaults(call_tmp_chpl37, ret_chpl15, call_tmp_chpl45, call_tmp_chpl46, call_tmp_chpl48, call_tmp_chpl49);
#line 129 "ttt.chpl"
      counter_chpl += INT64(1);
#line 129 "ttt.chpl"
    }
#line 129 "ttt.chpl"
  }
#line 134 "ttt.chpl"
  call_tmp_chpl50 = GTK_TABLE(board_chpl);
#line 134 "ttt.chpl"
  gtk_table_attach_defaults(call_tmp_chpl50, output_chpl, INT32(0), INT32(3), INT32(3), INT32(4));
#line 135 "ttt.chpl"
  call_tmp_chpl51 = GTK_TABLE(board_chpl);
#line 135 "ttt.chpl"
  gtk_table_attach_defaults(call_tmp_chpl51, resetBtn_chpl, INT32(0), INT32(1), INT32(4), INT32(5));
#line 136 "ttt.chpl"
  call_tmp_chpl52 = GTK_TABLE(board_chpl);
#line 136 "ttt.chpl"
  gtk_table_attach_defaults(call_tmp_chpl52, stopBtn_chpl, INT32(2), INT32(3), INT32(4), INT32(5));
#line 139 "ttt.chpl"
  call_tmp_chpl53 = GTK_CONTAINER(window_chpl);
#line 139 "ttt.chpl"
  gtk_container_add(call_tmp_chpl53, board_chpl);
#line 142 "ttt.chpl"
  _ref_tmp__chpl3 = &window_chpl;
#line 142 "ttt.chpl"
  link_close_signal(_ref_tmp__chpl3);
#line 143 "ttt.chpl"
  gtk_widget_show_all(window_chpl);
#line 145 "ttt.chpl"
  gtk_main();
#line 89 "ttt.chpl"
  return;
#line 89 "ttt.chpl"
}

#line 89 "ttt.chpl"
/* ttt.chpl:89 */
#line 89 "ttt.chpl"
int64_t chpl_gen_main(chpl_main_argument* const _arg) {
#line 89 "ttt.chpl"
  chpl___EndCount_atomic_int64_int64_t this_chpl = NULL;
#line 89 "ttt.chpl"
  int64_t call_tmp_chpl;
#line 89 "ttt.chpl"
  chpl_opaque cast_tmp_chpl;
#line 89 "ttt.chpl"
  atomic_int64 _init_class_tmp__chpl;
#line 89 "ttt.chpl"
  atomic_int64 this_chpl2;
#line 89 "ttt.chpl"
  atomic_int_least64_t ret_chpl;
#line 89 "ttt.chpl"
  atomic_int_least64_t type_tmp_chpl;
#line 89 "ttt.chpl"
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
#line 89 "ttt.chpl"
  atomic_int64 wrap_call_tmp_chpl;
#line 89 "ttt.chpl"
  chpl_task_list_p ret_chpl2;
#line 89 "ttt.chpl"
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl2 = NULL;
#line 89 "ttt.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F _main_args_chpl = NULL;
#line 89 "ttt.chpl"
  call_tmp_chpl = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
#line 89 "ttt.chpl"
  cast_tmp_chpl = chpl_here_alloc(call_tmp_chpl, INT16(1), INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  this_chpl = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl));
#line 89 "ttt.chpl"
  ((object)(this_chpl))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
#line 89 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  (this_chpl)->i = _init_class_tmp__chpl;
#line 89 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  (this_chpl)->taskCnt = INT64(0);
#line 89 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  (this_chpl)->taskList = NULL;
#line 89 "ttt.chpl"
  ret_chpl = type_tmp_chpl;
#line 89 "ttt.chpl"
  _ref_tmp__chpl = &ret_chpl;
#line 89 "ttt.chpl"
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
#line 89 "ttt.chpl"
  (&this_chpl2)->_v = ret_chpl;
#line 89 "ttt.chpl"
  wrap_call_tmp_chpl = _construct_atomic_int64(ret_chpl, &this_chpl2, INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  (this_chpl)->i = wrap_call_tmp_chpl;
#line 89 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  (this_chpl)->taskCnt = INT64(0);
#line 89 "ttt.chpl"
  ret_chpl2 = NULL;
#line 89 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  (this_chpl)->taskList = ret_chpl2;
#line 89 "ttt.chpl"
  wrap_call_tmp_chpl2 = _construct__EndCount(&wrap_call_tmp_chpl, INT64(0), ret_chpl2, this_chpl, INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  chpl_rt_preUserCodeHook();
#line 89 "ttt.chpl"
  chpl__init_ttt(INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  _main_args_chpl = chpl_convert_args(_arg, INT64(89), "ttt.chpl");
#line 89 "ttt.chpl"
  chpl_user_main(_main_args_chpl);
#line 89 "ttt.chpl"
  chpl_rt_postUserCodeHook();
#line 89 "ttt.chpl"
  _waitEndCount2(wrap_call_tmp_chpl2, INT64(89), "ttt.chpl");
#line 23 "ChapelBase.chpl"
  chpl__autoDestroyGlobals();
#line 89 "ttt.chpl"
  return INT64(0);
#line 89 "ttt.chpl"
}


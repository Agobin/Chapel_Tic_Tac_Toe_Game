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
#line 12 "ttt.chpl"
  timesClicked_chpl = INT64(0);
#line 1 "ttt.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 1 "ttt.chpl"
  _exit_chpl__init_ttt_chpl:;
#line 1 "ttt.chpl"
  return;
#line 1 "ttt.chpl"
}

#line 1 "ttt.chpl"
/* ttt.chpl:13 */
#line 1 "ttt.chpl"
void callMe(c_ptr_GtkWidget_chpl btn, c_string data) {
#line 1 "ttt.chpl"
  int64_t call_tmp_chpl;
#line 1 "ttt.chpl"
  chpl_bool call_tmp_chpl2;
#line 1 "ttt.chpl"
  c_ptr_GtkButton_chpl call_tmp_chpl3 = NULL;
#line 1 "ttt.chpl"
  c_ptr_GtkButton_chpl call_tmp_chpl4 = NULL;
#line 15 "ttt.chpl"
  call_tmp_chpl = (timesClicked_chpl % INT64(2));
#line 15 "ttt.chpl"
  call_tmp_chpl2 = (call_tmp_chpl == INT64(0));
#line 15 "ttt.chpl"
  if (call_tmp_chpl2) /* ZLINE: 16 ttt.chpl */
#line 15 "ttt.chpl"
  {
#line 16 "ttt.chpl"
    call_tmp_chpl3 = GTK_BUTTON(btn);
#line 16 "ttt.chpl"
    gtk_button_set_label(call_tmp_chpl3, "Normal text");
#line 16 "ttt.chpl"
  } else /* ZLINE: 19 ttt.chpl */
#line 16 "ttt.chpl"
  {
#line 19 "ttt.chpl"
    call_tmp_chpl4 = GTK_BUTTON(btn);
#line 19 "ttt.chpl"
    gtk_button_set_label(call_tmp_chpl4, "Text changed");
#line 19 "ttt.chpl"
  }
#line 22 "ttt.chpl"
  timesClicked_chpl += INT64(1);
#line 23 "ttt.chpl"
  gtk_widget_show(btn);
#line 13 "ttt.chpl"
  return;
#line 13 "ttt.chpl"
}

#line 13 "ttt.chpl"
/* ChapelBase.chpl:23 */
#line 13 "ttt.chpl"
static void chpl__autoDestroyGlobals(void) {
#line 13 "ttt.chpl"
  channel_T_dynamic_T_chpl local_stderr_chpl;
#line 13 "ttt.chpl"
  channel_T_dynamic_T_chpl local_stdout_chpl;
#line 13 "ttt.chpl"
  channel_F_dynamic_T_chpl local_stdin_chpl;
#line 13 "ttt.chpl"
  string_rec_chpl local_s_memLeaksLog_chpl;
#line 13 "ttt.chpl"
  string_rec_chpl local_s_memLog_chpl;
#line 13 "ttt.chpl"
  string_rec_chpl local_s_memLeaksByDesc_chpl;
#line 13 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F local_LocaleSpace_chpl = NULL;
#line 13 "ttt.chpl"
  DefaultRectangularArr_locale_1_int64_t_F local_chpl_emptyLocales_chpl = NULL;
#line 13 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F local_chpl_emptyLocaleSpace_chpl = NULL;
#line 13 "ttt.chpl"
  _ref_string_rec _ref_tmp__chpl = NULL;
#line 13 "ttt.chpl"
  _ref_string_rec _ref_tmp__chpl2 = NULL;
#line 13 "ttt.chpl"
  _ref_string_rec _ref_tmp__chpl3 = NULL;
#line 13 "ttt.chpl"
  _ref_channel_F_dynamic_T _ref_tmp__chpl4 = NULL;
#line 13 "ttt.chpl"
  _ref_channel_T_dynamic_T _ref_tmp__chpl5 = NULL;
#line 13 "ttt.chpl"
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
  chpl__autoDestroy4(local_chpl_emptyLocales_chpl, INT64(87), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/localeModels/flat/LocaleModel.chpl");
#line 75 "DefaultRectangular.chpl"
  chpl__autoDestroy(defaultDist, INT64(75), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/DefaultRectangular.chpl");
#line 51 "LocalesArray.chpl"
  chpl__autoDestroy4(Locales, INT64(51), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/LocalesArray.chpl");
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
  chpl__autoDestroy5(boardMatrix_chpl, INT64(3), "ttt.chpl");
#line 6 "ttt.chpl"
  chpl__autoDestroy6(button_array_chpl, INT64(6), "ttt.chpl");
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
/* ttt.chpl:30 */
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
  GCallback call_tmp_chpl11;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl call_tmp_chpl12 = NULL;
#line 23 "ChapelBase.chpl"
  int64_t counter_chpl;
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
  c_ptr_GtkWidget_chpl call_tmp_chpl13 = NULL;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t i_chpl4;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t this_chpl;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp_chpl14 = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_chpl = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl2 = NULL;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl15;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl16;
#line 23 "ChapelBase.chpl"
  chpl_string call_tmp_chpl17;
#line 23 "ChapelBase.chpl"
  int64_t sum_chpl;
#line 23 "ChapelBase.chpl"
  int64_t ret_x1_chpl;
#line 23 "ChapelBase.chpl"
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
#line 23 "ChapelBase.chpl"
  int64_t coerce_tmp_chpl;
#line 23 "ChapelBase.chpl"
  int64_t call_tmp_chpl18;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget ret_chpl3 = NULL;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp_chpl2 = NULL;
#line 23 "ChapelBase.chpl"
  _ref_c_ptr_GtkWidget call_tmp_chpl19 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkTable_chpl call_tmp_chpl20 = NULL;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t i_chpl5;
#line 23 "ChapelBase.chpl"
  _tuple_1_star_int64_t this_chpl2;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp_chpl21 = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_chpl4 = NULL;
#line 23 "ChapelBase.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl5 = NULL;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl22;
#line 23 "ChapelBase.chpl"
  chpl_bool call_tmp_chpl23;
#line 23 "ChapelBase.chpl"
  chpl_string call_tmp_chpl24;
#line 23 "ChapelBase.chpl"
  int64_t sum_chpl2;
#line 23 "ChapelBase.chpl"
  int64_t ret_x1_chpl2;
#line 23 "ChapelBase.chpl"
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
#line 23 "ChapelBase.chpl"
  int64_t coerce_tmp_chpl3;
#line 23 "ChapelBase.chpl"
  int64_t call_tmp_chpl25;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget ret_chpl6 = NULL;
#line 23 "ChapelBase.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp_chpl4 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkWidget_chpl ret_chpl7 = NULL;
#line 23 "ChapelBase.chpl"
  _ref_c_ptr_GtkWidget call_tmp_chpl26 = NULL;
#line 23 "ChapelBase.chpl"
  int64_t call_tmp_chpl27;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl28;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl29;
#line 23 "ChapelBase.chpl"
  int64_t call_tmp_chpl30;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl31;
#line 23 "ChapelBase.chpl"
  int32_t call_tmp_chpl32;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkTable_chpl call_tmp_chpl33 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkTable_chpl call_tmp_chpl34 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkTable_chpl call_tmp_chpl35 = NULL;
#line 23 "ChapelBase.chpl"
  c_ptr_GtkContainer_chpl call_tmp_chpl36 = NULL;
#line 23 "ChapelBase.chpl"
  _ref_c_ptr_GtkWidget _ref_tmp__chpl = NULL;
#line 35 "ttt.chpl"
  gtk_init_chpl(args_chpl);
#line 37 "ttt.chpl"
  call_tmp_chpl2 = ((int32_t)(INT64(600)));
#line 37 "ttt.chpl"
  call_tmp_chpl3 = ((int32_t)(INT64(500)));
#line 37 "ttt.chpl"
  call_tmp_chpl = chpl_window_new("Tic Tac Toe Game", call_tmp_chpl2, call_tmp_chpl3);
#line 37 "ttt.chpl"
  window_chpl = call_tmp_chpl;
#line 38 "ttt.chpl"
  call_tmp_chpl4 = GTK_WINDOW(call_tmp_chpl);
#line 38 "ttt.chpl"
  gtk_window_set_resizable(call_tmp_chpl4, false);
#line 41 "ttt.chpl"
  call_tmp_chpl6 = ((int32_t)(INT64(5)));
#line 41 "ttt.chpl"
  call_tmp_chpl7 = ((int32_t)(INT64(3)));
#line 41 "ttt.chpl"
  call_tmp_chpl5 = gtk_table_new(call_tmp_chpl6, call_tmp_chpl7, true);
#line 41 "ttt.chpl"
  board_chpl = call_tmp_chpl5;
#line 44 "ttt.chpl"
  call_tmp_chpl8 = gtk_button_new_with_mnemonic("Reset game");
#line 44 "ttt.chpl"
  resetBtn_chpl = call_tmp_chpl8;
#line 45 "ttt.chpl"
  call_tmp_chpl9 = gtk_button_new_with_mnemonic("Quit game");
#line 45 "ttt.chpl"
  stopBtn_chpl = call_tmp_chpl9;
#line 49 "ttt.chpl"
  call_tmp_chpl10 = G_CALLBACK(g_print);
#line 49 "ttt.chpl"
  g_signal_connect(call_tmp_chpl8, "clicked", call_tmp_chpl10, "Reset game");
#line 50 "ttt.chpl"
  call_tmp_chpl11 = G_CALLBACK(gtk_widget_destroy);
#line 50 "ttt.chpl"
  g_signal_connect_swapped(call_tmp_chpl9, "clicked", call_tmp_chpl11, call_tmp_chpl);
#line 53 "ttt.chpl"
  call_tmp_chpl12 = gtk_label_new("Player one start play");
#line 53 "ttt.chpl"
  output_chpl = call_tmp_chpl12;
#line 56 "ttt.chpl"
  counter_chpl = INT64(1);
#line 57 "ttt.chpl"
  _ic__F1_high_chpl = INT64(3);
#line 57 "ttt.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(3), INT64(1), INT64(1), INT64(3), true, INT64(57), "ttt.chpl");
#line 58 "ttt.chpl"
  _ic__F1_high_chpl2 = INT64(3);
#line 57 "ttt.chpl"
  for (i_chpl = INT64(1); ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
#line 57 "ttt.chpl"
    i_chpl2 = i_chpl;
#line 58 "ttt.chpl"
    chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(3), INT64(1), INT64(1), INT64(3), true, INT64(58), "ttt.chpl");
#line 61 "ttt.chpl"
    call_tmp_chpl27 = (i_chpl2 - INT64(1));
#line 58 "ttt.chpl"
    for (i_chpl3 = INT64(1); ((i_chpl3 <= _ic__F1_high_chpl2)); i_chpl3 += INT64(1)) {
#line 59 "ttt.chpl"
      call_tmp_chpl13 = gtk_button_new_with_label(" ");
#line 60 "ttt.chpl"
      *(this_chpl + INT64(0)) = counter_chpl;
#line 60 "ttt.chpl"
      *(i_chpl4 + INT64(0)) = *(this_chpl + INT64(0));
#line 60 "ttt.chpl"
      ret_chpl = button_array_chpl;
#line 60 "ttt.chpl"
      call_tmp_chpl14 = ret_chpl;
#line 60 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl14, INT64(60), "ttt.chpl");
#line 60 "ttt.chpl"
      ret_chpl2 = (call_tmp_chpl14)->dom;
#line 60 "ttt.chpl"
      chpl_check_nil(ret_chpl2, INT64(60), "ttt.chpl");
#line 60 "ttt.chpl"
      call_tmp_chpl15 = dsiMember(ret_chpl2, &this_chpl, INT64(60), "ttt.chpl");
#line 60 "ttt.chpl"
      call_tmp_chpl16 = (! call_tmp_chpl15);
#line 60 "ttt.chpl"
      if (call_tmp_chpl16) /* ZLINE: 60 ttt.chpl */
#line 60 "ttt.chpl"
      {
#line 60 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl17, "array index out of bounds: ", INT64(0), INT64(0), INT64(60), "ttt.chpl");
#line 60 "ttt.chpl"
        halt3(call_tmp_chpl17, &this_chpl, INT64(60), "ttt.chpl");
#line 60 "ttt.chpl"
      }
#line 60 "ttt.chpl"
      sum_chpl = INT64(0);
#line 60 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl14, INT64(60), "ttt.chpl");
#line 60 "ttt.chpl"
      ret__chpl = &((call_tmp_chpl14)->blk);
#line 60 "ttt.chpl"
      ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 60 "ttt.chpl"
      coerce_tmp_chpl = *(i_chpl4 + INT64(0));
#line 60 "ttt.chpl"
      call_tmp_chpl18 = (coerce_tmp_chpl * ret_x1_chpl);
#line 60 "ttt.chpl"
      sum_chpl += call_tmp_chpl18;
#line 60 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl14, INT64(60), "ttt.chpl");
#line 60 "ttt.chpl"
      ret_chpl3 = (call_tmp_chpl14)->shiftedData;
#line 60 "ttt.chpl"
      coerce_tmp_chpl2 = ret_chpl3;
#line 60 "ttt.chpl"
      call_tmp_chpl19 = (coerce_tmp_chpl2 + sum_chpl);
#line 60 "ttt.chpl"
      *(call_tmp_chpl19) = call_tmp_chpl13;
#line 61 "ttt.chpl"
      call_tmp_chpl20 = GTK_TABLE(board_chpl);
#line 61 "ttt.chpl"
      *(this_chpl2 + INT64(0)) = counter_chpl;
#line 61 "ttt.chpl"
      *(i_chpl5 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 61 "ttt.chpl"
      ret_chpl4 = button_array_chpl;
#line 61 "ttt.chpl"
      call_tmp_chpl21 = ret_chpl4;
#line 61 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl21, INT64(61), "ttt.chpl");
#line 61 "ttt.chpl"
      ret_chpl5 = (call_tmp_chpl21)->dom;
#line 61 "ttt.chpl"
      chpl_check_nil(ret_chpl5, INT64(61), "ttt.chpl");
#line 61 "ttt.chpl"
      call_tmp_chpl22 = dsiMember(ret_chpl5, &this_chpl2, INT64(61), "ttt.chpl");
#line 61 "ttt.chpl"
      call_tmp_chpl23 = (! call_tmp_chpl22);
#line 61 "ttt.chpl"
      if (call_tmp_chpl23) /* ZLINE: 61 ttt.chpl */
#line 61 "ttt.chpl"
      {
#line 61 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl24, "array index out of bounds: ", INT64(0), INT64(0), INT64(61), "ttt.chpl");
#line 61 "ttt.chpl"
        halt3(call_tmp_chpl24, &this_chpl2, INT64(61), "ttt.chpl");
#line 61 "ttt.chpl"
      }
#line 61 "ttt.chpl"
      sum_chpl2 = INT64(0);
#line 61 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl21, INT64(61), "ttt.chpl");
#line 61 "ttt.chpl"
      ret__chpl2 = &((call_tmp_chpl21)->blk);
#line 61 "ttt.chpl"
      ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 61 "ttt.chpl"
      coerce_tmp_chpl3 = *(i_chpl5 + INT64(0));
#line 61 "ttt.chpl"
      call_tmp_chpl25 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 61 "ttt.chpl"
      sum_chpl2 += call_tmp_chpl25;
#line 61 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl21, INT64(61), "ttt.chpl");
#line 61 "ttt.chpl"
      ret_chpl6 = (call_tmp_chpl21)->shiftedData;
#line 61 "ttt.chpl"
      coerce_tmp_chpl4 = ret_chpl6;
#line 61 "ttt.chpl"
      call_tmp_chpl26 = (coerce_tmp_chpl4 + sum_chpl2);
#line 61 "ttt.chpl"
      ret_chpl7 = *(call_tmp_chpl26);
#line 61 "ttt.chpl"
      call_tmp_chpl28 = ((int32_t)(call_tmp_chpl27));
#line 61 "ttt.chpl"
      call_tmp_chpl29 = ((int32_t)(i_chpl2));
#line 61 "ttt.chpl"
      call_tmp_chpl30 = (i_chpl3 - INT64(1));
#line 61 "ttt.chpl"
      call_tmp_chpl31 = ((int32_t)(call_tmp_chpl30));
#line 61 "ttt.chpl"
      call_tmp_chpl32 = ((int32_t)(i_chpl3));
#line 61 "ttt.chpl"
      gtk_table_attach_defaults(call_tmp_chpl20, ret_chpl7, call_tmp_chpl28, call_tmp_chpl29, call_tmp_chpl31, call_tmp_chpl32);
#line 62 "ttt.chpl"
      counter_chpl += INT64(1);
#line 62 "ttt.chpl"
    }
#line 62 "ttt.chpl"
  }
#line 67 "ttt.chpl"
  call_tmp_chpl33 = GTK_TABLE(board_chpl);
#line 67 "ttt.chpl"
  gtk_table_attach_defaults(call_tmp_chpl33, output_chpl, INT32(0), INT32(3), INT32(3), INT32(4));
#line 68 "ttt.chpl"
  call_tmp_chpl34 = GTK_TABLE(board_chpl);
#line 68 "ttt.chpl"
  gtk_table_attach_defaults(call_tmp_chpl34, resetBtn_chpl, INT32(0), INT32(1), INT32(4), INT32(5));
#line 69 "ttt.chpl"
  call_tmp_chpl35 = GTK_TABLE(board_chpl);
#line 69 "ttt.chpl"
  gtk_table_attach_defaults(call_tmp_chpl35, stopBtn_chpl, INT32(2), INT32(3), INT32(4), INT32(5));
#line 72 "ttt.chpl"
  call_tmp_chpl36 = GTK_CONTAINER(window_chpl);
#line 72 "ttt.chpl"
  gtk_container_add(call_tmp_chpl36, board_chpl);
#line 75 "ttt.chpl"
  _ref_tmp__chpl = &window_chpl;
#line 75 "ttt.chpl"
  link_close_signal(_ref_tmp__chpl);
#line 76 "ttt.chpl"
  gtk_widget_show_all(window_chpl);
#line 78 "ttt.chpl"
  gtk_main();
#line 30 "ttt.chpl"
  return;
#line 30 "ttt.chpl"
}

#line 30 "ttt.chpl"
/* ttt.chpl:30 */
#line 30 "ttt.chpl"
int64_t chpl_gen_main(chpl_main_argument* const _arg) {
#line 30 "ttt.chpl"
  chpl___EndCount_atomic_int64_int64_t this_chpl = NULL;
#line 30 "ttt.chpl"
  int64_t call_tmp_chpl;
#line 30 "ttt.chpl"
  chpl_opaque cast_tmp_chpl;
#line 30 "ttt.chpl"
  atomic_int64 _init_class_tmp__chpl;
#line 30 "ttt.chpl"
  atomic_int64 this_chpl2;
#line 30 "ttt.chpl"
  atomic_int_least64_t ret_chpl;
#line 30 "ttt.chpl"
  atomic_int_least64_t type_tmp_chpl;
#line 30 "ttt.chpl"
  _ref_atomic_int_least64_t _ref_tmp__chpl = NULL;
#line 30 "ttt.chpl"
  atomic_int64 wrap_call_tmp_chpl;
#line 30 "ttt.chpl"
  chpl_task_list_p ret_chpl2;
#line 30 "ttt.chpl"
  chpl___EndCount_atomic_int64_int64_t wrap_call_tmp_chpl2 = NULL;
#line 30 "ttt.chpl"
  DefaultRectangularArr_chpl_string_1_int64_t_F _main_args_chpl = NULL;
#line 30 "ttt.chpl"
  call_tmp_chpl = sizeof(chpl_chpl___EndCount_atomic_int64_int64_t_object);
#line 30 "ttt.chpl"
  cast_tmp_chpl = chpl_here_alloc(call_tmp_chpl, INT16(1), INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  this_chpl = ((chpl___EndCount_atomic_int64_int64_t)(cast_tmp_chpl));
#line 30 "ttt.chpl"
  ((object)(this_chpl))->chpl__cid = chpl__cid_chpl___EndCount_atomic_int64_int64_t;
#line 30 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  (this_chpl)->i = _init_class_tmp__chpl;
#line 30 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  (this_chpl)->taskCnt = INT64(0);
#line 30 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  (this_chpl)->taskList = NULL;
#line 30 "ttt.chpl"
  ret_chpl = type_tmp_chpl;
#line 30 "ttt.chpl"
  _ref_tmp__chpl = &ret_chpl;
#line 30 "ttt.chpl"
  atomic_init_int_least64_t(_ref_tmp__chpl, INT64(0));
#line 30 "ttt.chpl"
  (&this_chpl2)->_v = ret_chpl;
#line 30 "ttt.chpl"
  wrap_call_tmp_chpl = _construct_atomic_int64(ret_chpl, &this_chpl2, INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  (this_chpl)->i = wrap_call_tmp_chpl;
#line 30 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  (this_chpl)->taskCnt = INT64(0);
#line 30 "ttt.chpl"
  ret_chpl2 = NULL;
#line 30 "ttt.chpl"
  chpl_check_nil(this_chpl, INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  (this_chpl)->taskList = ret_chpl2;
#line 30 "ttt.chpl"
  wrap_call_tmp_chpl2 = _construct__EndCount(&wrap_call_tmp_chpl, INT64(0), ret_chpl2, this_chpl, INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  chpl_rt_preUserCodeHook();
#line 30 "ttt.chpl"
  chpl__init_ttt(INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  _main_args_chpl = chpl_convert_args(_arg, INT64(30), "ttt.chpl");
#line 30 "ttt.chpl"
  chpl_user_main(_main_args_chpl);
#line 30 "ttt.chpl"
  chpl_rt_postUserCodeHook();
#line 30 "ttt.chpl"
  _waitEndCount2(wrap_call_tmp_chpl2, INT64(30), "ttt.chpl");
#line 23 "ChapelBase.chpl"
  chpl__autoDestroyGlobals();
#line 30 "ttt.chpl"
  return INT64(0);
#line 30 "ttt.chpl"
}


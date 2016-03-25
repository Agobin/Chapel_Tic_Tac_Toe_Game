/* ChapelNumLocales.chpl:22 */
static void chpl__init_ChapelNumLocales(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  int64_t const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  int64_t call_tmp3;
  c_string call_tmp4;
#line 22 "ChapelNumLocales.chpl"
  if (chpl__init_ChapelNumLocales_p) /* ZLINE: 22 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelNumLocales.chpl */
#line 22 "ChapelNumLocales.chpl"
  {
#line 22 "ChapelNumLocales.chpl"
    goto _exit_chpl__init_ChapelNumLocales;
#line 22 "ChapelNumLocales.chpl"
  }
#line 22 "ChapelNumLocales.chpl"
  modFormatStr = "%*s\n";
#line 22 "ChapelNumLocales.chpl"
  modStr = "ChapelNumLocales";
#line 22 "ChapelNumLocales.chpl"
  printModuleInit(modFormatStr, modStr, INT64(16), _ln, _fn);
#line 22 "ChapelNumLocales.chpl"
  refIndentLevel = &moduleInitLevel;
#line 22 "ChapelNumLocales.chpl"
  *(refIndentLevel) += INT64(1);
#line 22 "ChapelNumLocales.chpl"
  chpl__init_ChapelNumLocales_p = true;
#line 29 "ChapelNumLocales.chpl"
  call_tmp = chpl_config_has_value("numLocales", "Built-in");
#line 29 "ChapelNumLocales.chpl"
  call_tmp2 = (! call_tmp);
#line 29 "ChapelNumLocales.chpl"
  if (call_tmp2) /* ZLINE: 29 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelNumLocales.chpl */
#line 29 "ChapelNumLocales.chpl"
  {
#line 29 "ChapelNumLocales.chpl"
    call_tmp3 = chpl_comm_default_num_locales();
#line 29 "ChapelNumLocales.chpl"
    const_tmp = call_tmp3;
#line 29 "ChapelNumLocales.chpl"
  } else /* ZLINE: 29 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelNumLocales.chpl */
#line 29 "ChapelNumLocales.chpl"
  {
#line 29 "ChapelNumLocales.chpl"
    call_tmp4 = chpl_config_get_value("numLocales", "Built-in");
#line 29 "ChapelNumLocales.chpl"
    const_tmp = _command_line_cast14(call_tmp4, _ln, _fn);
#line 29 "ChapelNumLocales.chpl"
  }
#line 29 "ChapelNumLocales.chpl"
  numLocales = const_tmp;
#line 22 "ChapelNumLocales.chpl"
  *(refIndentLevel) -= INT64(1);
#line 22 "ChapelNumLocales.chpl"
  _exit_chpl__init_ChapelNumLocales:;
#line 22 "ChapelNumLocales.chpl"
  return;
#line 22 "ChapelNumLocales.chpl"
}


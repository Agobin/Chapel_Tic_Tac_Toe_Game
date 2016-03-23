/* gtk_types.chpl:1 */
static void chpl__init_gtk_types(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 1 "gtk_types.chpl"
  if (chpl__init_gtk_types_p) /* ZLINE: 1 ./gtk_types.chpl */
#line 1 "gtk_types.chpl"
  {
#line 1 "gtk_types.chpl"
    goto _exit_chpl__init_gtk_types_chpl;
#line 1 "gtk_types.chpl"
  }
#line 1 "gtk_types.chpl"
  modFormatStr_chpl = "%*s\n";
#line 1 "gtk_types.chpl"
  modStr_chpl = "gtk_types";
#line 1 "gtk_types.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(9), INT64(1), "./gtk_types.chpl");
#line 1 "gtk_types.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 1 "gtk_types.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 1 "gtk_types.chpl"
  chpl__init_gtk_types_p = true;
#line 1 "gtk_types.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 1 "gtk_types.chpl"
  _exit_chpl__init_gtk_types_chpl:;
#line 1 "gtk_types.chpl"
  return;
#line 1 "gtk_types.chpl"
}


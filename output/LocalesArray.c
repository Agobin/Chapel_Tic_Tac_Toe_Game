/* LocalesArray.chpl:40 */
static void chpl__init_LocalesArray(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  RootLocale _formal_type_tmp_ = NULL;
  RootLocale T = NULL;
  object call_tmp = NULL;
  chpl_bool call_tmp2;
  RootLocale call_tmp3 = NULL;
  RootLocale call_tmp4 = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp5 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_ = NULL;
  DefaultRectangularArr_locale_1_int64_t_F call_tmp6 = NULL;
  _ref_DefaultRectangularArr_locale_1_int64_t_F ret_to_arg_ref_tmp_2 = NULL;
  DefaultRectangularDom_1_int64_t_F const_tmp = NULL;
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp_3 = NULL;
#line 40 "LocalesArray.chpl"
  if (chpl__init_LocalesArray_p) /* ZLINE: 40 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/LocalesArray.chpl */
#line 40 "LocalesArray.chpl"
  {
#line 40 "LocalesArray.chpl"
    goto _exit_chpl__init_LocalesArray;
#line 40 "LocalesArray.chpl"
  }
#line 40 "LocalesArray.chpl"
  modFormatStr = "%*s\n";
#line 40 "LocalesArray.chpl"
  modStr = "LocalesArray";
#line 40 "LocalesArray.chpl"
  printModuleInit(modFormatStr, modStr, INT64(12), _ln, _fn);
#line 40 "LocalesArray.chpl"
  refIndentLevel = &moduleInitLevel;
#line 40 "LocalesArray.chpl"
  *(refIndentLevel) += INT64(1);
#line 40 "LocalesArray.chpl"
  chpl__init_LocalesArray_p = true;
#line 42 "LocalesArray.chpl"
  chpl_init_rootLocale(_ln, _fn);
#line 51 "LocalesArray.chpl"
  call_tmp = ((object)(rootLocale));
#line 51 "LocalesArray.chpl"
  call_tmp2 = (call_tmp != nil);
#line 51 "LocalesArray.chpl"
  if (call_tmp2) /* ZLINE: 51 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/LocalesArray.chpl */
#line 51 "LocalesArray.chpl"
  {
#line 51 "LocalesArray.chpl"
    call_tmp3 = ((((object)(rootLocale))->chpl__cid == chpl__cid_RootLocale))?(((RootLocale)(rootLocale))):(((RootLocale)(NULL)));
#line 51 "LocalesArray.chpl"
    T = call_tmp3;
#line 51 "LocalesArray.chpl"
  } else /* ZLINE: 51 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/LocalesArray.chpl */
#line 51 "LocalesArray.chpl"
  {
#line 51 "LocalesArray.chpl"
    call_tmp4 = ((RootLocale)(nil));
#line 51 "LocalesArray.chpl"
    T = call_tmp4;
#line 51 "LocalesArray.chpl"
  }
#line 51 "LocalesArray.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp5;
#line 51 "LocalesArray.chpl"
  chpl_check_nil(T, INT64(51), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/LocalesArray.chpl");
#line 51 "LocalesArray.chpl"
  getDefaultLocaleArray(T, ret_to_arg_ref_tmp_, _ln, _fn);
#line 51 "LocalesArray.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp6;
#line 51 "LocalesArray.chpl"
  chpl_check_nil(call_tmp5, INT64(51), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/LocalesArray.chpl");
#line 51 "LocalesArray.chpl"
  newAlias(call_tmp5, ret_to_arg_ref_tmp_2, _ln, _fn);
#line 51 "LocalesArray.chpl"
  Locales = call_tmp6;
#line 55 "LocalesArray.chpl"
  ret_to_arg_ref_tmp_3 = &const_tmp;
#line 55 "LocalesArray.chpl"
  chpl_check_nil(Locales, INT64(55), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/LocalesArray.chpl");
#line 55 "LocalesArray.chpl"
  _dom(Locales, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 55 "LocalesArray.chpl"
  LocaleSpace = const_tmp;
#line 51 "LocalesArray.chpl"
  chpl__autoDestroy5(call_tmp5, _ln, _fn);
#line 40 "LocalesArray.chpl"
  *(refIndentLevel) -= INT64(1);
#line 40 "LocalesArray.chpl"
  _exit_chpl__init_LocalesArray:;
#line 40 "LocalesArray.chpl"
  return;
#line 40 "LocalesArray.chpl"
}


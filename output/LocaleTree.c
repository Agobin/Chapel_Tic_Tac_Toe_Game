/* LocaleTree.chpl:25 */
static void chpl__init_LocaleTree(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_localeTreeRecord this5;
  locale call_tmp = NULL;
  locale call_tmp2 = NULL;
  chpl_localeTreeRecord wrap_call_tmp;
  _ref_chpl_localeTreeRecord ret_to_arg_ref_tmp_ = NULL;
#line 25 "LocaleTree.chpl"
  if (chpl__init_LocaleTree_p) /* ZLINE: 25 /home/agobin/Documents/chapel-1.13.0/modules/internal/LocaleTree.chpl */
#line 25 "LocaleTree.chpl"
  {
#line 25 "LocaleTree.chpl"
    goto _exit_chpl__init_LocaleTree;
#line 25 "LocaleTree.chpl"
  }
#line 25 "LocaleTree.chpl"
  modFormatStr = "%*s\n";
#line 25 "LocaleTree.chpl"
  modStr = "LocaleTree";
#line 25 "LocaleTree.chpl"
  printModuleInit(modFormatStr, modStr, INT64(10), _ln, _fn);
#line 25 "LocaleTree.chpl"
  refIndentLevel = &moduleInitLevel;
#line 25 "LocaleTree.chpl"
  *(refIndentLevel) += INT64(1);
#line 25 "LocaleTree.chpl"
  chpl__init_LocaleTree_p = UINT8(true);
#line 25 "LocaleTree.chpl"
  {
#line 25 "LocaleTree.chpl"
    chpl__init_ChapelLocale(_ln, _fn);
#line 25 "LocaleTree.chpl"
  }
#line 33 "LocaleTree.chpl"
  (&this5)->left = nil;
#line 33 "LocaleTree.chpl"
  (&this5)->right = nil;
#line 33 "LocaleTree.chpl"
  call_tmp = ((locale)(nil));
#line 33 "LocaleTree.chpl"
  (&this5)->left = call_tmp;
#line 33 "LocaleTree.chpl"
  call_tmp2 = ((locale)(nil));
#line 33 "LocaleTree.chpl"
  (&this5)->right = call_tmp2;
#line 33 "LocaleTree.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 33 "LocaleTree.chpl"
  _construct_chpl_localeTreeRecord(call_tmp, call_tmp2, &this5, ret_to_arg_ref_tmp_, _ln, _fn);
#line 33 "LocaleTree.chpl"
  chpl_localeTree = wrap_call_tmp;
#line 53 "LocaleTree.chpl"
  chpl_initLocaleTree(_ln, _fn);
#line 25 "LocaleTree.chpl"
  *(refIndentLevel) -= INT64(1);
#line 25 "LocaleTree.chpl"
  _exit_chpl__init_LocaleTree:;
#line 25 "LocaleTree.chpl"
  return;
#line 25 "LocaleTree.chpl"
}

#line 25 "LocaleTree.chpl"
/* LocaleTree.chpl:29 */
#line 25 "LocaleTree.chpl"
static void _construct_chpl_localeTreeRecord(locale left, locale right, chpl_localeTreeRecord* const meme, _ref_chpl_localeTreeRecord _retArg, int64_t _ln, int32_t _fn) {
#line 25 "LocaleTree.chpl"
  chpl_localeTreeRecord this5;
#line 29 "LocaleTree.chpl"
  this5 = *(meme);
#line 30 "LocaleTree.chpl"
  (&this5)->left = left;
#line 30 "LocaleTree.chpl"
  (&this5)->right = right;
#line 29 "LocaleTree.chpl"
  *(_retArg) = this5;
#line 29 "LocaleTree.chpl"
  return;
#line 29 "LocaleTree.chpl"
}

#line 29 "LocaleTree.chpl"
/* LocaleTree.chpl:35 */
#line 29 "LocaleTree.chpl"
static void chpl_initLocaleTree(int64_t _ln, int32_t _fn) {
#line 29 "LocaleTree.chpl"
  int64_t local_numLocales;
#line 29 "LocaleTree.chpl"
  DefaultRectangularDom_1_int64_t_F local_LocaleSpace = NULL;
#line 29 "LocaleTree.chpl"
  DefaultRectangularDom_1_int64_t_F ret = NULL;
#line 29 "LocaleTree.chpl"
  _tuple_1_star_int64_t default_argoffset;
#line 29 "LocaleTree.chpl"
  _ref__tuple_1_star_int64_t ret_to_arg_ref_tmp_ = NULL;
#line 29 "LocaleTree.chpl"
  _ref__tuple_1_star_range_int64_t_bounded_F _this_tmp_ = NULL;
#line 29 "LocaleTree.chpl"
  DefaultRectangularDom_1_int64_t_F this5 = NULL;
#line 29 "LocaleTree.chpl"
  range_int64_t_bounded_F coerce_tmp;
#line 29 "LocaleTree.chpl"
  range_int64_t_bounded_F _ic__F0_this;
#line 29 "LocaleTree.chpl"
  _ref_range_int64_t_bounded_F this6 = NULL;
#line 29 "LocaleTree.chpl"
  int64_t i;
#line 29 "LocaleTree.chpl"
  int64_t ret2;
#line 29 "LocaleTree.chpl"
  int64_t end;
#line 29 "LocaleTree.chpl"
  int64_t ret3;
#line 29 "LocaleTree.chpl"
  locale left = NULL;
#line 29 "LocaleTree.chpl"
  locale type_tmp = NULL;
#line 29 "LocaleTree.chpl"
  locale right = NULL;
#line 29 "LocaleTree.chpl"
  locale type_tmp2 = NULL;
#line 29 "LocaleTree.chpl"
  int64_t child;
#line 29 "LocaleTree.chpl"
  int64_t call_tmp;
#line 29 "LocaleTree.chpl"
  int64_t call_tmp2;
#line 29 "LocaleTree.chpl"
  int64_t call_tmp3;
#line 29 "LocaleTree.chpl"
  chpl_bool call_tmp4;
#line 29 "LocaleTree.chpl"
  locale call_tmp5 = NULL;
#line 29 "LocaleTree.chpl"
  int32_t _virtual_method_tmp_;
#line 29 "LocaleTree.chpl"
  chpl_bool call_tmp6;
#line 29 "LocaleTree.chpl"
  locale call_tmp7 = NULL;
#line 29 "LocaleTree.chpl"
  int32_t _virtual_method_tmp_2;
#line 29 "LocaleTree.chpl"
  int32_t _virtual_method_tmp_3;
#line 29 "LocaleTree.chpl"
  _ref_locale call_tmp8 = NULL;
#line 29 "LocaleTree.chpl"
  _ref_locale call_tmp9 = NULL;
#line 40 "LocaleTree.chpl"
  local_numLocales = numLocales;
#line 36 "LocaleTree.chpl"
  local_LocaleSpace = LocaleSpace;
#line 36 "LocaleTree.chpl"
  ret = local_LocaleSpace;
#line 36 "LocaleTree.chpl"
  ret_to_arg_ref_tmp_ = &default_argoffset;
#line 36 "LocaleTree.chpl"
  createTuple_chpl(INT64(0), ret_to_arg_ref_tmp_, _ln, _fn);
#line 36 "LocaleTree.chpl"
  this5 = ret;
#line 36 "LocaleTree.chpl"
  chpl_check_nil(this5, INT64(36), INT64(0));
#line 36 "LocaleTree.chpl"
  _this_tmp_ = &((this5)->ranges);
#line 36 "LocaleTree.chpl"
  coerce_tmp = *(*(_this_tmp_) + INT64(0));
#line 36 "LocaleTree.chpl"
  _ic__F0_this = coerce_tmp;
#line 36 "LocaleTree.chpl"
  this6 = &_ic__F0_this;
#line 36 "LocaleTree.chpl"
  chpl_check_nil(this6, INT64(36), INT64(0));
#line 36 "LocaleTree.chpl"
  checkIfIterWillOverflow(this6, UINT8(true), _ln, _fn);
#line 36 "LocaleTree.chpl"
  ret2 = (&_ic__F0_this)->_low;
#line 36 "LocaleTree.chpl"
  ret3 = (&_ic__F0_this)->_high;
#line 36 "LocaleTree.chpl"
  end = ret3;
#line 37 "LocaleTree.chpl"
  type_tmp = nil;
#line 38 "LocaleTree.chpl"
  type_tmp2 = nil;
#line 46 "LocaleTree.chpl"
  chpl_check_nil(rootLocale, INT64(46), INT64(0));
#line 46 "LocaleTree.chpl"
  _virtual_method_tmp_3 = ((object)(rootLocale))->chpl__cid;
#line 36 "LocaleTree.chpl"
  for (i = ret2; ((i <= end)); i += INT64(1)) {
#line 37 "LocaleTree.chpl"
    left = type_tmp;
#line 38 "LocaleTree.chpl"
    right = type_tmp2;
#line 39 "LocaleTree.chpl"
    call_tmp = (i + INT64(1));
#line 39 "LocaleTree.chpl"
    call_tmp2 = (call_tmp * INT64(2));
#line 39 "LocaleTree.chpl"
    call_tmp3 = (call_tmp2 - INT64(1));
#line 39 "LocaleTree.chpl"
    child = call_tmp3;
#line 40 "LocaleTree.chpl"
    call_tmp4 = (call_tmp3 < local_numLocales);
#line 40 "LocaleTree.chpl"
    if (call_tmp4) /* ZLINE: 41 /home/agobin/Documents/chapel-1.13.0/modules/internal/LocaleTree.chpl */
#line 40 "LocaleTree.chpl"
    {
#line 41 "LocaleTree.chpl"
      chpl_check_nil(rootLocale, INT64(41), INT64(0));
#line 41 "LocaleTree.chpl"
      _virtual_method_tmp_ = ((object)(rootLocale))->chpl__cid;
#line 41 "LocaleTree.chpl"
      call_tmp5 = ((locale(*)(locale, int64_t, int64_t, int32_t))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(2))])(rootLocale, call_tmp3, _ln, _fn);
#line 41 "LocaleTree.chpl"
      left = call_tmp5;
#line 42 "LocaleTree.chpl"
      child += INT64(1);
#line 43 "LocaleTree.chpl"
      call_tmp6 = (child < local_numLocales);
#line 43 "LocaleTree.chpl"
      if (call_tmp6) /* ZLINE: 43 /home/agobin/Documents/chapel-1.13.0/modules/internal/LocaleTree.chpl */
#line 43 "LocaleTree.chpl"
      {
#line 44 "LocaleTree.chpl"
        chpl_check_nil(rootLocale, INT64(44), INT64(0));
#line 44 "LocaleTree.chpl"
        _virtual_method_tmp_2 = ((object)(rootLocale))->chpl__cid;
#line 44 "LocaleTree.chpl"
        call_tmp7 = ((locale(*)(locale, int64_t, int64_t, int32_t))chpl_vmtable[((INT64(4) * _virtual_method_tmp_2) + INT64(2))])(rootLocale, child, _ln, _fn);
#line 44 "LocaleTree.chpl"
        right = call_tmp7;
#line 44 "LocaleTree.chpl"
      }
#line 44 "LocaleTree.chpl"
    }
#line 46 "LocaleTree.chpl"
    ((locale(*)(locale, int64_t, int64_t, int32_t))chpl_vmtable[((INT64(4) * _virtual_method_tmp_3) + INT64(2))])(rootLocale, i, _ln, _fn);
#line 47 "LocaleTree.chpl"
    call_tmp8 = &((&chpl_localeTree)->left);
#line 47 "LocaleTree.chpl"
    *(call_tmp8) = left;
#line 48 "LocaleTree.chpl"
    call_tmp9 = &((&chpl_localeTree)->right);
#line 48 "LocaleTree.chpl"
    *(call_tmp9) = right;
#line 48 "LocaleTree.chpl"
  }
#line 35 "LocaleTree.chpl"
  return;
#line 35 "LocaleTree.chpl"
}


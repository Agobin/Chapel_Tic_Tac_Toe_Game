/* ChapelRange.chpl:86 */
static void chpl__init_ChapelRange(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 86 "ChapelRange.chpl"
  if (chpl__init_ChapelRange_p) /* ZLINE: 86 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 86 "ChapelRange.chpl"
  {
#line 86 "ChapelRange.chpl"
    goto _exit_chpl__init_ChapelRange;
#line 86 "ChapelRange.chpl"
  }
#line 86 "ChapelRange.chpl"
  modFormatStr = "%*s\n";
#line 86 "ChapelRange.chpl"
  modStr = "ChapelRange";
#line 86 "ChapelRange.chpl"
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
#line 86 "ChapelRange.chpl"
  refIndentLevel = &moduleInitLevel;
#line 86 "ChapelRange.chpl"
  *(refIndentLevel) += INT64(1);
#line 86 "ChapelRange.chpl"
  chpl__init_ChapelRange_p = true;
#line 86 "ChapelRange.chpl"
  *(refIndentLevel) -= INT64(1);
#line 86 "ChapelRange.chpl"
  _exit_chpl__init_ChapelRange:;
#line 86 "ChapelRange.chpl"
  return;
#line 86 "ChapelRange.chpl"
}

#line 86 "ChapelRange.chpl"
/* ChapelRange.chpl:138 */
#line 86 "ChapelRange.chpl"
static range_int64_t_bounded_F _construct_range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_F* const meme, int64_t _ln, c_string _fn) {
#line 86 "ChapelRange.chpl"
  range_int64_t_bounded_F this6;
#line 138 "ChapelRange.chpl"
  this6 = *(meme);
#line 144 "ChapelRange.chpl"
  (&this6)->_low = _low;
#line 145 "ChapelRange.chpl"
  (&this6)->_high = _high;
#line 146 "ChapelRange.chpl"
  (&this6)->_stride = _stride;
#line 147 "ChapelRange.chpl"
  (&this6)->_alignment = _alignment;
#line 148 "ChapelRange.chpl"
  (&this6)->_aligned = _aligned;
#line 138 "ChapelRange.chpl"
  return this6;
#line 138 "ChapelRange.chpl"
}

#line 138 "ChapelRange.chpl"
/* ChapelRange.chpl:138 */
#line 138 "ChapelRange.chpl"
static range_int64_t_boundedLow_F _construct_range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme, int64_t _ln, c_string _fn) {
#line 138 "ChapelRange.chpl"
  range_int64_t_boundedLow_F this6;
#line 138 "ChapelRange.chpl"
  this6 = *(meme);
#line 144 "ChapelRange.chpl"
  (&this6)->_low = _low;
#line 145 "ChapelRange.chpl"
  (&this6)->_high = _high;
#line 146 "ChapelRange.chpl"
  (&this6)->_stride = _stride;
#line 147 "ChapelRange.chpl"
  (&this6)->_alignment = _alignment;
#line 148 "ChapelRange.chpl"
  (&this6)->_aligned = _aligned;
#line 138 "ChapelRange.chpl"
  return this6;
#line 138 "ChapelRange.chpl"
}

#line 138 "ChapelRange.chpl"
/* ChapelRange.chpl:174 */
#line 138 "ChapelRange.chpl"
static range_int64_t_bounded_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn) {
#line 138 "ChapelRange.chpl"
  range_int64_t_bounded_F this6;
#line 138 "ChapelRange.chpl"
  range_int64_t_bounded_F this7;
#line 138 "ChapelRange.chpl"
  range_int64_t_bounded_F wrap_call_tmp;
#line 138 "ChapelRange.chpl"
  _ref_int64_t call_tmp = NULL;
#line 138 "ChapelRange.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 138 "ChapelRange.chpl"
  _ref_int64_t call_tmp3 = NULL;
#line 138 "ChapelRange.chpl"
  chpl_bool call_tmp4;
#line 138 "ChapelRange.chpl"
  _ref_chpl_bool call_tmp5 = NULL;
#line 174 "ChapelRange.chpl"
  (&this7)->_low = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_high = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_stride = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_alignment = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_aligned = false;
#line 174 "ChapelRange.chpl"
  (&this7)->_low = INT64(1);
#line 174 "ChapelRange.chpl"
  (&this7)->_high = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_stride = INT64(1);
#line 174 "ChapelRange.chpl"
  (&this7)->_alignment = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_aligned = false;
#line 174 "ChapelRange.chpl"
  wrap_call_tmp = _construct_range2(INT64(1), INT64(0), INT64(1), INT64(0), false, &this7, _ln, _fn);
#line 174 "ChapelRange.chpl"
  this6 = wrap_call_tmp;
#line 183 "ChapelRange.chpl"
  call_tmp = &((&this6)->_low);
#line 183 "ChapelRange.chpl"
  *(call_tmp) = _low;
#line 184 "ChapelRange.chpl"
  call_tmp2 = &((&this6)->_high);
#line 184 "ChapelRange.chpl"
  *(call_tmp2) = _high;
#line 186 "ChapelRange.chpl"
  call_tmp3 = &((&this6)->_alignment);
#line 186 "ChapelRange.chpl"
  *(call_tmp3) = _alignment;
#line 190 "ChapelRange.chpl"
  call_tmp4 = (_stride == INT64(1));
#line 190 "ChapelRange.chpl"
  assert_chpl(call_tmp4, _ln, _fn);
#line 192 "ChapelRange.chpl"
  call_tmp5 = &((&this6)->_aligned);
#line 192 "ChapelRange.chpl"
  *(call_tmp5) = _aligned;
#line 174 "ChapelRange.chpl"
  return this6;
#line 174 "ChapelRange.chpl"
}

#line 174 "ChapelRange.chpl"
/* ChapelRange.chpl:174 */
#line 174 "ChapelRange.chpl"
static range_int64_t_boundedLow_F range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, c_string _fn) {
#line 174 "ChapelRange.chpl"
  range_int64_t_boundedLow_F this6;
#line 174 "ChapelRange.chpl"
  range_int64_t_boundedLow_F this7;
#line 174 "ChapelRange.chpl"
  range_int64_t_boundedLow_F wrap_call_tmp;
#line 174 "ChapelRange.chpl"
  _ref_int64_t call_tmp = NULL;
#line 174 "ChapelRange.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 174 "ChapelRange.chpl"
  _ref_int64_t call_tmp3 = NULL;
#line 174 "ChapelRange.chpl"
  chpl_bool call_tmp4;
#line 174 "ChapelRange.chpl"
  _ref_chpl_bool call_tmp5 = NULL;
#line 174 "ChapelRange.chpl"
  (&this7)->_low = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_high = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_stride = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_alignment = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_aligned = false;
#line 174 "ChapelRange.chpl"
  (&this7)->_low = INT64(1);
#line 174 "ChapelRange.chpl"
  (&this7)->_high = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_stride = INT64(1);
#line 174 "ChapelRange.chpl"
  (&this7)->_alignment = INT64(0);
#line 174 "ChapelRange.chpl"
  (&this7)->_aligned = false;
#line 174 "ChapelRange.chpl"
  wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), false, &this7, _ln, _fn);
#line 174 "ChapelRange.chpl"
  this6 = wrap_call_tmp;
#line 183 "ChapelRange.chpl"
  call_tmp = &((&this6)->_low);
#line 183 "ChapelRange.chpl"
  *(call_tmp) = _low;
#line 184 "ChapelRange.chpl"
  call_tmp2 = &((&this6)->_high);
#line 184 "ChapelRange.chpl"
  *(call_tmp2) = _high;
#line 186 "ChapelRange.chpl"
  call_tmp3 = &((&this6)->_alignment);
#line 186 "ChapelRange.chpl"
  *(call_tmp3) = _alignment;
#line 190 "ChapelRange.chpl"
  call_tmp4 = (_stride == INT64(1));
#line 190 "ChapelRange.chpl"
  assert_chpl(call_tmp4, _ln, _fn);
#line 192 "ChapelRange.chpl"
  call_tmp5 = &((&this6)->_aligned);
#line 192 "ChapelRange.chpl"
  *(call_tmp5) = _aligned;
#line 174 "ChapelRange.chpl"
  return this6;
#line 174 "ChapelRange.chpl"
}

#line 174 "ChapelRange.chpl"
/* ChapelRange.chpl:209 */
#line 174 "ChapelRange.chpl"
static void chpl_build_bounded_range(int64_t low, int64_t high, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
#line 174 "ChapelRange.chpl"
  range_int64_t_bounded_F wrap_call_tmp;
#line 210 "ChapelRange.chpl"
  wrap_call_tmp = range2(low, high, INT64(1), INT64(0), false, _ln, _fn);
#line 210 "ChapelRange.chpl"
  *(_retArg) = wrap_call_tmp;
#line 209 "ChapelRange.chpl"
  return;
#line 209 "ChapelRange.chpl"
}

#line 209 "ChapelRange.chpl"
/* ChapelRange.chpl:218 */
#line 209 "ChapelRange.chpl"
static void chpl_build_partially_bounded_range(int64_t bound, _ref_range_int64_t_boundedLow_F _retArg, int64_t _ln, c_string _fn) {
#line 209 "ChapelRange.chpl"
  range_int64_t_boundedLow_F wrap_call_tmp;
#line 219 "ChapelRange.chpl"
  wrap_call_tmp = range(bound, bound, INT64(1), INT64(0), false, _ln, _fn);
#line 219 "ChapelRange.chpl"
  *(_retArg) = wrap_call_tmp;
#line 218 "ChapelRange.chpl"
  return;
#line 218 "ChapelRange.chpl"
}

#line 218 "ChapelRange.chpl"
/* ChapelRange.chpl:316 */
#line 218 "ChapelRange.chpl"
static int64_t length(_ref_range_int64_t_bounded_F this6, int64_t _ln, c_string _fn) {
#line 218 "ChapelRange.chpl"
  int64_t ret;
#line 218 "ChapelRange.chpl"
  int64_t ret2;
#line 218 "ChapelRange.chpl"
  int64_t ret3;
#line 218 "ChapelRange.chpl"
  chpl_bool call_tmp;
#line 218 "ChapelRange.chpl"
  int64_t ret4;
#line 218 "ChapelRange.chpl"
  int64_t ret5;
#line 218 "ChapelRange.chpl"
  int64_t call_tmp2;
#line 218 "ChapelRange.chpl"
  int64_t call_tmp3;
#line 218 "ChapelRange.chpl"
  int64_t call_tmp4;
#line 332 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(332), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 332 "ChapelRange.chpl"
  ret2 = (this6)->_low;
#line 332 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(332), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 332 "ChapelRange.chpl"
  ret3 = (this6)->_high;
#line 332 "ChapelRange.chpl"
  call_tmp = (ret2 > ret3);
#line 332 "ChapelRange.chpl"
  if (call_tmp) /* ZLINE: 332 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 332 "ChapelRange.chpl"
  {
#line 332 "ChapelRange.chpl"
    ret = INT64(0);
#line 332 "ChapelRange.chpl"
    goto _end_length;
#line 332 "ChapelRange.chpl"
  }
#line 334 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(334), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 334 "ChapelRange.chpl"
  ret4 = (this6)->_high;
#line 334 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(334), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 334 "ChapelRange.chpl"
  ret5 = (this6)->_low;
#line 334 "ChapelRange.chpl"
  call_tmp2 = (ret4 - ret5);
#line 334 "ChapelRange.chpl"
  call_tmp3 = (call_tmp2 / INT64(1));
#line 334 "ChapelRange.chpl"
  call_tmp4 = (call_tmp3 + INT64(1));
#line 334 "ChapelRange.chpl"
  ret = call_tmp4;
#line 334 "ChapelRange.chpl"
  _end_length:;
#line 316 "ChapelRange.chpl"
  return ret;
#line 316 "ChapelRange.chpl"
}

#line 316 "ChapelRange.chpl"
/* ChapelRange.chpl:967 */
#line 316 "ChapelRange.chpl"
static void this3(_ref_range_int64_t_bounded_F this6, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
#line 316 "ChapelRange.chpl"
  int64_t ret;
#line 316 "ChapelRange.chpl"
  int64_t ret2;
#line 316 "ChapelRange.chpl"
  int64_t ret3;
#line 316 "ChapelRange.chpl"
  int64_t ret4;
#line 316 "ChapelRange.chpl"
  _tuple_2_star_int64_t type_tmp;
#line 316 "ChapelRange.chpl"
  _tuple_2_star_int64_t call_tmp;
#line 316 "ChapelRange.chpl"
  range_int64_t_bounded_F result;
#line 316 "ChapelRange.chpl"
  int64_t T;
#line 316 "ChapelRange.chpl"
  chpl_bool call_tmp2;
#line 316 "ChapelRange.chpl"
  int64_t T2;
#line 316 "ChapelRange.chpl"
  chpl_bool call_tmp3;
#line 316 "ChapelRange.chpl"
  chpl_bool call_tmp4;
#line 316 "ChapelRange.chpl"
  chpl_bool T3;
#line 316 "ChapelRange.chpl"
  chpl_bool ret5;
#line 316 "ChapelRange.chpl"
  chpl_bool T4;
#line 316 "ChapelRange.chpl"
  chpl_bool ret6;
#line 1005 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(1005), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 1005 "ChapelRange.chpl"
  ret = (this6)->_low;
#line 1006 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(1006), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 1006 "ChapelRange.chpl"
  ret2 = (this6)->_high;
#line 1009 "ChapelRange.chpl"
  ret3 = (other)->_low;
#line 1010 "ChapelRange.chpl"
  ret4 = (other)->_high;
#line 1020 "ChapelRange.chpl"
  *(type_tmp + INT64(0)) = INT64(0);
#line 1020 "ChapelRange.chpl"
  *(type_tmp + INT64(1)) = INT64(0);
#line 1020 "ChapelRange.chpl"
  *(call_tmp + INT64(0)) = INT64(1);
#line 1020 "ChapelRange.chpl"
  *(call_tmp + INT64(1)) = INT64(0);
#line 1020 "ChapelRange.chpl"
  *(type_tmp + INT64(0)) = *(call_tmp + INT64(0));
#line 1020 "ChapelRange.chpl"
  *(type_tmp + INT64(1)) = *(call_tmp + INT64(1));
#line 1034 "ChapelRange.chpl"
  call_tmp2 = (ret > ret3);
#line 1034 "ChapelRange.chpl"
  if (call_tmp2) /* ZLINE: 1034 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1034 "ChapelRange.chpl"
  {
#line 1034 "ChapelRange.chpl"
    T = ret;
#line 1034 "ChapelRange.chpl"
  } else /* ZLINE: 1034 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1034 "ChapelRange.chpl"
  {
#line 1034 "ChapelRange.chpl"
    T = ret3;
#line 1034 "ChapelRange.chpl"
  }
#line 1035 "ChapelRange.chpl"
  call_tmp3 = (ret2 < ret4);
#line 1035 "ChapelRange.chpl"
  if (call_tmp3) /* ZLINE: 1035 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1035 "ChapelRange.chpl"
  {
#line 1035 "ChapelRange.chpl"
    T2 = ret2;
#line 1035 "ChapelRange.chpl"
  } else /* ZLINE: 1035 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1035 "ChapelRange.chpl"
  {
#line 1035 "ChapelRange.chpl"
    T2 = ret4;
#line 1035 "ChapelRange.chpl"
  }
#line 1038 "ChapelRange.chpl"
  call_tmp4 = (! false);
#line 1038 "ChapelRange.chpl"
  if (call_tmp4) /* ZLINE: 1038 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1038 "ChapelRange.chpl"
  {
#line 1038 "ChapelRange.chpl"
    chpl_check_nil(this6, INT64(1038), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 1038 "ChapelRange.chpl"
    ret5 = (this6)->_aligned;
#line 1038 "ChapelRange.chpl"
    if (ret5) /* ZLINE: 1038 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1038 "ChapelRange.chpl"
    {
#line 1038 "ChapelRange.chpl"
      T4 = true;
#line 1038 "ChapelRange.chpl"
    } else /* ZLINE: 1038 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1038 "ChapelRange.chpl"
    {
#line 1038 "ChapelRange.chpl"
      ret6 = (other)->_aligned;
#line 1038 "ChapelRange.chpl"
      T4 = ret6;
#line 1038 "ChapelRange.chpl"
    }
#line 1038 "ChapelRange.chpl"
    T3 = T4;
#line 1038 "ChapelRange.chpl"
  } else /* ZLINE: 1038 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1038 "ChapelRange.chpl"
  {
#line 1038 "ChapelRange.chpl"
    T3 = false;
#line 1038 "ChapelRange.chpl"
  }
#line 1031 "ChapelRange.chpl"
  result = range2(T, T2, INT64(1), INT64(0), T3, _ln, _fn);
#line 1067 "ChapelRange.chpl"
  *(_retArg) = result;
#line 967 "ChapelRange.chpl"
  return;
#line 967 "ChapelRange.chpl"
}

#line 967 "ChapelRange.chpl"
/* ChapelRange.chpl:1089 */
#line 967 "ChapelRange.chpl"
static void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
#line 967 "ChapelRange.chpl"
  chpl_bool call_tmp;
#line 967 "ChapelRange.chpl"
  range_int64_t_bounded_F call_tmp2;
#line 967 "ChapelRange.chpl"
  chpl_bool call_tmp3;
#line 967 "ChapelRange.chpl"
  chpl_bool T;
#line 967 "ChapelRange.chpl"
  chpl_bool call_tmp4;
#line 967 "ChapelRange.chpl"
  int64_t call_tmp5;
#line 967 "ChapelRange.chpl"
  int64_t T2;
#line 967 "ChapelRange.chpl"
  chpl_bool call_tmp6;
#line 967 "ChapelRange.chpl"
  int64_t ret;
#line 967 "ChapelRange.chpl"
  int64_t ret2;
#line 967 "ChapelRange.chpl"
  int64_t call_tmp7;
#line 967 "ChapelRange.chpl"
  int64_t call_tmp8;
#line 967 "ChapelRange.chpl"
  int64_t T3;
#line 967 "ChapelRange.chpl"
  chpl_bool call_tmp9;
#line 967 "ChapelRange.chpl"
  int64_t ret3;
#line 967 "ChapelRange.chpl"
  int64_t ret4;
#line 967 "ChapelRange.chpl"
  int64_t call_tmp10;
#line 967 "ChapelRange.chpl"
  int64_t call_tmp11;
#line 967 "ChapelRange.chpl"
  int64_t ret5;
#line 967 "ChapelRange.chpl"
  chpl_bool ret6;
#line 967 "ChapelRange.chpl"
  range_int64_t_bounded_F call_tmp12;
#line 1096 "ChapelRange.chpl"
  call_tmp = (count == INT64(0));
#line 1096 "ChapelRange.chpl"
  if (call_tmp) /* ZLINE: 1096 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1096 "ChapelRange.chpl"
  {
#line 1098 "ChapelRange.chpl"
    call_tmp2 = range2(INT64(1), INT64(0), INT64(1), INT64(0), false, _ln, _fn);
#line 1098 "ChapelRange.chpl"
    *(_retArg) = call_tmp2;
#line 1098 "ChapelRange.chpl"
    goto _end_chpl_count_help;
#line 1098 "ChapelRange.chpl"
  }
#line 1109 "ChapelRange.chpl"
  call_tmp3 = (! false);
#line 1109 "ChapelRange.chpl"
  if (call_tmp3) /* ZLINE: 1109 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1109 "ChapelRange.chpl"
  {
#line 1109 "ChapelRange.chpl"
    call_tmp4 = (count < INT64(0));
#line 1109 "ChapelRange.chpl"
    T = call_tmp4;
#line 1109 "ChapelRange.chpl"
  } else /* ZLINE: 1109 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1109 "ChapelRange.chpl"
  {
#line 1109 "ChapelRange.chpl"
    T = false;
#line 1109 "ChapelRange.chpl"
  }
#line 1109 "ChapelRange.chpl"
  if (T) /* ZLINE: 1109 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1109 "ChapelRange.chpl"
  {
#line 1110 "ChapelRange.chpl"
    halt("With a negative count, the range must have a last index.", _ln, _fn);
#line 1110 "ChapelRange.chpl"
  }
#line 1137 "ChapelRange.chpl"
  call_tmp5 = (count * INT64(1));
#line 1140 "ChapelRange.chpl"
  call_tmp6 = (call_tmp5 > INT64(0));
#line 1140 "ChapelRange.chpl"
  if (call_tmp6) /* ZLINE: 1140 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1140 "ChapelRange.chpl"
  {
#line 1140 "ChapelRange.chpl"
    ret = (r)->_low;
#line 1140 "ChapelRange.chpl"
    T2 = ret;
#line 1140 "ChapelRange.chpl"
  } else /* ZLINE: 1140 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1140 "ChapelRange.chpl"
  {
#line 1140 "ChapelRange.chpl"
    ret2 = (r)->_high;
#line 1140 "ChapelRange.chpl"
    call_tmp7 = (call_tmp5 + INT64(1));
#line 1140 "ChapelRange.chpl"
    call_tmp8 = chpl__add(ret2, call_tmp7, _ln, _fn);
#line 1140 "ChapelRange.chpl"
    T2 = call_tmp8;
#line 1140 "ChapelRange.chpl"
  }
#line 1143 "ChapelRange.chpl"
  call_tmp9 = (call_tmp5 < INT64(0));
#line 1143 "ChapelRange.chpl"
  if (call_tmp9) /* ZLINE: 1143 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1143 "ChapelRange.chpl"
  {
#line 1143 "ChapelRange.chpl"
    ret3 = (r)->_high;
#line 1143 "ChapelRange.chpl"
    T3 = ret3;
#line 1143 "ChapelRange.chpl"
  } else /* ZLINE: 1143 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1143 "ChapelRange.chpl"
  {
#line 1143 "ChapelRange.chpl"
    ret4 = (r)->_low;
#line 1143 "ChapelRange.chpl"
    call_tmp10 = (call_tmp5 - INT64(1));
#line 1143 "ChapelRange.chpl"
    call_tmp11 = chpl__add(ret4, call_tmp10, _ln, _fn);
#line 1143 "ChapelRange.chpl"
    T3 = call_tmp11;
#line 1143 "ChapelRange.chpl"
  }
#line 1157 "ChapelRange.chpl"
  ret5 = (r)->_alignment;
#line 1158 "ChapelRange.chpl"
  ret6 = (r)->_aligned;
#line 1151 "ChapelRange.chpl"
  call_tmp12 = range2(T2, T3, INT64(1), ret5, ret6, _ln, _fn);
#line 1151 "ChapelRange.chpl"
  *(_retArg) = call_tmp12;
#line 1151 "ChapelRange.chpl"
  _end_chpl_count_help:;
#line 1089 "ChapelRange.chpl"
  return;
#line 1089 "ChapelRange.chpl"
}

#line 1089 "ChapelRange.chpl"
/* ChapelRange.chpl:1161 */
#line 1089 "ChapelRange.chpl"
static void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
#line 1089 "ChapelRange.chpl"
  range_int64_t_bounded_F call_tmp;
#line 1089 "ChapelRange.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 1162 "ChapelRange.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 1162 "ChapelRange.chpl"
  chpl_count_help(r, count, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1162 "ChapelRange.chpl"
  *(_retArg) = call_tmp;
#line 1161 "ChapelRange.chpl"
  return;
#line 1161 "ChapelRange.chpl"
}

#line 1161 "ChapelRange.chpl"
/* ChapelRange.chpl:1180 */
#line 1161 "ChapelRange.chpl"
static chpl_bool chpl_checkIfRangeIterWillOverflow(int64_t low, int64_t high, int64_t stride, int64_t first, int64_t last, chpl_bool shouldHalt, int64_t _ln, c_string _fn) {
#line 1161 "ChapelRange.chpl"
  chpl_bool ret;
#line 1161 "ChapelRange.chpl"
  chpl_bool call_tmp;
#line 1161 "ChapelRange.chpl"
  chpl_bool willOverFlow;
#line 1161 "ChapelRange.chpl"
  chpl_bool call_tmp2;
#line 1161 "ChapelRange.chpl"
  chpl_bool T;
#line 1161 "ChapelRange.chpl"
  chpl_bool call_tmp3;
#line 1161 "ChapelRange.chpl"
  int64_t call_tmp4;
#line 1161 "ChapelRange.chpl"
  chpl_bool call_tmp5;
#line 1161 "ChapelRange.chpl"
  chpl_bool call_tmp6;
#line 1161 "ChapelRange.chpl"
  chpl_bool T2;
#line 1161 "ChapelRange.chpl"
  chpl_bool call_tmp7;
#line 1161 "ChapelRange.chpl"
  int64_t call_tmp8;
#line 1161 "ChapelRange.chpl"
  chpl_bool call_tmp9;
#line 1161 "ChapelRange.chpl"
  chpl_bool T3;
#line 1183 "ChapelRange.chpl"
  call_tmp = (low > high);
#line 1183 "ChapelRange.chpl"
  if (call_tmp) /* ZLINE: 1184 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1183 "ChapelRange.chpl"
  {
#line 1184 "ChapelRange.chpl"
    ret = false;
#line 1184 "ChapelRange.chpl"
    goto _end_chpl_checkIfRangeIterWillOverflow;
#line 1184 "ChapelRange.chpl"
  }
#line 1187 "ChapelRange.chpl"
  willOverFlow = false;
#line 1189 "ChapelRange.chpl"
  call_tmp2 = (last > INT64(0));
#line 1189 "ChapelRange.chpl"
  if (call_tmp2) /* ZLINE: 1189 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1189 "ChapelRange.chpl"
  {
#line 1189 "ChapelRange.chpl"
    call_tmp3 = (stride > INT64(0));
#line 1189 "ChapelRange.chpl"
    T = call_tmp3;
#line 1189 "ChapelRange.chpl"
  } else /* ZLINE: 1189 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1189 "ChapelRange.chpl"
  {
#line 1189 "ChapelRange.chpl"
    T = false;
#line 1189 "ChapelRange.chpl"
  }
#line 1189 "ChapelRange.chpl"
  if (T) /* ZLINE: 1190 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1189 "ChapelRange.chpl"
  {
#line 1190 "ChapelRange.chpl"
    call_tmp4 = (INT64(9223372036854775807) - last);
#line 1190 "ChapelRange.chpl"
    call_tmp5 = (stride > call_tmp4);
#line 1190 "ChapelRange.chpl"
    if (call_tmp5) /* ZLINE: 1191 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1190 "ChapelRange.chpl"
    {
#line 1191 "ChapelRange.chpl"
      willOverFlow = true;
#line 1191 "ChapelRange.chpl"
    }
#line 1191 "ChapelRange.chpl"
  } else /* ZLINE: 1189 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1191 "ChapelRange.chpl"
  {
#line 1193 "ChapelRange.chpl"
    call_tmp6 = (last < INT64(0));
#line 1193 "ChapelRange.chpl"
    if (call_tmp6) /* ZLINE: 1193 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1193 "ChapelRange.chpl"
    {
#line 1193 "ChapelRange.chpl"
      call_tmp7 = (stride < INT64(0));
#line 1193 "ChapelRange.chpl"
      T2 = call_tmp7;
#line 1193 "ChapelRange.chpl"
    } else /* ZLINE: 1193 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1193 "ChapelRange.chpl"
    {
#line 1193 "ChapelRange.chpl"
      T2 = false;
#line 1193 "ChapelRange.chpl"
    }
#line 1193 "ChapelRange.chpl"
    if (T2) /* ZLINE: 1194 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1193 "ChapelRange.chpl"
    {
#line 1194 "ChapelRange.chpl"
      call_tmp8 = (-INT64(9223372036854775807) - INT64(1) - last);
#line 1194 "ChapelRange.chpl"
      call_tmp9 = (stride < call_tmp8);
#line 1194 "ChapelRange.chpl"
      if (call_tmp9) /* ZLINE: 1195 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1194 "ChapelRange.chpl"
      {
#line 1195 "ChapelRange.chpl"
        willOverFlow = true;
#line 1195 "ChapelRange.chpl"
      }
#line 1195 "ChapelRange.chpl"
    }
#line 1195 "ChapelRange.chpl"
  }
#line 1215 "ChapelRange.chpl"
  if (willOverFlow) /* ZLINE: 1215 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1215 "ChapelRange.chpl"
  {
#line 1215 "ChapelRange.chpl"
    T3 = shouldHalt;
#line 1215 "ChapelRange.chpl"
  } else /* ZLINE: 1215 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1215 "ChapelRange.chpl"
  {
#line 1215 "ChapelRange.chpl"
    T3 = false;
#line 1215 "ChapelRange.chpl"
  }
#line 1215 "ChapelRange.chpl"
  if (T3) /* ZLINE: 1216 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1215 "ChapelRange.chpl"
  {
#line 1216 "ChapelRange.chpl"
    halt("Iteration over a bounded range may be incorrect due to overflow.", _ln, _fn);
#line 1216 "ChapelRange.chpl"
  }
#line 1218 "ChapelRange.chpl"
  ret = willOverFlow;
#line 1218 "ChapelRange.chpl"
  _end_chpl_checkIfRangeIterWillOverflow:;
#line 1180 "ChapelRange.chpl"
  return ret;
#line 1180 "ChapelRange.chpl"
}

#line 1180 "ChapelRange.chpl"
/* ChapelRange.chpl:1222 */
#line 1180 "ChapelRange.chpl"
static chpl_bool checkIfIterWillOverflow(_ref_range_int64_t_bounded_F this6, chpl_bool shouldHalt, int64_t _ln, c_string _fn) {
#line 1180 "ChapelRange.chpl"
  int64_t ret;
#line 1180 "ChapelRange.chpl"
  int64_t ret2;
#line 1180 "ChapelRange.chpl"
  int64_t ret3;
#line 1180 "ChapelRange.chpl"
  int64_t ret4;
#line 1180 "ChapelRange.chpl"
  chpl_bool call_tmp;
#line 1223 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(1223), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 1223 "ChapelRange.chpl"
  ret = (this6)->_low;
#line 1223 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(1223), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 1223 "ChapelRange.chpl"
  ret2 = (this6)->_high;
#line 1224 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(1224), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 1224 "ChapelRange.chpl"
  ret3 = (this6)->_low;
#line 1224 "ChapelRange.chpl"
  chpl_check_nil(this6, INT64(1224), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl");
#line 1224 "ChapelRange.chpl"
  ret4 = (this6)->_high;
#line 1223 "ChapelRange.chpl"
  call_tmp = chpl_checkIfRangeIterWillOverflow(ret, ret2, INT64(1), ret3, ret4, shouldHalt, _ln, _fn);
#line 1222 "ChapelRange.chpl"
  return call_tmp;
#line 1222 "ChapelRange.chpl"
}

#line 1222 "ChapelRange.chpl"
/* ChapelRange.chpl:1885 */
#line 1222 "ChapelRange.chpl"
static int64_t chpl__add(int64_t a, int64_t b, int64_t _ln, c_string _fn) {
#line 1222 "ChapelRange.chpl"
  int64_t ret;
#line 1222 "ChapelRange.chpl"
  chpl_bool call_tmp;
#line 1222 "ChapelRange.chpl"
  chpl_bool T;
#line 1222 "ChapelRange.chpl"
  chpl_bool call_tmp2;
#line 1222 "ChapelRange.chpl"
  chpl_bool T2;
#line 1222 "ChapelRange.chpl"
  int64_t call_tmp3;
#line 1222 "ChapelRange.chpl"
  chpl_bool call_tmp4;
#line 1222 "ChapelRange.chpl"
  chpl_bool call_tmp5;
#line 1222 "ChapelRange.chpl"
  chpl_bool T3;
#line 1222 "ChapelRange.chpl"
  chpl_bool call_tmp6;
#line 1222 "ChapelRange.chpl"
  chpl_bool T4;
#line 1222 "ChapelRange.chpl"
  int64_t call_tmp7;
#line 1222 "ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 1222 "ChapelRange.chpl"
  int64_t call_tmp9;
#line 1890 "ChapelRange.chpl"
  call_tmp = (a > INT64(0));
#line 1890 "ChapelRange.chpl"
  if (call_tmp) /* ZLINE: 1890 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1890 "ChapelRange.chpl"
  {
#line 1890 "ChapelRange.chpl"
    call_tmp2 = (b > INT64(0));
#line 1890 "ChapelRange.chpl"
    T = call_tmp2;
#line 1890 "ChapelRange.chpl"
  } else /* ZLINE: 1890 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1890 "ChapelRange.chpl"
  {
#line 1890 "ChapelRange.chpl"
    T = false;
#line 1890 "ChapelRange.chpl"
  }
#line 1890 "ChapelRange.chpl"
  if (T) /* ZLINE: 1890 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1890 "ChapelRange.chpl"
  {
#line 1890 "ChapelRange.chpl"
    call_tmp3 = (INT64(9223372036854775807) - a);
#line 1890 "ChapelRange.chpl"
    call_tmp4 = (b > call_tmp3);
#line 1890 "ChapelRange.chpl"
    T2 = call_tmp4;
#line 1890 "ChapelRange.chpl"
  } else /* ZLINE: 1890 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1890 "ChapelRange.chpl"
  {
#line 1890 "ChapelRange.chpl"
    T2 = false;
#line 1890 "ChapelRange.chpl"
  }
#line 1890 "ChapelRange.chpl"
  if (T2) /* ZLINE: 1890 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1890 "ChapelRange.chpl"
  {
#line 1890 "ChapelRange.chpl"
    ret = INT64(9223372036854775807);
#line 1890 "ChapelRange.chpl"
    goto _end_chpl__add;
#line 1890 "ChapelRange.chpl"
  }
#line 1891 "ChapelRange.chpl"
  call_tmp5 = (a < INT64(0));
#line 1891 "ChapelRange.chpl"
  if (call_tmp5) /* ZLINE: 1891 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1891 "ChapelRange.chpl"
  {
#line 1891 "ChapelRange.chpl"
    call_tmp6 = (b < INT64(0));
#line 1891 "ChapelRange.chpl"
    T3 = call_tmp6;
#line 1891 "ChapelRange.chpl"
  } else /* ZLINE: 1891 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1891 "ChapelRange.chpl"
  {
#line 1891 "ChapelRange.chpl"
    T3 = false;
#line 1891 "ChapelRange.chpl"
  }
#line 1891 "ChapelRange.chpl"
  if (T3) /* ZLINE: 1891 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1891 "ChapelRange.chpl"
  {
#line 1891 "ChapelRange.chpl"
    call_tmp7 = (-INT64(9223372036854775807) - INT64(1) - a);
#line 1891 "ChapelRange.chpl"
    call_tmp8 = (b < call_tmp7);
#line 1891 "ChapelRange.chpl"
    T4 = call_tmp8;
#line 1891 "ChapelRange.chpl"
  } else /* ZLINE: 1891 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1891 "ChapelRange.chpl"
  {
#line 1891 "ChapelRange.chpl"
    T4 = false;
#line 1891 "ChapelRange.chpl"
  }
#line 1891 "ChapelRange.chpl"
  if (T4) /* ZLINE: 1891 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelRange.chpl */
#line 1891 "ChapelRange.chpl"
  {
#line 1891 "ChapelRange.chpl"
    ret = -INT64(9223372036854775807) - INT64(1);
#line 1891 "ChapelRange.chpl"
    goto _end_chpl__add;
#line 1891 "ChapelRange.chpl"
  }
#line 1901 "ChapelRange.chpl"
  call_tmp9 = (a + b);
#line 1901 "ChapelRange.chpl"
  ret = call_tmp9;
#line 1901 "ChapelRange.chpl"
  _end_chpl__add:;
#line 1885 "ChapelRange.chpl"
  return ret;
#line 1885 "ChapelRange.chpl"
}


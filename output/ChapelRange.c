/* ChapelRange.chpl:86 */
static void chpl__init_ChapelRange(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 86 "ChapelRange.chpl"
  if (chpl__init_ChapelRange_p) /* ZLINE: 86 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
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
  chpl__init_ChapelRange_p = UINT8(true);
#line 86 "ChapelRange.chpl"
  *(refIndentLevel) -= INT64(1);
#line 86 "ChapelRange.chpl"
  _exit_chpl__init_ChapelRange:;
#line 86 "ChapelRange.chpl"
  return;
#line 86 "ChapelRange.chpl"
}

#line 86 "ChapelRange.chpl"
/* ChapelRange.chpl:139 */
#line 86 "ChapelRange.chpl"
static range_int64_t_bounded_F _construct_range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_bounded_F* const meme, int64_t _ln, int32_t _fn) {
#line 86 "ChapelRange.chpl"
  range_int64_t_bounded_F this5;
#line 139 "ChapelRange.chpl"
  this5 = *(meme);
#line 145 "ChapelRange.chpl"
  (&this5)->_low = _low;
#line 146 "ChapelRange.chpl"
  (&this5)->_high = _high;
#line 147 "ChapelRange.chpl"
  (&this5)->_stride = _stride;
#line 148 "ChapelRange.chpl"
  (&this5)->_alignment = _alignment;
#line 149 "ChapelRange.chpl"
  (&this5)->_aligned = _aligned;
#line 139 "ChapelRange.chpl"
  return this5;
#line 139 "ChapelRange.chpl"
}

#line 139 "ChapelRange.chpl"
/* ChapelRange.chpl:139 */
#line 139 "ChapelRange.chpl"
static range_int64_t_boundedLow_F _construct_range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, range_int64_t_boundedLow_F* const meme, int64_t _ln, int32_t _fn) {
#line 139 "ChapelRange.chpl"
  range_int64_t_boundedLow_F this5;
#line 139 "ChapelRange.chpl"
  this5 = *(meme);
#line 145 "ChapelRange.chpl"
  (&this5)->_low = _low;
#line 146 "ChapelRange.chpl"
  (&this5)->_high = _high;
#line 147 "ChapelRange.chpl"
  (&this5)->_stride = _stride;
#line 148 "ChapelRange.chpl"
  (&this5)->_alignment = _alignment;
#line 149 "ChapelRange.chpl"
  (&this5)->_aligned = _aligned;
#line 139 "ChapelRange.chpl"
  return this5;
#line 139 "ChapelRange.chpl"
}

#line 139 "ChapelRange.chpl"
/* ChapelRange.chpl:175 */
#line 139 "ChapelRange.chpl"
static range_int64_t_bounded_F range2(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, int32_t _fn) {
#line 139 "ChapelRange.chpl"
  range_int64_t_bounded_F this5;
#line 139 "ChapelRange.chpl"
  range_int64_t_bounded_F this6;
#line 139 "ChapelRange.chpl"
  range_int64_t_bounded_F wrap_call_tmp;
#line 139 "ChapelRange.chpl"
  _ref_int64_t call_tmp = NULL;
#line 139 "ChapelRange.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 139 "ChapelRange.chpl"
  _ref_int64_t call_tmp3 = NULL;
#line 139 "ChapelRange.chpl"
  chpl_bool call_tmp4;
#line 139 "ChapelRange.chpl"
  _ref_chpl_bool call_tmp5 = NULL;
#line 175 "ChapelRange.chpl"
  (&this6)->_low = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_high = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_stride = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_alignment = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_aligned = UINT8(false);
#line 175 "ChapelRange.chpl"
  (&this6)->_low = INT64(1);
#line 175 "ChapelRange.chpl"
  (&this6)->_high = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_stride = INT64(1);
#line 175 "ChapelRange.chpl"
  (&this6)->_alignment = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_aligned = UINT8(false);
#line 175 "ChapelRange.chpl"
  wrap_call_tmp = _construct_range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), &this6, _ln, _fn);
#line 175 "ChapelRange.chpl"
  this5 = wrap_call_tmp;
#line 184 "ChapelRange.chpl"
  call_tmp = &((&this5)->_low);
#line 184 "ChapelRange.chpl"
  *(call_tmp) = _low;
#line 185 "ChapelRange.chpl"
  call_tmp2 = &((&this5)->_high);
#line 185 "ChapelRange.chpl"
  *(call_tmp2) = _high;
#line 187 "ChapelRange.chpl"
  call_tmp3 = &((&this5)->_alignment);
#line 187 "ChapelRange.chpl"
  *(call_tmp3) = _alignment;
#line 191 "ChapelRange.chpl"
  call_tmp4 = (_stride == INT64(1));
#line 191 "ChapelRange.chpl"
  assert_chpl(call_tmp4, _ln, _fn);
#line 193 "ChapelRange.chpl"
  call_tmp5 = &((&this5)->_aligned);
#line 193 "ChapelRange.chpl"
  *(call_tmp5) = _aligned;
#line 175 "ChapelRange.chpl"
  return this5;
#line 175 "ChapelRange.chpl"
}

#line 175 "ChapelRange.chpl"
/* ChapelRange.chpl:175 */
#line 175 "ChapelRange.chpl"
static range_int64_t_boundedLow_F range(int64_t _low, int64_t _high, int64_t _stride, int64_t _alignment, chpl_bool _aligned, int64_t _ln, int32_t _fn) {
#line 175 "ChapelRange.chpl"
  range_int64_t_boundedLow_F this5;
#line 175 "ChapelRange.chpl"
  range_int64_t_boundedLow_F this6;
#line 175 "ChapelRange.chpl"
  range_int64_t_boundedLow_F wrap_call_tmp;
#line 175 "ChapelRange.chpl"
  _ref_int64_t call_tmp = NULL;
#line 175 "ChapelRange.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 175 "ChapelRange.chpl"
  _ref_int64_t call_tmp3 = NULL;
#line 175 "ChapelRange.chpl"
  chpl_bool call_tmp4;
#line 175 "ChapelRange.chpl"
  _ref_chpl_bool call_tmp5 = NULL;
#line 175 "ChapelRange.chpl"
  (&this6)->_low = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_high = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_stride = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_alignment = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_aligned = UINT8(false);
#line 175 "ChapelRange.chpl"
  (&this6)->_low = INT64(1);
#line 175 "ChapelRange.chpl"
  (&this6)->_high = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_stride = INT64(1);
#line 175 "ChapelRange.chpl"
  (&this6)->_alignment = INT64(0);
#line 175 "ChapelRange.chpl"
  (&this6)->_aligned = UINT8(false);
#line 175 "ChapelRange.chpl"
  wrap_call_tmp = _construct_range(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), &this6, _ln, _fn);
#line 175 "ChapelRange.chpl"
  this5 = wrap_call_tmp;
#line 184 "ChapelRange.chpl"
  call_tmp = &((&this5)->_low);
#line 184 "ChapelRange.chpl"
  *(call_tmp) = _low;
#line 185 "ChapelRange.chpl"
  call_tmp2 = &((&this5)->_high);
#line 185 "ChapelRange.chpl"
  *(call_tmp2) = _high;
#line 187 "ChapelRange.chpl"
  call_tmp3 = &((&this5)->_alignment);
#line 187 "ChapelRange.chpl"
  *(call_tmp3) = _alignment;
#line 191 "ChapelRange.chpl"
  call_tmp4 = (_stride == INT64(1));
#line 191 "ChapelRange.chpl"
  assert_chpl(call_tmp4, _ln, _fn);
#line 193 "ChapelRange.chpl"
  call_tmp5 = &((&this5)->_aligned);
#line 193 "ChapelRange.chpl"
  *(call_tmp5) = _aligned;
#line 175 "ChapelRange.chpl"
  return this5;
#line 175 "ChapelRange.chpl"
}

#line 175 "ChapelRange.chpl"
/* ChapelRange.chpl:210 */
#line 175 "ChapelRange.chpl"
static void chpl_build_bounded_range(int64_t low, int64_t high, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn) {
#line 175 "ChapelRange.chpl"
  range_int64_t_bounded_F wrap_call_tmp;
#line 211 "ChapelRange.chpl"
  wrap_call_tmp = range2(low, high, INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 211 "ChapelRange.chpl"
  *(_retArg) = wrap_call_tmp;
#line 210 "ChapelRange.chpl"
  return;
#line 210 "ChapelRange.chpl"
}

#line 210 "ChapelRange.chpl"
/* ChapelRange.chpl:219 */
#line 210 "ChapelRange.chpl"
static void chpl_build_low_bounded_range(int64_t low, _ref_range_int64_t_boundedLow_F _retArg, int64_t _ln, int32_t _fn) {
#line 210 "ChapelRange.chpl"
  range_int64_t_boundedLow_F wrap_call_tmp;
#line 220 "ChapelRange.chpl"
  wrap_call_tmp = range(low, INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 220 "ChapelRange.chpl"
  *(_retArg) = wrap_call_tmp;
#line 219 "ChapelRange.chpl"
  return;
#line 219 "ChapelRange.chpl"
}

#line 219 "ChapelRange.chpl"
/* ChapelRange.chpl:322 */
#line 219 "ChapelRange.chpl"
static int64_t length(_ref_range_int64_t_bounded_F this5, int64_t _ln, int32_t _fn) {
#line 219 "ChapelRange.chpl"
  int64_t ret;
#line 219 "ChapelRange.chpl"
  int64_t coerce_tmp;
#line 219 "ChapelRange.chpl"
  int64_t coerce_tmp2;
#line 219 "ChapelRange.chpl"
  chpl_bool call_tmp;
#line 219 "ChapelRange.chpl"
  int64_t ret2;
#line 219 "ChapelRange.chpl"
  int64_t ret3;
#line 219 "ChapelRange.chpl"
  int64_t call_tmp2;
#line 219 "ChapelRange.chpl"
  int64_t call_tmp3;
#line 219 "ChapelRange.chpl"
  int64_t call_tmp4;
#line 338 "ChapelRange.chpl"
  chpl_check_nil(this5, INT64(338), INT64(20));
#line 338 "ChapelRange.chpl"
  coerce_tmp = (this5)->_low;
#line 338 "ChapelRange.chpl"
  chpl_check_nil(this5, INT64(338), INT64(20));
#line 338 "ChapelRange.chpl"
  coerce_tmp2 = (this5)->_high;
#line 338 "ChapelRange.chpl"
  call_tmp = (coerce_tmp > coerce_tmp2);
#line 338 "ChapelRange.chpl"
  if (call_tmp) /* ZLINE: 338 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 338 "ChapelRange.chpl"
  {
#line 338 "ChapelRange.chpl"
    ret = INT64(0);
#line 338 "ChapelRange.chpl"
    goto _end_length;
#line 338 "ChapelRange.chpl"
  }
#line 340 "ChapelRange.chpl"
  chpl_check_nil(this5, INT64(340), INT64(20));
#line 340 "ChapelRange.chpl"
  ret2 = (this5)->_high;
#line 340 "ChapelRange.chpl"
  chpl_check_nil(this5, INT64(340), INT64(20));
#line 340 "ChapelRange.chpl"
  ret3 = (this5)->_low;
#line 340 "ChapelRange.chpl"
  call_tmp2 = (ret2 - ret3);
#line 340 "ChapelRange.chpl"
  call_tmp3 = (call_tmp2 / INT64(1));
#line 340 "ChapelRange.chpl"
  call_tmp4 = (call_tmp3 + INT64(1));
#line 340 "ChapelRange.chpl"
  ret = call_tmp4;
#line 340 "ChapelRange.chpl"
  _end_length:;
#line 322 "ChapelRange.chpl"
  return ret;
#line 322 "ChapelRange.chpl"
}

#line 322 "ChapelRange.chpl"
/* ChapelRange.chpl:1002 */
#line 322 "ChapelRange.chpl"
static void this3(_ref_range_int64_t_bounded_F this5, range_int64_t_bounded_F* const other, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn) {
#line 322 "ChapelRange.chpl"
  int64_t call_tmp;
#line 322 "ChapelRange.chpl"
  int64_t call_tmp2;
#line 322 "ChapelRange.chpl"
  int64_t call_tmp3;
#line 322 "ChapelRange.chpl"
  int64_t call_tmp4;
#line 322 "ChapelRange.chpl"
  _tuple_2_star_int64_t type_tmp;
#line 322 "ChapelRange.chpl"
  _tuple_2_star_int64_t call_tmp5;
#line 322 "ChapelRange.chpl"
  int64_t newlo;
#line 322 "ChapelRange.chpl"
  int64_t T;
#line 322 "ChapelRange.chpl"
  chpl_bool call_tmp6;
#line 322 "ChapelRange.chpl"
  int64_t newhi;
#line 322 "ChapelRange.chpl"
  int64_t T2;
#line 322 "ChapelRange.chpl"
  chpl_bool call_tmp7;
#line 322 "ChapelRange.chpl"
  range_int64_t_bounded_F result;
#line 322 "ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 322 "ChapelRange.chpl"
  chpl_bool T3;
#line 322 "ChapelRange.chpl"
  chpl_bool T4;
#line 322 "ChapelRange.chpl"
  chpl_bool coerce_tmp;
#line 322 "ChapelRange.chpl"
  chpl_bool coerce_tmp2;
#line 1040 "ChapelRange.chpl"
  chpl_check_nil(this5, INT64(1040), INT64(20));
#line 1040 "ChapelRange.chpl"
  call_tmp = (this5)->_low;
#line 1041 "ChapelRange.chpl"
  chpl_check_nil(this5, INT64(1041), INT64(20));
#line 1041 "ChapelRange.chpl"
  call_tmp2 = (this5)->_high;
#line 1044 "ChapelRange.chpl"
  call_tmp3 = (other)->_low;
#line 1045 "ChapelRange.chpl"
  call_tmp4 = (other)->_high;
#line 1055 "ChapelRange.chpl"
  *(type_tmp + INT64(0)) = INT64(0);
#line 1055 "ChapelRange.chpl"
  *(type_tmp + INT64(1)) = INT64(0);
#line 1055 "ChapelRange.chpl"
  *(call_tmp5 + INT64(0)) = INT64(1);
#line 1055 "ChapelRange.chpl"
  *(call_tmp5 + INT64(1)) = INT64(0);
#line 1055 "ChapelRange.chpl"
  *(type_tmp + INT64(0)) = *(call_tmp5 + INT64(0));
#line 1055 "ChapelRange.chpl"
  *(type_tmp + INT64(1)) = *(call_tmp5 + INT64(1));
#line 1130 "ChapelRange.chpl"
  call_tmp6 = (call_tmp > call_tmp3);
#line 1130 "ChapelRange.chpl"
  if (call_tmp6) /* ZLINE: 1130 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1130 "ChapelRange.chpl"
  {
#line 1130 "ChapelRange.chpl"
    T = call_tmp;
#line 1130 "ChapelRange.chpl"
  } else /* ZLINE: 1130 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1130 "ChapelRange.chpl"
  {
#line 1130 "ChapelRange.chpl"
    T = call_tmp3;
#line 1130 "ChapelRange.chpl"
  }
#line 1130 "ChapelRange.chpl"
  newlo = T;
#line 1131 "ChapelRange.chpl"
  call_tmp7 = (call_tmp2 < call_tmp4);
#line 1131 "ChapelRange.chpl"
  if (call_tmp7) /* ZLINE: 1131 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1131 "ChapelRange.chpl"
  {
#line 1131 "ChapelRange.chpl"
    T2 = call_tmp2;
#line 1131 "ChapelRange.chpl"
  } else /* ZLINE: 1131 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1131 "ChapelRange.chpl"
  {
#line 1131 "ChapelRange.chpl"
    T2 = call_tmp4;
#line 1131 "ChapelRange.chpl"
  }
#line 1131 "ChapelRange.chpl"
  newhi = T2;
#line 1144 "ChapelRange.chpl"
  call_tmp8 = (! UINT8(false));
#line 1144 "ChapelRange.chpl"
  if (call_tmp8) /* ZLINE: 1144 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1144 "ChapelRange.chpl"
  {
#line 1144 "ChapelRange.chpl"
    chpl_check_nil(this5, INT64(1144), INT64(20));
#line 1144 "ChapelRange.chpl"
    coerce_tmp = (this5)->_aligned;
#line 1144 "ChapelRange.chpl"
    if (coerce_tmp) /* ZLINE: 1144 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1144 "ChapelRange.chpl"
    {
#line 1144 "ChapelRange.chpl"
      T4 = UINT8(true);
#line 1144 "ChapelRange.chpl"
    } else /* ZLINE: 1144 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1144 "ChapelRange.chpl"
    {
#line 1144 "ChapelRange.chpl"
      coerce_tmp2 = (other)->_aligned;
#line 1144 "ChapelRange.chpl"
      T4 = coerce_tmp2;
#line 1144 "ChapelRange.chpl"
    }
#line 1144 "ChapelRange.chpl"
    T3 = T4;
#line 1144 "ChapelRange.chpl"
  } else /* ZLINE: 1144 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1144 "ChapelRange.chpl"
  {
#line 1144 "ChapelRange.chpl"
    T3 = UINT8(false);
#line 1144 "ChapelRange.chpl"
  }
#line 1137 "ChapelRange.chpl"
  result = range2(newlo, newhi, INT64(1), INT64(0), T3, _ln, _fn);
#line 1173 "ChapelRange.chpl"
  *(_retArg) = result;
#line 1002 "ChapelRange.chpl"
  return;
#line 1002 "ChapelRange.chpl"
}

#line 1002 "ChapelRange.chpl"
/* ChapelRange.chpl:1195 */
#line 1002 "ChapelRange.chpl"
static void chpl_count_help(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn) {
#line 1002 "ChapelRange.chpl"
  string local__str_literal_664;
#line 1002 "ChapelRange.chpl"
  chpl_bool call_tmp;
#line 1002 "ChapelRange.chpl"
  range_int64_t_bounded_F call_tmp2;
#line 1002 "ChapelRange.chpl"
  chpl_bool call_tmp3;
#line 1002 "ChapelRange.chpl"
  chpl_bool T;
#line 1002 "ChapelRange.chpl"
  chpl_bool call_tmp4;
#line 1002 "ChapelRange.chpl"
  int64_t call_tmp5;
#line 1002 "ChapelRange.chpl"
  int64_t T2;
#line 1002 "ChapelRange.chpl"
  chpl_bool call_tmp6;
#line 1002 "ChapelRange.chpl"
  int64_t call_tmp7;
#line 1002 "ChapelRange.chpl"
  int64_t call_tmp8;
#line 1002 "ChapelRange.chpl"
  int64_t call_tmp9;
#line 1002 "ChapelRange.chpl"
  int64_t coerce_tmp;
#line 1002 "ChapelRange.chpl"
  int64_t T3;
#line 1002 "ChapelRange.chpl"
  chpl_bool call_tmp10;
#line 1002 "ChapelRange.chpl"
  int64_t call_tmp11;
#line 1002 "ChapelRange.chpl"
  int64_t call_tmp12;
#line 1002 "ChapelRange.chpl"
  int64_t call_tmp13;
#line 1002 "ChapelRange.chpl"
  int64_t coerce_tmp2;
#line 1002 "ChapelRange.chpl"
  range_int64_t_bounded_F call_tmp14;
#line 1002 "ChapelRange.chpl"
  int64_t coerce_tmp3;
#line 1002 "ChapelRange.chpl"
  chpl_bool coerce_tmp4;
#line 1216 "ChapelRange.chpl"
  local__str_literal_664 = _str_literal_664;
#line 1202 "ChapelRange.chpl"
  call_tmp = (count == INT64(0));
#line 1202 "ChapelRange.chpl"
  if (call_tmp) /* ZLINE: 1202 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1202 "ChapelRange.chpl"
  {
#line 1204 "ChapelRange.chpl"
    call_tmp2 = range2(INT64(1), INT64(0), INT64(1), INT64(0), UINT8(false), _ln, _fn);
#line 1204 "ChapelRange.chpl"
    *(_retArg) = call_tmp2;
#line 1204 "ChapelRange.chpl"
    goto _end_chpl_count_help;
#line 1204 "ChapelRange.chpl"
  }
#line 1215 "ChapelRange.chpl"
  call_tmp3 = (! UINT8(false));
#line 1215 "ChapelRange.chpl"
  if (call_tmp3) /* ZLINE: 1215 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1215 "ChapelRange.chpl"
  {
#line 1215 "ChapelRange.chpl"
    call_tmp4 = (count < INT64(0));
#line 1215 "ChapelRange.chpl"
    T = call_tmp4;
#line 1215 "ChapelRange.chpl"
  } else /* ZLINE: 1215 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1215 "ChapelRange.chpl"
  {
#line 1215 "ChapelRange.chpl"
    T = UINT8(false);
#line 1215 "ChapelRange.chpl"
  }
#line 1215 "ChapelRange.chpl"
  if (T) /* ZLINE: 1215 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1215 "ChapelRange.chpl"
  {
#line 1216 "ChapelRange.chpl"
    halt(&local__str_literal_664, _ln, _fn);
#line 1216 "ChapelRange.chpl"
  }
#line 1243 "ChapelRange.chpl"
  call_tmp5 = (count * INT64(1));
#line 1246 "ChapelRange.chpl"
  call_tmp6 = (call_tmp5 > INT64(0));
#line 1246 "ChapelRange.chpl"
  if (call_tmp6) /* ZLINE: 1246 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1246 "ChapelRange.chpl"
  {
#line 1246 "ChapelRange.chpl"
    call_tmp7 = (r)->_low;
#line 1246 "ChapelRange.chpl"
    T2 = call_tmp7;
#line 1246 "ChapelRange.chpl"
  } else /* ZLINE: 1246 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1246 "ChapelRange.chpl"
  {
#line 1246 "ChapelRange.chpl"
    call_tmp8 = (call_tmp5 + INT64(1));
#line 1246 "ChapelRange.chpl"
    coerce_tmp = (r)->_high;
#line 1246 "ChapelRange.chpl"
    call_tmp9 = chpl__add(coerce_tmp, call_tmp8, _ln, _fn);
#line 1246 "ChapelRange.chpl"
    T2 = call_tmp9;
#line 1246 "ChapelRange.chpl"
  }
#line 1249 "ChapelRange.chpl"
  call_tmp10 = (call_tmp5 < INT64(0));
#line 1249 "ChapelRange.chpl"
  if (call_tmp10) /* ZLINE: 1249 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1249 "ChapelRange.chpl"
  {
#line 1249 "ChapelRange.chpl"
    call_tmp11 = (r)->_high;
#line 1249 "ChapelRange.chpl"
    T3 = call_tmp11;
#line 1249 "ChapelRange.chpl"
  } else /* ZLINE: 1249 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1249 "ChapelRange.chpl"
  {
#line 1249 "ChapelRange.chpl"
    call_tmp12 = (call_tmp5 - INT64(1));
#line 1249 "ChapelRange.chpl"
    coerce_tmp2 = (r)->_low;
#line 1249 "ChapelRange.chpl"
    call_tmp13 = chpl__add(coerce_tmp2, call_tmp12, _ln, _fn);
#line 1249 "ChapelRange.chpl"
    T3 = call_tmp13;
#line 1249 "ChapelRange.chpl"
  }
#line 1263 "ChapelRange.chpl"
  coerce_tmp3 = (r)->_alignment;
#line 1264 "ChapelRange.chpl"
  coerce_tmp4 = (r)->_aligned;
#line 1257 "ChapelRange.chpl"
  call_tmp14 = range2(T2, T3, INT64(1), coerce_tmp3, coerce_tmp4, _ln, _fn);
#line 1257 "ChapelRange.chpl"
  *(_retArg) = call_tmp14;
#line 1257 "ChapelRange.chpl"
  _end_chpl_count_help:;
#line 1195 "ChapelRange.chpl"
  return;
#line 1195 "ChapelRange.chpl"
}

#line 1195 "ChapelRange.chpl"
/* ChapelRange.chpl:1267 */
#line 1195 "ChapelRange.chpl"
static void chpl___POUND_(range_int64_t_boundedLow_F* const r, int64_t count, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, int32_t _fn) {
#line 1195 "ChapelRange.chpl"
  range_int64_t_bounded_F call_tmp;
#line 1195 "ChapelRange.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp_ = NULL;
#line 1268 "ChapelRange.chpl"
  ret_to_arg_ref_tmp_ = &call_tmp;
#line 1268 "ChapelRange.chpl"
  chpl_count_help(r, count, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1268 "ChapelRange.chpl"
  *(_retArg) = call_tmp;
#line 1267 "ChapelRange.chpl"
  return;
#line 1267 "ChapelRange.chpl"
}

#line 1267 "ChapelRange.chpl"
/* ChapelRange.chpl:1286 */
#line 1267 "ChapelRange.chpl"
static chpl_bool chpl_checkIfRangeIterWillOverflow(int64_t low, int64_t high, int64_t stride, int64_t first, int64_t last, chpl_bool shouldHalt, int64_t _ln, int32_t _fn) {
#line 1267 "ChapelRange.chpl"
  string local__str_literal_679;
#line 1267 "ChapelRange.chpl"
  chpl_bool ret;
#line 1267 "ChapelRange.chpl"
  chpl_bool call_tmp;
#line 1267 "ChapelRange.chpl"
  chpl_bool willOverFlow;
#line 1267 "ChapelRange.chpl"
  chpl_bool call_tmp2;
#line 1267 "ChapelRange.chpl"
  chpl_bool T;
#line 1267 "ChapelRange.chpl"
  chpl_bool call_tmp3;
#line 1267 "ChapelRange.chpl"
  int64_t call_tmp4;
#line 1267 "ChapelRange.chpl"
  chpl_bool call_tmp5;
#line 1267 "ChapelRange.chpl"
  chpl_bool call_tmp6;
#line 1267 "ChapelRange.chpl"
  chpl_bool T2;
#line 1267 "ChapelRange.chpl"
  chpl_bool call_tmp7;
#line 1267 "ChapelRange.chpl"
  int64_t call_tmp8;
#line 1267 "ChapelRange.chpl"
  chpl_bool call_tmp9;
#line 1267 "ChapelRange.chpl"
  chpl_bool T3;
#line 1322 "ChapelRange.chpl"
  local__str_literal_679 = _str_literal_679;
#line 1289 "ChapelRange.chpl"
  call_tmp = (low > high);
#line 1289 "ChapelRange.chpl"
  if (call_tmp) /* ZLINE: 1290 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1289 "ChapelRange.chpl"
  {
#line 1290 "ChapelRange.chpl"
    ret = UINT8(false);
#line 1290 "ChapelRange.chpl"
    goto _end_chpl_checkIfRangeIterWillOverflow;
#line 1290 "ChapelRange.chpl"
  }
#line 1293 "ChapelRange.chpl"
  willOverFlow = UINT8(false);
#line 1295 "ChapelRange.chpl"
  call_tmp2 = (last > INT64(0));
#line 1295 "ChapelRange.chpl"
  if (call_tmp2) /* ZLINE: 1295 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1295 "ChapelRange.chpl"
  {
#line 1295 "ChapelRange.chpl"
    call_tmp3 = (stride > INT64(0));
#line 1295 "ChapelRange.chpl"
    T = call_tmp3;
#line 1295 "ChapelRange.chpl"
  } else /* ZLINE: 1295 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1295 "ChapelRange.chpl"
  {
#line 1295 "ChapelRange.chpl"
    T = UINT8(false);
#line 1295 "ChapelRange.chpl"
  }
#line 1295 "ChapelRange.chpl"
  if (T) /* ZLINE: 1296 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1295 "ChapelRange.chpl"
  {
#line 1296 "ChapelRange.chpl"
    call_tmp4 = (INT64(9223372036854775807) - last);
#line 1296 "ChapelRange.chpl"
    call_tmp5 = (stride > call_tmp4);
#line 1296 "ChapelRange.chpl"
    if (call_tmp5) /* ZLINE: 1297 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1296 "ChapelRange.chpl"
    {
#line 1297 "ChapelRange.chpl"
      willOverFlow = UINT8(true);
#line 1297 "ChapelRange.chpl"
    }
#line 1297 "ChapelRange.chpl"
  } else /* ZLINE: 1295 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1297 "ChapelRange.chpl"
  {
#line 1299 "ChapelRange.chpl"
    call_tmp6 = (last < INT64(0));
#line 1299 "ChapelRange.chpl"
    if (call_tmp6) /* ZLINE: 1299 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1299 "ChapelRange.chpl"
    {
#line 1299 "ChapelRange.chpl"
      call_tmp7 = (stride < INT64(0));
#line 1299 "ChapelRange.chpl"
      T2 = call_tmp7;
#line 1299 "ChapelRange.chpl"
    } else /* ZLINE: 1299 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1299 "ChapelRange.chpl"
    {
#line 1299 "ChapelRange.chpl"
      T2 = UINT8(false);
#line 1299 "ChapelRange.chpl"
    }
#line 1299 "ChapelRange.chpl"
    if (T2) /* ZLINE: 1300 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1299 "ChapelRange.chpl"
    {
#line 1300 "ChapelRange.chpl"
      call_tmp8 = (-INT64(9223372036854775807) - INT64(1) - last);
#line 1300 "ChapelRange.chpl"
      call_tmp9 = (stride < call_tmp8);
#line 1300 "ChapelRange.chpl"
      if (call_tmp9) /* ZLINE: 1301 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1300 "ChapelRange.chpl"
      {
#line 1301 "ChapelRange.chpl"
        willOverFlow = UINT8(true);
#line 1301 "ChapelRange.chpl"
      }
#line 1301 "ChapelRange.chpl"
    }
#line 1301 "ChapelRange.chpl"
  }
#line 1321 "ChapelRange.chpl"
  if (willOverFlow) /* ZLINE: 1321 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1321 "ChapelRange.chpl"
  {
#line 1321 "ChapelRange.chpl"
    T3 = shouldHalt;
#line 1321 "ChapelRange.chpl"
  } else /* ZLINE: 1321 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1321 "ChapelRange.chpl"
  {
#line 1321 "ChapelRange.chpl"
    T3 = UINT8(false);
#line 1321 "ChapelRange.chpl"
  }
#line 1321 "ChapelRange.chpl"
  if (T3) /* ZLINE: 1322 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 1321 "ChapelRange.chpl"
  {
#line 1322 "ChapelRange.chpl"
    halt(&local__str_literal_679, _ln, _fn);
#line 1322 "ChapelRange.chpl"
  }
#line 1324 "ChapelRange.chpl"
  ret = willOverFlow;
#line 1324 "ChapelRange.chpl"
  _end_chpl_checkIfRangeIterWillOverflow:;
#line 1286 "ChapelRange.chpl"
  return ret;
#line 1286 "ChapelRange.chpl"
}

#line 1286 "ChapelRange.chpl"
/* ChapelRange.chpl:1328 */
#line 1286 "ChapelRange.chpl"
static chpl_bool checkIfIterWillOverflow(_ref_range_int64_t_bounded_F this5, chpl_bool shouldHalt, int64_t _ln, int32_t _fn) {
#line 1286 "ChapelRange.chpl"
  int64_t ret;
#line 1286 "ChapelRange.chpl"
  int64_t ret2;
#line 1286 "ChapelRange.chpl"
  int64_t ret3;
#line 1286 "ChapelRange.chpl"
  int64_t ret4;
#line 1286 "ChapelRange.chpl"
  chpl_bool call_tmp;
#line 1329 "ChapelRange.chpl"
  chpl_check_nil(this5, INT64(1329), INT64(20));
#line 1329 "ChapelRange.chpl"
  ret = (this5)->_low;
#line 1329 "ChapelRange.chpl"
  chpl_check_nil(this5, INT64(1329), INT64(20));
#line 1329 "ChapelRange.chpl"
  ret2 = (this5)->_high;
#line 1330 "ChapelRange.chpl"
  chpl_check_nil(this5, INT64(1330), INT64(20));
#line 1330 "ChapelRange.chpl"
  ret3 = (this5)->_low;
#line 1330 "ChapelRange.chpl"
  chpl_check_nil(this5, INT64(1330), INT64(20));
#line 1330 "ChapelRange.chpl"
  ret4 = (this5)->_high;
#line 1329 "ChapelRange.chpl"
  call_tmp = chpl_checkIfRangeIterWillOverflow(ret, ret2, INT64(1), ret3, ret4, shouldHalt, _ln, _fn);
#line 1328 "ChapelRange.chpl"
  return call_tmp;
#line 1328 "ChapelRange.chpl"
}

#line 1328 "ChapelRange.chpl"
/* ChapelRange.chpl:2009 */
#line 1328 "ChapelRange.chpl"
static int64_t chpl__add(int64_t a, int64_t b, int64_t _ln, int32_t _fn) {
#line 1328 "ChapelRange.chpl"
  int64_t ret;
#line 1328 "ChapelRange.chpl"
  chpl_bool call_tmp;
#line 1328 "ChapelRange.chpl"
  chpl_bool T;
#line 1328 "ChapelRange.chpl"
  chpl_bool call_tmp2;
#line 1328 "ChapelRange.chpl"
  chpl_bool T2;
#line 1328 "ChapelRange.chpl"
  int64_t call_tmp3;
#line 1328 "ChapelRange.chpl"
  chpl_bool call_tmp4;
#line 1328 "ChapelRange.chpl"
  chpl_bool call_tmp5;
#line 1328 "ChapelRange.chpl"
  chpl_bool T3;
#line 1328 "ChapelRange.chpl"
  chpl_bool call_tmp6;
#line 1328 "ChapelRange.chpl"
  chpl_bool T4;
#line 1328 "ChapelRange.chpl"
  int64_t call_tmp7;
#line 1328 "ChapelRange.chpl"
  chpl_bool call_tmp8;
#line 1328 "ChapelRange.chpl"
  int64_t call_tmp9;
#line 2014 "ChapelRange.chpl"
  call_tmp = (a > INT64(0));
#line 2014 "ChapelRange.chpl"
  if (call_tmp) /* ZLINE: 2014 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 2014 "ChapelRange.chpl"
  {
#line 2014 "ChapelRange.chpl"
    call_tmp2 = (b > INT64(0));
#line 2014 "ChapelRange.chpl"
    T = call_tmp2;
#line 2014 "ChapelRange.chpl"
  } else /* ZLINE: 2014 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 2014 "ChapelRange.chpl"
  {
#line 2014 "ChapelRange.chpl"
    T = UINT8(false);
#line 2014 "ChapelRange.chpl"
  }
#line 2014 "ChapelRange.chpl"
  if (T) /* ZLINE: 2014 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 2014 "ChapelRange.chpl"
  {
#line 2014 "ChapelRange.chpl"
    call_tmp3 = (INT64(9223372036854775807) - a);
#line 2014 "ChapelRange.chpl"
    call_tmp4 = (b > call_tmp3);
#line 2014 "ChapelRange.chpl"
    T2 = call_tmp4;
#line 2014 "ChapelRange.chpl"
  } else /* ZLINE: 2014 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 2014 "ChapelRange.chpl"
  {
#line 2014 "ChapelRange.chpl"
    T2 = UINT8(false);
#line 2014 "ChapelRange.chpl"
  }
#line 2014 "ChapelRange.chpl"
  if (T2) /* ZLINE: 2014 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 2014 "ChapelRange.chpl"
  {
#line 2014 "ChapelRange.chpl"
    ret = INT64(9223372036854775807);
#line 2014 "ChapelRange.chpl"
    goto _end_chpl__add;
#line 2014 "ChapelRange.chpl"
  }
#line 2015 "ChapelRange.chpl"
  call_tmp5 = (a < INT64(0));
#line 2015 "ChapelRange.chpl"
  if (call_tmp5) /* ZLINE: 2015 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 2015 "ChapelRange.chpl"
  {
#line 2015 "ChapelRange.chpl"
    call_tmp6 = (b < INT64(0));
#line 2015 "ChapelRange.chpl"
    T3 = call_tmp6;
#line 2015 "ChapelRange.chpl"
  } else /* ZLINE: 2015 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 2015 "ChapelRange.chpl"
  {
#line 2015 "ChapelRange.chpl"
    T3 = UINT8(false);
#line 2015 "ChapelRange.chpl"
  }
#line 2015 "ChapelRange.chpl"
  if (T3) /* ZLINE: 2015 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 2015 "ChapelRange.chpl"
  {
#line 2015 "ChapelRange.chpl"
    call_tmp7 = (-INT64(9223372036854775807) - INT64(1) - a);
#line 2015 "ChapelRange.chpl"
    call_tmp8 = (b < call_tmp7);
#line 2015 "ChapelRange.chpl"
    T4 = call_tmp8;
#line 2015 "ChapelRange.chpl"
  } else /* ZLINE: 2015 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 2015 "ChapelRange.chpl"
  {
#line 2015 "ChapelRange.chpl"
    T4 = UINT8(false);
#line 2015 "ChapelRange.chpl"
  }
#line 2015 "ChapelRange.chpl"
  if (T4) /* ZLINE: 2015 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelRange.chpl */
#line 2015 "ChapelRange.chpl"
  {
#line 2015 "ChapelRange.chpl"
    ret = -INT64(9223372036854775807) - INT64(1);
#line 2015 "ChapelRange.chpl"
    goto _end_chpl__add;
#line 2015 "ChapelRange.chpl"
  }
#line 2025 "ChapelRange.chpl"
  call_tmp9 = (a + b);
#line 2025 "ChapelRange.chpl"
  ret = call_tmp9;
#line 2025 "ChapelRange.chpl"
  _end_chpl__add:;
#line 2009 "ChapelRange.chpl"
  return ret;
#line 2009 "ChapelRange.chpl"
}


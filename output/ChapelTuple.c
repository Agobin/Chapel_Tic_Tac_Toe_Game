/* ChapelTuple.chpl:40 */
static void chpl__init_ChapelTuple(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 40 "ChapelTuple.chpl"
  if (chpl__init_ChapelTuple_p) /* ZLINE: 40 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelTuple.chpl */
#line 40 "ChapelTuple.chpl"
  {
#line 40 "ChapelTuple.chpl"
    goto _exit_chpl__init_ChapelTuple;
#line 40 "ChapelTuple.chpl"
  }
#line 40 "ChapelTuple.chpl"
  modFormatStr = "%*s\n";
#line 40 "ChapelTuple.chpl"
  modStr = "ChapelTuple";
#line 40 "ChapelTuple.chpl"
  printModuleInit(modFormatStr, modStr, INT64(11), _ln, _fn);
#line 40 "ChapelTuple.chpl"
  refIndentLevel = &moduleInitLevel;
#line 40 "ChapelTuple.chpl"
  *(refIndentLevel) += INT64(1);
#line 40 "ChapelTuple.chpl"
  chpl__init_ChapelTuple_p = UINT8(true);
#line 40 "ChapelTuple.chpl"
  *(refIndentLevel) -= INT64(1);
#line 40 "ChapelTuple.chpl"
  _exit_chpl__init_ChapelTuple:;
#line 40 "ChapelTuple.chpl"
  return;
#line 40 "ChapelTuple.chpl"
}

#line 40 "ChapelTuple.chpl"
/* ChapelTuple.chpl:141 */
#line 40 "ChapelTuple.chpl"
static _ref_range_int64_t_bounded_F this4(_ref__tuple_1_star_range_int64_t_bounded_F this5, int64_t i, int64_t _ln, int32_t _fn) {
#line 40 "ChapelTuple.chpl"
  string local__str_literal_502;
#line 40 "ChapelTuple.chpl"
  chpl_bool call_tmp;
#line 40 "ChapelTuple.chpl"
  chpl_bool T;
#line 40 "ChapelTuple.chpl"
  chpl_bool call_tmp2;
#line 40 "ChapelTuple.chpl"
  _ref_range_int64_t_bounded_F call_tmp3 = NULL;
#line 146 "ChapelTuple.chpl"
  local__str_literal_502 = _str_literal_502;
#line 145 "ChapelTuple.chpl"
  call_tmp = (i < INT64(1));
#line 145 "ChapelTuple.chpl"
  if (call_tmp) /* ZLINE: 145 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelTuple.chpl */
#line 145 "ChapelTuple.chpl"
  {
#line 145 "ChapelTuple.chpl"
    T = UINT8(true);
#line 145 "ChapelTuple.chpl"
  } else /* ZLINE: 145 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelTuple.chpl */
#line 145 "ChapelTuple.chpl"
  {
#line 145 "ChapelTuple.chpl"
    call_tmp2 = (i > INT64(1));
#line 145 "ChapelTuple.chpl"
    T = call_tmp2;
#line 145 "ChapelTuple.chpl"
  }
#line 145 "ChapelTuple.chpl"
  if (T) /* ZLINE: 145 /home/agobin/Documents/chapel-1.13.0/modules/internal/ChapelTuple.chpl */
#line 145 "ChapelTuple.chpl"
  {
#line 146 "ChapelTuple.chpl"
    halt3(&local__str_literal_502, i, _ln, _fn);
#line 146 "ChapelTuple.chpl"
  }
#line 147 "ChapelTuple.chpl"
  call_tmp3 = (*(this5) + (i - INT64(1)));
#line 141 "ChapelTuple.chpl"
  return call_tmp3;
#line 141 "ChapelTuple.chpl"
}


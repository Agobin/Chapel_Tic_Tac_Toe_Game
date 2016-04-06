/* ChapelTuple.chpl:40 */
static void chpl__init_ChapelTuple(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 40 "ChapelTuple.chpl"
  if (chpl__init_ChapelTuple_p) /* ZLINE: 40 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
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
  chpl__init_ChapelTuple_p = true;
#line 40 "ChapelTuple.chpl"
  *(refIndentLevel) -= INT64(1);
#line 40 "ChapelTuple.chpl"
  _exit_chpl__init_ChapelTuple:;
#line 40 "ChapelTuple.chpl"
  return;
#line 40 "ChapelTuple.chpl"
}

#line 40 "ChapelTuple.chpl"
/* ChapelTuple.chpl:136 */
#line 40 "ChapelTuple.chpl"
static void this4(_ref__tuple_1_star_range_int64_t_bounded_F this6, int64_t i, _ref_range_int64_t_bounded_F _retArg, int64_t _ln, c_string _fn) {
#line 40 "ChapelTuple.chpl"
  range_int64_t_bounded_F ret;
#line 40 "ChapelTuple.chpl"
  chpl_bool call_tmp;
#line 40 "ChapelTuple.chpl"
  chpl_bool T;
#line 40 "ChapelTuple.chpl"
  chpl_bool call_tmp2;
#line 40 "ChapelTuple.chpl"
  chpl_string call_tmp3;
#line 140 "ChapelTuple.chpl"
  call_tmp = (i < INT64(1));
#line 140 "ChapelTuple.chpl"
  if (call_tmp) /* ZLINE: 140 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 140 "ChapelTuple.chpl"
  {
#line 140 "ChapelTuple.chpl"
    T = true;
#line 140 "ChapelTuple.chpl"
  } else /* ZLINE: 140 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 140 "ChapelTuple.chpl"
  {
#line 140 "ChapelTuple.chpl"
    call_tmp2 = (i > INT64(1));
#line 140 "ChapelTuple.chpl"
    T = call_tmp2;
#line 140 "ChapelTuple.chpl"
  }
#line 140 "ChapelTuple.chpl"
  if (T) /* ZLINE: 140 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 140 "ChapelTuple.chpl"
  {
#line 141 "ChapelTuple.chpl"
    string_from_c_string(&call_tmp3, "tuple access out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 141 "ChapelTuple.chpl"
    halt2(call_tmp3, i, _ln, _fn);
#line 141 "ChapelTuple.chpl"
  }
#line 142 "ChapelTuple.chpl"
  ret = *(*(this6) + (i - INT64(1)));
#line 142 "ChapelTuple.chpl"
  *(_retArg) = ret;
#line 136 "ChapelTuple.chpl"
  return;
#line 136 "ChapelTuple.chpl"
}

#line 136 "ChapelTuple.chpl"
/* ChapelTuple.chpl:136 */
#line 136 "ChapelTuple.chpl"
static _ref_range_int64_t_bounded_F this5(_ref__tuple_1_star_range_int64_t_bounded_F this6, int64_t i, int64_t _ln, c_string _fn) {
#line 136 "ChapelTuple.chpl"
  chpl_bool call_tmp;
#line 136 "ChapelTuple.chpl"
  chpl_bool T;
#line 136 "ChapelTuple.chpl"
  chpl_bool call_tmp2;
#line 136 "ChapelTuple.chpl"
  chpl_string call_tmp3;
#line 136 "ChapelTuple.chpl"
  _ref_range_int64_t_bounded_F call_tmp4 = NULL;
#line 140 "ChapelTuple.chpl"
  call_tmp = (i < INT64(1));
#line 140 "ChapelTuple.chpl"
  if (call_tmp) /* ZLINE: 140 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 140 "ChapelTuple.chpl"
  {
#line 140 "ChapelTuple.chpl"
    T = true;
#line 140 "ChapelTuple.chpl"
  } else /* ZLINE: 140 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 140 "ChapelTuple.chpl"
  {
#line 140 "ChapelTuple.chpl"
    call_tmp2 = (i > INT64(1));
#line 140 "ChapelTuple.chpl"
    T = call_tmp2;
#line 140 "ChapelTuple.chpl"
  }
#line 140 "ChapelTuple.chpl"
  if (T) /* ZLINE: 140 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 140 "ChapelTuple.chpl"
  {
#line 141 "ChapelTuple.chpl"
    string_from_c_string(&call_tmp3, "tuple access out of bounds: ", INT64(0), INT64(0), _ln, _fn);
#line 141 "ChapelTuple.chpl"
    halt2(call_tmp3, i, _ln, _fn);
#line 141 "ChapelTuple.chpl"
  }
#line 142 "ChapelTuple.chpl"
  call_tmp4 = (*(this6) + (i - INT64(1)));
#line 136 "ChapelTuple.chpl"
  return call_tmp4;
#line 136 "ChapelTuple.chpl"
}

#line 136 "ChapelTuple.chpl"
/* ChapelTuple.chpl:214 */
#line 136 "ChapelTuple.chpl"
static void readWriteThis(_ref__tuple_1_star_int64_t this6, Writer f, int64_t _ln, c_string _fn) {
#line 136 "ChapelTuple.chpl"
  int64_t local_QIO_TUPLE_FORMAT_JSON;
#line 136 "ChapelTuple.chpl"
  int64_t local_QIO_TUPLE_FORMAT_SPACE;
#line 136 "ChapelTuple.chpl"
  int64_t local_QIO_STYLE_ELEMENT_TUPLE;
#line 136 "ChapelTuple.chpl"
  int64_t call_tmp;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl start;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this7;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl comma;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this8;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp2;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl end;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this9;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp3;
#line 136 "ChapelTuple.chpl"
  chpl_bool call_tmp2;
#line 136 "ChapelTuple.chpl"
  chpl_bool call_tmp3;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this10;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp4;
#line 136 "ChapelTuple.chpl"
  _ref_ioLiteral _ref_tmp_ = NULL;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this11;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp5;
#line 136 "ChapelTuple.chpl"
  _ref_ioLiteral _ref_tmp_2 = NULL;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this12;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp6;
#line 136 "ChapelTuple.chpl"
  _ref_ioLiteral _ref_tmp_3 = NULL;
#line 136 "ChapelTuple.chpl"
  chpl_bool call_tmp4;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this13;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp7;
#line 136 "ChapelTuple.chpl"
  _ref_ioLiteral _ref_tmp_4 = NULL;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this14;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp8;
#line 136 "ChapelTuple.chpl"
  _ref_ioLiteral _ref_tmp_5 = NULL;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this15;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp9;
#line 136 "ChapelTuple.chpl"
  _ref_ioLiteral _ref_tmp_6 = NULL;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this16;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp10;
#line 136 "ChapelTuple.chpl"
  _ref_ioLiteral _ref_tmp_7 = NULL;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this17;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp11;
#line 136 "ChapelTuple.chpl"
  _ref_ioLiteral _ref_tmp_8 = NULL;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl this18;
#line 136 "ChapelTuple.chpl"
  ioLiteral_chpl wrap_call_tmp12;
#line 136 "ChapelTuple.chpl"
  _ref_ioLiteral _ref_tmp_9 = NULL;
#line 136 "ChapelTuple.chpl"
  chpl_bool call_tmp5;
#line 136 "ChapelTuple.chpl"
  int64_t coerce_tmp;
#line 136 "ChapelTuple.chpl"
  chpl_bool call_tmp6;
#line 225 "ChapelTuple.chpl"
  local_QIO_TUPLE_FORMAT_JSON = QIO_TUPLE_FORMAT_JSON;
#line 221 "ChapelTuple.chpl"
  local_QIO_TUPLE_FORMAT_SPACE = QIO_TUPLE_FORMAT_SPACE;
#line 215 "ChapelTuple.chpl"
  local_QIO_STYLE_ELEMENT_TUPLE = QIO_STYLE_ELEMENT_TUPLE;
#line 215 "ChapelTuple.chpl"
  chpl_check_nil(f, INT64(215), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl");
#line 215 "ChapelTuple.chpl"
  call_tmp = styleElement(f, local_QIO_STYLE_ELEMENT_TUPLE);
#line 216 "ChapelTuple.chpl"
  (&this7)->val_chpl = "";
#line 216 "ChapelTuple.chpl"
  (&this7)->ignoreWhiteSpace_chpl = false;
#line 216 "ChapelTuple.chpl"
  (&this7)->val_chpl = "";
#line 216 "ChapelTuple.chpl"
  (&this7)->ignoreWhiteSpace_chpl = true;
#line 216 "ChapelTuple.chpl"
  wrap_call_tmp = _construct_ioLiteral_chpl("", true, &this7, _ln, _fn);
#line 216 "ChapelTuple.chpl"
  start = wrap_call_tmp;
#line 217 "ChapelTuple.chpl"
  (&this8)->val_chpl = "";
#line 217 "ChapelTuple.chpl"
  (&this8)->ignoreWhiteSpace_chpl = false;
#line 217 "ChapelTuple.chpl"
  (&this8)->val_chpl = "";
#line 217 "ChapelTuple.chpl"
  (&this8)->ignoreWhiteSpace_chpl = true;
#line 217 "ChapelTuple.chpl"
  wrap_call_tmp2 = _construct_ioLiteral_chpl("", true, &this8, _ln, _fn);
#line 217 "ChapelTuple.chpl"
  comma = wrap_call_tmp2;
#line 218 "ChapelTuple.chpl"
  (&this9)->val_chpl = "";
#line 218 "ChapelTuple.chpl"
  (&this9)->ignoreWhiteSpace_chpl = false;
#line 218 "ChapelTuple.chpl"
  (&this9)->val_chpl = "";
#line 218 "ChapelTuple.chpl"
  (&this9)->ignoreWhiteSpace_chpl = true;
#line 218 "ChapelTuple.chpl"
  wrap_call_tmp3 = _construct_ioLiteral_chpl("", true, &this9, _ln, _fn);
#line 218 "ChapelTuple.chpl"
  end = wrap_call_tmp3;
#line 219 "ChapelTuple.chpl"
  chpl_check_nil(f, INT64(219), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl");
#line 219 "ChapelTuple.chpl"
  call_tmp2 = binary(f);
#line 221 "ChapelTuple.chpl"
  call_tmp3 = (call_tmp == local_QIO_TUPLE_FORMAT_SPACE);
#line 221 "ChapelTuple.chpl"
  if (call_tmp3) /* ZLINE: 222 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 221 "ChapelTuple.chpl"
  {
#line 222 "ChapelTuple.chpl"
    (&this10)->val_chpl = "";
#line 222 "ChapelTuple.chpl"
    (&this10)->ignoreWhiteSpace_chpl = false;
#line 222 "ChapelTuple.chpl"
    (&this10)->val_chpl = "";
#line 222 "ChapelTuple.chpl"
    (&this10)->ignoreWhiteSpace_chpl = true;
#line 222 "ChapelTuple.chpl"
    wrap_call_tmp4 = _construct_ioLiteral_chpl("", true, &this10, _ln, _fn);
#line 222 "ChapelTuple.chpl"
    _ref_tmp_ = &start;
#line 222 "ChapelTuple.chpl"
    chpl___ASSIGN_5(_ref_tmp_, &wrap_call_tmp4, _ln, _fn);
#line 223 "ChapelTuple.chpl"
    (&this11)->val_chpl = "";
#line 223 "ChapelTuple.chpl"
    (&this11)->ignoreWhiteSpace_chpl = false;
#line 223 "ChapelTuple.chpl"
    (&this11)->val_chpl = " ";
#line 223 "ChapelTuple.chpl"
    (&this11)->ignoreWhiteSpace_chpl = true;
#line 223 "ChapelTuple.chpl"
    wrap_call_tmp5 = _construct_ioLiteral_chpl(" ", true, &this11, _ln, _fn);
#line 223 "ChapelTuple.chpl"
    _ref_tmp_2 = &comma;
#line 223 "ChapelTuple.chpl"
    chpl___ASSIGN_5(_ref_tmp_2, &wrap_call_tmp5, _ln, _fn);
#line 224 "ChapelTuple.chpl"
    (&this12)->val_chpl = "";
#line 224 "ChapelTuple.chpl"
    (&this12)->ignoreWhiteSpace_chpl = false;
#line 224 "ChapelTuple.chpl"
    (&this12)->val_chpl = "";
#line 224 "ChapelTuple.chpl"
    (&this12)->ignoreWhiteSpace_chpl = true;
#line 224 "ChapelTuple.chpl"
    wrap_call_tmp6 = _construct_ioLiteral_chpl("", true, &this12, _ln, _fn);
#line 224 "ChapelTuple.chpl"
    _ref_tmp_3 = &end;
#line 224 "ChapelTuple.chpl"
    chpl___ASSIGN_5(_ref_tmp_3, &wrap_call_tmp6, _ln, _fn);
#line 224 "ChapelTuple.chpl"
  } else /* ZLINE: 221 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 224 "ChapelTuple.chpl"
  {
#line 225 "ChapelTuple.chpl"
    call_tmp4 = (call_tmp == local_QIO_TUPLE_FORMAT_JSON);
#line 225 "ChapelTuple.chpl"
    if (call_tmp4) /* ZLINE: 226 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 225 "ChapelTuple.chpl"
    {
#line 226 "ChapelTuple.chpl"
      (&this13)->val_chpl = "";
#line 226 "ChapelTuple.chpl"
      (&this13)->ignoreWhiteSpace_chpl = false;
#line 226 "ChapelTuple.chpl"
      (&this13)->val_chpl = "[";
#line 226 "ChapelTuple.chpl"
      (&this13)->ignoreWhiteSpace_chpl = true;
#line 226 "ChapelTuple.chpl"
      wrap_call_tmp7 = _construct_ioLiteral_chpl("[", true, &this13, _ln, _fn);
#line 226 "ChapelTuple.chpl"
      _ref_tmp_4 = &start;
#line 226 "ChapelTuple.chpl"
      chpl___ASSIGN_5(_ref_tmp_4, &wrap_call_tmp7, _ln, _fn);
#line 227 "ChapelTuple.chpl"
      (&this14)->val_chpl = "";
#line 227 "ChapelTuple.chpl"
      (&this14)->ignoreWhiteSpace_chpl = false;
#line 227 "ChapelTuple.chpl"
      (&this14)->val_chpl = ", ";
#line 227 "ChapelTuple.chpl"
      (&this14)->ignoreWhiteSpace_chpl = true;
#line 227 "ChapelTuple.chpl"
      wrap_call_tmp8 = _construct_ioLiteral_chpl(", ", true, &this14, _ln, _fn);
#line 227 "ChapelTuple.chpl"
      _ref_tmp_5 = &comma;
#line 227 "ChapelTuple.chpl"
      chpl___ASSIGN_5(_ref_tmp_5, &wrap_call_tmp8, _ln, _fn);
#line 228 "ChapelTuple.chpl"
      (&this15)->val_chpl = "";
#line 228 "ChapelTuple.chpl"
      (&this15)->ignoreWhiteSpace_chpl = false;
#line 228 "ChapelTuple.chpl"
      (&this15)->val_chpl = "]";
#line 228 "ChapelTuple.chpl"
      (&this15)->ignoreWhiteSpace_chpl = true;
#line 228 "ChapelTuple.chpl"
      wrap_call_tmp9 = _construct_ioLiteral_chpl("]", true, &this15, _ln, _fn);
#line 228 "ChapelTuple.chpl"
      _ref_tmp_6 = &end;
#line 228 "ChapelTuple.chpl"
      chpl___ASSIGN_5(_ref_tmp_6, &wrap_call_tmp9, _ln, _fn);
#line 228 "ChapelTuple.chpl"
    } else /* ZLINE: 230 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 228 "ChapelTuple.chpl"
    {
#line 230 "ChapelTuple.chpl"
      (&this16)->val_chpl = "";
#line 230 "ChapelTuple.chpl"
      (&this16)->ignoreWhiteSpace_chpl = false;
#line 230 "ChapelTuple.chpl"
      (&this16)->val_chpl = "(";
#line 230 "ChapelTuple.chpl"
      (&this16)->ignoreWhiteSpace_chpl = true;
#line 230 "ChapelTuple.chpl"
      wrap_call_tmp10 = _construct_ioLiteral_chpl("(", true, &this16, _ln, _fn);
#line 230 "ChapelTuple.chpl"
      _ref_tmp_7 = &start;
#line 230 "ChapelTuple.chpl"
      chpl___ASSIGN_5(_ref_tmp_7, &wrap_call_tmp10, _ln, _fn);
#line 231 "ChapelTuple.chpl"
      (&this17)->val_chpl = "";
#line 231 "ChapelTuple.chpl"
      (&this17)->ignoreWhiteSpace_chpl = false;
#line 231 "ChapelTuple.chpl"
      (&this17)->val_chpl = ", ";
#line 231 "ChapelTuple.chpl"
      (&this17)->ignoreWhiteSpace_chpl = true;
#line 231 "ChapelTuple.chpl"
      wrap_call_tmp11 = _construct_ioLiteral_chpl(", ", true, &this17, _ln, _fn);
#line 231 "ChapelTuple.chpl"
      _ref_tmp_8 = &comma;
#line 231 "ChapelTuple.chpl"
      chpl___ASSIGN_5(_ref_tmp_8, &wrap_call_tmp11, _ln, _fn);
#line 232 "ChapelTuple.chpl"
      (&this18)->val_chpl = "";
#line 232 "ChapelTuple.chpl"
      (&this18)->ignoreWhiteSpace_chpl = false;
#line 232 "ChapelTuple.chpl"
      (&this18)->val_chpl = ")";
#line 232 "ChapelTuple.chpl"
      (&this18)->ignoreWhiteSpace_chpl = true;
#line 232 "ChapelTuple.chpl"
      wrap_call_tmp12 = _construct_ioLiteral_chpl(")", true, &this18, _ln, _fn);
#line 232 "ChapelTuple.chpl"
      _ref_tmp_9 = &end;
#line 232 "ChapelTuple.chpl"
      chpl___ASSIGN_5(_ref_tmp_9, &wrap_call_tmp12, _ln, _fn);
#line 232 "ChapelTuple.chpl"
    }
#line 232 "ChapelTuple.chpl"
  }
#line 235 "ChapelTuple.chpl"
  call_tmp5 = (! call_tmp2);
#line 235 "ChapelTuple.chpl"
  if (call_tmp5) /* ZLINE: 236 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 235 "ChapelTuple.chpl"
  {
#line 236 "ChapelTuple.chpl"
    chpl_check_nil(f, INT64(236), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl");
#line 236 "ChapelTuple.chpl"
    readwrite(f, &start, _ln, _fn);
#line 236 "ChapelTuple.chpl"
  }
#line 239 "ChapelTuple.chpl"
  coerce_tmp = *(*(this6) + INT64(0));
#line 239 "ChapelTuple.chpl"
  chpl_check_nil(f, INT64(239), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl");
#line 239 "ChapelTuple.chpl"
  readwrite2(f, coerce_tmp, _ln, _fn);
#line 247 "ChapelTuple.chpl"
  call_tmp6 = (! call_tmp2);
#line 247 "ChapelTuple.chpl"
  if (call_tmp6) /* ZLINE: 248 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl */
#line 247 "ChapelTuple.chpl"
  {
#line 248 "ChapelTuple.chpl"
    chpl_check_nil(f, INT64(248), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelTuple.chpl");
#line 248 "ChapelTuple.chpl"
    readwrite(f, &end, _ln, _fn);
#line 248 "ChapelTuple.chpl"
  }
#line 214 "ChapelTuple.chpl"
  return;
#line 214 "ChapelTuple.chpl"
}


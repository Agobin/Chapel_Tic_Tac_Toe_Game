/* ChapelIO.chpl:272 */
static void chpl__init_ChapelIO(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 272 "ChapelIO.chpl"
  if (chpl__init_ChapelIO_p) /* ZLINE: 272 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl */
#line 272 "ChapelIO.chpl"
  {
#line 272 "ChapelIO.chpl"
    goto _exit_chpl__init_ChapelIO;
#line 272 "ChapelIO.chpl"
  }
#line 272 "ChapelIO.chpl"
  modFormatStr = "%*s\n";
#line 272 "ChapelIO.chpl"
  modStr = "ChapelIO";
#line 272 "ChapelIO.chpl"
  printModuleInit(modFormatStr, modStr, INT64(8), _ln, _fn);
#line 272 "ChapelIO.chpl"
  refIndentLevel = &moduleInitLevel;
#line 272 "ChapelIO.chpl"
  *(refIndentLevel) += INT64(1);
#line 272 "ChapelIO.chpl"
  chpl__init_ChapelIO_p = true;
#line 272 "ChapelIO.chpl"
  {
#line 272 "ChapelIO.chpl"
    chpl__init_ChapelBase(_ln, _fn);
#line 272 "ChapelIO.chpl"
    chpl__init_SysBasic(_ln, _fn);
#line 272 "ChapelIO.chpl"
    chpl__init_IO(_ln, _fn);
#line 272 "ChapelIO.chpl"
  }
#line 1041 "ChapelIO.chpl"
  chpl__testParOn = false;
#line 272 "ChapelIO.chpl"
  *(refIndentLevel) -= INT64(1);
#line 272 "ChapelIO.chpl"
  _exit_chpl__init_ChapelIO:;
#line 272 "ChapelIO.chpl"
  return;
#line 272 "ChapelIO.chpl"
}

#line 272 "ChapelIO.chpl"
/* ChapelIO.chpl:289 */
#line 272 "ChapelIO.chpl"
static void chpl__auto_destroy_Writer(Writer this6, int64_t _ln, c_string _fn) {
#line 289 "ChapelIO.chpl"
  return;
#line 289 "ChapelIO.chpl"
}

#line 289 "ChapelIO.chpl"
/* ChapelIO.chpl:289 */
#line 289 "ChapelIO.chpl"
static Writer _construct_Writer(Writer meme, int64_t _ln, c_string _fn) {
#line 289 "ChapelIO.chpl"
  Writer this6 = NULL;
#line 289 "ChapelIO.chpl"
  object T = NULL;
#line 289 "ChapelIO.chpl"
  this6 = meme;
#line 289 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(289), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 289 "ChapelIO.chpl"
  T = &((this6)->super);
#line 289 "ChapelIO.chpl"
  _construct_object(T);
#line 289 "ChapelIO.chpl"
  return meme;
#line 289 "ChapelIO.chpl"
}

#line 289 "ChapelIO.chpl"
/* ChapelIO.chpl:293 */
#line 289 "ChapelIO.chpl"
static chpl_bool binary(Writer this6) {
#line 293 "ChapelIO.chpl"
  return false;
#line 293 "ChapelIO.chpl"
}

#line 293 "ChapelIO.chpl"
/* ChapelIO.chpl:297 */
#line 293 "ChapelIO.chpl"
static int64_t styleElement(Writer this6, int64_t element) {
#line 297 "ChapelIO.chpl"
  return INT64(0);
#line 297 "ChapelIO.chpl"
}

#line 297 "ChapelIO.chpl"
/* ChapelIO.chpl:317 */
#line 297 "ChapelIO.chpl"
static void writePrimitive(Writer this6, int64_t x, int64_t _ln, c_string _fn) {
#line 319 "ChapelIO.chpl"
  halt("Generic Writer.writePrimitive called", _ln, _fn);
#line 317 "ChapelIO.chpl"
  return;
#line 317 "ChapelIO.chpl"
}

#line 317 "ChapelIO.chpl"
/* ChapelIO.chpl:317 */
#line 317 "ChapelIO.chpl"
static void writePrimitive2(Writer this6, chpl_string x, int64_t _ln, c_string _fn) {
#line 319 "ChapelIO.chpl"
  halt("Generic Writer.writePrimitive called", _ln, _fn);
#line 317 "ChapelIO.chpl"
  return;
#line 317 "ChapelIO.chpl"
}

#line 317 "ChapelIO.chpl"
/* ChapelIO.chpl:317 */
#line 317 "ChapelIO.chpl"
static void writePrimitive3(Writer this6, ioLiteral_chpl* const x, int64_t _ln, c_string _fn) {
#line 319 "ChapelIO.chpl"
  halt("Generic Writer.writePrimitive called", _ln, _fn);
#line 317 "ChapelIO.chpl"
  return;
#line 317 "ChapelIO.chpl"
}

#line 317 "ChapelIO.chpl"
/* ChapelIO.chpl:330 */
#line 317 "ChapelIO.chpl"
static void writeIt2(Writer this6, chpl_string x, int64_t _ln, c_string _fn) {
#line 317 "ChapelIO.chpl"
  int32_t _virtual_method_tmp_;
#line 332 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(332), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 332 "ChapelIO.chpl"
  _virtual_method_tmp_ = ((object)(this6))->chpl__cid;
#line 332 "ChapelIO.chpl"
  ((void(*)(Writer, chpl_string, int64_t, c_string))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(2))])(this6, x, _ln, _fn);
#line 330 "ChapelIO.chpl"
  return;
#line 330 "ChapelIO.chpl"
}

#line 330 "ChapelIO.chpl"
/* ChapelIO.chpl:330 */
#line 330 "ChapelIO.chpl"
static void writeIt3(Writer this6, _tuple_1_star_int64_t* const x, int64_t _ln, c_string _fn) {
#line 330 "ChapelIO.chpl"
  _ref__tuple_1_star_int64_t _ref_tmp_ = NULL;
#line 350 "ChapelIO.chpl"
  _ref_tmp_ = x;
#line 350 "ChapelIO.chpl"
  chpl_check_nil(_ref_tmp_, INT64(350), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 350 "ChapelIO.chpl"
  readWriteThis(_ref_tmp_, this6, _ln, _fn);
#line 330 "ChapelIO.chpl"
  return;
#line 330 "ChapelIO.chpl"
}

#line 330 "ChapelIO.chpl"
/* ChapelIO.chpl:330 */
#line 330 "ChapelIO.chpl"
static void writeIt(Writer this6, ioLiteral_chpl* const x, int64_t _ln, c_string _fn) {
#line 330 "ChapelIO.chpl"
  int32_t _virtual_method_tmp_;
#line 332 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(332), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 332 "ChapelIO.chpl"
  _virtual_method_tmp_ = ((object)(this6))->chpl__cid;
#line 332 "ChapelIO.chpl"
  ((void(*)(Writer, ioLiteral_chpl* const, int64_t, c_string))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(3))])(this6, x, _ln, _fn);
#line 330 "ChapelIO.chpl"
  return;
#line 330 "ChapelIO.chpl"
}

#line 330 "ChapelIO.chpl"
/* ChapelIO.chpl:330 */
#line 330 "ChapelIO.chpl"
static void writeIt4(Writer this6, int64_t x, int64_t _ln, c_string _fn) {
#line 330 "ChapelIO.chpl"
  int32_t _virtual_method_tmp_;
#line 332 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(332), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 332 "ChapelIO.chpl"
  _virtual_method_tmp_ = ((object)(this6))->chpl__cid;
#line 332 "ChapelIO.chpl"
  ((void(*)(Writer, int64_t, int64_t, c_string))chpl_vmtable[((INT64(4) * _virtual_method_tmp_) + INT64(1))])(this6, x, _ln, _fn);
#line 330 "ChapelIO.chpl"
  return;
#line 330 "ChapelIO.chpl"
}

#line 330 "ChapelIO.chpl"
/* ChapelIO.chpl:358 */
#line 330 "ChapelIO.chpl"
static void readwrite2(Writer this6, ioLiteral_chpl* const x, int64_t _ln, c_string _fn) {
#line 359 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(359), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 359 "ChapelIO.chpl"
  writeIt(this6, x, _ln, _fn);
#line 358 "ChapelIO.chpl"
  return;
#line 358 "ChapelIO.chpl"
}

#line 358 "ChapelIO.chpl"
/* ChapelIO.chpl:358 */
#line 358 "ChapelIO.chpl"
static void readwrite(Writer this6, int64_t x, int64_t _ln, c_string _fn) {
#line 359 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(359), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 359 "ChapelIO.chpl"
  writeIt4(this6, x, _ln, _fn);
#line 358 "ChapelIO.chpl"
  return;
#line 358 "ChapelIO.chpl"
}

#line 358 "ChapelIO.chpl"
/* ChapelIO.chpl:366 */
#line 358 "ChapelIO.chpl"
static void write3(Writer this6, chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn) {
#line 358 "ChapelIO.chpl"
  int64_t this_x2_x1;
#line 358 "ChapelIO.chpl"
  _tuple_1_star_int64_t coerce_tmp;
#line 907 "ChapelIO.chpl"
  this_x2_x1 = *(*(_e1_args) + INT64(0));
#line 368 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(368), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 368 "ChapelIO.chpl"
  writeIt2(this6, _e0_args, _ln, _fn);
#line 907 "ChapelIO.chpl"
  *(coerce_tmp + INT64(0)) = this_x2_x1;
#line 368 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(368), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 368 "ChapelIO.chpl"
  writeIt3(this6, &coerce_tmp, _ln, _fn);
#line 366 "ChapelIO.chpl"
  return;
#line 366 "ChapelIO.chpl"
}

#line 366 "ChapelIO.chpl"
/* ChapelIO.chpl:366 */
#line 366 "ChapelIO.chpl"
static void write2(Writer this6, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn) {
#line 368 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(368), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 368 "ChapelIO.chpl"
  writeIt2(this6, _e0_args, _ln, _fn);
#line 368 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(368), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 368 "ChapelIO.chpl"
  writeIt4(this6, _e1_args, _ln, _fn);
#line 366 "ChapelIO.chpl"
  return;
#line 366 "ChapelIO.chpl"
}

#line 366 "ChapelIO.chpl"
/* ChapelIO.chpl:508 */
#line 366 "ChapelIO.chpl"
static void chpl__auto_destroy_Reader(Reader this6, int64_t _ln, c_string _fn) {
#line 508 "ChapelIO.chpl"
  return;
#line 508 "ChapelIO.chpl"
}

#line 508 "ChapelIO.chpl"
/* ChapelIO.chpl:896 */
#line 508 "ChapelIO.chpl"
static void halt(c_string s, int64_t _ln, c_string _fn) {
#line 508 "ChapelIO.chpl"
  c_string_copy call_tmp;
#line 897 "ChapelIO.chpl"
  call_tmp = string_concat("halt reached - ", s, _ln, _fn);
#line 897 "ChapelIO.chpl"
  chpl_error(call_tmp, _ln, _fn);
#line 896 "ChapelIO.chpl"
  return;
#line 896 "ChapelIO.chpl"
}

#line 896 "ChapelIO.chpl"
/* ChapelIO.chpl:905 */
#line 896 "ChapelIO.chpl"
static void halt3(chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn) {
#line 896 "ChapelIO.chpl"
  int64_t this_x2_x1;
#line 896 "ChapelIO.chpl"
  c_string tmpstring;
#line 896 "ChapelIO.chpl"
  _tuple_1_star_int64_t coerce_tmp;
#line 896 "ChapelIO.chpl"
  _ref_c_string _ref_tmp_ = NULL;
#line 896 "ChapelIO.chpl"
  c_string_copy call_tmp;
#line 875 "DefaultRectangular.chpl"
  this_x2_x1 = *(*(_e1_args) + INT64(0));
#line 906 "ChapelIO.chpl"
  tmpstring = "";
#line 875 "DefaultRectangular.chpl"
  *(coerce_tmp + INT64(0)) = this_x2_x1;
#line 907 "ChapelIO.chpl"
  _ref_tmp_ = &tmpstring;
#line 907 "ChapelIO.chpl"
  chpl_check_nil(_ref_tmp_, INT64(907), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 907 "ChapelIO.chpl"
  write5(_ref_tmp_, _e0_args, &coerce_tmp, _ln, _fn);
#line 908 "ChapelIO.chpl"
  call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
#line 908 "ChapelIO.chpl"
  chpl_error(call_tmp, _ln, _fn);
#line 905 "ChapelIO.chpl"
  return;
#line 905 "ChapelIO.chpl"
}

#line 905 "ChapelIO.chpl"
/* ChapelIO.chpl:905 */
#line 905 "ChapelIO.chpl"
static void halt2(chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn) {
#line 905 "ChapelIO.chpl"
  c_string tmpstring;
#line 905 "ChapelIO.chpl"
  _ref_c_string _ref_tmp_ = NULL;
#line 905 "ChapelIO.chpl"
  c_string_copy call_tmp;
#line 906 "ChapelIO.chpl"
  tmpstring = "";
#line 907 "ChapelIO.chpl"
  _ref_tmp_ = &tmpstring;
#line 907 "ChapelIO.chpl"
  chpl_check_nil(_ref_tmp_, INT64(907), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 907 "ChapelIO.chpl"
  write4(_ref_tmp_, _e0_args, _e1_args, _ln, _fn);
#line 908 "ChapelIO.chpl"
  call_tmp = string_concat("halt reached - ", tmpstring, _ln, _fn);
#line 908 "ChapelIO.chpl"
  chpl_error(call_tmp, _ln, _fn);
#line 905 "ChapelIO.chpl"
  return;
#line 905 "ChapelIO.chpl"
}

#line 905 "ChapelIO.chpl"
/* ChapelIO.chpl:956 */
#line 905 "ChapelIO.chpl"
static StringWriter _construct_StringWriter(c_string_copy s, StringWriter meme, int64_t _ln, c_string _fn) {
#line 905 "ChapelIO.chpl"
  StringWriter this6 = NULL;
#line 905 "ChapelIO.chpl"
  Writer T = NULL;
#line 956 "ChapelIO.chpl"
  this6 = meme;
#line 956 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(956), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 956 "ChapelIO.chpl"
  T = &((this6)->super);
#line 956 "ChapelIO.chpl"
  _construct_Writer(T, _ln, _fn);
#line 958 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(958), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 958 "ChapelIO.chpl"
  (this6)->s = s;
#line 956 "ChapelIO.chpl"
  return this6;
#line 956 "ChapelIO.chpl"
}

#line 956 "ChapelIO.chpl"
/* ChapelIO.chpl:960 */
#line 956 "ChapelIO.chpl"
static StringWriter StringWriter2(c_string x, int64_t _ln, c_string _fn) {
#line 956 "ChapelIO.chpl"
  StringWriter this6 = NULL;
#line 956 "ChapelIO.chpl"
  StringWriter this7 = NULL;
#line 956 "ChapelIO.chpl"
  int64_t call_tmp;
#line 956 "ChapelIO.chpl"
  chpl_opaque cast_tmp;
#line 956 "ChapelIO.chpl"
  c_string_copy ret;
#line 956 "ChapelIO.chpl"
  StringWriter wrap_call_tmp = NULL;
#line 956 "ChapelIO.chpl"
  _ref_c_string_copy call_tmp2 = NULL;
#line 956 "ChapelIO.chpl"
  c_string_copy call_tmp3;
#line 956 "ChapelIO.chpl"
  c_string_copy coerce_tmp;
#line 956 "ChapelIO.chpl"
  c_string call_tmp4;
#line 956 "ChapelIO.chpl"
  c_string call_tmp5;
#line 956 "ChapelIO.chpl"
  int64_t call_tmp6;
#line 956 "ChapelIO.chpl"
  chpl_bool call_tmp7;
#line 960 "ChapelIO.chpl"
  call_tmp = sizeof(chpl_StringWriter_object);
#line 960 "ChapelIO.chpl"
  cast_tmp = chpl_here_alloc(call_tmp, INT16(20), _ln, _fn);
#line 960 "ChapelIO.chpl"
  this7 = ((StringWriter)(cast_tmp));
#line 960 "ChapelIO.chpl"
  ((object)(this7))->chpl__cid = chpl__cid_StringWriter;
#line 960 "ChapelIO.chpl"
  chpl_check_nil(this7, INT64(960), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 960 "ChapelIO.chpl"
  (this7)->s = NULL;
#line 960 "ChapelIO.chpl"
  ret = NULL;
#line 960 "ChapelIO.chpl"
  chpl_check_nil(this7, INT64(960), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 960 "ChapelIO.chpl"
  (this7)->s = ret;
#line 960 "ChapelIO.chpl"
  wrap_call_tmp = _construct_StringWriter(ret, this7, _ln, _fn);
#line 960 "ChapelIO.chpl"
  this6 = wrap_call_tmp;
#line 961 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(961), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 961 "ChapelIO.chpl"
  call_tmp2 = &((this6)->s);
#line 961 "ChapelIO.chpl"
  call_tmp3 = string_copy(x, _ln, _fn);
#line 961 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(961), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 961 "ChapelIO.chpl"
  coerce_tmp = (this6)->s;
#line 961 "ChapelIO.chpl"
  call_tmp4 = ((c_string)(coerce_tmp));
#line 961 "ChapelIO.chpl"
  call_tmp5 = ((c_string)(NULL));
#line 961 "ChapelIO.chpl"
  call_tmp6 = string_compare(call_tmp4, call_tmp5);
#line 961 "ChapelIO.chpl"
  call_tmp7 = (call_tmp6 != INT64(0));
#line 961 "ChapelIO.chpl"
  if (call_tmp7) /* ZLINE: 961 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl */
#line 961 "ChapelIO.chpl"
  {
#line 961 "ChapelIO.chpl"
    chpl_rt_free_c_string(call_tmp2, _ln, _fn);
#line 961 "ChapelIO.chpl"
  }
#line 961 "ChapelIO.chpl"
  *(call_tmp2) = call_tmp3;
#line 960 "ChapelIO.chpl"
  return this6;
#line 960 "ChapelIO.chpl"
}

#line 960 "ChapelIO.chpl"
/* ChapelIO.chpl:964 */
#line 960 "ChapelIO.chpl"
static void writePrimitive5(StringWriter this6, chpl_string x, int64_t _ln, c_string _fn) {
#line 960 "ChapelIO.chpl"
  c_string_copy aug;
#line 960 "ChapelIO.chpl"
  c_string_copy call_tmp;
#line 960 "ChapelIO.chpl"
  _ref_c_string_copy call_tmp2 = NULL;
#line 960 "ChapelIO.chpl"
  c_string_copy coerce_tmp;
#line 960 "ChapelIO.chpl"
  c_string call_tmp3;
#line 960 "ChapelIO.chpl"
  c_string call_tmp4;
#line 960 "ChapelIO.chpl"
  c_string_copy call_tmp5;
#line 960 "ChapelIO.chpl"
  c_string_copy coerce_tmp2;
#line 960 "ChapelIO.chpl"
  c_string call_tmp6;
#line 960 "ChapelIO.chpl"
  c_string call_tmp7;
#line 960 "ChapelIO.chpl"
  int64_t call_tmp8;
#line 960 "ChapelIO.chpl"
  chpl_bool call_tmp9;
#line 960 "ChapelIO.chpl"
  _ref_c_string_copy _ref_tmp_ = NULL;
#line 960 "ChapelIO.chpl"
  c_string call_tmp10;
#line 960 "ChapelIO.chpl"
  c_string call_tmp11;
#line 960 "ChapelIO.chpl"
  int64_t call_tmp12;
#line 960 "ChapelIO.chpl"
  chpl_bool call_tmp13;
#line 966 "ChapelIO.chpl"
  call_tmp = string_copy(x, _ln, _fn);
#line 966 "ChapelIO.chpl"
  aug = call_tmp;
#line 967 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(967), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 967 "ChapelIO.chpl"
  call_tmp2 = &((this6)->s);
#line 967 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(967), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 967 "ChapelIO.chpl"
  coerce_tmp = (this6)->s;
#line 967 "ChapelIO.chpl"
  call_tmp3 = ((c_string)(coerce_tmp));
#line 967 "ChapelIO.chpl"
  call_tmp4 = ((c_string)(call_tmp));
#line 967 "ChapelIO.chpl"
  call_tmp5 = string_concat(call_tmp3, call_tmp4, _ln, _fn);
#line 967 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(967), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 967 "ChapelIO.chpl"
  coerce_tmp2 = (this6)->s;
#line 967 "ChapelIO.chpl"
  call_tmp6 = ((c_string)(coerce_tmp2));
#line 967 "ChapelIO.chpl"
  call_tmp7 = ((c_string)(NULL));
#line 967 "ChapelIO.chpl"
  call_tmp8 = string_compare(call_tmp6, call_tmp7);
#line 967 "ChapelIO.chpl"
  call_tmp9 = (call_tmp8 != INT64(0));
#line 967 "ChapelIO.chpl"
  if (call_tmp9) /* ZLINE: 967 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl */
#line 967 "ChapelIO.chpl"
  {
#line 967 "ChapelIO.chpl"
    chpl_rt_free_c_string(call_tmp2, _ln, _fn);
#line 967 "ChapelIO.chpl"
  }
#line 967 "ChapelIO.chpl"
  *(call_tmp2) = call_tmp5;
#line 968 "ChapelIO.chpl"
  _ref_tmp_ = &aug;
#line 968 "ChapelIO.chpl"
  call_tmp10 = ((c_string)(aug));
#line 968 "ChapelIO.chpl"
  call_tmp11 = ((c_string)(NULL));
#line 968 "ChapelIO.chpl"
  call_tmp12 = string_compare(call_tmp10, call_tmp11);
#line 968 "ChapelIO.chpl"
  call_tmp13 = (call_tmp12 != INT64(0));
#line 968 "ChapelIO.chpl"
  if (call_tmp13) /* ZLINE: 968 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl */
#line 968 "ChapelIO.chpl"
  {
#line 968 "ChapelIO.chpl"
    chpl_rt_free_c_string(_ref_tmp_, _ln, _fn);
#line 968 "ChapelIO.chpl"
  }
#line 964 "ChapelIO.chpl"
  return;
#line 964 "ChapelIO.chpl"
}

#line 964 "ChapelIO.chpl"
/* ChapelIO.chpl:964 */
#line 964 "ChapelIO.chpl"
static void writePrimitive4(StringWriter this6, ioLiteral_chpl* const x, int64_t _ln, c_string _fn) {
#line 964 "ChapelIO.chpl"
  c_string_copy aug;
#line 964 "ChapelIO.chpl"
  _ref_c_string call_tmp = NULL;
#line 964 "ChapelIO.chpl"
  c_string T;
#line 964 "ChapelIO.chpl"
  c_string ret;
#line 964 "ChapelIO.chpl"
  c_string_copy call_tmp2;
#line 964 "ChapelIO.chpl"
  _ref_c_string_copy call_tmp3 = NULL;
#line 964 "ChapelIO.chpl"
  c_string_copy coerce_tmp;
#line 964 "ChapelIO.chpl"
  c_string call_tmp4;
#line 964 "ChapelIO.chpl"
  c_string call_tmp5;
#line 964 "ChapelIO.chpl"
  c_string_copy call_tmp6;
#line 964 "ChapelIO.chpl"
  c_string_copy coerce_tmp2;
#line 964 "ChapelIO.chpl"
  c_string call_tmp7;
#line 964 "ChapelIO.chpl"
  c_string call_tmp8;
#line 964 "ChapelIO.chpl"
  int64_t call_tmp9;
#line 964 "ChapelIO.chpl"
  chpl_bool call_tmp10;
#line 964 "ChapelIO.chpl"
  _ref_c_string_copy _ref_tmp_ = NULL;
#line 964 "ChapelIO.chpl"
  c_string call_tmp11;
#line 964 "ChapelIO.chpl"
  c_string call_tmp12;
#line 964 "ChapelIO.chpl"
  int64_t call_tmp13;
#line 964 "ChapelIO.chpl"
  chpl_bool call_tmp14;
#line 966 "ChapelIO.chpl"
  ret = (x)->val_chpl;
#line 966 "ChapelIO.chpl"
  T = ret;
#line 966 "ChapelIO.chpl"
  call_tmp = &T;
#line 966 "ChapelIO.chpl"
  call_tmp2 = string_copy(*(call_tmp), _ln, _fn);
#line 966 "ChapelIO.chpl"
  aug = call_tmp2;
#line 967 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(967), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 967 "ChapelIO.chpl"
  call_tmp3 = &((this6)->s);
#line 967 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(967), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 967 "ChapelIO.chpl"
  coerce_tmp = (this6)->s;
#line 967 "ChapelIO.chpl"
  call_tmp4 = ((c_string)(coerce_tmp));
#line 967 "ChapelIO.chpl"
  call_tmp5 = ((c_string)(call_tmp2));
#line 967 "ChapelIO.chpl"
  call_tmp6 = string_concat(call_tmp4, call_tmp5, _ln, _fn);
#line 967 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(967), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 967 "ChapelIO.chpl"
  coerce_tmp2 = (this6)->s;
#line 967 "ChapelIO.chpl"
  call_tmp7 = ((c_string)(coerce_tmp2));
#line 967 "ChapelIO.chpl"
  call_tmp8 = ((c_string)(NULL));
#line 967 "ChapelIO.chpl"
  call_tmp9 = string_compare(call_tmp7, call_tmp8);
#line 967 "ChapelIO.chpl"
  call_tmp10 = (call_tmp9 != INT64(0));
#line 967 "ChapelIO.chpl"
  if (call_tmp10) /* ZLINE: 967 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl */
#line 967 "ChapelIO.chpl"
  {
#line 967 "ChapelIO.chpl"
    chpl_rt_free_c_string(call_tmp3, _ln, _fn);
#line 967 "ChapelIO.chpl"
  }
#line 967 "ChapelIO.chpl"
  *(call_tmp3) = call_tmp6;
#line 968 "ChapelIO.chpl"
  _ref_tmp_ = &aug;
#line 968 "ChapelIO.chpl"
  call_tmp11 = ((c_string)(aug));
#line 968 "ChapelIO.chpl"
  call_tmp12 = ((c_string)(NULL));
#line 968 "ChapelIO.chpl"
  call_tmp13 = string_compare(call_tmp11, call_tmp12);
#line 968 "ChapelIO.chpl"
  call_tmp14 = (call_tmp13 != INT64(0));
#line 968 "ChapelIO.chpl"
  if (call_tmp14) /* ZLINE: 968 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl */
#line 968 "ChapelIO.chpl"
  {
#line 968 "ChapelIO.chpl"
    chpl_rt_free_c_string(_ref_tmp_, _ln, _fn);
#line 968 "ChapelIO.chpl"
  }
#line 964 "ChapelIO.chpl"
  return;
#line 964 "ChapelIO.chpl"
}

#line 964 "ChapelIO.chpl"
/* ChapelIO.chpl:964 */
#line 964 "ChapelIO.chpl"
static void writePrimitive6(StringWriter this6, int64_t x, int64_t _ln, c_string _fn) {
#line 964 "ChapelIO.chpl"
  c_string_copy aug;
#line 964 "ChapelIO.chpl"
  c_string_copy call_tmp;
#line 964 "ChapelIO.chpl"
  uint64_t call_tmp2;
#line 964 "ChapelIO.chpl"
  _ref_c_string_copy call_tmp3 = NULL;
#line 964 "ChapelIO.chpl"
  c_string_copy coerce_tmp;
#line 964 "ChapelIO.chpl"
  c_string call_tmp4;
#line 964 "ChapelIO.chpl"
  c_string call_tmp5;
#line 964 "ChapelIO.chpl"
  c_string_copy call_tmp6;
#line 964 "ChapelIO.chpl"
  c_string_copy coerce_tmp2;
#line 964 "ChapelIO.chpl"
  c_string call_tmp7;
#line 964 "ChapelIO.chpl"
  c_string call_tmp8;
#line 964 "ChapelIO.chpl"
  int64_t call_tmp9;
#line 964 "ChapelIO.chpl"
  chpl_bool call_tmp10;
#line 964 "ChapelIO.chpl"
  _ref_c_string_copy _ref_tmp_ = NULL;
#line 964 "ChapelIO.chpl"
  c_string call_tmp11;
#line 964 "ChapelIO.chpl"
  c_string call_tmp12;
#line 964 "ChapelIO.chpl"
  int64_t call_tmp13;
#line 964 "ChapelIO.chpl"
  chpl_bool call_tmp14;
#line 966 "ChapelIO.chpl"
  call_tmp2 = ((uint64_t)(INT64(8)));
#line 966 "ChapelIO.chpl"
  call_tmp = integral_to_c_string_copy(x, call_tmp2, true);
#line 966 "ChapelIO.chpl"
  aug = call_tmp;
#line 967 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(967), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 967 "ChapelIO.chpl"
  call_tmp3 = &((this6)->s);
#line 967 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(967), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 967 "ChapelIO.chpl"
  coerce_tmp = (this6)->s;
#line 967 "ChapelIO.chpl"
  call_tmp4 = ((c_string)(coerce_tmp));
#line 967 "ChapelIO.chpl"
  call_tmp5 = ((c_string)(call_tmp));
#line 967 "ChapelIO.chpl"
  call_tmp6 = string_concat(call_tmp4, call_tmp5, _ln, _fn);
#line 967 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(967), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 967 "ChapelIO.chpl"
  coerce_tmp2 = (this6)->s;
#line 967 "ChapelIO.chpl"
  call_tmp7 = ((c_string)(coerce_tmp2));
#line 967 "ChapelIO.chpl"
  call_tmp8 = ((c_string)(NULL));
#line 967 "ChapelIO.chpl"
  call_tmp9 = string_compare(call_tmp7, call_tmp8);
#line 967 "ChapelIO.chpl"
  call_tmp10 = (call_tmp9 != INT64(0));
#line 967 "ChapelIO.chpl"
  if (call_tmp10) /* ZLINE: 967 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl */
#line 967 "ChapelIO.chpl"
  {
#line 967 "ChapelIO.chpl"
    chpl_rt_free_c_string(call_tmp3, _ln, _fn);
#line 967 "ChapelIO.chpl"
  }
#line 967 "ChapelIO.chpl"
  *(call_tmp3) = call_tmp6;
#line 968 "ChapelIO.chpl"
  _ref_tmp_ = &aug;
#line 968 "ChapelIO.chpl"
  call_tmp11 = ((c_string)(aug));
#line 968 "ChapelIO.chpl"
  call_tmp12 = ((c_string)(NULL));
#line 968 "ChapelIO.chpl"
  call_tmp13 = string_compare(call_tmp11, call_tmp12);
#line 968 "ChapelIO.chpl"
  call_tmp14 = (call_tmp13 != INT64(0));
#line 968 "ChapelIO.chpl"
  if (call_tmp14) /* ZLINE: 968 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl */
#line 968 "ChapelIO.chpl"
  {
#line 968 "ChapelIO.chpl"
    chpl_rt_free_c_string(_ref_tmp_, _ln, _fn);
#line 968 "ChapelIO.chpl"
  }
#line 964 "ChapelIO.chpl"
  return;
#line 964 "ChapelIO.chpl"
}

#line 964 "ChapelIO.chpl"
/* ChapelIO.chpl:971 */
#line 964 "ChapelIO.chpl"
static void chpl___TILDE_StringWriter(StringWriter this6, int64_t _ln, c_string _fn) {
#line 964 "ChapelIO.chpl"
  _ref_c_string_copy call_tmp = NULL;
#line 964 "ChapelIO.chpl"
  c_string_copy coerce_tmp;
#line 964 "ChapelIO.chpl"
  c_string call_tmp2;
#line 964 "ChapelIO.chpl"
  c_string call_tmp3;
#line 964 "ChapelIO.chpl"
  int64_t call_tmp4;
#line 964 "ChapelIO.chpl"
  chpl_bool call_tmp5;
#line 964 "ChapelIO.chpl"
  _ref_c_string_copy call_tmp6 = NULL;
#line 972 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(972), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 972 "ChapelIO.chpl"
  call_tmp = &((this6)->s);
#line 972 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(972), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 972 "ChapelIO.chpl"
  coerce_tmp = (this6)->s;
#line 972 "ChapelIO.chpl"
  call_tmp2 = ((c_string)(coerce_tmp));
#line 972 "ChapelIO.chpl"
  call_tmp3 = ((c_string)(NULL));
#line 972 "ChapelIO.chpl"
  call_tmp4 = string_compare(call_tmp2, call_tmp3);
#line 972 "ChapelIO.chpl"
  call_tmp5 = (call_tmp4 != INT64(0));
#line 972 "ChapelIO.chpl"
  if (call_tmp5) /* ZLINE: 972 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl */
#line 972 "ChapelIO.chpl"
  {
#line 972 "ChapelIO.chpl"
    chpl_rt_free_c_string(call_tmp, _ln, _fn);
#line 972 "ChapelIO.chpl"
  }
#line 973 "ChapelIO.chpl"
  chpl_check_nil(this6, INT64(973), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 973 "ChapelIO.chpl"
  call_tmp6 = &((this6)->s);
#line 973 "ChapelIO.chpl"
  *(call_tmp6) = NULL;
#line 971 "ChapelIO.chpl"
  return;
#line 971 "ChapelIO.chpl"
}

#line 971 "ChapelIO.chpl"
/* ChapelIO.chpl:995 */
#line 971 "ChapelIO.chpl"
static void write5(_ref_c_string this6, chpl_string _e0_args, _tuple_1_star_int64_t* const _e1_args, int64_t _ln, c_string _fn) {
#line 971 "ChapelIO.chpl"
  int64_t this_x2_x1;
#line 971 "ChapelIO.chpl"
  StringWriter sc = NULL;
#line 971 "ChapelIO.chpl"
  c_string coerce_tmp;
#line 971 "ChapelIO.chpl"
  Writer call_tmp = NULL;
#line 971 "ChapelIO.chpl"
  _tuple_1_star_int64_t coerce_tmp2;
#line 971 "ChapelIO.chpl"
  c_string_copy ret;
#line 971 "ChapelIO.chpl"
  c_string call_tmp2;
#line 971 "ChapelIO.chpl"
  _ref_c_string_copy call_tmp3 = NULL;
#line 971 "ChapelIO.chpl"
  StringWriter delete_tmp = NULL;
#line 971 "ChapelIO.chpl"
  chpl_opaque call_tmp4;
#line 907 "ChapelIO.chpl"
  this_x2_x1 = *(*(_e1_args) + INT64(0));
#line 996 "ChapelIO.chpl"
  coerce_tmp = *(this6);
#line 996 "ChapelIO.chpl"
  sc = StringWriter2(coerce_tmp, _ln, _fn);
#line 997 "ChapelIO.chpl"
  call_tmp = ((Writer)(sc));
#line 907 "ChapelIO.chpl"
  *(coerce_tmp2 + INT64(0)) = this_x2_x1;
#line 997 "ChapelIO.chpl"
  chpl_check_nil(call_tmp, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 997 "ChapelIO.chpl"
  write3(call_tmp, _e0_args, &coerce_tmp2, _ln, _fn);
#line 999 "ChapelIO.chpl"
  chpl_check_nil(sc, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 999 "ChapelIO.chpl"
  ret = (sc)->s;
#line 999 "ChapelIO.chpl"
  call_tmp2 = ((c_string)(ret));
#line 999 "ChapelIO.chpl"
  *(this6) = call_tmp2;
#line 1001 "ChapelIO.chpl"
  chpl_check_nil(sc, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 1001 "ChapelIO.chpl"
  call_tmp3 = &((sc)->s);
#line 1001 "ChapelIO.chpl"
  *(call_tmp3) = NULL;
#line 1002 "ChapelIO.chpl"
  delete_tmp = sc;
#line 1002 "ChapelIO.chpl"
  chpl___TILDE_StringWriter(sc, _ln, _fn);
#line 1002 "ChapelIO.chpl"
  call_tmp4 = ((void*)(delete_tmp));
#line 1002 "ChapelIO.chpl"
  chpl_here_free(call_tmp4, _ln, _fn);
#line 995 "ChapelIO.chpl"
  return;
#line 995 "ChapelIO.chpl"
}

#line 995 "ChapelIO.chpl"
/* ChapelIO.chpl:995 */
#line 995 "ChapelIO.chpl"
static void write4(_ref_c_string this6, chpl_string _e0_args, int64_t _e1_args, int64_t _ln, c_string _fn) {
#line 995 "ChapelIO.chpl"
  StringWriter sc = NULL;
#line 995 "ChapelIO.chpl"
  c_string coerce_tmp;
#line 995 "ChapelIO.chpl"
  Writer call_tmp = NULL;
#line 995 "ChapelIO.chpl"
  c_string_copy ret;
#line 995 "ChapelIO.chpl"
  c_string call_tmp2;
#line 995 "ChapelIO.chpl"
  _ref_c_string_copy call_tmp3 = NULL;
#line 995 "ChapelIO.chpl"
  StringWriter delete_tmp = NULL;
#line 995 "ChapelIO.chpl"
  chpl_opaque call_tmp4;
#line 996 "ChapelIO.chpl"
  coerce_tmp = *(this6);
#line 996 "ChapelIO.chpl"
  sc = StringWriter2(coerce_tmp, _ln, _fn);
#line 997 "ChapelIO.chpl"
  call_tmp = ((Writer)(sc));
#line 997 "ChapelIO.chpl"
  chpl_check_nil(call_tmp, INT64(997), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 997 "ChapelIO.chpl"
  write2(call_tmp, _e0_args, _e1_args, _ln, _fn);
#line 999 "ChapelIO.chpl"
  chpl_check_nil(sc, INT64(999), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 999 "ChapelIO.chpl"
  ret = (sc)->s;
#line 999 "ChapelIO.chpl"
  call_tmp2 = ((c_string)(ret));
#line 999 "ChapelIO.chpl"
  *(this6) = call_tmp2;
#line 1001 "ChapelIO.chpl"
  chpl_check_nil(sc, INT64(1001), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/ChapelIO.chpl");
#line 1001 "ChapelIO.chpl"
  call_tmp3 = &((sc)->s);
#line 1001 "ChapelIO.chpl"
  *(call_tmp3) = NULL;
#line 1002 "ChapelIO.chpl"
  delete_tmp = sc;
#line 1002 "ChapelIO.chpl"
  chpl___TILDE_StringWriter(sc, _ln, _fn);
#line 1002 "ChapelIO.chpl"
  call_tmp4 = ((void*)(delete_tmp));
#line 1002 "ChapelIO.chpl"
  chpl_here_free(call_tmp4, _ln, _fn);
#line 995 "ChapelIO.chpl"
  return;
#line 995 "ChapelIO.chpl"
}


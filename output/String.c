/* String.chpl:57 */
static void chpl__init_String(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
#line 57 "String.chpl"
  if (chpl__init_String_p) /* ZLINE: 57 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 57 "String.chpl"
  {
#line 57 "String.chpl"
    goto _exit_chpl__init_String;
#line 57 "String.chpl"
  }
#line 57 "String.chpl"
  modFormatStr = "%*s\n";
#line 57 "String.chpl"
  modStr = "String";
#line 57 "String.chpl"
  printModuleInit(modFormatStr, modStr, INT64(6), _ln, _fn);
#line 57 "String.chpl"
  refIndentLevel = &moduleInitLevel;
#line 57 "String.chpl"
  *(refIndentLevel) += INT64(1);
#line 57 "String.chpl"
  chpl__init_String_p = UINT8(true);
#line 57 "String.chpl"
  {
#line 57 "String.chpl"
    chpl__init_BaseStringType(_ln, _fn);
#line 57 "String.chpl"
    chpl__init_CString(_ln, _fn);
#line 57 "String.chpl"
    chpl__init_SysCTypes(_ln, _fn);
#line 57 "String.chpl"
    chpl__init_StringCasts(_ln, _fn);
#line 57 "String.chpl"
  }
#line 57 "String.chpl"
  *(refIndentLevel) -= INT64(1);
#line 57 "String.chpl"
  _exit_chpl__init_String:;
#line 57 "String.chpl"
  return;
#line 57 "String.chpl"
}

#line 57 "String.chpl"
/* String.chpl:109 */
#line 57 "String.chpl"
static void _construct_string(int64_t len, int64_t _size, c_ptr_uint8_t buff, chpl_bool owned, int32_t locale_id, string* const meme, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 57 "String.chpl"
  string this5;
#line 109 "String.chpl"
  this5 = *(meme);
#line 111 "String.chpl"
  (&this5)->len = len;
#line 113 "String.chpl"
  (&this5)->_size = _size;
#line 115 "String.chpl"
  (&this5)->buff = buff;
#line 117 "String.chpl"
  (&this5)->owned = owned;
#line 121 "String.chpl"
  (&this5)->locale_id = locale_id;
#line 109 "String.chpl"
  *(_retArg) = this5;
#line 109 "String.chpl"
  return;
#line 109 "String.chpl"
}

#line 109 "String.chpl"
/* String.chpl:131 */
#line 109 "String.chpl"
static void string2(string* const s, chpl_bool owned, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 109 "String.chpl"
  string local__str_literal_2592;
#line 109 "String.chpl"
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
#line 109 "String.chpl"
  string this5;
#line 109 "String.chpl"
  string this6;
#line 109 "String.chpl"
  c_ptr_uint8_t call_tmp = NULL;
#line 109 "String.chpl"
  int32_t default_arglocale_id;
#line 109 "String.chpl"
  string wrap_call_tmp;
#line 109 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 109 "String.chpl"
  int64_t coerce_tmp;
#line 109 "String.chpl"
  _ref_chpl_bool call_tmp2 = NULL;
#line 109 "String.chpl"
  chpl_bool call_tmp3;
#line 109 "String.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 109 "String.chpl"
  chpl_bool coerce_tmp2;
#line 109 "String.chpl"
  int64_t call_tmp5;
#line 109 "String.chpl"
  int64_t call_tmp6;
#line 109 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp7 = NULL;
#line 109 "String.chpl"
  c_void_ptr cast_tmp;
#line 109 "String.chpl"
  c_ptr_uint8_t call_tmp8 = NULL;
#line 109 "String.chpl"
  int64_t coerce_tmp3;
#line 109 "String.chpl"
  chpl_bool call_tmp9;
#line 109 "String.chpl"
  uint64_t call_tmp10;
#line 109 "String.chpl"
  c_ptr_uint8_t coerce_tmp4 = NULL;
#line 109 "String.chpl"
  c_ptr_uint8_t coerce_tmp5 = NULL;
#line 109 "String.chpl"
  c_ptr_uint8_t coerce_tmp6 = NULL;
#line 109 "String.chpl"
  _ref_uint8_t call_tmp11 = NULL;
#line 109 "String.chpl"
  uint8_t call_tmp12;
#line 109 "String.chpl"
  _ref_int64_t call_tmp13 = NULL;
#line 109 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp14 = NULL;
#line 109 "String.chpl"
  c_ptr_uint8_t coerce_tmp7 = NULL;
#line 109 "String.chpl"
  _ref_int64_t call_tmp15 = NULL;
#line 109 "String.chpl"
  int64_t coerce_tmp8;
#line 148 "String.chpl"
  local__str_literal_2592 = _str_literal_2592;
#line 147 "String.chpl"
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
#line 131 "String.chpl"
  (&this6)->len = INT64(0);
#line 131 "String.chpl"
  (&this6)->_size = INT64(0);
#line 131 "String.chpl"
  (&this6)->buff = nil;
#line 131 "String.chpl"
  (&this6)->owned = UINT8(false);
#line 131 "String.chpl"
  (&this6)->locale_id = INT32(0);
#line 131 "String.chpl"
  (&this6)->len = INT64(0);
#line 131 "String.chpl"
  (&this6)->_size = INT64(0);
#line 131 "String.chpl"
  call_tmp = ((c_ptr_uint8_t)(nil));
#line 131 "String.chpl"
  (&this6)->buff = call_tmp;
#line 131 "String.chpl"
  (&this6)->owned = UINT8(true);
#line 131 "String.chpl"
  default_arglocale_id = chpl_nodeID;
#line 131 "String.chpl"
  (&this6)->locale_id = default_arglocale_id;
#line 131 "String.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 131 "String.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this6, ret_to_arg_ref_tmp_, _ln, _fn);
#line 131 "String.chpl"
  this5 = wrap_call_tmp;
#line 133 "String.chpl"
  coerce_tmp = (s)->len;
#line 134 "String.chpl"
  call_tmp2 = &((&this5)->owned);
#line 134 "String.chpl"
  *(call_tmp2) = owned;
#line 136 "String.chpl"
  call_tmp3 = (coerce_tmp != INT64(0));
#line 136 "String.chpl"
  if (call_tmp3) /* ZLINE: 137 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 136 "String.chpl"
  {
#line 137 "String.chpl"
    call_tmp4 = &((&this5)->len);
#line 137 "String.chpl"
    *(call_tmp4) = coerce_tmp;
#line 144 "String.chpl"
    coerce_tmp2 = (&this5)->owned;
#line 144 "String.chpl"
    if (coerce_tmp2) /* ZLINE: 145 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 144 "String.chpl"
    {
#line 145 "String.chpl"
      call_tmp5 = (coerce_tmp + INT64(1));
#line 145 "String.chpl"
      call_tmp6 = chpl_here_good_alloc_size(call_tmp5, _ln, _fn);
#line 146 "String.chpl"
      call_tmp7 = &((&this5)->buff);
#line 146 "String.chpl"
      cast_tmp = chpl_here_alloc(call_tmp6, local_CHPL_RT_MD_STR_COPY_DATA, _ln, _fn);
#line 146 "String.chpl"
      call_tmp8 = ((c_ptr_uint8_t)(cast_tmp));
#line 146 "String.chpl"
      *(call_tmp7) = call_tmp8;
#line 148 "String.chpl"
      coerce_tmp3 = (s)->len;
#line 148 "String.chpl"
      call_tmp9 = (coerce_tmp3 < INT64(0));
#line 148 "String.chpl"
      if (call_tmp9) /* ZLINE: 148 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 148 "String.chpl"
      {
#line 148 "String.chpl"
        halt(&local__str_literal_2592, _ln, _fn);
#line 148 "String.chpl"
      }
#line 148 "String.chpl"
      call_tmp10 = ((uint64_t)(coerce_tmp3));
#line 148 "String.chpl"
      coerce_tmp4 = (&this5)->buff;
#line 148 "String.chpl"
      coerce_tmp5 = (s)->buff;
#line 148 "String.chpl"
      memcpy(coerce_tmp4, coerce_tmp5, call_tmp10);
#line 149 "String.chpl"
      coerce_tmp6 = (&this5)->buff;
#line 149 "String.chpl"
      call_tmp11 = (coerce_tmp6 + coerce_tmp);
#line 149 "String.chpl"
      call_tmp12 = ((uint8_t)(INT64(0)));
#line 149 "String.chpl"
      *(call_tmp11) = call_tmp12;
#line 150 "String.chpl"
      call_tmp13 = &((&this5)->_size);
#line 150 "String.chpl"
      *(call_tmp13) = call_tmp6;
#line 150 "String.chpl"
    } else /* ZLINE: 152 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 150 "String.chpl"
    {
#line 152 "String.chpl"
      call_tmp14 = &((&this5)->buff);
#line 152 "String.chpl"
      coerce_tmp7 = (s)->buff;
#line 152 "String.chpl"
      *(call_tmp14) = coerce_tmp7;
#line 153 "String.chpl"
      call_tmp15 = &((&this5)->_size);
#line 153 "String.chpl"
      coerce_tmp8 = (s)->_size;
#line 153 "String.chpl"
      *(call_tmp15) = coerce_tmp8;
#line 153 "String.chpl"
    }
#line 153 "String.chpl"
  }
#line 131 "String.chpl"
  *(_retArg) = this5;
#line 131 "String.chpl"
  return;
#line 131 "String.chpl"
}

#line 131 "String.chpl"
/* String.chpl:167 */
#line 131 "String.chpl"
static void string3(c_string cs, chpl_bool owned, chpl_bool needToCopy, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 131 "String.chpl"
  string this5;
#line 131 "String.chpl"
  string this6;
#line 131 "String.chpl"
  c_ptr_uint8_t call_tmp = NULL;
#line 131 "String.chpl"
  int32_t default_arglocale_id;
#line 131 "String.chpl"
  string wrap_call_tmp;
#line 131 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 131 "String.chpl"
  _ref_chpl_bool call_tmp2 = NULL;
#line 131 "String.chpl"
  int64_t call_tmp3;
#line 131 "String.chpl"
  c_ptr_uint8_t call_tmp4 = NULL;
#line 131 "String.chpl"
  int64_t call_tmp5;
#line 131 "String.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 167 "String.chpl"
  (&this6)->len = INT64(0);
#line 167 "String.chpl"
  (&this6)->_size = INT64(0);
#line 167 "String.chpl"
  (&this6)->buff = nil;
#line 167 "String.chpl"
  (&this6)->owned = UINT8(false);
#line 167 "String.chpl"
  (&this6)->locale_id = INT32(0);
#line 167 "String.chpl"
  (&this6)->len = INT64(0);
#line 167 "String.chpl"
  (&this6)->_size = INT64(0);
#line 167 "String.chpl"
  call_tmp = ((c_ptr_uint8_t)(nil));
#line 167 "String.chpl"
  (&this6)->buff = call_tmp;
#line 167 "String.chpl"
  (&this6)->owned = UINT8(true);
#line 167 "String.chpl"
  default_arglocale_id = chpl_nodeID;
#line 167 "String.chpl"
  (&this6)->locale_id = default_arglocale_id;
#line 167 "String.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 167 "String.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this6, ret_to_arg_ref_tmp_, _ln, _fn);
#line 167 "String.chpl"
  this5 = wrap_call_tmp;
#line 168 "String.chpl"
  call_tmp2 = &((&this5)->owned);
#line 168 "String.chpl"
  *(call_tmp2) = owned;
#line 169 "String.chpl"
  call_tmp3 = string_length(cs);
#line 170 "String.chpl"
  call_tmp4 = ((c_ptr_uint8_t)(cs));
#line 170 "String.chpl"
  call_tmp5 = (call_tmp3 + INT64(1));
#line 170 "String.chpl"
  _ref_tmp_ = &this5;
#line 170 "String.chpl"
  chpl_check_nil(_ref_tmp_, INT64(170), INT64(8));
#line 170 "String.chpl"
  reinitString(_ref_tmp_, call_tmp4, call_tmp3, call_tmp5, needToCopy, _ln, _fn);
#line 167 "String.chpl"
  *(_retArg) = this5;
#line 167 "String.chpl"
  return;
#line 167 "String.chpl"
}

#line 167 "String.chpl"
/* String.chpl:184 */
#line 167 "String.chpl"
static void string4(c_ptr_uint8_t buff, int64_t length2, int64_t size2, chpl_bool owned, chpl_bool needToCopy, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 167 "String.chpl"
  string this5;
#line 167 "String.chpl"
  string this6;
#line 167 "String.chpl"
  c_ptr_uint8_t call_tmp = NULL;
#line 167 "String.chpl"
  int32_t default_arglocale_id;
#line 167 "String.chpl"
  string wrap_call_tmp;
#line 167 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 167 "String.chpl"
  _ref_chpl_bool call_tmp2 = NULL;
#line 167 "String.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 184 "String.chpl"
  (&this6)->len = INT64(0);
#line 184 "String.chpl"
  (&this6)->_size = INT64(0);
#line 184 "String.chpl"
  (&this6)->buff = nil;
#line 184 "String.chpl"
  (&this6)->owned = UINT8(false);
#line 184 "String.chpl"
  (&this6)->locale_id = INT32(0);
#line 184 "String.chpl"
  (&this6)->len = INT64(0);
#line 184 "String.chpl"
  (&this6)->_size = INT64(0);
#line 184 "String.chpl"
  call_tmp = ((c_ptr_uint8_t)(nil));
#line 184 "String.chpl"
  (&this6)->buff = call_tmp;
#line 184 "String.chpl"
  (&this6)->owned = UINT8(true);
#line 184 "String.chpl"
  default_arglocale_id = chpl_nodeID;
#line 184 "String.chpl"
  (&this6)->locale_id = default_arglocale_id;
#line 184 "String.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 184 "String.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this6, ret_to_arg_ref_tmp_, _ln, _fn);
#line 184 "String.chpl"
  this5 = wrap_call_tmp;
#line 186 "String.chpl"
  call_tmp2 = &((&this5)->owned);
#line 186 "String.chpl"
  *(call_tmp2) = owned;
#line 187 "String.chpl"
  _ref_tmp_ = &this5;
#line 187 "String.chpl"
  chpl_check_nil(_ref_tmp_, INT64(187), INT64(8));
#line 187 "String.chpl"
  reinitString(_ref_tmp_, buff, length2, size2, needToCopy, _ln, _fn);
#line 184 "String.chpl"
  *(_retArg) = this5;
#line 184 "String.chpl"
  return;
#line 184 "String.chpl"
}

#line 184 "String.chpl"
/* String.chpl:191 */
#line 184 "String.chpl"
static void chpl___TILDE_string(_ref_string this5, int64_t _ln, int32_t _fn) {
#line 184 "String.chpl"
  int32_t local_c_sublocid_any;
#line 184 "String.chpl"
  chpl_bool T;
#line 184 "String.chpl"
  chpl_bool coerce_tmp;
#line 184 "String.chpl"
  int64_t coerce_tmp2;
#line 184 "String.chpl"
  chpl_bool call_tmp;
#line 184 "String.chpl"
  chpl_bool call_tmp2;
#line 184 "String.chpl"
  int32_t coerce_tmp3;
#line 184 "String.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 184 "String.chpl"
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
#line 184 "String.chpl"
  c_ptr_uint8_t coerce_tmp4 = NULL;
#line 184 "String.chpl"
  c_void_ptr call_tmp3;
#line 194 "String.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 192 "String.chpl"
  chpl_check_nil(this5, INT64(192), INT64(8));
#line 192 "String.chpl"
  coerce_tmp = (this5)->owned;
#line 192 "String.chpl"
  if (coerce_tmp) /* ZLINE: 192 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 192 "String.chpl"
  {
#line 192 "String.chpl"
    chpl_check_nil(this5, INT64(192), INT64(8));
#line 192 "String.chpl"
    coerce_tmp2 = (this5)->len;
#line 192 "String.chpl"
    call_tmp = (coerce_tmp2 == INT64(0));
#line 192 "String.chpl"
    call_tmp2 = (! call_tmp);
#line 192 "String.chpl"
    T = call_tmp2;
#line 192 "String.chpl"
  } else /* ZLINE: 192 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 192 "String.chpl"
  {
#line 192 "String.chpl"
    T = UINT8(false);
#line 192 "String.chpl"
  }
#line 192 "String.chpl"
  if (T) /* ZLINE: 193 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 192 "String.chpl"
  {
#line 194 "String.chpl"
    chpl_check_nil(this5, INT64(194), INT64(8));
#line 194 "String.chpl"
    coerce_tmp3 = (this5)->locale_id;
#line 194 "String.chpl"
    ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 194 "String.chpl"
    chpl_buildLocaleID(coerce_tmp3, local_c_sublocid_any, ret_to_arg_ref_tmp_, _ln, _fn);
#line 195 "String.chpl"
    chpl_check_nil(this5, INT64(195), INT64(8));
#line 195 "String.chpl"
    coerce_tmp4 = (this5)->buff;
#line 195 "String.chpl"
    call_tmp3 = ((c_void_ptr)(coerce_tmp4));
#line 195 "String.chpl"
    chpl_here_free(call_tmp3, _ln, _fn);
#line 195 "String.chpl"
  }
#line 191 "String.chpl"
  return;
#line 191 "String.chpl"
}

#line 191 "String.chpl"
/* String.chpl:202 */
#line 191 "String.chpl"
static void reinitString(_ref_string this5, c_ptr_uint8_t buf, int64_t s_len, int64_t size2, chpl_bool needToCopy, int64_t _ln, int32_t _fn) {
#line 191 "String.chpl"
  string local__str_literal_2592;
#line 191 "String.chpl"
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
#line 191 "String.chpl"
  c_void_ptr local_c_nil;
#line 191 "String.chpl"
  int64_t coerce_tmp;
#line 191 "String.chpl"
  chpl_bool call_tmp;
#line 191 "String.chpl"
  chpl_bool call_tmp2;
#line 191 "String.chpl"
  chpl_bool T;
#line 191 "String.chpl"
  chpl_bool call_tmp3;
#line 191 "String.chpl"
  chpl_bool call_tmp4;
#line 191 "String.chpl"
  chpl_bool coerce_tmp2;
#line 191 "String.chpl"
  chpl_bool call_tmp5;
#line 191 "String.chpl"
  chpl_bool T2;
#line 191 "String.chpl"
  int64_t call_tmp6;
#line 191 "String.chpl"
  int64_t coerce_tmp3;
#line 191 "String.chpl"
  chpl_bool call_tmp7;
#line 191 "String.chpl"
  chpl_bool T3;
#line 191 "String.chpl"
  chpl_bool coerce_tmp4;
#line 191 "String.chpl"
  int64_t coerce_tmp5;
#line 191 "String.chpl"
  chpl_bool call_tmp8;
#line 191 "String.chpl"
  chpl_bool call_tmp9;
#line 191 "String.chpl"
  c_ptr_uint8_t coerce_tmp6 = NULL;
#line 191 "String.chpl"
  c_void_ptr call_tmp10;
#line 191 "String.chpl"
  int64_t call_tmp11;
#line 191 "String.chpl"
  int64_t call_tmp12;
#line 191 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp13 = NULL;
#line 191 "String.chpl"
  c_void_ptr cast_tmp;
#line 191 "String.chpl"
  c_ptr_uint8_t call_tmp14 = NULL;
#line 191 "String.chpl"
  c_ptr_uint8_t coerce_tmp7 = NULL;
#line 191 "String.chpl"
  _ref_uint8_t call_tmp15 = NULL;
#line 191 "String.chpl"
  uint8_t call_tmp16;
#line 191 "String.chpl"
  _ref_int64_t call_tmp17 = NULL;
#line 191 "String.chpl"
  _ref_chpl_bool call_tmp18 = NULL;
#line 191 "String.chpl"
  chpl_bool call_tmp19;
#line 191 "String.chpl"
  uint64_t call_tmp20;
#line 191 "String.chpl"
  c_ptr_uint8_t coerce_tmp8 = NULL;
#line 191 "String.chpl"
  chpl_bool T4;
#line 191 "String.chpl"
  chpl_bool coerce_tmp9;
#line 191 "String.chpl"
  int64_t coerce_tmp10;
#line 191 "String.chpl"
  chpl_bool call_tmp21;
#line 191 "String.chpl"
  chpl_bool call_tmp22;
#line 191 "String.chpl"
  c_ptr_uint8_t coerce_tmp11 = NULL;
#line 191 "String.chpl"
  c_void_ptr call_tmp23;
#line 191 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp24 = NULL;
#line 191 "String.chpl"
  _ref_int64_t call_tmp25 = NULL;
#line 191 "String.chpl"
  chpl_bool T5;
#line 191 "String.chpl"
  chpl_bool coerce_tmp12;
#line 191 "String.chpl"
  int64_t coerce_tmp13;
#line 191 "String.chpl"
  chpl_bool call_tmp26;
#line 191 "String.chpl"
  chpl_bool call_tmp27;
#line 191 "String.chpl"
  c_ptr_uint8_t coerce_tmp14 = NULL;
#line 191 "String.chpl"
  c_void_ptr call_tmp28;
#line 191 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp29 = NULL;
#line 191 "String.chpl"
  _ref_int64_t call_tmp30 = NULL;
#line 191 "String.chpl"
  _ref_int64_t call_tmp31 = NULL;
#line 226 "String.chpl"
  local__str_literal_2592 = _str_literal_2592;
#line 220 "String.chpl"
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
#line 205 "String.chpl"
  local_c_nil = c_nil;
#line 204 "String.chpl"
  chpl_check_nil(this5, INT64(204), INT64(8));
#line 204 "String.chpl"
  coerce_tmp = (this5)->len;
#line 204 "String.chpl"
  call_tmp = (coerce_tmp == INT64(0));
#line 204 "String.chpl"
  if (call_tmp) /* ZLINE: 205 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 204 "String.chpl"
  {
#line 205 "String.chpl"
    call_tmp2 = (s_len == INT64(0));
#line 205 "String.chpl"
    if (call_tmp2) /* ZLINE: 205 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 205 "String.chpl"
    {
#line 205 "String.chpl"
      T = UINT8(true);
#line 205 "String.chpl"
    } else /* ZLINE: 205 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 205 "String.chpl"
    {
#line 205 "String.chpl"
      call_tmp3 = (buf == local_c_nil);
#line 205 "String.chpl"
      T = call_tmp3;
#line 205 "String.chpl"
    }
#line 205 "String.chpl"
    if (T) /* ZLINE: 205 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 205 "String.chpl"
    {
#line 205 "String.chpl"
      goto _end_reinitString;
#line 205 "String.chpl"
    }
#line 205 "String.chpl"
  }
#line 210 "String.chpl"
  call_tmp4 = (s_len != INT64(0));
#line 210 "String.chpl"
  if (call_tmp4) /* ZLINE: 211 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 210 "String.chpl"
  {
#line 211 "String.chpl"
    if (needToCopy) /* ZLINE: 212 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 211 "String.chpl"
    {
#line 212 "String.chpl"
      chpl_check_nil(this5, INT64(212), INT64(8));
#line 212 "String.chpl"
      coerce_tmp2 = (this5)->owned;
#line 212 "String.chpl"
      call_tmp5 = (! coerce_tmp2);
#line 212 "String.chpl"
      if (call_tmp5) /* ZLINE: 212 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 212 "String.chpl"
      {
#line 212 "String.chpl"
        T2 = UINT8(true);
#line 212 "String.chpl"
      } else /* ZLINE: 212 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 212 "String.chpl"
      {
#line 212 "String.chpl"
        call_tmp6 = (s_len + INT64(1));
#line 212 "String.chpl"
        chpl_check_nil(this5, INT64(212), INT64(8));
#line 212 "String.chpl"
        coerce_tmp3 = (this5)->_size;
#line 212 "String.chpl"
        call_tmp7 = (call_tmp6 > coerce_tmp3);
#line 212 "String.chpl"
        T2 = call_tmp7;
#line 212 "String.chpl"
      }
#line 212 "String.chpl"
      if (T2) /* ZLINE: 215 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 212 "String.chpl"
      {
#line 215 "String.chpl"
        chpl_check_nil(this5, INT64(215), INT64(8));
#line 215 "String.chpl"
        coerce_tmp4 = (this5)->owned;
#line 215 "String.chpl"
        if (coerce_tmp4) /* ZLINE: 215 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 215 "String.chpl"
        {
#line 215 "String.chpl"
          chpl_check_nil(this5, INT64(215), INT64(8));
#line 215 "String.chpl"
          coerce_tmp5 = (this5)->len;
#line 215 "String.chpl"
          call_tmp8 = (coerce_tmp5 == INT64(0));
#line 215 "String.chpl"
          call_tmp9 = (! call_tmp8);
#line 215 "String.chpl"
          T3 = call_tmp9;
#line 215 "String.chpl"
        } else /* ZLINE: 215 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 215 "String.chpl"
        {
#line 215 "String.chpl"
          T3 = UINT8(false);
#line 215 "String.chpl"
        }
#line 215 "String.chpl"
        if (T3) /* ZLINE: 215 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 215 "String.chpl"
        {
#line 216 "String.chpl"
          chpl_check_nil(this5, INT64(216), INT64(8));
#line 216 "String.chpl"
          coerce_tmp6 = (this5)->buff;
#line 216 "String.chpl"
          call_tmp10 = ((c_void_ptr)(coerce_tmp6));
#line 216 "String.chpl"
          chpl_here_free(call_tmp10, _ln, _fn);
#line 216 "String.chpl"
        }
#line 218 "String.chpl"
        call_tmp11 = (s_len + INT64(1));
#line 218 "String.chpl"
        call_tmp12 = chpl_here_good_alloc_size(call_tmp11, _ln, _fn);
#line 219 "String.chpl"
        chpl_check_nil(this5, INT64(219), INT64(8));
#line 219 "String.chpl"
        call_tmp13 = &((this5)->buff);
#line 219 "String.chpl"
        cast_tmp = chpl_here_alloc(call_tmp12, local_CHPL_RT_MD_STR_COPY_DATA, _ln, _fn);
#line 219 "String.chpl"
        call_tmp14 = ((c_ptr_uint8_t)(cast_tmp));
#line 219 "String.chpl"
        *(call_tmp13) = call_tmp14;
#line 221 "String.chpl"
        chpl_check_nil(this5, INT64(221), INT64(8));
#line 221 "String.chpl"
        coerce_tmp7 = (this5)->buff;
#line 221 "String.chpl"
        call_tmp15 = (coerce_tmp7 + s_len);
#line 221 "String.chpl"
        call_tmp16 = ((uint8_t)(INT64(0)));
#line 221 "String.chpl"
        *(call_tmp15) = call_tmp16;
#line 222 "String.chpl"
        chpl_check_nil(this5, INT64(222), INT64(8));
#line 222 "String.chpl"
        call_tmp17 = &((this5)->_size);
#line 222 "String.chpl"
        *(call_tmp17) = call_tmp12;
#line 224 "String.chpl"
        chpl_check_nil(this5, INT64(224), INT64(8));
#line 224 "String.chpl"
        call_tmp18 = &((this5)->owned);
#line 224 "String.chpl"
        *(call_tmp18) = UINT8(true);
#line 224 "String.chpl"
      }
#line 226 "String.chpl"
      call_tmp19 = (s_len < INT64(0));
#line 226 "String.chpl"
      if (call_tmp19) /* ZLINE: 226 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 226 "String.chpl"
      {
#line 226 "String.chpl"
        halt(&local__str_literal_2592, _ln, _fn);
#line 226 "String.chpl"
      }
#line 226 "String.chpl"
      call_tmp20 = ((uint64_t)(s_len));
#line 226 "String.chpl"
      chpl_check_nil(this5, INT64(226), INT64(8));
#line 226 "String.chpl"
      coerce_tmp8 = (this5)->buff;
#line 226 "String.chpl"
      memmove(coerce_tmp8, buf, call_tmp20);
#line 226 "String.chpl"
    } else /* ZLINE: 228 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 226 "String.chpl"
    {
#line 228 "String.chpl"
      chpl_check_nil(this5, INT64(228), INT64(8));
#line 228 "String.chpl"
      coerce_tmp9 = (this5)->owned;
#line 228 "String.chpl"
      if (coerce_tmp9) /* ZLINE: 228 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 228 "String.chpl"
      {
#line 228 "String.chpl"
        chpl_check_nil(this5, INT64(228), INT64(8));
#line 228 "String.chpl"
        coerce_tmp10 = (this5)->len;
#line 228 "String.chpl"
        call_tmp21 = (coerce_tmp10 == INT64(0));
#line 228 "String.chpl"
        call_tmp22 = (! call_tmp21);
#line 228 "String.chpl"
        T4 = call_tmp22;
#line 228 "String.chpl"
      } else /* ZLINE: 228 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 228 "String.chpl"
      {
#line 228 "String.chpl"
        T4 = UINT8(false);
#line 228 "String.chpl"
      }
#line 228 "String.chpl"
      if (T4) /* ZLINE: 228 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 228 "String.chpl"
      {
#line 229 "String.chpl"
        chpl_check_nil(this5, INT64(229), INT64(8));
#line 229 "String.chpl"
        coerce_tmp11 = (this5)->buff;
#line 229 "String.chpl"
        call_tmp23 = ((c_void_ptr)(coerce_tmp11));
#line 229 "String.chpl"
        chpl_here_free(call_tmp23, _ln, _fn);
#line 229 "String.chpl"
      }
#line 230 "String.chpl"
      chpl_check_nil(this5, INT64(230), INT64(8));
#line 230 "String.chpl"
      call_tmp24 = &((this5)->buff);
#line 230 "String.chpl"
      *(call_tmp24) = buf;
#line 231 "String.chpl"
      chpl_check_nil(this5, INT64(231), INT64(8));
#line 231 "String.chpl"
      call_tmp25 = &((this5)->_size);
#line 231 "String.chpl"
      *(call_tmp25) = size2;
#line 231 "String.chpl"
    }
#line 231 "String.chpl"
  } else /* ZLINE: 235 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 231 "String.chpl"
  {
#line 235 "String.chpl"
    chpl_check_nil(this5, INT64(235), INT64(8));
#line 235 "String.chpl"
    coerce_tmp12 = (this5)->owned;
#line 235 "String.chpl"
    if (coerce_tmp12) /* ZLINE: 235 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 235 "String.chpl"
    {
#line 235 "String.chpl"
      chpl_check_nil(this5, INT64(235), INT64(8));
#line 235 "String.chpl"
      coerce_tmp13 = (this5)->len;
#line 235 "String.chpl"
      call_tmp26 = (coerce_tmp13 == INT64(0));
#line 235 "String.chpl"
      call_tmp27 = (! call_tmp26);
#line 235 "String.chpl"
      T5 = call_tmp27;
#line 235 "String.chpl"
    } else /* ZLINE: 235 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 235 "String.chpl"
    {
#line 235 "String.chpl"
      T5 = UINT8(false);
#line 235 "String.chpl"
    }
#line 235 "String.chpl"
    if (T5) /* ZLINE: 235 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 235 "String.chpl"
    {
#line 235 "String.chpl"
      chpl_check_nil(this5, INT64(235), INT64(8));
#line 235 "String.chpl"
      coerce_tmp14 = (this5)->buff;
#line 235 "String.chpl"
      call_tmp28 = ((c_void_ptr)(coerce_tmp14));
#line 235 "String.chpl"
      chpl_here_free(call_tmp28, _ln, _fn);
#line 235 "String.chpl"
    }
#line 236 "String.chpl"
    chpl_check_nil(this5, INT64(236), INT64(8));
#line 236 "String.chpl"
    call_tmp29 = &((this5)->buff);
#line 236 "String.chpl"
    *(call_tmp29) = local_c_nil;
#line 237 "String.chpl"
    chpl_check_nil(this5, INT64(237), INT64(8));
#line 237 "String.chpl"
    call_tmp30 = &((this5)->_size);
#line 237 "String.chpl"
    *(call_tmp30) = INT64(0);
#line 237 "String.chpl"
  }
#line 240 "String.chpl"
  chpl_check_nil(this5, INT64(240), INT64(8));
#line 240 "String.chpl"
  call_tmp31 = &((this5)->len);
#line 240 "String.chpl"
  *(call_tmp31) = s_len;
#line 240 "String.chpl"
  _end_reinitString:;
#line 202 "String.chpl"
  return;
#line 202 "String.chpl"
}

#line 202 "String.chpl"
/* String.chpl:1153 */
#line 202 "String.chpl"
static string chpl__autoCopy8(string* const s, int64_t _ln, int32_t _fn) {
#line 202 "String.chpl"
  string local__str_literal_2592;
#line 202 "String.chpl"
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
#line 202 "String.chpl"
  string ret;
#line 202 "String.chpl"
  string this5;
#line 202 "String.chpl"
  c_ptr_uint8_t call_tmp = NULL;
#line 202 "String.chpl"
  int32_t default_arglocale_id;
#line 202 "String.chpl"
  string wrap_call_tmp;
#line 202 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 202 "String.chpl"
  int64_t coerce_tmp;
#line 202 "String.chpl"
  chpl_bool call_tmp2;
#line 202 "String.chpl"
  chpl_bool coerce_tmp2;
#line 202 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp3 = NULL;
#line 202 "String.chpl"
  int64_t coerce_tmp3;
#line 202 "String.chpl"
  c_void_ptr cast_tmp;
#line 202 "String.chpl"
  c_ptr_uint8_t call_tmp4 = NULL;
#line 202 "String.chpl"
  int64_t coerce_tmp4;
#line 202 "String.chpl"
  chpl_bool call_tmp5;
#line 202 "String.chpl"
  uint64_t call_tmp6;
#line 202 "String.chpl"
  c_ptr_uint8_t coerce_tmp5 = NULL;
#line 202 "String.chpl"
  c_ptr_uint8_t coerce_tmp6 = NULL;
#line 202 "String.chpl"
  c_ptr_uint8_t coerce_tmp7 = NULL;
#line 202 "String.chpl"
  int64_t coerce_tmp8;
#line 202 "String.chpl"
  _ref_uint8_t call_tmp7 = NULL;
#line 202 "String.chpl"
  uint8_t call_tmp8;
#line 202 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp9 = NULL;
#line 202 "String.chpl"
  c_ptr_uint8_t coerce_tmp9 = NULL;
#line 202 "String.chpl"
  _ref_chpl_bool call_tmp10 = NULL;
#line 202 "String.chpl"
  chpl_bool coerce_tmp10;
#line 202 "String.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 202 "String.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 202 "String.chpl"
  int64_t call_tmp13;
#line 1163 "String.chpl"
  local__str_literal_2592 = _str_literal_2592;
#line 1162 "String.chpl"
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
#line 1156 "String.chpl"
  (&this5)->len = INT64(0);
#line 1156 "String.chpl"
  (&this5)->_size = INT64(0);
#line 1156 "String.chpl"
  (&this5)->buff = nil;
#line 1156 "String.chpl"
  (&this5)->owned = UINT8(false);
#line 1156 "String.chpl"
  (&this5)->locale_id = INT32(0);
#line 1156 "String.chpl"
  (&this5)->len = INT64(0);
#line 1156 "String.chpl"
  (&this5)->_size = INT64(0);
#line 1156 "String.chpl"
  call_tmp = ((c_ptr_uint8_t)(nil));
#line 1156 "String.chpl"
  (&this5)->buff = call_tmp;
#line 1156 "String.chpl"
  (&this5)->owned = UINT8(true);
#line 1156 "String.chpl"
  default_arglocale_id = chpl_nodeID;
#line 1156 "String.chpl"
  (&this5)->locale_id = default_arglocale_id;
#line 1156 "String.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 1156 "String.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this5, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1156 "String.chpl"
  ret = wrap_call_tmp;
#line 1157 "String.chpl"
  coerce_tmp = (s)->len;
#line 1158 "String.chpl"
  call_tmp2 = (coerce_tmp != INT64(0));
#line 1158 "String.chpl"
  if (call_tmp2) /* ZLINE: 1159 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1158 "String.chpl"
  {
#line 1160 "String.chpl"
    coerce_tmp2 = (s)->owned;
#line 1160 "String.chpl"
    if (coerce_tmp2) /* ZLINE: 1161 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1160 "String.chpl"
    {
#line 1161 "String.chpl"
      call_tmp3 = &((&ret)->buff);
#line 1161 "String.chpl"
      coerce_tmp3 = (s)->_size;
#line 1161 "String.chpl"
      cast_tmp = chpl_here_alloc(coerce_tmp3, local_CHPL_RT_MD_STR_COPY_DATA, _ln, _fn);
#line 1161 "String.chpl"
      call_tmp4 = ((c_ptr_uint8_t)(cast_tmp));
#line 1161 "String.chpl"
      *(call_tmp3) = call_tmp4;
#line 1163 "String.chpl"
      coerce_tmp4 = (s)->len;
#line 1163 "String.chpl"
      call_tmp5 = (coerce_tmp4 < INT64(0));
#line 1163 "String.chpl"
      if (call_tmp5) /* ZLINE: 1163 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1163 "String.chpl"
      {
#line 1163 "String.chpl"
        halt(&local__str_literal_2592, _ln, _fn);
#line 1163 "String.chpl"
      }
#line 1163 "String.chpl"
      call_tmp6 = ((uint64_t)(coerce_tmp4));
#line 1163 "String.chpl"
      coerce_tmp5 = (&ret)->buff;
#line 1163 "String.chpl"
      coerce_tmp6 = (s)->buff;
#line 1163 "String.chpl"
      memcpy(coerce_tmp5, coerce_tmp6, call_tmp6);
#line 1164 "String.chpl"
      coerce_tmp7 = (&ret)->buff;
#line 1164 "String.chpl"
      coerce_tmp8 = (s)->len;
#line 1164 "String.chpl"
      call_tmp7 = (coerce_tmp7 + coerce_tmp8);
#line 1164 "String.chpl"
      call_tmp8 = ((uint8_t)(INT64(0)));
#line 1164 "String.chpl"
      *(call_tmp7) = call_tmp8;
#line 1164 "String.chpl"
    } else /* ZLINE: 1166 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1164 "String.chpl"
    {
#line 1166 "String.chpl"
      call_tmp9 = &((&ret)->buff);
#line 1166 "String.chpl"
      coerce_tmp9 = (s)->buff;
#line 1166 "String.chpl"
      *(call_tmp9) = coerce_tmp9;
#line 1166 "String.chpl"
    }
#line 1168 "String.chpl"
    call_tmp10 = &((&ret)->owned);
#line 1168 "String.chpl"
    coerce_tmp10 = (s)->owned;
#line 1168 "String.chpl"
    *(call_tmp10) = coerce_tmp10;
#line 1173 "String.chpl"
    call_tmp11 = &((&ret)->len);
#line 1173 "String.chpl"
    *(call_tmp11) = coerce_tmp;
#line 1174 "String.chpl"
    call_tmp12 = &((&ret)->_size);
#line 1174 "String.chpl"
    call_tmp13 = (coerce_tmp + INT64(1));
#line 1174 "String.chpl"
    *(call_tmp12) = call_tmp13;
#line 1174 "String.chpl"
  }
#line 1153 "String.chpl"
  return ret;
#line 1153 "String.chpl"
}

#line 1153 "String.chpl"
/* String.chpl:1193 */
#line 1153 "String.chpl"
static string chpl__initCopy3(string* const s, int64_t _ln, int32_t _fn) {
#line 1153 "String.chpl"
  string local__str_literal_2592;
#line 1153 "String.chpl"
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
#line 1153 "String.chpl"
  string ret;
#line 1153 "String.chpl"
  string this5;
#line 1153 "String.chpl"
  c_ptr_uint8_t call_tmp = NULL;
#line 1153 "String.chpl"
  int32_t default_arglocale_id;
#line 1153 "String.chpl"
  string wrap_call_tmp;
#line 1153 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 1153 "String.chpl"
  int64_t coerce_tmp;
#line 1153 "String.chpl"
  chpl_bool call_tmp2;
#line 1153 "String.chpl"
  chpl_bool coerce_tmp2;
#line 1153 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp3 = NULL;
#line 1153 "String.chpl"
  int64_t coerce_tmp3;
#line 1153 "String.chpl"
  c_void_ptr cast_tmp;
#line 1153 "String.chpl"
  c_ptr_uint8_t call_tmp4 = NULL;
#line 1153 "String.chpl"
  int64_t coerce_tmp4;
#line 1153 "String.chpl"
  chpl_bool call_tmp5;
#line 1153 "String.chpl"
  uint64_t call_tmp6;
#line 1153 "String.chpl"
  c_ptr_uint8_t coerce_tmp5 = NULL;
#line 1153 "String.chpl"
  c_ptr_uint8_t coerce_tmp6 = NULL;
#line 1153 "String.chpl"
  c_ptr_uint8_t coerce_tmp7 = NULL;
#line 1153 "String.chpl"
  int64_t coerce_tmp8;
#line 1153 "String.chpl"
  _ref_uint8_t call_tmp7 = NULL;
#line 1153 "String.chpl"
  uint8_t call_tmp8;
#line 1153 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp9 = NULL;
#line 1153 "String.chpl"
  c_ptr_uint8_t coerce_tmp9 = NULL;
#line 1153 "String.chpl"
  _ref_chpl_bool call_tmp10 = NULL;
#line 1153 "String.chpl"
  chpl_bool coerce_tmp10;
#line 1153 "String.chpl"
  _ref_int64_t call_tmp11 = NULL;
#line 1153 "String.chpl"
  _ref_int64_t call_tmp12 = NULL;
#line 1153 "String.chpl"
  int64_t call_tmp13;
#line 1203 "String.chpl"
  local__str_literal_2592 = _str_literal_2592;
#line 1202 "String.chpl"
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
#line 1196 "String.chpl"
  (&this5)->len = INT64(0);
#line 1196 "String.chpl"
  (&this5)->_size = INT64(0);
#line 1196 "String.chpl"
  (&this5)->buff = nil;
#line 1196 "String.chpl"
  (&this5)->owned = UINT8(false);
#line 1196 "String.chpl"
  (&this5)->locale_id = INT32(0);
#line 1196 "String.chpl"
  (&this5)->len = INT64(0);
#line 1196 "String.chpl"
  (&this5)->_size = INT64(0);
#line 1196 "String.chpl"
  call_tmp = ((c_ptr_uint8_t)(nil));
#line 1196 "String.chpl"
  (&this5)->buff = call_tmp;
#line 1196 "String.chpl"
  (&this5)->owned = UINT8(true);
#line 1196 "String.chpl"
  default_arglocale_id = chpl_nodeID;
#line 1196 "String.chpl"
  (&this5)->locale_id = default_arglocale_id;
#line 1196 "String.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 1196 "String.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this5, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1196 "String.chpl"
  ret = wrap_call_tmp;
#line 1197 "String.chpl"
  coerce_tmp = (s)->len;
#line 1198 "String.chpl"
  call_tmp2 = (coerce_tmp != INT64(0));
#line 1198 "String.chpl"
  if (call_tmp2) /* ZLINE: 1199 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1198 "String.chpl"
  {
#line 1200 "String.chpl"
    coerce_tmp2 = (s)->owned;
#line 1200 "String.chpl"
    if (coerce_tmp2) /* ZLINE: 1201 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1200 "String.chpl"
    {
#line 1201 "String.chpl"
      call_tmp3 = &((&ret)->buff);
#line 1201 "String.chpl"
      coerce_tmp3 = (s)->_size;
#line 1201 "String.chpl"
      cast_tmp = chpl_here_alloc(coerce_tmp3, local_CHPL_RT_MD_STR_COPY_DATA, _ln, _fn);
#line 1201 "String.chpl"
      call_tmp4 = ((c_ptr_uint8_t)(cast_tmp));
#line 1201 "String.chpl"
      *(call_tmp3) = call_tmp4;
#line 1203 "String.chpl"
      coerce_tmp4 = (s)->len;
#line 1203 "String.chpl"
      call_tmp5 = (coerce_tmp4 < INT64(0));
#line 1203 "String.chpl"
      if (call_tmp5) /* ZLINE: 1203 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1203 "String.chpl"
      {
#line 1203 "String.chpl"
        halt(&local__str_literal_2592, _ln, _fn);
#line 1203 "String.chpl"
      }
#line 1203 "String.chpl"
      call_tmp6 = ((uint64_t)(coerce_tmp4));
#line 1203 "String.chpl"
      coerce_tmp5 = (&ret)->buff;
#line 1203 "String.chpl"
      coerce_tmp6 = (s)->buff;
#line 1203 "String.chpl"
      memcpy(coerce_tmp5, coerce_tmp6, call_tmp6);
#line 1204 "String.chpl"
      coerce_tmp7 = (&ret)->buff;
#line 1204 "String.chpl"
      coerce_tmp8 = (s)->len;
#line 1204 "String.chpl"
      call_tmp7 = (coerce_tmp7 + coerce_tmp8);
#line 1204 "String.chpl"
      call_tmp8 = ((uint8_t)(INT64(0)));
#line 1204 "String.chpl"
      *(call_tmp7) = call_tmp8;
#line 1204 "String.chpl"
    } else /* ZLINE: 1206 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1204 "String.chpl"
    {
#line 1206 "String.chpl"
      call_tmp9 = &((&ret)->buff);
#line 1206 "String.chpl"
      coerce_tmp9 = (s)->buff;
#line 1206 "String.chpl"
      *(call_tmp9) = coerce_tmp9;
#line 1206 "String.chpl"
    }
#line 1208 "String.chpl"
    call_tmp10 = &((&ret)->owned);
#line 1208 "String.chpl"
    coerce_tmp10 = (s)->owned;
#line 1208 "String.chpl"
    *(call_tmp10) = coerce_tmp10;
#line 1213 "String.chpl"
    call_tmp11 = &((&ret)->len);
#line 1213 "String.chpl"
    *(call_tmp11) = coerce_tmp;
#line 1214 "String.chpl"
    call_tmp12 = &((&ret)->_size);
#line 1214 "String.chpl"
    call_tmp13 = (coerce_tmp + INT64(1));
#line 1214 "String.chpl"
    *(call_tmp12) = call_tmp13;
#line 1214 "String.chpl"
  }
#line 1193 "String.chpl"
  return ret;
#line 1193 "String.chpl"
}

#line 1193 "String.chpl"
/* String.chpl:1225 */
#line 1193 "String.chpl"
static void chpl___ASSIGN_2(_ref_string lhs, string* const rhs, int64_t _ln, int32_t _fn) {
#line 1193 "String.chpl"
  c_ptr_uint8_t coerce_tmp = NULL;
#line 1193 "String.chpl"
  int64_t coerce_tmp2;
#line 1193 "String.chpl"
  int64_t coerce_tmp3;
#line 1239 "String.chpl"
  coerce_tmp = (rhs)->buff;
#line 1239 "String.chpl"
  coerce_tmp2 = (rhs)->len;
#line 1239 "String.chpl"
  coerce_tmp3 = (rhs)->_size;
#line 1239 "String.chpl"
  chpl_check_nil(lhs, INT64(1239), INT64(8));
#line 1239 "String.chpl"
  reinitString(lhs, coerce_tmp, coerce_tmp2, coerce_tmp3, UINT8(true), _ln, _fn);
#line 1225 "String.chpl"
  return;
#line 1225 "String.chpl"
}

#line 1225 "String.chpl"
/* String.chpl:1270 */
#line 1225 "String.chpl"
static void chpl___PLUS_(string* const s0, string* const s1, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 1225 "String.chpl"
  string local__str_literal_2592;
#line 1225 "String.chpl"
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
#line 1225 "String.chpl"
  string ret;
#line 1225 "String.chpl"
  int64_t coerce_tmp;
#line 1225 "String.chpl"
  chpl_bool call_tmp;
#line 1225 "String.chpl"
  int64_t coerce_tmp2;
#line 1225 "String.chpl"
  chpl_bool call_tmp2;
#line 1225 "String.chpl"
  string ret2;
#line 1225 "String.chpl"
  string this5;
#line 1225 "String.chpl"
  c_ptr_uint8_t call_tmp3 = NULL;
#line 1225 "String.chpl"
  int32_t default_arglocale_id;
#line 1225 "String.chpl"
  string wrap_call_tmp;
#line 1225 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 1225 "String.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 1225 "String.chpl"
  int64_t call_tmp5;
#line 1225 "String.chpl"
  int64_t coerce_tmp3;
#line 1225 "String.chpl"
  int64_t call_tmp6;
#line 1225 "String.chpl"
  int64_t call_tmp7;
#line 1225 "String.chpl"
  _ref_int64_t call_tmp8 = NULL;
#line 1225 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp9 = NULL;
#line 1225 "String.chpl"
  c_void_ptr cast_tmp;
#line 1225 "String.chpl"
  c_ptr_uint8_t call_tmp10 = NULL;
#line 1225 "String.chpl"
  _ref_chpl_bool call_tmp11 = NULL;
#line 1225 "String.chpl"
  int32_t coerce_tmp4;
#line 1225 "String.chpl"
  chpl_bool call_tmp12;
#line 1225 "String.chpl"
  chpl_bool call_tmp13;
#line 1225 "String.chpl"
  uint64_t call_tmp14;
#line 1225 "String.chpl"
  c_ptr_uint8_t coerce_tmp5 = NULL;
#line 1225 "String.chpl"
  int32_t coerce_tmp6;
#line 1225 "String.chpl"
  int64_t call_tmp15;
#line 1225 "String.chpl"
  c_ptr_uint8_t coerce_tmp7 = NULL;
#line 1225 "String.chpl"
  chpl_bool call_tmp16;
#line 1225 "String.chpl"
  uint64_t call_tmp17;
#line 1225 "String.chpl"
  c_ptr_uint8_t coerce_tmp8 = NULL;
#line 1225 "String.chpl"
  c_ptr_uint8_t coerce_tmp9 = NULL;
#line 1225 "String.chpl"
  int32_t coerce_tmp10;
#line 1225 "String.chpl"
  chpl_bool call_tmp18;
#line 1225 "String.chpl"
  c_ptr_uint8_t call_tmp19 = NULL;
#line 1225 "String.chpl"
  c_ptr_uint8_t coerce_tmp11 = NULL;
#line 1225 "String.chpl"
  c_ptr_uint8_t call_tmp20 = NULL;
#line 1225 "String.chpl"
  chpl_bool call_tmp21;
#line 1225 "String.chpl"
  uint64_t call_tmp22;
#line 1225 "String.chpl"
  int32_t coerce_tmp12;
#line 1225 "String.chpl"
  int64_t call_tmp23;
#line 1225 "String.chpl"
  c_ptr_uint8_t coerce_tmp13 = NULL;
#line 1225 "String.chpl"
  c_ptr_uint8_t coerce_tmp14 = NULL;
#line 1225 "String.chpl"
  c_ptr_uint8_t call_tmp24 = NULL;
#line 1225 "String.chpl"
  chpl_bool call_tmp25;
#line 1225 "String.chpl"
  uint64_t call_tmp26;
#line 1225 "String.chpl"
  c_ptr_uint8_t coerce_tmp15 = NULL;
#line 1225 "String.chpl"
  c_ptr_uint8_t coerce_tmp16 = NULL;
#line 1225 "String.chpl"
  int64_t coerce_tmp17;
#line 1225 "String.chpl"
  _ref_uint8_t call_tmp27 = NULL;
#line 1225 "String.chpl"
  uint8_t call_tmp28;
#line 1288 "String.chpl"
  local__str_literal_2592 = _str_literal_2592;
#line 1282 "String.chpl"
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
#line 1272 "String.chpl"
  coerce_tmp = (s0)->len;
#line 1273 "String.chpl"
  call_tmp = (coerce_tmp == INT64(0));
#line 1273 "String.chpl"
  if (call_tmp) /* ZLINE: 1273 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1273 "String.chpl"
  {
#line 1273 "String.chpl"
    ret = chpl__autoCopy8(s1, _ln, _fn);
#line 1273 "String.chpl"
    goto _end__PLUS_;
#line 1273 "String.chpl"
  }
#line 1274 "String.chpl"
  coerce_tmp2 = (s1)->len;
#line 1275 "String.chpl"
  call_tmp2 = (coerce_tmp2 == INT64(0));
#line 1275 "String.chpl"
  if (call_tmp2) /* ZLINE: 1275 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1275 "String.chpl"
  {
#line 1275 "String.chpl"
    ret = chpl__autoCopy8(s0, _ln, _fn);
#line 1275 "String.chpl"
    goto _end__PLUS_;
#line 1275 "String.chpl"
  }
#line 1277 "String.chpl"
  (&this5)->len = INT64(0);
#line 1277 "String.chpl"
  (&this5)->_size = INT64(0);
#line 1277 "String.chpl"
  (&this5)->buff = nil;
#line 1277 "String.chpl"
  (&this5)->owned = UINT8(false);
#line 1277 "String.chpl"
  (&this5)->locale_id = INT32(0);
#line 1277 "String.chpl"
  (&this5)->len = INT64(0);
#line 1277 "String.chpl"
  (&this5)->_size = INT64(0);
#line 1277 "String.chpl"
  call_tmp3 = ((c_ptr_uint8_t)(nil));
#line 1277 "String.chpl"
  (&this5)->buff = call_tmp3;
#line 1277 "String.chpl"
  (&this5)->owned = UINT8(true);
#line 1277 "String.chpl"
  default_arglocale_id = chpl_nodeID;
#line 1277 "String.chpl"
  (&this5)->locale_id = default_arglocale_id;
#line 1277 "String.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 1277 "String.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp3, UINT8(true), default_arglocale_id, &this5, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1277 "String.chpl"
  ret2 = wrap_call_tmp;
#line 1278 "String.chpl"
  call_tmp4 = &((&ret2)->len);
#line 1278 "String.chpl"
  call_tmp5 = (coerce_tmp + coerce_tmp2);
#line 1278 "String.chpl"
  *(call_tmp4) = call_tmp5;
#line 1279 "String.chpl"
  coerce_tmp3 = (&ret2)->len;
#line 1279 "String.chpl"
  call_tmp6 = (coerce_tmp3 + INT64(1));
#line 1279 "String.chpl"
  call_tmp7 = chpl_here_good_alloc_size(call_tmp6, _ln, _fn);
#line 1280 "String.chpl"
  call_tmp8 = &((&ret2)->_size);
#line 1280 "String.chpl"
  *(call_tmp8) = call_tmp7;
#line 1281 "String.chpl"
  call_tmp9 = &((&ret2)->buff);
#line 1281 "String.chpl"
  cast_tmp = chpl_here_alloc(call_tmp7, local_CHPL_RT_MD_STR_COPY_DATA, _ln, _fn);
#line 1281 "String.chpl"
  call_tmp10 = ((c_ptr_uint8_t)(cast_tmp));
#line 1281 "String.chpl"
  *(call_tmp9) = call_tmp10;
#line 1283 "String.chpl"
  call_tmp11 = &((&ret2)->owned);
#line 1283 "String.chpl"
  *(call_tmp11) = UINT8(true);
#line 1285 "String.chpl"
  coerce_tmp4 = (s0)->locale_id;
#line 1285 "String.chpl"
  call_tmp12 = (coerce_tmp4 != chpl_nodeID);
#line 1286 "String.chpl"
  if (call_tmp12) /* ZLINE: 1287 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1286 "String.chpl"
  {
#line 1288 "String.chpl"
    call_tmp13 = (coerce_tmp < INT64(0));
#line 1288 "String.chpl"
    if (call_tmp13) /* ZLINE: 1288 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1288 "String.chpl"
    {
#line 1288 "String.chpl"
      halt(&local__str_literal_2592, _ln, _fn);
#line 1288 "String.chpl"
    }
#line 1288 "String.chpl"
    call_tmp14 = ((uint64_t)(coerce_tmp));
#line 1287 "String.chpl"
    coerce_tmp5 = (&ret2)->buff;
#line 1287 "String.chpl"
    coerce_tmp6 = (s0)->locale_id;
#line 1287 "String.chpl"
    call_tmp15 = ((int64_t)(coerce_tmp6));
#line 1288 "String.chpl"
    coerce_tmp7 = (s0)->buff;
#line 1287 "String.chpl"
    chpl_gen_comm_get(((void*)(coerce_tmp5)), call_tmp15, coerce_tmp7, call_tmp14, -1, _ln, _fn);
#line 1287 "String.chpl"
  } else /* ZLINE: 1290 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1287 "String.chpl"
  {
#line 1290 "String.chpl"
    call_tmp16 = (coerce_tmp < INT64(0));
#line 1290 "String.chpl"
    if (call_tmp16) /* ZLINE: 1290 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1290 "String.chpl"
    {
#line 1290 "String.chpl"
      halt(&local__str_literal_2592, _ln, _fn);
#line 1290 "String.chpl"
    }
#line 1290 "String.chpl"
    call_tmp17 = ((uint64_t)(coerce_tmp));
#line 1290 "String.chpl"
    coerce_tmp8 = (&ret2)->buff;
#line 1290 "String.chpl"
    coerce_tmp9 = (s0)->buff;
#line 1290 "String.chpl"
    memcpy(coerce_tmp8, coerce_tmp9, call_tmp17);
#line 1290 "String.chpl"
  }
#line 1293 "String.chpl"
  coerce_tmp10 = (s1)->locale_id;
#line 1293 "String.chpl"
  call_tmp18 = (coerce_tmp10 != chpl_nodeID);
#line 1294 "String.chpl"
  if (call_tmp18) /* ZLINE: 1295 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1294 "String.chpl"
  {
#line 1295 "String.chpl"
    coerce_tmp11 = (&ret2)->buff;
#line 1295 "String.chpl"
    call_tmp20 = (coerce_tmp11 + coerce_tmp);
#line 1295 "String.chpl"
    call_tmp19 = call_tmp20;
#line 1296 "String.chpl"
    call_tmp21 = (coerce_tmp2 < INT64(0));
#line 1296 "String.chpl"
    if (call_tmp21) /* ZLINE: 1296 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1296 "String.chpl"
    {
#line 1296 "String.chpl"
      halt(&local__str_literal_2592, _ln, _fn);
#line 1296 "String.chpl"
    }
#line 1296 "String.chpl"
    call_tmp22 = ((uint64_t)(coerce_tmp2));
#line 1295 "String.chpl"
    coerce_tmp12 = (s1)->locale_id;
#line 1295 "String.chpl"
    call_tmp23 = ((int64_t)(coerce_tmp12));
#line 1296 "String.chpl"
    coerce_tmp13 = (s1)->buff;
#line 1295 "String.chpl"
    chpl_gen_comm_get(((void*)(call_tmp19)), call_tmp23, coerce_tmp13, call_tmp22, -1, _ln, _fn);
#line 1295 "String.chpl"
  } else /* ZLINE: 1298 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1295 "String.chpl"
  {
#line 1298 "String.chpl"
    coerce_tmp14 = (&ret2)->buff;
#line 1298 "String.chpl"
    call_tmp24 = (coerce_tmp14 + coerce_tmp);
#line 1298 "String.chpl"
    call_tmp25 = (coerce_tmp2 < INT64(0));
#line 1298 "String.chpl"
    if (call_tmp25) /* ZLINE: 1298 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1298 "String.chpl"
    {
#line 1298 "String.chpl"
      halt(&local__str_literal_2592, _ln, _fn);
#line 1298 "String.chpl"
    }
#line 1298 "String.chpl"
    call_tmp26 = ((uint64_t)(coerce_tmp2));
#line 1298 "String.chpl"
    coerce_tmp15 = (s1)->buff;
#line 1298 "String.chpl"
    memcpy(call_tmp24, coerce_tmp15, call_tmp26);
#line 1298 "String.chpl"
  }
#line 1300 "String.chpl"
  coerce_tmp16 = (&ret2)->buff;
#line 1300 "String.chpl"
  coerce_tmp17 = (&ret2)->len;
#line 1300 "String.chpl"
  call_tmp27 = (coerce_tmp16 + coerce_tmp17);
#line 1300 "String.chpl"
  call_tmp28 = ((uint8_t)(INT64(0)));
#line 1300 "String.chpl"
  *(call_tmp27) = call_tmp28;
#line 1302 "String.chpl"
  ret = ret2;
#line 1302 "String.chpl"
  _end__PLUS_:;
#line 1270 "String.chpl"
  *(_retArg) = ret;
#line 1270 "String.chpl"
  return;
#line 1270 "String.chpl"
}

#line 1270 "String.chpl"
/* String.chpl:1468 */
#line 1270 "String.chpl"
static void chpl___PLUS__ASSIGN_(_ref_string lhs, _ref_string rhs, int64_t _ln, int32_t _fn) {
#line 1270 "String.chpl"
  string local__str_literal_2592;
#line 1270 "String.chpl"
  int16_t local_CHPL_RT_MD_STR_COPY_DATA;
#line 1270 "String.chpl"
  int32_t local_c_sublocid_any;
#line 1270 "String.chpl"
  int64_t coerce_tmp;
#line 1270 "String.chpl"
  chpl_bool call_tmp;
#line 1270 "String.chpl"
  int32_t coerce_tmp2;
#line 1270 "String.chpl"
  chpl_localeID_t _autoCopy_tmp_;
#line 1270 "String.chpl"
  _ref_chpl_localeID_t ret_to_arg_ref_tmp_ = NULL;
#line 1270 "String.chpl"
  int64_t coerce_tmp3;
#line 1270 "String.chpl"
  int64_t coerce_tmp4;
#line 1270 "String.chpl"
  int64_t call_tmp2;
#line 1270 "String.chpl"
  int64_t coerce_tmp5;
#line 1270 "String.chpl"
  chpl_bool call_tmp3;
#line 1270 "String.chpl"
  int64_t call_tmp4;
#line 1270 "String.chpl"
  int64_t coerce_tmp6;
#line 1270 "String.chpl"
  _real64 call_tmp5;
#line 1270 "String.chpl"
  _real64 call_tmp6;
#line 1270 "String.chpl"
  _real64 call_tmp7;
#line 1270 "String.chpl"
  _real64 T;
#line 1270 "String.chpl"
  chpl_bool call_tmp8;
#line 1270 "String.chpl"
  int64_t call_tmp9;
#line 1270 "String.chpl"
  int64_t call_tmp10;
#line 1270 "String.chpl"
  chpl_bool coerce_tmp7;
#line 1270 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp11 = NULL;
#line 1270 "String.chpl"
  c_void_ptr call_tmp12;
#line 1270 "String.chpl"
  c_ptr_uint8_t coerce_tmp8 = NULL;
#line 1270 "String.chpl"
  c_void_ptr call_tmp13;
#line 1270 "String.chpl"
  c_ptr_uint8_t call_tmp14 = NULL;
#line 1270 "String.chpl"
  c_void_ptr cast_tmp;
#line 1270 "String.chpl"
  c_ptr_uint8_t call_tmp15 = NULL;
#line 1270 "String.chpl"
  int64_t coerce_tmp9;
#line 1270 "String.chpl"
  chpl_bool call_tmp16;
#line 1270 "String.chpl"
  uint64_t call_tmp17;
#line 1270 "String.chpl"
  c_ptr_uint8_t coerce_tmp10 = NULL;
#line 1270 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp18 = NULL;
#line 1270 "String.chpl"
  _ref_chpl_bool call_tmp19 = NULL;
#line 1270 "String.chpl"
  _ref_int64_t call_tmp20 = NULL;
#line 1270 "String.chpl"
  int32_t coerce_tmp11;
#line 1270 "String.chpl"
  chpl_bool call_tmp21;
#line 1270 "String.chpl"
  c_ptr_uint8_t call_tmp22 = NULL;
#line 1270 "String.chpl"
  c_ptr_uint8_t coerce_tmp12 = NULL;
#line 1270 "String.chpl"
  int64_t coerce_tmp13;
#line 1270 "String.chpl"
  c_ptr_uint8_t call_tmp23 = NULL;
#line 1270 "String.chpl"
  chpl_bool call_tmp24;
#line 1270 "String.chpl"
  uint64_t call_tmp25;
#line 1270 "String.chpl"
  int32_t coerce_tmp14;
#line 1270 "String.chpl"
  int64_t call_tmp26;
#line 1270 "String.chpl"
  c_ptr_uint8_t coerce_tmp15 = NULL;
#line 1270 "String.chpl"
  c_ptr_uint8_t coerce_tmp16 = NULL;
#line 1270 "String.chpl"
  int64_t coerce_tmp17;
#line 1270 "String.chpl"
  c_ptr_uint8_t call_tmp27 = NULL;
#line 1270 "String.chpl"
  chpl_bool call_tmp28;
#line 1270 "String.chpl"
  uint64_t call_tmp29;
#line 1270 "String.chpl"
  c_ptr_uint8_t coerce_tmp18 = NULL;
#line 1270 "String.chpl"
  _ref_int64_t call_tmp30 = NULL;
#line 1270 "String.chpl"
  c_ptr_uint8_t coerce_tmp19 = NULL;
#line 1270 "String.chpl"
  _ref_uint8_t call_tmp31 = NULL;
#line 1270 "String.chpl"
  uint8_t call_tmp32;
#line 1486 "String.chpl"
  local__str_literal_2592 = _str_literal_2592;
#line 1482 "String.chpl"
  local_CHPL_RT_MD_STR_COPY_DATA = CHPL_RT_MD_STR_COPY_DATA;
#line 1473 "String.chpl"
  local_c_sublocid_any = c_sublocid_any;
#line 1470 "String.chpl"
  chpl_check_nil(rhs, INT64(1470), INT64(8));
#line 1470 "String.chpl"
  coerce_tmp = (rhs)->len;
#line 1470 "String.chpl"
  call_tmp = (coerce_tmp == INT64(0));
#line 1470 "String.chpl"
  if (call_tmp) /* ZLINE: 1470 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1470 "String.chpl"
  {
#line 1470 "String.chpl"
    goto _end__PLUS__ASSIGN_;
#line 1470 "String.chpl"
  }
#line 1473 "String.chpl"
  chpl_check_nil(lhs, INT64(1473), INT64(8));
#line 1473 "String.chpl"
  coerce_tmp2 = (lhs)->locale_id;
#line 1473 "String.chpl"
  ret_to_arg_ref_tmp_ = &_autoCopy_tmp_;
#line 1473 "String.chpl"
  chpl_buildLocaleID(coerce_tmp2, local_c_sublocid_any, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1474 "String.chpl"
  chpl_check_nil(rhs, INT64(1474), INT64(8));
#line 1474 "String.chpl"
  coerce_tmp3 = (rhs)->len;
#line 1475 "String.chpl"
  chpl_check_nil(lhs, INT64(1475), INT64(8));
#line 1475 "String.chpl"
  coerce_tmp4 = (lhs)->len;
#line 1475 "String.chpl"
  call_tmp2 = (coerce_tmp4 + coerce_tmp3);
#line 1476 "String.chpl"
  chpl_check_nil(lhs, INT64(1476), INT64(8));
#line 1476 "String.chpl"
  coerce_tmp5 = (lhs)->_size;
#line 1476 "String.chpl"
  call_tmp3 = (coerce_tmp5 <= call_tmp2);
#line 1476 "String.chpl"
  if (call_tmp3) /* ZLINE: 1477 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1476 "String.chpl"
  {
#line 1478 "String.chpl"
    call_tmp4 = (call_tmp2 + INT64(1));
#line 1478 "String.chpl"
    chpl_check_nil(lhs, INT64(1478), INT64(8));
#line 1478 "String.chpl"
    coerce_tmp6 = (lhs)->len;
#line 1478 "String.chpl"
    call_tmp5 = ((_real64)(coerce_tmp6));
#line 1478 "String.chpl"
    call_tmp6 = (call_tmp5 * 1.5);
#line 1478 "String.chpl"
    call_tmp7 = ((_real64)(call_tmp4));
#line 1478 "String.chpl"
    call_tmp8 = (call_tmp7 > call_tmp6);
#line 1478 "String.chpl"
    if (call_tmp8) /* ZLINE: 1478 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1478 "String.chpl"
    {
#line 1478 "String.chpl"
      T = call_tmp7;
#line 1478 "String.chpl"
    } else /* ZLINE: 1478 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1478 "String.chpl"
    {
#line 1478 "String.chpl"
      T = call_tmp6;
#line 1478 "String.chpl"
    }
#line 1478 "String.chpl"
    call_tmp9 = ((int64_t)(T));
#line 1477 "String.chpl"
    call_tmp10 = chpl_here_good_alloc_size(call_tmp9, _ln, _fn);
#line 1480 "String.chpl"
    chpl_check_nil(lhs, INT64(1480), INT64(8));
#line 1480 "String.chpl"
    coerce_tmp7 = (lhs)->owned;
#line 1480 "String.chpl"
    if (coerce_tmp7) /* ZLINE: 1481 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1480 "String.chpl"
    {
#line 1481 "String.chpl"
      chpl_check_nil(lhs, INT64(1481), INT64(8));
#line 1481 "String.chpl"
      call_tmp11 = &((lhs)->buff);
#line 1481 "String.chpl"
      chpl_check_nil(lhs, INT64(1481), INT64(8));
#line 1481 "String.chpl"
      coerce_tmp8 = (lhs)->buff;
#line 1481 "String.chpl"
      call_tmp13 = ((c_void_ptr)(coerce_tmp8));
#line 1481 "String.chpl"
      call_tmp12 = chpl_here_realloc(call_tmp13, call_tmp10, local_CHPL_RT_MD_STR_COPY_DATA, _ln, _fn);
#line 1481 "String.chpl"
      call_tmp14 = ((c_ptr_uint8_t)(call_tmp12));
#line 1481 "String.chpl"
      *(call_tmp11) = call_tmp14;
#line 1481 "String.chpl"
    } else /* ZLINE: 1484 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1481 "String.chpl"
    {
#line 1484 "String.chpl"
      cast_tmp = chpl_here_alloc(call_tmp10, local_CHPL_RT_MD_STR_COPY_DATA, _ln, _fn);
#line 1484 "String.chpl"
      call_tmp15 = ((c_ptr_uint8_t)(cast_tmp));
#line 1486 "String.chpl"
      chpl_check_nil(lhs, INT64(1486), INT64(8));
#line 1486 "String.chpl"
      coerce_tmp9 = (lhs)->len;
#line 1486 "String.chpl"
      call_tmp16 = (coerce_tmp9 < INT64(0));
#line 1486 "String.chpl"
      if (call_tmp16) /* ZLINE: 1486 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1486 "String.chpl"
      {
#line 1486 "String.chpl"
        halt(&local__str_literal_2592, _ln, _fn);
#line 1486 "String.chpl"
      }
#line 1486 "String.chpl"
      call_tmp17 = ((uint64_t)(coerce_tmp9));
#line 1486 "String.chpl"
      chpl_check_nil(lhs, INT64(1486), INT64(8));
#line 1486 "String.chpl"
      coerce_tmp10 = (lhs)->buff;
#line 1486 "String.chpl"
      memcpy(call_tmp15, coerce_tmp10, call_tmp17);
#line 1487 "String.chpl"
      chpl_check_nil(lhs, INT64(1487), INT64(8));
#line 1487 "String.chpl"
      call_tmp18 = &((lhs)->buff);
#line 1487 "String.chpl"
      *(call_tmp18) = call_tmp15;
#line 1488 "String.chpl"
      chpl_check_nil(lhs, INT64(1488), INT64(8));
#line 1488 "String.chpl"
      call_tmp19 = &((lhs)->owned);
#line 1488 "String.chpl"
      *(call_tmp19) = UINT8(true);
#line 1488 "String.chpl"
    }
#line 1491 "String.chpl"
    chpl_check_nil(lhs, INT64(1491), INT64(8));
#line 1491 "String.chpl"
    call_tmp20 = &((lhs)->_size);
#line 1491 "String.chpl"
    *(call_tmp20) = call_tmp10;
#line 1491 "String.chpl"
  }
#line 1493 "String.chpl"
  chpl_check_nil(rhs, INT64(1493), INT64(8));
#line 1493 "String.chpl"
  coerce_tmp11 = (rhs)->locale_id;
#line 1493 "String.chpl"
  call_tmp21 = (coerce_tmp11 != chpl_nodeID);
#line 1494 "String.chpl"
  if (call_tmp21) /* ZLINE: 1495 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1494 "String.chpl"
  {
#line 1495 "String.chpl"
    chpl_check_nil(lhs, INT64(1495), INT64(8));
#line 1495 "String.chpl"
    coerce_tmp12 = (lhs)->buff;
#line 1495 "String.chpl"
    chpl_check_nil(lhs, INT64(1495), INT64(8));
#line 1495 "String.chpl"
    coerce_tmp13 = (lhs)->len;
#line 1495 "String.chpl"
    call_tmp23 = (coerce_tmp12 + coerce_tmp13);
#line 1495 "String.chpl"
    call_tmp22 = call_tmp23;
#line 1496 "String.chpl"
    call_tmp24 = (coerce_tmp3 < INT64(0));
#line 1496 "String.chpl"
    if (call_tmp24) /* ZLINE: 1496 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1496 "String.chpl"
    {
#line 1496 "String.chpl"
      halt(&local__str_literal_2592, _ln, _fn);
#line 1496 "String.chpl"
    }
#line 1496 "String.chpl"
    call_tmp25 = ((uint64_t)(coerce_tmp3));
#line 1495 "String.chpl"
    chpl_check_nil(rhs, INT64(1495), INT64(8));
#line 1495 "String.chpl"
    coerce_tmp14 = (rhs)->locale_id;
#line 1495 "String.chpl"
    call_tmp26 = ((int64_t)(coerce_tmp14));
#line 1496 "String.chpl"
    chpl_check_nil(rhs, INT64(1496), INT64(8));
#line 1496 "String.chpl"
    coerce_tmp15 = (rhs)->buff;
#line 1495 "String.chpl"
    chpl_gen_comm_get(((void*)(call_tmp22)), call_tmp26, coerce_tmp15, call_tmp25, -1, _ln, _fn);
#line 1495 "String.chpl"
  } else /* ZLINE: 1498 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1495 "String.chpl"
  {
#line 1498 "String.chpl"
    chpl_check_nil(lhs, INT64(1498), INT64(8));
#line 1498 "String.chpl"
    coerce_tmp16 = (lhs)->buff;
#line 1498 "String.chpl"
    chpl_check_nil(lhs, INT64(1498), INT64(8));
#line 1498 "String.chpl"
    coerce_tmp17 = (lhs)->len;
#line 1498 "String.chpl"
    call_tmp27 = (coerce_tmp16 + coerce_tmp17);
#line 1498 "String.chpl"
    call_tmp28 = (coerce_tmp3 < INT64(0));
#line 1498 "String.chpl"
    if (call_tmp28) /* ZLINE: 1498 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1498 "String.chpl"
    {
#line 1498 "String.chpl"
      halt(&local__str_literal_2592, _ln, _fn);
#line 1498 "String.chpl"
    }
#line 1498 "String.chpl"
    call_tmp29 = ((uint64_t)(coerce_tmp3));
#line 1498 "String.chpl"
    chpl_check_nil(rhs, INT64(1498), INT64(8));
#line 1498 "String.chpl"
    coerce_tmp18 = (rhs)->buff;
#line 1498 "String.chpl"
    memcpy(call_tmp27, coerce_tmp18, call_tmp29);
#line 1498 "String.chpl"
  }
#line 1500 "String.chpl"
  chpl_check_nil(lhs, INT64(1500), INT64(8));
#line 1500 "String.chpl"
  call_tmp30 = &((lhs)->len);
#line 1500 "String.chpl"
  *(call_tmp30) = call_tmp2;
#line 1501 "String.chpl"
  chpl_check_nil(lhs, INT64(1501), INT64(8));
#line 1501 "String.chpl"
  coerce_tmp19 = (lhs)->buff;
#line 1501 "String.chpl"
  call_tmp31 = (coerce_tmp19 + call_tmp2);
#line 1501 "String.chpl"
  call_tmp32 = ((uint8_t)(INT64(0)));
#line 1501 "String.chpl"
  *(call_tmp31) = call_tmp32;
#line 1501 "String.chpl"
  _end__PLUS__ASSIGN_:;
#line 1468 "String.chpl"
  return;
#line 1468 "String.chpl"
}

#line 1468 "String.chpl"
/* String.chpl:1535 */
#line 1468 "String.chpl"
static chpl_bool chpl___EQUALS__(string* const a, string* const b, int64_t _ln, int32_t _fn) {
#line 1468 "String.chpl"
  string local__str_literal_2592;
#line 1468 "String.chpl"
  string localA;
#line 1468 "String.chpl"
  string type_tmp;
#line 1468 "String.chpl"
  string this5;
#line 1468 "String.chpl"
  c_ptr_uint8_t call_tmp = NULL;
#line 1468 "String.chpl"
  int32_t default_arglocale_id;
#line 1468 "String.chpl"
  string wrap_call_tmp;
#line 1468 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 1468 "String.chpl"
  string call_tmp2;
#line 1468 "String.chpl"
  string call_tmp3;
#line 1468 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
#line 1468 "String.chpl"
  _ref_string _ref_tmp_ = NULL;
#line 1468 "String.chpl"
  string localB;
#line 1468 "String.chpl"
  string type_tmp2;
#line 1468 "String.chpl"
  string this6;
#line 1468 "String.chpl"
  c_ptr_uint8_t call_tmp4 = NULL;
#line 1468 "String.chpl"
  int32_t default_arglocale_id2;
#line 1468 "String.chpl"
  string wrap_call_tmp2;
#line 1468 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
#line 1468 "String.chpl"
  string call_tmp5;
#line 1468 "String.chpl"
  string call_tmp6;
#line 1468 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
#line 1468 "String.chpl"
  _ref_string _ref_tmp_2 = NULL;
#line 1468 "String.chpl"
  chpl_bool ret;
#line 1468 "String.chpl"
  int64_t coerce_tmp;
#line 1468 "String.chpl"
  int64_t coerce_tmp2;
#line 1468 "String.chpl"
  chpl_bool call_tmp7;
#line 1468 "String.chpl"
  int64_t ret2;
#line 1468 "String.chpl"
  int64_t coerce_tmp3;
#line 1468 "String.chpl"
  int64_t coerce_tmp4;
#line 1468 "String.chpl"
  int64_t T;
#line 1468 "String.chpl"
  chpl_bool call_tmp8;
#line 1468 "String.chpl"
  chpl_bool call_tmp9;
#line 1468 "String.chpl"
  uint64_t call_tmp10;
#line 1468 "String.chpl"
  int32_t call_tmp11;
#line 1468 "String.chpl"
  c_ptr_uint8_t coerce_tmp5 = NULL;
#line 1468 "String.chpl"
  c_ptr_uint8_t coerce_tmp6 = NULL;
#line 1468 "String.chpl"
  int32_t call_tmp12;
#line 1468 "String.chpl"
  chpl_bool call_tmp13;
#line 1468 "String.chpl"
  int64_t coerce_tmp7;
#line 1468 "String.chpl"
  chpl_bool call_tmp14;
#line 1468 "String.chpl"
  int64_t coerce_tmp8;
#line 1468 "String.chpl"
  chpl_bool call_tmp15;
#line 1468 "String.chpl"
  int64_t call_tmp16;
#line 1468 "String.chpl"
  chpl_bool call_tmp17;
#line 1468 "String.chpl"
  _ref_string _ref_tmp_3 = NULL;
#line 1468 "String.chpl"
  _ref_string _ref_tmp_4 = NULL;
#line 1468 "String.chpl"
  _ref_string _ref_tmp_5 = NULL;
#line 1468 "String.chpl"
  _ref_string _ref_tmp_6 = NULL;
#line 1562 "String.chpl"
  local__str_literal_2592 = _str_literal_2592;
#line 1559 "String.chpl"
  (&this5)->len = INT64(0);
#line 1559 "String.chpl"
  (&this5)->_size = INT64(0);
#line 1559 "String.chpl"
  (&this5)->buff = nil;
#line 1559 "String.chpl"
  (&this5)->owned = UINT8(false);
#line 1559 "String.chpl"
  (&this5)->locale_id = INT32(0);
#line 1559 "String.chpl"
  (&this5)->len = INT64(0);
#line 1559 "String.chpl"
  (&this5)->_size = INT64(0);
#line 1559 "String.chpl"
  call_tmp = ((c_ptr_uint8_t)(nil));
#line 1559 "String.chpl"
  (&this5)->buff = call_tmp;
#line 1559 "String.chpl"
  (&this5)->owned = UINT8(true);
#line 1559 "String.chpl"
  default_arglocale_id = chpl_nodeID;
#line 1559 "String.chpl"
  (&this5)->locale_id = default_arglocale_id;
#line 1559 "String.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 1559 "String.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this5, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1559 "String.chpl"
  type_tmp = wrap_call_tmp;
#line 1559 "String.chpl"
  ret_to_arg_ref_tmp_2 = &call_tmp3;
#line 1559 "String.chpl"
  string2(a, UINT8(false), ret_to_arg_ref_tmp_2, _ln, _fn);
#line 1559 "String.chpl"
  call_tmp2 = call_tmp3;
#line 1559 "String.chpl"
  _ref_tmp_ = &type_tmp;
#line 1559 "String.chpl"
  chpl___ASSIGN_2(_ref_tmp_, &call_tmp3, _ln, _fn);
#line 1559 "String.chpl"
  localA = type_tmp;
#line 1560 "String.chpl"
  (&this6)->len = INT64(0);
#line 1560 "String.chpl"
  (&this6)->_size = INT64(0);
#line 1560 "String.chpl"
  (&this6)->buff = nil;
#line 1560 "String.chpl"
  (&this6)->owned = UINT8(false);
#line 1560 "String.chpl"
  (&this6)->locale_id = INT32(0);
#line 1560 "String.chpl"
  (&this6)->len = INT64(0);
#line 1560 "String.chpl"
  (&this6)->_size = INT64(0);
#line 1560 "String.chpl"
  call_tmp4 = ((c_ptr_uint8_t)(nil));
#line 1560 "String.chpl"
  (&this6)->buff = call_tmp4;
#line 1560 "String.chpl"
  (&this6)->owned = UINT8(true);
#line 1560 "String.chpl"
  default_arglocale_id2 = chpl_nodeID;
#line 1560 "String.chpl"
  (&this6)->locale_id = default_arglocale_id2;
#line 1560 "String.chpl"
  ret_to_arg_ref_tmp_3 = &wrap_call_tmp2;
#line 1560 "String.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp4, UINT8(true), default_arglocale_id2, &this6, ret_to_arg_ref_tmp_3, _ln, _fn);
#line 1560 "String.chpl"
  type_tmp2 = wrap_call_tmp2;
#line 1560 "String.chpl"
  ret_to_arg_ref_tmp_4 = &call_tmp6;
#line 1560 "String.chpl"
  string2(b, UINT8(false), ret_to_arg_ref_tmp_4, _ln, _fn);
#line 1560 "String.chpl"
  call_tmp5 = call_tmp6;
#line 1560 "String.chpl"
  _ref_tmp_2 = &type_tmp2;
#line 1560 "String.chpl"
  chpl___ASSIGN_2(_ref_tmp_2, &call_tmp6, _ln, _fn);
#line 1560 "String.chpl"
  localB = type_tmp2;
#line 1562 "String.chpl"
  coerce_tmp = (&localA)->len;
#line 1562 "String.chpl"
  coerce_tmp2 = (&localB)->len;
#line 1562 "String.chpl"
  call_tmp7 = (coerce_tmp != coerce_tmp2);
#line 1562 "String.chpl"
  if (call_tmp7) /* ZLINE: 1562 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1562 "String.chpl"
  {
#line 1562 "String.chpl"
    ret = UINT8(false);
#line 1562 "String.chpl"
    goto _end_doEq;
#line 1562 "String.chpl"
  }
#line 1562 "String.chpl"
  coerce_tmp3 = (&localA)->len;
#line 1562 "String.chpl"
  coerce_tmp4 = (&localB)->len;
#line 1562 "String.chpl"
  call_tmp8 = (coerce_tmp3 < coerce_tmp4);
#line 1562 "String.chpl"
  if (call_tmp8) /* ZLINE: 1562 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1562 "String.chpl"
  {
#line 1562 "String.chpl"
    T = coerce_tmp3;
#line 1562 "String.chpl"
  } else /* ZLINE: 1562 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1562 "String.chpl"
  {
#line 1562 "String.chpl"
    T = coerce_tmp4;
#line 1562 "String.chpl"
  }
#line 1562 "String.chpl"
  call_tmp9 = (T < INT64(0));
#line 1562 "String.chpl"
  if (call_tmp9) /* ZLINE: 1562 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1562 "String.chpl"
  {
#line 1562 "String.chpl"
    halt(&local__str_literal_2592, _ln, _fn);
#line 1562 "String.chpl"
  }
#line 1562 "String.chpl"
  call_tmp10 = ((uint64_t)(T));
#line 1562 "String.chpl"
  coerce_tmp5 = (&localA)->buff;
#line 1562 "String.chpl"
  coerce_tmp6 = (&localB)->buff;
#line 1562 "String.chpl"
  call_tmp11 = memcmp(coerce_tmp5, coerce_tmp6, call_tmp10);
#line 1562 "String.chpl"
  call_tmp12 = ((int32_t)(INT64(0)));
#line 1562 "String.chpl"
  call_tmp13 = (call_tmp11 == call_tmp12);
#line 1562 "String.chpl"
  if (call_tmp13) /* ZLINE: 1562 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1562 "String.chpl"
  {
#line 1562 "String.chpl"
    coerce_tmp7 = (&localA)->len;
#line 1562 "String.chpl"
    call_tmp14 = (T < coerce_tmp7);
#line 1562 "String.chpl"
    if (call_tmp14) /* ZLINE: 1562 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1562 "String.chpl"
    {
#line 1562 "String.chpl"
      ret2 = INT64(1);
#line 1562 "String.chpl"
      goto _end__strcmp;
#line 1562 "String.chpl"
    }
#line 1562 "String.chpl"
    coerce_tmp8 = (&localB)->len;
#line 1562 "String.chpl"
    call_tmp15 = (T < coerce_tmp8);
#line 1562 "String.chpl"
    if (call_tmp15) /* ZLINE: 1562 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1562 "String.chpl"
    {
#line 1562 "String.chpl"
      ret2 = INT64(-1);
#line 1562 "String.chpl"
      goto _end__strcmp;
#line 1562 "String.chpl"
    }
#line 1562 "String.chpl"
  }
#line 1562 "String.chpl"
  call_tmp16 = ((int64_t)(call_tmp11));
#line 1562 "String.chpl"
  ret2 = call_tmp16;
#line 1562 "String.chpl"
  _end__strcmp:;
#line 1562 "String.chpl"
  call_tmp17 = (ret2 == INT64(0));
#line 1562 "String.chpl"
  ret = call_tmp17;
#line 1562 "String.chpl"
  _end_doEq:;
#line 1560 "String.chpl"
  _ref_tmp_3 = &call_tmp5;
#line 1560 "String.chpl"
  chpl___TILDE_string(_ref_tmp_3, _ln, _fn);
#line 1560 "String.chpl"
  _ref_tmp_4 = &localB;
#line 1560 "String.chpl"
  chpl___TILDE_string(_ref_tmp_4, _ln, _fn);
#line 1559 "String.chpl"
  _ref_tmp_5 = &call_tmp2;
#line 1559 "String.chpl"
  chpl___TILDE_string(_ref_tmp_5, _ln, _fn);
#line 1559 "String.chpl"
  _ref_tmp_6 = &localA;
#line 1559 "String.chpl"
  chpl___TILDE_string(_ref_tmp_6, _ln, _fn);
#line 1535 "String.chpl"
  return ret;
#line 1535 "String.chpl"
}

#line 1535 "String.chpl"
/* String.chpl:1660 */
#line 1535 "String.chpl"
static void _cast(c_string cs, _ref_string _retArg, int64_t _ln, int32_t _fn) {
#line 1535 "String.chpl"
  string ret;
#line 1535 "String.chpl"
  string this5;
#line 1535 "String.chpl"
  c_ptr_uint8_t call_tmp = NULL;
#line 1535 "String.chpl"
  int32_t default_arglocale_id;
#line 1535 "String.chpl"
  string wrap_call_tmp;
#line 1535 "String.chpl"
  _ref_string ret_to_arg_ref_tmp_ = NULL;
#line 1535 "String.chpl"
  _ref_int64_t call_tmp2 = NULL;
#line 1535 "String.chpl"
  int64_t call_tmp3;
#line 1535 "String.chpl"
  _ref_int64_t call_tmp4 = NULL;
#line 1535 "String.chpl"
  int64_t coerce_tmp;
#line 1535 "String.chpl"
  int64_t call_tmp5;
#line 1535 "String.chpl"
  _ref_c_ptr_uint8_t call_tmp6 = NULL;
#line 1535 "String.chpl"
  c_ptr_uint8_t T = NULL;
#line 1535 "String.chpl"
  int64_t coerce_tmp2;
#line 1535 "String.chpl"
  chpl_bool call_tmp7;
#line 1535 "String.chpl"
  c_string_copy call_tmp8;
#line 1535 "String.chpl"
  c_ptr_uint8_t call_tmp9 = NULL;
#line 1535 "String.chpl"
  _nilType call_tmp10;
#line 1535 "String.chpl"
  c_ptr_uint8_t call_tmp11 = NULL;
#line 1535 "String.chpl"
  _ref_chpl_bool call_tmp12 = NULL;
#line 1661 "String.chpl"
  (&this5)->len = INT64(0);
#line 1661 "String.chpl"
  (&this5)->_size = INT64(0);
#line 1661 "String.chpl"
  (&this5)->buff = nil;
#line 1661 "String.chpl"
  (&this5)->owned = UINT8(false);
#line 1661 "String.chpl"
  (&this5)->locale_id = INT32(0);
#line 1661 "String.chpl"
  (&this5)->len = INT64(0);
#line 1661 "String.chpl"
  (&this5)->_size = INT64(0);
#line 1661 "String.chpl"
  call_tmp = ((c_ptr_uint8_t)(nil));
#line 1661 "String.chpl"
  (&this5)->buff = call_tmp;
#line 1661 "String.chpl"
  (&this5)->owned = UINT8(true);
#line 1661 "String.chpl"
  default_arglocale_id = chpl_nodeID;
#line 1661 "String.chpl"
  (&this5)->locale_id = default_arglocale_id;
#line 1661 "String.chpl"
  ret_to_arg_ref_tmp_ = &wrap_call_tmp;
#line 1661 "String.chpl"
  _construct_string(INT64(0), INT64(0), call_tmp, UINT8(true), default_arglocale_id, &this5, ret_to_arg_ref_tmp_, _ln, _fn);
#line 1661 "String.chpl"
  ret = wrap_call_tmp;
#line 1662 "String.chpl"
  call_tmp2 = &((&ret)->len);
#line 1662 "String.chpl"
  call_tmp3 = string_length(cs);
#line 1662 "String.chpl"
  *(call_tmp2) = call_tmp3;
#line 1663 "String.chpl"
  call_tmp4 = &((&ret)->_size);
#line 1663 "String.chpl"
  coerce_tmp = (&ret)->len;
#line 1663 "String.chpl"
  call_tmp5 = (coerce_tmp + INT64(1));
#line 1663 "String.chpl"
  *(call_tmp4) = call_tmp5;
#line 1664 "String.chpl"
  call_tmp6 = &((&ret)->buff);
#line 1664 "String.chpl"
  coerce_tmp2 = (&ret)->len;
#line 1664 "String.chpl"
  call_tmp7 = (coerce_tmp2 > INT64(0));
#line 1664 "String.chpl"
  if (call_tmp7) /* ZLINE: 1664 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1664 "String.chpl"
  {
#line 1664 "String.chpl"
    call_tmp8 = string_copy(cs, _ln, _fn);
#line 1664 "String.chpl"
    call_tmp9 = ((c_ptr_uint8_t)(call_tmp8));
#line 1664 "String.chpl"
    T = call_tmp9;
#line 1664 "String.chpl"
  } else /* ZLINE: 1664 /home/agobin/Documents/chapel-1.13.0/modules/internal/String.chpl */
#line 1664 "String.chpl"
  {
#line 1664 "String.chpl"
    call_tmp10 = nil;
#line 1664 "String.chpl"
    call_tmp11 = ((c_ptr_uint8_t)(call_tmp10));
#line 1664 "String.chpl"
    T = call_tmp11;
#line 1664 "String.chpl"
  }
#line 1664 "String.chpl"
  *(call_tmp6) = T;
#line 1667 "String.chpl"
  call_tmp12 = &((&ret)->owned);
#line 1667 "String.chpl"
  *(call_tmp12) = UINT8(true);
#line 1660 "String.chpl"
  *(_retArg) = ret;
#line 1660 "String.chpl"
  return;
#line 1660 "String.chpl"
}


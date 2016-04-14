/* <internal>:0 */
static void chpl__init_ChapelStringLiterals(int64_t _ln, int32_t _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  if (chpl__init_ChapelStringLiterals_p) {
    goto _exit_chpl__init_ChapelStringLiterals;
  }
  modFormatStr = "%*s\n";
  modStr = "ChapelStringLiterals";
  printModuleInit(modFormatStr, modStr, INT64(20), _ln, _fn);
  refIndentLevel = &moduleInitLevel;
  *(refIndentLevel) += INT64(1);
  chpl__init_ChapelStringLiterals_p = UINT8(true);
  *(refIndentLevel) -= INT64(1);
  _exit_chpl__init_ChapelStringLiterals:;
  return;
}

/* ChapelBase.chpl:37 */
void chpl__initStringLiterals(void) {
  c_ptr_uint8_t call_tmp = NULL;
  _ref_string ret_to_arg_ref_tmp_ = NULL;
  c_ptr_uint8_t call_tmp2 = NULL;
  _ref_string ret_to_arg_ref_tmp_2 = NULL;
  c_ptr_uint8_t call_tmp3 = NULL;
  _ref_string ret_to_arg_ref_tmp_3 = NULL;
  c_ptr_uint8_t call_tmp4 = NULL;
  _ref_string ret_to_arg_ref_tmp_4 = NULL;
  c_ptr_uint8_t call_tmp5 = NULL;
  _ref_string ret_to_arg_ref_tmp_5 = NULL;
  c_ptr_uint8_t call_tmp6 = NULL;
  _ref_string ret_to_arg_ref_tmp_6 = NULL;
  c_ptr_uint8_t call_tmp7 = NULL;
  _ref_string ret_to_arg_ref_tmp_7 = NULL;
  c_ptr_uint8_t call_tmp8 = NULL;
  _ref_string ret_to_arg_ref_tmp_8 = NULL;
  c_ptr_uint8_t call_tmp9 = NULL;
  _ref_string ret_to_arg_ref_tmp_9 = NULL;
  c_ptr_uint8_t call_tmp10 = NULL;
  _ref_string ret_to_arg_ref_tmp_10 = NULL;
  c_ptr_uint8_t call_tmp11 = NULL;
  _ref_string ret_to_arg_ref_tmp_11 = NULL;
  c_ptr_uint8_t call_tmp12 = NULL;
  _ref_string ret_to_arg_ref_tmp_12 = NULL;
  c_ptr_uint8_t call_tmp13 = NULL;
  _ref_string ret_to_arg_ref_tmp_13 = NULL;
  c_ptr_uint8_t call_tmp14 = NULL;
  _ref_string ret_to_arg_ref_tmp_14 = NULL;
  c_ptr_uint8_t call_tmp15 = NULL;
  _ref_string ret_to_arg_ref_tmp_15 = NULL;
  c_ptr_uint8_t call_tmp16 = NULL;
  _ref_string ret_to_arg_ref_tmp_16 = NULL;
  c_ptr_uint8_t call_tmp17 = NULL;
  _ref_string ret_to_arg_ref_tmp_17 = NULL;
  c_ptr_uint8_t call_tmp18 = NULL;
  _ref_string ret_to_arg_ref_tmp_18 = NULL;
  c_ptr_uint8_t call_tmp19 = NULL;
  _ref_string ret_to_arg_ref_tmp_19 = NULL;
  c_ptr_uint8_t call_tmp20 = NULL;
  _ref_string ret_to_arg_ref_tmp_20 = NULL;
  c_ptr_uint8_t call_tmp21 = NULL;
  _ref_string ret_to_arg_ref_tmp_21 = NULL;
  c_ptr_uint8_t call_tmp22 = NULL;
  _ref_string ret_to_arg_ref_tmp_22 = NULL;
  c_ptr_uint8_t call_tmp23 = NULL;
  _ref_string ret_to_arg_ref_tmp_23 = NULL;
  c_ptr_uint8_t call_tmp24 = NULL;
  _ref_string ret_to_arg_ref_tmp_24 = NULL;
  c_ptr_uint8_t call_tmp25 = NULL;
  _ref_string ret_to_arg_ref_tmp_25 = NULL;
  c_ptr_uint8_t call_tmp26 = NULL;
  _ref_string ret_to_arg_ref_tmp_26 = NULL;
  c_ptr_uint8_t call_tmp27 = NULL;
  _ref_string ret_to_arg_ref_tmp_27 = NULL;
  c_ptr_uint8_t call_tmp28 = NULL;
  _ref_string ret_to_arg_ref_tmp_28 = NULL;
  c_ptr_uint8_t call_tmp29 = NULL;
  _ref_string ret_to_arg_ref_tmp_29 = NULL;
  c_ptr_uint8_t call_tmp30 = NULL;
  _ref_string ret_to_arg_ref_tmp_30 = NULL;
  c_ptr_uint8_t call_tmp31 = NULL;
  _ref_string ret_to_arg_ref_tmp_31 = NULL;
  c_ptr_uint8_t call_tmp32 = NULL;
  _ref_string ret_to_arg_ref_tmp_32 = NULL;
  c_ptr_uint8_t call_tmp33 = NULL;
  _ref_string ret_to_arg_ref_tmp_33 = NULL;
  c_ptr_uint8_t call_tmp34 = NULL;
  _ref_string ret_to_arg_ref_tmp_34 = NULL;
  c_ptr_uint8_t call_tmp35 = NULL;
  _ref_string ret_to_arg_ref_tmp_35 = NULL;
  c_ptr_uint8_t call_tmp36 = NULL;
  _ref_string ret_to_arg_ref_tmp_36 = NULL;
  c_ptr_uint8_t call_tmp37 = NULL;
  _ref_string ret_to_arg_ref_tmp_37 = NULL;
  c_ptr_uint8_t call_tmp38 = NULL;
  _ref_string ret_to_arg_ref_tmp_38 = NULL;
  c_ptr_uint8_t call_tmp39 = NULL;
  _ref_string ret_to_arg_ref_tmp_39 = NULL;
  c_ptr_uint8_t call_tmp40 = NULL;
  _ref_string ret_to_arg_ref_tmp_40 = NULL;
  c_ptr_uint8_t call_tmp41 = NULL;
  _ref_string ret_to_arg_ref_tmp_41 = NULL;
  c_ptr_uint8_t call_tmp42 = NULL;
  _ref_string ret_to_arg_ref_tmp_42 = NULL;
  c_ptr_uint8_t call_tmp43 = NULL;
  _ref_string ret_to_arg_ref_tmp_43 = NULL;
  c_ptr_uint8_t call_tmp44 = NULL;
  _ref_string ret_to_arg_ref_tmp_44 = NULL;
  c_ptr_uint8_t call_tmp45 = NULL;
  _ref_string ret_to_arg_ref_tmp_45 = NULL;
#line 41 "ChapelBase.chpl"
  call_tmp = ((c_ptr_uint8_t)("Pure virtual function called."));
#line 41 "ChapelBase.chpl"
  ret_to_arg_ref_tmp_ = &_str_literal_32;
#line 41 "ChapelBase.chpl"
  string4(call_tmp, INT64(29), INT64(30), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_, INT64(41), INT32(2));
#line 294 "String.chpl"
  call_tmp2 = ((c_ptr_uint8_t)("Cannot call .c_str() on a remote string"));
#line 294 "String.chpl"
  ret_to_arg_ref_tmp_2 = &_str_literal_302;
#line 294 "String.chpl"
  string4(call_tmp2, INT64(39), INT64(40), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_2, INT64(294), INT32(8));
#line 720 "String.chpl"
  call_tmp3 = ((c_ptr_uint8_t)(" "));
#line 720 "String.chpl"
  ret_to_arg_ref_tmp_3 = &_str_literal_332;
#line 720 "String.chpl"
  string4(call_tmp3, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_3, INT64(720), INT32(8));
#line 1612 "String.chpl"
  call_tmp4 = ((c_ptr_uint8_t)("a"));
#line 1612 "String.chpl"
  ret_to_arg_ref_tmp_4 = &_str_literal_369;
#line 1612 "String.chpl"
  string4(call_tmp4, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_4, INT64(1612), INT32(8));
#line 1679 "String.chpl"
  call_tmp5 = ((c_ptr_uint8_t)(")"));
#line 1679 "String.chpl"
  ret_to_arg_ref_tmp_5 = &_str_literal_381;
#line 1679 "String.chpl"
  string4(call_tmp5, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_5, INT64(1679), INT32(8));
#line 146 "ChapelTuple.chpl"
  call_tmp6 = ((c_ptr_uint8_t)("tuple access out of bounds: "));
#line 146 "ChapelTuple.chpl"
  ret_to_arg_ref_tmp_6 = &_str_literal_502;
#line 146 "ChapelTuple.chpl"
  string4(call_tmp6, INT64(28), INT64(29), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_6, INT64(146), INT32(19));
#line 172 "ChapelTuple.chpl"
  call_tmp7 = ((c_ptr_uint8_t)("true"));
#line 172 "ChapelTuple.chpl"
  ret_to_arg_ref_tmp_7 = &_str_literal_512;
#line 172 "ChapelTuple.chpl"
  string4(call_tmp7, INT64(4), INT64(5), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_7, INT64(172), INT32(19));
#line 235 "ChapelTuple.chpl"
  call_tmp8 = ((c_ptr_uint8_t)("("));
#line 235 "ChapelTuple.chpl"
  ret_to_arg_ref_tmp_8 = &_str_literal_533;
#line 235 "ChapelTuple.chpl"
  string4(call_tmp8, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_8, INT64(235), INT32(19));
#line 1216 "ChapelRange.chpl"
  call_tmp9 = ((c_ptr_uint8_t)("With a negative count, the range must have a last index."));
#line 1216 "ChapelRange.chpl"
  ret_to_arg_ref_tmp_9 = &_str_literal_664;
#line 1216 "ChapelRange.chpl"
  string4(call_tmp9, INT64(56), INT64(57), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_9, INT64(1216), INT32(20));
#line 1322 "ChapelRange.chpl"
  call_tmp10 = ((c_ptr_uint8_t)("Iteration over a bounded range may be incorrect due to overflow."));
#line 1322 "ChapelRange.chpl"
  ret_to_arg_ref_tmp_10 = &_str_literal_679;
#line 1322 "ChapelRange.chpl"
  string4(call_tmp10, INT64(64), INT64(65), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_10, INT64(1322), INT32(20));
#line 66 "ChapelSyncvar.chpl"
  call_tmp11 = ((c_ptr_uint8_t)("'"));
#line 66 "ChapelSyncvar.chpl"
  ret_to_arg_ref_tmp_11 = &_str_literal_789;
#line 66 "ChapelSyncvar.chpl"
  string4(call_tmp11, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_11, INT64(66), INT32(22));
#line 102 "LocaleModel.chpl"
  call_tmp12 = ((c_ptr_uint8_t)("Cannot create additional LocaleModel instances"));
#line 102 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_12 = &_str_literal_842;
#line 102 "LocaleModel.chpl"
  string4(call_tmp12, INT64(46), INT64(47), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_12, INT64(102), INT32(23));
#line 140 "LocaleModel.chpl"
  call_tmp13 = ((c_ptr_uint8_t)("requesting a child from a LocaleModel locale"));
#line 140 "LocaleModel.chpl"
  ret_to_arg_ref_tmp_13 = &_str_literal_846;
#line 140 "LocaleModel.chpl"
  string4(call_tmp13, INT64(44), INT64(45), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_13, INT64(140), INT32(23));
#line 29 "DefaultRectangular.chpl"
  call_tmp14 = ((c_ptr_uint8_t)("dataParTasksPerLocale must be >= 0"));
#line 29 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_14 = &_str_literal_889;
#line 29 "DefaultRectangular.chpl"
  string4(call_tmp14, INT64(34), INT64(35), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_14, INT64(29), INT32(25));
#line 30 "DefaultRectangular.chpl"
  call_tmp15 = ((c_ptr_uint8_t)("dataParMinGranularity must be > 0"));
#line 30 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_15 = &_str_literal_891;
#line 30 "DefaultRectangular.chpl"
  string4(call_tmp15, INT64(33), INT64(34), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_15, INT64(30), INT32(25));
#line 899 "DefaultRectangular.chpl"
  call_tmp16 = ((c_ptr_uint8_t)("array index out of bounds: "));
#line 899 "DefaultRectangular.chpl"
  ret_to_arg_ref_tmp_16 = &_str_literal_974;
#line 899 "DefaultRectangular.chpl"
  string4(call_tmp16, INT64(27), INT64(28), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_16, INT64(899), INT32(25));
#line 102 "ChapelDistribution.chpl"
  call_tmp17 = ((c_ptr_uint8_t)("distribution reference count is negative!"));
#line 102 "ChapelDistribution.chpl"
  ret_to_arg_ref_tmp_17 = &_str_literal_1442;
#line 102 "ChapelDistribution.chpl"
  string4(call_tmp17, INT64(41), INT64(42), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_17, INT64(102), INT32(28));
#line 127 "ChapelDistribution.chpl"
  call_tmp18 = ((c_ptr_uint8_t)("internal error: dsiMyDist is not implemented"));
#line 127 "ChapelDistribution.chpl"
  ret_to_arg_ref_tmp_18 = &_str_literal_1444;
#line 127 "ChapelDistribution.chpl"
  string4(call_tmp18, INT64(44), INT64(45), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_18, INT64(127), INT32(28));
#line 200 "ChapelDistribution.chpl"
  call_tmp19 = ((c_ptr_uint8_t)("domain reference count is negative!"));
#line 200 "ChapelDistribution.chpl"
  ret_to_arg_ref_tmp_19 = &_str_literal_1450;
#line 200 "ChapelDistribution.chpl"
  string4(call_tmp19, INT64(35), INT64(36), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_19, INT64(200), INT32(28));
#line 280 "ChapelDistribution.chpl"
  call_tmp20 = ((c_ptr_uint8_t)("internal error: dsiGetBaseDom is not implemented"));
#line 280 "ChapelDistribution.chpl"
  ret_to_arg_ref_tmp_20 = &_str_literal_1456;
#line 280 "ChapelDistribution.chpl"
  string4(call_tmp20, INT64(48), INT64(49), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_20, INT64(280), INT32(28));
#line 314 "ChapelDistribution.chpl"
  call_tmp21 = ((c_ptr_uint8_t)("reallocating not supported for this array type"));
#line 314 "ChapelDistribution.chpl"
  ret_to_arg_ref_tmp_21 = &_str_literal_1459;
#line 314 "ChapelDistribution.chpl"
  string4(call_tmp21, INT64(46), INT64(47), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_21, INT64(314), INT32(28));
#line 373 "ChapelDistribution.chpl"
  call_tmp22 = ((c_ptr_uint8_t)("array reference count is negative!"));
#line 373 "ChapelDistribution.chpl"
  ret_to_arg_ref_tmp_22 = &_str_literal_1477;
#line 373 "ChapelDistribution.chpl"
  string4(call_tmp22, INT64(34), INT64(35), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_22, INT64(373), INT32(28));
#line 703 "ChapelIO.chpl"
  call_tmp23 = ((c_ptr_uint8_t)("halt reached - "));
#line 703 "ChapelIO.chpl"
  ret_to_arg_ref_tmp_23 = &_str_literal_1508;
#line 703 "ChapelIO.chpl"
  string4(call_tmp23, INT64(15), INT64(16), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_23, INT64(703), INT32(29));
#line 58 "ChapelTaskTable.chpl"
  call_tmp24 = ((c_ptr_uint8_t)("To use task tracking, you must recompile with --task-tracking"));
#line 58 "ChapelTaskTable.chpl"
  ret_to_arg_ref_tmp_24 = &_str_literal_1664;
#line 58 "ChapelTaskTable.chpl"
  string4(call_tmp24, INT64(61), INT64(62), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_24, INT64(58), INT32(35));
#line 40 "StringCasts.chpl"
  call_tmp25 = ((c_ptr_uint8_t)("false"));
#line 40 "StringCasts.chpl"
  ret_to_arg_ref_tmp_25 = &_str_literal_1669;
#line 40 "StringCasts.chpl"
  string4(call_tmp25, INT64(5), INT64(6), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_25, INT64(40), INT32(40));
#line 50 "StringCasts.chpl"
  call_tmp26 = ((c_ptr_uint8_t)("Unexpected value when converting from string to bool: '"));
#line 50 "StringCasts.chpl"
  ret_to_arg_ref_tmp_26 = &_str_literal_1671;
#line 50 "StringCasts.chpl"
  string4(call_tmp26, INT64(55), INT64(56), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_26, INT64(50), INT32(40));
#line 2016 "IO.chpl"
  call_tmp27 = ((c_ptr_uint8_t)("Operation attempted on an invalid file"));
#line 2016 "IO.chpl"
  ret_to_arg_ref_tmp_27 = &_str_literal_1846;
#line 2016 "IO.chpl"
  string4(call_tmp27, INT64(38), INT64(39), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_27, INT64(2016), INT32(54));
#line 2158 "IO.chpl"
  call_tmp28 = ((c_ptr_uint8_t)("unknown"));
#line 2158 "IO.chpl"
  ret_to_arg_ref_tmp_28 = &_str_literal_1855;
#line 2158 "IO.chpl"
  string4(call_tmp28, INT64(7), INT64(8), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_28, INT64(2158), INT32(54));
#line 2212 "IO.chpl"
  call_tmp29 = ((c_ptr_uint8_t)("r"));
#line 2212 "IO.chpl"
  ret_to_arg_ref_tmp_29 = &_str_literal_1862;
#line 2212 "IO.chpl"
  string4(call_tmp29, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_29, INT64(2212), INT32(54));
#line 2213 "IO.chpl"
  call_tmp30 = ((c_ptr_uint8_t)("r+"));
#line 2213 "IO.chpl"
  ret_to_arg_ref_tmp_30 = &_str_literal_1864;
#line 2213 "IO.chpl"
  string4(call_tmp30, INT64(2), INT64(3), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_30, INT64(2213), INT32(54));
#line 2214 "IO.chpl"
  call_tmp31 = ((c_ptr_uint8_t)("w"));
#line 2214 "IO.chpl"
  ret_to_arg_ref_tmp_31 = &_str_literal_1866;
#line 2214 "IO.chpl"
  string4(call_tmp31, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_31, INT64(2214), INT32(54));
#line 2215 "IO.chpl"
  call_tmp32 = ((c_ptr_uint8_t)("w+"));
#line 2215 "IO.chpl"
  ret_to_arg_ref_tmp_32 = &_str_literal_1868;
#line 2215 "IO.chpl"
  string4(call_tmp32, INT64(2), INT64(3), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_32, INT64(2215), INT32(54));
#line 2442 "IO.chpl"
  call_tmp33 = ((c_ptr_uint8_t)("in openfd"));
#line 2442 "IO.chpl"
  ret_to_arg_ref_tmp_33 = &_str_literal_1924;
#line 2442 "IO.chpl"
  string4(call_tmp33, INT64(9), INT64(10), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_33, INT64(2442), INT32(54));
#line 2497 "IO.chpl"
  call_tmp34 = ((c_ptr_uint8_t)("in openfp"));
#line 2497 "IO.chpl"
  ret_to_arg_ref_tmp_34 = &_str_literal_1926;
#line 2497 "IO.chpl"
  string4(call_tmp34, INT64(9), INT64(10), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_34, INT64(2497), INT32(54));
#line 3216 "IO.chpl"
  call_tmp35 = ((c_ptr_uint8_t)("in file.reader"));
#line 3216 "IO.chpl"
  ret_to_arg_ref_tmp_35 = &_str_literal_1971;
#line 3216 "IO.chpl"
  string4(call_tmp35, INT64(14), INT64(15), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_35, INT64(3216), INT32(54));
#line 3318 "IO.chpl"
  call_tmp36 = ((c_ptr_uint8_t)("in file.writer"));
#line 3318 "IO.chpl"
  ret_to_arg_ref_tmp_36 = &_str_literal_1978;
#line 3318 "IO.chpl"
  string4(call_tmp36, INT64(14), INT64(15), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_36, INT64(3318), INT32(54));
#line 3949 "IO.chpl"
  call_tmp37 = ((c_ptr_uint8_t)(""));
#line 3949 "IO.chpl"
  ret_to_arg_ref_tmp_37 = &_str_literal_2014;
#line 3949 "IO.chpl"
  string4(call_tmp37, INT64(0), INT64(0), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_37, INT64(3949), INT32(54));
#line 3993 "IO.chpl"
  call_tmp38 = ((c_ptr_uint8_t)("b"));
#line 3993 "IO.chpl"
  ret_to_arg_ref_tmp_38 = &_str_literal_2017;
#line 3993 "IO.chpl"
  string4(call_tmp38, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_38, INT64(3993), INT32(54));
#line 3993 "IO.chpl"
  call_tmp39 = ((c_ptr_uint8_t)("c"));
#line 3993 "IO.chpl"
  ret_to_arg_ref_tmp_39 = &_str_literal_2019;
#line 3993 "IO.chpl"
  string4(call_tmp39, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_39, INT64(3993), INT32(54));
#line 3993 "IO.chpl"
  call_tmp40 = ((c_ptr_uint8_t)("d"));
#line 3993 "IO.chpl"
  ret_to_arg_ref_tmp_40 = &_str_literal_2021;
#line 3993 "IO.chpl"
  string4(call_tmp40, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_40, INT64(3993), INT32(54));
#line 3993 "IO.chpl"
  call_tmp41 = ((c_ptr_uint8_t)("e"));
#line 3993 "IO.chpl"
  ret_to_arg_ref_tmp_41 = &_str_literal_2023;
#line 3993 "IO.chpl"
  string4(call_tmp41, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_41, INT64(3993), INT32(54));
#line 3993 "IO.chpl"
  call_tmp42 = ((c_ptr_uint8_t)("f"));
#line 3993 "IO.chpl"
  ret_to_arg_ref_tmp_42 = &_str_literal_2025;
#line 3993 "IO.chpl"
  string4(call_tmp42, INT64(1), INT64(2), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_42, INT64(3993), INT32(54));
#line 103 "Error.chpl"
  call_tmp43 = ((c_ptr_uint8_t)(" with path "));
#line 103 "Error.chpl"
  ret_to_arg_ref_tmp_43 = &_str_literal_2277;
#line 103 "Error.chpl"
  string4(call_tmp43, INT64(11), INT64(12), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_43, INT64(103), INT32(57));
#line 103 "Error.chpl"
  call_tmp44 = ((c_ptr_uint8_t)("casting int(64) less than 0 to uint(64)"));
#line 103 "Error.chpl"
  ret_to_arg_ref_tmp_44 = &_str_literal_2592;
#line 103 "Error.chpl"
  string4(call_tmp44, INT64(39), INT64(40), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_44, INT64(0), INT32(1));
#line 103 "Error.chpl"
  call_tmp45 = ((c_ptr_uint8_t)("casting uint(64) with a value greater than the maximum of int(64) to int(64)"));
#line 103 "Error.chpl"
  ret_to_arg_ref_tmp_45 = &_str_literal_2603;
#line 103 "Error.chpl"
  string4(call_tmp45, INT64(76), INT64(77), UINT8(false), UINT8(false), ret_to_arg_ref_tmp_45, INT64(0), INT32(1));
#line 37 "ChapelBase.chpl"
  return;
#line 37 "ChapelBase.chpl"
}


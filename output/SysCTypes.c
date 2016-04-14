/* SysCTypes.chpl:1 */
static void chpl__init_SysCTypes(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  uint64_t call_tmp_chpl;
  uint64_t call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  uint64_t call_tmp_chpl4;
  uint64_t call_tmp_chpl5;
  chpl_bool call_tmp_chpl6;
  uint64_t call_tmp_chpl7;
  uint64_t call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  uint64_t call_tmp_chpl10;
  uint64_t call_tmp_chpl11;
  chpl_bool call_tmp_chpl12;
  uint64_t call_tmp_chpl13;
  uint64_t call_tmp_chpl14;
  chpl_bool call_tmp_chpl15;
  uint64_t call_tmp_chpl16;
  uint64_t call_tmp_chpl17;
  chpl_bool call_tmp_chpl18;
  uint64_t call_tmp_chpl19;
  uint64_t call_tmp_chpl20;
  chpl_bool call_tmp_chpl21;
  uint64_t call_tmp_chpl22;
  uint64_t call_tmp_chpl23;
  chpl_bool call_tmp_chpl24;
  uint64_t call_tmp_chpl25;
  uint64_t call_tmp_chpl26;
  chpl_bool call_tmp_chpl27;
  uint64_t call_tmp_chpl28;
  uint64_t call_tmp_chpl29;
  chpl_bool call_tmp_chpl30;
  uint64_t call_tmp_chpl31;
  uint64_t call_tmp_chpl32;
  chpl_bool call_tmp_chpl33;
  uint64_t call_tmp_chpl34;
  uint64_t call_tmp_chpl35;
  chpl_bool call_tmp_chpl36;
  uint64_t call_tmp_chpl37;
  uint64_t call_tmp_chpl38;
  chpl_bool call_tmp_chpl39;
  uint64_t call_tmp_chpl40;
  uint64_t call_tmp_chpl41;
  chpl_bool call_tmp_chpl42;
  uint64_t call_tmp_chpl43;
  uint64_t call_tmp_chpl44;
  chpl_bool call_tmp_chpl45;
  uint64_t call_tmp_chpl46;
  uint64_t call_tmp_chpl47;
  chpl_bool call_tmp_chpl48;
#line 1 "SysCTypes.chpl"
  if (chpl__init_SysCTypes_p) /* ZLINE: 1 /home/agobin/Documents/chapel-1.13.0/modules/standard/gen/linux64-gnu/SysCTypes.chpl */
#line 1 "SysCTypes.chpl"
  {
#line 1 "SysCTypes.chpl"
    goto _exit_chpl__init_SysCTypes_chpl;
#line 1 "SysCTypes.chpl"
  }
#line 1 "SysCTypes.chpl"
  modFormatStr_chpl = "%*s\n";
#line 1 "SysCTypes.chpl"
  modStr_chpl = "SysCTypes";
#line 1 "SysCTypes.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(9), _ln_chpl, _fn_chpl);
#line 1 "SysCTypes.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 1 "SysCTypes.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 1 "SysCTypes.chpl"
  chpl__init_SysCTypes_p = UINT8(true);
#line 39 "SysCTypes.chpl"
  call_tmp_chpl = sizeof(c_int);
#line 39 "SysCTypes.chpl"
  call_tmp_chpl2 = sizeof(int32_t);
#line 39 "SysCTypes.chpl"
  call_tmp_chpl3 = (call_tmp_chpl == call_tmp_chpl2);
#line 39 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl3, _ln_chpl, _fn_chpl);
#line 40 "SysCTypes.chpl"
  call_tmp_chpl4 = sizeof(c_uint);
#line 40 "SysCTypes.chpl"
  call_tmp_chpl5 = sizeof(uint32_t);
#line 40 "SysCTypes.chpl"
  call_tmp_chpl6 = (call_tmp_chpl4 == call_tmp_chpl5);
#line 40 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl6, _ln_chpl, _fn_chpl);
#line 41 "SysCTypes.chpl"
  call_tmp_chpl7 = sizeof(c_long);
#line 41 "SysCTypes.chpl"
  call_tmp_chpl8 = sizeof(int64_t);
#line 41 "SysCTypes.chpl"
  call_tmp_chpl9 = (call_tmp_chpl7 == call_tmp_chpl8);
#line 41 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl9, _ln_chpl, _fn_chpl);
#line 42 "SysCTypes.chpl"
  call_tmp_chpl10 = sizeof(c_ulong);
#line 42 "SysCTypes.chpl"
  call_tmp_chpl11 = sizeof(uint64_t);
#line 42 "SysCTypes.chpl"
  call_tmp_chpl12 = (call_tmp_chpl10 == call_tmp_chpl11);
#line 42 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl12, _ln_chpl, _fn_chpl);
#line 43 "SysCTypes.chpl"
  call_tmp_chpl13 = sizeof(c_longlong);
#line 43 "SysCTypes.chpl"
  call_tmp_chpl14 = sizeof(int64_t);
#line 43 "SysCTypes.chpl"
  call_tmp_chpl15 = (call_tmp_chpl13 == call_tmp_chpl14);
#line 43 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl15, _ln_chpl, _fn_chpl);
#line 44 "SysCTypes.chpl"
  call_tmp_chpl16 = sizeof(c_ulonglong);
#line 44 "SysCTypes.chpl"
  call_tmp_chpl17 = sizeof(uint64_t);
#line 44 "SysCTypes.chpl"
  call_tmp_chpl18 = (call_tmp_chpl16 == call_tmp_chpl17);
#line 44 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl18, _ln_chpl, _fn_chpl);
#line 45 "SysCTypes.chpl"
  call_tmp_chpl19 = sizeof(c_char);
#line 45 "SysCTypes.chpl"
  call_tmp_chpl20 = sizeof(int8_t);
#line 45 "SysCTypes.chpl"
  call_tmp_chpl21 = (call_tmp_chpl19 == call_tmp_chpl20);
#line 45 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl21, _ln_chpl, _fn_chpl);
#line 46 "SysCTypes.chpl"
  call_tmp_chpl22 = sizeof(c_schar);
#line 46 "SysCTypes.chpl"
  call_tmp_chpl23 = sizeof(int8_t);
#line 46 "SysCTypes.chpl"
  call_tmp_chpl24 = (call_tmp_chpl22 == call_tmp_chpl23);
#line 46 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl24, _ln_chpl, _fn_chpl);
#line 47 "SysCTypes.chpl"
  call_tmp_chpl25 = sizeof(c_uchar);
#line 47 "SysCTypes.chpl"
  call_tmp_chpl26 = sizeof(uint8_t);
#line 47 "SysCTypes.chpl"
  call_tmp_chpl27 = (call_tmp_chpl25 == call_tmp_chpl26);
#line 47 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl27, _ln_chpl, _fn_chpl);
#line 48 "SysCTypes.chpl"
  call_tmp_chpl28 = sizeof(c_short);
#line 48 "SysCTypes.chpl"
  call_tmp_chpl29 = sizeof(int16_t);
#line 48 "SysCTypes.chpl"
  call_tmp_chpl30 = (call_tmp_chpl28 == call_tmp_chpl29);
#line 48 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl30, _ln_chpl, _fn_chpl);
#line 49 "SysCTypes.chpl"
  call_tmp_chpl31 = sizeof(c_ushort);
#line 49 "SysCTypes.chpl"
  call_tmp_chpl32 = sizeof(uint16_t);
#line 49 "SysCTypes.chpl"
  call_tmp_chpl33 = (call_tmp_chpl31 == call_tmp_chpl32);
#line 49 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl33, _ln_chpl, _fn_chpl);
#line 50 "SysCTypes.chpl"
  call_tmp_chpl34 = sizeof(c_intptr);
#line 50 "SysCTypes.chpl"
  call_tmp_chpl35 = sizeof(int64_t);
#line 50 "SysCTypes.chpl"
  call_tmp_chpl36 = (call_tmp_chpl34 == call_tmp_chpl35);
#line 50 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl36, _ln_chpl, _fn_chpl);
#line 51 "SysCTypes.chpl"
  call_tmp_chpl37 = sizeof(c_uintptr);
#line 51 "SysCTypes.chpl"
  call_tmp_chpl38 = sizeof(uint64_t);
#line 51 "SysCTypes.chpl"
  call_tmp_chpl39 = (call_tmp_chpl37 == call_tmp_chpl38);
#line 51 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl39, _ln_chpl, _fn_chpl);
#line 52 "SysCTypes.chpl"
  call_tmp_chpl40 = sizeof(c_ptrdiff);
#line 52 "SysCTypes.chpl"
  call_tmp_chpl41 = sizeof(int64_t);
#line 52 "SysCTypes.chpl"
  call_tmp_chpl42 = (call_tmp_chpl40 == call_tmp_chpl41);
#line 52 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl42, _ln_chpl, _fn_chpl);
#line 53 "SysCTypes.chpl"
  call_tmp_chpl43 = sizeof(ssize_t);
#line 53 "SysCTypes.chpl"
  call_tmp_chpl44 = sizeof(int64_t);
#line 53 "SysCTypes.chpl"
  call_tmp_chpl45 = (call_tmp_chpl43 == call_tmp_chpl44);
#line 53 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl45, _ln_chpl, _fn_chpl);
#line 54 "SysCTypes.chpl"
  call_tmp_chpl46 = sizeof(size_t);
#line 54 "SysCTypes.chpl"
  call_tmp_chpl47 = sizeof(uint64_t);
#line 54 "SysCTypes.chpl"
  call_tmp_chpl48 = (call_tmp_chpl46 == call_tmp_chpl47);
#line 54 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl48, _ln_chpl, _fn_chpl);
#line 1 "SysCTypes.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 1 "SysCTypes.chpl"
  _exit_chpl__init_SysCTypes_chpl:;
#line 1 "SysCTypes.chpl"
  return;
#line 1 "SysCTypes.chpl"
}


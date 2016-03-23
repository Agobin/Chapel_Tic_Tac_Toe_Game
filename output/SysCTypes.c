/* SysCTypes.chpl:1 */
static void chpl__init_SysCTypes(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  uint64_t call_tmp_chpl;
  int32_t call_tmp_chpl2;
  uint64_t call_tmp_chpl3;
  chpl_bool call_tmp_chpl4;
  uint64_t call_tmp_chpl5;
  uint32_t call_tmp_chpl6;
  uint64_t call_tmp_chpl7;
  chpl_bool call_tmp_chpl8;
  uint64_t call_tmp_chpl9;
  int64_t call_tmp_chpl10;
  uint64_t call_tmp_chpl11;
  chpl_bool call_tmp_chpl12;
  uint64_t call_tmp_chpl13;
  uint64_t call_tmp_chpl14;
  uint64_t call_tmp_chpl15;
  chpl_bool call_tmp_chpl16;
  uint64_t call_tmp_chpl17;
  int64_t call_tmp_chpl18;
  uint64_t call_tmp_chpl19;
  chpl_bool call_tmp_chpl20;
  uint64_t call_tmp_chpl21;
  uint64_t call_tmp_chpl22;
  uint64_t call_tmp_chpl23;
  chpl_bool call_tmp_chpl24;
  uint64_t call_tmp_chpl25;
  int8_t call_tmp_chpl26;
  uint64_t call_tmp_chpl27;
  chpl_bool call_tmp_chpl28;
  uint64_t call_tmp_chpl29;
  int8_t call_tmp_chpl30;
  uint64_t call_tmp_chpl31;
  chpl_bool call_tmp_chpl32;
  uint64_t call_tmp_chpl33;
  uint8_t call_tmp_chpl34;
  uint64_t call_tmp_chpl35;
  chpl_bool call_tmp_chpl36;
  uint64_t call_tmp_chpl37;
  int16_t call_tmp_chpl38;
  uint64_t call_tmp_chpl39;
  chpl_bool call_tmp_chpl40;
  uint64_t call_tmp_chpl41;
  uint16_t call_tmp_chpl42;
  uint64_t call_tmp_chpl43;
  chpl_bool call_tmp_chpl44;
  uint64_t call_tmp_chpl45;
  int64_t call_tmp_chpl46;
  uint64_t call_tmp_chpl47;
  chpl_bool call_tmp_chpl48;
  uint64_t call_tmp_chpl49;
  uint64_t call_tmp_chpl50;
  uint64_t call_tmp_chpl51;
  chpl_bool call_tmp_chpl52;
  uint64_t call_tmp_chpl53;
  int64_t call_tmp_chpl54;
  uint64_t call_tmp_chpl55;
  chpl_bool call_tmp_chpl56;
  uint64_t call_tmp_chpl57;
  int64_t call_tmp_chpl58;
  uint64_t call_tmp_chpl59;
  chpl_bool call_tmp_chpl60;
  uint64_t call_tmp_chpl61;
  uint64_t call_tmp_chpl62;
  uint64_t call_tmp_chpl63;
  chpl_bool call_tmp_chpl64;
#line 1 "SysCTypes.chpl"
  if (chpl__init_SysCTypes_p) /* ZLINE: 1 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/gen/linux64-gnu/SysCTypes.chpl */
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
  chpl__init_SysCTypes_p = true;
#line 39 "SysCTypes.chpl"
  call_tmp_chpl = sizeof(c_int);
#line 39 "SysCTypes.chpl"
  call_tmp_chpl3 = sizeof(call_tmp_chpl2);
#line 39 "SysCTypes.chpl"
  call_tmp_chpl4 = (call_tmp_chpl == call_tmp_chpl3);
#line 39 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl4, _ln_chpl, _fn_chpl);
#line 40 "SysCTypes.chpl"
  call_tmp_chpl5 = sizeof(uint32_t);
#line 40 "SysCTypes.chpl"
  call_tmp_chpl7 = sizeof(call_tmp_chpl6);
#line 40 "SysCTypes.chpl"
  call_tmp_chpl8 = (call_tmp_chpl5 == call_tmp_chpl7);
#line 40 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl8, _ln_chpl, _fn_chpl);
#line 41 "SysCTypes.chpl"
  call_tmp_chpl9 = sizeof(int64_t);
#line 41 "SysCTypes.chpl"
  call_tmp_chpl11 = sizeof(call_tmp_chpl10);
#line 41 "SysCTypes.chpl"
  call_tmp_chpl12 = (call_tmp_chpl9 == call_tmp_chpl11);
#line 41 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl12, _ln_chpl, _fn_chpl);
#line 42 "SysCTypes.chpl"
  call_tmp_chpl13 = sizeof(uint64_t);
#line 42 "SysCTypes.chpl"
  call_tmp_chpl15 = sizeof(call_tmp_chpl14);
#line 42 "SysCTypes.chpl"
  call_tmp_chpl16 = (call_tmp_chpl13 == call_tmp_chpl15);
#line 42 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl16, _ln_chpl, _fn_chpl);
#line 43 "SysCTypes.chpl"
  call_tmp_chpl17 = sizeof(int64_t);
#line 43 "SysCTypes.chpl"
  call_tmp_chpl19 = sizeof(call_tmp_chpl18);
#line 43 "SysCTypes.chpl"
  call_tmp_chpl20 = (call_tmp_chpl17 == call_tmp_chpl19);
#line 43 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl20, _ln_chpl, _fn_chpl);
#line 44 "SysCTypes.chpl"
  call_tmp_chpl21 = sizeof(uint64_t);
#line 44 "SysCTypes.chpl"
  call_tmp_chpl23 = sizeof(call_tmp_chpl22);
#line 44 "SysCTypes.chpl"
  call_tmp_chpl24 = (call_tmp_chpl21 == call_tmp_chpl23);
#line 44 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl24, _ln_chpl, _fn_chpl);
#line 45 "SysCTypes.chpl"
  call_tmp_chpl25 = sizeof(int8_t);
#line 45 "SysCTypes.chpl"
  call_tmp_chpl27 = sizeof(call_tmp_chpl26);
#line 45 "SysCTypes.chpl"
  call_tmp_chpl28 = (call_tmp_chpl25 == call_tmp_chpl27);
#line 45 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl28, _ln_chpl, _fn_chpl);
#line 46 "SysCTypes.chpl"
  call_tmp_chpl29 = sizeof(int8_t);
#line 46 "SysCTypes.chpl"
  call_tmp_chpl31 = sizeof(call_tmp_chpl30);
#line 46 "SysCTypes.chpl"
  call_tmp_chpl32 = (call_tmp_chpl29 == call_tmp_chpl31);
#line 46 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl32, _ln_chpl, _fn_chpl);
#line 47 "SysCTypes.chpl"
  call_tmp_chpl33 = sizeof(uint8_t);
#line 47 "SysCTypes.chpl"
  call_tmp_chpl35 = sizeof(call_tmp_chpl34);
#line 47 "SysCTypes.chpl"
  call_tmp_chpl36 = (call_tmp_chpl33 == call_tmp_chpl35);
#line 47 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl36, _ln_chpl, _fn_chpl);
#line 48 "SysCTypes.chpl"
  call_tmp_chpl37 = sizeof(int16_t);
#line 48 "SysCTypes.chpl"
  call_tmp_chpl39 = sizeof(call_tmp_chpl38);
#line 48 "SysCTypes.chpl"
  call_tmp_chpl40 = (call_tmp_chpl37 == call_tmp_chpl39);
#line 48 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl40, _ln_chpl, _fn_chpl);
#line 49 "SysCTypes.chpl"
  call_tmp_chpl41 = sizeof(uint16_t);
#line 49 "SysCTypes.chpl"
  call_tmp_chpl43 = sizeof(call_tmp_chpl42);
#line 49 "SysCTypes.chpl"
  call_tmp_chpl44 = (call_tmp_chpl41 == call_tmp_chpl43);
#line 49 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl44, _ln_chpl, _fn_chpl);
#line 50 "SysCTypes.chpl"
  call_tmp_chpl45 = sizeof(int64_t);
#line 50 "SysCTypes.chpl"
  call_tmp_chpl47 = sizeof(call_tmp_chpl46);
#line 50 "SysCTypes.chpl"
  call_tmp_chpl48 = (call_tmp_chpl45 == call_tmp_chpl47);
#line 50 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl48, _ln_chpl, _fn_chpl);
#line 51 "SysCTypes.chpl"
  call_tmp_chpl49 = sizeof(uint64_t);
#line 51 "SysCTypes.chpl"
  call_tmp_chpl51 = sizeof(call_tmp_chpl50);
#line 51 "SysCTypes.chpl"
  call_tmp_chpl52 = (call_tmp_chpl49 == call_tmp_chpl51);
#line 51 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl52, _ln_chpl, _fn_chpl);
#line 52 "SysCTypes.chpl"
  call_tmp_chpl53 = sizeof(int64_t);
#line 52 "SysCTypes.chpl"
  call_tmp_chpl55 = sizeof(call_tmp_chpl54);
#line 52 "SysCTypes.chpl"
  call_tmp_chpl56 = (call_tmp_chpl53 == call_tmp_chpl55);
#line 52 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl56, _ln_chpl, _fn_chpl);
#line 53 "SysCTypes.chpl"
  call_tmp_chpl57 = sizeof(int64_t);
#line 53 "SysCTypes.chpl"
  call_tmp_chpl59 = sizeof(call_tmp_chpl58);
#line 53 "SysCTypes.chpl"
  call_tmp_chpl60 = (call_tmp_chpl57 == call_tmp_chpl59);
#line 53 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl60, _ln_chpl, _fn_chpl);
#line 54 "SysCTypes.chpl"
  call_tmp_chpl61 = sizeof(size_t);
#line 54 "SysCTypes.chpl"
  call_tmp_chpl63 = sizeof(call_tmp_chpl62);
#line 54 "SysCTypes.chpl"
  call_tmp_chpl64 = (call_tmp_chpl61 == call_tmp_chpl63);
#line 54 "SysCTypes.chpl"
  assert_chpl(call_tmp_chpl64, _ln_chpl, _fn_chpl);
#line 1 "SysCTypes.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 1 "SysCTypes.chpl"
  _exit_chpl__init_SysCTypes_chpl:;
#line 1 "SysCTypes.chpl"
  return;
#line 1 "SysCTypes.chpl"
}


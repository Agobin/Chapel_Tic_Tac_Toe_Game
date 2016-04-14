/* Assert.chpl:31 */
static void chpl__init_Assert(int64_t _ln_chpl, int32_t _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 31 "Assert.chpl"
  if (chpl__init_Assert_p) /* ZLINE: 31 /home/agobin/Documents/chapel-1.13.0/modules/standard/Assert.chpl */
#line 31 "Assert.chpl"
  {
#line 31 "Assert.chpl"
    goto _exit_chpl__init_Assert_chpl;
#line 31 "Assert.chpl"
  }
#line 31 "Assert.chpl"
  modFormatStr_chpl = "%*s\n";
#line 31 "Assert.chpl"
  modStr_chpl = "Assert";
#line 31 "Assert.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(6), _ln_chpl, _fn_chpl);
#line 31 "Assert.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 31 "Assert.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 31 "Assert.chpl"
  chpl__init_Assert_p = UINT8(true);
#line 31 "Assert.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 31 "Assert.chpl"
  _exit_chpl__init_Assert_chpl:;
#line 31 "Assert.chpl"
  return;
#line 31 "Assert.chpl"
}

#line 31 "Assert.chpl"
/* Assert.chpl:41 */
#line 31 "Assert.chpl"
static void assert_chpl(chpl_bool test_chpl, int64_t _ln_chpl, int32_t _fn_chpl) {
#line 31 "Assert.chpl"
  chpl_bool call_tmp_chpl;
#line 42 "Assert.chpl"
  call_tmp_chpl = (! test_chpl);
#line 42 "Assert.chpl"
  if (call_tmp_chpl) /* ZLINE: 42 /home/agobin/Documents/chapel-1.13.0/modules/standard/Assert.chpl */
#line 42 "Assert.chpl"
  {
#line 43 "Assert.chpl"
    chpl_error("assert failed", _ln_chpl, _fn_chpl);
#line 43 "Assert.chpl"
  }
#line 41 "Assert.chpl"
  return;
#line 41 "Assert.chpl"
}


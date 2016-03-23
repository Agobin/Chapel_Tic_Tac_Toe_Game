/* Assert.chpl:29 */
static void chpl__init_Assert(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 29 "Assert.chpl"
  if (chpl__init_Assert_p) /* ZLINE: 29 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Assert.chpl */
#line 29 "Assert.chpl"
  {
#line 29 "Assert.chpl"
    goto _exit_chpl__init_Assert_chpl;
#line 29 "Assert.chpl"
  }
#line 29 "Assert.chpl"
  modFormatStr_chpl = "%*s\n";
#line 29 "Assert.chpl"
  modStr_chpl = "Assert";
#line 29 "Assert.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(6), _ln_chpl, _fn_chpl);
#line 29 "Assert.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 29 "Assert.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 29 "Assert.chpl"
  chpl__init_Assert_p = true;
#line 29 "Assert.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 29 "Assert.chpl"
  _exit_chpl__init_Assert_chpl:;
#line 29 "Assert.chpl"
  return;
#line 29 "Assert.chpl"
}

#line 29 "Assert.chpl"
/* Assert.chpl:39 */
#line 29 "Assert.chpl"
static void assert_chpl(chpl_bool test_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 29 "Assert.chpl"
  chpl_bool call_tmp_chpl;
#line 40 "Assert.chpl"
  call_tmp_chpl = (! test_chpl);
#line 40 "Assert.chpl"
  if (call_tmp_chpl) /* ZLINE: 40 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Assert.chpl */
#line 40 "Assert.chpl"
  {
#line 41 "Assert.chpl"
    chpl_error("assert failed", _ln_chpl, _fn_chpl);
#line 41 "Assert.chpl"
  }
#line 39 "Assert.chpl"
  return;
#line 39 "Assert.chpl"
}


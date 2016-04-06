/* Time.chpl:30 */
static void chpl__init_Time(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
#line 30 "Time.chpl"
  if (chpl__init_Time_p) /* ZLINE: 30 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Time.chpl */
#line 30 "Time.chpl"
  {
#line 30 "Time.chpl"
    goto _exit_chpl__init_Time_chpl;
#line 30 "Time.chpl"
  }
#line 30 "Time.chpl"
  modFormatStr_chpl = "%*s\n";
#line 30 "Time.chpl"
  modStr_chpl = "Time";
#line 30 "Time.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(4), _ln_chpl, _fn_chpl);
#line 30 "Time.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 30 "Time.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 30 "Time.chpl"
  chpl__init_Time_p = true;
#line 30 "Time.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 30 "Time.chpl"
  _exit_chpl__init_Time_chpl:;
#line 30 "Time.chpl"
  return;
#line 30 "Time.chpl"
}


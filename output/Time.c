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

#line 30 "Time.chpl"
/* Time.chpl:80 */
#line 30 "Time.chpl"
static _real64 getCurrentTime_chpl(TimeUnits_chpl unit_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 30 "Time.chpl"
  _real64 call_tmp_chpl;
#line 30 "Time.chpl"
  _real64 call_tmp_chpl2;
#line 81 "Time.chpl"
  call_tmp_chpl = chpl_now_time();
#line 81 "Time.chpl"
  call_tmp_chpl2 = _convert_microseconds_chpl(unit_chpl, call_tmp_chpl, _ln_chpl, _fn_chpl);
#line 80 "Time.chpl"
  return call_tmp_chpl2;
#line 80 "Time.chpl"
}

#line 80 "Time.chpl"
/* Time.chpl:217 */
#line 80 "Time.chpl"
static _real64 _convert_microseconds_chpl(TimeUnits_chpl unit_chpl, _real64 us_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 80 "Time.chpl"
  _real64 ret_chpl;
#line 80 "Time.chpl"
  int64_t call_tmp_chpl;
#line 80 "Time.chpl"
  int64_t call_tmp_chpl2;
#line 80 "Time.chpl"
  chpl_bool call_tmp_chpl3;
#line 80 "Time.chpl"
  int64_t call_tmp_chpl4;
#line 80 "Time.chpl"
  int64_t call_tmp_chpl5;
#line 80 "Time.chpl"
  chpl_bool call_tmp_chpl6;
#line 80 "Time.chpl"
  _real64 call_tmp_chpl7;
#line 80 "Time.chpl"
  int64_t call_tmp_chpl8;
#line 80 "Time.chpl"
  int64_t call_tmp_chpl9;
#line 80 "Time.chpl"
  chpl_bool call_tmp_chpl10;
#line 80 "Time.chpl"
  _real64 call_tmp_chpl11;
#line 80 "Time.chpl"
  int64_t call_tmp_chpl12;
#line 80 "Time.chpl"
  int64_t call_tmp_chpl13;
#line 80 "Time.chpl"
  chpl_bool call_tmp_chpl14;
#line 80 "Time.chpl"
  _real64 call_tmp_chpl15;
#line 80 "Time.chpl"
  int64_t call_tmp_chpl16;
#line 80 "Time.chpl"
  int64_t call_tmp_chpl17;
#line 80 "Time.chpl"
  chpl_bool call_tmp_chpl18;
#line 80 "Time.chpl"
  _real64 call_tmp_chpl19;
#line 80 "Time.chpl"
  _real64 call_tmp_chpl20;
#line 218 "Time.chpl"
  call_tmp_chpl = ((int64_t)(unit_chpl));
#line 219 "Time.chpl"
  call_tmp_chpl2 = ((int64_t)(TimeUnits_chpl_microseconds_chpl));
#line 218 "Time.chpl"
  call_tmp_chpl3 = (call_tmp_chpl == call_tmp_chpl2);
#line 218 "Time.chpl"
  if (call_tmp_chpl3) /* ZLINE: 219 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Time.chpl */
#line 218 "Time.chpl"
  {
#line 219 "Time.chpl"
    ret_chpl = us_chpl;
#line 219 "Time.chpl"
    goto _end__convert_microseconds_chpl;
#line 219 "Time.chpl"
  } else /* ZLINE: 218 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Time.chpl */
#line 219 "Time.chpl"
  {
#line 218 "Time.chpl"
    call_tmp_chpl4 = ((int64_t)(unit_chpl));
#line 220 "Time.chpl"
    call_tmp_chpl5 = ((int64_t)(TimeUnits_chpl_milliseconds_chpl));
#line 218 "Time.chpl"
    call_tmp_chpl6 = (call_tmp_chpl4 == call_tmp_chpl5);
#line 218 "Time.chpl"
    if (call_tmp_chpl6) /* ZLINE: 220 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Time.chpl */
#line 218 "Time.chpl"
    {
#line 220 "Time.chpl"
      call_tmp_chpl7 = (us_chpl / 1.0e+3);
#line 220 "Time.chpl"
      ret_chpl = call_tmp_chpl7;
#line 220 "Time.chpl"
      goto _end__convert_microseconds_chpl;
#line 220 "Time.chpl"
    } else /* ZLINE: 218 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Time.chpl */
#line 220 "Time.chpl"
    {
#line 218 "Time.chpl"
      call_tmp_chpl8 = ((int64_t)(unit_chpl));
#line 221 "Time.chpl"
      call_tmp_chpl9 = ((int64_t)(TimeUnits_chpl_seconds_chpl));
#line 218 "Time.chpl"
      call_tmp_chpl10 = (call_tmp_chpl8 == call_tmp_chpl9);
#line 218 "Time.chpl"
      if (call_tmp_chpl10) /* ZLINE: 221 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Time.chpl */
#line 218 "Time.chpl"
      {
#line 221 "Time.chpl"
        call_tmp_chpl11 = (us_chpl / 1.0e+6);
#line 221 "Time.chpl"
        ret_chpl = call_tmp_chpl11;
#line 221 "Time.chpl"
        goto _end__convert_microseconds_chpl;
#line 221 "Time.chpl"
      } else /* ZLINE: 218 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Time.chpl */
#line 221 "Time.chpl"
      {
#line 218 "Time.chpl"
        call_tmp_chpl12 = ((int64_t)(unit_chpl));
#line 222 "Time.chpl"
        call_tmp_chpl13 = ((int64_t)(TimeUnits_chpl_minutes_chpl));
#line 218 "Time.chpl"
        call_tmp_chpl14 = (call_tmp_chpl12 == call_tmp_chpl13);
#line 218 "Time.chpl"
        if (call_tmp_chpl14) /* ZLINE: 222 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Time.chpl */
#line 218 "Time.chpl"
        {
#line 222 "Time.chpl"
          call_tmp_chpl15 = (us_chpl / 60.0e+6);
#line 222 "Time.chpl"
          ret_chpl = call_tmp_chpl15;
#line 222 "Time.chpl"
          goto _end__convert_microseconds_chpl;
#line 222 "Time.chpl"
        } else /* ZLINE: 218 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Time.chpl */
#line 222 "Time.chpl"
        {
#line 218 "Time.chpl"
          call_tmp_chpl16 = ((int64_t)(unit_chpl));
#line 223 "Time.chpl"
          call_tmp_chpl17 = ((int64_t)(TimeUnits_chpl_hours_chpl));
#line 218 "Time.chpl"
          call_tmp_chpl18 = (call_tmp_chpl16 == call_tmp_chpl17);
#line 218 "Time.chpl"
          if (call_tmp_chpl18) /* ZLINE: 223 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Time.chpl */
#line 218 "Time.chpl"
          {
#line 223 "Time.chpl"
            call_tmp_chpl19 = (us_chpl / 3600.0e+6);
#line 223 "Time.chpl"
            ret_chpl = call_tmp_chpl19;
#line 223 "Time.chpl"
            goto _end__convert_microseconds_chpl;
#line 223 "Time.chpl"
          }
#line 223 "Time.chpl"
        }
#line 223 "Time.chpl"
      }
#line 223 "Time.chpl"
    }
#line 223 "Time.chpl"
  }
#line 226 "Time.chpl"
  halt("internal error in module Time", _ln_chpl, _fn_chpl);
#line 229 "Time.chpl"
  call_tmp_chpl20 = (-1.0);
#line 229 "Time.chpl"
  ret_chpl = call_tmp_chpl20;
#line 229 "Time.chpl"
  _end__convert_microseconds_chpl:;
#line 217 "Time.chpl"
  return ret_chpl;
#line 217 "Time.chpl"
}


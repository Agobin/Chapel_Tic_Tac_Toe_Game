/* Random.chpl:84 */
static void chpl__init_Random(int64_t _ln_chpl, c_string _fn_chpl) {
  c_string modFormatStr_chpl;
  c_string modStr_chpl;
  _ref_int32_t refIndentLevel_chpl = NULL;
  SeedGenerators_chpl this_chpl;
  SeedGenerators_chpl wrap_call_tmp_chpl;
  _real64 call_tmp_chpl;
  _real64 call_tmp_chpl2;
  _real64 call_tmp_chpl3;
  _real64 call_tmp_chpl4;
  _real64 call_tmp_chpl5;
  _real64 call_tmp_chpl6;
  _real64 call_tmp_chpl7;
  _real64 call_tmp_chpl8;
#line 84 "Random.chpl"
  if (chpl__init_Random_p) /* ZLINE: 84 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl */
#line 84 "Random.chpl"
  {
#line 84 "Random.chpl"
    goto _exit_chpl__init_Random_chpl;
#line 84 "Random.chpl"
  }
#line 84 "Random.chpl"
  modFormatStr_chpl = "%*s\n";
#line 84 "Random.chpl"
  modStr_chpl = "Random";
#line 84 "Random.chpl"
  printModuleInit(modFormatStr_chpl, modStr_chpl, INT64(6), _ln_chpl, _fn_chpl);
#line 84 "Random.chpl"
  refIndentLevel_chpl = &moduleInitLevel;
#line 84 "Random.chpl"
  *(refIndentLevel_chpl) += INT64(1);
#line 84 "Random.chpl"
  chpl__init_Random_p = true;
#line 84 "Random.chpl"
  {
#line 84 "Random.chpl"
    chpl__init_Time(_ln_chpl, _fn_chpl);
#line 84 "Random.chpl"
  }
#line 108 "Random.chpl"
  wrap_call_tmp_chpl = _construct_SeedGenerators_chpl(&this_chpl);
#line 108 "Random.chpl"
  SeedGenerator_chpl = wrap_call_tmp_chpl;
#line 376 "Random.chpl"
  call_tmp_chpl = ((_real64)(INT64(23)));
#line 376 "Random.chpl"
  call_tmp_chpl2 = pow(0.5, call_tmp_chpl);
#line 376 "Random.chpl"
  r23_chpl = call_tmp_chpl2;
#line 377 "Random.chpl"
  call_tmp_chpl3 = ((_real64)(INT64(23)));
#line 377 "Random.chpl"
  call_tmp_chpl4 = pow(2.0, call_tmp_chpl3);
#line 377 "Random.chpl"
  t23_chpl = call_tmp_chpl4;
#line 378 "Random.chpl"
  call_tmp_chpl5 = ((_real64)(INT64(46)));
#line 378 "Random.chpl"
  call_tmp_chpl6 = pow(0.5, call_tmp_chpl5);
#line 378 "Random.chpl"
  r46_chpl = call_tmp_chpl6;
#line 379 "Random.chpl"
  call_tmp_chpl7 = ((_real64)(INT64(46)));
#line 379 "Random.chpl"
  call_tmp_chpl8 = pow(2.0, call_tmp_chpl7);
#line 379 "Random.chpl"
  t46_chpl = call_tmp_chpl8;
#line 380 "Random.chpl"
  arand_chpl = 1220703125.0;
#line 84 "Random.chpl"
  *(refIndentLevel_chpl) -= INT64(1);
#line 84 "Random.chpl"
  _exit_chpl__init_Random_chpl:;
#line 84 "Random.chpl"
  return;
#line 84 "Random.chpl"
}

#line 84 "Random.chpl"
/* Random.chpl:125 */
#line 84 "Random.chpl"
static SeedGenerators_chpl _construct_SeedGenerators_chpl(SeedGenerators_chpl* const meme_chpl) {
#line 84 "Random.chpl"
  SeedGenerators_chpl this_chpl;
#line 125 "Random.chpl"
  return *(meme_chpl);
#line 125 "Random.chpl"
}


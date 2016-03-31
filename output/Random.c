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

#line 125 "Random.chpl"
/* Random.chpl:131 */
#line 125 "Random.chpl"
static int64_t currentTime_chpl(_ref_SeedGenerators this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 125 "Random.chpl"
  _real64 call_tmp_chpl;
#line 125 "Random.chpl"
  int64_t call_tmp_chpl2;
#line 125 "Random.chpl"
  int64_t tmp_chpl;
#line 125 "Random.chpl"
  int64_t call_tmp_chpl3;
#line 125 "Random.chpl"
  chpl_bool call_tmp_chpl4;
#line 125 "Random.chpl"
  int64_t call_tmp_chpl5;
#line 125 "Random.chpl"
  int64_t call_tmp_chpl6;
#line 133 "Random.chpl"
  call_tmp_chpl = getCurrentTime_chpl(TimeUnits_chpl_microseconds_chpl, _ln_chpl, _fn_chpl);
#line 133 "Random.chpl"
  call_tmp_chpl2 = ((int64_t)(call_tmp_chpl));
#line 134 "Random.chpl"
  call_tmp_chpl3 = (call_tmp_chpl2 % INT64(2));
#line 134 "Random.chpl"
  call_tmp_chpl4 = (call_tmp_chpl3 == INT64(0));
#line 134 "Random.chpl"
  if (call_tmp_chpl4) /* ZLINE: 134 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl */
#line 134 "Random.chpl"
  {
#line 134 "Random.chpl"
    call_tmp_chpl5 = (call_tmp_chpl2 + INT64(1));
#line 134 "Random.chpl"
    tmp_chpl = call_tmp_chpl5;
#line 134 "Random.chpl"
  } else /* ZLINE: 134 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl */
#line 134 "Random.chpl"
  {
#line 134 "Random.chpl"
    tmp_chpl = call_tmp_chpl2;
#line 134 "Random.chpl"
  }
#line 134 "Random.chpl"
  call_tmp_chpl6 = (tmp_chpl % INT64(70368744177664));
#line 131 "Random.chpl"
  return call_tmp_chpl6;
#line 131 "Random.chpl"
}

#line 131 "Random.chpl"
/* Random.chpl:187 */
#line 131 "Random.chpl"
static RandomStream__real64_T_chpl _construct_RandomStream_chpl(int64_t seed_chpl, _syncvar_chpl_bool RandomStreamPrivate_lock_DOLLAR__chpl, _real64 RandomStreamPrivate_cursor_chpl, int64_t RandomStreamPrivate_count_chpl, RandomStream__real64_T_chpl meme_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 131 "Random.chpl"
  RandomStream__real64_T_chpl this_chpl = NULL;
#line 131 "Random.chpl"
  object tmp_chpl = NULL;
#line 187 "Random.chpl"
  this_chpl = meme_chpl;
#line 187 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(187), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 187 "Random.chpl"
  tmp_chpl = &((this_chpl)->super_chpl);
#line 187 "Random.chpl"
  _construct_object(tmp_chpl);
#line 209 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(209), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 209 "Random.chpl"
  (this_chpl)->seed_chpl = seed_chpl;
#line 358 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(358), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 358 "Random.chpl"
  (this_chpl)->RandomStreamPrivate_lock_DOLLAR__chpl = RandomStreamPrivate_lock_DOLLAR__chpl;
#line 360 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(360), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 360 "Random.chpl"
  (this_chpl)->RandomStreamPrivate_cursor_chpl = RandomStreamPrivate_cursor_chpl;
#line 362 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(362), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 362 "Random.chpl"
  (this_chpl)->RandomStreamPrivate_count_chpl = RandomStreamPrivate_count_chpl;
#line 187 "Random.chpl"
  return this_chpl;
#line 187 "Random.chpl"
}

#line 187 "Random.chpl"
/* Random.chpl:187 */
#line 187 "Random.chpl"
static void chpl__auto_destroy_RandomStream(RandomStream__real64_T_chpl this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 187 "Random.chpl"
  return;
#line 187 "Random.chpl"
}

#line 187 "Random.chpl"
/* Random.chpl:226 */
#line 187 "Random.chpl"
static RandomStream__real64_T_chpl RandomStream_chpl(int64_t seed_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 187 "Random.chpl"
  RandomStream__real64_T_chpl this_chpl = NULL;
#line 187 "Random.chpl"
  RandomStream__real64_T_chpl this_chpl2 = NULL;
#line 187 "Random.chpl"
  int64_t call_tmp_chpl;
#line 187 "Random.chpl"
  chpl_opaque cast_tmp_chpl;
#line 187 "Random.chpl"
  _syncvar_chpl_bool wrap_call_tmp_chpl = NULL;
#line 187 "Random.chpl"
  _real64 call_tmp_chpl2;
#line 187 "Random.chpl"
  RandomStream__real64_T_chpl wrap_call_tmp_chpl2 = NULL;
#line 187 "Random.chpl"
  int64_t call_tmp_chpl3;
#line 187 "Random.chpl"
  chpl_bool call_tmp_chpl4;
#line 187 "Random.chpl"
  chpl_bool tmp_chpl;
#line 187 "Random.chpl"
  chpl_bool call_tmp_chpl5;
#line 187 "Random.chpl"
  chpl_bool tmp_chpl2;
#line 187 "Random.chpl"
  chpl_bool call_tmp_chpl6;
#line 187 "Random.chpl"
  _ref_int64_t call_tmp_chpl7 = NULL;
#line 187 "Random.chpl"
  _ref__real64 call_tmp_chpl8 = NULL;
#line 187 "Random.chpl"
  _real64 call_tmp_chpl9;
#line 187 "Random.chpl"
  _ref_int64_t call_tmp_chpl10 = NULL;
#line 226 "Random.chpl"
  call_tmp_chpl = sizeof(chpl_RandomStream__real64_T_chpl_object);
#line 226 "Random.chpl"
  cast_tmp_chpl = chpl_here_alloc(call_tmp_chpl, INT16(36), _ln_chpl, _fn_chpl);
#line 226 "Random.chpl"
  this_chpl2 = ((RandomStream__real64_T_chpl)(cast_tmp_chpl));
#line 226 "Random.chpl"
  ((object)(this_chpl2))->chpl__cid = chpl__cid_RandomStream__real64_T_chpl;
#line 226 "Random.chpl"
  chpl_check_nil(this_chpl2, INT64(226), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 226 "Random.chpl"
  (this_chpl2)->seed_chpl = INT64(0);
#line 226 "Random.chpl"
  chpl_check_nil(this_chpl2, INT64(226), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 226 "Random.chpl"
  (this_chpl2)->RandomStreamPrivate_cursor_chpl = 0.0;
#line 226 "Random.chpl"
  chpl_check_nil(this_chpl2, INT64(226), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 226 "Random.chpl"
  (this_chpl2)->RandomStreamPrivate_count_chpl = INT64(0);
#line 226 "Random.chpl"
  chpl_check_nil(this_chpl2, INT64(226), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 226 "Random.chpl"
  (this_chpl2)->seed_chpl = INT64(0);
#line 226 "Random.chpl"
  wrap_call_tmp_chpl = _construct__syncvar(false, _ln_chpl, _fn_chpl);
#line 226 "Random.chpl"
  chpl_check_nil(this_chpl2, INT64(226), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 226 "Random.chpl"
  (this_chpl2)->RandomStreamPrivate_lock_DOLLAR__chpl = wrap_call_tmp_chpl;
#line 226 "Random.chpl"
  call_tmp_chpl2 = ((_real64)(INT64(0)));
#line 226 "Random.chpl"
  chpl_check_nil(this_chpl2, INT64(226), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 226 "Random.chpl"
  (this_chpl2)->RandomStreamPrivate_cursor_chpl = call_tmp_chpl2;
#line 226 "Random.chpl"
  chpl_check_nil(this_chpl2, INT64(226), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 226 "Random.chpl"
  (this_chpl2)->RandomStreamPrivate_count_chpl = INT64(1);
#line 226 "Random.chpl"
  wrap_call_tmp_chpl2 = _construct_RandomStream_chpl(INT64(0), wrap_call_tmp_chpl, call_tmp_chpl2, INT64(1), this_chpl2, _ln_chpl, _fn_chpl);
#line 226 "Random.chpl"
  this_chpl = wrap_call_tmp_chpl2;
#line 229 "Random.chpl"
  call_tmp_chpl3 = (seed_chpl % INT64(2));
#line 229 "Random.chpl"
  call_tmp_chpl4 = (call_tmp_chpl3 == INT64(0));
#line 229 "Random.chpl"
  if (call_tmp_chpl4) /* ZLINE: 229 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl */
#line 229 "Random.chpl"
  {
#line 229 "Random.chpl"
    tmp_chpl = true;
#line 229 "Random.chpl"
  } else /* ZLINE: 229 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl */
#line 229 "Random.chpl"
  {
#line 229 "Random.chpl"
    call_tmp_chpl5 = (seed_chpl < INT64(1));
#line 229 "Random.chpl"
    tmp_chpl = call_tmp_chpl5;
#line 229 "Random.chpl"
  }
#line 229 "Random.chpl"
  if (tmp_chpl) /* ZLINE: 229 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl */
#line 229 "Random.chpl"
  {
#line 229 "Random.chpl"
    tmp_chpl2 = true;
#line 229 "Random.chpl"
  } else /* ZLINE: 229 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl */
#line 229 "Random.chpl"
  {
#line 229 "Random.chpl"
    call_tmp_chpl6 = (seed_chpl > INT64(70368744177664));
#line 229 "Random.chpl"
    tmp_chpl2 = call_tmp_chpl6;
#line 229 "Random.chpl"
  }
#line 229 "Random.chpl"
  if (tmp_chpl2) /* ZLINE: 229 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl */
#line 229 "Random.chpl"
  {
#line 230 "Random.chpl"
    halt("RandomStream seed must be an odd integer between 0 and 2**46", _ln_chpl, _fn_chpl);
#line 230 "Random.chpl"
  }
#line 231 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(231), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 231 "Random.chpl"
  call_tmp_chpl7 = &((this_chpl)->seed_chpl);
#line 231 "Random.chpl"
  *(call_tmp_chpl7) = seed_chpl;
#line 232 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(232), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 232 "Random.chpl"
  call_tmp_chpl8 = &((this_chpl)->RandomStreamPrivate_cursor_chpl);
#line 232 "Random.chpl"
  call_tmp_chpl9 = ((_real64)(seed_chpl));
#line 232 "Random.chpl"
  *(call_tmp_chpl8) = call_tmp_chpl9;
#line 233 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(233), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 233 "Random.chpl"
  call_tmp_chpl10 = &((this_chpl)->RandomStreamPrivate_count_chpl);
#line 233 "Random.chpl"
  *(call_tmp_chpl10) = INT64(1);
#line 226 "Random.chpl"
  return this_chpl;
#line 226 "Random.chpl"
}

#line 226 "Random.chpl"
/* Random.chpl:237 */
#line 226 "Random.chpl"
static _real64 RandomStreamPrivate_getNext_noLock_chpl(RandomStream__real64_T_chpl this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 226 "Random.chpl"
  _ref_int64_t call_tmp_chpl = NULL;
#line 226 "Random.chpl"
  _ref__real64 call_tmp_chpl2 = NULL;
#line 226 "Random.chpl"
  _real64 call_tmp_chpl3;
#line 241 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(241), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 241 "Random.chpl"
  call_tmp_chpl = &((this_chpl)->RandomStreamPrivate_count_chpl);
#line 241 "Random.chpl"
  *(call_tmp_chpl) += INT64(1);
#line 243 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(243), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 243 "Random.chpl"
  call_tmp_chpl2 = &((this_chpl)->RandomStreamPrivate_cursor_chpl);
#line 243 "Random.chpl"
  call_tmp_chpl3 = randlc_chpl2(call_tmp_chpl2, _ln_chpl, _fn_chpl);
#line 237 "Random.chpl"
  return call_tmp_chpl3;
#line 237 "Random.chpl"
}

#line 237 "Random.chpl"
/* Random.chpl:258 */
#line 237 "Random.chpl"
static _real64 getNext_chpl(RandomStream__real64_T_chpl this_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 237 "Random.chpl"
  _ref__syncvar_chpl_bool call_tmp_chpl = NULL;
#line 237 "Random.chpl"
  _real64 call_tmp_chpl2;
#line 237 "Random.chpl"
  _syncvar_chpl_bool ret_chpl = NULL;
#line 260 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(260), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 260 "Random.chpl"
  call_tmp_chpl = &((this_chpl)->RandomStreamPrivate_lock_DOLLAR__chpl);
#line 260 "Random.chpl"
  chpl___ASSIGN_2(call_tmp_chpl, true, _ln_chpl, _fn_chpl);
#line 261 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(261), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 261 "Random.chpl"
  call_tmp_chpl2 = RandomStreamPrivate_getNext_noLock_chpl(this_chpl, _ln_chpl, _fn_chpl);
#line 263 "Random.chpl"
  chpl_check_nil(this_chpl, INT64(263), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 263 "Random.chpl"
  ret_chpl = (this_chpl)->RandomStreamPrivate_lock_DOLLAR__chpl;
#line 263 "Random.chpl"
  chpl_check_nil(ret_chpl, INT64(263), "/home/agobin/Documents/GitHub/chapel-1.12.0/modules/standard/Random.chpl");
#line 263 "Random.chpl"
  readFE(ret_chpl, _ln_chpl, _fn_chpl);
#line 258 "Random.chpl"
  return call_tmp_chpl2;
#line 258 "Random.chpl"
}

#line 258 "Random.chpl"
/* Random.chpl:387 */
#line 258 "Random.chpl"
static _real64 randlc_chpl(_ref__real64 x_chpl, _real64 a_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 258 "Random.chpl"
  _real64 local_t46_chpl;
#line 258 "Random.chpl"
  _real64 local_r46_chpl;
#line 258 "Random.chpl"
  _real64 local_t23_chpl;
#line 258 "Random.chpl"
  _real64 local_r23_chpl;
#line 258 "Random.chpl"
  _real64 coerce_tmp_chpl;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl2;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl3;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl4;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl5;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl6;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl7;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl8;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl9;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl10;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl11;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl12;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl13;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl14;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl15;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl16;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl17;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl18;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl19;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl20;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl21;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl22;
#line 258 "Random.chpl"
  _real64 call_tmp_chpl23;
#line 399 "Random.chpl"
  local_t46_chpl = t46_chpl;
#line 398 "Random.chpl"
  local_r46_chpl = r46_chpl;
#line 390 "Random.chpl"
  local_t23_chpl = t23_chpl;
#line 388 "Random.chpl"
  local_r23_chpl = r23_chpl;
#line 387 "Random.chpl"
  coerce_tmp_chpl = *(x_chpl);
#line 388 "Random.chpl"
  call_tmp_chpl = (local_r23_chpl * a_chpl);
#line 389 "Random.chpl"
  call_tmp_chpl2 = floor(call_tmp_chpl);
#line 390 "Random.chpl"
  call_tmp_chpl3 = (local_t23_chpl * call_tmp_chpl2);
#line 390 "Random.chpl"
  call_tmp_chpl4 = (a_chpl - call_tmp_chpl3);
#line 391 "Random.chpl"
  call_tmp_chpl5 = (local_r23_chpl * coerce_tmp_chpl);
#line 392 "Random.chpl"
  call_tmp_chpl6 = floor(call_tmp_chpl5);
#line 393 "Random.chpl"
  call_tmp_chpl7 = (local_t23_chpl * call_tmp_chpl6);
#line 393 "Random.chpl"
  call_tmp_chpl8 = (coerce_tmp_chpl - call_tmp_chpl7);
#line 394 "Random.chpl"
  call_tmp_chpl9 = (call_tmp_chpl2 * call_tmp_chpl8);
#line 394 "Random.chpl"
  call_tmp_chpl10 = (call_tmp_chpl4 * call_tmp_chpl6);
#line 394 "Random.chpl"
  call_tmp_chpl11 = (call_tmp_chpl9 + call_tmp_chpl10);
#line 395 "Random.chpl"
  call_tmp_chpl12 = (local_r23_chpl * call_tmp_chpl11);
#line 395 "Random.chpl"
  call_tmp_chpl13 = floor(call_tmp_chpl12);
#line 396 "Random.chpl"
  call_tmp_chpl14 = (local_t23_chpl * call_tmp_chpl13);
#line 396 "Random.chpl"
  call_tmp_chpl15 = (call_tmp_chpl11 - call_tmp_chpl14);
#line 397 "Random.chpl"
  call_tmp_chpl16 = (local_t23_chpl * call_tmp_chpl15);
#line 397 "Random.chpl"
  call_tmp_chpl17 = (call_tmp_chpl4 * call_tmp_chpl8);
#line 397 "Random.chpl"
  call_tmp_chpl18 = (call_tmp_chpl16 + call_tmp_chpl17);
#line 398 "Random.chpl"
  call_tmp_chpl19 = (local_r46_chpl * call_tmp_chpl18);
#line 398 "Random.chpl"
  call_tmp_chpl20 = floor(call_tmp_chpl19);
#line 399 "Random.chpl"
  call_tmp_chpl21 = (local_t46_chpl * call_tmp_chpl20);
#line 399 "Random.chpl"
  call_tmp_chpl22 = (call_tmp_chpl18 - call_tmp_chpl21);
#line 401 "Random.chpl"
  call_tmp_chpl23 = (local_r46_chpl * call_tmp_chpl22);
#line 387 "Random.chpl"
  *(x_chpl) = call_tmp_chpl22;
#line 387 "Random.chpl"
  return call_tmp_chpl23;
#line 387 "Random.chpl"
}

#line 387 "Random.chpl"
/* Random.chpl:405 */
#line 387 "Random.chpl"
static _real64 randlc_chpl2(_ref__real64 x_chpl, int64_t _ln_chpl, c_string _fn_chpl) {
#line 387 "Random.chpl"
  _real64 local_arand_chpl;
#line 387 "Random.chpl"
  _real64 _formal_tmp_x_chpl;
#line 387 "Random.chpl"
  _real64 coerce_tmp_chpl;
#line 387 "Random.chpl"
  _ref__real64 _ref_tmp__chpl = NULL;
#line 387 "Random.chpl"
  _real64 default_arga_chpl;
#line 387 "Random.chpl"
  _real64 wrap_call_tmp_chpl;
#line 415 "Random.chpl"
  local_arand_chpl = arand_chpl;
#line 405 "Random.chpl"
  coerce_tmp_chpl = *(x_chpl);
#line 405 "Random.chpl"
  _formal_tmp_x_chpl = coerce_tmp_chpl;
#line 415 "Random.chpl"
  _ref_tmp__chpl = &_formal_tmp_x_chpl;
#line 415 "Random.chpl"
  default_arga_chpl = local_arand_chpl;
#line 415 "Random.chpl"
  wrap_call_tmp_chpl = randlc_chpl(_ref_tmp__chpl, default_arga_chpl, _ln_chpl, _fn_chpl);
#line 405 "Random.chpl"
  *(x_chpl) = _formal_tmp_x_chpl;
#line 405 "Random.chpl"
  return wrap_call_tmp_chpl;
#line 405 "Random.chpl"
}


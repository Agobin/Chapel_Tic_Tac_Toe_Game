/* ttt.chpl:22 */
static int64_t defend_chpl(DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl2, DefaultRectangularArr_int64_t_1_int64_t_F moves_chpl) {
  int64_t ret_chpl;
  int64_t position_chpl;
  _tuple_1_star_int64_t i_chpl;
  _tuple_1_star_int64_t this_chpl;
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl = NULL;
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl2 = NULL;
  DefaultRectangularDom_1_int64_t_F ret_chpl3 = NULL;
  chpl_bool call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  chpl_string call_tmp_chpl4;
  int64_t sum_chpl;
  int64_t ret_x1_chpl;
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
  int64_t coerce_tmp_chpl;
  int64_t call_tmp_chpl5;
  _ddata_int64_t ret_chpl4 = NULL;
  _ddata_int64_t coerce_tmp_chpl2 = NULL;
  int64_t ret_chpl5;
  _ref_int64_t call_tmp_chpl6 = NULL;
  chpl_bool call_tmp_chpl7;
  int64_t call_tmp_chpl8;
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl2;
  _tuple_1_star_int64_t i_chpl3;
  _tuple_1_star_int64_t this_chpl2;
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl9 = NULL;
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl6 = NULL;
  DefaultRectangularDom_1_int64_t_F ret_chpl7 = NULL;
  chpl_bool call_tmp_chpl10;
  chpl_bool call_tmp_chpl11;
  chpl_string call_tmp_chpl12;
  int64_t sum_chpl2;
  int64_t ret_x1_chpl2;
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
  int64_t coerce_tmp_chpl3;
  int64_t call_tmp_chpl13;
  _ddata_int64_t ret_chpl8 = NULL;
  _ddata_int64_t coerce_tmp_chpl4 = NULL;
  int64_t ret_chpl9;
  _ref_int64_t call_tmp_chpl14 = NULL;
  int64_t call_tmp_chpl15;
  chpl_bool call_tmp_chpl16;
  _tuple_1_star_int64_t i_chpl4;
  _tuple_1_star_int64_t this_chpl3;
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl17 = NULL;
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl10 = NULL;
  DefaultRectangularDom_1_int64_t_F ret_chpl11 = NULL;
  chpl_bool call_tmp_chpl18;
  chpl_bool call_tmp_chpl19;
  chpl_string call_tmp_chpl20;
  int64_t sum_chpl3;
  int64_t ret_x1_chpl3;
  _ref__tuple_1_star_int64_t ret__chpl3 = NULL;
  int64_t coerce_tmp_chpl5;
  int64_t call_tmp_chpl21;
  _ddata_int64_t ret_chpl12 = NULL;
  _ddata_int64_t coerce_tmp_chpl6 = NULL;
  int64_t ret_chpl13;
  _ref_int64_t call_tmp_chpl22 = NULL;
#line 24 "ttt.chpl"
  position_chpl = INT64(0);
#line 28 "ttt.chpl"
  *(this_chpl + INT64(0)) = INT64(5);
#line 28 "ttt.chpl"
  *(i_chpl + INT64(0)) = *(this_chpl + INT64(0));
#line 28 "ttt.chpl"
  ret_chpl2 = boardMatrix_chpl2;
#line 28 "ttt.chpl"
  call_tmp_chpl = ret_chpl2;
#line 28 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl, INT64(28), "ttt.chpl");
#line 28 "ttt.chpl"
  ret_chpl3 = (call_tmp_chpl)->dom;
#line 28 "ttt.chpl"
  chpl_check_nil(ret_chpl3, INT64(28), "ttt.chpl");
#line 28 "ttt.chpl"
  call_tmp_chpl2 = dsiMember(ret_chpl3, &this_chpl, INT64(28), "ttt.chpl");
#line 28 "ttt.chpl"
  call_tmp_chpl3 = (! call_tmp_chpl2);
#line 28 "ttt.chpl"
  if (call_tmp_chpl3) /* ZLINE: 28 ttt.chpl */
#line 28 "ttt.chpl"
  {
#line 28 "ttt.chpl"
    string_from_c_string(&call_tmp_chpl4, "array index out of bounds: ", INT64(0), INT64(0), INT64(28), "ttt.chpl");
#line 28 "ttt.chpl"
    halt3(call_tmp_chpl4, &this_chpl, INT64(28), "ttt.chpl");
#line 28 "ttt.chpl"
  }
#line 28 "ttt.chpl"
  sum_chpl = INT64(0);
#line 28 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl, INT64(28), "ttt.chpl");
#line 28 "ttt.chpl"
  ret__chpl = &((call_tmp_chpl)->blk);
#line 28 "ttt.chpl"
  ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 28 "ttt.chpl"
  coerce_tmp_chpl = *(i_chpl + INT64(0));
#line 28 "ttt.chpl"
  call_tmp_chpl5 = (coerce_tmp_chpl * ret_x1_chpl);
#line 28 "ttt.chpl"
  sum_chpl += call_tmp_chpl5;
#line 28 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl, INT64(28), "ttt.chpl");
#line 28 "ttt.chpl"
  ret_chpl4 = (call_tmp_chpl)->shiftedData;
#line 28 "ttt.chpl"
  coerce_tmp_chpl2 = ret_chpl4;
#line 28 "ttt.chpl"
  call_tmp_chpl6 = (coerce_tmp_chpl2 + sum_chpl);
#line 28 "ttt.chpl"
  ret_chpl5 = *(call_tmp_chpl6);
#line 28 "ttt.chpl"
  call_tmp_chpl7 = (ret_chpl5 == INT64(0));
#line 28 "ttt.chpl"
  if (call_tmp_chpl7) /* ZLINE: 29 ttt.chpl */
#line 28 "ttt.chpl"
  {
#line 29 "ttt.chpl"
    ret_chpl = INT64(5);
#line 29 "ttt.chpl"
    goto _end_defend_chpl;
#line 29 "ttt.chpl"
  }
#line 33 "ttt.chpl"
  chpl_check_nil(moves_chpl, INT64(33), "ttt.chpl");
#line 33 "ttt.chpl"
  call_tmp_chpl8 = size(moves_chpl, INT64(33), "ttt.chpl");
#line 33 "ttt.chpl"
  _ic__F1_high_chpl = call_tmp_chpl8;
#line 33 "ttt.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), call_tmp_chpl8, INT64(1), INT64(1), call_tmp_chpl8, true, INT64(33), "ttt.chpl");
#line 36 "ttt.chpl"
  ret_chpl6 = moves_chpl;
#line 36 "ttt.chpl"
  call_tmp_chpl9 = ret_chpl6;
#line 33 "ttt.chpl"
  for (i_chpl2 = INT64(1); ((i_chpl2 <= _ic__F1_high_chpl)); i_chpl2 += INT64(1)) {
#line 36 "ttt.chpl"
    *(this_chpl2 + INT64(0)) = i_chpl2;
#line 36 "ttt.chpl"
    *(i_chpl3 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 36 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl9, INT64(36), "ttt.chpl");
#line 36 "ttt.chpl"
    ret_chpl7 = (call_tmp_chpl9)->dom;
#line 36 "ttt.chpl"
    chpl_check_nil(ret_chpl7, INT64(36), "ttt.chpl");
#line 36 "ttt.chpl"
    call_tmp_chpl10 = dsiMember(ret_chpl7, &this_chpl2, INT64(36), "ttt.chpl");
#line 36 "ttt.chpl"
    call_tmp_chpl11 = (! call_tmp_chpl10);
#line 36 "ttt.chpl"
    if (call_tmp_chpl11) /* ZLINE: 36 ttt.chpl */
#line 36 "ttt.chpl"
    {
#line 36 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl12, "array index out of bounds: ", INT64(0), INT64(0), INT64(36), "ttt.chpl");
#line 36 "ttt.chpl"
      halt3(call_tmp_chpl12, &this_chpl2, INT64(36), "ttt.chpl");
#line 36 "ttt.chpl"
    }
#line 36 "ttt.chpl"
    sum_chpl2 = INT64(0);
#line 36 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl9, INT64(36), "ttt.chpl");
#line 36 "ttt.chpl"
    ret__chpl2 = &((call_tmp_chpl9)->blk);
#line 36 "ttt.chpl"
    ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 36 "ttt.chpl"
    coerce_tmp_chpl3 = *(i_chpl3 + INT64(0));
#line 36 "ttt.chpl"
    call_tmp_chpl13 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 36 "ttt.chpl"
    sum_chpl2 += call_tmp_chpl13;
#line 36 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl9, INT64(36), "ttt.chpl");
#line 36 "ttt.chpl"
    ret_chpl8 = (call_tmp_chpl9)->shiftedData;
#line 36 "ttt.chpl"
    coerce_tmp_chpl4 = ret_chpl8;
#line 36 "ttt.chpl"
    call_tmp_chpl14 = (coerce_tmp_chpl4 + sum_chpl2);
#line 36 "ttt.chpl"
    ret_chpl9 = *(call_tmp_chpl14);
#line 36 "ttt.chpl"
    call_tmp_chpl15 = analyseBoard_chpl(boardMatrix_chpl2, INT64(1), ret_chpl9);
#line 37 "ttt.chpl"
    call_tmp_chpl16 = (call_tmp_chpl15 != INT64(0));
#line 37 "ttt.chpl"
    if (call_tmp_chpl16) /* ZLINE: 38 ttt.chpl */
#line 37 "ttt.chpl"
    {
#line 38 "ttt.chpl"
      *(this_chpl3 + INT64(0)) = i_chpl2;
#line 38 "ttt.chpl"
      *(i_chpl4 + INT64(0)) = *(this_chpl3 + INT64(0));
#line 38 "ttt.chpl"
      ret_chpl10 = moves_chpl;
#line 38 "ttt.chpl"
      call_tmp_chpl17 = ret_chpl10;
#line 38 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl17, INT64(38), "ttt.chpl");
#line 38 "ttt.chpl"
      ret_chpl11 = (call_tmp_chpl17)->dom;
#line 38 "ttt.chpl"
      chpl_check_nil(ret_chpl11, INT64(38), "ttt.chpl");
#line 38 "ttt.chpl"
      call_tmp_chpl18 = dsiMember(ret_chpl11, &this_chpl3, INT64(38), "ttt.chpl");
#line 38 "ttt.chpl"
      call_tmp_chpl19 = (! call_tmp_chpl18);
#line 38 "ttt.chpl"
      if (call_tmp_chpl19) /* ZLINE: 38 ttt.chpl */
#line 38 "ttt.chpl"
      {
#line 38 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl20, "array index out of bounds: ", INT64(0), INT64(0), INT64(38), "ttt.chpl");
#line 38 "ttt.chpl"
        halt3(call_tmp_chpl20, &this_chpl3, INT64(38), "ttt.chpl");
#line 38 "ttt.chpl"
      }
#line 38 "ttt.chpl"
      sum_chpl3 = INT64(0);
#line 38 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl17, INT64(38), "ttt.chpl");
#line 38 "ttt.chpl"
      ret__chpl3 = &((call_tmp_chpl17)->blk);
#line 38 "ttt.chpl"
      ret_x1_chpl3 = *(*(ret__chpl3) + INT64(0));
#line 38 "ttt.chpl"
      coerce_tmp_chpl5 = *(i_chpl4 + INT64(0));
#line 38 "ttt.chpl"
      call_tmp_chpl21 = (coerce_tmp_chpl5 * ret_x1_chpl3);
#line 38 "ttt.chpl"
      sum_chpl3 += call_tmp_chpl21;
#line 38 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl17, INT64(38), "ttt.chpl");
#line 38 "ttt.chpl"
      ret_chpl12 = (call_tmp_chpl17)->shiftedData;
#line 38 "ttt.chpl"
      coerce_tmp_chpl6 = ret_chpl12;
#line 38 "ttt.chpl"
      call_tmp_chpl22 = (coerce_tmp_chpl6 + sum_chpl3);
#line 38 "ttt.chpl"
      ret_chpl13 = *(call_tmp_chpl22);
#line 38 "ttt.chpl"
      position_chpl = ret_chpl13;
#line 39 "ttt.chpl"
      goto _breakLabel_chpl;
#line 39 "ttt.chpl"
    }
#line 39 "ttt.chpl"
  }
#line 39 "ttt.chpl"
  _breakLabel_chpl:;
#line 43 "ttt.chpl"
  ret_chpl = position_chpl;
#line 43 "ttt.chpl"
  _end_defend_chpl:;
#line 22 "ttt.chpl"
  return ret_chpl;
#line 22 "ttt.chpl"
}

#line 22 "ttt.chpl"
/* ttt.chpl:46 */
#line 22 "ttt.chpl"
static int64_t attack_chpl(DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl2, DefaultRectangularArr_int64_t_1_int64_t_F moves_chpl) {
#line 22 "ttt.chpl"
  int64_t position_chpl;
#line 22 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl;
#line 22 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl;
#line 22 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl = NULL;
#line 22 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl = NULL;
#line 22 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl2 = NULL;
#line 22 "ttt.chpl"
  chpl_bool call_tmp_chpl2;
#line 22 "ttt.chpl"
  chpl_bool call_tmp_chpl3;
#line 22 "ttt.chpl"
  chpl_string call_tmp_chpl4;
#line 22 "ttt.chpl"
  int64_t sum_chpl;
#line 22 "ttt.chpl"
  int64_t ret_x1_chpl;
#line 22 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
#line 22 "ttt.chpl"
  int64_t coerce_tmp_chpl;
#line 22 "ttt.chpl"
  int64_t call_tmp_chpl5;
#line 22 "ttt.chpl"
  _ddata_int64_t ret_chpl3 = NULL;
#line 22 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl2 = NULL;
#line 22 "ttt.chpl"
  int64_t ret_chpl4;
#line 22 "ttt.chpl"
  _ref_int64_t call_tmp_chpl6 = NULL;
#line 22 "ttt.chpl"
  int32_t call_tmp_chpl7;
#line 22 "ttt.chpl"
  int32_t call_tmp_chpl8;
#line 22 "ttt.chpl"
  int64_t call_tmp_chpl9;
#line 22 "ttt.chpl"
  int64_t _ic__F1_high_chpl;
#line 22 "ttt.chpl"
  int64_t i_chpl2;
#line 22 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl3;
#line 22 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl2;
#line 22 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl10 = NULL;
#line 22 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl5 = NULL;
#line 22 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl6 = NULL;
#line 22 "ttt.chpl"
  chpl_bool call_tmp_chpl11;
#line 22 "ttt.chpl"
  chpl_bool call_tmp_chpl12;
#line 22 "ttt.chpl"
  chpl_string call_tmp_chpl13;
#line 22 "ttt.chpl"
  int64_t sum_chpl2;
#line 22 "ttt.chpl"
  int64_t ret_x1_chpl2;
#line 22 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
#line 22 "ttt.chpl"
  int64_t coerce_tmp_chpl3;
#line 22 "ttt.chpl"
  int64_t call_tmp_chpl14;
#line 22 "ttt.chpl"
  _ddata_int64_t ret_chpl7 = NULL;
#line 22 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl4 = NULL;
#line 22 "ttt.chpl"
  int64_t ret_chpl8;
#line 22 "ttt.chpl"
  _ref_int64_t call_tmp_chpl15 = NULL;
#line 22 "ttt.chpl"
  int64_t call_tmp_chpl16;
#line 22 "ttt.chpl"
  chpl_bool call_tmp_chpl17;
#line 22 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl4;
#line 22 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl3;
#line 22 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl18 = NULL;
#line 22 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl9 = NULL;
#line 22 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl10 = NULL;
#line 22 "ttt.chpl"
  chpl_bool call_tmp_chpl19;
#line 22 "ttt.chpl"
  chpl_bool call_tmp_chpl20;
#line 22 "ttt.chpl"
  chpl_string call_tmp_chpl21;
#line 22 "ttt.chpl"
  int64_t sum_chpl3;
#line 22 "ttt.chpl"
  int64_t ret_x1_chpl3;
#line 22 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl3 = NULL;
#line 22 "ttt.chpl"
  int64_t coerce_tmp_chpl5;
#line 22 "ttt.chpl"
  int64_t call_tmp_chpl22;
#line 22 "ttt.chpl"
  _ddata_int64_t ret_chpl11 = NULL;
#line 22 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl6 = NULL;
#line 22 "ttt.chpl"
  int64_t ret_chpl12;
#line 22 "ttt.chpl"
  _ref_int64_t call_tmp_chpl23 = NULL;
#line 48 "ttt.chpl"
  *(this_chpl + INT64(0)) = INT64(1);
#line 48 "ttt.chpl"
  *(i_chpl + INT64(0)) = *(this_chpl + INT64(0));
#line 48 "ttt.chpl"
  ret_chpl = moves_chpl;
#line 48 "ttt.chpl"
  call_tmp_chpl = ret_chpl;
#line 48 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl, INT64(48), "ttt.chpl");
#line 48 "ttt.chpl"
  ret_chpl2 = (call_tmp_chpl)->dom;
#line 48 "ttt.chpl"
  chpl_check_nil(ret_chpl2, INT64(48), "ttt.chpl");
#line 48 "ttt.chpl"
  call_tmp_chpl2 = dsiMember(ret_chpl2, &this_chpl, INT64(48), "ttt.chpl");
#line 48 "ttt.chpl"
  call_tmp_chpl3 = (! call_tmp_chpl2);
#line 48 "ttt.chpl"
  if (call_tmp_chpl3) /* ZLINE: 48 ttt.chpl */
#line 48 "ttt.chpl"
  {
#line 48 "ttt.chpl"
    string_from_c_string(&call_tmp_chpl4, "array index out of bounds: ", INT64(0), INT64(0), INT64(48), "ttt.chpl");
#line 48 "ttt.chpl"
    halt3(call_tmp_chpl4, &this_chpl, INT64(48), "ttt.chpl");
#line 48 "ttt.chpl"
  }
#line 48 "ttt.chpl"
  sum_chpl = INT64(0);
#line 48 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl, INT64(48), "ttt.chpl");
#line 48 "ttt.chpl"
  ret__chpl = &((call_tmp_chpl)->blk);
#line 48 "ttt.chpl"
  ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 48 "ttt.chpl"
  coerce_tmp_chpl = *(i_chpl + INT64(0));
#line 48 "ttt.chpl"
  call_tmp_chpl5 = (coerce_tmp_chpl * ret_x1_chpl);
#line 48 "ttt.chpl"
  sum_chpl += call_tmp_chpl5;
#line 48 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl, INT64(48), "ttt.chpl");
#line 48 "ttt.chpl"
  ret_chpl3 = (call_tmp_chpl)->shiftedData;
#line 48 "ttt.chpl"
  coerce_tmp_chpl2 = ret_chpl3;
#line 48 "ttt.chpl"
  call_tmp_chpl6 = (coerce_tmp_chpl2 + sum_chpl);
#line 48 "ttt.chpl"
  ret_chpl4 = *(call_tmp_chpl6);
#line 48 "ttt.chpl"
  position_chpl = ret_chpl4;
#line 49 "ttt.chpl"
  call_tmp_chpl7 = ((int32_t)(INT64(300)));
#line 49 "ttt.chpl"
  call_tmp_chpl8 = ((int32_t)(INT64(100)));
#line 49 "ttt.chpl"
  showDialog_chpl("Attacked fxn called", "Attacked fxn called", call_tmp_chpl7, call_tmp_chpl8);
#line 52 "ttt.chpl"
  chpl_check_nil(moves_chpl, INT64(52), "ttt.chpl");
#line 52 "ttt.chpl"
  call_tmp_chpl9 = size(moves_chpl, INT64(52), "ttt.chpl");
#line 52 "ttt.chpl"
  _ic__F1_high_chpl = call_tmp_chpl9;
#line 52 "ttt.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), call_tmp_chpl9, INT64(1), INT64(1), call_tmp_chpl9, true, INT64(52), "ttt.chpl");
#line 55 "ttt.chpl"
  ret_chpl5 = moves_chpl;
#line 55 "ttt.chpl"
  call_tmp_chpl10 = ret_chpl5;
#line 52 "ttt.chpl"
  for (i_chpl2 = INT64(1); ((i_chpl2 <= _ic__F1_high_chpl)); i_chpl2 += INT64(1)) {
#line 55 "ttt.chpl"
    *(this_chpl2 + INT64(0)) = i_chpl2;
#line 55 "ttt.chpl"
    *(i_chpl3 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 55 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl10, INT64(55), "ttt.chpl");
#line 55 "ttt.chpl"
    ret_chpl6 = (call_tmp_chpl10)->dom;
#line 55 "ttt.chpl"
    chpl_check_nil(ret_chpl6, INT64(55), "ttt.chpl");
#line 55 "ttt.chpl"
    call_tmp_chpl11 = dsiMember(ret_chpl6, &this_chpl2, INT64(55), "ttt.chpl");
#line 55 "ttt.chpl"
    call_tmp_chpl12 = (! call_tmp_chpl11);
#line 55 "ttt.chpl"
    if (call_tmp_chpl12) /* ZLINE: 55 ttt.chpl */
#line 55 "ttt.chpl"
    {
#line 55 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl13, "array index out of bounds: ", INT64(0), INT64(0), INT64(55), "ttt.chpl");
#line 55 "ttt.chpl"
      halt3(call_tmp_chpl13, &this_chpl2, INT64(55), "ttt.chpl");
#line 55 "ttt.chpl"
    }
#line 55 "ttt.chpl"
    sum_chpl2 = INT64(0);
#line 55 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl10, INT64(55), "ttt.chpl");
#line 55 "ttt.chpl"
    ret__chpl2 = &((call_tmp_chpl10)->blk);
#line 55 "ttt.chpl"
    ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 55 "ttt.chpl"
    coerce_tmp_chpl3 = *(i_chpl3 + INT64(0));
#line 55 "ttt.chpl"
    call_tmp_chpl14 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 55 "ttt.chpl"
    sum_chpl2 += call_tmp_chpl14;
#line 55 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl10, INT64(55), "ttt.chpl");
#line 55 "ttt.chpl"
    ret_chpl7 = (call_tmp_chpl10)->shiftedData;
#line 55 "ttt.chpl"
    coerce_tmp_chpl4 = ret_chpl7;
#line 55 "ttt.chpl"
    call_tmp_chpl15 = (coerce_tmp_chpl4 + sum_chpl2);
#line 55 "ttt.chpl"
    ret_chpl8 = *(call_tmp_chpl15);
#line 55 "ttt.chpl"
    call_tmp_chpl16 = analyseBoard_chpl(boardMatrix_chpl2, INT64(2), ret_chpl8);
#line 56 "ttt.chpl"
    call_tmp_chpl17 = (call_tmp_chpl16 != INT64(0));
#line 56 "ttt.chpl"
    if (call_tmp_chpl17) /* ZLINE: 57 ttt.chpl */
#line 56 "ttt.chpl"
    {
#line 57 "ttt.chpl"
      *(this_chpl3 + INT64(0)) = i_chpl2;
#line 57 "ttt.chpl"
      *(i_chpl4 + INT64(0)) = *(this_chpl3 + INT64(0));
#line 57 "ttt.chpl"
      ret_chpl9 = moves_chpl;
#line 57 "ttt.chpl"
      call_tmp_chpl18 = ret_chpl9;
#line 57 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl18, INT64(57), "ttt.chpl");
#line 57 "ttt.chpl"
      ret_chpl10 = (call_tmp_chpl18)->dom;
#line 57 "ttt.chpl"
      chpl_check_nil(ret_chpl10, INT64(57), "ttt.chpl");
#line 57 "ttt.chpl"
      call_tmp_chpl19 = dsiMember(ret_chpl10, &this_chpl3, INT64(57), "ttt.chpl");
#line 57 "ttt.chpl"
      call_tmp_chpl20 = (! call_tmp_chpl19);
#line 57 "ttt.chpl"
      if (call_tmp_chpl20) /* ZLINE: 57 ttt.chpl */
#line 57 "ttt.chpl"
      {
#line 57 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl21, "array index out of bounds: ", INT64(0), INT64(0), INT64(57), "ttt.chpl");
#line 57 "ttt.chpl"
        halt3(call_tmp_chpl21, &this_chpl3, INT64(57), "ttt.chpl");
#line 57 "ttt.chpl"
      }
#line 57 "ttt.chpl"
      sum_chpl3 = INT64(0);
#line 57 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl18, INT64(57), "ttt.chpl");
#line 57 "ttt.chpl"
      ret__chpl3 = &((call_tmp_chpl18)->blk);
#line 57 "ttt.chpl"
      ret_x1_chpl3 = *(*(ret__chpl3) + INT64(0));
#line 57 "ttt.chpl"
      coerce_tmp_chpl5 = *(i_chpl4 + INT64(0));
#line 57 "ttt.chpl"
      call_tmp_chpl22 = (coerce_tmp_chpl5 * ret_x1_chpl3);
#line 57 "ttt.chpl"
      sum_chpl3 += call_tmp_chpl22;
#line 57 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl18, INT64(57), "ttt.chpl");
#line 57 "ttt.chpl"
      ret_chpl11 = (call_tmp_chpl18)->shiftedData;
#line 57 "ttt.chpl"
      coerce_tmp_chpl6 = ret_chpl11;
#line 57 "ttt.chpl"
      call_tmp_chpl23 = (coerce_tmp_chpl6 + sum_chpl3);
#line 57 "ttt.chpl"
      ret_chpl12 = *(call_tmp_chpl23);
#line 57 "ttt.chpl"
      position_chpl = ret_chpl12;
#line 58 "ttt.chpl"
      goto _breakLabel_chpl;
#line 58 "ttt.chpl"
    }
#line 58 "ttt.chpl"
  }
#line 58 "ttt.chpl"
  _breakLabel_chpl:;
#line 46 "ttt.chpl"
  return position_chpl;
#line 46 "ttt.chpl"
}

#line 46 "ttt.chpl"
/* ttt.chpl:64 */
#line 46 "ttt.chpl"
static int64_t computersMind_chpl(DefaultRectangularArr_int64_t_1_int64_t_F boardMatrix_chpl2) {
#line 46 "ttt.chpl"
  int64_t ret_chpl;
#line 46 "ttt.chpl"
  int64_t call_tmp_chpl;
#line 46 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F moves_chpl = NULL;
#line 46 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F type_tmp_chpl = NULL;
#line 46 "ttt.chpl"
  range_int64_t_bounded_F call_tmp_chpl2;
#line 46 "ttt.chpl"
  _ref_range_int64_t_bounded_F ret_to_arg_ref_tmp__chpl = NULL;
#line 46 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F call_tmp_chpl3 = NULL;
#line 46 "ttt.chpl"
  _ref_DefaultRectangularDom_1_int64_t_F ret_to_arg_ref_tmp__chpl2 = NULL;
#line 46 "ttt.chpl"
  chpl___RuntimeTypeInfo4 call_tmp_chpl4;
#line 46 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F _runtime_type_tmp__chpl = NULL;
#line 46 "ttt.chpl"
  _ref_DefaultRectangularArr_int64_t_1_int64_t_F ret_to_arg_ref_tmp__chpl3 = NULL;
#line 46 "ttt.chpl"
  int64_t counter_chpl;
#line 46 "ttt.chpl"
  int64_t _ic__F1_high_chpl;
#line 46 "ttt.chpl"
  int64_t i_chpl;
#line 46 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl2;
#line 46 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl;
#line 46 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl5 = NULL;
#line 46 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl2 = NULL;
#line 46 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl3 = NULL;
#line 46 "ttt.chpl"
  chpl_bool call_tmp_chpl6;
#line 46 "ttt.chpl"
  chpl_bool call_tmp_chpl7;
#line 46 "ttt.chpl"
  chpl_string call_tmp_chpl8;
#line 46 "ttt.chpl"
  int64_t sum_chpl;
#line 46 "ttt.chpl"
  int64_t ret_x1_chpl;
#line 46 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
#line 46 "ttt.chpl"
  int64_t coerce_tmp_chpl;
#line 46 "ttt.chpl"
  int64_t call_tmp_chpl9;
#line 46 "ttt.chpl"
  _ddata_int64_t ret_chpl4 = NULL;
#line 46 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl2 = NULL;
#line 46 "ttt.chpl"
  int64_t ret_chpl5;
#line 46 "ttt.chpl"
  _ref_int64_t call_tmp_chpl10 = NULL;
#line 46 "ttt.chpl"
  chpl_bool call_tmp_chpl11;
#line 46 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl3;
#line 46 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl2;
#line 46 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl12 = NULL;
#line 46 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl6 = NULL;
#line 46 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl7 = NULL;
#line 46 "ttt.chpl"
  chpl_bool call_tmp_chpl13;
#line 46 "ttt.chpl"
  chpl_bool call_tmp_chpl14;
#line 46 "ttt.chpl"
  chpl_string call_tmp_chpl15;
#line 46 "ttt.chpl"
  int64_t sum_chpl2;
#line 46 "ttt.chpl"
  int64_t ret_x1_chpl2;
#line 46 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
#line 46 "ttt.chpl"
  int64_t coerce_tmp_chpl3;
#line 46 "ttt.chpl"
  int64_t call_tmp_chpl16;
#line 46 "ttt.chpl"
  _ddata_int64_t ret_chpl8 = NULL;
#line 46 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl4 = NULL;
#line 46 "ttt.chpl"
  _ref_int64_t call_tmp_chpl17 = NULL;
#line 46 "ttt.chpl"
  int64_t call_tmp_chpl18;
#line 46 "ttt.chpl"
  chpl_bool call_tmp_chpl19;
#line 46 "ttt.chpl"
  int64_t call_tmp_chpl20;
#line 66 "ttt.chpl"
  call_tmp_chpl = (INT64(9) - playCounter_chpl);
#line 68 "ttt.chpl"
  ret_to_arg_ref_tmp__chpl = &call_tmp_chpl2;
#line 68 "ttt.chpl"
  chpl_build_bounded_range(INT64(1), call_tmp_chpl, ret_to_arg_ref_tmp__chpl, INT64(68), "ttt.chpl");
#line 68 "ttt.chpl"
  ret_to_arg_ref_tmp__chpl2 = &call_tmp_chpl3;
#line 68 "ttt.chpl"
  chpl__ensureDomainExpr2(&call_tmp_chpl2, ret_to_arg_ref_tmp__chpl2, INT64(68), "ttt.chpl");
#line 68 "ttt.chpl"
  call_tmp_chpl4 = chpl__buildArrayRuntimeType4(call_tmp_chpl3, INT64(68), "ttt.chpl");
#line 68 "ttt.chpl"
  _runtime_type_tmp__chpl = (&call_tmp_chpl4)->dom;
#line 68 "ttt.chpl"
  ret_to_arg_ref_tmp__chpl3 = &type_tmp_chpl;
#line 68 "ttt.chpl"
  chpl__convertRuntimeTypeToValue2(_runtime_type_tmp__chpl, ret_to_arg_ref_tmp__chpl3, INT64(68), "ttt.chpl");
#line 68 "ttt.chpl"
  moves_chpl = type_tmp_chpl;
#line 68 "ttt.chpl"
  chpl__autoDestroy2(call_tmp_chpl3, INT64(68), "ttt.chpl");
#line 69 "ttt.chpl"
  counter_chpl = INT64(1);
#line 72 "ttt.chpl"
  _ic__F1_high_chpl = INT64(9);
#line 72 "ttt.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(9), INT64(1), INT64(1), INT64(9), true, INT64(72), "ttt.chpl");
#line 73 "ttt.chpl"
  ret_chpl2 = boardMatrix_chpl2;
#line 73 "ttt.chpl"
  call_tmp_chpl5 = ret_chpl2;
#line 73 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl5, INT64(73), "ttt.chpl");
#line 73 "ttt.chpl"
  ret__chpl = &((call_tmp_chpl5)->blk);
#line 73 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl5, INT64(73), "ttt.chpl");
#line 73 "ttt.chpl"
  ret_chpl4 = (call_tmp_chpl5)->shiftedData;
#line 73 "ttt.chpl"
  coerce_tmp_chpl2 = ret_chpl4;
#line 72 "ttt.chpl"
  for (i_chpl = INT64(1); ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
#line 73 "ttt.chpl"
    *(this_chpl + INT64(0)) = i_chpl;
#line 73 "ttt.chpl"
    *(i_chpl2 + INT64(0)) = *(this_chpl + INT64(0));
#line 73 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl5, INT64(73), "ttt.chpl");
#line 73 "ttt.chpl"
    ret_chpl3 = (call_tmp_chpl5)->dom;
#line 73 "ttt.chpl"
    chpl_check_nil(ret_chpl3, INT64(73), "ttt.chpl");
#line 73 "ttt.chpl"
    call_tmp_chpl6 = dsiMember(ret_chpl3, &this_chpl, INT64(73), "ttt.chpl");
#line 73 "ttt.chpl"
    call_tmp_chpl7 = (! call_tmp_chpl6);
#line 73 "ttt.chpl"
    if (call_tmp_chpl7) /* ZLINE: 73 ttt.chpl */
#line 73 "ttt.chpl"
    {
#line 73 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl8, "array index out of bounds: ", INT64(0), INT64(0), INT64(73), "ttt.chpl");
#line 73 "ttt.chpl"
      halt3(call_tmp_chpl8, &this_chpl, INT64(73), "ttt.chpl");
#line 73 "ttt.chpl"
    }
#line 73 "ttt.chpl"
    sum_chpl = INT64(0);
#line 73 "ttt.chpl"
    ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 73 "ttt.chpl"
    coerce_tmp_chpl = *(i_chpl2 + INT64(0));
#line 73 "ttt.chpl"
    call_tmp_chpl9 = (coerce_tmp_chpl * ret_x1_chpl);
#line 73 "ttt.chpl"
    sum_chpl += call_tmp_chpl9;
#line 73 "ttt.chpl"
    call_tmp_chpl10 = (coerce_tmp_chpl2 + sum_chpl);
#line 73 "ttt.chpl"
    ret_chpl5 = *(call_tmp_chpl10);
#line 73 "ttt.chpl"
    call_tmp_chpl11 = (ret_chpl5 == INT64(0));
#line 73 "ttt.chpl"
    if (call_tmp_chpl11) /* ZLINE: 74 ttt.chpl */
#line 73 "ttt.chpl"
    {
#line 74 "ttt.chpl"
      *(this_chpl2 + INT64(0)) = counter_chpl;
#line 74 "ttt.chpl"
      *(i_chpl3 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 74 "ttt.chpl"
      ret_chpl6 = moves_chpl;
#line 74 "ttt.chpl"
      call_tmp_chpl12 = ret_chpl6;
#line 74 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl12, INT64(74), "ttt.chpl");
#line 74 "ttt.chpl"
      ret_chpl7 = (call_tmp_chpl12)->dom;
#line 74 "ttt.chpl"
      chpl_check_nil(ret_chpl7, INT64(74), "ttt.chpl");
#line 74 "ttt.chpl"
      call_tmp_chpl13 = dsiMember(ret_chpl7, &this_chpl2, INT64(74), "ttt.chpl");
#line 74 "ttt.chpl"
      call_tmp_chpl14 = (! call_tmp_chpl13);
#line 74 "ttt.chpl"
      if (call_tmp_chpl14) /* ZLINE: 74 ttt.chpl */
#line 74 "ttt.chpl"
      {
#line 74 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl15, "array index out of bounds: ", INT64(0), INT64(0), INT64(74), "ttt.chpl");
#line 74 "ttt.chpl"
        halt3(call_tmp_chpl15, &this_chpl2, INT64(74), "ttt.chpl");
#line 74 "ttt.chpl"
      }
#line 74 "ttt.chpl"
      sum_chpl2 = INT64(0);
#line 74 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl12, INT64(74), "ttt.chpl");
#line 74 "ttt.chpl"
      ret__chpl2 = &((call_tmp_chpl12)->blk);
#line 74 "ttt.chpl"
      ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 74 "ttt.chpl"
      coerce_tmp_chpl3 = *(i_chpl3 + INT64(0));
#line 74 "ttt.chpl"
      call_tmp_chpl16 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 74 "ttt.chpl"
      sum_chpl2 += call_tmp_chpl16;
#line 74 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl12, INT64(74), "ttt.chpl");
#line 74 "ttt.chpl"
      ret_chpl8 = (call_tmp_chpl12)->shiftedData;
#line 74 "ttt.chpl"
      coerce_tmp_chpl4 = ret_chpl8;
#line 74 "ttt.chpl"
      call_tmp_chpl17 = (coerce_tmp_chpl4 + sum_chpl2);
#line 74 "ttt.chpl"
      *(call_tmp_chpl17) = i_chpl;
#line 75 "ttt.chpl"
      counter_chpl += INT64(1);
#line 75 "ttt.chpl"
    }
#line 75 "ttt.chpl"
  }
#line 79 "ttt.chpl"
  call_tmp_chpl18 = defend_chpl(boardMatrix_chpl2, moves_chpl);
#line 82 "ttt.chpl"
  call_tmp_chpl19 = (call_tmp_chpl18 != INT64(0));
#line 82 "ttt.chpl"
  if (call_tmp_chpl19) /* ZLINE: 83 ttt.chpl */
#line 82 "ttt.chpl"
  {
#line 83 "ttt.chpl"
    ret_chpl = call_tmp_chpl18;
#line 68 "ttt.chpl"
    chpl__autoDestroy3(moves_chpl, INT64(68), "ttt.chpl");
#line 83 "ttt.chpl"
    goto _end_computersMind_chpl;
#line 83 "ttt.chpl"
  } else /* ZLINE: 86 ttt.chpl */
#line 83 "ttt.chpl"
  {
#line 86 "ttt.chpl"
    call_tmp_chpl20 = attack_chpl(boardMatrix_chpl2, moves_chpl);
#line 87 "ttt.chpl"
    ret_chpl = call_tmp_chpl20;
#line 68 "ttt.chpl"
    chpl__autoDestroy3(moves_chpl, INT64(68), "ttt.chpl");
#line 87 "ttt.chpl"
    goto _end_computersMind_chpl;
#line 87 "ttt.chpl"
  }
#line 87 "ttt.chpl"
  _end_computersMind_chpl:;
#line 64 "ttt.chpl"
  return ret_chpl;
#line 64 "ttt.chpl"
}

#line 64 "ttt.chpl"
/* ttt.chpl:94 */
#line 64 "ttt.chpl"
static int64_t analyseBoard_chpl(DefaultRectangularArr_int64_t_1_int64_t_F a_chpl, int64_t key_chpl, int64_t assumeIndex_chpl) {
#line 64 "ttt.chpl"
  int64_t result_chpl;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl2 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl2 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl3;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl4;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl5;
#line 64 "ttt.chpl"
  int64_t sum_chpl;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl6;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl3 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl2 = NULL;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl7 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl2;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl2;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl8 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl4 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl5 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl9;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl10;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl11;
#line 64 "ttt.chpl"
  int64_t sum_chpl2;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl2;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl3;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl12;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl6 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl4 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl7;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl13 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl14;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl2;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl3 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl3;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl3;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl15 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl8 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl9 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl16;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl17;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl18;
#line 64 "ttt.chpl"
  int64_t sum_chpl3;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl3;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl3 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl5;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl19;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl10 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl6 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl11;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl20 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl21;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl4;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl5 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl4;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl4;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl22 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl12 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl13 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl23;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl24;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl25;
#line 64 "ttt.chpl"
  int64_t sum_chpl4;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl4;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl4 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl7;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl26;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl14 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl8 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl15;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl27 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl28;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl6;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl7 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl5;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl5;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl29 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl16 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl17 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl30;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl31;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl32;
#line 64 "ttt.chpl"
  int64_t sum_chpl5;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl5;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl5 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl9;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl33;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl18 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl10 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl19;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl34 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl35;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl8;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl9 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl6;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl6;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl36 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl20 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl21 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl37;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl38;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl39;
#line 64 "ttt.chpl"
  int64_t sum_chpl6;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl6;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl6 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl11;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl40;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl22 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl12 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl23;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl41 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl42;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl10;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl11 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl7;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl7;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl43 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl24 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl25 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl44;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl45;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl46;
#line 64 "ttt.chpl"
  int64_t sum_chpl7;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl7;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl7 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl13;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl47;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl26 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl14 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl27;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl48 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl49;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl12;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl13 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl8;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl8;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl50 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl28 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl29 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl51;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl52;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl53;
#line 64 "ttt.chpl"
  int64_t sum_chpl8;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl8;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl8 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl15;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl54;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl30 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl16 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl31;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl55 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl56;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl14;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl15 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl9;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl9;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl57 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl32 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl33 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl58;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl59;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl60;
#line 64 "ttt.chpl"
  int64_t sum_chpl9;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl9;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl9 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl17;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl61;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl34 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl18 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl35;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl62 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl63;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl16;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl17 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl10;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl10;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl64 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl36 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl37 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl65;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl66;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl67;
#line 64 "ttt.chpl"
  int64_t sum_chpl10;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl10;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl10 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl19;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl68;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl38 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl20 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl39;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl69 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl70;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl18;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl19 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl11;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl11;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl71 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl40 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl41 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl72;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl73;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl74;
#line 64 "ttt.chpl"
  int64_t sum_chpl11;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl11;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl11 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl21;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl75;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl42 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl22 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl43;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl76 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl77;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl20;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl21 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl12;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl12;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl78 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl44 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl45 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl79;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl80;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl81;
#line 64 "ttt.chpl"
  int64_t sum_chpl12;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl12;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl12 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl23;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl82;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl46 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl24 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl47;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl83 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl84;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl22;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl23 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl13;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl13;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl85 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl48 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl49 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl86;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl87;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl88;
#line 64 "ttt.chpl"
  int64_t sum_chpl13;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl13;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl13 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl25;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl89;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl50 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl26 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl51;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl90 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl91;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl24;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl25 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl14;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl14;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl92 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl52 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl53 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl93;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl94;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl95;
#line 64 "ttt.chpl"
  int64_t sum_chpl14;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl14;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl14 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl27;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl96;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl54 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl28 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl55;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl97 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl98;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl26;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl27 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl15;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl15;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl99 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl56 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl57 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl100;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl101;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl102;
#line 64 "ttt.chpl"
  int64_t sum_chpl15;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl15;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl15 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl29;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl103;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl58 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl30 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl59;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl104 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl105;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl28;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl29 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl16;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl16;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl106 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl60 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl61 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl107;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl108;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl109;
#line 64 "ttt.chpl"
  int64_t sum_chpl16;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl16;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl16 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl31;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl110;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl62 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl32 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl63;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl111 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl112;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl30;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl31 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl17;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl17;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl113 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl64 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl65 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl114;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl115;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl116;
#line 64 "ttt.chpl"
  int64_t sum_chpl17;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl17;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl17 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl33;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl117;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl66 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl34 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl67;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl118 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl119;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl32;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl33 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl18;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl18;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl120 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl68 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl69 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl121;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl122;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl123;
#line 64 "ttt.chpl"
  int64_t sum_chpl18;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl18;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl18 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl35;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl124;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl70 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl36 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl71;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl125 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl126;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl34;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl35 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl19;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl19;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl127 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl72 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl73 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl128;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl129;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl130;
#line 64 "ttt.chpl"
  int64_t sum_chpl19;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl19;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl19 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl37;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl131;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl74 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl38 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl75;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl132 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl133;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl36;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl37 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl20;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl20;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl134 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl76 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl77 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl135;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl136;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl137;
#line 64 "ttt.chpl"
  int64_t sum_chpl20;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl20;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl20 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl39;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl138;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl78 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl40 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl79;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl139 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl140;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl38;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl39 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl21;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl21;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl141 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl80 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl81 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl142;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl143;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl144;
#line 64 "ttt.chpl"
  int64_t sum_chpl21;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl21;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl21 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl41;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl145;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl82 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl42 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl83;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl146 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl147;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl40;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl41 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl22;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl22;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl148 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl84 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl85 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl149;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl150;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl151;
#line 64 "ttt.chpl"
  int64_t sum_chpl22;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl22;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl22 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl43;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl152;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl86 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl44 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl87;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl153 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl154;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl42;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl43 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl23;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl23;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl155 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl88 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl89 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl156;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl157;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl158;
#line 64 "ttt.chpl"
  int64_t sum_chpl23;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl23;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl23 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl45;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl159;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl90 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl46 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl91;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl160 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl161;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl44;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl45 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl24;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl24;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl162 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl92 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl93 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl163;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl164;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl165;
#line 64 "ttt.chpl"
  int64_t sum_chpl24;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl24;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl24 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl47;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl166;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl94 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl48 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl95;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl167 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl168;
#line 64 "ttt.chpl"
  chpl_bool tmp_chpl46;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F tmp_chpl47 = NULL;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl25;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl25;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl169 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl96 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl97 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl170;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl171;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl172;
#line 64 "ttt.chpl"
  int64_t sum_chpl25;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl25;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl25 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl49;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl173;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl98 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl50 = NULL;
#line 64 "ttt.chpl"
  int64_t ret_chpl99;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl174 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl175;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl176;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl26;
#line 64 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl26;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl177 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl100 = NULL;
#line 64 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl101 = NULL;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl178;
#line 64 "ttt.chpl"
  chpl_bool call_tmp_chpl179;
#line 64 "ttt.chpl"
  chpl_string call_tmp_chpl180;
#line 64 "ttt.chpl"
  int64_t sum_chpl26;
#line 64 "ttt.chpl"
  int64_t ret_x1_chpl26;
#line 64 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl26 = NULL;
#line 64 "ttt.chpl"
  int64_t coerce_tmp_chpl51;
#line 64 "ttt.chpl"
  int64_t call_tmp_chpl181;
#line 64 "ttt.chpl"
  _ddata_int64_t ret_chpl102 = NULL;
#line 64 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl52 = NULL;
#line 64 "ttt.chpl"
  _ref_int64_t call_tmp_chpl182 = NULL;
#line 95 "ttt.chpl"
  result_chpl = INT64(0);
#line 97 "ttt.chpl"
  call_tmp_chpl = (assumeIndex_chpl != INT64(0));
#line 97 "ttt.chpl"
  if (call_tmp_chpl) /* ZLINE: 98 ttt.chpl */
#line 97 "ttt.chpl"
  {
#line 98 "ttt.chpl"
    *(this_chpl + INT64(0)) = assumeIndex_chpl;
#line 98 "ttt.chpl"
    *(i_chpl + INT64(0)) = *(this_chpl + INT64(0));
#line 98 "ttt.chpl"
    ret_chpl = a_chpl;
#line 98 "ttt.chpl"
    call_tmp_chpl2 = ret_chpl;
#line 98 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl2, INT64(98), "ttt.chpl");
#line 98 "ttt.chpl"
    ret_chpl2 = (call_tmp_chpl2)->dom;
#line 98 "ttt.chpl"
    chpl_check_nil(ret_chpl2, INT64(98), "ttt.chpl");
#line 98 "ttt.chpl"
    call_tmp_chpl3 = dsiMember(ret_chpl2, &this_chpl, INT64(98), "ttt.chpl");
#line 98 "ttt.chpl"
    call_tmp_chpl4 = (! call_tmp_chpl3);
#line 98 "ttt.chpl"
    if (call_tmp_chpl4) /* ZLINE: 98 ttt.chpl */
#line 98 "ttt.chpl"
    {
#line 98 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl5, "array index out of bounds: ", INT64(0), INT64(0), INT64(98), "ttt.chpl");
#line 98 "ttt.chpl"
      halt3(call_tmp_chpl5, &this_chpl, INT64(98), "ttt.chpl");
#line 98 "ttt.chpl"
    }
#line 98 "ttt.chpl"
    sum_chpl = INT64(0);
#line 98 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl2, INT64(98), "ttt.chpl");
#line 98 "ttt.chpl"
    ret__chpl = &((call_tmp_chpl2)->blk);
#line 98 "ttt.chpl"
    ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 98 "ttt.chpl"
    coerce_tmp_chpl = *(i_chpl + INT64(0));
#line 98 "ttt.chpl"
    call_tmp_chpl6 = (coerce_tmp_chpl * ret_x1_chpl);
#line 98 "ttt.chpl"
    sum_chpl += call_tmp_chpl6;
#line 98 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl2, INT64(98), "ttt.chpl");
#line 98 "ttt.chpl"
    ret_chpl3 = (call_tmp_chpl2)->shiftedData;
#line 98 "ttt.chpl"
    coerce_tmp_chpl2 = ret_chpl3;
#line 98 "ttt.chpl"
    call_tmp_chpl7 = (coerce_tmp_chpl2 + sum_chpl);
#line 98 "ttt.chpl"
    *(call_tmp_chpl7) = key_chpl;
#line 98 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  tmp_chpl = a_chpl;
#line 102 "ttt.chpl"
  *(this_chpl2 + INT64(0)) = INT64(1);
#line 102 "ttt.chpl"
  *(i_chpl2 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 102 "ttt.chpl"
  ret_chpl4 = tmp_chpl;
#line 102 "ttt.chpl"
  call_tmp_chpl8 = ret_chpl4;
#line 102 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl8, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
  ret_chpl5 = (call_tmp_chpl8)->dom;
#line 102 "ttt.chpl"
  chpl_check_nil(ret_chpl5, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
  call_tmp_chpl9 = dsiMember(ret_chpl5, &this_chpl2, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
  call_tmp_chpl10 = (! call_tmp_chpl9);
#line 102 "ttt.chpl"
  if (call_tmp_chpl10) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    string_from_c_string(&call_tmp_chpl11, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    halt3(call_tmp_chpl11, &this_chpl2, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  sum_chpl2 = INT64(0);
#line 102 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl8, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
  ret__chpl2 = &((call_tmp_chpl8)->blk);
#line 102 "ttt.chpl"
  ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 102 "ttt.chpl"
  coerce_tmp_chpl3 = *(i_chpl2 + INT64(0));
#line 102 "ttt.chpl"
  call_tmp_chpl12 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 102 "ttt.chpl"
  sum_chpl2 += call_tmp_chpl12;
#line 102 "ttt.chpl"
  chpl_check_nil(call_tmp_chpl8, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
  ret_chpl6 = (call_tmp_chpl8)->shiftedData;
#line 102 "ttt.chpl"
  coerce_tmp_chpl4 = ret_chpl6;
#line 102 "ttt.chpl"
  call_tmp_chpl13 = (coerce_tmp_chpl4 + sum_chpl2);
#line 102 "ttt.chpl"
  ret_chpl7 = *(call_tmp_chpl13);
#line 102 "ttt.chpl"
  call_tmp_chpl14 = (ret_chpl7 == key_chpl);
#line 102 "ttt.chpl"
  if (call_tmp_chpl14) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl3 = a_chpl;
#line 102 "ttt.chpl"
    *(this_chpl3 + INT64(0)) = INT64(2);
#line 102 "ttt.chpl"
    *(i_chpl3 + INT64(0)) = *(this_chpl3 + INT64(0));
#line 102 "ttt.chpl"
    ret_chpl8 = tmp_chpl3;
#line 102 "ttt.chpl"
    call_tmp_chpl15 = ret_chpl8;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl15, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl9 = (call_tmp_chpl15)->dom;
#line 102 "ttt.chpl"
    chpl_check_nil(ret_chpl9, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl16 = dsiMember(ret_chpl9, &this_chpl3, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl17 = (! call_tmp_chpl16);
#line 102 "ttt.chpl"
    if (call_tmp_chpl17) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl18, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      halt3(call_tmp_chpl18, &this_chpl3, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    sum_chpl3 = INT64(0);
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl15, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret__chpl3 = &((call_tmp_chpl15)->blk);
#line 102 "ttt.chpl"
    ret_x1_chpl3 = *(*(ret__chpl3) + INT64(0));
#line 102 "ttt.chpl"
    coerce_tmp_chpl5 = *(i_chpl3 + INT64(0));
#line 102 "ttt.chpl"
    call_tmp_chpl19 = (coerce_tmp_chpl5 * ret_x1_chpl3);
#line 102 "ttt.chpl"
    sum_chpl3 += call_tmp_chpl19;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl15, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl10 = (call_tmp_chpl15)->shiftedData;
#line 102 "ttt.chpl"
    coerce_tmp_chpl6 = ret_chpl10;
#line 102 "ttt.chpl"
    call_tmp_chpl20 = (coerce_tmp_chpl6 + sum_chpl3);
#line 102 "ttt.chpl"
    ret_chpl11 = *(call_tmp_chpl20);
#line 102 "ttt.chpl"
    call_tmp_chpl21 = (ret_chpl11 == key_chpl);
#line 102 "ttt.chpl"
    tmp_chpl2 = call_tmp_chpl21;
#line 102 "ttt.chpl"
  } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl2 = false;
#line 102 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  if (tmp_chpl2) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl5 = a_chpl;
#line 102 "ttt.chpl"
    *(this_chpl4 + INT64(0)) = INT64(3);
#line 102 "ttt.chpl"
    *(i_chpl4 + INT64(0)) = *(this_chpl4 + INT64(0));
#line 102 "ttt.chpl"
    ret_chpl12 = tmp_chpl5;
#line 102 "ttt.chpl"
    call_tmp_chpl22 = ret_chpl12;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl22, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl13 = (call_tmp_chpl22)->dom;
#line 102 "ttt.chpl"
    chpl_check_nil(ret_chpl13, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl23 = dsiMember(ret_chpl13, &this_chpl4, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl24 = (! call_tmp_chpl23);
#line 102 "ttt.chpl"
    if (call_tmp_chpl24) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl25, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      halt3(call_tmp_chpl25, &this_chpl4, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    sum_chpl4 = INT64(0);
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl22, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret__chpl4 = &((call_tmp_chpl22)->blk);
#line 102 "ttt.chpl"
    ret_x1_chpl4 = *(*(ret__chpl4) + INT64(0));
#line 102 "ttt.chpl"
    coerce_tmp_chpl7 = *(i_chpl4 + INT64(0));
#line 102 "ttt.chpl"
    call_tmp_chpl26 = (coerce_tmp_chpl7 * ret_x1_chpl4);
#line 102 "ttt.chpl"
    sum_chpl4 += call_tmp_chpl26;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl22, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl14 = (call_tmp_chpl22)->shiftedData;
#line 102 "ttt.chpl"
    coerce_tmp_chpl8 = ret_chpl14;
#line 102 "ttt.chpl"
    call_tmp_chpl27 = (coerce_tmp_chpl8 + sum_chpl4);
#line 102 "ttt.chpl"
    ret_chpl15 = *(call_tmp_chpl27);
#line 102 "ttt.chpl"
    call_tmp_chpl28 = (ret_chpl15 == key_chpl);
#line 102 "ttt.chpl"
    tmp_chpl4 = call_tmp_chpl28;
#line 102 "ttt.chpl"
  } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl4 = false;
#line 102 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  if (tmp_chpl4) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl6 = true;
#line 102 "ttt.chpl"
  } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl7 = a_chpl;
#line 102 "ttt.chpl"
    *(this_chpl5 + INT64(0)) = INT64(4);
#line 102 "ttt.chpl"
    *(i_chpl5 + INT64(0)) = *(this_chpl5 + INT64(0));
#line 102 "ttt.chpl"
    ret_chpl16 = tmp_chpl7;
#line 102 "ttt.chpl"
    call_tmp_chpl29 = ret_chpl16;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl29, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl17 = (call_tmp_chpl29)->dom;
#line 102 "ttt.chpl"
    chpl_check_nil(ret_chpl17, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl30 = dsiMember(ret_chpl17, &this_chpl5, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl31 = (! call_tmp_chpl30);
#line 102 "ttt.chpl"
    if (call_tmp_chpl31) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl32, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      halt3(call_tmp_chpl32, &this_chpl5, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    sum_chpl5 = INT64(0);
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl29, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret__chpl5 = &((call_tmp_chpl29)->blk);
#line 102 "ttt.chpl"
    ret_x1_chpl5 = *(*(ret__chpl5) + INT64(0));
#line 102 "ttt.chpl"
    coerce_tmp_chpl9 = *(i_chpl5 + INT64(0));
#line 102 "ttt.chpl"
    call_tmp_chpl33 = (coerce_tmp_chpl9 * ret_x1_chpl5);
#line 102 "ttt.chpl"
    sum_chpl5 += call_tmp_chpl33;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl29, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl18 = (call_tmp_chpl29)->shiftedData;
#line 102 "ttt.chpl"
    coerce_tmp_chpl10 = ret_chpl18;
#line 102 "ttt.chpl"
    call_tmp_chpl34 = (coerce_tmp_chpl10 + sum_chpl5);
#line 102 "ttt.chpl"
    ret_chpl19 = *(call_tmp_chpl34);
#line 102 "ttt.chpl"
    call_tmp_chpl35 = (ret_chpl19 == key_chpl);
#line 102 "ttt.chpl"
    if (call_tmp_chpl35) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl9 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl6 + INT64(0)) = INT64(5);
#line 102 "ttt.chpl"
      *(i_chpl6 + INT64(0)) = *(this_chpl6 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl20 = tmp_chpl9;
#line 102 "ttt.chpl"
      call_tmp_chpl36 = ret_chpl20;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl36, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl21 = (call_tmp_chpl36)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl21, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl37 = dsiMember(ret_chpl21, &this_chpl6, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl38 = (! call_tmp_chpl37);
#line 102 "ttt.chpl"
      if (call_tmp_chpl38) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl39, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl39, &this_chpl6, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl6 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl36, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl6 = &((call_tmp_chpl36)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl6 = *(*(ret__chpl6) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl11 = *(i_chpl6 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl40 = (coerce_tmp_chpl11 * ret_x1_chpl6);
#line 102 "ttt.chpl"
      sum_chpl6 += call_tmp_chpl40;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl36, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl22 = (call_tmp_chpl36)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl12 = ret_chpl22;
#line 102 "ttt.chpl"
      call_tmp_chpl41 = (coerce_tmp_chpl12 + sum_chpl6);
#line 102 "ttt.chpl"
      ret_chpl23 = *(call_tmp_chpl41);
#line 102 "ttt.chpl"
      call_tmp_chpl42 = (ret_chpl23 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl8 = call_tmp_chpl42;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl8 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    if (tmp_chpl8) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl11 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl7 + INT64(0)) = INT64(6);
#line 102 "ttt.chpl"
      *(i_chpl7 + INT64(0)) = *(this_chpl7 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl24 = tmp_chpl11;
#line 102 "ttt.chpl"
      call_tmp_chpl43 = ret_chpl24;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl43, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl25 = (call_tmp_chpl43)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl25, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl44 = dsiMember(ret_chpl25, &this_chpl7, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl45 = (! call_tmp_chpl44);
#line 102 "ttt.chpl"
      if (call_tmp_chpl45) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl46, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl46, &this_chpl7, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl7 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl43, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl7 = &((call_tmp_chpl43)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl7 = *(*(ret__chpl7) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl13 = *(i_chpl7 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl47 = (coerce_tmp_chpl13 * ret_x1_chpl7);
#line 102 "ttt.chpl"
      sum_chpl7 += call_tmp_chpl47;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl43, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl26 = (call_tmp_chpl43)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl14 = ret_chpl26;
#line 102 "ttt.chpl"
      call_tmp_chpl48 = (coerce_tmp_chpl14 + sum_chpl7);
#line 102 "ttt.chpl"
      ret_chpl27 = *(call_tmp_chpl48);
#line 102 "ttt.chpl"
      call_tmp_chpl49 = (ret_chpl27 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl10 = call_tmp_chpl49;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl10 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    tmp_chpl6 = tmp_chpl10;
#line 102 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  if (tmp_chpl6) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl12 = true;
#line 102 "ttt.chpl"
  } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl13 = a_chpl;
#line 102 "ttt.chpl"
    *(this_chpl8 + INT64(0)) = INT64(7);
#line 102 "ttt.chpl"
    *(i_chpl8 + INT64(0)) = *(this_chpl8 + INT64(0));
#line 102 "ttt.chpl"
    ret_chpl28 = tmp_chpl13;
#line 102 "ttt.chpl"
    call_tmp_chpl50 = ret_chpl28;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl50, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl29 = (call_tmp_chpl50)->dom;
#line 102 "ttt.chpl"
    chpl_check_nil(ret_chpl29, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl51 = dsiMember(ret_chpl29, &this_chpl8, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl52 = (! call_tmp_chpl51);
#line 102 "ttt.chpl"
    if (call_tmp_chpl52) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl53, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      halt3(call_tmp_chpl53, &this_chpl8, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    sum_chpl8 = INT64(0);
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl50, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret__chpl8 = &((call_tmp_chpl50)->blk);
#line 102 "ttt.chpl"
    ret_x1_chpl8 = *(*(ret__chpl8) + INT64(0));
#line 102 "ttt.chpl"
    coerce_tmp_chpl15 = *(i_chpl8 + INT64(0));
#line 102 "ttt.chpl"
    call_tmp_chpl54 = (coerce_tmp_chpl15 * ret_x1_chpl8);
#line 102 "ttt.chpl"
    sum_chpl8 += call_tmp_chpl54;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl50, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl30 = (call_tmp_chpl50)->shiftedData;
#line 102 "ttt.chpl"
    coerce_tmp_chpl16 = ret_chpl30;
#line 102 "ttt.chpl"
    call_tmp_chpl55 = (coerce_tmp_chpl16 + sum_chpl8);
#line 102 "ttt.chpl"
    ret_chpl31 = *(call_tmp_chpl55);
#line 102 "ttt.chpl"
    call_tmp_chpl56 = (ret_chpl31 == key_chpl);
#line 102 "ttt.chpl"
    if (call_tmp_chpl56) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl15 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl9 + INT64(0)) = INT64(8);
#line 102 "ttt.chpl"
      *(i_chpl9 + INT64(0)) = *(this_chpl9 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl32 = tmp_chpl15;
#line 102 "ttt.chpl"
      call_tmp_chpl57 = ret_chpl32;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl57, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl33 = (call_tmp_chpl57)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl33, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl58 = dsiMember(ret_chpl33, &this_chpl9, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl59 = (! call_tmp_chpl58);
#line 102 "ttt.chpl"
      if (call_tmp_chpl59) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl60, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl60, &this_chpl9, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl9 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl57, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl9 = &((call_tmp_chpl57)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl9 = *(*(ret__chpl9) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl17 = *(i_chpl9 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl61 = (coerce_tmp_chpl17 * ret_x1_chpl9);
#line 102 "ttt.chpl"
      sum_chpl9 += call_tmp_chpl61;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl57, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl34 = (call_tmp_chpl57)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl18 = ret_chpl34;
#line 102 "ttt.chpl"
      call_tmp_chpl62 = (coerce_tmp_chpl18 + sum_chpl9);
#line 102 "ttt.chpl"
      ret_chpl35 = *(call_tmp_chpl62);
#line 102 "ttt.chpl"
      call_tmp_chpl63 = (ret_chpl35 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl14 = call_tmp_chpl63;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl14 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    if (tmp_chpl14) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl17 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl10 + INT64(0)) = INT64(9);
#line 102 "ttt.chpl"
      *(i_chpl10 + INT64(0)) = *(this_chpl10 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl36 = tmp_chpl17;
#line 102 "ttt.chpl"
      call_tmp_chpl64 = ret_chpl36;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl64, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl37 = (call_tmp_chpl64)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl37, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl65 = dsiMember(ret_chpl37, &this_chpl10, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl66 = (! call_tmp_chpl65);
#line 102 "ttt.chpl"
      if (call_tmp_chpl66) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl67, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl67, &this_chpl10, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl10 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl64, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl10 = &((call_tmp_chpl64)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl10 = *(*(ret__chpl10) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl19 = *(i_chpl10 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl68 = (coerce_tmp_chpl19 * ret_x1_chpl10);
#line 102 "ttt.chpl"
      sum_chpl10 += call_tmp_chpl68;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl64, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl38 = (call_tmp_chpl64)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl20 = ret_chpl38;
#line 102 "ttt.chpl"
      call_tmp_chpl69 = (coerce_tmp_chpl20 + sum_chpl10);
#line 102 "ttt.chpl"
      ret_chpl39 = *(call_tmp_chpl69);
#line 102 "ttt.chpl"
      call_tmp_chpl70 = (ret_chpl39 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl16 = call_tmp_chpl70;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl16 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    tmp_chpl12 = tmp_chpl16;
#line 102 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  if (tmp_chpl12) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl18 = true;
#line 102 "ttt.chpl"
  } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl19 = a_chpl;
#line 102 "ttt.chpl"
    *(this_chpl11 + INT64(0)) = INT64(1);
#line 102 "ttt.chpl"
    *(i_chpl11 + INT64(0)) = *(this_chpl11 + INT64(0));
#line 102 "ttt.chpl"
    ret_chpl40 = tmp_chpl19;
#line 102 "ttt.chpl"
    call_tmp_chpl71 = ret_chpl40;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl71, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl41 = (call_tmp_chpl71)->dom;
#line 102 "ttt.chpl"
    chpl_check_nil(ret_chpl41, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl72 = dsiMember(ret_chpl41, &this_chpl11, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl73 = (! call_tmp_chpl72);
#line 102 "ttt.chpl"
    if (call_tmp_chpl73) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl74, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      halt3(call_tmp_chpl74, &this_chpl11, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    sum_chpl11 = INT64(0);
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl71, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret__chpl11 = &((call_tmp_chpl71)->blk);
#line 102 "ttt.chpl"
    ret_x1_chpl11 = *(*(ret__chpl11) + INT64(0));
#line 102 "ttt.chpl"
    coerce_tmp_chpl21 = *(i_chpl11 + INT64(0));
#line 102 "ttt.chpl"
    call_tmp_chpl75 = (coerce_tmp_chpl21 * ret_x1_chpl11);
#line 102 "ttt.chpl"
    sum_chpl11 += call_tmp_chpl75;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl71, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl42 = (call_tmp_chpl71)->shiftedData;
#line 102 "ttt.chpl"
    coerce_tmp_chpl22 = ret_chpl42;
#line 102 "ttt.chpl"
    call_tmp_chpl76 = (coerce_tmp_chpl22 + sum_chpl11);
#line 102 "ttt.chpl"
    ret_chpl43 = *(call_tmp_chpl76);
#line 102 "ttt.chpl"
    call_tmp_chpl77 = (ret_chpl43 == key_chpl);
#line 102 "ttt.chpl"
    if (call_tmp_chpl77) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl21 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl12 + INT64(0)) = INT64(5);
#line 102 "ttt.chpl"
      *(i_chpl12 + INT64(0)) = *(this_chpl12 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl44 = tmp_chpl21;
#line 102 "ttt.chpl"
      call_tmp_chpl78 = ret_chpl44;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl78, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl45 = (call_tmp_chpl78)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl45, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl79 = dsiMember(ret_chpl45, &this_chpl12, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl80 = (! call_tmp_chpl79);
#line 102 "ttt.chpl"
      if (call_tmp_chpl80) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl81, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl81, &this_chpl12, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl12 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl78, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl12 = &((call_tmp_chpl78)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl12 = *(*(ret__chpl12) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl23 = *(i_chpl12 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl82 = (coerce_tmp_chpl23 * ret_x1_chpl12);
#line 102 "ttt.chpl"
      sum_chpl12 += call_tmp_chpl82;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl78, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl46 = (call_tmp_chpl78)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl24 = ret_chpl46;
#line 102 "ttt.chpl"
      call_tmp_chpl83 = (coerce_tmp_chpl24 + sum_chpl12);
#line 102 "ttt.chpl"
      ret_chpl47 = *(call_tmp_chpl83);
#line 102 "ttt.chpl"
      call_tmp_chpl84 = (ret_chpl47 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl20 = call_tmp_chpl84;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl20 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    if (tmp_chpl20) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl23 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl13 + INT64(0)) = INT64(9);
#line 102 "ttt.chpl"
      *(i_chpl13 + INT64(0)) = *(this_chpl13 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl48 = tmp_chpl23;
#line 102 "ttt.chpl"
      call_tmp_chpl85 = ret_chpl48;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl85, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl49 = (call_tmp_chpl85)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl49, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl86 = dsiMember(ret_chpl49, &this_chpl13, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl87 = (! call_tmp_chpl86);
#line 102 "ttt.chpl"
      if (call_tmp_chpl87) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl88, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl88, &this_chpl13, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl13 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl85, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl13 = &((call_tmp_chpl85)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl13 = *(*(ret__chpl13) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl25 = *(i_chpl13 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl89 = (coerce_tmp_chpl25 * ret_x1_chpl13);
#line 102 "ttt.chpl"
      sum_chpl13 += call_tmp_chpl89;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl85, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl50 = (call_tmp_chpl85)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl26 = ret_chpl50;
#line 102 "ttt.chpl"
      call_tmp_chpl90 = (coerce_tmp_chpl26 + sum_chpl13);
#line 102 "ttt.chpl"
      ret_chpl51 = *(call_tmp_chpl90);
#line 102 "ttt.chpl"
      call_tmp_chpl91 = (ret_chpl51 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl22 = call_tmp_chpl91;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl22 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    tmp_chpl18 = tmp_chpl22;
#line 102 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  if (tmp_chpl18) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl24 = true;
#line 102 "ttt.chpl"
  } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl25 = a_chpl;
#line 102 "ttt.chpl"
    *(this_chpl14 + INT64(0)) = INT64(1);
#line 102 "ttt.chpl"
    *(i_chpl14 + INT64(0)) = *(this_chpl14 + INT64(0));
#line 102 "ttt.chpl"
    ret_chpl52 = tmp_chpl25;
#line 102 "ttt.chpl"
    call_tmp_chpl92 = ret_chpl52;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl92, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl53 = (call_tmp_chpl92)->dom;
#line 102 "ttt.chpl"
    chpl_check_nil(ret_chpl53, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl93 = dsiMember(ret_chpl53, &this_chpl14, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl94 = (! call_tmp_chpl93);
#line 102 "ttt.chpl"
    if (call_tmp_chpl94) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl95, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      halt3(call_tmp_chpl95, &this_chpl14, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    sum_chpl14 = INT64(0);
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl92, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret__chpl14 = &((call_tmp_chpl92)->blk);
#line 102 "ttt.chpl"
    ret_x1_chpl14 = *(*(ret__chpl14) + INT64(0));
#line 102 "ttt.chpl"
    coerce_tmp_chpl27 = *(i_chpl14 + INT64(0));
#line 102 "ttt.chpl"
    call_tmp_chpl96 = (coerce_tmp_chpl27 * ret_x1_chpl14);
#line 102 "ttt.chpl"
    sum_chpl14 += call_tmp_chpl96;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl92, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl54 = (call_tmp_chpl92)->shiftedData;
#line 102 "ttt.chpl"
    coerce_tmp_chpl28 = ret_chpl54;
#line 102 "ttt.chpl"
    call_tmp_chpl97 = (coerce_tmp_chpl28 + sum_chpl14);
#line 102 "ttt.chpl"
    ret_chpl55 = *(call_tmp_chpl97);
#line 102 "ttt.chpl"
    call_tmp_chpl98 = (ret_chpl55 == key_chpl);
#line 102 "ttt.chpl"
    if (call_tmp_chpl98) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl27 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl15 + INT64(0)) = INT64(4);
#line 102 "ttt.chpl"
      *(i_chpl15 + INT64(0)) = *(this_chpl15 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl56 = tmp_chpl27;
#line 102 "ttt.chpl"
      call_tmp_chpl99 = ret_chpl56;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl99, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl57 = (call_tmp_chpl99)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl57, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl100 = dsiMember(ret_chpl57, &this_chpl15, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl101 = (! call_tmp_chpl100);
#line 102 "ttt.chpl"
      if (call_tmp_chpl101) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl102, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl102, &this_chpl15, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl15 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl99, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl15 = &((call_tmp_chpl99)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl15 = *(*(ret__chpl15) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl29 = *(i_chpl15 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl103 = (coerce_tmp_chpl29 * ret_x1_chpl15);
#line 102 "ttt.chpl"
      sum_chpl15 += call_tmp_chpl103;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl99, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl58 = (call_tmp_chpl99)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl30 = ret_chpl58;
#line 102 "ttt.chpl"
      call_tmp_chpl104 = (coerce_tmp_chpl30 + sum_chpl15);
#line 102 "ttt.chpl"
      ret_chpl59 = *(call_tmp_chpl104);
#line 102 "ttt.chpl"
      call_tmp_chpl105 = (ret_chpl59 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl26 = call_tmp_chpl105;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl26 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    if (tmp_chpl26) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl29 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl16 + INT64(0)) = INT64(7);
#line 102 "ttt.chpl"
      *(i_chpl16 + INT64(0)) = *(this_chpl16 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl60 = tmp_chpl29;
#line 102 "ttt.chpl"
      call_tmp_chpl106 = ret_chpl60;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl106, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl61 = (call_tmp_chpl106)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl61, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl107 = dsiMember(ret_chpl61, &this_chpl16, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl108 = (! call_tmp_chpl107);
#line 102 "ttt.chpl"
      if (call_tmp_chpl108) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl109, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl109, &this_chpl16, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl16 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl106, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl16 = &((call_tmp_chpl106)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl16 = *(*(ret__chpl16) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl31 = *(i_chpl16 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl110 = (coerce_tmp_chpl31 * ret_x1_chpl16);
#line 102 "ttt.chpl"
      sum_chpl16 += call_tmp_chpl110;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl106, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl62 = (call_tmp_chpl106)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl32 = ret_chpl62;
#line 102 "ttt.chpl"
      call_tmp_chpl111 = (coerce_tmp_chpl32 + sum_chpl16);
#line 102 "ttt.chpl"
      ret_chpl63 = *(call_tmp_chpl111);
#line 102 "ttt.chpl"
      call_tmp_chpl112 = (ret_chpl63 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl28 = call_tmp_chpl112;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl28 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    tmp_chpl24 = tmp_chpl28;
#line 102 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  if (tmp_chpl24) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl30 = true;
#line 102 "ttt.chpl"
  } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl31 = a_chpl;
#line 102 "ttt.chpl"
    *(this_chpl17 + INT64(0)) = INT64(2);
#line 102 "ttt.chpl"
    *(i_chpl17 + INT64(0)) = *(this_chpl17 + INT64(0));
#line 102 "ttt.chpl"
    ret_chpl64 = tmp_chpl31;
#line 102 "ttt.chpl"
    call_tmp_chpl113 = ret_chpl64;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl113, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl65 = (call_tmp_chpl113)->dom;
#line 102 "ttt.chpl"
    chpl_check_nil(ret_chpl65, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl114 = dsiMember(ret_chpl65, &this_chpl17, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl115 = (! call_tmp_chpl114);
#line 102 "ttt.chpl"
    if (call_tmp_chpl115) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl116, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      halt3(call_tmp_chpl116, &this_chpl17, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    sum_chpl17 = INT64(0);
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl113, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret__chpl17 = &((call_tmp_chpl113)->blk);
#line 102 "ttt.chpl"
    ret_x1_chpl17 = *(*(ret__chpl17) + INT64(0));
#line 102 "ttt.chpl"
    coerce_tmp_chpl33 = *(i_chpl17 + INT64(0));
#line 102 "ttt.chpl"
    call_tmp_chpl117 = (coerce_tmp_chpl33 * ret_x1_chpl17);
#line 102 "ttt.chpl"
    sum_chpl17 += call_tmp_chpl117;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl113, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl66 = (call_tmp_chpl113)->shiftedData;
#line 102 "ttt.chpl"
    coerce_tmp_chpl34 = ret_chpl66;
#line 102 "ttt.chpl"
    call_tmp_chpl118 = (coerce_tmp_chpl34 + sum_chpl17);
#line 102 "ttt.chpl"
    ret_chpl67 = *(call_tmp_chpl118);
#line 102 "ttt.chpl"
    call_tmp_chpl119 = (ret_chpl67 == key_chpl);
#line 102 "ttt.chpl"
    if (call_tmp_chpl119) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl33 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl18 + INT64(0)) = INT64(5);
#line 102 "ttt.chpl"
      *(i_chpl18 + INT64(0)) = *(this_chpl18 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl68 = tmp_chpl33;
#line 102 "ttt.chpl"
      call_tmp_chpl120 = ret_chpl68;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl120, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl69 = (call_tmp_chpl120)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl69, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl121 = dsiMember(ret_chpl69, &this_chpl18, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl122 = (! call_tmp_chpl121);
#line 102 "ttt.chpl"
      if (call_tmp_chpl122) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl123, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl123, &this_chpl18, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl18 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl120, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl18 = &((call_tmp_chpl120)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl18 = *(*(ret__chpl18) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl35 = *(i_chpl18 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl124 = (coerce_tmp_chpl35 * ret_x1_chpl18);
#line 102 "ttt.chpl"
      sum_chpl18 += call_tmp_chpl124;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl120, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl70 = (call_tmp_chpl120)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl36 = ret_chpl70;
#line 102 "ttt.chpl"
      call_tmp_chpl125 = (coerce_tmp_chpl36 + sum_chpl18);
#line 102 "ttt.chpl"
      ret_chpl71 = *(call_tmp_chpl125);
#line 102 "ttt.chpl"
      call_tmp_chpl126 = (ret_chpl71 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl32 = call_tmp_chpl126;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl32 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    if (tmp_chpl32) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl35 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl19 + INT64(0)) = INT64(8);
#line 102 "ttt.chpl"
      *(i_chpl19 + INT64(0)) = *(this_chpl19 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl72 = tmp_chpl35;
#line 102 "ttt.chpl"
      call_tmp_chpl127 = ret_chpl72;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl127, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl73 = (call_tmp_chpl127)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl73, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl128 = dsiMember(ret_chpl73, &this_chpl19, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl129 = (! call_tmp_chpl128);
#line 102 "ttt.chpl"
      if (call_tmp_chpl129) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl130, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl130, &this_chpl19, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl19 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl127, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl19 = &((call_tmp_chpl127)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl19 = *(*(ret__chpl19) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl37 = *(i_chpl19 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl131 = (coerce_tmp_chpl37 * ret_x1_chpl19);
#line 102 "ttt.chpl"
      sum_chpl19 += call_tmp_chpl131;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl127, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl74 = (call_tmp_chpl127)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl38 = ret_chpl74;
#line 102 "ttt.chpl"
      call_tmp_chpl132 = (coerce_tmp_chpl38 + sum_chpl19);
#line 102 "ttt.chpl"
      ret_chpl75 = *(call_tmp_chpl132);
#line 102 "ttt.chpl"
      call_tmp_chpl133 = (ret_chpl75 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl34 = call_tmp_chpl133;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl34 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    tmp_chpl30 = tmp_chpl34;
#line 102 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  if (tmp_chpl30) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl36 = true;
#line 102 "ttt.chpl"
  } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl37 = a_chpl;
#line 102 "ttt.chpl"
    *(this_chpl20 + INT64(0)) = INT64(3);
#line 102 "ttt.chpl"
    *(i_chpl20 + INT64(0)) = *(this_chpl20 + INT64(0));
#line 102 "ttt.chpl"
    ret_chpl76 = tmp_chpl37;
#line 102 "ttt.chpl"
    call_tmp_chpl134 = ret_chpl76;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl134, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl77 = (call_tmp_chpl134)->dom;
#line 102 "ttt.chpl"
    chpl_check_nil(ret_chpl77, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl135 = dsiMember(ret_chpl77, &this_chpl20, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl136 = (! call_tmp_chpl135);
#line 102 "ttt.chpl"
    if (call_tmp_chpl136) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl137, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      halt3(call_tmp_chpl137, &this_chpl20, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    sum_chpl20 = INT64(0);
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl134, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret__chpl20 = &((call_tmp_chpl134)->blk);
#line 102 "ttt.chpl"
    ret_x1_chpl20 = *(*(ret__chpl20) + INT64(0));
#line 102 "ttt.chpl"
    coerce_tmp_chpl39 = *(i_chpl20 + INT64(0));
#line 102 "ttt.chpl"
    call_tmp_chpl138 = (coerce_tmp_chpl39 * ret_x1_chpl20);
#line 102 "ttt.chpl"
    sum_chpl20 += call_tmp_chpl138;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl134, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl78 = (call_tmp_chpl134)->shiftedData;
#line 102 "ttt.chpl"
    coerce_tmp_chpl40 = ret_chpl78;
#line 102 "ttt.chpl"
    call_tmp_chpl139 = (coerce_tmp_chpl40 + sum_chpl20);
#line 102 "ttt.chpl"
    ret_chpl79 = *(call_tmp_chpl139);
#line 102 "ttt.chpl"
    call_tmp_chpl140 = (ret_chpl79 == key_chpl);
#line 102 "ttt.chpl"
    if (call_tmp_chpl140) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl39 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl21 + INT64(0)) = INT64(6);
#line 102 "ttt.chpl"
      *(i_chpl21 + INT64(0)) = *(this_chpl21 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl80 = tmp_chpl39;
#line 102 "ttt.chpl"
      call_tmp_chpl141 = ret_chpl80;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl141, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl81 = (call_tmp_chpl141)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl81, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl142 = dsiMember(ret_chpl81, &this_chpl21, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl143 = (! call_tmp_chpl142);
#line 102 "ttt.chpl"
      if (call_tmp_chpl143) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl144, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl144, &this_chpl21, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl21 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl141, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl21 = &((call_tmp_chpl141)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl21 = *(*(ret__chpl21) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl41 = *(i_chpl21 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl145 = (coerce_tmp_chpl41 * ret_x1_chpl21);
#line 102 "ttt.chpl"
      sum_chpl21 += call_tmp_chpl145;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl141, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl82 = (call_tmp_chpl141)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl42 = ret_chpl82;
#line 102 "ttt.chpl"
      call_tmp_chpl146 = (coerce_tmp_chpl42 + sum_chpl21);
#line 102 "ttt.chpl"
      ret_chpl83 = *(call_tmp_chpl146);
#line 102 "ttt.chpl"
      call_tmp_chpl147 = (ret_chpl83 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl38 = call_tmp_chpl147;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl38 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    if (tmp_chpl38) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl41 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl22 + INT64(0)) = INT64(9);
#line 102 "ttt.chpl"
      *(i_chpl22 + INT64(0)) = *(this_chpl22 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl84 = tmp_chpl41;
#line 102 "ttt.chpl"
      call_tmp_chpl148 = ret_chpl84;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl148, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl85 = (call_tmp_chpl148)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl85, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl149 = dsiMember(ret_chpl85, &this_chpl22, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl150 = (! call_tmp_chpl149);
#line 102 "ttt.chpl"
      if (call_tmp_chpl150) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl151, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl151, &this_chpl22, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl22 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl148, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl22 = &((call_tmp_chpl148)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl22 = *(*(ret__chpl22) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl43 = *(i_chpl22 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl152 = (coerce_tmp_chpl43 * ret_x1_chpl22);
#line 102 "ttt.chpl"
      sum_chpl22 += call_tmp_chpl152;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl148, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl86 = (call_tmp_chpl148)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl44 = ret_chpl86;
#line 102 "ttt.chpl"
      call_tmp_chpl153 = (coerce_tmp_chpl44 + sum_chpl22);
#line 102 "ttt.chpl"
      ret_chpl87 = *(call_tmp_chpl153);
#line 102 "ttt.chpl"
      call_tmp_chpl154 = (ret_chpl87 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl40 = call_tmp_chpl154;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl40 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    tmp_chpl36 = tmp_chpl40;
#line 102 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  if (tmp_chpl36) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl42 = true;
#line 102 "ttt.chpl"
  } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 102 "ttt.chpl"
    tmp_chpl43 = a_chpl;
#line 102 "ttt.chpl"
    *(this_chpl23 + INT64(0)) = INT64(7);
#line 102 "ttt.chpl"
    *(i_chpl23 + INT64(0)) = *(this_chpl23 + INT64(0));
#line 102 "ttt.chpl"
    ret_chpl88 = tmp_chpl43;
#line 102 "ttt.chpl"
    call_tmp_chpl155 = ret_chpl88;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl155, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl89 = (call_tmp_chpl155)->dom;
#line 102 "ttt.chpl"
    chpl_check_nil(ret_chpl89, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl156 = dsiMember(ret_chpl89, &this_chpl23, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    call_tmp_chpl157 = (! call_tmp_chpl156);
#line 102 "ttt.chpl"
    if (call_tmp_chpl157) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl158, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      halt3(call_tmp_chpl158, &this_chpl23, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    sum_chpl23 = INT64(0);
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl155, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret__chpl23 = &((call_tmp_chpl155)->blk);
#line 102 "ttt.chpl"
    ret_x1_chpl23 = *(*(ret__chpl23) + INT64(0));
#line 102 "ttt.chpl"
    coerce_tmp_chpl45 = *(i_chpl23 + INT64(0));
#line 102 "ttt.chpl"
    call_tmp_chpl159 = (coerce_tmp_chpl45 * ret_x1_chpl23);
#line 102 "ttt.chpl"
    sum_chpl23 += call_tmp_chpl159;
#line 102 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl155, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
    ret_chpl90 = (call_tmp_chpl155)->shiftedData;
#line 102 "ttt.chpl"
    coerce_tmp_chpl46 = ret_chpl90;
#line 102 "ttt.chpl"
    call_tmp_chpl160 = (coerce_tmp_chpl46 + sum_chpl23);
#line 102 "ttt.chpl"
    ret_chpl91 = *(call_tmp_chpl160);
#line 102 "ttt.chpl"
    call_tmp_chpl161 = (ret_chpl91 == key_chpl);
#line 102 "ttt.chpl"
    if (call_tmp_chpl161) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl45 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl24 + INT64(0)) = INT64(5);
#line 102 "ttt.chpl"
      *(i_chpl24 + INT64(0)) = *(this_chpl24 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl92 = tmp_chpl45;
#line 102 "ttt.chpl"
      call_tmp_chpl162 = ret_chpl92;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl162, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl93 = (call_tmp_chpl162)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl93, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl163 = dsiMember(ret_chpl93, &this_chpl24, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl164 = (! call_tmp_chpl163);
#line 102 "ttt.chpl"
      if (call_tmp_chpl164) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl165, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl165, &this_chpl24, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl24 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl162, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl24 = &((call_tmp_chpl162)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl24 = *(*(ret__chpl24) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl47 = *(i_chpl24 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl166 = (coerce_tmp_chpl47 * ret_x1_chpl24);
#line 102 "ttt.chpl"
      sum_chpl24 += call_tmp_chpl166;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl162, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl94 = (call_tmp_chpl162)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl48 = ret_chpl94;
#line 102 "ttt.chpl"
      call_tmp_chpl167 = (coerce_tmp_chpl48 + sum_chpl24);
#line 102 "ttt.chpl"
      ret_chpl95 = *(call_tmp_chpl167);
#line 102 "ttt.chpl"
      call_tmp_chpl168 = (ret_chpl95 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl44 = call_tmp_chpl168;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl44 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    if (tmp_chpl44) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl47 = a_chpl;
#line 102 "ttt.chpl"
      *(this_chpl25 + INT64(0)) = INT64(3);
#line 102 "ttt.chpl"
      *(i_chpl25 + INT64(0)) = *(this_chpl25 + INT64(0));
#line 102 "ttt.chpl"
      ret_chpl96 = tmp_chpl47;
#line 102 "ttt.chpl"
      call_tmp_chpl169 = ret_chpl96;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl169, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl97 = (call_tmp_chpl169)->dom;
#line 102 "ttt.chpl"
      chpl_check_nil(ret_chpl97, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl170 = dsiMember(ret_chpl97, &this_chpl25, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      call_tmp_chpl171 = (! call_tmp_chpl170);
#line 102 "ttt.chpl"
      if (call_tmp_chpl171) /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
      {
#line 102 "ttt.chpl"
        string_from_c_string(&call_tmp_chpl172, "array index out of bounds: ", INT64(0), INT64(0), INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
        halt3(call_tmp_chpl172, &this_chpl25, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      }
#line 102 "ttt.chpl"
      sum_chpl25 = INT64(0);
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl169, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret__chpl25 = &((call_tmp_chpl169)->blk);
#line 102 "ttt.chpl"
      ret_x1_chpl25 = *(*(ret__chpl25) + INT64(0));
#line 102 "ttt.chpl"
      coerce_tmp_chpl49 = *(i_chpl25 + INT64(0));
#line 102 "ttt.chpl"
      call_tmp_chpl173 = (coerce_tmp_chpl49 * ret_x1_chpl25);
#line 102 "ttt.chpl"
      sum_chpl25 += call_tmp_chpl173;
#line 102 "ttt.chpl"
      chpl_check_nil(call_tmp_chpl169, INT64(102), "ttt.chpl");
#line 102 "ttt.chpl"
      ret_chpl98 = (call_tmp_chpl169)->shiftedData;
#line 102 "ttt.chpl"
      coerce_tmp_chpl50 = ret_chpl98;
#line 102 "ttt.chpl"
      call_tmp_chpl174 = (coerce_tmp_chpl50 + sum_chpl25);
#line 102 "ttt.chpl"
      ret_chpl99 = *(call_tmp_chpl174);
#line 102 "ttt.chpl"
      call_tmp_chpl175 = (ret_chpl99 == key_chpl);
#line 102 "ttt.chpl"
      tmp_chpl46 = call_tmp_chpl175;
#line 102 "ttt.chpl"
    } else /* ZLINE: 102 ttt.chpl */
#line 102 "ttt.chpl"
    {
#line 102 "ttt.chpl"
      tmp_chpl46 = false;
#line 102 "ttt.chpl"
    }
#line 102 "ttt.chpl"
    tmp_chpl42 = tmp_chpl46;
#line 102 "ttt.chpl"
  }
#line 102 "ttt.chpl"
  if (tmp_chpl42) /* ZLINE: 106 ttt.chpl */
#line 102 "ttt.chpl"
  {
#line 106 "ttt.chpl"
    result_chpl = key_chpl;
#line 106 "ttt.chpl"
  }
#line 109 "ttt.chpl"
  call_tmp_chpl176 = (assumeIndex_chpl != INT64(0));
#line 109 "ttt.chpl"
  if (call_tmp_chpl176) /* ZLINE: 110 ttt.chpl */
#line 109 "ttt.chpl"
  {
#line 110 "ttt.chpl"
    *(this_chpl26 + INT64(0)) = assumeIndex_chpl;
#line 110 "ttt.chpl"
    *(i_chpl26 + INT64(0)) = *(this_chpl26 + INT64(0));
#line 110 "ttt.chpl"
    ret_chpl100 = a_chpl;
#line 110 "ttt.chpl"
    call_tmp_chpl177 = ret_chpl100;
#line 110 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl177, INT64(110), "ttt.chpl");
#line 110 "ttt.chpl"
    ret_chpl101 = (call_tmp_chpl177)->dom;
#line 110 "ttt.chpl"
    chpl_check_nil(ret_chpl101, INT64(110), "ttt.chpl");
#line 110 "ttt.chpl"
    call_tmp_chpl178 = dsiMember(ret_chpl101, &this_chpl26, INT64(110), "ttt.chpl");
#line 110 "ttt.chpl"
    call_tmp_chpl179 = (! call_tmp_chpl178);
#line 110 "ttt.chpl"
    if (call_tmp_chpl179) /* ZLINE: 110 ttt.chpl */
#line 110 "ttt.chpl"
    {
#line 110 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl180, "array index out of bounds: ", INT64(0), INT64(0), INT64(110), "ttt.chpl");
#line 110 "ttt.chpl"
      halt3(call_tmp_chpl180, &this_chpl26, INT64(110), "ttt.chpl");
#line 110 "ttt.chpl"
    }
#line 110 "ttt.chpl"
    sum_chpl26 = INT64(0);
#line 110 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl177, INT64(110), "ttt.chpl");
#line 110 "ttt.chpl"
    ret__chpl26 = &((call_tmp_chpl177)->blk);
#line 110 "ttt.chpl"
    ret_x1_chpl26 = *(*(ret__chpl26) + INT64(0));
#line 110 "ttt.chpl"
    coerce_tmp_chpl51 = *(i_chpl26 + INT64(0));
#line 110 "ttt.chpl"
    call_tmp_chpl181 = (coerce_tmp_chpl51 * ret_x1_chpl26);
#line 110 "ttt.chpl"
    sum_chpl26 += call_tmp_chpl181;
#line 110 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl177, INT64(110), "ttt.chpl");
#line 110 "ttt.chpl"
    ret_chpl102 = (call_tmp_chpl177)->shiftedData;
#line 110 "ttt.chpl"
    coerce_tmp_chpl52 = ret_chpl102;
#line 110 "ttt.chpl"
    call_tmp_chpl182 = (coerce_tmp_chpl52 + sum_chpl26);
#line 110 "ttt.chpl"
    *(call_tmp_chpl182) = INT64(0);
#line 110 "ttt.chpl"
  }
#line 94 "ttt.chpl"
  return result_chpl;
#line 94 "ttt.chpl"
}

#line 94 "ttt.chpl"
/* ttt.chpl:116 */
#line 94 "ttt.chpl"
void resetGame(c_ptr_GtkWidget_chpl btn, c_void_ptr data) {
#line 94 "ttt.chpl"
  int64_t _ic__F1_high_chpl;
#line 94 "ttt.chpl"
  int64_t i_chpl;
#line 94 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl2;
#line 94 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl;
#line 94 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl = NULL;
#line 94 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl2 = NULL;
#line 94 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl3 = NULL;
#line 94 "ttt.chpl"
  chpl_bool call_tmp_chpl2;
#line 94 "ttt.chpl"
  chpl_bool call_tmp_chpl3;
#line 94 "ttt.chpl"
  chpl_string call_tmp_chpl4;
#line 94 "ttt.chpl"
  int64_t sum_chpl;
#line 94 "ttt.chpl"
  int64_t ret_x1_chpl;
#line 94 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
#line 94 "ttt.chpl"
  int64_t coerce_tmp_chpl;
#line 94 "ttt.chpl"
  int64_t call_tmp_chpl5;
#line 94 "ttt.chpl"
  _ddata_int64_t ret_chpl4 = NULL;
#line 94 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl2 = NULL;
#line 94 "ttt.chpl"
  _ref_int64_t call_tmp_chpl6 = NULL;
#line 94 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl3;
#line 94 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl2;
#line 94 "ttt.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp_chpl7 = NULL;
#line 94 "ttt.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_chpl5 = NULL;
#line 94 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl6 = NULL;
#line 94 "ttt.chpl"
  chpl_bool call_tmp_chpl8;
#line 94 "ttt.chpl"
  chpl_bool call_tmp_chpl9;
#line 94 "ttt.chpl"
  chpl_string call_tmp_chpl10;
#line 94 "ttt.chpl"
  int64_t sum_chpl2;
#line 94 "ttt.chpl"
  int64_t ret_x1_chpl2;
#line 94 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
#line 94 "ttt.chpl"
  int64_t coerce_tmp_chpl3;
#line 94 "ttt.chpl"
  int64_t call_tmp_chpl11;
#line 94 "ttt.chpl"
  _ddata_c_ptr_GtkWidget ret_chpl7 = NULL;
#line 94 "ttt.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp_chpl4 = NULL;
#line 94 "ttt.chpl"
  c_ptr_GtkWidget_chpl ret_chpl8 = NULL;
#line 94 "ttt.chpl"
  _ref_c_ptr_GtkWidget call_tmp_chpl12 = NULL;
#line 94 "ttt.chpl"
  c_ptr_GtkButton_chpl call_tmp_chpl13 = NULL;
#line 94 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl14 = NULL;
#line 118 "ttt.chpl"
  playCounter_chpl = INT64(0);
#line 120 "ttt.chpl"
  _ic__F1_high_chpl = INT64(9);
#line 120 "ttt.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(9), INT64(1), INT64(1), INT64(9), true, INT64(120), "ttt.chpl");
#line 120 "ttt.chpl"
  for (i_chpl = INT64(1); ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
#line 121 "ttt.chpl"
    *(this_chpl + INT64(0)) = i_chpl;
#line 121 "ttt.chpl"
    *(i_chpl2 + INT64(0)) = *(this_chpl + INT64(0));
#line 121 "ttt.chpl"
    ret_chpl2 = boardMatrix_chpl;
#line 121 "ttt.chpl"
    call_tmp_chpl = ret_chpl2;
#line 121 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl, INT64(121), "ttt.chpl");
#line 121 "ttt.chpl"
    ret_chpl3 = (call_tmp_chpl)->dom;
#line 121 "ttt.chpl"
    chpl_check_nil(ret_chpl3, INT64(121), "ttt.chpl");
#line 121 "ttt.chpl"
    call_tmp_chpl2 = dsiMember(ret_chpl3, &this_chpl, INT64(121), "ttt.chpl");
#line 121 "ttt.chpl"
    call_tmp_chpl3 = (! call_tmp_chpl2);
#line 121 "ttt.chpl"
    if (call_tmp_chpl3) /* ZLINE: 121 ttt.chpl */
#line 121 "ttt.chpl"
    {
#line 121 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl4, "array index out of bounds: ", INT64(0), INT64(0), INT64(121), "ttt.chpl");
#line 121 "ttt.chpl"
      halt3(call_tmp_chpl4, &this_chpl, INT64(121), "ttt.chpl");
#line 121 "ttt.chpl"
    }
#line 121 "ttt.chpl"
    sum_chpl = INT64(0);
#line 121 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl, INT64(121), "ttt.chpl");
#line 121 "ttt.chpl"
    ret__chpl = &((call_tmp_chpl)->blk);
#line 121 "ttt.chpl"
    ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 121 "ttt.chpl"
    coerce_tmp_chpl = *(i_chpl2 + INT64(0));
#line 121 "ttt.chpl"
    call_tmp_chpl5 = (coerce_tmp_chpl * ret_x1_chpl);
#line 121 "ttt.chpl"
    sum_chpl += call_tmp_chpl5;
#line 121 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl, INT64(121), "ttt.chpl");
#line 121 "ttt.chpl"
    ret_chpl4 = (call_tmp_chpl)->shiftedData;
#line 121 "ttt.chpl"
    coerce_tmp_chpl2 = ret_chpl4;
#line 121 "ttt.chpl"
    call_tmp_chpl6 = (coerce_tmp_chpl2 + sum_chpl);
#line 121 "ttt.chpl"
    *(call_tmp_chpl6) = INT64(0);
#line 122 "ttt.chpl"
    *(this_chpl2 + INT64(0)) = i_chpl;
#line 122 "ttt.chpl"
    *(i_chpl3 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 122 "ttt.chpl"
    ret_chpl5 = button_array_chpl;
#line 122 "ttt.chpl"
    call_tmp_chpl7 = ret_chpl5;
#line 122 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl7, INT64(122), "ttt.chpl");
#line 122 "ttt.chpl"
    ret_chpl6 = (call_tmp_chpl7)->dom;
#line 122 "ttt.chpl"
    chpl_check_nil(ret_chpl6, INT64(122), "ttt.chpl");
#line 122 "ttt.chpl"
    call_tmp_chpl8 = dsiMember(ret_chpl6, &this_chpl2, INT64(122), "ttt.chpl");
#line 122 "ttt.chpl"
    call_tmp_chpl9 = (! call_tmp_chpl8);
#line 122 "ttt.chpl"
    if (call_tmp_chpl9) /* ZLINE: 122 ttt.chpl */
#line 122 "ttt.chpl"
    {
#line 122 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl10, "array index out of bounds: ", INT64(0), INT64(0), INT64(122), "ttt.chpl");
#line 122 "ttt.chpl"
      halt3(call_tmp_chpl10, &this_chpl2, INT64(122), "ttt.chpl");
#line 122 "ttt.chpl"
    }
#line 122 "ttt.chpl"
    sum_chpl2 = INT64(0);
#line 122 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl7, INT64(122), "ttt.chpl");
#line 122 "ttt.chpl"
    ret__chpl2 = &((call_tmp_chpl7)->blk);
#line 122 "ttt.chpl"
    ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 122 "ttt.chpl"
    coerce_tmp_chpl3 = *(i_chpl3 + INT64(0));
#line 122 "ttt.chpl"
    call_tmp_chpl11 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 122 "ttt.chpl"
    sum_chpl2 += call_tmp_chpl11;
#line 122 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl7, INT64(122), "ttt.chpl");
#line 122 "ttt.chpl"
    ret_chpl7 = (call_tmp_chpl7)->shiftedData;
#line 122 "ttt.chpl"
    coerce_tmp_chpl4 = ret_chpl7;
#line 122 "ttt.chpl"
    call_tmp_chpl12 = (coerce_tmp_chpl4 + sum_chpl2);
#line 122 "ttt.chpl"
    ret_chpl8 = *(call_tmp_chpl12);
#line 122 "ttt.chpl"
    call_tmp_chpl13 = GTK_BUTTON(ret_chpl8);
#line 122 "ttt.chpl"
    gtk_button_set_label(call_tmp_chpl13, "");
#line 122 "ttt.chpl"
  }
#line 124 "ttt.chpl"
  call_tmp_chpl14 = GTK_LABEL(output_chpl);
#line 124 "ttt.chpl"
  gtk_label_set_text(call_tmp_chpl14, "Player one start play");
#line 116 "ttt.chpl"
  return;
#line 116 "ttt.chpl"
}

#line 116 "ttt.chpl"
/* ttt.chpl:127 */
#line 116 "ttt.chpl"
void record_move(c_ptr_GtkWidget_chpl button, c_ptr_int64_t_chpl numPtr) {
#line 116 "ttt.chpl"
  int64_t ret_chpl2;
#line 116 "ttt.chpl"
  _ref_int64_t call_tmp_chpl = NULL;
#line 116 "ttt.chpl"
  c_void_ptr type_tmp_chpl;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl2;
#line 116 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl;
#line 116 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl;
#line 116 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl3 = NULL;
#line 116 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl3 = NULL;
#line 116 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl4 = NULL;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl4;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl5;
#line 116 "ttt.chpl"
  chpl_string call_tmp_chpl6;
#line 116 "ttt.chpl"
  int64_t sum_chpl;
#line 116 "ttt.chpl"
  int64_t ret_x1_chpl;
#line 116 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
#line 116 "ttt.chpl"
  int64_t coerce_tmp_chpl;
#line 116 "ttt.chpl"
  int64_t call_tmp_chpl7;
#line 116 "ttt.chpl"
  _ddata_int64_t ret_chpl5 = NULL;
#line 116 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl2 = NULL;
#line 116 "ttt.chpl"
  int64_t ret_chpl6;
#line 116 "ttt.chpl"
  _ref_int64_t call_tmp_chpl8 = NULL;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl9;
#line 116 "ttt.chpl"
  int64_t call_tmp_chpl10;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl11;
#line 116 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl12 = NULL;
#line 116 "ttt.chpl"
  int64_t call_tmp_chpl13;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl14;
#line 116 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl2;
#line 116 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl2;
#line 116 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl15 = NULL;
#line 116 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl7 = NULL;
#line 116 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl8 = NULL;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl16;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl17;
#line 116 "ttt.chpl"
  chpl_string call_tmp_chpl18;
#line 116 "ttt.chpl"
  int64_t sum_chpl2;
#line 116 "ttt.chpl"
  int64_t ret_x1_chpl2;
#line 116 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
#line 116 "ttt.chpl"
  int64_t coerce_tmp_chpl3;
#line 116 "ttt.chpl"
  int64_t call_tmp_chpl19;
#line 116 "ttt.chpl"
  _ddata_int64_t ret_chpl9 = NULL;
#line 116 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl4 = NULL;
#line 116 "ttt.chpl"
  _ref_int64_t call_tmp_chpl20 = NULL;
#line 116 "ttt.chpl"
  c_ptr_GtkButton_chpl call_tmp_chpl21 = NULL;
#line 116 "ttt.chpl"
  int64_t wrap_call_tmp_chpl;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl22;
#line 116 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl23 = NULL;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl24;
#line 116 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl25 = NULL;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl26;
#line 116 "ttt.chpl"
  int64_t call_tmp_chpl27;
#line 116 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl3;
#line 116 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl3;
#line 116 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl28 = NULL;
#line 116 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl10 = NULL;
#line 116 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl11 = NULL;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl29;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl30;
#line 116 "ttt.chpl"
  chpl_string call_tmp_chpl31;
#line 116 "ttt.chpl"
  int64_t sum_chpl3;
#line 116 "ttt.chpl"
  int64_t ret_x1_chpl3;
#line 116 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl3 = NULL;
#line 116 "ttt.chpl"
  int64_t coerce_tmp_chpl5;
#line 116 "ttt.chpl"
  int64_t call_tmp_chpl32;
#line 116 "ttt.chpl"
  _ddata_int64_t ret_chpl12 = NULL;
#line 116 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl6 = NULL;
#line 116 "ttt.chpl"
  _ref_int64_t call_tmp_chpl33 = NULL;
#line 116 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl4;
#line 116 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl4;
#line 116 "ttt.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp_chpl34 = NULL;
#line 116 "ttt.chpl"
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_chpl13 = NULL;
#line 116 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl14 = NULL;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl35;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl36;
#line 116 "ttt.chpl"
  chpl_string call_tmp_chpl37;
#line 116 "ttt.chpl"
  int64_t sum_chpl4;
#line 116 "ttt.chpl"
  int64_t ret_x1_chpl4;
#line 116 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl4 = NULL;
#line 116 "ttt.chpl"
  int64_t coerce_tmp_chpl7;
#line 116 "ttt.chpl"
  int64_t call_tmp_chpl38;
#line 116 "ttt.chpl"
  _ddata_c_ptr_GtkWidget ret_chpl15 = NULL;
#line 116 "ttt.chpl"
  _ddata_c_ptr_GtkWidget coerce_tmp_chpl8 = NULL;
#line 116 "ttt.chpl"
  c_ptr_GtkWidget_chpl ret_chpl16 = NULL;
#line 116 "ttt.chpl"
  _ref_c_ptr_GtkWidget call_tmp_chpl39 = NULL;
#line 116 "ttt.chpl"
  c_ptr_GtkButton_chpl call_tmp_chpl40 = NULL;
#line 116 "ttt.chpl"
  int64_t wrap_call_tmp_chpl2;
#line 116 "ttt.chpl"
  chpl_bool call_tmp_chpl41;
#line 116 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl42 = NULL;
#line 116 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl43 = NULL;
#line 129 "ttt.chpl"
  call_tmp_chpl = (numPtr + INT64(0));
#line 129 "ttt.chpl"
  ret_chpl2 = *(call_tmp_chpl);
#line 133 "ttt.chpl"
  call_tmp_chpl2 = gameOver_chpl;
#line 133 "ttt.chpl"
  if (call_tmp_chpl2) /* ZLINE: 134 ttt.chpl */
#line 133 "ttt.chpl"
  {
#line 134 "ttt.chpl"
    resetGame(button, type_tmp_chpl);
#line 135 "ttt.chpl"
    gameOver_chpl = false;
#line 135 "ttt.chpl"
  } else /* ZLINE: 133 ttt.chpl */
#line 135 "ttt.chpl"
  {
#line 137 "ttt.chpl"
    *(this_chpl + INT64(0)) = ret_chpl2;
#line 137 "ttt.chpl"
    *(i_chpl + INT64(0)) = *(this_chpl + INT64(0));
#line 137 "ttt.chpl"
    ret_chpl3 = boardMatrix_chpl;
#line 137 "ttt.chpl"
    call_tmp_chpl3 = ret_chpl3;
#line 137 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl3, INT64(137), "ttt.chpl");
#line 137 "ttt.chpl"
    ret_chpl4 = (call_tmp_chpl3)->dom;
#line 137 "ttt.chpl"
    chpl_check_nil(ret_chpl4, INT64(137), "ttt.chpl");
#line 137 "ttt.chpl"
    call_tmp_chpl4 = dsiMember(ret_chpl4, &this_chpl, INT64(137), "ttt.chpl");
#line 137 "ttt.chpl"
    call_tmp_chpl5 = (! call_tmp_chpl4);
#line 137 "ttt.chpl"
    if (call_tmp_chpl5) /* ZLINE: 137 ttt.chpl */
#line 137 "ttt.chpl"
    {
#line 137 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl6, "array index out of bounds: ", INT64(0), INT64(0), INT64(137), "ttt.chpl");
#line 137 "ttt.chpl"
      halt3(call_tmp_chpl6, &this_chpl, INT64(137), "ttt.chpl");
#line 137 "ttt.chpl"
    }
#line 137 "ttt.chpl"
    sum_chpl = INT64(0);
#line 137 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl3, INT64(137), "ttt.chpl");
#line 137 "ttt.chpl"
    ret__chpl = &((call_tmp_chpl3)->blk);
#line 137 "ttt.chpl"
    ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 137 "ttt.chpl"
    coerce_tmp_chpl = *(i_chpl + INT64(0));
#line 137 "ttt.chpl"
    call_tmp_chpl7 = (coerce_tmp_chpl * ret_x1_chpl);
#line 137 "ttt.chpl"
    sum_chpl += call_tmp_chpl7;
#line 137 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl3, INT64(137), "ttt.chpl");
#line 137 "ttt.chpl"
    ret_chpl5 = (call_tmp_chpl3)->shiftedData;
#line 137 "ttt.chpl"
    coerce_tmp_chpl2 = ret_chpl5;
#line 137 "ttt.chpl"
    call_tmp_chpl8 = (coerce_tmp_chpl2 + sum_chpl);
#line 137 "ttt.chpl"
    ret_chpl6 = *(call_tmp_chpl8);
#line 137 "ttt.chpl"
    call_tmp_chpl9 = (ret_chpl6 != INT64(0));
#line 137 "ttt.chpl"
    if (call_tmp_chpl9) /* ZLINE: 139 ttt.chpl */
#line 137 "ttt.chpl"
    {
#line 139 "ttt.chpl"
      call_tmp_chpl10 = (playCounter_chpl % INT64(2));
#line 139 "ttt.chpl"
      call_tmp_chpl11 = (call_tmp_chpl10 == INT64(0));
#line 139 "ttt.chpl"
      if (call_tmp_chpl11) /* ZLINE: 140 ttt.chpl */
#line 139 "ttt.chpl"
      {
#line 140 "ttt.chpl"
        call_tmp_chpl12 = GTK_LABEL(output_chpl);
#line 140 "ttt.chpl"
        gtk_label_set_text(call_tmp_chpl12, "   Invalid move, spot occupied, Play again");
#line 140 "ttt.chpl"
      }
#line 140 "ttt.chpl"
    } else /* ZLINE: 147 ttt.chpl */
#line 140 "ttt.chpl"
    {
#line 147 "ttt.chpl"
      call_tmp_chpl13 = (playCounter_chpl % INT64(2));
#line 147 "ttt.chpl"
      call_tmp_chpl14 = (call_tmp_chpl13 == INT64(0));
#line 147 "ttt.chpl"
      if (call_tmp_chpl14) /* ZLINE: 148 ttt.chpl */
#line 147 "ttt.chpl"
      {
#line 148 "ttt.chpl"
        *(this_chpl2 + INT64(0)) = ret_chpl2;
#line 148 "ttt.chpl"
        *(i_chpl2 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 148 "ttt.chpl"
        ret_chpl7 = boardMatrix_chpl;
#line 148 "ttt.chpl"
        call_tmp_chpl15 = ret_chpl7;
#line 148 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl15, INT64(148), "ttt.chpl");
#line 148 "ttt.chpl"
        ret_chpl8 = (call_tmp_chpl15)->dom;
#line 148 "ttt.chpl"
        chpl_check_nil(ret_chpl8, INT64(148), "ttt.chpl");
#line 148 "ttt.chpl"
        call_tmp_chpl16 = dsiMember(ret_chpl8, &this_chpl2, INT64(148), "ttt.chpl");
#line 148 "ttt.chpl"
        call_tmp_chpl17 = (! call_tmp_chpl16);
#line 148 "ttt.chpl"
        if (call_tmp_chpl17) /* ZLINE: 148 ttt.chpl */
#line 148 "ttt.chpl"
        {
#line 148 "ttt.chpl"
          string_from_c_string(&call_tmp_chpl18, "array index out of bounds: ", INT64(0), INT64(0), INT64(148), "ttt.chpl");
#line 148 "ttt.chpl"
          halt3(call_tmp_chpl18, &this_chpl2, INT64(148), "ttt.chpl");
#line 148 "ttt.chpl"
        }
#line 148 "ttt.chpl"
        sum_chpl2 = INT64(0);
#line 148 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl15, INT64(148), "ttt.chpl");
#line 148 "ttt.chpl"
        ret__chpl2 = &((call_tmp_chpl15)->blk);
#line 148 "ttt.chpl"
        ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 148 "ttt.chpl"
        coerce_tmp_chpl3 = *(i_chpl2 + INT64(0));
#line 148 "ttt.chpl"
        call_tmp_chpl19 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 148 "ttt.chpl"
        sum_chpl2 += call_tmp_chpl19;
#line 148 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl15, INT64(148), "ttt.chpl");
#line 148 "ttt.chpl"
        ret_chpl9 = (call_tmp_chpl15)->shiftedData;
#line 148 "ttt.chpl"
        coerce_tmp_chpl4 = ret_chpl9;
#line 148 "ttt.chpl"
        call_tmp_chpl20 = (coerce_tmp_chpl4 + sum_chpl2);
#line 148 "ttt.chpl"
        *(call_tmp_chpl20) = INT64(1);
#line 149 "ttt.chpl"
        call_tmp_chpl21 = GTK_BUTTON(button);
#line 149 "ttt.chpl"
        gtk_button_set_label(call_tmp_chpl21, "O");
#line 150 "ttt.chpl"
        playCounter_chpl += INT64(1);
#line 152 "ttt.chpl"
        wrap_call_tmp_chpl = analyseBoard_chpl(boardMatrix_chpl, INT64(1), INT64(0));
#line 154 "ttt.chpl"
        call_tmp_chpl22 = (wrap_call_tmp_chpl != INT64(0));
#line 154 "ttt.chpl"
        if (call_tmp_chpl22) /* ZLINE: 155 ttt.chpl */
#line 154 "ttt.chpl"
        {
#line 155 "ttt.chpl"
          call_tmp_chpl23 = GTK_LABEL(output_chpl);
#line 155 "ttt.chpl"
          gtk_label_set_text(call_tmp_chpl23, "  Game Over: You win!!");
#line 156 "ttt.chpl"
          gameOver_chpl = true;
#line 156 "ttt.chpl"
        } else /* ZLINE: 160 ttt.chpl */
#line 156 "ttt.chpl"
        {
#line 160 "ttt.chpl"
          call_tmp_chpl24 = (playCounter_chpl > INT64(1));
#line 160 "ttt.chpl"
          if (call_tmp_chpl24) /* ZLINE: 161 ttt.chpl */
#line 160 "ttt.chpl"
          {
#line 161 "ttt.chpl"
            call_tmp_chpl25 = GTK_LABEL(output_chpl);
#line 161 "ttt.chpl"
            gtk_label_set_text(call_tmp_chpl25, "");
#line 161 "ttt.chpl"
          }
#line 165 "ttt.chpl"
          call_tmp_chpl26 = (playCounter_chpl < INT64(9));
#line 165 "ttt.chpl"
          if (call_tmp_chpl26) /* ZLINE: 166 ttt.chpl */
#line 165 "ttt.chpl"
          {
#line 166 "ttt.chpl"
            call_tmp_chpl27 = computersMind_chpl(boardMatrix_chpl);
#line 167 "ttt.chpl"
            *(this_chpl3 + INT64(0)) = call_tmp_chpl27;
#line 167 "ttt.chpl"
            *(i_chpl3 + INT64(0)) = *(this_chpl3 + INT64(0));
#line 167 "ttt.chpl"
            ret_chpl10 = boardMatrix_chpl;
#line 167 "ttt.chpl"
            call_tmp_chpl28 = ret_chpl10;
#line 167 "ttt.chpl"
            chpl_check_nil(call_tmp_chpl28, INT64(167), "ttt.chpl");
#line 167 "ttt.chpl"
            ret_chpl11 = (call_tmp_chpl28)->dom;
#line 167 "ttt.chpl"
            chpl_check_nil(ret_chpl11, INT64(167), "ttt.chpl");
#line 167 "ttt.chpl"
            call_tmp_chpl29 = dsiMember(ret_chpl11, &this_chpl3, INT64(167), "ttt.chpl");
#line 167 "ttt.chpl"
            call_tmp_chpl30 = (! call_tmp_chpl29);
#line 167 "ttt.chpl"
            if (call_tmp_chpl30) /* ZLINE: 167 ttt.chpl */
#line 167 "ttt.chpl"
            {
#line 167 "ttt.chpl"
              string_from_c_string(&call_tmp_chpl31, "array index out of bounds: ", INT64(0), INT64(0), INT64(167), "ttt.chpl");
#line 167 "ttt.chpl"
              halt3(call_tmp_chpl31, &this_chpl3, INT64(167), "ttt.chpl");
#line 167 "ttt.chpl"
            }
#line 167 "ttt.chpl"
            sum_chpl3 = INT64(0);
#line 167 "ttt.chpl"
            chpl_check_nil(call_tmp_chpl28, INT64(167), "ttt.chpl");
#line 167 "ttt.chpl"
            ret__chpl3 = &((call_tmp_chpl28)->blk);
#line 167 "ttt.chpl"
            ret_x1_chpl3 = *(*(ret__chpl3) + INT64(0));
#line 167 "ttt.chpl"
            coerce_tmp_chpl5 = *(i_chpl3 + INT64(0));
#line 167 "ttt.chpl"
            call_tmp_chpl32 = (coerce_tmp_chpl5 * ret_x1_chpl3);
#line 167 "ttt.chpl"
            sum_chpl3 += call_tmp_chpl32;
#line 167 "ttt.chpl"
            chpl_check_nil(call_tmp_chpl28, INT64(167), "ttt.chpl");
#line 167 "ttt.chpl"
            ret_chpl12 = (call_tmp_chpl28)->shiftedData;
#line 167 "ttt.chpl"
            coerce_tmp_chpl6 = ret_chpl12;
#line 167 "ttt.chpl"
            call_tmp_chpl33 = (coerce_tmp_chpl6 + sum_chpl3);
#line 167 "ttt.chpl"
            *(call_tmp_chpl33) = INT64(2);
#line 168 "ttt.chpl"
            *(this_chpl4 + INT64(0)) = call_tmp_chpl27;
#line 168 "ttt.chpl"
            *(i_chpl4 + INT64(0)) = *(this_chpl4 + INT64(0));
#line 168 "ttt.chpl"
            ret_chpl13 = button_array_chpl;
#line 168 "ttt.chpl"
            call_tmp_chpl34 = ret_chpl13;
#line 168 "ttt.chpl"
            chpl_check_nil(call_tmp_chpl34, INT64(168), "ttt.chpl");
#line 168 "ttt.chpl"
            ret_chpl14 = (call_tmp_chpl34)->dom;
#line 168 "ttt.chpl"
            chpl_check_nil(ret_chpl14, INT64(168), "ttt.chpl");
#line 168 "ttt.chpl"
            call_tmp_chpl35 = dsiMember(ret_chpl14, &this_chpl4, INT64(168), "ttt.chpl");
#line 168 "ttt.chpl"
            call_tmp_chpl36 = (! call_tmp_chpl35);
#line 168 "ttt.chpl"
            if (call_tmp_chpl36) /* ZLINE: 168 ttt.chpl */
#line 168 "ttt.chpl"
            {
#line 168 "ttt.chpl"
              string_from_c_string(&call_tmp_chpl37, "array index out of bounds: ", INT64(0), INT64(0), INT64(168), "ttt.chpl");
#line 168 "ttt.chpl"
              halt3(call_tmp_chpl37, &this_chpl4, INT64(168), "ttt.chpl");
#line 168 "ttt.chpl"
            }
#line 168 "ttt.chpl"
            sum_chpl4 = INT64(0);
#line 168 "ttt.chpl"
            chpl_check_nil(call_tmp_chpl34, INT64(168), "ttt.chpl");
#line 168 "ttt.chpl"
            ret__chpl4 = &((call_tmp_chpl34)->blk);
#line 168 "ttt.chpl"
            ret_x1_chpl4 = *(*(ret__chpl4) + INT64(0));
#line 168 "ttt.chpl"
            coerce_tmp_chpl7 = *(i_chpl4 + INT64(0));
#line 168 "ttt.chpl"
            call_tmp_chpl38 = (coerce_tmp_chpl7 * ret_x1_chpl4);
#line 168 "ttt.chpl"
            sum_chpl4 += call_tmp_chpl38;
#line 168 "ttt.chpl"
            chpl_check_nil(call_tmp_chpl34, INT64(168), "ttt.chpl");
#line 168 "ttt.chpl"
            ret_chpl15 = (call_tmp_chpl34)->shiftedData;
#line 168 "ttt.chpl"
            coerce_tmp_chpl8 = ret_chpl15;
#line 168 "ttt.chpl"
            call_tmp_chpl39 = (coerce_tmp_chpl8 + sum_chpl4);
#line 168 "ttt.chpl"
            ret_chpl16 = *(call_tmp_chpl39);
#line 168 "ttt.chpl"
            call_tmp_chpl40 = GTK_BUTTON(ret_chpl16);
#line 168 "ttt.chpl"
            gtk_button_set_label(call_tmp_chpl40, "X");
#line 170 "ttt.chpl"
            wrap_call_tmp_chpl2 = analyseBoard_chpl(boardMatrix_chpl, INT64(2), INT64(0));
#line 172 "ttt.chpl"
            call_tmp_chpl41 = (wrap_call_tmp_chpl2 != INT64(0));
#line 172 "ttt.chpl"
            if (call_tmp_chpl41) /* ZLINE: 173 ttt.chpl */
#line 172 "ttt.chpl"
            {
#line 173 "ttt.chpl"
              call_tmp_chpl42 = GTK_LABEL(output_chpl);
#line 173 "ttt.chpl"
              gtk_label_set_text(call_tmp_chpl42, "  Game Over: You lose!!");
#line 174 "ttt.chpl"
              gameOver_chpl = true;
#line 174 "ttt.chpl"
            }
#line 176 "ttt.chpl"
            playCounter_chpl += INT64(1);
#line 176 "ttt.chpl"
          } else /* ZLINE: 179 ttt.chpl */
#line 176 "ttt.chpl"
          {
#line 179 "ttt.chpl"
            gameOver_chpl = true;
#line 180 "ttt.chpl"
            call_tmp_chpl43 = GTK_LABEL(output_chpl);
#line 180 "ttt.chpl"
            gtk_label_set_text(call_tmp_chpl43, "  Game Over: Draw");
#line 180 "ttt.chpl"
          }
#line 180 "ttt.chpl"
        }
#line 180 "ttt.chpl"
      }
#line 180 "ttt.chpl"
    }
#line 180 "ttt.chpl"
  }
#line 127 "ttt.chpl"
  return;
#line 127 "ttt.chpl"
}


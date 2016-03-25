/* ttt.chpl:23 */
void resetGame(c_ptr_GtkWidget_chpl btn, c_void_ptr data) {
  int64_t _ic__F1_high_chpl;
  int64_t i_chpl;
  _tuple_1_star_int64_t i_chpl2;
  _tuple_1_star_int64_t this_chpl;
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl = NULL;
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl = NULL;
  DefaultRectangularDom_1_int64_t_F ret_chpl2 = NULL;
  chpl_bool call_tmp_chpl2;
  chpl_bool call_tmp_chpl3;
  chpl_string call_tmp_chpl4;
  int64_t sum_chpl;
  int64_t ret_x1_chpl;
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
  int64_t coerce_tmp_chpl;
  int64_t call_tmp_chpl5;
  _ddata_int64_t ret_chpl3 = NULL;
  _ddata_int64_t coerce_tmp_chpl2 = NULL;
  _ref_int64_t call_tmp_chpl6 = NULL;
  _tuple_1_star_int64_t i_chpl3;
  _tuple_1_star_int64_t this_chpl2;
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F call_tmp_chpl7 = NULL;
  DefaultRectangularArr_c_ptr_GtkWidget_1_int64_t_F ret_chpl4 = NULL;
  DefaultRectangularDom_1_int64_t_F ret_chpl5 = NULL;
  chpl_bool call_tmp_chpl8;
  chpl_bool call_tmp_chpl9;
  chpl_string call_tmp_chpl10;
  int64_t sum_chpl2;
  int64_t ret_x1_chpl2;
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
  int64_t coerce_tmp_chpl3;
  int64_t call_tmp_chpl11;
  _ddata_c_ptr_GtkWidget ret_chpl6 = NULL;
  _ddata_c_ptr_GtkWidget coerce_tmp_chpl4 = NULL;
  c_ptr_GtkWidget_chpl ret_chpl7 = NULL;
  _ref_c_ptr_GtkWidget call_tmp_chpl12 = NULL;
  c_ptr_GtkButton_chpl call_tmp_chpl13 = NULL;
  c_ptr_GtkLabel_chpl call_tmp_chpl14 = NULL;
#line 25 "ttt.chpl"
  playerTime_chpl = INT64(0);
#line 27 "ttt.chpl"
  _ic__F1_high_chpl = INT64(9);
#line 27 "ttt.chpl"
  chpl_checkIfRangeIterWillOverflow(INT64(1), INT64(9), INT64(1), INT64(1), INT64(9), true, INT64(27), "ttt.chpl");
#line 27 "ttt.chpl"
  for (i_chpl = INT64(1); ((i_chpl <= _ic__F1_high_chpl)); i_chpl += INT64(1)) {
#line 28 "ttt.chpl"
    *(this_chpl + INT64(0)) = i_chpl;
#line 28 "ttt.chpl"
    *(i_chpl2 + INT64(0)) = *(this_chpl + INT64(0));
#line 28 "ttt.chpl"
    ret_chpl = boardMatrix_chpl;
#line 28 "ttt.chpl"
    call_tmp_chpl = ret_chpl;
#line 28 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl, INT64(28), "ttt.chpl");
#line 28 "ttt.chpl"
    ret_chpl2 = (call_tmp_chpl)->dom;
#line 28 "ttt.chpl"
    chpl_check_nil(ret_chpl2, INT64(28), "ttt.chpl");
#line 28 "ttt.chpl"
    call_tmp_chpl2 = dsiMember(ret_chpl2, &this_chpl, INT64(28), "ttt.chpl");
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
    coerce_tmp_chpl = *(i_chpl2 + INT64(0));
#line 28 "ttt.chpl"
    call_tmp_chpl5 = (coerce_tmp_chpl * ret_x1_chpl);
#line 28 "ttt.chpl"
    sum_chpl += call_tmp_chpl5;
#line 28 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl, INT64(28), "ttt.chpl");
#line 28 "ttt.chpl"
    ret_chpl3 = (call_tmp_chpl)->shiftedData;
#line 28 "ttt.chpl"
    coerce_tmp_chpl2 = ret_chpl3;
#line 28 "ttt.chpl"
    call_tmp_chpl6 = (coerce_tmp_chpl2 + sum_chpl);
#line 28 "ttt.chpl"
    *(call_tmp_chpl6) = INT64(0);
#line 29 "ttt.chpl"
    *(this_chpl2 + INT64(0)) = i_chpl;
#line 29 "ttt.chpl"
    *(i_chpl3 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 29 "ttt.chpl"
    ret_chpl4 = button_array_chpl;
#line 29 "ttt.chpl"
    call_tmp_chpl7 = ret_chpl4;
#line 29 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl7, INT64(29), "ttt.chpl");
#line 29 "ttt.chpl"
    ret_chpl5 = (call_tmp_chpl7)->dom;
#line 29 "ttt.chpl"
    chpl_check_nil(ret_chpl5, INT64(29), "ttt.chpl");
#line 29 "ttt.chpl"
    call_tmp_chpl8 = dsiMember(ret_chpl5, &this_chpl2, INT64(29), "ttt.chpl");
#line 29 "ttt.chpl"
    call_tmp_chpl9 = (! call_tmp_chpl8);
#line 29 "ttt.chpl"
    if (call_tmp_chpl9) /* ZLINE: 29 ttt.chpl */
#line 29 "ttt.chpl"
    {
#line 29 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl10, "array index out of bounds: ", INT64(0), INT64(0), INT64(29), "ttt.chpl");
#line 29 "ttt.chpl"
      halt3(call_tmp_chpl10, &this_chpl2, INT64(29), "ttt.chpl");
#line 29 "ttt.chpl"
    }
#line 29 "ttt.chpl"
    sum_chpl2 = INT64(0);
#line 29 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl7, INT64(29), "ttt.chpl");
#line 29 "ttt.chpl"
    ret__chpl2 = &((call_tmp_chpl7)->blk);
#line 29 "ttt.chpl"
    ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 29 "ttt.chpl"
    coerce_tmp_chpl3 = *(i_chpl3 + INT64(0));
#line 29 "ttt.chpl"
    call_tmp_chpl11 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 29 "ttt.chpl"
    sum_chpl2 += call_tmp_chpl11;
#line 29 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl7, INT64(29), "ttt.chpl");
#line 29 "ttt.chpl"
    ret_chpl6 = (call_tmp_chpl7)->shiftedData;
#line 29 "ttt.chpl"
    coerce_tmp_chpl4 = ret_chpl6;
#line 29 "ttt.chpl"
    call_tmp_chpl12 = (coerce_tmp_chpl4 + sum_chpl2);
#line 29 "ttt.chpl"
    ret_chpl7 = *(call_tmp_chpl12);
#line 29 "ttt.chpl"
    call_tmp_chpl13 = GTK_BUTTON(ret_chpl7);
#line 29 "ttt.chpl"
    gtk_button_set_label(call_tmp_chpl13, "");
#line 29 "ttt.chpl"
  }
#line 31 "ttt.chpl"
  call_tmp_chpl14 = GTK_LABEL(output_chpl);
#line 31 "ttt.chpl"
  gtk_label_set_text(call_tmp_chpl14, "Player one start play");
#line 23 "ttt.chpl"
  return;
#line 23 "ttt.chpl"
}

#line 23 "ttt.chpl"
/* ttt.chpl:33 */
#line 23 "ttt.chpl"
void record_move(c_ptr_GtkWidget_chpl button, c_ptr_int64_t_chpl numPtr) {
#line 23 "ttt.chpl"
  int64_t ret_chpl;
#line 23 "ttt.chpl"
  _ref_int64_t call_tmp_chpl = NULL;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl2;
#line 23 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl;
#line 23 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl;
#line 23 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl3 = NULL;
#line 23 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl2 = NULL;
#line 23 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl3 = NULL;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl4;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl5;
#line 23 "ttt.chpl"
  chpl_string call_tmp_chpl6;
#line 23 "ttt.chpl"
  int64_t sum_chpl;
#line 23 "ttt.chpl"
  int64_t ret_x1_chpl;
#line 23 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
#line 23 "ttt.chpl"
  int64_t coerce_tmp_chpl;
#line 23 "ttt.chpl"
  int64_t call_tmp_chpl7;
#line 23 "ttt.chpl"
  _ddata_int64_t ret_chpl4 = NULL;
#line 23 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl2 = NULL;
#line 23 "ttt.chpl"
  int64_t ret_chpl5;
#line 23 "ttt.chpl"
  _ref_int64_t call_tmp_chpl8 = NULL;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl9;
#line 23 "ttt.chpl"
  int64_t call_tmp_chpl10;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl11;
#line 23 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl12 = NULL;
#line 23 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl13 = NULL;
#line 23 "ttt.chpl"
  int64_t call_tmp_chpl14;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl15;
#line 23 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl2;
#line 23 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl2;
#line 23 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl16 = NULL;
#line 23 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl6 = NULL;
#line 23 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl7 = NULL;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl17;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl18;
#line 23 "ttt.chpl"
  chpl_string call_tmp_chpl19;
#line 23 "ttt.chpl"
  int64_t sum_chpl2;
#line 23 "ttt.chpl"
  int64_t ret_x1_chpl2;
#line 23 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
#line 23 "ttt.chpl"
  int64_t coerce_tmp_chpl3;
#line 23 "ttt.chpl"
  int64_t call_tmp_chpl20;
#line 23 "ttt.chpl"
  _ddata_int64_t ret_chpl8 = NULL;
#line 23 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl4 = NULL;
#line 23 "ttt.chpl"
  _ref_int64_t call_tmp_chpl21 = NULL;
#line 23 "ttt.chpl"
  c_ptr_GtkButton_chpl call_tmp_chpl22 = NULL;
#line 23 "ttt.chpl"
  _tuple_1_star_int64_t i_chpl3;
#line 23 "ttt.chpl"
  _tuple_1_star_int64_t this_chpl3;
#line 23 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl23 = NULL;
#line 23 "ttt.chpl"
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl9 = NULL;
#line 23 "ttt.chpl"
  DefaultRectangularDom_1_int64_t_F ret_chpl10 = NULL;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl24;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl25;
#line 23 "ttt.chpl"
  chpl_string call_tmp_chpl26;
#line 23 "ttt.chpl"
  int64_t sum_chpl3;
#line 23 "ttt.chpl"
  int64_t ret_x1_chpl3;
#line 23 "ttt.chpl"
  _ref__tuple_1_star_int64_t ret__chpl3 = NULL;
#line 23 "ttt.chpl"
  int64_t coerce_tmp_chpl5;
#line 23 "ttt.chpl"
  int64_t call_tmp_chpl27;
#line 23 "ttt.chpl"
  _ddata_int64_t ret_chpl11 = NULL;
#line 23 "ttt.chpl"
  _ddata_int64_t coerce_tmp_chpl6 = NULL;
#line 23 "ttt.chpl"
  _ref_int64_t call_tmp_chpl28 = NULL;
#line 23 "ttt.chpl"
  c_ptr_GtkButton_chpl call_tmp_chpl29 = NULL;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl30;
#line 23 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl31 = NULL;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl32;
#line 23 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl33 = NULL;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl34;
#line 23 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl35 = NULL;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl36;
#line 23 "ttt.chpl"
  int64_t call_tmp_chpl37;
#line 23 "ttt.chpl"
  chpl_bool call_tmp_chpl38;
#line 23 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl39 = NULL;
#line 23 "ttt.chpl"
  c_ptr_GtkLabel_chpl call_tmp_chpl40 = NULL;
#line 35 "ttt.chpl"
  call_tmp_chpl = (numPtr + INT64(0));
#line 35 "ttt.chpl"
  ret_chpl = *(call_tmp_chpl);
#line 37 "ttt.chpl"
  call_tmp_chpl2 = gameOver_chpl;
#line 37 "ttt.chpl"
  if (call_tmp_chpl2) /* ZLINE: 39 ttt.chpl */
#line 37 "ttt.chpl"
  {
#line 39 "ttt.chpl"
    gameOver_chpl = false;
#line 39 "ttt.chpl"
  } else /* ZLINE: 37 ttt.chpl */
#line 39 "ttt.chpl"
  {
#line 41 "ttt.chpl"
    *(this_chpl + INT64(0)) = ret_chpl;
#line 41 "ttt.chpl"
    *(i_chpl + INT64(0)) = *(this_chpl + INT64(0));
#line 41 "ttt.chpl"
    ret_chpl2 = boardMatrix_chpl;
#line 41 "ttt.chpl"
    call_tmp_chpl3 = ret_chpl2;
#line 41 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl3, INT64(41), "ttt.chpl");
#line 41 "ttt.chpl"
    ret_chpl3 = (call_tmp_chpl3)->dom;
#line 41 "ttt.chpl"
    chpl_check_nil(ret_chpl3, INT64(41), "ttt.chpl");
#line 41 "ttt.chpl"
    call_tmp_chpl4 = dsiMember(ret_chpl3, &this_chpl, INT64(41), "ttt.chpl");
#line 41 "ttt.chpl"
    call_tmp_chpl5 = (! call_tmp_chpl4);
#line 41 "ttt.chpl"
    if (call_tmp_chpl5) /* ZLINE: 41 ttt.chpl */
#line 41 "ttt.chpl"
    {
#line 41 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl6, "array index out of bounds: ", INT64(0), INT64(0), INT64(41), "ttt.chpl");
#line 41 "ttt.chpl"
      halt3(call_tmp_chpl6, &this_chpl, INT64(41), "ttt.chpl");
#line 41 "ttt.chpl"
    }
#line 41 "ttt.chpl"
    sum_chpl = INT64(0);
#line 41 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl3, INT64(41), "ttt.chpl");
#line 41 "ttt.chpl"
    ret__chpl = &((call_tmp_chpl3)->blk);
#line 41 "ttt.chpl"
    ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 41 "ttt.chpl"
    coerce_tmp_chpl = *(i_chpl + INT64(0));
#line 41 "ttt.chpl"
    call_tmp_chpl7 = (coerce_tmp_chpl * ret_x1_chpl);
#line 41 "ttt.chpl"
    sum_chpl += call_tmp_chpl7;
#line 41 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl3, INT64(41), "ttt.chpl");
#line 41 "ttt.chpl"
    ret_chpl4 = (call_tmp_chpl3)->shiftedData;
#line 41 "ttt.chpl"
    coerce_tmp_chpl2 = ret_chpl4;
#line 41 "ttt.chpl"
    call_tmp_chpl8 = (coerce_tmp_chpl2 + sum_chpl);
#line 41 "ttt.chpl"
    ret_chpl5 = *(call_tmp_chpl8);
#line 41 "ttt.chpl"
    call_tmp_chpl9 = (ret_chpl5 != INT64(0));
#line 41 "ttt.chpl"
    if (call_tmp_chpl9) /* ZLINE: 43 ttt.chpl */
#line 41 "ttt.chpl"
    {
#line 43 "ttt.chpl"
      call_tmp_chpl10 = (playerTime_chpl % INT64(2));
#line 43 "ttt.chpl"
      call_tmp_chpl11 = (call_tmp_chpl10 == INT64(0));
#line 43 "ttt.chpl"
      if (call_tmp_chpl11) /* ZLINE: 44 ttt.chpl */
#line 43 "ttt.chpl"
      {
#line 44 "ttt.chpl"
        call_tmp_chpl12 = GTK_LABEL(output_chpl);
#line 44 "ttt.chpl"
        gtk_label_set_text(call_tmp_chpl12, "   Invalid move, spot occupied, Player one play again");
#line 44 "ttt.chpl"
      } else /* ZLINE: 47 ttt.chpl */
#line 44 "ttt.chpl"
      {
#line 47 "ttt.chpl"
        call_tmp_chpl13 = GTK_LABEL(output_chpl);
#line 47 "ttt.chpl"
        gtk_label_set_text(call_tmp_chpl13, "   Invalid move, spot occupied, Player two play again");
#line 47 "ttt.chpl"
      }
#line 47 "ttt.chpl"
    } else /* ZLINE: 53 ttt.chpl */
#line 47 "ttt.chpl"
    {
#line 53 "ttt.chpl"
      call_tmp_chpl14 = (playerTime_chpl % INT64(2));
#line 53 "ttt.chpl"
      call_tmp_chpl15 = (call_tmp_chpl14 == INT64(0));
#line 53 "ttt.chpl"
      if (call_tmp_chpl15) /* ZLINE: 54 ttt.chpl */
#line 53 "ttt.chpl"
      {
#line 54 "ttt.chpl"
        *(this_chpl2 + INT64(0)) = ret_chpl;
#line 54 "ttt.chpl"
        *(i_chpl2 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 54 "ttt.chpl"
        ret_chpl6 = boardMatrix_chpl;
#line 54 "ttt.chpl"
        call_tmp_chpl16 = ret_chpl6;
#line 54 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl16, INT64(54), "ttt.chpl");
#line 54 "ttt.chpl"
        ret_chpl7 = (call_tmp_chpl16)->dom;
#line 54 "ttt.chpl"
        chpl_check_nil(ret_chpl7, INT64(54), "ttt.chpl");
#line 54 "ttt.chpl"
        call_tmp_chpl17 = dsiMember(ret_chpl7, &this_chpl2, INT64(54), "ttt.chpl");
#line 54 "ttt.chpl"
        call_tmp_chpl18 = (! call_tmp_chpl17);
#line 54 "ttt.chpl"
        if (call_tmp_chpl18) /* ZLINE: 54 ttt.chpl */
#line 54 "ttt.chpl"
        {
#line 54 "ttt.chpl"
          string_from_c_string(&call_tmp_chpl19, "array index out of bounds: ", INT64(0), INT64(0), INT64(54), "ttt.chpl");
#line 54 "ttt.chpl"
          halt3(call_tmp_chpl19, &this_chpl2, INT64(54), "ttt.chpl");
#line 54 "ttt.chpl"
        }
#line 54 "ttt.chpl"
        sum_chpl2 = INT64(0);
#line 54 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl16, INT64(54), "ttt.chpl");
#line 54 "ttt.chpl"
        ret__chpl2 = &((call_tmp_chpl16)->blk);
#line 54 "ttt.chpl"
        ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 54 "ttt.chpl"
        coerce_tmp_chpl3 = *(i_chpl2 + INT64(0));
#line 54 "ttt.chpl"
        call_tmp_chpl20 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 54 "ttt.chpl"
        sum_chpl2 += call_tmp_chpl20;
#line 54 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl16, INT64(54), "ttt.chpl");
#line 54 "ttt.chpl"
        ret_chpl8 = (call_tmp_chpl16)->shiftedData;
#line 54 "ttt.chpl"
        coerce_tmp_chpl4 = ret_chpl8;
#line 54 "ttt.chpl"
        call_tmp_chpl21 = (coerce_tmp_chpl4 + sum_chpl2);
#line 54 "ttt.chpl"
        *(call_tmp_chpl21) = INT64(1);
#line 55 "ttt.chpl"
        call_tmp_chpl22 = GTK_BUTTON(button);
#line 55 "ttt.chpl"
        gtk_button_set_label(call_tmp_chpl22, "X");
#line 55 "ttt.chpl"
      } else /* ZLINE: 58 ttt.chpl */
#line 55 "ttt.chpl"
      {
#line 58 "ttt.chpl"
        *(this_chpl3 + INT64(0)) = ret_chpl;
#line 58 "ttt.chpl"
        *(i_chpl3 + INT64(0)) = *(this_chpl3 + INT64(0));
#line 58 "ttt.chpl"
        ret_chpl9 = boardMatrix_chpl;
#line 58 "ttt.chpl"
        call_tmp_chpl23 = ret_chpl9;
#line 58 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl23, INT64(58), "ttt.chpl");
#line 58 "ttt.chpl"
        ret_chpl10 = (call_tmp_chpl23)->dom;
#line 58 "ttt.chpl"
        chpl_check_nil(ret_chpl10, INT64(58), "ttt.chpl");
#line 58 "ttt.chpl"
        call_tmp_chpl24 = dsiMember(ret_chpl10, &this_chpl3, INT64(58), "ttt.chpl");
#line 58 "ttt.chpl"
        call_tmp_chpl25 = (! call_tmp_chpl24);
#line 58 "ttt.chpl"
        if (call_tmp_chpl25) /* ZLINE: 58 ttt.chpl */
#line 58 "ttt.chpl"
        {
#line 58 "ttt.chpl"
          string_from_c_string(&call_tmp_chpl26, "array index out of bounds: ", INT64(0), INT64(0), INT64(58), "ttt.chpl");
#line 58 "ttt.chpl"
          halt3(call_tmp_chpl26, &this_chpl3, INT64(58), "ttt.chpl");
#line 58 "ttt.chpl"
        }
#line 58 "ttt.chpl"
        sum_chpl3 = INT64(0);
#line 58 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl23, INT64(58), "ttt.chpl");
#line 58 "ttt.chpl"
        ret__chpl3 = &((call_tmp_chpl23)->blk);
#line 58 "ttt.chpl"
        ret_x1_chpl3 = *(*(ret__chpl3) + INT64(0));
#line 58 "ttt.chpl"
        coerce_tmp_chpl5 = *(i_chpl3 + INT64(0));
#line 58 "ttt.chpl"
        call_tmp_chpl27 = (coerce_tmp_chpl5 * ret_x1_chpl3);
#line 58 "ttt.chpl"
        sum_chpl3 += call_tmp_chpl27;
#line 58 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl23, INT64(58), "ttt.chpl");
#line 58 "ttt.chpl"
        ret_chpl11 = (call_tmp_chpl23)->shiftedData;
#line 58 "ttt.chpl"
        coerce_tmp_chpl6 = ret_chpl11;
#line 58 "ttt.chpl"
        call_tmp_chpl28 = (coerce_tmp_chpl6 + sum_chpl3);
#line 58 "ttt.chpl"
        *(call_tmp_chpl28) = INT64(2);
#line 59 "ttt.chpl"
        call_tmp_chpl29 = GTK_BUTTON(button);
#line 59 "ttt.chpl"
        gtk_button_set_label(call_tmp_chpl29, "O");
#line 59 "ttt.chpl"
      }
#line 65 "ttt.chpl"
      call_tmp_chpl30 = (INT64(0) != INT64(0));
#line 65 "ttt.chpl"
      if (call_tmp_chpl30) /* ZLINE: 66 ttt.chpl */
#line 65 "ttt.chpl"
      {
#line 66 "ttt.chpl"
        call_tmp_chpl31 = GTK_LABEL(output_chpl);
#line 66 "ttt.chpl"
        gtk_label_set_text(call_tmp_chpl31, "  Game Over\nPlayer one won!!");
#line 67 "ttt.chpl"
        gameOver_chpl = true;
#line 67 "ttt.chpl"
      } else /* ZLINE: 65 ttt.chpl */
#line 67 "ttt.chpl"
      {
#line 69 "ttt.chpl"
        call_tmp_chpl32 = (INT64(0) != INT64(0));
#line 69 "ttt.chpl"
        if (call_tmp_chpl32) /* ZLINE: 70 ttt.chpl */
#line 69 "ttt.chpl"
        {
#line 70 "ttt.chpl"
          call_tmp_chpl33 = GTK_LABEL(output_chpl);
#line 70 "ttt.chpl"
          gtk_label_set_text(call_tmp_chpl33, "  Game Over\nPlayer two won!!");
#line 71 "ttt.chpl"
          gameOver_chpl = true;
#line 71 "ttt.chpl"
        } else /* ZLINE: 69 ttt.chpl */
#line 71 "ttt.chpl"
        {
#line 73 "ttt.chpl"
          call_tmp_chpl34 = (playerTime_chpl == INT64(8));
#line 73 "ttt.chpl"
          if (call_tmp_chpl34) /* ZLINE: 74 ttt.chpl */
#line 73 "ttt.chpl"
          {
#line 74 "ttt.chpl"
            call_tmp_chpl35 = GTK_LABEL(output_chpl);
#line 74 "ttt.chpl"
            gtk_label_set_text(call_tmp_chpl35, "  Game Over\nNobody won");
#line 74 "ttt.chpl"
          } else /* ZLINE: 73 ttt.chpl */
#line 74 "ttt.chpl"
          {
#line 76 "ttt.chpl"
            call_tmp_chpl36 = (playerTime_chpl < INT64(8));
#line 76 "ttt.chpl"
            if (call_tmp_chpl36) /* ZLINE: 78 ttt.chpl */
#line 76 "ttt.chpl"
            {
#line 78 "ttt.chpl"
              call_tmp_chpl37 = (playerTime_chpl % INT64(2));
#line 78 "ttt.chpl"
              call_tmp_chpl38 = (call_tmp_chpl37 == INT64(0));
#line 78 "ttt.chpl"
              if (call_tmp_chpl38) /* ZLINE: 79 ttt.chpl */
#line 78 "ttt.chpl"
              {
#line 79 "ttt.chpl"
                call_tmp_chpl39 = GTK_LABEL(output_chpl);
#line 79 "ttt.chpl"
                gtk_label_set_text(call_tmp_chpl39, "Player two's time to play");
#line 79 "ttt.chpl"
              } else /* ZLINE: 82 ttt.chpl */
#line 79 "ttt.chpl"
              {
#line 82 "ttt.chpl"
                call_tmp_chpl40 = GTK_LABEL(output_chpl);
#line 82 "ttt.chpl"
                gtk_label_set_text(call_tmp_chpl40, "Player one's time to play");
#line 82 "ttt.chpl"
              }
#line 85 "ttt.chpl"
              playerTime_chpl += INT64(1);
#line 85 "ttt.chpl"
            }
#line 85 "ttt.chpl"
          }
#line 85 "ttt.chpl"
        }
#line 85 "ttt.chpl"
      }
#line 85 "ttt.chpl"
    }
#line 85 "ttt.chpl"
  }
#line 33 "ttt.chpl"
  return;
#line 33 "ttt.chpl"
}


/* ttt.chpl:24 */
void record_move(c_ptr_GtkWidget_chpl button, c_ptr_int64_t_chpl numPtr) {
  int64_t ret_chpl;
  _ref_int64_t call_tmp_chpl = NULL;
  chpl_bool call_tmp_chpl2;
  _tuple_1_star_int64_t i_chpl;
  _tuple_1_star_int64_t this_chpl;
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl3 = NULL;
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl2 = NULL;
  DefaultRectangularDom_1_int64_t_F ret_chpl3 = NULL;
  chpl_bool call_tmp_chpl4;
  chpl_bool call_tmp_chpl5;
  chpl_string call_tmp_chpl6;
  int64_t sum_chpl;
  int64_t ret_x1_chpl;
  _ref__tuple_1_star_int64_t ret__chpl = NULL;
  int64_t coerce_tmp_chpl;
  int64_t call_tmp_chpl7;
  _ddata_int64_t ret_chpl4 = NULL;
  _ddata_int64_t coerce_tmp_chpl2 = NULL;
  int64_t ret_chpl5;
  _ref_int64_t call_tmp_chpl8 = NULL;
  chpl_bool call_tmp_chpl9;
  int64_t call_tmp_chpl10;
  chpl_bool call_tmp_chpl11;
  c_ptr_GtkLabel_chpl call_tmp_chpl12 = NULL;
  c_ptr_GtkLabel_chpl call_tmp_chpl13 = NULL;
  int64_t call_tmp_chpl14;
  chpl_bool call_tmp_chpl15;
  _tuple_1_star_int64_t i_chpl2;
  _tuple_1_star_int64_t this_chpl2;
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl16 = NULL;
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl6 = NULL;
  DefaultRectangularDom_1_int64_t_F ret_chpl7 = NULL;
  chpl_bool call_tmp_chpl17;
  chpl_bool call_tmp_chpl18;
  chpl_string call_tmp_chpl19;
  int64_t sum_chpl2;
  int64_t ret_x1_chpl2;
  _ref__tuple_1_star_int64_t ret__chpl2 = NULL;
  int64_t coerce_tmp_chpl3;
  int64_t call_tmp_chpl20;
  _ddata_int64_t ret_chpl8 = NULL;
  _ddata_int64_t coerce_tmp_chpl4 = NULL;
  _ref_int64_t call_tmp_chpl21 = NULL;
  c_ptr_GtkButton_chpl call_tmp_chpl22 = NULL;
  _tuple_1_star_int64_t i_chpl3;
  _tuple_1_star_int64_t this_chpl3;
  DefaultRectangularArr_int64_t_1_int64_t_F call_tmp_chpl23 = NULL;
  DefaultRectangularArr_int64_t_1_int64_t_F ret_chpl9 = NULL;
  DefaultRectangularDom_1_int64_t_F ret_chpl10 = NULL;
  chpl_bool call_tmp_chpl24;
  chpl_bool call_tmp_chpl25;
  chpl_string call_tmp_chpl26;
  int64_t sum_chpl3;
  int64_t ret_x1_chpl3;
  _ref__tuple_1_star_int64_t ret__chpl3 = NULL;
  int64_t coerce_tmp_chpl5;
  int64_t call_tmp_chpl27;
  _ddata_int64_t ret_chpl11 = NULL;
  _ddata_int64_t coerce_tmp_chpl6 = NULL;
  _ref_int64_t call_tmp_chpl28 = NULL;
  c_ptr_GtkButton_chpl call_tmp_chpl29 = NULL;
  chpl_bool call_tmp_chpl30;
  c_ptr_GtkLabel_chpl call_tmp_chpl31 = NULL;
  chpl_bool call_tmp_chpl32;
  c_ptr_GtkLabel_chpl call_tmp_chpl33 = NULL;
  chpl_bool call_tmp_chpl34;
  c_ptr_GtkLabel_chpl call_tmp_chpl35 = NULL;
  chpl_bool call_tmp_chpl36;
  int64_t call_tmp_chpl37;
  chpl_bool call_tmp_chpl38;
  c_ptr_GtkLabel_chpl call_tmp_chpl39 = NULL;
  c_ptr_GtkLabel_chpl call_tmp_chpl40 = NULL;
#line 26 "ttt.chpl"
  call_tmp_chpl = (numPtr + INT64(0));
#line 26 "ttt.chpl"
  ret_chpl = *(call_tmp_chpl);
#line 28 "ttt.chpl"
  call_tmp_chpl2 = gameOver_chpl;
#line 28 "ttt.chpl"
  if (call_tmp_chpl2) /* ZLINE: 30 ttt.chpl */
#line 28 "ttt.chpl"
  {
#line 30 "ttt.chpl"
    gameOver_chpl = false;
#line 30 "ttt.chpl"
  } else /* ZLINE: 28 ttt.chpl */
#line 30 "ttt.chpl"
  {
#line 32 "ttt.chpl"
    *(this_chpl + INT64(0)) = ret_chpl;
#line 32 "ttt.chpl"
    *(i_chpl + INT64(0)) = *(this_chpl + INT64(0));
#line 32 "ttt.chpl"
    ret_chpl2 = boardMatrix_chpl;
#line 32 "ttt.chpl"
    call_tmp_chpl3 = ret_chpl2;
#line 32 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl3, INT64(32), "ttt.chpl");
#line 32 "ttt.chpl"
    ret_chpl3 = (call_tmp_chpl3)->dom;
#line 32 "ttt.chpl"
    chpl_check_nil(ret_chpl3, INT64(32), "ttt.chpl");
#line 32 "ttt.chpl"
    call_tmp_chpl4 = dsiMember(ret_chpl3, &this_chpl, INT64(32), "ttt.chpl");
#line 32 "ttt.chpl"
    call_tmp_chpl5 = (! call_tmp_chpl4);
#line 32 "ttt.chpl"
    if (call_tmp_chpl5) /* ZLINE: 32 ttt.chpl */
#line 32 "ttt.chpl"
    {
#line 32 "ttt.chpl"
      string_from_c_string(&call_tmp_chpl6, "array index out of bounds: ", INT64(0), INT64(0), INT64(32), "ttt.chpl");
#line 32 "ttt.chpl"
      halt2(call_tmp_chpl6, &this_chpl, INT64(32), "ttt.chpl");
#line 32 "ttt.chpl"
    }
#line 32 "ttt.chpl"
    sum_chpl = INT64(0);
#line 32 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl3, INT64(32), "ttt.chpl");
#line 32 "ttt.chpl"
    ret__chpl = &((call_tmp_chpl3)->blk);
#line 32 "ttt.chpl"
    ret_x1_chpl = *(*(ret__chpl) + INT64(0));
#line 32 "ttt.chpl"
    coerce_tmp_chpl = *(i_chpl + INT64(0));
#line 32 "ttt.chpl"
    call_tmp_chpl7 = (coerce_tmp_chpl * ret_x1_chpl);
#line 32 "ttt.chpl"
    sum_chpl += call_tmp_chpl7;
#line 32 "ttt.chpl"
    chpl_check_nil(call_tmp_chpl3, INT64(32), "ttt.chpl");
#line 32 "ttt.chpl"
    ret_chpl4 = (call_tmp_chpl3)->shiftedData;
#line 32 "ttt.chpl"
    coerce_tmp_chpl2 = ret_chpl4;
#line 32 "ttt.chpl"
    call_tmp_chpl8 = (coerce_tmp_chpl2 + sum_chpl);
#line 32 "ttt.chpl"
    ret_chpl5 = *(call_tmp_chpl8);
#line 32 "ttt.chpl"
    call_tmp_chpl9 = (ret_chpl5 != INT64(0));
#line 32 "ttt.chpl"
    if (call_tmp_chpl9) /* ZLINE: 34 ttt.chpl */
#line 32 "ttt.chpl"
    {
#line 34 "ttt.chpl"
      call_tmp_chpl10 = (playerTime_chpl % INT64(2));
#line 34 "ttt.chpl"
      call_tmp_chpl11 = (call_tmp_chpl10 == INT64(0));
#line 34 "ttt.chpl"
      if (call_tmp_chpl11) /* ZLINE: 35 ttt.chpl */
#line 34 "ttt.chpl"
      {
#line 35 "ttt.chpl"
        call_tmp_chpl12 = GTK_LABEL(output_chpl);
#line 35 "ttt.chpl"
        gtk_label_set_text(call_tmp_chpl12, "   Invalid move, spot occupied, Player one play again");
#line 35 "ttt.chpl"
      } else /* ZLINE: 38 ttt.chpl */
#line 35 "ttt.chpl"
      {
#line 38 "ttt.chpl"
        call_tmp_chpl13 = GTK_LABEL(output_chpl);
#line 38 "ttt.chpl"
        gtk_label_set_text(call_tmp_chpl13, "   Invalid move, spot occupied, Player two play again");
#line 38 "ttt.chpl"
      }
#line 38 "ttt.chpl"
    } else /* ZLINE: 44 ttt.chpl */
#line 38 "ttt.chpl"
    {
#line 44 "ttt.chpl"
      call_tmp_chpl14 = (playerTime_chpl % INT64(2));
#line 44 "ttt.chpl"
      call_tmp_chpl15 = (call_tmp_chpl14 == INT64(0));
#line 44 "ttt.chpl"
      if (call_tmp_chpl15) /* ZLINE: 45 ttt.chpl */
#line 44 "ttt.chpl"
      {
#line 45 "ttt.chpl"
        *(this_chpl2 + INT64(0)) = ret_chpl;
#line 45 "ttt.chpl"
        *(i_chpl2 + INT64(0)) = *(this_chpl2 + INT64(0));
#line 45 "ttt.chpl"
        ret_chpl6 = boardMatrix_chpl;
#line 45 "ttt.chpl"
        call_tmp_chpl16 = ret_chpl6;
#line 45 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl16, INT64(45), "ttt.chpl");
#line 45 "ttt.chpl"
        ret_chpl7 = (call_tmp_chpl16)->dom;
#line 45 "ttt.chpl"
        chpl_check_nil(ret_chpl7, INT64(45), "ttt.chpl");
#line 45 "ttt.chpl"
        call_tmp_chpl17 = dsiMember(ret_chpl7, &this_chpl2, INT64(45), "ttt.chpl");
#line 45 "ttt.chpl"
        call_tmp_chpl18 = (! call_tmp_chpl17);
#line 45 "ttt.chpl"
        if (call_tmp_chpl18) /* ZLINE: 45 ttt.chpl */
#line 45 "ttt.chpl"
        {
#line 45 "ttt.chpl"
          string_from_c_string(&call_tmp_chpl19, "array index out of bounds: ", INT64(0), INT64(0), INT64(45), "ttt.chpl");
#line 45 "ttt.chpl"
          halt2(call_tmp_chpl19, &this_chpl2, INT64(45), "ttt.chpl");
#line 45 "ttt.chpl"
        }
#line 45 "ttt.chpl"
        sum_chpl2 = INT64(0);
#line 45 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl16, INT64(45), "ttt.chpl");
#line 45 "ttt.chpl"
        ret__chpl2 = &((call_tmp_chpl16)->blk);
#line 45 "ttt.chpl"
        ret_x1_chpl2 = *(*(ret__chpl2) + INT64(0));
#line 45 "ttt.chpl"
        coerce_tmp_chpl3 = *(i_chpl2 + INT64(0));
#line 45 "ttt.chpl"
        call_tmp_chpl20 = (coerce_tmp_chpl3 * ret_x1_chpl2);
#line 45 "ttt.chpl"
        sum_chpl2 += call_tmp_chpl20;
#line 45 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl16, INT64(45), "ttt.chpl");
#line 45 "ttt.chpl"
        ret_chpl8 = (call_tmp_chpl16)->shiftedData;
#line 45 "ttt.chpl"
        coerce_tmp_chpl4 = ret_chpl8;
#line 45 "ttt.chpl"
        call_tmp_chpl21 = (coerce_tmp_chpl4 + sum_chpl2);
#line 45 "ttt.chpl"
        *(call_tmp_chpl21) = INT64(1);
#line 46 "ttt.chpl"
        call_tmp_chpl22 = GTK_BUTTON(button);
#line 46 "ttt.chpl"
        gtk_button_set_label(call_tmp_chpl22, "X");
#line 46 "ttt.chpl"
      } else /* ZLINE: 49 ttt.chpl */
#line 46 "ttt.chpl"
      {
#line 49 "ttt.chpl"
        *(this_chpl3 + INT64(0)) = ret_chpl;
#line 49 "ttt.chpl"
        *(i_chpl3 + INT64(0)) = *(this_chpl3 + INT64(0));
#line 49 "ttt.chpl"
        ret_chpl9 = boardMatrix_chpl;
#line 49 "ttt.chpl"
        call_tmp_chpl23 = ret_chpl9;
#line 49 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl23, INT64(49), "ttt.chpl");
#line 49 "ttt.chpl"
        ret_chpl10 = (call_tmp_chpl23)->dom;
#line 49 "ttt.chpl"
        chpl_check_nil(ret_chpl10, INT64(49), "ttt.chpl");
#line 49 "ttt.chpl"
        call_tmp_chpl24 = dsiMember(ret_chpl10, &this_chpl3, INT64(49), "ttt.chpl");
#line 49 "ttt.chpl"
        call_tmp_chpl25 = (! call_tmp_chpl24);
#line 49 "ttt.chpl"
        if (call_tmp_chpl25) /* ZLINE: 49 ttt.chpl */
#line 49 "ttt.chpl"
        {
#line 49 "ttt.chpl"
          string_from_c_string(&call_tmp_chpl26, "array index out of bounds: ", INT64(0), INT64(0), INT64(49), "ttt.chpl");
#line 49 "ttt.chpl"
          halt2(call_tmp_chpl26, &this_chpl3, INT64(49), "ttt.chpl");
#line 49 "ttt.chpl"
        }
#line 49 "ttt.chpl"
        sum_chpl3 = INT64(0);
#line 49 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl23, INT64(49), "ttt.chpl");
#line 49 "ttt.chpl"
        ret__chpl3 = &((call_tmp_chpl23)->blk);
#line 49 "ttt.chpl"
        ret_x1_chpl3 = *(*(ret__chpl3) + INT64(0));
#line 49 "ttt.chpl"
        coerce_tmp_chpl5 = *(i_chpl3 + INT64(0));
#line 49 "ttt.chpl"
        call_tmp_chpl27 = (coerce_tmp_chpl5 * ret_x1_chpl3);
#line 49 "ttt.chpl"
        sum_chpl3 += call_tmp_chpl27;
#line 49 "ttt.chpl"
        chpl_check_nil(call_tmp_chpl23, INT64(49), "ttt.chpl");
#line 49 "ttt.chpl"
        ret_chpl11 = (call_tmp_chpl23)->shiftedData;
#line 49 "ttt.chpl"
        coerce_tmp_chpl6 = ret_chpl11;
#line 49 "ttt.chpl"
        call_tmp_chpl28 = (coerce_tmp_chpl6 + sum_chpl3);
#line 49 "ttt.chpl"
        *(call_tmp_chpl28) = INT64(2);
#line 50 "ttt.chpl"
        call_tmp_chpl29 = GTK_BUTTON(button);
#line 50 "ttt.chpl"
        gtk_button_set_label(call_tmp_chpl29, "O");
#line 50 "ttt.chpl"
      }
#line 56 "ttt.chpl"
      call_tmp_chpl30 = (INT64(0) != INT64(0));
#line 56 "ttt.chpl"
      if (call_tmp_chpl30) /* ZLINE: 57 ttt.chpl */
#line 56 "ttt.chpl"
      {
#line 57 "ttt.chpl"
        call_tmp_chpl31 = GTK_LABEL(output_chpl);
#line 57 "ttt.chpl"
        gtk_label_set_text(call_tmp_chpl31, "  Game Over\nPlayer one won!!");
#line 58 "ttt.chpl"
        gameOver_chpl = true;
#line 58 "ttt.chpl"
      } else /* ZLINE: 56 ttt.chpl */
#line 58 "ttt.chpl"
      {
#line 60 "ttt.chpl"
        call_tmp_chpl32 = (INT64(0) != INT64(0));
#line 60 "ttt.chpl"
        if (call_tmp_chpl32) /* ZLINE: 61 ttt.chpl */
#line 60 "ttt.chpl"
        {
#line 61 "ttt.chpl"
          call_tmp_chpl33 = GTK_LABEL(output_chpl);
#line 61 "ttt.chpl"
          gtk_label_set_text(call_tmp_chpl33, "  Game Over\nPlayer two won!!");
#line 62 "ttt.chpl"
          gameOver_chpl = true;
#line 62 "ttt.chpl"
        } else /* ZLINE: 60 ttt.chpl */
#line 62 "ttt.chpl"
        {
#line 64 "ttt.chpl"
          call_tmp_chpl34 = (playerTime_chpl == INT64(8));
#line 64 "ttt.chpl"
          if (call_tmp_chpl34) /* ZLINE: 65 ttt.chpl */
#line 64 "ttt.chpl"
          {
#line 65 "ttt.chpl"
            call_tmp_chpl35 = GTK_LABEL(output_chpl);
#line 65 "ttt.chpl"
            gtk_label_set_text(call_tmp_chpl35, "  Game Over\nNobody won");
#line 65 "ttt.chpl"
          } else /* ZLINE: 64 ttt.chpl */
#line 65 "ttt.chpl"
          {
#line 67 "ttt.chpl"
            call_tmp_chpl36 = (playerTime_chpl < INT64(8));
#line 67 "ttt.chpl"
            if (call_tmp_chpl36) /* ZLINE: 69 ttt.chpl */
#line 67 "ttt.chpl"
            {
#line 69 "ttt.chpl"
              call_tmp_chpl37 = (playerTime_chpl % INT64(2));
#line 69 "ttt.chpl"
              call_tmp_chpl38 = (call_tmp_chpl37 == INT64(0));
#line 69 "ttt.chpl"
              if (call_tmp_chpl38) /* ZLINE: 70 ttt.chpl */
#line 69 "ttt.chpl"
              {
#line 70 "ttt.chpl"
                call_tmp_chpl39 = GTK_LABEL(output_chpl);
#line 70 "ttt.chpl"
                gtk_label_set_text(call_tmp_chpl39, "Player two's time to play");
#line 70 "ttt.chpl"
              } else /* ZLINE: 73 ttt.chpl */
#line 70 "ttt.chpl"
              {
#line 73 "ttt.chpl"
                call_tmp_chpl40 = GTK_LABEL(output_chpl);
#line 73 "ttt.chpl"
                gtk_label_set_text(call_tmp_chpl40, "Player one's time to play");
#line 73 "ttt.chpl"
              }
#line 76 "ttt.chpl"
              playerTime_chpl += INT64(1);
#line 76 "ttt.chpl"
            }
#line 76 "ttt.chpl"
          }
#line 76 "ttt.chpl"
        }
#line 76 "ttt.chpl"
      }
#line 76 "ttt.chpl"
    }
#line 76 "ttt.chpl"
  }
#line 24 "ttt.chpl"
  return;
#line 24 "ttt.chpl"
}


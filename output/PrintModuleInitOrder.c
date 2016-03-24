/* PrintModuleInitOrder.chpl:29 */
void chpl__init_PrintModuleInitOrder(int64_t _ln, c_string _fn) {
  c_string modFormatStr;
  c_string modStr;
  _ref_int32_t refIndentLevel = NULL;
  chpl_bool const_tmp;
  chpl_bool call_tmp;
  chpl_bool call_tmp2;
  c_string call_tmp3;
  chpl_bool call_tmp4;
#line 29 "PrintModuleInitOrder.chpl"
  if (chpl__init_PrintModuleInitOrder_p) /* ZLINE: 29 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/PrintModuleInitOrder.chpl */
#line 29 "PrintModuleInitOrder.chpl"
  {
#line 29 "PrintModuleInitOrder.chpl"
    goto _exit_chpl__init_PrintModuleInitOrder;
#line 29 "PrintModuleInitOrder.chpl"
  }
#line 29 "PrintModuleInitOrder.chpl"
  modFormatStr = "%*s\n";
#line 29 "PrintModuleInitOrder.chpl"
  modStr = "PrintModuleInitOrder";
#line 29 "PrintModuleInitOrder.chpl"
  printModuleInit(modFormatStr, modStr, INT64(20), _ln, _fn);
#line 29 "PrintModuleInitOrder.chpl"
  refIndentLevel = &moduleInitLevel;
#line 29 "PrintModuleInitOrder.chpl"
  *(refIndentLevel) += INT64(1);
#line 29 "PrintModuleInitOrder.chpl"
  chpl__init_PrintModuleInitOrder_p = true;
#line 30 "PrintModuleInitOrder.chpl"
  call_tmp = chpl_config_has_value("printModuleInitOrder", "Built-in");
#line 30 "PrintModuleInitOrder.chpl"
  call_tmp2 = (! call_tmp);
#line 30 "PrintModuleInitOrder.chpl"
  if (call_tmp2) /* ZLINE: 30 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/PrintModuleInitOrder.chpl */
#line 30 "PrintModuleInitOrder.chpl"
  {
#line 30 "PrintModuleInitOrder.chpl"
    const_tmp = false;
#line 30 "PrintModuleInitOrder.chpl"
  } else /* ZLINE: 30 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/PrintModuleInitOrder.chpl */
#line 30 "PrintModuleInitOrder.chpl"
  {
#line 30 "PrintModuleInitOrder.chpl"
    call_tmp3 = chpl_config_get_value("printModuleInitOrder", "Built-in");
#line 30 "PrintModuleInitOrder.chpl"
    const_tmp = _command_line_cast2(call_tmp3, _ln, _fn);
#line 30 "PrintModuleInitOrder.chpl"
  }
#line 30 "PrintModuleInitOrder.chpl"
  printModuleInitOrder = const_tmp;
#line 31 "PrintModuleInitOrder.chpl"
  moduleInitLevel = INT32(2);
#line 48 "PrintModuleInitOrder.chpl"
  call_tmp4 = printModuleInitOrder;
#line 48 "PrintModuleInitOrder.chpl"
  if (call_tmp4) /* ZLINE: 48 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/PrintModuleInitOrder.chpl */
#line 48 "PrintModuleInitOrder.chpl"
  {
#line 48 "PrintModuleInitOrder.chpl"
    initPrint();
#line 48 "PrintModuleInitOrder.chpl"
  }
#line 29 "PrintModuleInitOrder.chpl"
  *(refIndentLevel) -= INT64(1);
#line 29 "PrintModuleInitOrder.chpl"
  _exit_chpl__init_PrintModuleInitOrder:;
#line 29 "PrintModuleInitOrder.chpl"
  return;
#line 29 "PrintModuleInitOrder.chpl"
}

#line 29 "PrintModuleInitOrder.chpl"
/* PrintModuleInitOrder.chpl:37 */
#line 29 "PrintModuleInitOrder.chpl"
static void printModuleInit(c_string s1, c_string s2, int64_t len, int64_t _ln, c_string _fn) {
#line 29 "PrintModuleInitOrder.chpl"
  chpl_bool local_printModuleInitOrder;
#line 29 "PrintModuleInitOrder.chpl"
  chpl_bool call_tmp;
#line 29 "PrintModuleInitOrder.chpl"
  int32_t call_tmp2;
#line 29 "PrintModuleInitOrder.chpl"
  int32_t call_tmp3;
#line 29 "PrintModuleInitOrder.chpl"
  int32_t call_tmp4;
#line 39 "PrintModuleInitOrder.chpl"
  local_printModuleInitOrder = printModuleInitOrder;
#line 39 "PrintModuleInitOrder.chpl"
  call_tmp = local_printModuleInitOrder;
#line 39 "PrintModuleInitOrder.chpl"
  if (call_tmp) /* ZLINE: 39 /home/agobin/Documents/GitHub/chapel-1.12.0/modules/internal/PrintModuleInitOrder.chpl */
#line 39 "PrintModuleInitOrder.chpl"
  {
#line 40 "PrintModuleInitOrder.chpl"
    call_tmp2 = ((int32_t)(len));
#line 40 "PrintModuleInitOrder.chpl"
    call_tmp3 = (moduleInitLevel + call_tmp2);
#line 40 "PrintModuleInitOrder.chpl"
    call_tmp4 = (call_tmp3 + INT32(2));
#line 40 "PrintModuleInitOrder.chpl"
    printf(s1, call_tmp4, s2);
#line 40 "PrintModuleInitOrder.chpl"
  }
#line 37 "PrintModuleInitOrder.chpl"
  return;
#line 37 "PrintModuleInitOrder.chpl"
}

#line 37 "PrintModuleInitOrder.chpl"
/* PrintModuleInitOrder.chpl:43 */
#line 37 "PrintModuleInitOrder.chpl"
static void initPrint(void) {
#line 45 "PrintModuleInitOrder.chpl"
  printf("Initializing Modules:\n");
#line 43 "PrintModuleInitOrder.chpl"
  return;
#line 43 "PrintModuleInitOrder.chpl"
}


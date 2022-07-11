#include "../s21_decimal.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  memset(dst, 0, sizeof(int) * 4);
  if (src < 0) fill_negative(dst);
  dst->bits[0] = abs(src);  //  return abs because negative sign keeps separeted - not working with min int need to be fixed!
  return NO_ERROR; 
}

#include "../s21_decimal.h"

int s21_from_int_to_decimal(int src, s21_decimal *dst) {
  // if (!dst) return ERROR_CONVERT;  //  if memory wasn`t located - нужно сделать проверку что данные переданы верно
  memset(dst, 0, sizeof(int) * 4);  //  fill the structure with 0s
  if (src < 0) fill_negative(dst);  //  set 32th bit in bits[3] to 1
  dst->bits[0] = abs(src);  //  return abs because negative sign keeps separeted
  return NO_ERROR; 
}

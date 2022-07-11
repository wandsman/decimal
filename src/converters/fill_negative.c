#include "../s21_decimal.h"

int fill_negative(s21_decimal *dst) {
  // if (!dst) return ERROR_CONVERT;  //  if memory wasn`t located
  dst->bits[3] = dst->bits[3] | (1<<31);  //  need this function - set 32th bit in bits[3] to 1;
  return NO_ERROR;
}

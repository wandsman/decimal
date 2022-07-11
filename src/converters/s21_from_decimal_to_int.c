#include "../s21_decimal.h"

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  *(dst) = src.bits[0];
  if (src.bits[3] & (1<<31)) *(dst) *= -1;
  return NO_ERROR;
}

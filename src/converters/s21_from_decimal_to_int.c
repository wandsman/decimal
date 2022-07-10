#include "s21_decimal.h"

int s21_from_decimal_to_int(s21_decimal src, int *dst) {
  if (!dst) return ERROR_CONVERT;
  
  return *dst = src.bits[0];
}

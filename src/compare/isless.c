#include "compare.h"

int s21_is_less(s21_decimal first, s21_decimal second) {
  int res = 0;
  if (!s21_is_greater(first, second) && s21_is_not_equal(first, second)) {
    res = 1;
  }
  return res;
}
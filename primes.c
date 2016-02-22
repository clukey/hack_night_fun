#include <stdio.h>
#include <limits.h>
#include <math.h>

int main() {
  int prime_count = 0;
  int prime_candidate = 0;

  for (; prime_candidate < INT_MAX; prime_candidate++) {
    if(prime_candidate == 1) {
      continue;
    }
    if (prime_candidate == 2) {
      prime_count++;
      continue;
    }
    if (prime_candidate == 3) {
      prime_count++;
      continue;
    }
    if (prime_candidate % 2 == 0) {
      continue;
    }

    int sq_root = (int)sqrt(prime_candidate);
    int prime_flag = 1;
    int i;
    for (i = 2; i <= sq_root; i++) {
      int int_quotient = prime_candidate/i;
      double dbl_quotient = (double)prime_candidate/(double)i;

      if (dbl_quotient == int_quotient) {
        prime_flag = 0;
        break;
      }
    }
    if (prime_flag) {
      prime_count++;
    }
    if (prime_count == 2000) {
      break;
    }
  }

  printf("%d\n", prime_candidate);
  return 0;
}

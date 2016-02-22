#include <stdio.h>
#include <math.h>

int is_composite(int prime_candidate, int prime_count, int *known_primes) {
  int i;
  int sq_root = sqrt(prime_candidate);
  for (i = 0; i < prime_count; i++) {
    int known_prime = known_primes[i];
    /* Let's not duplicate any work. If the known prime is greater than the
       square root, the quotient would be smaller than square root, so we've
       checked it already. */
    if (known_prime > sq_root) {
      break;
    }
    int answer = prime_candidate - ((prime_candidate/known_prime) * known_prime);
    if (answer == 0) {
      return 1;
    }
  }
  return 0;
}


int main() {
  int prime_count = 0;
  int prime_candidate = 0;
  int known_primes[2000];

  while(prime_count < 2000) {
    if (prime_candidate == 0 || prime_candidate == 1) {
      prime_candidate++;
      continue;
    }
    if (!is_composite(prime_candidate, prime_count, known_primes)) {
      known_primes[prime_count++] = prime_candidate;
    }
    prime_candidate++;
  }

  printf("%d\n", known_primes[prime_count - 1]);
  return 0;
}

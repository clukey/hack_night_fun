#include <stdio.h>

int is_composite(int prime_candidate, int prime_count, int *known_primes) {
  int i;
  for (i = 0; i < prime_count; i++) {
    int answer = prime_candidate - ((prime_candidate/known_primes[i]) * known_primes[i]);
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

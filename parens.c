#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10000

unsigned long long _printParenthesis(int pos, int n, int open, int close, unsigned long long previous_count);

/* Wrapper over _printParenthesis()*/
unsigned long long printParenthesis(int n)
{
  int count = 0;
  if(n > 0)
  count = _printParenthesis(0, n, 0, 0, 0);
  return count;
}

unsigned long long _printParenthesis(int pos, int n, int open, int close, unsigned long long previous_count)
{
  static char str[MAX_SIZE];
  unsigned long long count = 0;
  if(close == n)
  {
    // printf("%s \n", str);
    return (unsigned long long)1;
  }
  else
  {
    if(open > close) {
      str[pos] = '}';
      count += _printParenthesis(pos+1, n, open, close+1, count);
    }
    if(open < n) {
      str[pos] = '{';
      count += _printParenthesis(pos+1, n, open+1, close, count);
    }
  }
  return count;
}

/* driver program to test above functions */
int main(int argc, char **argv)
{
  if (argc < 2) {
    printf("You must enter an integer.\n");
    exit(1);
  }
  int n = atoi(argv[1]);
  unsigned long long count = printParenthesis(n);
  printf("%llu \n", count);
  return 0;
}

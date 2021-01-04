#include <stdio.h>
#include <string.h>

void print_reversed_string(const char *str) {
  unsigned long str_sz = strlen(str);
  unsigned long begin = 0;
  unsigned long end = str_sz;

  for (int i = str_sz; i >= 0; --i) {
    if (str[i] == ' ' || i == 0) {
      int j = i;
      if (str[i] == ' ') {
        ++j;
      }
      for ( ; j < end; ++j) {
        fputc(str[j], stdout);
      }
      if (str[i] == ' ') {
        fputc(' ', stdout);
      }
      end = i; 
    }
  }
}

int main(void) {
  print_reversed_string("Hello World");
  fputc('\n', stdout);
  print_reversed_string("Oh hell no!");
  fputc('\n', stdout);
  print_reversed_string("Lobe every one");
  fputc('\n', stdout);
  print_reversed_string("flame nut spam forever");
  fputc('\n', stdout);
  return 0;
}
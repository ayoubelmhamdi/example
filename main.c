#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"


void count_of_duplicate(top **t_array) {
  char s[100][500];
  int i = 0;
  int j = 0;
  FILE *fp;
  for (int k = 0; k < 100; k++)
    t_array[k] = malloc(sizeof(top));
  fp = fopen("txt.txt", "r");
  if (fp == NULL) {
    perror("popen");
    exit(EXIT_FAILURE);
  }
  while (!feof(fp)) {
    if (fgets(s[i], (int)sizeof(s[i]), fp)) {
      s[i][strcspn(s[i], "\n")] = 0;
      /* printf("next line= %s\n", s[i]); */
      if (i == 0) {
        t_array[0]->tot = 1;
        strcpy(t_array[0]->s, s[0]);
      } else {
        if (strcmp(s[i - 1], s[i]) == 0) {
          t_array[j]->tot = t_array[j]->tot + 1;
        } else {
          j++;
          strcpy(t_array[j]->s, s[i]);
          t_array[j]->tot = 1;
        }
      }
    }
    i++;
  }
  /* f(t_array); */
  for (int k = 0; k <= j; k++)
    printf("%d:%s\n", t_array[k]->tot, t_array[k]->s);
}

int main() {
  top **t_array = malloc(100 * sizeof(top *));
  count_of_duplicate(t_array);
  return 0;
}

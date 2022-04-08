#include "util.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strcmpword(char *s, char *word) {

  char *p;
  size_t len;

  p = strchr(s, ' ');
  if (!p)
    p = strchr(s, '\0');
  len = p - s;
  char first_word[len + 1];
  memcpy(first_word, s, len);
  first_word[len] = 0;
  if (strcmp(first_word, word) == 0) {
    return 0;
  }
  return 1;
}

void getTop10(char *s, top **t_array, top **t_trie) {
  int i, j, n;
  for (int k = 0; k < 100; k++)
    t_trie[k] = malloc(sizeof(top));
  for (i = 0, j = 0; 0 < MAXLINE && strlen(t_array[i]->s) != 0; i++) {
    if (strcmpword(t_array[i]->s, s) == 0 && t_array[i]->tot > 0) {
      // printf("%s = %s\n", t_array[i]->s, s);
      strcpy(t_trie[j]->s, t_array[i]->s);
      t_trie[j]->tot = t_array[i]->tot;
      j++;
    }
  }
  n = j; // MAXLINE of t_trie
  printf("%d\n", n);
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (t_trie[j]->tot > t_trie[i]->tot) {
        top *tmp = t_trie[j];
        t_trie[j] = t_trie[i];
        t_trie[i] = tmp;
      }
    }
  }

  for (i = 0; i < j; i++) {
    printf("%d:%s\n", t_trie[i]->tot, t_trie[i]->s);
  }
}

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
  /* for (int k = 0; k <= j; k++) */
  /*   printf("%d:%s\n", t_array[k]->tot, t_array[k]->s); */
}

int main(int argc, char *argv[]) {
  top **t_array = malloc(100 * sizeof(top *));
  top **t_trie = malloc(100 * sizeof(top *));
  count_of_duplicate(t_array);
  getTop10(argv[1], t_array, t_trie);
  return 0;
}

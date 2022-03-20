#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 100
#define MAX 100

typedef struct top {
  int tot;
  char s[100];
} top;



/* void f(top *top[]){ */
/*   printf("%d",top[1]->tot); */
     /* *top = malloc(sizeof(struct top)); */

  // make a lib to store file in array2d
  /* char cmd[MAXLINE][MAX] = { */
  /*     "ps -C nvim",   "ps -C nvim1",  "ps -C nvim1", */
  /*     "ps -a -o pid", "ps -a -o pid", "pdd", */
  /* }; */
  /* int j, i; */
  /* for (i = 1, j = 0; i < 9; i++) { */
  /*   if (strcmp(cmd[i], cmd[i - 1]) == 0) { */
  /*     strcpy(top[j++]->s[i], cmd[i]); */
  /*   } else { */
  /*     top[j]->tot++; */
  /*   } */
  /* } */
/* } */

int main(void);
int main() {
  top *array1 = malloc(MAX * sizeof(top));  // Pointer to MAX structs
  array1->tot=11;
  /* top **t_array = malloc(100 * sizeof(top *)); */
  /*   for (int i = 0; i < 100; i++) { */
  /*       t_array[i] = malloc(sizeof(struct top)); */
  /*   } */

  /* top ***p = &t_array; */
  /* t_array[1]->tot=10; */
  /* printf("p: %d?\n",(*p)[1]->tot); */

  /* top *top[MAX]; */
  /* top[1]->tot=1; */
  /* printf("%d",top[1]->tot); */
  /* printf("fin"); */
  /* f(top); */
  /* int i=0,j=0; */
  /* for (i = 0; i < j && top[i]->tot != 0; i++) */
  /*   printf("%d: %s\n", top[i]->tot + 1, top[i]->s); */

  printf("testt: %d",array1->tot);
  return 0;
}

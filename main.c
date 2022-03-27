#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLINE 100
#define MAX 100

typedef struct top {
  int tot;
  char s[100];
} top;

int main(void);
void f(top **t_array);

/* void f(top **t_array) { */
/*   t_array[0] = malloc(sizeof(top)); */
/*   t_array[0]->tot = 11; */
/* } */

int main() {
  char s[100][1000];
  top **t_array = malloc(100 * sizeof(top *));
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
      printf("next line= %s\n", s[i]);
      if (i == 0){
        t_array[0]->tot = 1;
        strcpy(t_array[0]->s,s[0]);
        }
      else{
        if(strcmp(s[i - 1], s[i])==0){
          t_array[j]->tot++;
        }
        else{
          strcpy(t_array[j++]->s,s[i]);
        }
      }
    }
    i++;
  }
  /* f(t_array); */
  printf("2:%s", s[1]);
  return 0;
}

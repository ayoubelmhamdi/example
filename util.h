#define MAXLINE 10000
#define MAXCOL 1024
typedef struct top {
  int tot;
  char s[1024];
} top;

int main(int argc, char *argv[]);
void getTop10(char *s, top **t_array, top **t_trie);
void count_of_duplicate(top **t_array);
int strcmpword(char *s, char *word);

#include <sys/stat.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
  struct stat st;

  stat(argv[1], &st);

  /*Print the populated structure*/
  printf("%lo\n",st.st_nlink);
  printf("%d\n",argc);
}

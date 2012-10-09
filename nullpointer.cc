#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char *p = NULL;

  // various machinations
  int code = 0xC0DE;
  // meat flappings
  char *blog = (char*)malloc(9);


  strncpy(blog,"nilshell",8); blog[8] = '\0';
  printf("0x%x\n", code);
  printf("%s\n",   blog);

  free(blog);
  return 0;
}

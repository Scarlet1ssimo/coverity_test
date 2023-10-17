#include <stdio.h>
#include <string.h>
void danger(char *s) {
  char buffer[10];
  char buffer2[12] = "1234567890aa";
  strncpy(buffer, s, 10);
  buffer[9] = '\0';
  buffer[strlen(buffer)] = 'a';
  strcpy(buffer2, buffer);
  printf("%s\n", (buffer2));
  printf("%lu\n", strlen(buffer2));
}
int main() {
  char name[20];
  scanf("%10s", name);
  danger(name);
}
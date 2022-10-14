#include <stdio.h>
#include <string.h>

void strip_newline(char* str, int size);

int main() {
  char first_name[256];
  char last_name[256];
  char full_name[512];

  printf( "Please enter your name: " );
  fgets(first_name, 256, stdin);
  printf( "Pleae enter your last name: " );
  fgets( last_name, 256, stdin );

  strip_newline( first_name, 256 );
  strip_newline( last_name, 256 );

  strcat( full_name, first_name );
  strcat( full_name, " " );
  strcat( full_name, last_name );
  printf( "Your full name is %s", full_name );
  getchar();
  return 0;
}

void strip_newline(char* str, int size) {
  int i;
  for (i = 0; i < size; i++) {
    if (str[i] == '\n') {
      str[i] = '\0';
      return;
    }
  }
}
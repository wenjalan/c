#include "expo.h"

int expo( int x, int y ) {
  int i;
  for ( i = 0; i < y; i++ ) {
    x = x * x;
  }
  return x;
}
#include <stdio.h>
// problem #1
int multiples() {
  int sum = 0;
  int i = 0;
  for(i = 0; i < 1000; i++) {
    if(i % 3 == 0 || i % 5 == 0)
    sum += i;
  }
  return sum;
}
// problem #6
int sumSquare() {
  int h = 0;
  int i = 0;
  int s = 0;
  for(i = 1; i < 101; i++){
    h += i;
    s += (i * i);
  }
  return (h * h) - s;
}

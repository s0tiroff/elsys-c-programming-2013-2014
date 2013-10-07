#include <stdio.h>

int main() {
  
        unsigned long long int x,z,n;
        int i;
        x=2;
        z=1;
  printf("%llu\n" , x);
  printf("%llu\n" , z);
  for (i=3;i<=100;i++)
{
  n=x+z;
  printf("%d - %llu\n" ,i,n);
  x=z;
  z=n;
}
  return 0;
}
 

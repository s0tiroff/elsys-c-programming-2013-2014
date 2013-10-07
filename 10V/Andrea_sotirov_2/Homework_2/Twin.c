#include <stdio.h>

int main()
{
 int i, j, t1, t2, a;
 int boolean;
 t1=0;
 t2=0;
 a=0;
 while ((t1==0) || (t2==0))
 {
  
  for (i=1; i<=1000; i++)
  {  
  boolean = 1;
  for (j=2; j<=i/2; j++)
  {
    if (i%j==0)
    {
      boolean=0;
    }
  }
  if (boolean == 1)
  {
   t2=i;
  }
    if ((t2-t1==2) && (a<10))
  {
    printf ("(%d;%d)\n",t1,t2);
   a++; 
  }
   t1=t2;  
   }
 }
return 0;
}   

/*
8
1000
*/
#include<stdio.h>
void dtb(int); 
int main()
{
 int n;
 scanf("%d",&n);
 dtb(n);
 printf("\n");
 return 0;
}

void dtb(int decimalnum)
{
  int binarynum=0,remainder,digit=1;
  while(decimalnum!=0)
 {
   remainder=decimalnum%2;
   //array[c]=r;
   binarynum+=remainder*digit;
   digit*=10;
   decimalnum/=2;
 }
 //for(i=c-1;i>=0;i--)
    printf("%d",binarynum);
}

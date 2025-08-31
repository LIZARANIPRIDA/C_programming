#include<stdio.h>
int main (){
  int a,b,c,sum;
  float average;
//input the number:
printf ("Enter the three numbers: ");
scanf("%d %d %d",&a,&b,&c);
//calculat the sum:
sum=a+b+c;
//calculat the average:
average=sum/3;
printf ("Sum=%d\n",sum);
printf ("Average=%.2f\n", average);

return 0;
}


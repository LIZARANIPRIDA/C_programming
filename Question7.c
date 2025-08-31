#include<stdio.h>
int main (){
  int a,b,c,sum,average;
//input the number:
printf ("Enter the three numbers: ");
scanf("%d",&a,&b,&c);
//calculat the sum:
sum=a+b+c;
//calculat the average:
average=sum/3;
printf ("Sum=%d\n",sum);
printf ("Average=%d\n", average);

return 0;
}


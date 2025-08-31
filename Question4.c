#include<stdio.h>
int main (){
char name[4];
int age;
float mark;
  printf ("Enter your name");
  scanf("%c",&name);
  printf("Enter your age");
  scanf("%d",&age);
  printf ("Enter your mark");

//Displaying 
printf ("name:%s", name);
printf ("age:%d",age);
printf ("mark:%f",mark);
 return 0;
}

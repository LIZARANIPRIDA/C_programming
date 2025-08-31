#include<stdio.h>
int main (){
  int a,b,c, largest;
//input the value 
printf ("Enter the number: ");
scanf("%d %d %d",&a,&b,&c);
if(a >=b && a >= c) {
  printf ("Largest:%d.\n",a);
}
else if (b >= a && b >= c){
  printf ("Largest:%d.\n",b);
}
else {
  printf ("Largest:%d.\n",c);
}
printf ("Largest=%d\n". largest);
return 0;
}

  

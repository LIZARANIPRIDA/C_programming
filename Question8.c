include<stdio.h>
int main(){
  int a,b; 
  int Additiona, subtraction, multiplication;
  float Division;
//input the value 
 printf ("Enter the two numbers: ");
 scanf("%d %d",&a,&b);
//Additiona(+)
add=a+b;
//Subtraction (-)
sub=a-b;
//Multiplication (*)
multi=a*b;
//Division (/)
divis=a/b;
printf ("Additional=%d\n",add);
printf ("Subtraction=%d\n",sub);
printf ("Multiplication=%d\n", multi);
printf ("Division=%f\n",divis);
return 0;
}

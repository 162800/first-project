
#include <stdio.h>
int main ()
{
  
int age, income;
printf("please enter age: \n");
scanf("%d",&age);

printf("please enter monthly income:\n");
scanf("%d" ,&income);



if (age>=21 && income>=21000){
  printf("CONGRATULATION,you qualify for a loan");
}
else{
    printf("sorry ,you are not legible for a loan");
}
return 0;
}

#include <stdio.h>
int main ()
{
  
int age, nationality;
printf("please enter age: \n");
scanf("%d",&age);

printf("please enter nationality:\n");


if (age>=18){
  printf("CONGRATULATION,you qualify to vote");
}
else{
    printf("sorry ,you are not old enough to vote");
}
return 0;
}

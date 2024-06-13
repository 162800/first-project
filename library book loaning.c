//library systems
#include<stdio.h>
//scanf(),printf()
int main(){
    int book_id, due_date, return_date, days_overdue,fine;
    printf("enter the book ID:");
    scanf("%d", &book_id);

    printf("enter return date :");
    scanf("%d", &return_date);

    printf("Enter due date: "); 
    scanf("%d", &due_date);

    days_overdue = return_date - due_date;

    if (days_overdue >= 1 && days_overdue <= 7){
        fine = days_overdue * 20;

    }
    else if(days_overdue >=8 && days_overdue <= 14){
        fine = days_overdue * 50;
 
}
else if (days_overdue >= 15){
    fine = days_overdue * 100;
}
printf("the fine is  ksh. %d ",fine);
printf("the days overdue is %d/n",days_overdue);

return 0;
}

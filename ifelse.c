#include<stdio.h>
int main()
{
    int basic_salary,tax;
    printf("Enter baisc salary:");
    scanf("%d",&basic_salary);

    if(basic_salary<150000){
        tax=0;
    }
    else if(basic_salary>150000 && basic_salary<300000){
        tax=0.2*basic_salary;
    }
    else{
        tax=0.3*basic_salary;
    }
    printf("Income tax :%d",tax);
}
#include<stdio.h>

int main (){
    int salary;
    float HRA,DA,TA,GrossSalary;

    printf("Base Salary: ");
    scanf("%d",&salary);

    printf("HRA = ");
    scanf("%f",&HRA);

    printf("HRA = ");
    scanf("%f",&DA);

    printf("HRA = ");
    scanf("%f",&TA);

    GrossSalary = salary + (salary*HRA/100) + (salary*DA/100) + (salary*TA/100);
    printf("Gross Salary : %.2f",GrossSalary);
}
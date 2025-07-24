#include <stdio.h>

int main() {
   long int num,sal;
   float HPA,TA,DA,gross,PF,IT,net;
   char name[100];
    
   printf("Enter employee name:");
   fgets(name,sizeof(name),stdin);
   printf("Enter employee number:");
   scanf("%ld",&num);
   printf("Enter the salary:");
   scanf("%ld",&sal);
   //Employee details
   printf("EMPLOYEE DETAILS");
   printf("\n\nEmployee name is %s",name);
   printf("\nEmployee number is %ld",num);
   printf("\nEmployee salary is %ld",sal);
   
   
   //Allowance Calculations
   HPA=sal*(10.0/100);
   TA=sal*(8.0/100);
   DA=sal*(35.0/100);
   gross=sal+HPA+TA+DA;
   printf("\nHPA is:%.2f",HPA);
   printf("\nTA is:%.2f",TA);
   printf("\nDA is:%.2f",DA);
   printf("\nGross salary is:%.2f",gross);
   
   
   //Tax calculations
   PF=sal*(5.0/100);
   IT=sal*(5.0/100);
   net=gross-PF-IT;
   printf("\nPF is:%.2f",PF);
   printf("\nIT is:%.2f",IT);
   printf("\n\n\nNet salary is:%.2f",net);
   
   
   
    return 0;
}

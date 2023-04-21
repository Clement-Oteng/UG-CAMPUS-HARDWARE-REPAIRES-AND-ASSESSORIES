#include<stdio.h>                  
                 int main()                  
                 {                  
                 /*these are the variables we use to write the code.                  
                 i is to get the fibonacci series and sum of that series using for loop.                  
                 n is the number which is used to calculate according to our requirement.                  
                 t1 is the starting initialization of the series.                  
                 t2 is the next number to be added to obtain the fibonacci series.                  
                 nextTerm variable is to find the next term of the series.                  
                 */                  
                 int i,n,t1=0,t2=1,nextTerm;                  
                 //sum variable is initialized to 0 at first and used to calcute the sum of the fibonacci sequence obtained                  
                 int sum=0;                  
                 //Asking for the user input for the range that we want                  
                 printf("Enter the value for n:");                  
                 //Scaning the input that we give to the system.                  
                 scanf("%d",&n);                  
                 //using for loop for the fibonacci sequence                  
                 for(i=1;t1<=n;i++)                  
                 {                  
                 //Printing the fibonacci numbers upto required range                  
                 printf("%d\n",t1);                  
                 //nextTerm is obtained by adding two of its preceeding numbers                  
                 nextTerm = t1 + t2;                  
                 //Below is the logic to get fibonacci sequence                  
                 t1 = t2;                  
                 t2 = nextTerm;                  
                 //To get the sum of the fibonacci sequence that we obtained.                  
                 sum=sum+t1;                  
                 }                  
                 //Printing the fibonacci sequence sum.                  
                 printf("The sum of the fi
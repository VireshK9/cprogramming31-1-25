// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int age; //varibale declare
    printf("Enter your age :- ");
    scanf("%d",&age);
    
    float marks;
    printf("Enter your marks :- ");
    scanf("%f",&marks);
    
    char name[10];
    printf("Enter your name :- ");
    scanf("%s",&name);
    
    printf("Hello %s your age is %d and you have got %f percentage",name,age,marks);
}







// printf("Your age is %d\n",age);
// printf("You marks are %f\n",marks);
// printf("Good Morning %s",name);
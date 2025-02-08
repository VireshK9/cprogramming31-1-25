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

//************** 07/01/25 ***************

//Arithemetic Operators
#include <stdio.h>

int main() {
    //+,-,*,/,%
    
    float a = 10.0/3.0;
    float b = 20 % 6;    //2
    printf("%d\n",10+10);
    printf("%d\n",10-5);
    printf("%d\n",10*5);
    printf("%f\n",a);
    printf("%f\n",b);
}

///////////////////////////////

#include <stdio.h>

int main() {
    //Comaprison Operators
    // > , < , >= , <= , ==, !=
    
    int a = 10;
    int b = 20;
    
    printf("%d\n", a>b);    //0
    printf("%d\n", a<b);    //1
    printf("%d\n", a>=b);   //0
    printf("%d\n", a<=b);   //1
    printf("%d\n", a==b);   //0
    printf("%d\n", a!=b);   //1
    
    // True - 1, False - 0
}

///////////////////////////////

#include <stdio.h>

int main() {
    //Logical Operators
    // && , || , !
    
    int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    
    printf("%d\n",((a<b)&&(c>d)));
    printf("%d\n",((a<b)||(c>d)));
    printf("%d\n",(!(c<d)));
}

//************** 08/01/25 ***************

//Control Statements
/*
1.if/else
2.if/else if/else - (if/else ladder)
3.Multiple if
4.Nested if/else
5.Switch Statement
 */

//If/else statement
#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks");
    scanf("%d",&marks);
    
    if(marks>50){
        printf("You are pass");
    }
    else{
        printf("You are fail");
    }
}

//Program to check which number is greater
#include <stdio.h>

int main() {
    int a,b;
    printf("Enter number 1 : ");
    scanf("%d",&a);
    
    printf("Enter number 2 : ");
    scanf("%d",&b);
    
    if(a>b){
        printf("A is greater than B");
    }
    else{
        printf("B is greater than A");
    }
}

//Check weather number is even or odd
#include <stdio.h>

int main() {
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    
    if(a%2 == 0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
}

// Program to check weather the char is vowel or consonent
#include <stdio.h>

int main() {
    char alpha;
    printf("Enter any char : ");
    scanf("%c",&alpha);
    
    //a e i o u
    if((alpha=='a') || (alpha=='e') || (alpha=='i') ||(alpha=='o') || (alpha=='u')){
        printf("The char is vowel");
    }
    else{
        printf("The char is consonent");
    }
}
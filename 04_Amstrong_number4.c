#include<stdio.h>
#include<math.h>

int main(){

    int num, num1, num2, num3, num4, cube_of_first, cube_of_second, cube_of_third;
    printf("Please enter a number between 100 to 1000 : ");
    scanf("%d", &num);

    if (num<100 || num>1000)
    {
        printf("Please enter a three digit number\n");
    }
    else if (num>100 || num<1000)
    {
         num1 = num / 100;
        num2 = num / 10;
        num3 = num2 % 10;
        num4 = num % 10;

    /*printf("The number in hundreds place is %d\n", num1);
    printf("The number in tens place is %d\n", num3);
    printf("The number in units place is %d\n", num4); */ 

    cube_of_first = pow(num1,3);
    cube_of_second = pow(num3,3);
    cube_of_third = pow(num4, 3);

    if (cube_of_first + cube_of_second + cube_of_third == num)
    {
        printf("%d is a Amgstrong number", num);
    }
    else
    {
        printf("The number is not a Amstrong Number");
    }
    
    
    }
    
    

    return 0;
}
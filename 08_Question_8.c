#include <stdio.h>

int main(){
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        
        // if i = 0 ---> print 1 star 
        // if i = 1 ---> print 2 stars 
        // if i = 2 ---> print 3 stars 
        // no_of_stars = (i+1)

        // This for loop prints (i+1) stars 
        for(int j=0; j<i+1;j++){
            printf("*");
        }

        // This printf prints a new line 
        printf("\n");
    }
    
    return 0;
}
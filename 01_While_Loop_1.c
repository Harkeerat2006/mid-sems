/*For a INFINITE LOOP :-
agar 'while' ki condition me kuch esa daal jo hamesha TRUE ho toh loop will never terminate 
                                        OR
agar end me (i = i+1 ) ya (i++) nhi lagaya then also the loop will go on forever. For eg. while (2<10) */


#include<stdio.h>
int main(){

    int i = 0;

    while (i<10)
    {
        printf("The value of i is %d \n", i);
       // i = i + 1;
       i++; 
    }
    

    return 0;
}
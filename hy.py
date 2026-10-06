#include <stdio.h>

void callbyref (int *num)
{
    printf("print ref: %d\n", num); 
    printf("print ref value after deref: %d\n", *num); // de referencing
}

void callbyval (int num)
{
    printf("call by val: %d\n", num);
}


int main()# it is main
{
    int a=10;
    int *ptr = &a;
    printf("%d\n", ptr); 
    
    
    
    callbyval(a); // call by value
    callbyref(ptr);  // call by reference
    

    return 0;
}
//Print all natural numbers from a number to another using recursion 


#include <stdio.h>
#include <stdlib.h> // included for the exit(1)

void printN(lower,upper)
{
    if(lower > upper)
    {
        exit(0); // exits out of the whole loop. exit(0) means the 
        // program terminated without any error while exit(1)
        //means program terminated with some error 
    }
    else
    {
        printf("%d ", lower);
    }
    printN(lower+1, upper); //recursive step. it will increase lower by 1 and
    //will again go to the else statement and this will keep on happening 
    //until lower > upper
}

int main()
{
    int lower,upper;
    scanf("%d",&lower); ///scans upper
    scanf("%d",&upper); //scans lower
    printN(lower,upper); // calls the recursive function

    return 0;
}
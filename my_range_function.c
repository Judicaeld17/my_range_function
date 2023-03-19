// Description
// Create a function my_range which returns a malloc'd array of integers. This integer array should contain all values between min and max.

// Min included - max excluded.

// If min value is greater or equal to max's value, a null pointer should be returned.

// Don't worry about "free", it will be done in our main().

#include<stdlib.h>
int* my_range(int min,int max){
    if(min>=max){
        return 0;
    }
    else{
    int len =max-min+1;
    int* r_val=(int*)malloc(len*sizeof(int));
    int* temp=r_val;
    for(min;min<=max;min++){
       *temp=min;
       temp++;
    }
    return r_val;
    }
}
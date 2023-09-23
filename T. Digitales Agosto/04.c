#include <stdio.h>

int func1(int a, int b){
    return a+b;
}



int main(){
    int var = 123;
    printf("%d", var);

    int arr[5]= {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]*var);
    }

    printf("Func1: %d", func1(500, 725));
    
}
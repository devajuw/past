#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() 
    {
        int x = 50, y = 69, result;
    try {
        if (y == 0) {
            throw "Cannot divide by zero!";
        }
        result = x / y;
    }
    catch (const char* error) {
        printf("Error: %s\n", error);
        exit(1);
    };

    printf("%d / %d = %d\n", x, y, result);
    return 0;
    
}

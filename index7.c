#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    char* x;
    scanf("%d\n%d", &a, &b);
    b = b+1;
    for (int i = 0; b != a; a++)
    {
        if(a == 1){
            x = "one";
        }else if (a == 2){
            x = "two";
        }else if(a == 3){
            x = "three";
        }else if(a == 4){
            x = "four"; 
        }else if(a == 5){
            x = "five";
        }else if(a == 6){
            x = "six";
        }else if(a == 7){
            x = "seven";
        }else if(a == 8){
            x = "eight";
        }else if(a == 9){
            x = "nine";
        }else{
            if (a%2 == 0)
            {
                x = "even";
            }else{
                x = "odd";
            }
        }
        printf("%s \n",x);
    }
    return 0;
}
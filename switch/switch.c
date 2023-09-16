#include <stdio.h>
int main()
{
    char ch='z';

    printf("enter the char: ");
    scanf("%c",&ch);
       switch(ch)
       {
            case 'a':
                  printf("A is vowel");
                  break;

            case 'e':  
                    printf("E is vowel");
                    break;

            case'i':
                    printf("I is vowel");
                    break;
            case'o':
                    printf("O is vowel");
                    break;
            case'u':
                    printf("U is vowel");
                    break;  
            default:
                    printf("char is consonent");                  
        }
}
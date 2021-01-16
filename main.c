#include <stdio.h>
#include <stdlib.h>
int regex_func (char arr1[100],char arr2[100]){ //make regex function
    char regex[100];
    char input[100];
    int num = 0; //variable for counting the length of input[100].

    for (int i = 0; i < 101; i++){
        if (input[num] == "\0"){
            num = i;
            break;
        }
    } // Find the null in array using 'for'.
    int len_input = num; // length of input equals to variable 'num'.

    for (int num1 = 0; num1+len_input < 100;){
            int count = 0;
            for (int num2 = 0; num2 < len_input; num2++){
                if (regex[count] != input[num2])
                    break;

                if (count == len_input-1){
                    printf("%s\n", input );

                }

                count++;

            }
            num1 += 1;

    }



}


int main()
{

    char regex[100];
    char input[100];
    scanf("%s",regex);
    scanf("%s", input);
    printf ("%s", regex);

    regex_func(regex, input);
    return 0;
}

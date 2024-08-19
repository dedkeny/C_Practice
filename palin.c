#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]){

    if (argc < 2){
        printf("Please give a word to check for palendrome.\n\tusage: palen [word to check]");
    }

    else {

        char *str = argv[1];
        int start = 0;
        int end = strlen(str) - 1;
        char result[9] = "True\n";
        while (start < end){
            if (str[start] != str[end]){
                strcpy(result, "False\n");
                break;
            }
            else {
                start++;
                end--;
            }
        }
        printf("%s\n", result);
    }   
    return 0;
}

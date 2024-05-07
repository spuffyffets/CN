#include <stdio.h>
#include <string.h>

int main() { 
    // Variable declaration
    int i, j, l, count[50] = {0}; 
    char str[50]; 
    
    // Input
    printf("Enter the string: "); 
    scanf("%[^\n]", str); // Input string from user, read until newline
    
    // Display original string
    printf("Original String is: %s\n", str); 
    
    // Perform run-length encoding (Encode)
    printf("Encoded String is: "); 
    l = strlen(str);
    for (i = 0; i < l - 1;) { 
        j = 0; 
        count[i] = 1; 
        do { 
            j++; 
            if (str[i + j] == str[i]) 
                count[i]++; 
        } while (str[i + j] == str[i]); 

        if (count[i] == 1) 
            printf("%c", str[i++]); 
        else { 
            printf("%d%c", count[i], str[i]); 
            i += count[i]; // Move to the next character after repetitions
        } 
    } 
    
    return 0; 
}


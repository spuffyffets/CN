#include<stdio.h>
#include<stdlib.h>
#include<string.h> // Include string.h for strlen function

#define MAXSIZE 100

int main() { 
    char *p, *q; 
    char in[MAXSIZE]; 
    char stuff[MAXSIZE]; 
    char destuff[MAXSIZE]; 
    int count = 0; 
    
    // Input
    printf("Enter the input character string (0's & 1's only) = ");
    scanf("%s", in); // Input string from user
    
    // Bit Stuffing 
    p = in; 
    q = stuff; 
    while (*p != '\0') { 
        *q = *p; // Copy the current bit to output 
        q++; 
        if (*p == '1') { 
            count++; // Count consecutive '1's 
            if (count == 5) { 
                *q = '0'; // Stuff '0' after 5 consecutive '1's 
                q++; 
                count = 0; // Reset count
            } 
        } else { 
            count = 0; // Reset count for '0's
        } 
        p++; 
    }
    *q = '\0'; // Add null terminator to end of stuffed string
    printf("\nThe stuffed character string is = %s\n", stuff); 
	    
    // Input
    printf("Enter the input character string (0's & 1's only) = "); 
    scanf("%s", in); // Input string from user
    
    // Bit Stuffing 
    p = in; 
    q = stuff; 
    while (*p != '\0') { 
        *q = *p; // Copy the current bit to output 
        q++; 
        if (*p == '1') { 
            count++; // Count consecutive '1's 
            if (count == 5) { 
                *q = '0'; // Stuff '0' after 5 consecutive '1's 
                q++; 
                count = 0; // Reset count
            } 
        } else { 
            count = 0; // Reset count for '0's
        } 
        p++; 
    }
    *q = '\0'; // Add null terminator to end of stuffed string
    printf("\nThe stuffed character string is = %s\n", stuff); 
    
    // Bit Destuffing 
    p = stuff; 
    q = destuff; 
    count = 0; // Reset count
    while (*p != '\0') { 
        *q = *p; // Copy the current bit to output 
        q++; 
        if (*p == '1') { 
            count++; // Count consecutive '1's 
            if (count == 5) { 
                p++; // Skip the stuffed '0' 
                count = 0; // Reset count
            } 
        } else { 
            count = 0; // Reset count for '0's
        } 
        p++; 
    } 
    *q = '\0'; // Add null terminator to end of destuffed string
    printf("The destuffed character string is = %s\n", destuff); 
    
    return 0; 
}

    
    

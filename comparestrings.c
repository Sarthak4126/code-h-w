#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    int result = strcmp(str1, str2);
    
    if (result == 0) {
        printf("Both strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }

    return 0;
}

#include <stdio.h>

// 1. Calculate Length of a String
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {   // keep counting until we reach null terminator
        length++;
    }
    return length;
}

// 2. Reverse a String
void stringReverse(char str[]) {
    int len = stringLength(str);
    int i;
    char temp;

    for (i = 0; i < len / 2; i++) {   // swap from both ends
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// 3. Compare Two Strings
int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {  // compare until one ends
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i]; // return ASCII difference
        }
        i++;
    }
    return str1[i] - str2[i];   // if same so far, difference will be 0 or due to length
}

// 4. Copy String
void stringCopy(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';  // don’t forget null terminator
}

// 5. Concatenate Two Strings
void stringConcatenate(char dest[], char src[]) {
    int i = 0, j = 0;

    while (dest[i] != '\0') {   // move i to the end of dest
        i++;
    }
    while (src[j] != '\0') {    // copy src into dest
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';             // add null at the end
}

// 6. Convert String to Uppercase (manual ASCII logic)
void stringToUpper(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {   // small letters ASCII 97–122
            str[i] = str[i] - 32;               // convert to A–Z by subtracting 32
        }
        i++;
    }
}

// 7. Convert String to Lowercase
void stringToLower(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {   // capital letters ASCII 65–90
            str[i] = str[i] + 32;               // convert to a–z by adding 32
        }
        i++;
    }
}

// 8. Capitalize First Letter of Each Word
void capitalizeWords(char str[]) {
    int i = 0;
    int newWord = 1;   // true at start

    while (str[i] != '\0') {
        if (str[i] == ' ') {
            newWord = 1;   // after space, next will be new word
        }
        else if (newWord == 1 && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // make first letter uppercase
            newWord = 0;
        }
        else {
            newWord = 0;   // inside word, no change
        }
        i++;
    }
}

// ---------------- Main Program ----------------
int main(void) {
    char note1[200], note2[200], copy[200];
    int choice;

    // Read lines safely with fgets and strip trailing newline
    printf("Enter first note: ");
    if (!fgets(note1, sizeof(note1), stdin)) return 0;
    // remove trailing newline if present
    int i = 0;
    while (note1[i] != '\0') {
        if (note1[i] == '\n') { note1[i] = '\0'; break; }
        i++;
    }

    printf("Enter second note: ");
    if (!fgets(note2, sizeof(note2), stdin)) return 0;
    i = 0;
    while (note2[i] != '\0') {
        if (note2[i] == '\n') { note2[i] = '\0'; break; }
        i++;
    }

    while (1) {
        int c;
        printf("\nMenu:\n");
        printf("1. Calculate Length of Note1\n");
        printf("2. Reverse Note1\n");
        printf("3. Compare Note1 and Note2\n");
        printf("4. Copy Note1 into another\n");
        printf("5. Concatenate Note1 + Note2\n");
        printf("6. Convert Note1 to UPPERCASE\n");
        printf("7. Convert Note1 to lowercase\n");
        printf("8. Capitalize each word of Note1\n");
        printf("9. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1) {
            // invalid input — clear line and reprompt
            while ((c = getchar()) != '\n' && c != EOF);
            printf("Invalid input. Try again.\n");
            continue;
        }
        // consume leftover newline after scanf
        while ((c = getchar()) != '\n' && c != EOF);

        switch (choice) {
            case 1:
                printf("Length of Note1: %d\n", stringLength(note1));
                break;
            case 2:
                stringReverse(note1);
                printf("Reversed Note1: %s\n", note1);
                break;
            case 3:
                if (stringCompare(note1, note2) == 0)
                    printf("Both notes are equal.\n");
                else
                    printf("Notes are different.\n");
                break;
            case 4:
                stringCopy(copy, note1);
                printf("Copied Note: %s\n", copy);
                break;
            case 5:
                stringConcatenate(note1, note2);
                printf("Concatenated Note: %s\n", note1);
                break;
            case 6:
                stringToUpper(note1);
                printf("Uppercase Note1: %s\n", note1);
                break;
            case 7:
                stringToLower(note1);
                printf("Lowercase Note1: %s\n", note1);
                break;
            case 8:
                capitalizeWords(note1);
                printf("Capitalized Note1: %s\n", note1);
                break;
            case 9:
                return 0;   // exit program
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

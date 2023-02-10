#include <stdio.h>
#include <string.h>

void reverse(char* start, char* end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a word: ");
    scanf("%s", str);

    int length = strlen(str);
    reverse(str, str + length - 1);

    printf("Reversed word: %s\n", str);

    return 0;
}

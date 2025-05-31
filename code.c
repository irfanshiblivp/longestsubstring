#include <stdio.h>
#include <string.h>

int lengthof(char* s) {
    int n = strlen(s);
    int maxlen = 0;
    int start = 0;
    int index[256];
    int end;
    int length = 0;

    // first change values of all into -1
    for (int i = 0; i < 256; i++) {
        index[i] = -1;
    }

    for (end = 0; end < n; end++) {
        char current = s[end];

        // If current character was seen
        if (index[(int)current] >= start) {
            start = index[(int)current] + 1;
        }

        index[(int)current] = end;

        length = end - start + 1;
        if (length > maxlen) {
            maxlen = length;
        }
    }

    return maxlen;
}

int main() {
    char input1[] = "abcabcbb";
    char input2[] = "bbbbb";
    char input3[] = "pwwkew";

    printf("Input: \"%s\" → Output: %d\n", input1, lengthof(input1));
    printf("Input: \"%s\" → Output: %d\n", input2, lengthof(input2));
    printf("Input: \"%s\" → Output: %d\n", input3, lengthof(input3));

    return 0;
}

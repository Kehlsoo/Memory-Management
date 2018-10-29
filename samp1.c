#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define SIZE 16

int main()
{
    char *data1;
    int curr_size = SIZE;

    data1 = malloc (SIZE);
    printf ("Please input username: ");
    if (data1 != NULL) {
        int c = EOF;
        int i = 0;
        while ((c = getchar()) != '\n' && c != EOF) {
            data1[i++] = (char) c;
            if (i == curr_size) {
                curr_size = i + SIZE;
                data1 = realloc(data1, curr_size);
            }
        }
        data1[i] = '\0';
    }
    //scanf ("%s", data1);
    printf ("you entered: %s\n", data1);
    free (data1);
    return 0;
}
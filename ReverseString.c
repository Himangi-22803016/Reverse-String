#include <stdio.h>
#include <string.h>

void reverse(char *arr)
{
    char temp;
    int n = strlen(arr);
    int len = strlen(arr)/2;
    for(int i=0; i<len; i++)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1]=temp;
    }
}

int main() {
    char arr[50];
    printf("Enter string: ");
    scanf("%s", &arr);
    printf("Original string: %s\n", &arr);
    reverse(arr);
    printf("Reversed string: %s\n", &arr);
    return 0;
}

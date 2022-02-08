#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void left_move(char* arr,int k)  //Èı²½·¨×óĞı
{
      int sz=strlen(arr);
      Reverse(arr,arr+sz-1);
      Reverse(arr,arr+sz-k-1);
      Reverse(arr+sz-k,arr+sz-1);
}
void Reverse(char* left,char* right)
{
    while(left<right)
    {
        char temp=*left;
        *left=*right;
        *right=temp;
        left++;
        right--;
    }
}
int main()
{
    char arr[]="abcdef";
    left_move(arr,2);

    printf("%s\n",arr);
    return 0;
}

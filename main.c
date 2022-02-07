#include <stdio.h>
#include <stdlib.h>
void Move(int arr[],int sz)
{
    int left=0;
    int right=sz-1;

     while(left<right)
     {
         while((left<right)&&(arr[left]%2==1)) //考虑到如果全是奇数 越界访问的问题 加上left<right
         {
             left++;
         }
         while((left<right)&&(arr[right]%2==0))   //考虑到如果全是偶数 越界访问的问题 加上left<right
         {
             right--;
         }
         if(left<right)
         {
             int temp=arr[left];
             arr[left]=arr[right];
             arr[right]=temp;
         }
     }
}

int main()
{
   int arr[]={1,2,3,4,5,6,7,8,9};
   int sz=sizeof(arr)/sizeof(arr[0]);
   Move(arr,sz);
   for(int i=0;i<sz;i++)
   {
   printf("%d ",arr[i]);
   }
   return 0;
}

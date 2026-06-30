#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int s=0,l=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]<arr[s])
            s=j;
        if(arr[j]>arr[l])
            l=j;
    }
    int temp;
    temp=arr[l];
    arr[l]=arr[s];
    arr[s]=temp;
    for(int i=0;i<n;i++)
     printf("%d ",arr[i]);
    
      
    return 0;
}

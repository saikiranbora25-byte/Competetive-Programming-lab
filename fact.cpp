#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int fact(int num)
{
    if(num<1)
        return 1;
    else 
     return num*fact(num-1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    scanf("%d",&num);
    int value=fact(num);
    printf("%d",value);
    return 0;
}


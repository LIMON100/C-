#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    srand(time(0));
    for(int i = 0; i<5; i++)
        printf("%d ", 1+rand()%10000);
    return 0;
}

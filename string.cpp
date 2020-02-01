//insert string ..Dynamically.
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20][100];
    char item[100];
    int i,n,loc;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
    }
    //insert section
    printf("\nEnter location: ");
    scanf("%d",&loc);
    printf("\nEnter item:");
    scanf("%s",item);
    for(i=n;i>=loc;i--){
        strcpy(str[i+1],str[i]);
    }
    strcpy(str[loc],item);
    n=n+1;
    printf("Output: \n\n");
        for(i=0;i<n;i++){
        printf("%s\n",str[i]);
    }
    return 0;
}

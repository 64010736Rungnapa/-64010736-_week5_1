#include<stdio.h>
int main()
{   
    int i;
    scanf("%d",&i);
 
        if((i==1 || i%2 == 0 || i%3 == 0 || i%5==0 || i%7==0) 
            && (i!=2 && i!=3 && i!=5 && i!=7)){
        
             printf("Not Prime Number\n");  
        }
 
     else{
		printf("Prime Number");
	}
     
    return 0;
}
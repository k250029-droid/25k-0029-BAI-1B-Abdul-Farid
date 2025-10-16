#include<stdio.h>
int main (){
	int array[10],i;
	int lnum;
	int snum;
	printf("enter 10 numbers to print difference between them");
	for (i=0;i<10;i++){
		scanf("%d", &array[i]);
	}
	lnum=snum=array[0];
	
	for(i = 1; i < 10; i++) 
	{
        if(array[i] > lnum)
            lnum = array[i];
            
        if(array[i] < snum)
            snum = array[i];
    }
    printf("Largest Number is:%d\n",lnum);
	printf("Smallest Number is:%d\n",snum);
	printf("The difference between largest number and smallest number is:%d",lnum-snum);
	return 0;
	}

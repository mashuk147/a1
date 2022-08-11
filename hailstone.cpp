#include<stdio.h>
int main(){
	int num;
	int odd=1,even=0,hs,sum,i=1,j;
	while(i!=0){
printf("Enter number to begin hailstone sequence= ");
	scanf("%d",&num);
		printf("%d, ",num);
		i=num;	
	do{
		if(num%2==0){
			hs=num/2;
			even++;
		}
		else{
			hs=num*3+1;
			odd++;
		}
		printf("%d, ",hs);
		sum+=hs;
		num=hs;
	}while(num!=1);

	printf("\n Number of odd integers=%d",odd);
	printf("\n Number of even integers=%d",even);
	printf("\n Sum of all hailstone=%d",sum+i);
	printf("\n Do you want to start another sequence?\n If yes enter 1 else enter 0=");
	scanf("%d",&i);
}
}

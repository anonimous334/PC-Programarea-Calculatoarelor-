#include <stdio.h>
#include<time.h>
void wait()
{
	clock_t endwait;
	endwait=clock()+1*CLOCKS_PER_SEC;
	while(clock()<endwait){}
}
int main()
{
	printf("3 \n");
	wait();
	printf("2 \n");
	wait();
	printf("1 \n");
	wait();
	printf("START");
	return 0;		
}

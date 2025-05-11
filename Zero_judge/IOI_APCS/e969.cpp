#include <stdio.h>
#include <stdlib.h>

int money, minute, start;

int cost[2]={32, 55};

int main(void) {
	scanf("%d%d%d", &money, &minute, &start);
	int time_pass=0;
	if(money<cost[start]) {
		printf("Wayne can't eat and drink.\n");
	}
	while(money>=cost[start]) {
		printf("%d: Wayne ", time_pass);
		if(start==0) {
			printf("eats an Apple pie, ");
		} else {
			printf("drinks a Corn soup, ");
		}
		money-=cost[start];
		if(money==0) {
			printf("and now he doesn't have money.\n");
		} else {
			if(money==1) {
				printf("and now he has 1 dollar.\n");
			} else {
				printf("and now he has %d dollars.\n", money);
			}
		}
		start=1-start;
		time_pass+=minute;
	}
	
	return 0;
}
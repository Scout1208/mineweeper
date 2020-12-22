#include"minesweeper.h"
#include<stdio.h>
#include<stdint.h>
void minesweeper(int32_t width_input,int32_t height_input,int32_t mine_input){
	printf("   ");
	for(int32_t i=0;i<width_input;i++){
		if(i<10){
			printf("0%d ",i);
		}
		else{
			printf("%d ",i);
		}
	}
	printf("\n");
	printf("---------------------------------\n");
	for(int32_t i=0;i<height_input;i++){
			if(i<10)
			{
				printf("0%d ",i);
			}
			else
			{
				printf("%d ",i);
			}
			printf(" ");
		for(int32_t j=0;j<width_input;j++){
			printf("*  ");
		}
		printf("\n");
	}



return ;
}

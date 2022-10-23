#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x1,y1,x2,y2;
	int **arr1, **arr2;
	while(1){
		printf("Number one procession : ");
		scanf("%d %d", &x1, &y1);
		printf("Number two procession : ");
		scanf("%d %d", &x2, &y2);
		if(x1 == x2 && y1==y2){
			arr1 = (int **)malloc(sizeof(int *) * x1);
			arr2 = (int **)malloc(sizeof(int *) * x1);
			for(int i=0; i < x1; i++){
				arr1[i] = (int *)malloc(sizeof(int *) * y1);
				arr2[i] = (int *)malloc(sizeof(int *) * y1);
			}
		
			printf("input one procession\n");
			for(int i=0; i<x1; i++){
				for(int j=0; j<y1; j++){
					printf("arr1[%d][%d] : ", i,j);
					scanf("%d",&arr1[i][j]);
				}
			}
			printf("input two procession\n");
			for(int i=0; i<x2; i++){
				for(int j=0; j<y2; j++){
					printf("arr2[%d][%d] : ", i,j);
					scanf("%d",&arr2[i][j]);
				}
			}
			printf("one procession + two procession\n");
			printf("   ");
			for(int i=0; i<y1;i++){
				printf("[%d]", i);
			}
			printf("\n");
			for(int i=0; i<x1; i++){
				printf("[%d]",i);
				for(int j=0; j<y1; j++){
					printf(" %d ", arr1[i][j] + arr2[i][j]);	
				}
				printf("\n");
			}

			for(int i=0; i<x1; i++){
				free(arr1[i]);
				free(arr2[i]);
			}
			free(arr1);
			free(arr2);
			break;
		}
		else	
			printf("not equal then don't start\n"); 
	}
}

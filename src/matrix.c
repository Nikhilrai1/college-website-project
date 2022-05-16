#include<stdio.h>

int main(){
	char op; int mat1[3][3], mat2[3][3];
	printf("Enter the operator \n");
	scanf("%c",&op);
	printf("Enter the element of matrix1 \n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the element of matrix2 \n");
		for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			scanf("%d",&mat2[i][j]);
		}
	}

if(op == '+'){
	printf("Addition two matrix are: /n");
			for(int i=0; i<3; i++){
				for(int j=0; j<3; j++){
					printf("%d \t",mat1[i][j]+mat2[i][j]);
				}
				printf("\n");
			}
}
else if(op=='-'){
	printf("Subtraction two matrix are: /n");
		for(int i=0; i<3; i++){
				for(int j=0; j<3; j++){
					printf("%d \t",mat1[i][j]-mat2[i][j]);
				}
				printf("\n");
			}
}
else if(op == '*'){
	printf("Multiplication two matrix are: /n");
		for(int i=0; i<3; i++){
				for(int j=0; j<3; j++){
					printf("%d \t",mat1[i][j]*mat2[i][j]);
				}
				printf("\n");
			}
}
else if(op == '/'){
	printf("Division two matrix are: /n");
		for(int i=0; i<3; i++){
				for(int j=0; j<3; j++){
					printf("%d \t",mat1[i][j]/mat2[i][j]);
				}
				printf("\n");
			}
}
else{
	printf("Invalid Operator");
}
==	return 0;
}
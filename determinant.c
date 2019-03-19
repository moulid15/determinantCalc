#include<stdio.h>
#include<math.h>
int det(){

    return det;
}
int main(){
    int matrix[2][2];
    //put("Enter size");
    //fgets(size,30,stdin);
    long int determinant = 0;
    for(int i=0; i<2; i++){
        for(int j=0; j<2;j++){
            printf("enter for matrix[%d][%d]:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i = 0; i <2;i++){
        determinant+=pow(-1,1+i)*matrix[1][i]*det(matrix[1][i]);
    }
}

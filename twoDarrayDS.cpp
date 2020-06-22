#include<stdio.h>

int main(){
        int sample_array[6][6];
        int row,colum,max_row = 6,max_colum = 6,sum_index=0,sum_array[16];

        for( row = 0;row < max_row ; row++){

        for( colum = 0; colum < max_colum; colum ++){

                scanf("%d",&sample_array[row][colum]);

        }

        }

        for( row = 0;row < max_row-2; row++){

        for( colum = 0; colum < max_colum-2; colum ++){


             int sum =      sample_array[row][colum]+sample_array[row][colum+1] + sample_array[row][colum+2] +
                            sample_array[row+2][colum]+sample_array[row+2][colum+1] + sample_array[row+2][colum+2] +
                            sample_array[row+1][colum+1];

             sum_array[sum_index] = sum;
             sum_index ++ ;

        }

        }
        int max_value = sum_array[0];

        for(int k = 1; k< sum_index;k++){

            if(sum_array[k]>max_value){
            max_value = sum_array[k];
            }
        }
        printf("%d\n",max_value);







}

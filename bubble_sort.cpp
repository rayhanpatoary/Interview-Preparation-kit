#include<bits/stdc++.h>

using namespace std;

int main(){
    int array_list[] = {14 , 33 , 27 , 35 , 10};
    int array_size = 5;

    for(int counter = 1; counter <= array_size ; counter++){

            for(int checking = 0; checking < array_size-counter;checking++){

                    if(array_list[checking] > array_list[checking+1]){

                        int temp = array_list[checking];
                        array_list[checking] = array_list[checking+1];
                        array_list[checking+1] = temp;

                    }
            }
    }
    for(int i =0 ; i<array_size;i++){
            printf("%d ", array_list[i] );

    }





}

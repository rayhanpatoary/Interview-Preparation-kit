#include<bits/stdc++.h>

using namespace std;

struct node {
    int value;
    node *next_node_address;

};

node *start;

void append(int value){

    if (start == NULL){
    start = new node();
    start ->value = value;
    start ->next_node_address = NULL;

    }
    else {

    node *current_node = start;

    while(current_node->next_node_address!=NULL){

    current_node = current_node ->next_node_address;

    }

    node *newnode = new node();
    current_node ->next_node_address = newnode;
    newnode->value = value;
    newnode->next_node_address=NULL;

    }
}

void insert_value_in_a_position(int value, int position){
    int counter = 0;
    node *current_node = start;
    node *prev_node = NULL;
    node *newnode = new node();

    if (position==0){

    newnode ->value = value;
    newnode ->next_node_address = start;
    start =newnode;

    }
    else{
    while(current_node->next_node_address!=NULL){
        prev_node = current_node;
        current_node = current_node ->next_node_address;
        counter++;

        if(counter==position){

        break;
        }


    }
    newnode->value = value;
    newnode->next_node_address=current_node;
    prev_node->next_node_address =newnode;

    }


}



void print_current_list(){
    node *current_node = start;

    while(current_node != NULL){
        printf("%d ",current_node->value);
        current_node = current_node->next_node_address;

    }

}

int main(){

    int number_of_initial_node, each_node_value ,insert_value, insert_position,i;

    scanf("%d",&number_of_initial_node);

    for( i=1;i<=number_of_initial_node;i++){
    //printf("Came Here");

    scanf("%d",&each_node_value);
    append(each_node_value);
    //printf("Updated List:\n");
    //print_current_list();
    }
    scanf("%d",&insert_value);
    scanf("%d",&insert_position);

    insert_value_in_a_position(insert_value,insert_position);
    print_current_list();



}

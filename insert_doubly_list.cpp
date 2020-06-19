#include<bits/stdc++.h>

using namespace std;

struct doublynode{
        doublynode *left_node;
        int data;
        doublynode *right_node;

};

doublynode *head, *tail;


void add_node(int value){
        doublynode *newnode = new doublynode();

        if(head == NULL){

            newnode ->left_node = NULL;
            newnode ->data = value;
            newnode ->right_node = NULL;
            head = newnode;
            tail = newnode;
            return;

        }
        tail->right_node = newnode;
        newnode->left_node = tail;
        newnode->data = value;
        newnode->right_node = NULL;
        tail = newnode;
}

void print_list(){
        doublynode *current_node;
        current_node = head;

        while(current_node!= tail){
            printf("%d ",current_node->data);
            current_node = current_node->right_node;
        }
        printf("%d ",current_node->data);



}

void sort_list(int list_size){

        doublynode *current_node = head;


        for(int counter = 1; counter < list_size; counter++){
        current_node = head;

        for (int node_no = 1; node_no <= list_size-counter;node_no++){



        if(current_node->data > current_node->right_node->data){


            int temp = current_node->data;
            current_node->data = current_node->right_node->data;
            current_node->right_node->data = temp;

        }

        current_node = current_node->right_node;

        }

        }

}

void insert_node(int data){

        doublynode *newnode = new doublynode();
        doublynode *current_node = head;

        if(head->data > data){
                newnode->left_node = NULL;
                newnode->right_node = head;
                head-> left_node = newnode;
                head = newnode;

        }
        else{

        while(current_node->right_node!=NULL){


        if(current_node->data <= data && current_node->right_node->data >= data){

                newnode->left_node = current_node;
                newnode->right_node = current_node ->right_node;
                newnode->data = data;
                current_node->right_node = newnode;
                current_node ->right_node->left_node=newnode;
                break;

        }


        current_node=current_node->right_node;

        }

        if(current_node->right_node==NULL){

            newnode-> left_node = current_node;
            newnode-> right_node =NULL;
            newnode-> data = data;
            current_node->right_node = newnode;
            tail = newnode;
        }


        }

}



int main(){
  int test_case_no , number_of_node,node_value;

  cin >> test_case_no ;

  for(int i = 1; i<=test_case_no ; i++){

  cin>> number_of_node;

  for( int node_count = 1 ; node_count <= number_of_node ; node_count++){

        cin>> node_value;

        add_node(node_value);


  }
    sort_list(number_of_node);

    int insert_data;

    cin >> insert_data;

    insert_node(insert_data);

    print_list();

  }



}

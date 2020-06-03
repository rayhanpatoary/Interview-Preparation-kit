#include<bits/stdc++.h>

using namespace std;

struct node{

        int data;
        node *right_address;
        node *left_address;

};

node *head , *tail;

void append( int data){
        node *newnode = new node();
        newnode->data=data;


        if(head==NULL){
        head = newnode;
        newnode->left_address=NULL;
        newnode->right_address=NULL;
        cout<<"Head added"<<endl;

        }
        else{
            tail->right_address = newnode;
            newnode->left_address = tail;
            newnode->right_address = NULL;
            cout<<"one node added"<<endl;

            }

         tail = newnode;

}

void show_list(){
        cout <<"LN" <<"   CN   "<<"RN"<< endl;
        node *current_node = head;
        //cout<<"Current list:"<<endl;
        while(current_node!=NULL){

                if(current_node->left_address!=NULL){
                        cout<<current_node->left_address->data;
                }
                else{
                        cout<<"0 ";

                }

                cout<<"    " << current_node->data<<"    ";
                if(current_node->right_address!=NULL){
                        cout<<current_node->right_address->data ;
                }
                else{
                        cout<<"0" ;

                }
                current_node = current_node->right_address;
                printf("\n");
        }

}

void delete_node(int node_value){
        node *current_node = head;

        if(node_value == head->data){
                head->right_address->left_address = NULL;
                head = head->right_address;
                return;

            }

        if(node_value==tail->data){
               tail->left_address->right_address=NULL;
               tail = tail->left_address;
               return;

        }
        while(current_node!=NULL){
            if(current_node->data==node_value){



                    current_node->left_address->right_address = current_node->right_address;
                    current_node->right_address->left_address = current_node->left_address;
                    delete(current_node);

            }
        current_node=current_node->right_address;

        }
        return;



}

int main(){
        int number_of_node, data;
        cout << "Enter The size of link list:\n";
        cin >> number_of_node;
        for(int i = 1 ; i<= number_of_node;i++){
        scanf("%d",&data);
        append(data);
        }
        show_list();
        delete_node(5);
        show_list();

}

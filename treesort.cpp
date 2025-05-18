#include<iostream>
using namespace std;


struct node{
                int data;
                node* left;
                node*  right;

};

        node* createnode(int value){

            node* newnode = new node();

                newnode->data= value;
                newnode->left=NULL;
                newnode->right=NULL;
                return newnode;


        }

        node* insertNode(node* root,int value){
                if(root==NULL){

                    return createnode(value);

                }
                if(value<root->data){
                        root->left= insertNode(root->left,value);


                }
                else if(value>root->data){

                    root->right= insertNode(root->right,value);

                }

                return root;



        }


        void inorder(node* root){

                if(root != NULL){

                    inorder(root->left);
                    cout<<root->data<<" ";
                    inorder(root->right);
                }


        }


int main(){

    int n;
    cout<<"the array element no: "<<endl;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    node* root=NULL;

    for(int i=0;i<n;i++){

        root= insertNode(root,arr[i]);
    }
    cout<<"after sorting: "<<endl;

    inorder(root);



}

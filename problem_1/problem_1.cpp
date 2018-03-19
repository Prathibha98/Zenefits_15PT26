

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>

using namespace std;

int array[50]={0};
int n=0;

struct node
{
    int data;
    node *left,*right;
};
node *root =NULL;

void convert_int(char str[50],int len)
{
    int i=0;

    while(len)
    {
        if(isdigit(str[i]))
        {
            cout<<"\nInside isdigit check";
            array[n++]=int(str[i] - '0');
        }
        i++;
        len--;
    }

}

void construct_tree()
{
    cout<<"\nConstructing !!";
    //cout<<"  "<<array[0];
    node *temp ;
    if(root == NULL)
    {
        root = new node();
        cout<<"\nRoot is null now..";
        root->data=array[0];
        root->left=root->right = NULL;
    }


    cout<<"\nRoot: "<<root->data;

    int flag=0;
    node *ptr=new node();
    ptr=root;
    for(int i=1;i<n;)
    {
        if(flag==0)
        {
                node * temp=new node();
                temp->data=array[i];
                temp->left = temp->right = NULL;

               while(ptr->left !=NULL)
               {
                   ptr=ptr->left;
               }
               ptr = temp;
               if(array[i+1])
               {
                   ptr->left->data = array[i+1];
               }
               else
               {
                   ptr->left=NULL;
               }
               if(array[i+2])
               {
                   ptr->right->data = array[i+2];
               }
               else
               {
                   ptr->right=NULL;
               }
        }
        if(flag==1)
        {
                node * temp=new node();
                temp->data=array[i];
                temp->left = temp->right = NULL;

               while(ptr->right !=NULL)
               {
                   ptr=ptr->right;
               }
               ptr->data=array[i];
               if(array[i+1])
               {
                   ptr->left->data = array[i+1];
               }
               else
               {
                   ptr->left=NULL;
               }
               if(array[i+2])
               {
                   ptr->right->data = array[i+2];
               }
               else
               {
                   ptr->right=NULL;
               }
        }
        if(flag)
        {
            flag=0;
        }
        else
            flag=1;

        i=i+3;
    }
}

void inorder(node *root)
{
    if(root == NULL)
    {
        return ;
    }

    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);

}


main()
{
    char str[50];
    cout<<"\nEnter :";
    cin>>str;
    int len=strlen(str);
    convert_int(str,len);
    construct_tree();
    cout<<"\nDone!!";
    inorder(root);

  /*  for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    */
}

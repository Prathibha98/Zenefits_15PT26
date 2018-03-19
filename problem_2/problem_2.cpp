#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<bits/stdc++.h>

using namespace std;

char array[50];

int find_rank(string word,int n)
{
    int rank=0;
    sort(word.begin(),word.end());


    do
          {
              rank++;
              if(strcmp(next_permutation(word.begin(),word.end()) ,word)== 0)
              {
                  break;
              }
          }while(next_permutation(word.begin(),word.end()));

    return rank;
}

main()
{
    int n;

    cout<<"\nEnter the number of characters :";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    string word;
    cout<<"\nEnter word :"
    cin>>word;
    int rank;
    rank=find_rank(word,n);

}

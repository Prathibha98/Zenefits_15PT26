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


    while(next_permutation(word.begin(),word.end())
          {
              rank++;
              if(next_permutation(word.begin(),word.end()) == word)
              {
                  break;
              }
          }

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
    char word[50];
    cout<<"\nEnter word :"
    cin>>word;
    int rank;
    rank=find_rank(word,n);

}

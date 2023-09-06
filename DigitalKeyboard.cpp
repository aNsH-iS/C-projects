#include<iostream.h>

void main(){

    cout<<" A B C D    E F G H    I J K L\n
            M N O P    Q R S T    U V W X\n
            Y Z";

    int arr[3][12]={'A',' B' ,'C',' D','E',' F' ,'G', 'H','I','J','K', 'L',
            'M' ,'N',' O',' P','Q',' R',' S',' T'  ,  ' U' ,'V',' W',' X',
           ' Y' ,'Z'}

    cout<<"Want to enter word or sentence";
    cin>>ans;

    if(ans=='w')
    {cout<<"No of letters?";
     cin>>l;
     for(i=0;i<l;i++)
      {cin>>word[i][0];   //the row index of letter
      cin>>word[i][1];}
      for(i=0;i<l;i++)
       cout<<arr[word[i][0]][word[i][1]]; //the col index of letter
      

    }
     

}
#include<iostream.h>

void main()
{
    int arr[9*9],i,j;
    char ans='y';
    
     arr[0][0]=5;
     arr[0][1]=3;
     arr[0][2]=0;
     arr[0][3]=0;
     arr[0][4]=7;
     arr[0][5]=0;
     arr[0][6]=0;
     arr[0][7]=0;
     arr[0][8]=0;
     arr[1][0]=6;
     arr[1][1]=0;
     arr[1][2]=0;
     arr[1][3]=1;
     arr[1][4]=9;
     arr[1][5]=5;
     arr[1][6]=0;
     arr[1][7]=0;
     arr[1][8]=0;
     arr[2][0]=0;
     arr[2][1]=9;
     arr[2][2]=8;
     arr[2][3]=0;
     arr[2][4]=0;
     arr[2][5]=0;
     arr[2][6]=0;
     arr[2][7]=6;
     arr[2][8]=0;
     arr[3][0]=8;
     arr[3][1]=0;
     arr[3][2]=0;
     arr[3][3]=0;
     arr[3][4]=6;
     arr[3][5]=0;
     arr[3][6]=0;
     arr[3][7]=0;
     arr[3][8]=3;
     arr[4][0]=4;
     arr[4][1]=0;
     arr[4][2]=0;
     arr[4][3]=8;
     arr[4][4]=0;
     arr[4][5]=3;
     arr[4][6]=0;
     arr[4][7]=0;
     arr[4][8]=1;
     arr[5][0]=7;
     arr[5][1]=0;
     arr[5][2]=0;
     arr[5][3]=0;
     arr[5][4]=2;
     arr[5][5]=0;
     arr[5][6]=0;
     arr[5][7]=0;
     arr[5][8]=6;
     arr[6][0]=0;
     arr[6][1]=6;
     arr[6][2]=0;
     arr[6][3]=0;
     arr[6][4]=0;
     arr[6][5]=0;
     arr[6][6]=2;
     arr[6][7]=8;
     arr[6][8]=0;
     arr[7][0]=0;
     arr[7][1]=0;
     arr[7][2]=0;
     arr[7][3]=4;
     arr[7][4]=1;
     arr[7][5]=9;
     arr[7][6]=0;
     arr[7][7]=0;
     arr[7][8]=5;
     arr[8][0]=0;
     arr[8][1]=0;
     arr[8][2]=0;
     arr[8][3]=0;
     arr[8][4]=8;
     arr[8][5]=0;
     arr[8][6]=0;
     arr[8][7]=7;
     arr[8][8]=9;

    for(i=0;i<9;i++)
     {for(j=0;j<9;j++)
    //  if(arr[i][j]!=0)
      cout<<arr[i][j]<<" ";
    cout<<"\n";}

    while(ans='y')
     cout<<"Enter i and j";
     cin>>i>>j;
     cin>>arr[i][j];

    for(i=0;i<9;i++)
    {for(j=0;j<9;j++)
      cout<<arr[i][j]<<" ";
    cout<<"\n";}
    
      

}
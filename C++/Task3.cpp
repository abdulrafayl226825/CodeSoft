#include <iostream>
using namespace std;

void GenerateBoard(string Board[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            Board[i][j]="-";
        }
    }
}
void PrintBoard(const string Board[][3])
{
        for(int i=0;i<3;i++)
        {
            for(int j=-0;j<3;j++)
            {
                    cout << Board[i][j] << "    ";
            }
            cout<<endl;
        }
}
int IsAnyWinner(string Board[][3])
{
    if(Board[0][1] == Board[0][0] )
    {
        if(Board[0][2]==Board[0][0])
        {
            if (Board[0][0] == "O") {
                return 1;
            } else if (Board[0][0] == "X") {
                return 2;
            }
        }
    }
    if(Board[0][0]==Board[1][0])
    {
        if(Board[2][0]==Board[0][0])
        {
            if (Board[0][0] == "O") {
                return 1;
            } else if (Board[0][0] == "X") {
                return 2;
            }
        }
    }
    if(Board[0][0]==Board[1][1])
    {
        if(Board[1][1]==Board[2][2])
        {
            if (Board[0][0] == "O") {
                return 1;
            } else if (Board[0][0] == "X") {
                return 2;
            }
        }
    }
   if(Board[1][0]==Board[1][1])
   {
       if(Board[1][0]==Board[1][2])
       {
           if (Board[1][0] == "O") {
               return 1;
           } else if (Board[1][0] == "X") {
               return 2;
           }
       }
   }
   if(Board[0][1]==Board[1][1])
   {
       if(Board[1][1]==Board[2][1])
       {
           if (Board[0][1] == "O") {
               return 1;
           } else if (Board[0][1] == "X") {
               return 2;
           }
       }
   }
   if(Board[2][0]==Board[2][1])
   {
       if(Board[2][1]==Board[2][2])
       {
           if(Board[2][0]=="O")
               return 1;
           else if(Board[2][0]=="X")
               return 2;
       }
   }
   if(Board[2][0]==Board[1][1])
   {
       if(Board[1][1]==Board[0][2])
       {
           if(Board[2][0]=="O")
               return 1;
           else if(Board[2][0]=="X")
               return 2;
       }
   }
   if(Board[0][2]==Board[1][2])
   {
       if(Board[1][2]==Board[2][2])
       {
           if(Board[2][2]=="O")
               return 1;
           else if(Board[2][2]=="X")
               return  2;

       }
   }
   return 0;
}
bool IsAnySpace(string Board[][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=-0;j<3;j++)
        {
           if(Board[i][j]=="-")
               return true;
        }
    }
    return false;
}
void TakeTurn(string Board[][3],int Turn)
{
    int r,c;
    bool x= false;
    do {
        cout<<"Enter Row and Column where You want to add your option :"<<endl;
        cin>>r>>c;
        if(r<3&&c<3) {
            if (Board[r][c] == "-") {
                if (Turn == 1){
                    Board[r][c] = "O";}
                else if (Turn == 2)
                {  Board[r][c] = "X"; }
                break;
            } else cout << "This Space is already Occupied" << endl;
        }
        else
        {
            cout<<"Enter Again invalid Rows And Columns"<<endl;
        }
        if(r>3 || c>3)
        x=true;
        else if(Board[r][c] != "-")
        x=true;
        else x=false;
    }while(x);


}
void PlayGame(string Board[][3])
{
    string Player1;
    string Player2;
    cout<<"Enter Name of Player1"<<endl;
    cin>>Player1;
    cout<<"Enter Name of Player2"<<endl;
    cin>>Player2;
    GenerateBoard(Board);
    while(IsAnySpace(Board))
    {
        cout<<Player1<<"Take Your Turn"<<endl;
        TakeTurn(Board,1);
        PrintBoard(Board);
        int x= IsAnyWinner(Board);
        if(x)
        {
            if(x==1)
                cout<<"Congrats ! "<<Player1<<"Wins"<<endl;
            else if(x==2)
                cout<<"Congrats ! "<<Player2<<"Wins"<<endl;
            break;
        }
        cout<<Player1<<"Take Your Turn"<<endl;
        TakeTurn(Board,2);
        PrintBoard(Board);

         x= IsAnyWinner(Board);
        if(x)
        {
         if(x==1)
         cout<<"Congrats ! "<<Player1<<"Wins"<<endl;
          else if(x==2)
                cout<<"Congrats ! "<<Player2<<"Wins"<<endl;
            break;
        }
    }
}
int main()
{

    string Board[3][3];
    int Status;
    do{
            PlayGame(Board);
        cout<<"if you want to play again Enter 1 any other integer for exit"<<endl;
        cin>>Status;
    }while(Status==1);
}

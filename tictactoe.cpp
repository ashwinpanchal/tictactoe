#include<iostream>

using namespace std;

char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row,col;
char x_o='O';

void print_board(){
    cout<<"     |     |     \n";
    cout<<"  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     \n";
    cout<<"  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  "<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     \n";
    cout<<"  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  "<<endl;
    cout<<"     |     |     \n";
}

void game_start(){
    cout<<"Welcome to TicTacToe!"<<endl;
    cout<<"Player1 : X | Player2 : O"<<endl;
}

bool check_win(char x){
    if((board[0][0]==x && board[0][1]==x && board[0][2]==x)||
    (board[1][0]==x && board[1][1]==x && board[1][2]==x)||
    (board[2][0]==x && board[2][1]==x && board[2][2]==x)||
    (board[0][0]==x && board[1][0]==x && board[2][0]==x)||
    (board[0][1]==x && board[1][1]==x && board[2][1]==x)||
    (board[0][2]==x && board[1][2]==x && board[2][2]==x)||
    (board[0][0]==x && board[1][1]==x && board[2][2]==x)||
    (board[2][0]==x && board[1][1]==x && board[0][2]==x)
    ){
        return true;
    }
    return false;
}

void func(int n,int i){
    char x;
    if(i%2==0){
        x='X';
    }
    else{
        x='O';
    }
    if(n==1){
        board[0][0]=x;
    }
    else if(n==2){
        board[0][1]=x;
    }
    else if(n==3){
        board[0][2]=x;
    }
    else if(n==4){
        board[1][0]=x;
    }
    else if(n==5){
        board[1][1]=x;
    }
    else if(n==6){
        board[1][2]=x;
    }
    else if(n==7){
        board[2][0]=x;
    }
    else if(n==8){
        board[2][1]=x;
    }
    else if(n==9){
        board[2][2]=x;
    }
}



int main(){
    game_start();
    int i=0;
    while(1){
        if(i==9){
            print_board();
            cout<<"Match is Drawn!"<<endl;
            break;
        }
        int x;
        print_board();
        cout<<"Press the Number"<<endl;
        if(i%2==0){
            cout<<"Player1 chance: "<<endl;
            cout<<"Enter the number: ";
            cin>>x;
            func(x,i);
            if(check_win('X')){
                cout<<"Player 1 wins!!!"<<endl;
                print_board();
                break;
            }
        }
        else{
            cout<<"Player2 chance: "<<endl;
            cout<<"Enter the number: ";
            cin>>x;
            func(x,i);
            if(check_win('O')){
                cout<<"Player 2 wins!!!"<<endl;
                print_board();
                break;
            }
        }
        i++;
    }
}
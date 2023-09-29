#include<bits/stdc++.h>
using namespace std;

int comp_move(){
    return rand()%3;
}

int player_move(){
    int n;
    cout<<"Enter Your Choice: \n1) Rock\n2) Paper\n3) Scissor\n\n";
    cout<<"Enter here:  ";
    cin>>n;
    if(n<1 || n>3){
        cout<<"\n\nERROR! Choose a Valid Option\n\n"<<endl;
        player_move();
    }
    return n;
}

void game(){
    int a = player_move();
    int b = comp_move() + 1;
    switch (a)
    {
    case 1: 
        cout<<"You chose Rock!"<<endl;
        break;
    case 2:
        cout<<"You chose Paper!"<<endl;
        break;
    case 3:
        cout<<"You chose Scissor!"<<endl;
    default:
        break;
    }

    switch (b)
    {
    case 1: 
        cout<<"Computer chose Rock!"<<endl;
        break;
    case 2:
        cout<<"Computer chose Paper!"<<endl;
        break;
    case 3:
        cout<<"Computer chose Scissor!"<<endl;
    default:
        break;
    }

    if((a == 1 && b == 3) || (a == 2 && b == 1) || (a == 3 && b == 2)){
        cout<<"You WON!!"<<endl;
    }else if( a == b){
        cout<<"Tied"<<endl;
    }else{
        cout<<"You Lost, Better Luck Next Time."<<endl;
    }

    cout<<"Enter 1 to Play again or Any other key to End Game"<<endl;
    int c;
    cin>>c;
    if(c==1){
        game();
    }else{
        return;
    }
}

int main(){
    game();
    return 0;
}

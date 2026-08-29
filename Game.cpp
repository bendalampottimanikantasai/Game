#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
string choicename(int choice){
    if(choice == 0) return "Rock";
    if(choice == 1) return "paper";
    return "Scissor";
}
int getcomputerchoice(){
    return rand()%3;
}
int getplayerchoice(){
    int choice;
    cout<<"0.rock\n1.paper\n2.scissor\n";
    cin>>choice;
    return choice;
}
int desideplayer(int player,int computer){
    if(player == computer) return 0;
    if(player == 0&&computer ==2||player==1&&computer==0||player==2&&computer==1 ){
        return 1;
    }
    return 2;
}
int main(){
    srand(time(0));
    char playagain ='y';
    while(playagain == 'y'){
        cout<<"enter player choice"<<endl;
        int player = getplayerchoice();
        if(player<0&&player>2){
            cout<<"invalid statement"<<endl;
            continue;
        }
        int computer = getcomputerchoice();
        cout<<"your choice "<<choicename(player)<<endl;
        cout<<"computer choice"<<choicename(computer)<<endl;
        int result = desideplayer(player,computer);
        if(result == 0){
            cout<<"game tie\n";
        }
        else if(result == 1){
            cout<<"player win\n";
        }
        else{
            cout<<"computer win\n";
        }
        
        cout<<"playagain y or n"<<endl;
        cin>>playagain;

        
    }
    cout<<"thanku for playing game"<<endl;
    return 0;
}


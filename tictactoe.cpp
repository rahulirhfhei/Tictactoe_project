#include<iostream>
using namespace std;
char a[3][3];
char symbol;
char symbol2;
int going=0;
string decide;
string player1;
string player2;

char display(){
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<"|"<<  a[i][j];
        }
        cout<<"|";
        cout<<"\n";
        cout<<"|_|_|_|"<<endl;
    }
}
string player_one(){
    string playerone;
    cout<<"Please Enter your name player 1  ";
    cin>>playerone;
    player1=playerone;
}
string player_two(){
    string playertwo;
    cout<<"Please Enter your name player 2  ";
    cin>>playertwo;
    player2=playertwo;
}
char symbol_one(){
    char symbolone;
        cout<<"please select 'X' or 'O' as your symbol   "<<player1;
    cin>>symbolone;
    symbol=symbolone;
}
char symbol_two(){
    char symboltwo;
    if (symbol=='X' ){
        symboltwo='O';
    }
    else{
        symboltwo='X';
    }
    symbol2=symboltwo;
}
int progress(){
    if(a[0][0]==a[0][1] && a[0][1]==a[0][2] && a[0][0]=='X'){
        going=1;
    }
    else if(a[1][0]==a[1][1]  && a[1][1]==a[1][2] && a[1][0]=='X'){
        going=1;
    }
    else if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]=='X'){
        going=1;
    }
    else if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]=='X'){
        going=1;
    }
    else if(a[0][1]==a[1][1] &&  a[1][1]==a[2][1] && a[0][1]=='X'){
        going=1;
    }
    else if(a[0][2]==a[1][2]&&  a[1][2]==a[2][2] && a[0][2]=='X'){
        going=1;
    }  
    else if(a[0][0]==a[1][1]&& a[1][1]==a[2][2]&& a[0][0]=='X'){
        going=1;
    }
    else if(a[0][2]==a[1][1]&& a[1][1]==a[2][0]&& a[0][2]=='X'){
        going=1;
    }
    else if(a[0][0]==a[0][1] && a[0][1]==a[0][2] && a[0][0]=='O'){
        going=1;
    }
    else if(a[1][0]==a[1][1]  && a[1][1]==a[1][2] && a[1][0]=='O'){
        going=1;
    }
    else if(a[2][0]==a[2][1] && a[2][1]==a[2][2] && a[2][0]=='O'){
        going=1;
    }
    else if(a[0][0]==a[1][0] && a[1][0]==a[2][0] && a[0][0]=='O'){
        going=1;
    }
    else if(a[0][1]==a[1][1] &&  a[1][1]==a[2][1] && a[0][1]=='O'){
        going=1;
    }
    else if(a[0][2]==a[1][2]&&  a[1][2]==a[2][2] && a[0][2]=='O'){
        going=1;
    }
    else if(a[0][0]==a[1][1]&& a[1][1]==a[2][2]&& a[0][0]=='O'){
        going=1;
    }
    else if(a[0][2]==a[1][1]&& a[1][1]==a[2][0]&& a[0][2]=='O'){
        going=1;
    }
    else{
        going=0;
    }
    return going;

}
char position_one(){
    int b;
    cout<<"please select a number from 1 to 9 "<<player1;
    cin>>b;
    if (b==1){
        a[0][0]=symbol;
        return a[0][0];
    }
    if (b==2){
        a[0][1]=symbol;
        return a[0][1];
    }
  if (b==3){
        a[0][2]=symbol;
        return a[0][2];
    }
    if (b==4){
        a[1][0]=symbol;
        return a[1][0];
    }
    if (b==5){
        a[1][1]=symbol;
        return a[1][1];

    }
    if (b==6){
        a[1][2]=symbol;
        return a[1][2];
    }
    if (b==7){
        a[2][0]=symbol;
        return a[2][0];

    }
    if (b==8){
        a[2][1]=symbol;
        return a[2][1];
    }
    if (b==9){
        a[2][2]=symbol;
        return a[2][2];
    }
}
char position_two(){
    int b;
    cout<<"please select a number from 1 to 9 "<<player2;
    cin>>b;
    if (b==1){
        a[0][0]=symbol2;
        return a[0][0];
    }
    if (b==2){
        a[0][1]=symbol2;
        return a[0][1];
    }
  if (b==3){
        a[0][2]=symbol2;
        return a[0][2];
    }
    if (b==4){
        a[1][0]=symbol2;
        return a[1][0];
    }
    if (b==5){
        a[1][1]=symbol2;
        return a[1][1];

    }
    if (b==6){
        a[1][2]=symbol2;
        return a[1][2];
    }
    if (b==7){
        a[2][0]=symbol2;
        return a[2][0];

    }
    if (b==8){
        a[2][1]=symbol2;
        return a[2][1];
    }
    if (b==9){
        a[2][2]=symbol2;
        return a[2][2];
    }
}


int gamestarts(){
    player_one();
    player_two();
    symbol_one();
    symbol_two();
    while (going!=1){
         if (going==0){
            position_one();
            progress();
            display();
            if(going==1){
                cout<<"CONGRATULATIONS "<<player1<<" You won the game";
                break;
            }
        }
           if (going==0){
            position_two();
            progress();
            display();
            if(going==1){
              cout<<"CONGRATULATIONS "<<player2<<" You won the game";
              break;
            }
        }
    }
}
int main(){
     for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            a[i][j] =' ';
        }
     }
    gamestarts();
    return 0;
}
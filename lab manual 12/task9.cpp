#include <iostream>
using namespace std;
char obj[5][5];
bool gravity=false;
bool isblackhole=false;
void displayworld() {
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<obj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void setgravtatus(bool status){
    gravity=status;
}
void setblholeStatus(bool status){
    isblackhole=status;
}
void timeTick(int times){
    if(!gravity) return;
    for(int tick=0;tick<times;tick++){
        for(int r=4;r>0;r--){
            for(int c=0;c<5;c++){
                if(obj[r-1][c]=='#'&&obj[r][c]=='-'){
                    obj[r][c]='#';
                    obj[r-1][c]='-';
                }
                else if(isblackhole&&r==4&&obj[r][c]=='#'){
                    obj[r][c]='-';
                    obj[0][c]='#';
                }
            }
        }
    }
}

int main() {
    char initial[5][5]={
        {'-', '#', '#', '-', '#'},
        {'#', '-', '-', '#', '-'},
        {'-', '#', '-', '-', '-'},
        {'#', '-', '#', '-', '#'},
        {'#', '-', '-', '-', '-'}
    };
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            obj[i][j]=initial[i][j];
        }
    }
    cout<<"Initial World:"<<endl;
    displayworld();
    setgravstatus(true);
    setblholeStatus(true);
    timeTick(3);
    cout<<"After three Gravity Ticks with Black Hole:"<<endl;
    displayworld();
    return 0;
}

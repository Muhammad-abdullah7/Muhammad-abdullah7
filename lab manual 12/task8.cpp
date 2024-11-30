#include <iostream>
using namespace std;
const int rows=5;
const int columns=5;
char objects[rows][columns]={
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}
};
bool gravity = false;
void displayWorld(){
    for(int i=0;i<rows;++i){
        for(int j=0;j<columns;++j){
            cout<<objects[i][j]<<' ';
        }
        cout<<endl;
    }
    cout<<endl;
}
void setgrastatus(bool status){
    gravity=status;
}
void timeTick(int times) {
    if(!gravity){
      return;
    }
    for(int t=0;t<times;++t){
        for(int col=0;col<columns;++col){
            int emptyRow=rows-1;
            for(int row=rows-2;row>=0;--row){
                if(objects[row][col]=='#'){
                    if(emptyRow>row){
                        objects[emptyRow][col]='#';
                        objects[row][col]='-';
                        emptyRow--;
                    } else {
                        break;
                    }
                }
            }
        }
    }
}
int main() {
    cout << "Initial World:" << endl;
    displayWorld();
    setgrastatus(true);
    timeTick(3);
    cout << "World After 3 Time Ticks:" << endl;
    displayWorld();
    return 0;
}

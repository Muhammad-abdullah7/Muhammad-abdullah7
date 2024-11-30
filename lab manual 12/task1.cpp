#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main() {
    string color[5]={"Red","Black","Brown","Blue","Gray"};
    int salesofcars[5][6]={
        {10, 7, 12, 10, 4},  
        {18, 11, 15, 17, 2}, 
        {23, 19, 12, 16, 14}, 
        {7, 12, 16, 0, 2},   
        {3, 5, 6, 2, 1}     
    };
    cout<<setw(15)<<"Car Brand"<<setw(10)<<"Red"<<setw(10)<<"Black"<<setw(10)<<"Brown"<<setw(10)<<"Blue"<<setw(10)<<"Gray"<<endl;
    for(int i=0;i<5;i++){
        cout<<setw(15)<<color[i];
        for(int j=0;j<5;j++){
            cout<<setw(10)<<salesofcars[i][j];
        }
        cout<<endl;
    }
    cout<<"\nTotal Sales for each Car Brand:"<<endl;
    for(int i=0;i<5;i++){
        int total=0;
        for(int j=0;j<5;j++){
            total+=salesofcars[i][j];
        }
        cout<<setw(15)<<color[i]<<setw(10)<<total<<endl;
    }
    return 0;
}
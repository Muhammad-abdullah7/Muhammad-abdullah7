#include <iostream>
using namespace std;
<<<<<<< HEAD
main(){
cout<<"        *       *     *               "<<endl;
cout<<"         *       *     *              "<<endl;
cout<<"          *       *     *             "<<endl;
cout<<"         *       *     *              "<<endl;
cout<<"         *      *     *               "<<endl;
cout<<"           *     *      *             "<<endl;
cout<<"             *      *      *           "<<endl;
cout<<"***********************************   "<<endl;
cout<<" *                               *    "<<endl;
cout<<"  *                             *     "<<endl;
cout<<"   *                           *      "<<endl;
cout<<"     *                       *        "<<endl;
cout<<"        ******************            "<<endl;
cout<<"#WELCOME TO F()() |) APPLICATION#     "<<endl;

=======
int main(){
    string name;
    int wins,loses,draws,tot_points;
    cout<<"Enter the name of team: ";
    cin>>name;
    cout<<"Enter the no of wins: ";
    cin>>wins;
    cout<<"Enter the no of draws: ";
    cin>>draws;
    cout<<"Enter the no of loses: ";
    cin>>loses;
    tot_points=((wins)*3)+((draws)*1)+((loses)*0);
    cout<<"Total points of team "<<name<<" after the follwoing matches are "<< tot_points<<endl;
    return 0;
    
>>>>>>> 53460ef (Initial commit)
}
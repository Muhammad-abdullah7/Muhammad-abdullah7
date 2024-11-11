#include <iostream>
#include <string>
using namespace std;
void jazz_chords(string chords[], int numchords) {
    for (int i=0;i<numchords;i++) {
        if (chords[i].back()!='7') {  
            chords[i]+="7";  
        }
    }
}
int main() {
    string chords1[]={"G","F","C"};
    int size1=3;
    jazz_chords(chords1, size1);
    for (int i = 0; i < size1; i++) {
        cout << chords1[i] << " ";
    }
    cout << endl;
    string chords2[]={"Dm","G","E","A"};
    int size2=4;
    jazz_chords(chords2,size2);
    for (int i=0;i<size2;i++) {
        cout << chords2[i] << " ";
    }
    cout << endl;
    string chords3[]={"F7","E7","A7","Ab7","Gm7","C7"};
    int size3=6;
    jazz_chords(chords3,size3);
    for (int i=0;i<size3;i++) {
        cout << chords3[i] << " ";
    }
    cout << endl;
    return 0;
}

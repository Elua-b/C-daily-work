#include <vector>
#include <iostream>
using namespace std;
int main(){
    vector<int> vect1={2,3,4,5,6};
    vector<int> vect2={1,2,3,4,5};
    vector<int> vect3={1,2,3,4,5};
    for (int i=0;i<vect1.size();i++){
        cout<<vect1[i]<<endl;
    }
}

#include<iostream>
#include<string>

using namespace std;

int main () {
    string phrase="Removi o = do programa";
    
    for(int i = 0; i < phrase.size(); ++i) { 
        cout << "Character at position " << i << " is: " << phrase[i] << endl; 
    }
    return 0;
}
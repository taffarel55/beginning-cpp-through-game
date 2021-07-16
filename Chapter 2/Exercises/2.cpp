#include <iostream> 

using namespace std; 

int main() { 
    int x = 0; 
    while (x) { // Na primeira iteração x=0, a condição será FALSE, bloco loop não é executado
        ++x; 
        cout << x << endl; 
    }
    return 0;
}
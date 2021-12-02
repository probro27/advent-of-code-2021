#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n = 1000;
    int x_position = 0;
    int depth = 0;
    int aim = 0;
    for(int i = 0; i<n; i++){
        string word;
        int steps;
        cin >> word;
        cin >> steps;
        if(word == "forward"){
            x_position= x_position + steps;
            depth = depth + (steps*aim);
        }
        else if(word == "down"){
            aim= aim + steps;
        }
        else{
            aim=aim - steps;
        }
    }
    cout << (depth * x_position) << "\n";
    return 0;
}

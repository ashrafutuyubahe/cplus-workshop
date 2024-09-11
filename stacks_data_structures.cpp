#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<string> carNames;
    stack<int> randomNumber;
    int maxRandomNumber = 0;  
    int userRandomNumber;

    carNames.push("langerover");
    carNames.push("mercedes");
    carNames.push("toyota");
    carNames.push("voxwagen");

    
    for (int a = 0; a < 2; a++) {
        cout << "Please input the " << a + 1 << " random number, and at the end, I will tell you the maximum one: ";
        cin >> userRandomNumber;
        randomNumber.push(userRandomNumber);  
    }

    
    while (!randomNumber.empty()) {
      
        if (randomNumber.top() > maxRandomNumber) {
            maxRandomNumber = randomNumber.top();  
        }
        randomNumber.pop(); 
    }

    cout << "The maximum number among the random ones you've provided is: " << maxRandomNumber << endl;

    // Iterating over carNames stack (if needed)
    // while (!carNames.empty()) {
    //     cout << carNames.top() << endl;
    //     carNames.pop();
    // }

    return 0;
}

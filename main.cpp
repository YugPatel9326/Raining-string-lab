#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    vector<string> businessList;
    string businessName;
    string userAnswer;
    bool keepGoing = true;

    cout << "Welcome to the Business Sorting Program" << "\n";

    while (keepGoing) {
        
        cout << "Please enter your business name: ";
        getline(cin, businessName);
        businessList.push_back(businessName);
        sort(businessList.begin(), businessList.end());
        cout << "\nYour business(es):\n" << "\n";

        for (int i = 0; i < businessList.size(); i++) {
            cout << businessList[i] << "\n";
        }

        cout << "\nAdd another business? ";
        getline(cin, userAnswer);

        if (userAnswer == "y" || userAnswer == "Y" || 
            userAnswer == "yes" || userAnswer == "Yes") {
        } else {
            keepGoing = false; 

        }

    }

    cout << "Thank you for using the Business Sorting Program!" << "\n";
}

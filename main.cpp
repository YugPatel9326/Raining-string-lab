#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<string> businessList;
    string businessName;
    string userAnswer;
    bool keepGoing = true;

    


    while (keepGoing) {
        cout << "Welcome to the Business Sorting Program!" << "\n";

        cout << "Please enter the name of a business: ";
        getline(cin, businessName);
        businessList.push_back(businessName);
        sort(businessList.begin(), businessList.end());
        cout << "\nYour business(es):\n" << "\n";

        for (int i = 0; i < businessList.size(); i++) {
            cout << businessList[i] << "\n";
        }

        cout << "\nAnother business? ";
        getline(cin, userAnswer);

        if (userAnswer == "y" || userAnswer == "Y" || 
            userAnswer == "yes" || userAnswer == "Yes") {
        } else {
            keepGoing = false; 

        }

    }

    cout << "Thank you for using the Business Sorting Program!" << "\n";
}

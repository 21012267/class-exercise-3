
#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string interest;


    cout << "Enter your age: ";
    cin >> age;


    string partnerAgeRange;
    if (age < 18) {
        partnerAgeRange = "around your age";
    } else if (age >= 18 && age < 30) {
        partnerAgeRange = "between 18 and 30";
    } else {
        partnerAgeRange = "older than 30";
    }


    cout << "Enter your interest (e.g., dacing, cooking, gaming): ";
    cin >> interest;


    string partnerInterest;
    if (interest == "dacing") {
        partnerInterest = "someone who enjoys dacing";
    } else if (interest == "cooking") {
        partnerInterest = "someone who loves cooking";
    } else if (interest == "gaming") {
        partnerInterest = "someone who likes gaming";
    } else {
        partnerInterest = "someone with similar interests";
    }

    cout << "\nBased on your age and interest, we advise finding someone " << partnerAgeRange
         << " who is " << partnerInterest << ".\n";

    return 0;
}

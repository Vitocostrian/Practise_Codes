#include <iostream>
using namespace std;

int main() { //Start Main

    //A code that calculates sum of an array
    int arrlength;
    cin >> arrlength;
    int arr[arrlength];
    
    //Getting numbers from the user, putting them in an array
    for(int i = 0; i < arrlength; i++){
        cin >> arr[i];
    }
    //Summing all numbers
    int sum = 0;
    for(int k = 0; k < arrlength; k++){
        sum += arr[k];
    }
    //Display them
    cout << "Your values were: ";
    for(int x = 0; x < arrlength; x++){
        cout << arr[x] << " ";
    }
    cout << "\nSum of Array is: " << sum << endl; // Sum
    
    return 0;
}// End main

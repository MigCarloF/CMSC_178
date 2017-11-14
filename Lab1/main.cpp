#include <iostream>
#include "PureTone.h"
#include "TuningSequence.h"

using namespace std;

void generatePureTone();

void generateTuningSequence();

int main() {
    /**
     * input and display message
     */
    cout << "1. Generate a Pure Tone" << endl;
    cout << "2. Generate Tuning Sequence" << endl;
    cout << "Choose a feature:" << endl;
    int input = 0;
    cin >> input;

    if (input == 1) {
        generatePureTone();

    } else if (input == 2) {
        generateTuningSequence();
    } else {
        cout << "Invalid Input" << endl;
    }
    cout << "Program end" << endl;
    return 0;
}
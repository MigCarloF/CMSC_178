#include <iostream>
#include "PureTone.h"
#include "JustIntonation.h"
#include "TTET.h"
#include <string>
#include <sstream>

using namespace std;

AudioFile<double> generatePureTone(double, string, int);


int main() {
    /**
     * input and display message
     */
    cout << "1. Generate a Pure Tone" << endl;
    cout << "2. Generate Tuning Sequence" << endl;
    cout << "Choose a feature:" << endl;
    int input = 0;
    cin >> input;

    double initFreq;
    string fileName;
    int duration;

    if (input == 1) {
        cout << "Frequency of the pure tone in Hertz: " << endl;
        cin >> initFreq;
        if (initFreq > 0) {
            stringstream ss;
            ss << "sine-" << initFreq << ".wav";
            fileName = ss.str();

            duration = 10;
            /**
             * generation of pure tone here
             */
            AudioFile<double> af = generatePureTone(initFreq, fileName, duration);
            if (af.save(fileName)) {
                cout << "Pure tone generated and saved to " << "”" << fileName << "”" << endl;
            } else {
                cout << "Error generating file" << endl;
            }
        } else {
            cout << "Invalid Input" << endl;
        }
    } else if (input == 2) {
        int choice2;
        cout << "1. Just Intonation" << endl;
        cout << "2. 12-Tone Equal Temperament" << endl;
        cout << "Choose a tuning system" << endl;
        cin >> choice2;
        if (choice2 == 1) {
            cout << "Frequency of“Do”in Herz: " << endl;
            cin >> initFreq;
            if (initFreq > 20) { // error checking
                /**
                 * generation of Just intonation here
                 */
                generateJustIntonation(initFreq);
            } else {
                cout << "invalid input" << endl;
            }
        } else if (choice2 == 2) {
            cout << "Frequency of“Do”in Herz: " << endl;
            cin >> initFreq;
            if (initFreq > 20) { // error checking
                /**
                 * generation of TTET here
                 */
                generateTTET(initFreq);
            } else {
                cout << "invalid input" << endl;
            }
        } else {
            cout << "Invalid input" << endl;
        }
    } else {
        cout << "Invalid Input" << endl;
    }
    cout << "Program end" << endl;
    return 0;
}
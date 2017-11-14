#include<iostream>
#include "AudioFile.h"

using namespace std;

void generatePureTone() {
    cout << "GENERATING PURE TONE PEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEP!" << endl;
    AudioFile<double> af;
    AudioFile<double> *af2 = new AudioFile<double>();
    af.save("Kool.wav");
    cout << "GENERATED" << endl;

}
#include <iostream>
#include <algorithm>
#include <string>
#include "AudioFile.h"

#include <math.h>
#include <sstream>

using namespace std;

AudioFile<double> generatePureTone(double freq, string fileName, int time) {

    AudioFile<double> audioFile;
    double sampleRateAsDouble = (double) audioFile.getSampleRate();

    for (int i = 0; i < audioFile.getNumSamplesPerChannel(); i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * freq);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }


    audioFile.printSummary();
    cout << "GENERATED" << endl;
    return audioFile;
}
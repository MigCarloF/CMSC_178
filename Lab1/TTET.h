#include <iostream>
#include <math.h>
#include <sstream>
#include "AudioFile.h"

using namespace std;
int const time  = 25;
void generateTTET(double freq) {
    AudioFile<double> audioFile;
    double sampleRateAsDouble = (double) audioFile.getSampleRate();
    double unison = freq;
    double tet2 = unison * pow(1.059463, 1);
    double tet3 = unison * pow(1.059463, 2);
    double tet4 = unison * pow(1.059463, 3);
    double tet5 = unison * pow(1.059463, 4);
    double tet6 = unison * pow(1.059463, 5);
    double tet7 = unison * pow(1.059463, 6);
    double tet8 = unison * pow(1.059463, 7);
    double tet9 = unison * pow(1.059463, 8);
    double tet10 = unison * pow(1.059463, 9);
    double tet11 = unison * pow(1.059463, 10);
    double tet12 = unison * pow(1.059463, 11);
    double octave = unison * pow(1.059463, 12);
    audioFile.setAudioBufferSize(audioFile.getNumChannels(), sampleRateAsDouble * time);

    int samplesPerSecond = 44100;

    int start = 0;
    int end = start + samplesPerSecond;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * unison);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet2);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet3);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet4);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet5);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet6);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet7);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet8);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet9);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet10);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet11);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * tet12);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end += 44100;
    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * octave);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }
    stringstream ss;
    ss << "12-TET-" << freq << ".wav";
    string fileName = ss.str();

    audioFile.printSummary();
    if (audioFile.save(fileName)) {
        cout << "Tuning sequence saved to “" << fileName << "”" << endl;
    } else {
        cout << "generation failed" << endl;
    }
}
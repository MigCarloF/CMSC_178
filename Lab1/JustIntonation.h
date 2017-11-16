#include <iostream>
#include <math.h>

using namespace std;

void generateJustIntonation(double freq) {

    int time = 15;
    double fDo = freq;
    double fRe = round(freq * 9 / 8);
    double fMi = round(freq * 5 / 4);
    double fFa = round(freq * 4 / 3);
    double fSol = round(freq * 3 / 2);
    double fLa = round(freq * 5 / 3);
    double fTi = round(freq * 15 / 8);
    double fHiDo = round(freq * 2);

    AudioFile<double> audioFile;
    double sampleRateAsDouble = (double) audioFile.getSampleRate();

    audioFile.setAudioBufferSize(audioFile.getNumChannels(), sampleRateAsDouble * time);
    int start = 0, end = start + 44100;


    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * fDo);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * fRe);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * fMi);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * fFa);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * fSol);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * fLa);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * fTi);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }

    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * 0);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }
    start = end;
    end = start + 44100;

    for (int i = start; i < end; i++) {
        double sample = sinf(2. * M_PI * ((double) i / sampleRateAsDouble) * fHiDo);

        for (int k = 0; k < audioFile.getNumChannels(); k++)
            audioFile.samples[k][i] = sample * 0.5;
    }
    audioFile.printSummary();
    stringstream ss;
    ss << "just-intonation-" << freq << ".wav";
    string fileName = ss.str();

    if (audioFile.save(fileName)) {
        cout << "Tuning sequence saved to “" << fileName << "”" << endl;
    } else {
        cout << "generation failed" << endl;
    }
    cout << "GENERATED" << endl;
}


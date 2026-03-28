#include <iostream>
#include <string>
using namespace std;
int main() {
    int numChords;
    cout << "Enter the number of chords: ";
    cin >> numChords;
    string chords[numChords];
    cout << "Enter " << numChords << " chords, one per line:" << endl;
    for (int i = 0; i < numChords; i++) {
        cin >> chords[i];
    }
    for (int i = 0; i < numChords; i++) {
        string current = chords[i];
        int lastIdx = 0;
        while (current[lastIdx] != '\0') {
            lastIdx++;
        }
        if (lastIdx > 0) {
            if (current[lastIdx - 1] != '7') {
                chords[i] = current + "7";
            }
        }
    }
    cout << "Jazzified chords: [";
    for (int i = 0; i < numChords; i++) {
        cout << chords[i];
        if (i < numChords - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
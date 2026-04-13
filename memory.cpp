#include <iostream>
#include <vector>
using namespace std;

void runMemory() {
    int pages, frames;
    cout << "Enter number of pages: ";
    cin >> pages;
    cout << "Enter number of frames: ";
    cin >> frames;

    vector<int> memory(frames, -1);
    int pageFaults = 0;

    for (int i = 0; i < pages; i++) {
        int page;
        cout << "Enter page: ";
        cin >> page;

        bool found = false;
        for (int j = 0; j < frames; j++) {
            if (memory[j] == page) {
                found = true;
                break;
            }
        }

        if (!found) {
            memory[i % frames] = page;
            pageFaults++;
        }
    }

    cout << "Page Faults: " << pageFaults << endl;
}

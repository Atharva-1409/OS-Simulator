#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Process {
    int id, burst;
};

bool cmp(Process a, Process b) {
    return a.burst < b.burst;
}

void runScheduler() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<Process> p(n);

    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cout << "Burst time for P" << i+1 << ": ";
        cin >> p[i].burst;
    }

    sort(p.begin(), p.end(), cmp);

    cout << "\nSJF Order:\n";
    for (auto &proc : p) {
        cout << "P" << proc.id << " ";
    }
}

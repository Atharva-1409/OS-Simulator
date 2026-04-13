#include <iostream>
#include <string>
#include "scheduler.h"
#include "memory.h"
#include "filesystem.h"

using namespace std;

int main() {
    string command;
    
    cout << "Mini OS Simulator Started...\n";

    while (true) {
        cout << "\nOS> ";
        cin >> command;

        if (command == "exit") break;

        else if (command == "schedule") {
            runScheduler();
        }

        else if (command == "memory") {
            runMemory();
        }

        else if (command == "fs") {
            runFileSystem();
        }

        else {
            cout << "Unknown command\n";
        }
    }

    return 0;
}

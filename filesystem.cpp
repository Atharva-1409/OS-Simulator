#include <iostream>
#include <map>
using namespace std;

map<string, string> files;

void runFileSystem() {
    string cmd, name, content;

    cout << "Commands: create read write delete exit\n";

    while (true) {
        cout << "FS> ";
        cin >> cmd;

        if (cmd == "exit") break;

        else if (cmd == "create") {
            cin >> name;
            files[name] = "";
            cout << "File created\n";
        }

        else if (cmd == "write") {
            cin >> name;
            cout << "Enter content: ";
            cin.ignore();
            getline(cin, content);
            files[name] = content;
        }

        else if (cmd == "read") {
            cin >> name;
            cout << files[name] << endl;
        }

        else if (cmd == "delete") {
            cin >> name;
            files.erase(name);
        }
    }
}

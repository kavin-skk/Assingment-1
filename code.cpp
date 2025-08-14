#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Initialization
    string source = "customers-1000.csv";
    string target = "target.csv";

    ifstream src(source);

    // source file exist?
    if (!src) {
        cout << "Source file does not exist. Creating source file...\n";
        ofstream createSrc(source);
        if (!createSrc) {
            cout << "ERROR: Could not create source file.\n";
            return 1;
        }
        // write record
        createSrc << "id,name,email\n";
        createSrc << "1,John Doe,john@example.com\n";
        createSrc.close();
        cout << "Source file created with sample data.\n";

        // Read record
        src.open(source);
    }
}
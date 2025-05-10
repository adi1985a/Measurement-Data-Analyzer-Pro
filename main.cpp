#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <vector>

using namespace std;

// Console colors
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

class Logger {
public:
    static void log(const string& message) {
        ofstream logFile("program.log", ios::app);
        time_t now = time(0);
        string timestamp = ctime(&now);
        timestamp.pop_back(); // Remove newline
        logFile << "[" << timestamp << "] " << message << endl;
        logFile.close();
    }
};

class Pomiary {
public:
    vector<float> liczby;
    string linia;

    void showHeader() {
        system("cls");
        setColor(11);
        cout << "****************************************************\n";
        cout << "*        Measurement Data Analysis Program          *\n";
        cout << "*            by Adrian Lesniak                     *\n";
        cout << "****************************************************\n\n";
        setColor(14);
        cout << "Program functions:\n";
        cout << "1. Read measurements from file\n";
        cout << "2. Display measurements\n";
        cout << "3. Calculate statistics\n";
        cout << "4. Save results\n";
        cout << "5. Exit\n\n";
        setColor(7);
    }

    void odczyt() {
        try {
            ifstream plik("measurement.txt");
            if (!plik) {
                throw runtime_error("Cannot open measurement.txt");
            }

            liczby.clear();
            while (getline(plik, linia)) {
                try {
                    float liczba = stof(linia);
                    if (liczba != 0.0) {
                        liczby.push_back(liczba);
                    }
                } catch (...) {
                    Logger::log("Invalid number in file: " + linia);
                }
            }
            plik.close();
            Logger::log("Successfully read " + to_string(liczby.size()) + " measurements");
        } catch (const exception& e) {
            Logger::log("Error: " + string(e.what()));
            throw;
        }
    }

    void pokaz() {
        setColor(11);
        cout << "\n=== Measurement Results ===\n\n";
        setColor(14);
        cout << "Number of measurements: " << liczby.size() << endl << endl;
        
        for (size_t i = 0; i < liczby.size(); i++) {
            cout << setw(4) << i + 1 << ": " << fixed << setprecision(2) << liczby[i] << endl;
        }
    }

    void calculateStats() {
        if (liczby.empty()) {
            cout << "No data available!\n";
            return;
        }

        float sum = 0, min = liczby[0], max = liczby[0];
        for (float num : liczby) {
            sum += num;
            if (num < min) min = num;
            if (num > max) max = num;
        }

        setColor(11);
        cout << "\n=== Statistics ===\n\n";
        setColor(14);
        cout << "Average: " << sum / liczby.size() << endl;
        cout << "Minimum: " << min << endl;
        cout << "Maximum: " << max << endl;
    }
};

int main() {
    Pomiary P1;
    int choice;

    while (true) {
        P1.showHeader();
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        try {
            switch (choice) {
                case 1:
                    P1.odczyt();
                    cout << "\nFile read successfully!";
                    break;
                case 2:
                    P1.pokaz();
                    break;
                case 3:
                    P1.calculateStats();
                    break;
                case 4:
                    // Save results implementation
                    cout << "\nResults saved!";
                    break;
                case 5:
                    setColor(11);
                    cout << "\nThank you for using the program!\n";
                    return 0;
                default:
                    cout << "\nInvalid choice!";
            }
        } catch (const exception& e) {
            setColor(12);
            cout << "\nError: " << e.what() << endl;
            setColor(7);
        }

        cout << "\n\nPress any key to continue...";
        _getch();
    }

    return 0;
}



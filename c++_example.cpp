#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <map>

using namespace std;

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Class representing a student
class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) : name(n), age(a) {}
    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
};

int main() {
    // Variables
    int a = 5;
    double b = 2.5;

    // Expressions
    double c = a + b * 3;

    // Conditionals
    if (c > 10) {
        cout << "c is greater than 10" << endl;
    } else {
        cout << "c is less than or equal to 10" << endl;
    }

    // Loops
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // Functions
    int num = 6;
    int fact = factorial(num);
    cout << "Factorial of " << num << " is " << fact << endl;

    // Classes
    Student student("John Doe", 20);
    cout << "Name: " << student.getName() << ", Age: " << student.getAge() << endl;

    // Data structure from STL - Vector
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    cout << "Vector: ";
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Stretch Challenge: File I/O
    ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        outputFile << "Hello, world!" << endl;
        outputFile.close();
    } else {
        cout << "Failed to open the file." << endl;
    }

    ifstream inputFile("input.txt");
    if (inputFile.is_open()) {
        string line;
        while (getline(inputFile, line)) {
            cout << "Read from file: " << line << endl;
        }
        inputFile.close();
    } else {
        cout << "Failed to open the file." << endl;
    }

    return 0;
}

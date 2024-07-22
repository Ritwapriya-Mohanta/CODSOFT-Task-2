#include <iostream>
#include <iomanip> // For std::fixed and std::setprecision

void display_menu() {
    std::cout << "\n-----------------------" << std::endl;
    std::cout << "     Calculator        " << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "Operations:" << std::endl;
    std::cout << "1. Addition (+)" << std::endl;
    std::cout << "2. Subtraction (-)" << std::endl;
    std::cout << "3. Multiplication (*)" << std::endl;
    std::cout << "4. Division (/)" << std::endl;
    std::cout << "-----------------------" << std::endl;
    std::cout << "Enter your choice (1-4): ";
}

void print_header() {
    std::cout << R"(
 _____                 _             
/  __|               ()            
\ `--.  ___ _ ____   ___  ___  _ __ 
 `--. \/ _ \ '\ \ / / |/ _ \| '|
/\/ /  _/ |   \ V /| | () | |   
\/ \||    \/ ||\/||   
                                    
)" << std::endl;
}

int main() {
    double num1, num2;
    int choice;
    double result;

    print_header();

    std::cout << "Welcome to your personal enhanced SERVIOR calculator program!" << std::endl;
    std::cout << "Please enter the first number: ";
    std::cin >> num1;
    std::cout << "Please enter the second number: ";
    std::cin >> num2;

    display_menu();
    std::cin >> choice;

    switch (choice) {
        case 1:
            result = num1 + num2;
            std::cout << "\n-----------------------" << std::endl;
            std::cout << "Result: " << num1 << " + " << num2 << " = " << result << std::endl;
            std::cout << "-----------------------" << std::endl;
            break;
        case 2:
            result = num1 - num2;
            std::cout << "\n-----------------------" << std::endl;
            std::cout << "Result: " << num1 << " - " << num2 << " = " << result << std::endl;
            std::cout << "-----------------------" << std::endl;
            break;
        case 3:
            result = num1 * num2;
            std::cout << "\n-----------------------" << std::endl;
            std::cout << "Result: " << num1 << " * " << num2 << " = " << result << std::endl;
            std::cout << "-----------------------" << std::endl;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << "\n-----------------------" << std::endl;
                std::cout << std::fixed << std::setprecision(2); // Set precision for floating-point division result
                std::cout << "Result: " << num1 << " / " << num2 << " = " << result << std::endl;
                std::cout << "-----------------------" << std::endl;
            } else {
                std::cout << "\n-----------------------" << std::endl;
                std::cout << "Error: Division by zero is not allowed." << std::endl;
                std::cout << "-----------------------" << std::endl;
            }
            break;
        default:
            std::cout << "\n-----------------------" << std::endl;
            std::cout << "Invalid choice. Please select a valid operation." << std::endl;
            std::cout << "-----------------------" << std::endl;
            break;
    }

    return 0;
}

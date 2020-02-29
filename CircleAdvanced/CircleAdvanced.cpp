// CircleAdvanced.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Advanced Circle Calculation V1.0 By Wisly\n";
    double radius, diameter, sides = 0;
    float pi = 3.14f;
    double two = 2;
    double fractionTwo = 0.75;
    float fraction = 0.33333333333f;
    double height,length;
    double pedestalArea;
    std::string feedback;
    int choice = 0;
    std::cout << "Choose What To Calculated: \n";
    std::cout << "1.Cylinder\n";
    std::cout << "2.Circle\n";
    std::cout << "3.Cone\n";
    std::cout << "4.Sphere\n";
    std::string question = "What Number You Want To Choose? ";
    std::cout << question;
    std::cin >> choice;
    int secondChoice = 0;
    int thirdChoice = 0;
    int fourthChoice = 0;
    int fifthChoice = 0;
    //Logic
    if (choice == 1) {
        std::cout << "What Do You Want To Calculated: \n";
        std::cout << "1.Area\n";
        std::cout << "2.Volume\n";
        std::cout << "3.Periphery\n";
        std::cout << "What Number You Want To Choose? ";
        std::cin >> secondChoice;
        //logic
        if (secondChoice == 1) {
            std::cout << "Enter Radius Value : ";
            std::cin >> radius;
            std::cout << "Enter The Height Value : ";
            std::cin >> height;
            std::cout << "Result: ";
            std::cout << two* pi * radius * height;
            std::cout << "\nEnter Your Feedback: ";
            std::cin >> feedback;
        }
        if (secondChoice == 2) {
            std::cout << "Enter Diameter Value : ";
            std::cin >> diameter;
            std::cout << "Enter The Height Value : ";
            std::cin >> height;
            std::cout << "Result: ";
            std::cout << pi * diameter * diameter * height;
            std::cout << "\nEnter Your Feedback: ";
            std::cin >> feedback;
        }
        if (secondChoice == 3) {
            std::cout << "Enter Length Value : ";
            std::cin >> length;
            std::cout << "Enter The Height Value : ";
            std::cin >> height;
            std::cout << "Result: ";
            std::cout << two * length * height;
            std::cout << "\nEnter Your Feedback: ";
            std::cin >> feedback;
        }
    }
    if (choice == 2) {
        std::cout << "What Do You Want To Calculated: \n";
        std::cout << "1.Area\n";
        std::cout << "2.Periphery\n";
        std::cout << "What Number You Want To Choose? ";
        std::cin >> thirdChoice;
        //Logic
        if (thirdChoice == 1) {
            std::cout << "Enter The Value Of The Radius: ";
            std::cin >> radius;
            std::cout << "Result: "; std::cout << pi * radius * radius;
            std::cout << "\nEnter Your Feedback: ";
            std::cin >> feedback;
        }
        if (thirdChoice == 2) {
            std::cout << "Enter The Radius Value: ";
            std::cin >> radius;
            std::cout << "Result: "; std::cout << two * pi * radius;
            std::cout << "\nEnter Your Feedback: ";
            std::cin >> feedback;
        }
    }
    if (choice == 3) {
        std::cout << "What Do You Want To Calculated: \n";
        std::cout << "1.Pedestal Area\n";
        std::cout << "2.Volume\n";
        std::cout << "3.Area Periphery\n";
        std::cout << "What Number You Want To Choose? ";
        std::cin >> fourthChoice;
        //Logic
        if (fourthChoice == 1) {
            std::cout << "Enter The Value Of Radius: ";
            std::cin >> radius;
            std::cout << "Enter The Side Value: ";
            std::cout << sides;
            std::cout << "Result: "; std::cout << pi * radius * radius * sides;
            std::cout << "\nEnter Your Feedback: ";
            std::cin >> feedback;
        }
        if (fourthChoice == 2) {
            std::cout << "Enter The Value Of The Area Of The Pedestal: ";
            std::cin >> pedestalArea;
            std::cout << "Enter The Value Of The Height: ";
            std::cin >> height;
            std::cout << "Resul: "; std::cout << fraction * pedestalArea * height;
            std::cout << "\nEnter Your Feedback: ";
            std::cin >> feedback;
        }
        if (fourthChoice == 3) {
            std::cout << "Enter The Value Of Radius: ";
            std::cin >> radius;
            std::cout << "Result: "; std::cout << two * pi * radius;
            std::cout << "\nEnter Your Feedback: ";
            std::cin >> feedback;
        }
    }
    if (choice == 4) {
        std::cout << "What Do You Want To Calculated: \n";
        std::cout << "1.Area\n";
        std::cout << "2.Volume\n";
        std::cout << "What Number You Want To Choose? ";
        std::cin >> fifthChoice;
        //Logic
        if (fifthChoice == 1) {
            std::cout << "Enter The Value Of The Radius: ";
            std::cin >> radius;
            std::cout << "Result: "; std::cout << pi * 4 * radius;
        }
        if (fifthChoice == 2) {
            std::cout << "Enter The Radius Value : ";
            std::cin >> radius;
            std::cout << "Result: "; std::cout << fractionTwo * pi* radius* radius* radius;
        }
    }
}

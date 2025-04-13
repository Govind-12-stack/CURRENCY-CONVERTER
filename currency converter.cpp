#include <iostream>
#include <iomanip>
using namespace std;

// Function to display currency options
void showMenu() {
    cout << "\nCurrency Converter\n";
    cout << "1. USD to INR\n";
    cout << "2. INR to USD\n";
    cout << "3. USD to EUR\n";
    cout << "4. EUR to USD\n";
    cout << "5. INR to EUR\n";
    cout << "6. EUR to INR\n";
    cout << "7. Exit\n";
    cout << "Choose an option (1-7): ";
}

int main() {
    int choice;
    double amount, converted;

    // Sample exchange rates (you can update them as needed)
    const double USD_TO_INR = 83.12;
    const double INR_TO_USD = 1 / USD_TO_INR;
    const double USD_TO_EUR = 0.92;
    const double EUR_TO_USD = 1 / USD_TO_EUR;
    const double INR_TO_EUR = 0.011;
    const double EUR_TO_INR = 1 / INR_TO_EUR;

    do {
        showMenu();
        cin >> choice;

        if (choice == 7) {
            cout << "Exiting the Currency Converter. Goodbye!\n";
            break;
        }

        cout << "Enter amount: ";
        cin >> amount;

        cout << fixed << setprecision(2); // Format output

        switch (choice) {
            case 1:
                converted = amount * USD_TO_INR;
                cout << "$" << amount << " = ₹" << converted << endl;
                break;
            case 2:
                converted = amount * INR_TO_USD;
                cout << "₹" << amount << " = $" << converted << endl;
                break;
            case 3:
                converted = amount * USD_TO_EUR;
                cout << "$" << amount << " = €" << converted << endl;
                break;
            case 4:
                converted = amount * EUR_TO_USD;
                cout << "€" << amount << " = $" << converted << endl;
                break;
            case 5:
                converted = amount * INR_TO_EUR;
                cout << "₹" << amount << " = €" << converted << endl;
                break;
            case 6:
                converted = amount * EUR_TO_INR;
                cout << "€" << amount << " = ₹" << converted << endl;
                break;
            default:
                cout << "Invalid option. Try again.\n";
        }
    } while (choice != 7);

    return 0;
}

# include <iostream>

bool isValidCreditCardNumber(const std::string& cardNumber) {
    int sum = 0;
    bool alternate = false;

    for (int i = cardNumber.length() - 1; i >= 0; --i) {
        char c = cardNumber[i];
        if (!isdigit(c)) {
            return false; // Invalid character found
        }

        int digit = c - '0';
        if (alternate) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        alternate = !alternate;
    }

    return (sum % 10 == 0);
}

int main() {
    std::string cardNumber;

    std::cout << "Enter a credit card number: ";
    std::cin >> cardNumber;

    if (isValidCreditCardNumber(cardNumber)) {
        std::cout << "The credit card number is valid." << std::endl;
    } else {
        std::cout << "The credit card number is invalid." << std::endl;
    }

    return 0;
}
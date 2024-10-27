/*
 This is a shop application
 By Ray, a beginner C++ Developer!
 Please feel free to fix any bugs you find
 Or even improve it!

 If you want your improvement to be implemented
 Feel free to let me know through my email:
 raymurimi13@gmail.com

 IGNORE THIS:
  Cxd = rD4eaX32w1
*/

#include <iostream>

double balance = 0.00;

void Buy();

void Sell();

void checkBalance() {
    std::cout << "\nYour balance is: " << balance << "\n" << std::endl;
}

int main()
{
    int choice;

    do {

        std::cout << "***************************************************\n";
        std::cout << "            RayProductions Market \n";
        std::cout << " You are a customer and a consumer at the same time\n";
        std::cout << "           Choose one of the choices below:\n";
        std::cout << "***************************************************\n";
        std::cout << "                    1. Buy\n";
        std::cout << "                    2. Sell\n";
        std::cout << "                    3. Check Balance\n";
        std::cout << "                    4. Exit\n";
        std::cout << "***************************************************\n";

        std::cin >> choice;

        switch (choice)
        {
        case 1:
            Buy();
            break;
        case 2:
            Sell();
            break;
        case 3:
            checkBalance();
            break;
        default:
            std::cout << "Invalid option!\n" << std::endl;
            break;
        }
    } while (choice != 4);

}

void Buy()
{
    int choice;

    std::cout << "***** Spend Wisely *****\n";
    std::cout << "Products in the market: \n";
    std::cout << "1. Tomatoes (5.5$)\n";
    std::cout << "2. Onions (2$)\n";
    std::cout << "3. Carrots (6$)\n";
    std::cout << "4. Laptop (15,000$)\n";
    std::cout << "5. iPhone (20,000$)\n";
    std::cout << "6. Book (99.99$)\n";

    std::cin >> choice;

    double newbal1;

    switch (choice)
    {
    case 1:
        newbal1 = balance - 5.5;

        if (newbal1 < 0){
            std::cout << "Insufficient funds! I suggest you sell something.\n";
            break;
        } else {
            balance = newbal1;
            std::cout << "You just purchased this product!" << std::endl;
            checkBalance();
            break;
        }

    case 2:
        newbal1 = balance - 2;

        if (newbal1 < 0){
            std::cout << "Insufficient funds! I suggest you sell something.\n";
            break;
        } else {
            balance = newbal1;
            std::cout << "You just purchased this product!" << std::endl;
            checkBalance();
            break;
        }

    case 3:
        newbal1 = balance - 6;

        if (newbal1 < 0){
            std::cout << "Insufficient funds! I suggest you sell something.\n";
            break;
        } else {
            balance = newbal1;
            std::cout << "You just purchased this product!" << std::endl;
            checkBalance();
            break;
        }

    case 4:
        newbal1 = balance - 15000;

        if (newbal1 < 0){
            std::cout << "Insufficient funds! I suggest you sell something.\n";
            break;
        } else {
            balance = newbal1;
            std::cout << "You just purchased this product!" << std::endl;
            checkBalance();
            break;
        }

    case 5:
        newbal1 = balance - 20000;

        if (newbal1 < 0){
            std::cout << "Insufficient funds! I suggest you sell something.\n";
            break;
        } else {
            balance = newbal1;
            std::cout << "You just purchased this product!" << std::endl;
            checkBalance();
            break;
        }
    
    case 6: 
        newbal1 = balance - 99.99;

        if (newbal1 < 0){
            std::cout << "Insufficient funds! I suggest you sell something.\n";
            break;
        } else {
            balance = newbal1;
            std::cout << "You just purchased this product!" << std::endl;
            checkBalance();
            break;
        }
    
    default:
        std::cout << "Invalid Option!\n";
        break;
    }

}

void Sell()
{
    int choice;

    std::cout << "***** Inventory *****\n";
    std::cout << "Products to sell: \n";
    std::cout << "1. Tomatoes (5.5$)\n";
    std::cout << "2. Onions (2$)\n";
    std::cout << "3. Carrots (6$)\n";
    std::cout << "4. Laptop (15,000$)\n";
    std::cout << "5. iPhone (20,000$)\n";
    std::cout << "6. Book (99.99$)\n"; 

    std::cin >> choice;

    double newbal;

    switch (choice)
    {
        case 1:
            newbal = balance + 5.5;
            balance = balance + newbal;
            std::cout << "A customer just purchased this product!" << std::endl;
            checkBalance();
            break;

        case 2:
            newbal = balance + 2;
            balance = balance + newbal;
            std::cout << "A customer just purchased this product!" << std::endl;
            checkBalance();
            break;

        case 3:
            newbal = balance + 6;
            balance = balance + newbal;
            std::cout << "A customer just purchased this product!" << std::endl;
            checkBalance();
            break;

        case 4:
            newbal = balance + 15000;
            balance = balance + newbal;
            std::cout << "A customer just purchased this product!" << std::endl;
            checkBalance();
            break;

        case 5:
            newbal = balance + 20000;
            balance = balance + newbal;
            std::cout << "A customer just purchased this product!" << std::endl;
            checkBalance();
            break;
        
        case 6: 
            newbal = balance + 99.99;
            balance = balance + newbal;
            std::cout << "A customer just purchased this product!" << std::endl;
            checkBalance();
            break;
        
        default:
            std::cout << "Invalid Option!\n";
            break;
    }
}


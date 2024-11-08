#include <stdio.h>

#define NUM_ACCOUNTS 50
#define BASE_ACCOUNT_NUM 100
#define MIN_DEPOSIT 100
#define FILENAME "account.dat"


int getIndex(int accountNumber);
char userInput();
void openAccount(double account[], int *openAccounts);
void depositMoney();
void withdrawMoney();
void checkBalance();
void addIntereset();
void closeAccount();

int main(){
    //TODO: Get a user input for requested function
    char choice = NULL;

    //TODO: Write a switch case function to call the requested function

    do{
        userInput();
        switch (choice)
        {
        case('o' || 'O'):
            openAccount();
            userInput();
            break;
        
        default:
            printf("Invalid Input...");
            break;
        }
    }while(!(choice == 'E') || !(choice == 'e'));
}

int getIndex(int accountNumber){
    if(accountNumber<BASE_ACCOUNT_NUM || accountNumber >= BASE_ACCOUNT_NUM + NUM_ACCOUNTS){
        printf("Invalid account number\n.");
        return -1;
    }
    return accountNumber - BASE_ACCOUNT_NUM;
}
//TODO: Save Accounts to File

//TODO: Load the accounts from the file

char userInput(){
    char choice = NULL;
    printf("Enter your choice: ");
    scanf("%c", &choice);
    return choice;
}

//TODO: Create Open account function
void openAccount(double accounts[], int *openAccounts){
    int accountNumber, index;
    double initialDeposit;

    if(*openAccount >= NUM_ACCOUNTS){
        printf("Cannot open more than 50 accounts.\n");
        return;
    }
    printf("Enter initial deposit (minimum $100): ");
    scanf("%lf", &initialDeposit);

    if(initialDeposit < MIN_DEPOSIT){
        printf("Initial deposit should be at least $100.\n");
        return;
    }
    for(index = 0; index < NUM_ACCOUNTS; index++){
        if(accounts[index] == -1){
            accounts[index] = initialDeposit;
            accountNumber = BASE_ACCOUNT_NUM + index;
            printf("Account %d opened with a balance pf $%.2f\n", accountNumber, initialDeposit);
            return;

        }
    }

}
//TODO: Create balance inquiry function

//TODO: Create Deposit function

//TODO: Create Withdrawal function

//TODO: Create Close Account function


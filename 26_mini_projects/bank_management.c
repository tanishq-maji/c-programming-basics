#include <stdio.h>
#include <string.h>

#define MAX_ACCOUNTS 100

struct Account {
    int accountNo;
    char name[50];
    float balance;
};

struct Account accounts[MAX_ACCOUNTS];
int count = 0;

void createAccount() {
    if (count >= MAX_ACCOUNTS) {
        printf("Account limit reached.\n");
        return;
    }

    printf("\nEnter Account Number: ");
    scanf("%d", &accounts[count].accountNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", accounts[count].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &accounts[count].balance);

    count++;

    printf("Account created successfully.\n");
}

int findAccount(int accountNo) {
    for (int i = 0; i < count; i++) {
        if (accounts[i].accountNo == accountNo) {
            return i;
        }
    }

    return -1;
}

void depositMoney() {
    int accountNo;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &accountNo);

    int index = findAccount(accountNo);

    if (index == -1) {
        printf("Account not found.\n");
        return;
    }

    printf("Enter Deposit Amount: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return;
    }

    accounts[index].balance += amount;

    printf("Deposit successful.\n");
    printf("New Balance: %.2f\n", accounts[index].balance);
}

void withdrawMoney() {
    int accountNo;
    float amount;

    printf("\nEnter Account Number: ");
    scanf("%d", &accountNo);

    int index = findAccount(accountNo);

    if (index == -1) {
        printf("Account not found.\n");
        return;
    }

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Invalid amount.\n");
        return;
    }

    if (amount > accounts[index].balance) {
        printf("Insufficient balance.\n");
        return;
    }

    accounts[index].balance -= amount;

    printf("Withdrawal successful.\n");
    printf("Remaining Balance: %.2f\n", accounts[index].balance);
}

void checkBalance() {
    int accountNo;

    printf("\nEnter Account Number: ");
    scanf("%d", &accountNo);

    int index = findAccount(accountNo);

    if (index == -1) {
        printf("Account not found.\n");
        return;
    }

    printf("Account Holder: %s\n", accounts[index].name);
    printf("Balance: %.2f\n", accounts[index].balance);
}

void displayAccounts() {
    if (count == 0) {
        printf("\nNo accounts available.\n");
        return;
    }

    printf("\n--- All Accounts ---\n");

    for (int i = 0; i < count; i++) {
        printf("Account No: %d | Name: %s | Balance: %.2f\n",
               accounts[i].accountNo,
               accounts[i].name,
               accounts[i].balance);
    }
}

int main() {
    int choice;

    do {
        printf("\n===== BANK MANAGEMENT SYSTEM =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;

            case 2:
                depositMoney();
                break;

            case 3:
                withdrawMoney();
                break;

            case 4:
                checkBalance();
                break;

            case 5:
                displayAccounts();
                break;

            case 6:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 6);

    return 0;
}

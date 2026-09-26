#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Product products[MAX_PRODUCTS];
int count = 0;

void addProduct() {
    if (count >= MAX_PRODUCTS) {
        printf("Inventory limit reached.\n");
        return;
    }

    printf("\nEnter Product ID: ");
    scanf("%d", &products[count].id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", products[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &products[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &products[count].price);

    count++;

    printf("Product added successfully.\n");
}

void displayProducts() {
    if (count == 0) {
        printf("\nInventory is empty.\n");
        return;
    }

    printf("\n--- INVENTORY ---\n");

    for (int i = 0; i < count; i++) {
        printf("\nID       : %d\n", products[i].id);
        printf("Name     : %s\n", products[i].name);
        printf("Quantity : %d\n", products[i].quantity);
        printf("Price    : %.2f\n", products[i].price);
    }
}

int findProduct(int id) {
    for (int i = 0; i < count; i++) {
        if (products[i].id == id) {
            return i;
        }
    }

    return -1;
}

void updateStock() {
    int id;
    int quantity;

    printf("\nEnter Product ID: ");
    scanf("%d", &id);

    int index = findProduct(id);

    if (index == -1) {
        printf("Product not found.\n");
        return;
    }

    printf("Enter New Quantity: ");
    scanf("%d", &quantity);

    if (quantity < 0) {
        printf("Invalid quantity.\n");
        return;
    }

    products[index].quantity = quantity;

    printf("Stock updated successfully.\n");
}

void searchProduct() {
    int id;

    printf("\nEnter Product ID to search: ");
    scanf("%d", &id);

    int index = findProduct(id);

    if (index == -1) {
        printf("Product not found.\n");
        return;
    }

    printf("\nProduct Found!\n");
    printf("ID       : %d\n", products[index].id);
    printf("Name     : %s\n", products[index].name);
    printf("Quantity : %d\n", products[index].quantity);
    printf("Price    : %.2f\n", products[index].price);
}

int main() {
    int choice;

    do {
        printf("\n===== INVENTORY MANAGEMENT =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Stock\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct();
                break;

            case 2:
                displayProducts();
                break;

            case 3:
                searchProduct();
                break;

            case 4:
                updateStock();
                break;

            case 5:
                printf("Exiting Inventory System...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 5);

    return 0;
}

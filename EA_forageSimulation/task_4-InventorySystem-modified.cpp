#include <string>
#include<iostream>
#include <utility>
#include <vector>

class Item {
private:
    std::string name;
    int quantity;
    float price;

public:
    Item(
        std::string name,
        int quantity,
        float price
    ) :
        name{ std::move(name) },
        quantity{ quantity },
        price{ price } {

    }

    std::string get_name() const {
        return name;
    }

    int get_quantity() const {
        return quantity;
    }

    void set_quantity(int new_quantity) {
        quantity = new_quantity;
    }

    float get_price() const {
        return price;
    }

    bool is_match(const std::string& other) {
        return name == other;
    }
};

class Inventory {
private:
    //Item* items[20];
    std::vector<Item*> items;
    float total_money;
    int item_count;

    static void display_data(Item& item) {
        std::cout << "\nItem name: " << item.get_name();
        std::cout << "\nQuantity: " << item.get_quantity();
        std::cout << "\nPrice: " << item.get_price();
    }

    template<typename T>
    void get_user_input(std::string_view prompt, T& inputValue) {
        std::cin.ignore();
        std::cout << "Enter " << prompt << ": ";
        std::cin >> inputValue;
    }

public:
    Inventory() :
        items{},
        total_money{ 0 }
    {
    }

    void add_item() {
        std::string name{};
        int quantity{};
        float price;

        get_user_input("item name", name);
        get_user_input("quantity", quantity);
        get_user_input("price", price);

        items.push_back(new Item(name, quantity, price));
    }

    void sell_item() {
        std::string item_to_check;
        get_user_input("item name", item_to_check);


        for (int i = 0; i < items.size(); i++) {
            if (items[i]->is_match(item_to_check)) {
                remove_item(i);
                return;
            }
        }
        std::cout << "\nThis item is not in your Inventory";
    }

    void remove_item(int item_index) {
        int input_quantity;
        Item* item = items[item_index];
        get_user_input("number of items to sell", input_quantity);

        int quantity = item->get_quantity();
        if (input_quantity <= quantity) {
            float price = item->get_price();
            float money_earned = price * input_quantity;
            int new_quantity{ quantity - input_quantity };

            if (new_quantity) {
                item->set_quantity(quantity - input_quantity);
            }
            else {
                std::erase(items, items.at(item_index));
            }

            std::cout << "\nItems sold";
            std::cout << "\nMoney received: " << money_earned;
            total_money += money_earned;
        }
        else {
            std::cout << "\nCannot sell more items than you have.";
        }
    }

    void list_items() {
        if (items.size() == 0) {
            std::cout << "\nInventory empty.";
            return;
        }

        for (int i = 0; i < items.size(); i++) {
            display_data(*items[i]);
            std::cout << "\n";
        }
    }
};

// no need to modify anything here
int main() {
    int choice;
    Inventory inventory_system;
    std::cout << "Welcome to the inventory!";

    while (1) {
        std::cout << "\n\nMENU\n"
            << "1. Add new item\n"
            << "2. Sell item\n"
            << "3. List items\n"
            << "4. Exit\n\n"
            << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            inventory_system.add_item();
            break;

        case 2:
            inventory_system.sell_item();
            break;

        case 3:
            inventory_system.list_items();
            break;

        case 4:
            exit(0);

        default:
            std::cout << "\nInvalid choice entered";
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
            break;
        }
    }
}

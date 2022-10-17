#include <iostream>
#include <array>
#include <cstddef>
#include <numeric>

enum Items
{
    healtPotions,
    torches,
    arrows,

    totalItems,
};

 int giveArray(const std::array<int, 3> a)
{
     int total{ 0 };
     for (int element : a)
         total += element;
     
     return total;
}
 int countItems(const std::array<Items, totalItems>& items)
 {
     return std::reduce(items.begin(), items.end());
 }
int main()
{
    std::array value{ 2, 5, 10 };

    std::array<Items, totalItems> items{};
    {
        items[healtPotions];
        items[torches];
        items[arrows];
    }
 
    std::cout << giveArray;
    std::cout << '\n';
    std::cout << countItems;

    return 0;
}

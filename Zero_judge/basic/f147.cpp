#include <iostream>
using namespace std;

int main()
{
    int n, tol = 0;
    while (cin >> n && n != 0)
    {
        if (n == 1)
        {
            int tmp = 0;
            int s[5] = {4, 8, 7, 6, 3};
            string t[5] = {"Medium Wac", "WChicken Nugget", "Geez Burger", "ButtMilk Crispy Chicken", "Plastic Toy"};
            cin >> tmp;
            cout << t[tmp - 1] << " " << s[tmp - 1];
            cout << "\n";
            tol += s[tmp - 1];
        }
        else
        {
            int tmp = 0;
            int s[4] = {2, 3, 5, 7};
            string t[4] = {"German Fries", "Durian Slices", "WcFurry", "Chocolate Sunday"};
            cin >> tmp;
            cout << t[tmp - 1] << " " << s[tmp - 1];
            cout << "\n";
            tol += s[tmp - 1];
        }
    }
    cout << "Total: " << tol;
}
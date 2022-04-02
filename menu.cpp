int main()
{
    cout << "Following is the Menu Card of Our Hotel :" << endl;
    cout << "1. Idli Sambar --------------------------------  80/-" << endl;
    cout << "2. Dosa ----------------------------------------- 90/-" << endl;
    cout << "3. Uttappa ------------------------------------- 85/-" << endl;
    cout << "4. Vada Sambar ------------------------------- 75/-" << endl;

    int choice;
    int number;

    cout << "Enter your dish number:  " << endl;
    cin >> choice;
    cout << "Enter the quantity : " << endl;
    cin >> number;
    int i = 80 * number;
    int v = 90 * number;
    int d = 85 * number;
    int u = 75 * number;

    switch (choice)
    {

    case 1:
        cout << "Your Bill is " << i << endl;

        break;
    case 2:
        cout << "You Bill is " << v << endl;
        break;
    case 3:
        cout << "your Bill is " << d << endl;
        break;
    case 4:
        cout << "Your bill is " << u << endl;
    case 5:
        cout << "Your Total bill is " << i + v << endl;
        break;
    case 6:
    default:
        cout << "Hello";
    }
}

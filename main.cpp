#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, begin, end, sum = 0;

    while (1){
        cout << "Enter begin and end: ";
        cin >> begin >> end;
        if (begin < end)
            break;
    }

    if (begin % 2 == 1)
        begin ++;
    i = begin;
    while (i <= end){
        sum += i;
        i += 2;
    }

    cout << "Total is " << sum << endl;
    return 0;
}

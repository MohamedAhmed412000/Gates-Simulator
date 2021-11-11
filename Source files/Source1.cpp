// sort() Example using arrays.
// By Zereo 04/22/13
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int Array[7] = {5, 3, 32, -1, 1, 104, 53};
    //Now we call the sort function
    sort(Array,Array+7);

    cout << "Sorted Array looks like this." << endl;
	for (int i = 0; i < 7; ++i)
        cout << Array[i] << " ";

	system("pause");
    return 0;
}
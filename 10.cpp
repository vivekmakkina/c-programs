#include <iostream>
using namespace std;

int main()
{
	int rows, columns, n = 5;
	cout <<"enter the number of rows,columns";
	cin >> rows,columns;

	// first for loop is used to
	// identify number of rows
	for (rows = 1; rows <= n; rows++) {

		// second for loop is used to identify number of
		// columns and here the values will be changed
		// according to the first for loop
		for (columns = 1; columns <= rows; columns++) {

			// printing number pattern based on the number
			// of rows
			cout << rows << " ";
		}
		// print the next line for each row
		cout << "\n";
	}
	return 0;
}

#include<iostream>
#include<list>
#include<ctime>
#include<iterator>
#include<vector>

using namespace std;

int main()
{
	srand(time(NULL));
	list<int> mylist;
	int n, k = 0;
	cout << "Enter size list" << endl;
	cin >> n;
	vector<int> vector(n);

	for (size_t i = 0; i < n; i++)
	{
		mylist.push_back(rand() % 40); //заполняем список 
	}

	cout << "First list:" << endl;
	copy(mylist.begin(), mylist.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	for (list<int>::iterator i = mylist.begin(); i != mylist.end(); i++)
	{
		vector[k] = *i; //перезаписываем список в вектор
		k++;
	}

	for (size_t i = n - 1; i >= 0; i--)
	{
		if (vector[i] < 15)
		{
			vector.erase(vector.begin() + i); // удаляем последний элемент который меньше 15
			break;
		}
	}

	mylist.clear(); // очищаем список

	for (size_t i = 0; i < n - 1; i++)
	{
		mylist.push_back(vector[i]); // перезаписываем новый список
	}

	cout << endl << "List after deletion: " << endl;

	copy(mylist.begin(), mylist.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	system("pause");
	return 0;
}
#include "employee.h"
#include "worker.h"
#include "manager.h"
#include <vector>

int main()
{
	vector<worker> workers;
	vector<manager> managers;
	worker* a = new worker;
	manager* b = new manager;
	unsigned int n, i;
	bool online = true;

	while (online) {
		cout << endl << "Main menu:" << endl << "1 - Add worker" << endl << "2 - Add manager" << endl << "3 - Display worker" << endl << "4 - Display manager"
		<< endl << "5 - Modify worker" << endl << "6 - Modify manager" << endl << "7 - Exit program" << endl << endl << "Enter your choice: ";
		
		cin >> n;
		switch (n) {
		case 1:
			if (workers.size() >= 5)  cout << "Cannot add more than 5 workers" << endl << endl;
			else {
				workers.push_back(*a);
				cout << "Worker has been added succsessfully!" << endl;
			}
			break;
		case 2:
			if (managers.size() >= 3)  cout << "Cannot add more than 3 managers" << endl << endl;
			else {
				managers.push_back(*b);
				cout << "Manager has been added succsessfully!" << endl;
			}
			break;
		case 3:
			if (workers.size() < 1) cout << "No workers there..." << endl << endl;
			else {
				cout << endl << "Which worker do you want to display?: " << endl;
				for (i = 0; i < workers.size(); i++) {
					cout << i + 1 << " " << workers[i].getName() << endl;
				}
				cout << "Enter number from list above: ";
				cin >> n;
				while (n > workers.size() || n < 1) {
					cout << endl << "wrong number! Try again: ";
					cin >> n;
				}
				workers[n - 1].displayWorker();
			}
			break;
		case 4:
			if (managers.size() < 1) cout << "No managers there..." << endl << endl;
			else {
				cout << endl << "Which manager do you want to display?: " << endl;
				for (i = 0; i < managers.size(); i++) {
					cout << i + 1 << " " << managers[i].getName() << endl;
				}
				cout << "Enter number from list above: ";
				cin >> n;
				while (n > managers.size() || n < 1) {
					cout << endl << "wrong number! Try again: ";
					cin >> n;
				}
				managers[n - 1].displayManager();
			}
			break;
		case 5:
			if (workers.size() < 1) cout << "No workers there..." << endl << endl;
			else {
				cout << endl << "Which worker do you want to modify?: " << endl;
				for (i = 0; i < workers.size(); i++) {
					cout << i + 1 << " " << workers[i].getName() << endl;
				}
				cout << "Enter number from list above: ";
				cin >> n;
				while (n > workers.size() || n < 1) {
					cout << endl << "wrong number! Try again: ";
					cin >> n;
				}
				workers[n - 1].displayWorker();
				workers[n - 1].modifyWorker();
			}
			break;
		case 6:
			if (managers.size() < 1) cout << "No managers there..." << endl << endl;
			else {
				cout << endl << "Which manager do you want to modify?: " << endl;
				for (i = 0; i < managers.size(); i++) {
					cout << i + 1 << " " << managers[i].getName() << endl;
				}
				cout << "Enter number from list above: ";
				cin >> n;
				while (n > managers.size() || n < 1) {
					cout << endl << "wrong number! Try again: ";
					cin >> n;
				}
				managers[n - 1].displayManager();
				managers[n - 1].modifyManager();
			}
			break;
		case 7:
			online = false;
			break;
		default:
			cout << "Wrong number! Try again: " << endl << endl;
			break;
		}
	}


	return 0;
}

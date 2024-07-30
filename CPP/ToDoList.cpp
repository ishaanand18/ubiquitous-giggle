#include <iostream>
#include <string>
#include <vector>
using namespace std;

void menu() {
	cout<< "TO-DO LIST"<<endl;
	cout<< "1. ADD TASK" << endl;
	cout<< "2. VIEW TASK"<<endl;
	cout<< "3. DELETE TASK" << endl;
	cout<< "4. MARK TASK AS COMPLETE" << endl;
	cout<< "5. EXIT" << endl;
}

void addTask(vector<string> task, vector<bool> complete) {
	string TASK;
	cout << "Enter task : " << endl;
	cin.ignore();
	getline(cin,TASK);
	task.push_back(TASK);
	complete.push_back(false);
	cout<<"task added"<<endl;
}

void viewTask(vector<string> task, vector<bool> complete) {
	if (task.size() == 0){
		cout << "No elements added , consider adding the elements" << endl;
	}
	else {
		for (int i = 0; i <= task.size(); i++) {
			cout << i + 1<< "." << task[i]<<endl;
		}
	}
}

int main(){
	menu();
	vector<string> task;
	vector<bool> complete;
	int c;
	cout<<"choice \n";
	cin>>c;
	while(true){
	if (c==1){
	addTask(task,complete);}
	//addTask();
	else if (c==2){
	viewTask(task,complete);
	break;}
	}
	return 0;

}
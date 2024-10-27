# include <iostream>
using namespace std;
void insertAtTop(int items[],int capacity,int n, int new_item){
	if(n>=capacity){
		cout << "Array is full.New Item Cannot Insert" << endl;
		return;
	}
	for(int i=n; i>0; i--){
		items[i] = items[i-1];
	}
	items[0] = new_item;
}
void printItems(int items[],int n){
	for(int i=0; i<n; i++){
		cout << items[i] << " ";
	}
	cout << endl;
}
int main(){
	int capacity = 10;
	int items[capacity] ={3,5,7,9,11};
	int n = 5;
	int new_item;
	cout << " Enter Insert Item: ";
	cin >> new_item;
	insertAtTop(items,capacity,n,new_item);
	cout << "Array After Inserting the New Item at the Top: ";
	printItems(items,n);
	return 0;
}
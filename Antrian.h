#define MAX 20
using namespace std;

struct Queue {
	int front, rear, data[MAX];
}Q;

bool isFull() {
	return Q.rear == MAX;
}

bool isEmpty() {
	return Q.rear == 0;
}

void printQueue() {
	if (isEmpty()) {
    cout << "Antrian kosong"<<endl;
	}
	else {
		cout << "NOMOR ANTRIAN ==> ";
		for (int i = Q.front; i < Q.rear; i++)
			cout << Q.data[i] << ((Q.rear-1 == i) ? "" : " ");
		cout << endl;
  }
  cout<< endl;
}

int maksimum() {
    int maks = 0;
    for (int i = 0; i < Q.data[-1]; i++){
        if (Q.data[i] > maks){
            maks = Q.data[i];
        }
    }
    return maks;
}


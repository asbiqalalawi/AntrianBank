void enqueue() {
  if (isFull()){
    cout << "Antrian penuh!"<<endl<<endl;
  }
  else {
    int data;
    if (isEmpty()){
      data = 1;
    }
    else{
      data = maksimum()+1;
    }
    Q.data[Q.rear] = data;
    Q.rear++;
    printQueue();
  }
}
void dequeue() {
	if (isEmpty()){
		cout << "Antrian masih kosong"<<endl<<endl;
	}
	else{
		//menggeser antrian data ke head
		for (int i = Q.front; i < Q.rear; i++)
			Q.data[i] = Q.data[i + 1];

		Q.rear--;
		printQueue();
	}
}

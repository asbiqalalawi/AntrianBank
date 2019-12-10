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

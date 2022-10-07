class ArrayQueue {
	private static int front, rear, capacity;
	private static int queue[];

	ArrayQueue(int c)
	{
		front = rear = 0;
		capacity = c;
		queue = new int[capacity];
	}

 void queueEnqueue(int data)
	{
		if (capacity == rear) {
			System.out.printf("\nQueue is full\n");
			return;
		}

		else {
			queue[rear] = data;
			rear++;
		}
		return;
	}

	 void queueDequeue()
	{
		if (front == rear) {
			System.out.printf("\nQueue is empty\n");
			return;
		}

		else {
			for (int i = 0; i < rear - 1; i++) {
				queue[i] = queue[i + 1];
			}

			if (rear < capacity)
				queue[rear] = 0;

			rear--;
		}
		return;
	}

	 void queueDisplay()
	{
		int i;
		if (front == rear) {
			System.out.printf("\nQueue is Empty\n");
			return;
		}

		for (i = front; i < rear; i++) {
			System.out.printf(" %d <-- ", queue[i]);
		}
		return;
	}

	public static void main(String[] args)
	{
		ArrayQueue q = new ArrayQueue(4);

		q.queueDisplay();

		q.queueEnqueue(20);
		q.queueEnqueue(30);
		q.queueEnqueue(40);
		q.queueEnqueue(50);

		q.queueDisplay();

		q.queueEnqueue(60);

		q.queueDisplay();

		q.queueDequeue();
		q.queueDequeue();
		System.out.printf("\n\nafter two node deletion\n\n");

		q.queueDisplay();

	}
}

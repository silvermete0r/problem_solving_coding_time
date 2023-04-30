public class Heap {
    private int[] heap;
    private int size;
    private int maxSize;

    public Heap(int maxSize) {
        this.maxSize = maxSize;
        this.size = 0;
        this.heap = new int[maxSize + 1];
        this.heap[0] = Integer.MIN_VALUE;
    }

    private void swap(int i, int j) {
        int temp = heap[i];
        heap[i] = heap[j];
        heap[j] = temp;
    }

    private void minHeapify(int index) {
        int leftChild = 2 * index;
        int rightChild = 2 * index + 1;
        int smallest = index;
        if (leftChild <= size && heap[leftChild] < heap[index]) {
            smallest = leftChild;
        }
        if (rightChild <= size && heap[rightChild] < heap[smallest]) {
            smallest = rightChild;
        }
        if (smallest != index) {
            swap(index, smallest);
            minHeapify(smallest);
        }
    }

    public void buildMinHeap() {
        for (int i = size / 2; i >= 1; i--) {
            minHeapify(i);
        }
    }

    private void maxHeapify(int index) {
        int leftChild = 2 * index;
        int rightChild = 2 * index + 1;
        int largest = index;
        if (leftChild <= size && heap[leftChild] > heap[index]) {
            largest = leftChild;
        }
        if (rightChild <= size && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }
        if (largest != index) {
            swap(index, largest);
            maxHeapify(largest);
        }
    }

    public void buildMaxHeap() {
        for (int i = size / 2; i >= 1; i--) {
            maxHeapify(i);
        }
    }
}

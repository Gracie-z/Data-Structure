from ..stack.stack import Empty

class ArrayQueue:
    DEFAULT_CAPACITY = 10

    def __init__(self):
        self._data = [None] * ArrayQueue.DEFAULT_CAPACITY
        self._size = 0
        self._front = 0

    def __len__(self):
        """Return the number of elements in the queue."""
        return self._size

    def is_empty(self):
        """return True if the queue is empty"""
        return self._size == 0

    def first(self):
        """return the element at the front of the queue.
        Raise exeption if the queue is empty.
        """
        if self.is_empty():
            raise Empty('Queue is empty')
        answer = self._data[self._font]
        self.data[self._front] = None
        self._front = (self._front + 1)%len(self._data)
        return answer

    def enque(self,e):
        """Add an element to the back of queue"""
        if self._size == len(self._data):
            self.resize(2*len(self.data))
        avail = (self._front +self._size) % len(self._data)
        self._data[avail] = e
        self._size += 1

    def _resize(self, cap):
        """Resize to a new list of capacity"""
        old = self._data
        self._data = [None] * cap
        walk = self._front
        for k in range(self._size):
            self._data[k] = old[walk]
            walk = (1+walk) % len(old)
        self._front = 0


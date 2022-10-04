class Node:
  
    # Constructor to initialize the node object
    def __init__(self, data):
        self.data = data
        self.next = None
  
  
class LinkedList:
  
    # Function to initialize head
    def __init__(self):
        self.head = None
  
    # Function to reverse the linked list
    def reverse(self):
        prev = None
        current = self.head
        while(current is not None):
            next = current.next
            current.next = prev
            prev = current
            current = next
        self.head = prev
  
    # Function to insert a new node at the beginning
    def push(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node
    
    def insert_at_end(self,data):
      if self.head is None:
        self.push(data)

      else:
        node = Node(data)
        iterator = self.head
        while iterator.next is not None:
          iterator = iterator.next
        iterator.next= node
  
    # Utility function to print the LinkedList
    def printList(self):
        temp = self.head
        while(temp):
            print (temp.data,end=" ")
            temp = temp.next
    
    ## To store all the elements of  list into linked list
    def insert_values(self, data_list):
        # self.head = None
        for data in data_list:
          self.insert_at_end(data)
    
    ## Method to count number of elements inside Linked List
    def count_length(self):
      count = 0
      iterator = self.head
      while iterator:
        count += 1
        iterator = iterator.next
      return count

    ## Removal of an element inside Linked List
    def removal_at_index(self, idx):
      ## Invalid Index
      if idx<0 or idx >= self.count_length():
        raise Exception("Invalid Index")
      ## Deletion at beginning
      if idx == 0:
        self.head = self.head.next
        return
      ## Deletion at any other index value
      count = 0
      iterator = self.head
      while iterator:
        if count == idx - 1:
          iterator.next = iterator.next.next
          break

        iterator = iterator.next
        count += 1
  
  
# Driver program to test above functions
llist = LinkedList()
llist.push(20)
llist.push(4)
llist.push(15)
llist.push(85)
  
print ("Given Linked List")
llist.printList()
llist.reverse()
print ("\nReversed Linked List")
llist.printList()

## 2nd linked list
llist2 = LinkedList()
print("\n\nLinked list2 after insertion of values directly from list")
llist2.push(20)
llist2.insert_values([2,3,4,5,6,7,8,9,10])
llist2.printList()

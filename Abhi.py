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
  
    # Utility function to print the LinkedList
    def printList(self):
        temp = self.head
        while(temp):
            print (temp.data,end=" ")
            temp = temp.next
            
    ## To store all the elements of  list into linked list
    def insert_values(self, data_list):
        self.head = None
        for data in data_list:
          self.insert_at_end(data)
  
    ## Removal of an element inside Linked List
    def removal_at_index(self, idx):
      ## Invalid Index
      if idx<0 or idx >= self.count_length():
        raise Exception("Invalid Index")
      ## Deletion at beginning
      if idx == 0:
        self.head = self.head.next_node
        return
      ## Deletion at any other index value
      count = 0
      iterator = self.head
      while iterator:
        if count == idx - 1:
          iterator.next_node = iterator.next_node.next_node
          break

        iterator = iterator.next_node
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

## copying vvalues of existing list into linked list
llist2 = LinkedList()
llist2.insert_values(["Jatin","Arvind","Suneetha","Ritu","Taral","Nafisa","Sriteja"])
llist2.printList()

# deleting element from llist2
llist2.removal_at_index(2)


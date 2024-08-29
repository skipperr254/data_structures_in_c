class Node():
    def __init__(self, data):
        self.data =  data
        self.next = None

node1 = Node(6)
node2 = Node(3)
node3 = Node(4)
node4 = Node(2)
node5 = Node(1)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5

print(node1.next.next.next.data)

def countNodes(node):
    nodes = 1
    while node.next:
        nodes += 1
        node = node.next

    return nodes

print(countNodes(node1))

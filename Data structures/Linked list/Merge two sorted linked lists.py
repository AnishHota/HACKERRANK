"""
 Merge two linked lists
 head could be None as well for empty list
 Node is defined as

 class Node(object):

   def __init__(self, data=None, next_node=None):
       self.data = data
       self.next = next_node

 return back the head of the linked list in the below method.
"""

def MergeLists(headA, headB):
    headC=Node()
    temp=headC
    while(headA!=None and headB!=None):
        if headA.data==headB.data:
            tem=Node(headA.data)
            headA=headA.next
            headB=headB.next
        elif headA.data<headB.data:
            tem = Node(headA.data)
            headA=headA.next
        else:
            tem = Node(headB.data)
            headB=headB.next
        headC.next = tem
        headC=headC.next
    while(headA!=None):
        tem = Node(headA.data)
        headC.next=tem
        headA=headA.next
        headC=headC.next
    while(headB!=None):
        tem=Node(headB.data)
        headC.next=tem
        headC=headC.next
        headB=headB.next
    return temp.next

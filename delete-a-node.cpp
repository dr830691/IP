// https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
     
if(llist==NULL)
 return llist;
  if (position == 0){ return llist->next; }
    llist->next = deleteNode(llist->next, position-1);
    return llist;
}
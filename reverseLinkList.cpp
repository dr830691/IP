bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
    while(head1 !=NULL && head2!=NULL)
    {
        if(head2->data!=head1->data)
        return false;
        head1=head1->next;
        head2=head2->next;
    }
    if(head1==NULL && head2==NULL)
    return true;
    else
    return false;
}

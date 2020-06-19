int getDecimalValue(ListNode* head)
{
    ListNode* Curr = head;
    ListNode* Tail = head;

    int E = 0;  // Exponent

    // Tail point to last
    while (Tail->next != NULL)
    {
        Tail = Tail->next;
        ++E; 
    }

    // Traverse list, de-increment Exponent each turn
    int Ans = 0;
    Curr = head;

    while (Curr != NULL) 
    {
        Ans += Curr->val * pow(2, E);
        Curr = Curr->next;
        --E;
    }

    return Ans;
}
Approach:
<br>
<li>In this type of scenario, we first take a dummy node that will be assigned to NULL.<br>
<li>Then we take a next pointer which will be initialized to head->next and in future iterations, next will again be set to head->next. <br>
<li>Now coming to changes on the head node, as we have set the dummy node as NULL and next to head->next, we can now update the next pointer of the head to the dummy node.<br>
<li>Before moving to the next iteration dummy is set to head and then the head is set to the next node.<br>
<li>Now coming to the next iteration: We’ll follow a similar process to set next as head->next and update head->next = dummy, a dummy set to head, and head set to next.<br>
<li>These iterations will keep going while the head of the original Linked List is not NULL, i.e. we’ll reach the end of the original Linked List and the Linked List has been reversed.</ul></li>

void push(t_node **stack_1, t_node **stack_2)
{
    t_node *node_to_move;

    if (!stack_1 || !*stack_1)
        return ;
    node_to_move = *stack_1;
    *stack_1 = (*stack_1)->next;
    node_to_move->next = *stack_2;
    *stack_2 = node_to_move;
}

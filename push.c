void push(t_node **stack_a, t_node **stack_b)
{
    t_node *node_to_move;

    if (!stack_a || !*stack_a)
        return ;
    node_to_move = *stack_a;
    *stack_a = (*stack_a)->next;
    node_to_move->next = *stack_b;
    *stack_b = node_to_move;
}

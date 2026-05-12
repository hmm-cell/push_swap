void swap(t_node **stack)
{
  if (!*stack || !(*stack)->next)
    return;int temp;
  temp = (*stack)->value;
  (*stack)->value = (*stack)->next->value;
  (*stack)->next->value = temp;
}

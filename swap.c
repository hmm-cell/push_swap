void handle_swap(t_node **stack_a, t_node **stack_b, const char *operation)
{
  if (operation[0] == 's' && operation[1] == 'a' && operation[2] == '\0')
  {
    swap(stack_a);
    write(1, "sa\n", 3);
  }
  else if (operation[0] == 's' && operation[1] == 'b' && operation[2] == '\0')
  {
    swap(stack_b);
    write(1, "sb\n", 3);
  }
  else if (operation[0] == 's' && operation[1] == 's' && operation[2] == '\0')
  {
    swap(stack_a);
    swap(stack_b);
    write(1, "ss\n", 3);
  }
}

void swap(t_node **stack)
{
  if (!*stack || !(*stack)->next)
    return;int temp;
  temp = (*stack)->value;
  (*stack)->value = (*stack)->next->value;
  (*stack)->next->value = temp;
}

void  selection_sort(t_node **stack_a, t_node **stack_b)
{
  int  size;
  int  min_pos;

  if (!*stack_a || !stack_a || !stack_b)
    return ;
  size = lstsize(*stack_a);
  min_pos = 0;

  while (find_disorder(*stack_a) > 0.0f)
  {
    size = lstsize(*stack_a);
    min_pos = find_minimum_pos(*stack_a);
    if (min_pos <= size / 2)
    {
      while (min_pos > 0)
      {
        ra(stack_a);
        min_pos--;
      }
    }
    else
    {
      while (min_pos < size)
      {
        rra(stack_a);
        min_pos++;
      }
    }
    handle_push(stack_a, stack_b, "pb");
  }
  while(*stack_b != NULL)
  {
    handle_push(stack_a, stack_b, "pa");
  }
}

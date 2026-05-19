int  find_minimum_pos(t_node *stack_a)
{
  t_node  *ptr;
  int  min_pos;
  int  min;
  int current_pos;

  if (!stack_a)
    return (0);
  ptr = stack_a;
  min_pos = 0;
  current_pos = 0;
  min = stack_a->content;

  while (ptr != NULL)
  {
    if (ptr->content < min)
    {
      min = ptr->content;
      min_pos = current_pos;
    }
    current_pos++;
    ptr = ptr->next;
  }
  return (min_pos);
}

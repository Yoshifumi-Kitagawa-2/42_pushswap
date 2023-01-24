typedef struct s_elem
{
    struct s_elem   *prev;
    struct s_elem   *next;
    long            num;
    bool            need_sort;
    bool            is_end;
    bool            lis;
    size_t          pos;
    size_t          tmp_pos;
    size_t          lis_len;
    int             move_b_cost;
}t_elem;

typedef struct s_info
{
    t_elem  *stack_a;
    t_elem  *stack_b;
    t_elem  *stack_t;
    t_elem  *lis_head;
    t_list  *ops;

    longmin;
    longmedian;
    longmax;
    size_tmax_pos;
    size_tstack_t_len;
    size_tneed_sort_count;
}t_info;

typedef struct s_cost
{
    size_t  ra;
    size_t  rb;
    size_t  rra;
    size_t  rrb;
    size_t  cost;
}t_cost;
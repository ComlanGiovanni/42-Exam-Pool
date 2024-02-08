#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
    struct s_list *next;
    void          *data;
}   t_list;


typedef struct e_list
{
    struct e_list *next;
    int            data;
}   i_list;


#endif
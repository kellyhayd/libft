42 HEADER

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *newlst;
    t_list  **current;
    void    *tmp;

    current = &newlst;
    while (lst)
    {
        tmp = f(lst->content);
        *current = ft_lstnew(tmp);
        if (!(*current))
        {
            del(tmp);
            return (NULL);
        }
        lst = lst->next;
        current = &(current->next);
    }
    return (newlst);
}















STACK
=====
return byte1  --- lixo
return byte2
return byte3
return byte4
lst byte1     --- lixo
lst byte2
lst byte3
lst byte4
f byte1       --- 09143532
f byte2
f byte3
f byte4
del byte1     --- 34253235
del byte2
del byte3
del byte4
newlst byte1  --- 115
newlst byte2
newlst byte3
newlst byte4
current byte1 --- 119
current byte2
current byte3
current byte4












HEAP
====

kelly1->content byte1   --- 130
kelly1->content byte2
kelly1->content byte3
kelly1->content byte4
kelly1->next byte1      --- 86
kelly1->next byte2
kelly1->next byte3
kelly1->next byte4




kelly2->content byte1   --- 135
kelly2->content byte2
kelly2->content byte3
kelly2->content byte4
kelly2->next byte1      --- 98
kelly2->next byte2
kelly2->next byte3
kelly2->next byte4




kelly3->content byte1   --- 140
kelly3->content byte2
kelly3->content byte3
kelly3->content byte4
kelly3->next byte1      --- 0
kelly3->next byte2
kelly3->next byte3
kelly3->next byte4








thiago->content byte1   --- 147
thiago->content byte2
thiago->content byte3
thiago->content byte4
thiago->next byte1      --- NULL
thiago->next byte2
thiago->next byte3
thiago->next byte4







1 byte1  --- 1
1 byte2
1 byte3
1 byte4

6 byte1  --- 6
6 byte2
6 byte3
6 byte4

7 byte1  --- 7
7 byte2
7 byte3
7 byte4



2 byte1  --- 2
2 byte2
2 byte3
2 byte4
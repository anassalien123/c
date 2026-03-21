typedef struct linked_list
{
    int nun;
    struct linked_list  *next;
    
}t_list;

int list_size(t_list *head)
{
    int count;

    count = 0;
    while (head)
    {
        count++;
        head = head->next;
    }
    return (count);
}


#include <stdio.h>
int main()
{
    t_list a,b,c;

    a.nun = 1;
    b.nun = 2;
    c.nun = 3;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    t_list *head = &a;

    printf("%d\n",list_size(head));
    // printf("%d\n"t,a.nun);
    // printf("%d\n",b.nun);
    // printf("%d\n",c.nun);

    // printf("%d\n",a.next);
    // printf("%d\n",b.next);
    // printf("%d\n",c.next);
}
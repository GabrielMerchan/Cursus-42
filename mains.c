/*#include <stdlib.h>
#include <stdio.h>

//main de listas add front
int	main(void)
{
    t_list *lst;
    t_list *lst1;
    t_list *new;
    int i =1;
    int c = 2;
    int j= 3;

    lst = malloc(sizeof(t_list));
    lst1 = malloc(sizeof(t_list));
    new = malloc(sizeof(t_list));
    lst ->content = &c;
    lst->next= lst1;
    lst1->content=&j;
    lst1->next=NULL;
    new->content=&i;
    new->next=NULL;
    ft_lstadd_front(&lst, new);
    while (lst)
    {
        printf("%i -> ", *(int *)lst->content);
        lst = lst->next;
    }

    return (0);
}*/

//main de delete list;
/*
void	delete(void *lst)
{
    free(lst);
}
#include <stdio.h>
int	main(void)
{
    t_list *lst;
    t_list *lst1;
    t_list *new;
    int *i = malloc(sizeof(int));
    int *c = malloc(sizeof(int));
    int *j = malloc(sizeof(int));
    *i = 1;
    *c = 2;
    *j = 3;

    lst = malloc(sizeof(t_list));
    lst1 = malloc(sizeof(t_list));
    new = malloc(sizeof(t_list));
    if (!lst || !lst1 || !new)
        return (1);
    
    lst ->content = i;
    lst->next= lst1;
    lst1->content=c;
    lst1->next=new;
    new->content=j;
    new->next=NULL;
    ft_lstclear(&lst, delete);
    if (!lst)
      printf("Lista eliminada\n");
    return (0);
}*/

/*Main de iterar lista con funcion
void test(void *tst)
{
    char *str;
    int i;

    i = 0;
    str = (char *)tst;
    while(str[i])
    {
        str[i]-=32;
        i++;
    }
    
}
#include <stdio.h>
int	main(void)
{
    t_list *lst;
    t_list *lst1;
    t_list *lst2;
    char a[] = "a";
    char b[] = "b";
    char c[] = "c";

    lst = malloc(sizeof(t_list));
    lst1 = malloc(sizeof(t_list));
    lst2 = malloc(sizeof(t_list));

    lst->content=a;
    lst->next=lst1;
    lst1->content=b;
    lst1->next=lst2;
    lst2->content=c;
    lst2->next=NULL;
    ft_lstiter(lst, test);
    while (lst)
    {
        printf("Letra :%s\n", (char *)lst->content);
        lst = lst->next;
    }
    return (0);
}*/

//main de list map
/*
void	*test(void *tst)
{
    char *str;
    char *copy;
    int i;

    i = 0;
    str = (char *)tst;
    copy = ft_strdup(str);
    while(copy[i])
    {
        copy[i]-=32;
        i++;
    }
    return (copy);
}
void	delete(void *lst)
{
    free(lst);
}
#include <stdio.h>
int	main(void)
{
    t_list *lst;
    t_list *lst1;
    t_list *lst2;
    t_list *res;
    t_list *temp;
    char a[] = "a";
    char b[] = "b";
    char c[] = "c";

    lst = malloc(sizeof(t_list));
    lst1 = malloc(sizeof(t_list));
    lst2 = malloc(sizeof(t_list));

    lst->content=a;
    lst->next=lst1;
    lst1->content=b;
    lst1->next=lst2;
    lst2->content=c;
    lst2->next=NULL;
    res = ft_lstmap(lst, test, delete);
    temp = res;
    while (temp)
    {
        printf("Letra :%s\n", (char *)temp->content);
        temp = temp->next;
    }
    ft_lstclear(&res, delete);
    free(lst);
    free(lst1);
    free(lst2);
    return (0);
}*/

//main de memchr
/*#include <stdio.h>
void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main ()
{
    // char *s="ABCDEFGHIJKLMN";
    // char c= 69;
    int c = 2;
    int s[4]={1,2,3,4};
    int *f;
    int *g;
    // char *f;
    // char *g;
    //printf("Antes: %s\n", s);
    f=ft_memchr(s, c, 4*(sizeof(int)));
    //printf("Despues: %s", f);
    printArray(f,4);
    printf("\n");
    g=memchr(s, c, 4*(sizeof(int)));
    //printf("\nOficial: %s", g);
    printArray(g,4);
    printf("\n");
    return (0);
}*/

//main memmove
// #include <stdio.h>
/*void printArray(int arr[], int n)
// {
//    for (int i=0; i<n; i++)
//       printf("%d ", arr[i]);
// }

int	main(void)
{
// 	char	d[];
// 	char	*g;

// 	//char s[21]="XXXXXXXXXXXXXXXXX";
// 	d[] = "abcdef";
// 	// int s[4]={1,1,1,1};
// 	// int d[3]={2,5,6};
// 	//char *f;
// 	// printf("Antes: %s\n", d);
// 	// f=ft_memmove(d+1, d, 2*(sizeof(char)));
// 	// printf("Despues: %s", f);
// 	// printArray(f,3);
// 	// d[0]=2;
// 	// d[1]=5;
// 	// d[2]=6;
// 	// d[3]=2;
// 	// d[4]=7;
// 	// d[5]=7;
// 	// d[6]=8;
// 	g = memmove(d + 2, d, 4 * (sizeof(char)));
// 	printf("\nOficial: %s", d);
// 	// printArray(g,3);
// 	return (0);
}*/

//main de fd
/*#include <fcntl.h>
int	main(void)
{
	ft_putendl_fd("Mi nombre es Gladiador", open("testo.txt",O_RDWR | O_CREAT,
			0640));
	//create new folder and user can w and r and group can r
	return (0);
}*/
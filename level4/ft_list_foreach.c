#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list)
	{
		if (begin_list->data)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

static void	print_data(void *data)
{
	printf("%s\n", (char *)data);
}

static void	add_exclamation(void *data)
{
	char	*str;

	str = (char *)data;
	printf("%s!\n", str);
}

#ifndef TEST

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	// リストノードを作成
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	node3 = malloc(sizeof(t_list));
	node1->data = "Hello";
	node1->next = node2;
	node2->data = "World";
	node2->next = node3;
	node3->data = "42";
	node3->next = NULL;
	printf("Test 1: print_data function\n");
	ft_list_foreach(node1, &print_data);
	printf("\nTest 2: add_exclamation function\n");
	ft_list_foreach(node1, &add_exclamation);
	// メモリ解放
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
#endif

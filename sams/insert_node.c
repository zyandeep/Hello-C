/* Inserting a node at the beginning */

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
} Node;

void insert( int x, Node **p_head );
void print_list( Node *head );

int main( void )
{
	int numbers, num, i;

	/* Creat the head of the list */
	Node *head = NULL;

	printf( "\nHow many numbers? " );
	scanf( "%d", &numbers );

	for ( i = 1; i < numbers; ++i )
	{
		printf( "\nEnter the number: " );
		scanf( "%d", &num );

		insert( num, &head );
		print_list( head );
	}

	return 0;
}

void insert( int x, Node **p_head )
{
	Node *temp = ( Node* ) malloc( sizeof( Node ) );
	temp -> data = x;
	
	temp -> next = *p_head;
	*p_head = temp;
}

void print_list( Node *head )
{
	printf( "The list is: " );

	while( head != NULL )
	{
		printf( "%d ", head -> data );
		head = head -> next;
	}

	printf( "\n" );
}
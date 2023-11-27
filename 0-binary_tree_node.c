#include "binary_trees.h"

/**
  * binary_tree_node - Creates a binary Tree Node
  * @parent: Pointer to the parent node of the node to create
  * @value: Value to be put in the new node
  * Return: Pointer to the new Node
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}

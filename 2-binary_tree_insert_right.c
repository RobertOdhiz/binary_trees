#include "binary_trees.h"

/**
  * binary_tree_insert_right - Inserts a node as the right child of another node
  * @parent: pointer to the node to insert the right child in
  * @value: Value to store in the new Node
  * Return: Pointer to the created node or NULL on failure or parent is NULL
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		free(newNode);
		return (NULL);
	}
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = newNode;

	parent->right = newNode;

	return(newNode);
}

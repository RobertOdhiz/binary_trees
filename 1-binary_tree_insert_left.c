#include "binary_trees.h"

/**
  * binary_tree_insert_left - Inserts a node as the left child of another node
  * @parent: Pointer to the node to insert the left child in
  * @value: Value to store in the new node
  * Return: Pointer to the new node, NULL if failed or parent is NULL
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL || parent == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = parent->left;
	newNode->parent = parent;
	newNode->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = newNode;

	parent->left = newNode;

	return (newNode);
}

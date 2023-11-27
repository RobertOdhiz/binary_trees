#include "binary_trees.h"

/**
  * binary_tree_delete - Deletes an entire Binary Tree
  * @tree: Pointer to the root Node of th tree to delete
  * Return: nothing
  */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}

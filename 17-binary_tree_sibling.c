#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of input node
 * @node: node to check for a sibling
 *
 * Return: pointer to sibling or NULL if none or failure
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

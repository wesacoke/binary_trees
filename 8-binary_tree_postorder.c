#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: The function calls the given function on each node of the tree
 *              in post-order traversal. The value in each node is passed as a
 *              parameter to the function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

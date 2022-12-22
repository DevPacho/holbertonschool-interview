#include "binary_trees.h"

/**
* Write a function that creates a binary tree node:
*
* Prototype: binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
* parent is a pointer to the parent node of the node to create
* value is the value to put in the new node
* When created, a node does not have any children
* Your function must return a pointer to the new node, or NULL on failure
*/

/**
* binary_tree_node - function that creates a binary tree node.
*
* @parent: pointer to the parent node of the node to create.
* @value: value to put in the new node.
*
* Return: pointer to the new node, or NULL on failure.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}

/**
 * @file binary_tree.c
 * @brief All the implementation code for @fi:le include/binary_tree.h
 */

#include "../include/binary_tree.h"
#include "../include/node.h"
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

/**
 * @brief Creat new tree with head_data as tree->head->data.
 * 
 * @param[in] head              The root of the tree dirictely as a Node.
 * @return Binary_tree *        Return Binary_tree struct, NULL if malloc failed.
 */
Binary_tree *init_tree_node(Node *head)
{
    Binary_tree *tree = malloc(sizeof *tree);

    // Allocation failed.
    if(tree == NULL)
        return NULL;
    
    tree->head = head;
    tree->height = 1;

    return tree;
}

/**
 * @brief Creat new tree with head_data as tree->head->data.
 * 
 * @param[in] head_data        The value to store in tree's head node.
 * @return Binary_tree *        Return Binary_tree struct, NULL if malloc failed.
 */
Binary_tree *init_tree(int head_data, float x, float y)
{
    Binary_tree *tree = malloc(sizeof *tree);

    // Allocation failed.
    if(tree == NULL)
        return NULL;

    tree->head = init_node(head_data, x, y);
    tree->height = 1;

    return tree;
}


/**
 * @brief return true if the tree doesn't have any nodes, false otherwise.
 * 
 * @param[in] tree      Targeted tree to check.
 * @return bool         True if the tree is empty, false otherwise.
 */
bool is_empty(Binary_tree *tree)
{
    return tree == NULL || tree->head == NULL;
}

/**
 * @brief Add to the targeted tree a new node according to binary tree rules. 
 * 
 * @param[in] head          The head node of the tree.
 * @param[in] new_node      Pointer to added node.
 * @return Node *
 */
Node *addN(Node *head, Node *new_node)
{
    if(head == NULL)
        return new_node;

    if(new_node->data < head->data)
        head->left = addN(head->left, new_node);
    else
        head->right = addN(head->right, new_node);

    return head;

}

/**
 * @brief Add to the targeted tree a new node according to binary tree rules. with data as it's node->data. 
 * 
 * @param[in] head      The head node of the tree.
 * @param[in] data      The values to store in the new node.
 * @param[in] x         Center of the ball/object on the x-axis
 * @param[in] y         Center of the ball/object on the y-axis
 * @return Node *
 */
Node *add(Node *head, int data, float x, float y)
{
    if(head == NULL)
        return init_node(data, x, y);

    else if(data < head->data)
        head->left = add(head->left, data, x, y);
    else
        head->right = add(head->right, data, x, y);

    return head;
}


/**
 * @brief Check if the tree containes the target value.
 * 
 * @param[in] head      The head node of the tree.
 * @param[in] traget    The value to check.
 * @return  bool        Return true if the tree containes the value, false otherwise. 
 */
bool containes(Node *head, int tartget)
{
    if(head == NULL)
        exit(EXIT_FAILURE);
    
    if(head->data == tartget)
        return true;
    else if(tartget < head->data)
        return containes(head->left, tartget);
    else 
        return containes(head->right, tartget);
}

/**
 * @brief Pre-order Traversal(Rot -> left -> right). Recursively visits the left subtree, recursively visits the right subtree, and processes the root last. 
 * 
 * @param[in] head The head node of the tree.
 * @return void
 */
void pre_order_traversal(Node *head)
{
    if(head == NULL)
        return;

    printf("%d ", head->data);
    pre_order_traversal(head->left);
    pre_order_traversal(head->right);

}

/**
 * @brief Calculate the maximum width of this tree.
 * 
 * @param head      The head node(root) of this tree.
 * @return int      Retunr the maximum width of this tree.
 */
// int get_max_width(Node *head)
// {

// }

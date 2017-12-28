/*********************************************
 * Defines a factor tree where the construction is ueneven or even depending on input boolean
 *
 * Author: swolewizard
 *
 * *******************************************/

#ifndef FACTOR_TREE_HPP
#define FACTOR_TREE_HPP

#include <iostream>
#include <vector>
#include "factor.hpp"

using namespace std;

class Factor_Tree
{
  public:
	Factor_Tree(int r, bool even);
	void print_factor_tree();
	int get_root();
	vector<int> get_factor_tree();
	void set_root(int i);

  private:
    void construct_factor_tree(int r);
	void construct_even_factor_tree(int r) { }
    int root;
	vector<int> factor_tree;
};

#endif // FACTOR_TREE_HPP
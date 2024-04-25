// ----------- ZAD72 -----------
//(class) Do klasy TreeNode z poprzedniego zadania (70) dodajmy klasę Tree reprezetującą całe drzewo

//Dodaj do klasy Tree metodę search(int val), która wyszukuje w drzewie zadanej wartości
//(rozwiązaniem jest tylko brakujący kod)

//./tree ➞ WYDRUKUJE:
//4 is in the tree

#include <iostream>

// TODO tu trzeba umieścić klasę TreeNode z poprzedniego zadania (70) <!-- TODO brakuje insert!!!!!!!!!!!!!
class TreeNode {
	public:
		int val;
		TreeNode* left= nullptr;
		TreeNode* right= nullptr;
		TreeNode(int val){
			this->val = val;
		}
};

// -->

class Tree {
public:
	TreeNode* root;
	Tree() : root(nullptr) {}
// ROZWIĄZANIE POCZATEK
bool search(int val) {
        TreeNode* current = root;
        while (current != nullptr) {
            if (val == current->val) {
                return true;
            } else if (val < current->val) {
                current = current->left;
            } else {
                current = current->right;
            }
        }
        return false;
    }
// ROZWIĄZANIE KONIEC

// TODO insert z poprzedniego zadania <!--
void insert(int val) {
	if (root == nullptr) {
		root = new TreeNode(val);
		return;
	}
	TreeNode *c = root;
	while (true) {

		if (c->val <= val) {
			if (c->right == nullptr) {
				c->right = new TreeNode(val);
				break;
			} else
				c = c->right;

		} else{
			if (c->left == nullptr) {
				c->left = new TreeNode(val);
				break;
			} else
				c = c->left;
		}
	}
}
// -->
	~Tree() {
		deleteTree(root);
	}
private:

	void deleteTree(TreeNode* node) {
		if (node == nullptr)
			return;

		// first delete both subtrees
		deleteTree(node->left);
		deleteTree(node->right);

		// then delete the node
		delete node;
	}
};

using namespace std;
int main() {
	Tree tree;
	//     5
	//    / \
	//   3   7
	//  / \ / \
	// 2  4 6  8
	// insert some values into the tree
	tree.insert(5);
	tree.insert(3);
	tree.insert(7);
	tree.insert(2);
	tree.insert(4);
	tree.insert(6);
	tree.insert(8);

	// search for a value in the tree
	int searchValue = 4;
	if (tree.search(searchValue)) {
		cout << searchValue << " is in the tree" << endl;
	} else {
		cout << searchValue << " is not in the tree" << endl;
	}
	return 0;
}
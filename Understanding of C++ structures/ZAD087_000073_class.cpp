// ----------- ZAD73 -----------
//(class) Do klasy TreeNode z poprzedniego zadania (70) dodajmy klasę Tree reprezetującą całe drzewo

//Dodaj do klasy Tree metodę print(), która wydrukuje całe drzewo w ASCII tak jak w przykładzie
//(rozwiązaniem jest tylko brakujący kod)

//Aby rozwiązać to zadanie musimy najpierw zneleźć głębokość drzewa
//./tree 2 1 3 ➞ WYDRUKUJE:
//  2
// / \
//1   3
//./tree 5 3 7 2 4 6 ➞ WYDRUKUJE:
//    5
//   /   \
//  3     7
// / \   /
//2   4 6
//./tree 5 3 7 1 4 6 8 9 2 0 ➞ WYDRUKUJE:
//      5
//     /         \
//    3           7
//   /   \       /   \
//  1     4     6     8
// / \                 \
//0   2                 9

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
https://arbiterstudio.com/collections/keyboards/products/polar-65
https://www.mediaexpert.pl/komputery-i-tablety/klawiatury-komputerowe/klawiatury/klawiatura-steelseries-apex-pro-mini?gad_source=1&gclid=EAIaIQobChMIstn7sL7kgwMVywYGAB35kw7BEAQYAiABEgJgNPD_BwE
https://wooting.io/wooting-60he
https://www.amazon.pl/DrunkDeer-Klawiatura-A75-klawiatura-mechaniczna/dp/B0C5HDG4T4
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
int main(int argc, char** argv) {
	Tree tree;

	// insert some values into the tree
	for(int i=1; i<argc; ++i)
		tree.insert(std::stoi(argv[i]));

	tree.print();
	return 0;
}
#include<iostream>
#include<vector>
#include<stdexcept>

template<class T>
struct node {
	float data;
	node<T>** left;
	node<T>** right;
	node( float da, node<T>** le, node<T>** rig ) : left(le), right(rig), data(da) {}
	node( float da ) : data( da ) {}
};

template<class T>
class Tree {
	node<T>* root;

	node<T>* makeEmpty( node<T>* t ) {
		if( t == NULL )
			return NULL;
		{
			makeEmpty( t->left );
			makeEmpty( t->right );
			delete t;
		}
		return NULL;
	}

	node<T>** insert( T x, node<T>** t ) {
		if( t->data > x ) {
			if( !t->left )
				t->left = new node<T>( x );
			else
				insert( x, t->left );
		}
		else {
			if( !t->right )
				root->right = new node<T>( x );
			else
				insert( x, root->right );
		}
		return t;
	}

	node<T>** findMin( node<T>** t ) {
		//minimum, dopisz kod
	}

	node<T>** findMax( node<T>** t ) {
		//maksimum, dopisz kod
	}

	node<T>** remove( T x, node<T>** t ) {
		node<T>* temp;
		if( t == NULL )
			return NULL;
		else if( x < t->data )
			t->left = remove( x, t->left );
		else if( x > t->data )
			t->right = remove( x, t->right );
		else if( t->left && t->right ) {
			temp = findMin( t->right );
			t->data = temp->data;
			t->right = remove( t->data, t->right );
		}
		else {
			temp = t;
			if( t->left == NULL )
				t = t->right;
			else if( t->right == NULL )
				t = t->left;
			delete temp;
		}

		return t;
	}

	void inorder( node<T>** t ) {
		if( t == NULL )
			return;
		inorder( t->left );
		std::cout << t->data << " ";
		inorder( t->right );
	}

	node<T>** find( node<T>** t, T x ) {
		if( t == NULL )
			return NULL;
		else if( x < t->data )
			return find( t->left, x );
		else if( x > t->data )
			return find( t->right, x );
		else
			return t;
	}

public:
	Tree() {
		root = NULL;
	}

	~Tree() {
		root = makeEmpty( root );
	}

	void insert( T x ) {
		root = insert( x, root );
	}

	void remove( T x ) {
		root = remove( x, root );
	}

	void display() {
		inorder( root );
		std::cout << std::endl;
	}

	void search( T x ) {
		root = find( root, x );
		std::cout << root->data << std::endl;
	}
};

template<class T>
class ComTree {
	struct rootT{
		Tree<T> tree;
		int iindex;
		T findex;
		T realIndex() {
			return iindex + 1.5;
		}
		rootT( int iind ) : iindex( iind ) {
			findex = iind + 1.5;
		}
	};

	std::vector<rootT> rootTab;
public:
	ComTree( int n ) {
		for( unsigned int i = 0; i < n; i++ ) {
			rootTab.push_back( rootT( i + 1 ) );
		}
	}
	~ComTree();

/*
	void insert( T x ) {
		if( x < 0.5 )
			throw std::range_error;
		for( auto i : rootTab ) {			// 100% sure error occure at some pt
			if( rootTab.at( i ).iindex == int( x ) ) {
				// add to existing one
				rootTab.at( i ).tree.insert( x );
				break;
			}
			if( rootTab.size() - 1 == i ) {
				// create new span tree
				rootTab.push_back( int( x ) );
				rootTab.at( int( x ) ).tree.insert( x );
				// cuz there no
				break;
			}
		}
	}
*/


	void drawTree(std::ostream& cout ) {
		for( auto i : rootTab ) {
			;
		}
	}
};

int main(int argc, char** argv) {
	ComTree<float> comtree(9);
	return 0; 
}

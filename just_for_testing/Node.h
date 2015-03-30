
enum Error_code{underflow, overflow, range_error, success};
template <class Node_entry>
struct Node {
// data members
	Node_entry entry;
	Node<Node_entry> *next;
	Node<Node_entry> *back;
// constructors
	Node( );
	Node(Node_entry item, Node<Node_entry> *link_back = NULL, Node<Node_entry> *link_next = NULL);
};


#include <iostream>

using namespace std;

struct Node {
  shared_ptr<Node> left;
  shared_ptr<Node> right;
  int value;

  Node() {
    value = -1;
    left = nullptr;
    right = nullptr;
  }
};

typedef string::iterator S;

int parse_num(S& st) {
  int ret = 0;
  for(; isdigit(*st); ++st) {
    ret = 10 * ret + (*st - '0');
  }
  return ret;
}

shared_ptr<Node> parse_tree(S& st) {
  auto np = make_shared<Node>();

  if(*st != '(') {
    return np;
  }

  ++st;

  np->left = parse_tree(st);

  ++st;
  ++st;

  np->val = parse_num(st);

  ++st;
  ++st;

  np->right = parse_tree(st);

  ++st;

  return np;
}

shared_ptr<Node> compose(shared_ptr<Node> n1, shared_ptr<Node> n2) {
  auto np = make_shared<Node>();

  if (n1->val == -1 || n2->val == -1) {
    return np;
  }

  np->val = n1->val + n2->val;

  np->left = compose(n1->left, n2->left);
  np->right = compose(n1->right, n2->right);

  return np;
}

void print_tree(shared_ptr<Node> np) {
  if (np->val == -1) { return ; }

  cout << '(';
  print_tree(np->left);
  cout << ')';
  cout << '[' << np->val << ']';
  cout << '(';
  print_tree(np->right);
  cout << ')';
}

int main() {
  string a, b;
  cin >> a;
  cin >> b;
  S s1 = a.begin(), s2 = b.begin();

  shared_ptr<Node> n1 = parse_tree(a);
  shared_ptr<Node> n2 = parse_tree(b);

  shared_ptr<Node> c = compose(n1, n2);

  print_tree(c);
  cout << endl;
}

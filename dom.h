#include <libwapcaplet.h>

typedef struct Node {
  lwc_string *name;
  lwc_string *css_id;
  lwc_string **css_clases;
  lwc_string **attributes;

  bool changed;

  Node *sibling;
  Node *child;
} Node;

inline void node_add_child(Node *node, Node *child) {
}

inline void node_add_sibling(Node *node, Node *sibling) {
}

inline void node_delete_sibling(Node *node) {
}

inline void node_delete_child(Node *node) {
}

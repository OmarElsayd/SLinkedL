#ifndef singly_linked_list_h
#define singly_linked_list_h
#include "node.h"
#include <iostream>

using namespace std;

class singly_linked_list
{
private:
  node *head;
public:
  int length;
  singly_linked_list();
  ~singly_linked_list();

  void add_first(int);
  void add_last(int);
  void add_particularposition(int,int);
  void delete_first();
  void delete_last();
  void delete_particularposition(int);
  void display_all();
  void display_first();
  void display_last();
  void display_particularposition(int); 
};
#endif


#include <iostream>

class List
        {
    struct node {
        int data;
        struct  node *next;
    } *p;
public:


    void addbeg(int item);

    void display();

    List();
};
List::List() {
    p = nullptr;  //nullptr is equivalent to NULL
}
 void List::addbeg(int item)
 {
    struct node *q;
    q=new node;
    q->data=item;
    q->next=p;
    p=q;
 }
 void List::display()
 {
    using namespace std;
   struct node *q;
   q=p;
   while(q!= nullptr)
   {
       cout<<"The data inserted is::";
       cout<<q->data<<endl;
       q=q->next;

   }

 }


            int main()
            {
             List l;
             l.addbeg(6);
             l.addbeg(9);
             l.addbeg(5);
             l.display();
             return 0;
            }
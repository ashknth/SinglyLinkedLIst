#include <iostream>
using namespace std;
class Linkedlist
        {
         struct node
                 {
        int data;
        struct node *next;
    } *p;
public:
    Linkedlist();
    void append(int);

    void addbeg(int);

    void addanyloc(int, int);

    void delend();

    void delbeg();

    void delanyloc(int);

    void display();
};
     Linkedlist::Linkedlist()
     {

         p = NULL;
       }
                void Linkedlist::append(int item)
                {
                   struct node *q,*t;
                   if(p==NULL)
                     {
                        p=new node;
                        p->data=item;
                         p->next=NULL;
                        }
                   else
                   {
                       q=p;


                       while(q->next!=NULL)
                       {
                           q=q->next;
                       }
                       t=new node;
                       t->data=item;
                       t->next=q->next;
                       q->next=t;
                   }
                  }


            void Linkedlist::addbeg(int item)
            {
            struct node *t;
            t=new node;
            t->data=item;
            t->next=p;
            p=t;
            }
                  void Linkedlist::addanyloc(int item,int loc)
                  {
                  struct node *q,*t;

                  for( int i=1;i<loc;i++)
                  {
                      q=p;
                      t=q->next;
                      q=q->next;
                  }
                  t=new node;
                  t->data=item;
                  t->next=q->next;
                  q->next=t;
                  }
                      void Linkedlist::delbeg()
                      {
                          struct node *q,*t;
                         q=p;
                         p=q->next;
                         delete q;

                      }

                  void Linkedlist::delanyloc( int loc)
                  {
                 struct node *q,*t;
                 q=p;
                      for( int i=1;i<loc;i++)
                      {
                          t=q;
                          q=q->next;
                      }
                      t->next=q->next;
                      delete q;
                  }

                   void Linkedlist::delend()
                   {
                     struct node *q,*t;
                      q=p;
                      while(q->next!=NULL)
                      {
                          t = q;
                          q = q->next;
                      }
                          t->next=NULL;
                          delete q;
                   }
                      void Linkedlist::display()
                      {
              struct node *q;
              q=p;
                          cout<<"The elements on linkedlist are:\n";
              while (q!=NULL)
              {
                    cout<<"Data="<<q->data<<"   "<<endl;
                    q=q->next;
              }
                      }




  int main()
{
    Linkedlist sll;
    int num;
    char ch;
    do{
        int a;
        cout<<"Choose \n1.Append\n"<<"2.Addbeg\n"<<"3.Addanyloc\n"<<"4.Delanyloc\n"<<"5.Delbeg\n"<<"6.Delend\n"<<"7.Display\n"<<endl;
        cout<<"Please enter your choice: ";
        cin>>a;
        switch(a)
        {
            case 1:
                cout<<"Enter an Integer Number= ";
                for(int i=0;i<=5;i++)
                {
                    cin>>num;
                    sll.append(num);
                }
                cout<<"Elements inserted successfully.\n";
                break;

            case 2:
                cout<<"Enter element to add at beginning=";
                for(int i=0;i<=5;i++) {
                    cin >> num;
                    sll.addbeg(num);
                }
                cout<<"Elements inserted successfully.\n";
                    break;


            case 3:
                int loc;
                cout<<"Enter the loc to add item="<<endl;
                cin>>  loc;
                cout<<"Enter the elements to be inserted=";
                        cin >> num;
                        sll.addanyloc(num, loc);
                cout<<"Elements inserted successfully.\n";
                        break;

            case 4:
                cout<<"Enter a position to delete=";
                    cin>>loc;
                    sll.delanyloc(loc);
                cout<<"Elements you selected is deleted  successfully.\n";
                    break;
            case 5:
                sll.delbeg();
                cout<<"The element at beginning is deleted successfully.\n";
                break;

            case 6:
                sll.delend();
                cout<<"The element at end is deleted  successfully.\n";
                break;
            case 7:
                sll.display();
                break;
            default :
                cout<<"An Invalid Choice!!!\n";
        }
        cout<<"Press Y to continue== ";
        cin>>ch;
    }while(ch=='Y'||ch=='y');
    return 0;
}



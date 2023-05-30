/********************************
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

********************************/

// Node* sortList(Node *head)
// {
//     // Write your code here.
//     int zeroc = 0;
//     int onec = 0;
//     int twoc = 0;
//     Node* temp = head;

//     while(temp!=NULL)
//     {
//         if(temp->data == 0)
//         {
//             zeroc++;
           
//         }
//         else if(temp->data == 1)
//         {
//             onec++;
          
//         }
//         else if(temp->data = 2)
//         {
//             twoc++;
          
//         }
//           temp = temp->next;
//     }
//     temp = head;
//     while(temp!=NULL)
//     {
//         if(zeroc!=0)
//         {
//             temp->data = 0;
//             zeroc--;
//         }
//         else if(onec!=0)
//         {
//             temp->data = 1;
//             onec--;
//         }
//         else if(twoc!=0)
//         {
//             temp->data = 2;
//             twoc--;
//         }
//           temp = temp->next;
//     }
// return head;

// }

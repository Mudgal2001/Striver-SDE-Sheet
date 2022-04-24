#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
  ListNode* takeinput(int n){
  	
  	ListNode*head=new ListNode(0);
  	ListNode*t=head;
  	for(int i=0;i<n;i++){
  		int x;cin>>x;
  	ListNode*tmp=new ListNode(x);
    t->next=tmp;
    t=tmp;
   }
  	return head->next;
  }
   void printList(ListNode*head)  {
 	ListNode*tmp=head;
 	while(tmp!=NULL){
 		cout<<tmp->val<<" ";
 		tmp=tmp->next;
 	}
 	cout<<endl;
 }
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
             int c = 0;
    ListNode newHead(0);
    ListNode *t = &newHead;
    while(c || l1 || l2) {
        c += (l1? l1->val : 0) + (l2? l2->val : 0);
        t->next = new ListNode(c%10);
        t = t->next;
        c /= 10;
        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
    }
    return newHead.next;
     }
     
    int mian(){
      int n1,n2;
      ListNode*l1=takeinput(n1);
      ListNode*l2=takeinput(n2);
     listNode*ans=addTwoNumbers(l1,l2);
     printList(ans);
    }
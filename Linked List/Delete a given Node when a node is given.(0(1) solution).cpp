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
   void deleteNode(ListNode* node) {
      
        node->val=node->next->val;
        node->next=node->next->next;
        
    }
 int main(){
  int n;cin>>n;
  ListNode*head=takeinput(n);
  deleteNodr(head->next);
  printList(head);
 }
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
   ListNode* middleNode(ListNode* head) {
        ListNode*p1=head;
        int l=0;
        while(p1){
         l++;
            p1=p1->next;
        }
        ListNode*fast=head->next;
        ListNode*slow=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        if(l&1){ 
        return slow;}else{
            return slow->next;
        }
    }
    
    
  int main(){
    int n;cin>>n;
    ListNode*head=takeinput(n);
    ListNode*mid=middleNode(head);
    cout<<mid->val;
  }
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
 ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)return list2;
        else if(list2==NULL)return list1;
        ListNode*head=NULL;
        ListNode*tail=NULL;
        ListNode*temp1=list1;ListNode*temp2=list2;
        while(temp1 && temp2){
            if(temp1->val>temp2->val){
                if(!head){
                    head=temp2;
                    tail=temp2;
                }else{
                    tail->next=temp2;
                    tail=temp2;
                }
                temp2=temp2->next;
            }else{
                if(!head){
                    head=temp1;
                    tail=temp1;
                }else{
                    tail->next=temp1;
                    tail=temp1;
                }
                temp1=temp1->next;
            }
        }
        if(temp1){if(tail)tail->next=temp1;
                  else tail=temp1;
                 }
        if(temp2){if(tail)tail->next=temp2;
                  else tail=temp2;
                 }
                 return head;
            }
 int main(){
  int n,m;
  cin>>n>>m;
  ListNode*List1=takeinput(n);
  ListNode*List2=takeinput(m);
  ListNode*ans= mergeTwoLists(List1,List2);
  printList(ans);            
 }
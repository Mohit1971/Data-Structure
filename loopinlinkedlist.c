// to check in ll whether there is loop or not .............................
struct node* s,f;

 s=head;
 f=head;

while(s && f && f->next)
{
	s=s->next;
	f=f->next->next;
	
	if(s==f)
	printf("loop");
	
	else
	printf("No");	
	
}

int  fun( char  *t )
{
	int flag=1,len,i=1;
	char pre,now;
	len=strlen(t);
	if(len<2){return 0;}
	pre = t[0];
	while(t[i]!='\0'){
		now = t[i];
		if(pre != now-1) {return 0;}
		pre = now;
		i++;
		
	}
	return flag;
}
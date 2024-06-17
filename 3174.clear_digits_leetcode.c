char* clearDigits(char* s) {
    char  *c,*sCopia;
int i,j,tam;
i=0;
for(i=0;s[i];i++);
tam=i;
sCopia=(char*)calloc(tam+1,sizeof(char));
tam++;
for(i=0;i<tam;i++){
	sCopia[i]=s[i];
}

for(i=0;i<tam;i++){
	if(isdigit(sCopia[i])){
		for(j=i;j>=0;j--){
			if(isalpha(sCopia[j])){
				sCopia[j]=' ';
			break;	
			}
		}
		sCopia[i]=' ';
	}
}
j=0;
for(i=0;i<tam;i++){
	if(sCopia[i]!=' '){
      j++;
	}
}
c=(char*)calloc(j++,sizeof(char));
j=0;
for(i=0;i<tam;i++){
	if(sCopia[i]!=' '){
		c[j]=sCopia[i];
		printf("%c",c[j]);
		j++;
	}
}
free(sCopia);
return(c);
free(c);

}

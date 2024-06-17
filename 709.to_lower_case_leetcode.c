char* toLowerCase(char* s) {
  int i, j;
  char  ab[]={"abcdefghijklmnopqrstuvwxyz"}, AB[]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  
  for(i=0;s[i];i++){
    for(j=0;ab[j];j++){
        if(s[i]==ab[j]){
            s[i]=ab[j];
        }
    }
    for(j=0;AB[j];j++){
      if(s[i]==AB[j]){
        s[i]=ab[j];
      }
    }
  }
  return s;
}

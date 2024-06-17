char findTheDifference(char* s, char* t) {
    int laco,cont, sa=0,sb=0,sc=0,sd=0,se=0,sf=0,sg=0,sh=0,si=0,sj=0,sk=0,sl=0,sm=0,sn=0,so=0,sp=0,sq=0,sr=0,ss=0,st=0,su=0,sv=0,sw=0,sx=0,sy=0,sz=0,
    ta=0,tb=0,tc=0,td=0,te=0,tf=0,tg=0,th=0,ti=0,tj=0,tk=0,tl=0,tm=0,tn=0,to=0,tp=0,tq=0,tr=0,ts=0,tt=0,tu=0,tv=0,tw=0,tx=0,ty=0,tz=0;
    char diferente;
cont=0;
 for(laco=0;s[laco];laco++)
    cont++;
 for(laco=0;laco<cont;laco++){
    switch(s[laco]){
        case 'a':{sa++;}break;
        case 'b':{sb++;}break;
        case 'c':{sc++;}break;
        case 'd':{sd++;}break;
        case 'e':{se++;}break;
        case 'f':{sf++;}break;
        case 'g':{sg++;}break;
        case 'h':{sh++;}break;
        case 'i':{si++;}break;
        case 'j':{sj++;}break;
        case 'k':{sk++;}break;
        case 'l':{sl++;}break;
        case 'm':{sm++;}break;
        case 'n':{sn++;}break;
        case 'o':{so++;}break;
        case 'p':{sp++;}break;
        case 'q':{sq++;}break;
        case 'r':{sr++;}break;
        case 's':{ss++;}break;
        case 't':{st++;}break;
        case 'u':{su++;}break;
        case 'v':{sv++;}break;
        case 'w':{sw++;}break;
        case 'x':{sx++;}break;
        case 'y':{sy++;}break;
        case 'z':{sz++;}break;
    }
 }

cont=0;
    for(laco=0;t[laco];laco++)
    cont++;
 for(laco=0;laco<cont;laco++){
    switch(t[laco]){
        case 'a':{ta++;}break;
        case 'b':{tb++;}break;
        case 'c':{tc++;}break;
        case 'd':{td++;}break;
        case 'e':{te++;}break;
        case 'f':{tf++;}break;
        case 'g':{tg++;}break;
        case 'h':{th++;}break;
        case 'i':{ti++;}break;
        case 'j':{tj++;}break;
        case 'k':{tk++;}break;
        case 'l':{tl++;}break;
        case 'm':{tm++;}break;
        case 'n':{tn++;}break;
        case 'o':{to++;}break;
        case 'p':{tp++;}break;
        case 'q':{tq++;}break;
        case 'r':{tr++;}break;
        case 's':{ts++;}break;
        case 't':{tt++;}break;
        case 'u':{tu++;}break;
        case 'v':{tv++;}break;
        case 'w':{tw++;}break;
        case 'x':{tx++;}break;
        case 'y':{ty++;}break;
        case 'z':{tz++;}break;
    }
 }
 if(ta>sa){diferente='a';}
  if(tb>sb){diferente='b';}
   if(tc>sc){diferente='c';}
    if(td>sd){diferente='d';}
     if(te>se){diferente='e';}
      if(tf>sf){diferente='f';}
       if(tg>sg){diferente='g';}
        if(th>sh){diferente='h';}
         if(ti>si){diferente='i';}
          if(tj>sj){diferente='j';}
           if(tk>sk){diferente='k';}
            if(tl>sl){diferente='l';}
             if(tm>sm){diferente='m';}
              if(tn>sn){diferente='n';}
               if(to>so){diferente='o';}
                if(tp>sp){diferente='p';}
                 if(tq>sq){diferente='q';}
                  if(tr>sr){diferente='r';}
                   if(ts>ss){diferente='s';}
                    if(tt>st){diferente='t';}
                     if(tu>su){diferente='u';}
                      if(tv>sv){diferente='v';}
                       if(tw>sw){diferente='w';}
                        if(tx>sx){diferente='x';}
                         if(ty>sy){diferente='y';}
                          if(tz>sz){diferente='z';}

    return (diferente);
}

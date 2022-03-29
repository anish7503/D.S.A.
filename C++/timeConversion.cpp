string timeConversion(string s) {
    string str(8,'0');
  
           if(s[8]=='A'){
               if(s[0]=='1' && s[1]=='2'){                
                   for(int i=2;i<8;i++){
                   str[i]=s[i];
                   }
               }
               else{
                  for(int i=0;i<8;i++){
                     str[i]=s[i];
                     }
               }
           }
  
           if(s[8]=='P'){
               if(s[0]=='1' && s[1]=='2'){
                   for(int i=0;i<8;i++){
                   str[i]=s[i];
                   }
               }
               else{
                   int temp=(int(s[0]-'0')*10)+int(s[1]-'0');  
                   temp+=12;
                   str[1]=char(temp%10+'0');
                   str[0]=char(temp/10+'0');
                   for(int i=2;i<8;i++){
                     str[i]=s[i];
                     }
               }
           }
           
           return str;
}

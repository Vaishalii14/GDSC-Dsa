int countWords(string s)
{   int words=0,state=0;
int length=s.size();
    for(int i=0;i<length;i++){
        if(s[i]==' '){
            state=0;
            }
        else if(s[i]=='\\'&& (s[i+1]=='n'||s[i+1]=='t')){
            state=0;
            i++;
            }

        else if (state==0){
            state=1;
            words++;
        }


    }
    return words;
}

    int nlength=nstr.length();
    rev_nstr.resize(nlength);
    for(int i=0;i<nlength;i++){
        rev_nstr[i]=nstr[(nlength-1)-i];
    }
    cout<<nstr<<endl;
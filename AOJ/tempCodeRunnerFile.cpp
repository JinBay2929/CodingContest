if(l[i]==1 && r[i]==n)continue;
    else if(l[i]==1){
      ll tmp=d[r[i]];
      d[r[i]]-=v[i];
      ans+=(d[r[i]]-tmp);
    }
    else if(r[i]==n){
      ll tmp=d[l[i]-1];
      d[l[i]-1]-=v[i];
      ans+=(d[l[i]-1]-tmp);
    }
    else{
      ll tmpl=d[l[i]-1], tmpr=d[r[i]];

      d[r[i]]-=v[i];
      ans+=(d[r[i]]-tmpr);

      d[l[i]-1]-=v[i];
      ans+=(d[l[i]-1]-tmpl);
    }
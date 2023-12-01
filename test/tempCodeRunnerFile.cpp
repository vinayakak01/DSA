int n;
    cout<<"enter n :";
    cin>>n;
    int i=0,gaps = n-1;
    while(i<n){
        int k=0,gaps=n-1-i;
        while(k<gaps){
            cout<<" ";
            k++;
        }
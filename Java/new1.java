 class new1 {
    public static void main(String[] args) {
        int n[]={0,1,2,2,1,0,2,0},j=0,k=0,l=0;
        for(int i=0;i<n.length;i++)
        {
            if(n[i]==0)
            j+=1;
            if(n[i]==1)
            k+=1;
            if(n[i]==2)
            l+=1;
        }
        System.out.print(j);
        for(int i=0;i<j;i++)
        {
            n[i]=0;
      System.out.println(n[i]);
        
    }}
}


class exam {
    public void st(String[] args) {
        String s="KoLKATa";
  int j=0,k;
     for (int i =  0; i <s.length() ; i++)
      {  
        char c=s.charAt(i);

       if(Character.isUpperCase(c))
       j+=1;
     } 
     System.out.println(" THe no of capital is"+j);
    }
}
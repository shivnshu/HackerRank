class Add{
    
    protected void add(int... args){
        int sum=0;
        String s= "";
        for(int i:args){
            sum += i;
            s += i+"+";
        }
        String out = s.substring(0, s.length()-1) + "="+ sum;
        System.out.println(out);
    }
    
   
    
}

public static boolean flag = true;
public static Scanner scan = new Scanner(System.in);
public static int B = scan.nextInt();
public static int H = scan.nextInt();

static{
    try{
        if(B<=0 || H<=0){
            flag = false;
            throw new Exception("Breadth and height must be positive");
        }
        
    }catch(Exception e){
        System.out.println(e);
    }
    
    
    
}

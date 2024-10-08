public class multiple {

    public static int multi(int n){
        int sum = 0;
        //int i = 0;
        for(int i = 0; i < n; i++){
            if( i%3 == 0 || i%5 == 0){
                sum = sum + i;
            }
            //return sum;
        }
        return sum;
    }

    public static void main(String[] args){
        int n = 1000;
        System.out.println("the sum is:--->" + multi(n));
    }
}

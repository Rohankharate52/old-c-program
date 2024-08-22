

  public class Arrary_qun_no1 {
    static void Arrary_qun_no1(int a[]){
        int start = 0, end = 5;
        int 0;
        while(start<end){
            int  e=a [start];
            a[start] = a[end];
            a[end] =0;
            start++;
            end--;


        }
        for (int i=0; i<a.length;i++){
            System.out.println(a[i]+ "  ");

        }

        
    }
    public static void main(String [] args){

        int [] a new int [] {23,74,18,41,22,20};

        Arrary_qun_no1(a);

    }

}
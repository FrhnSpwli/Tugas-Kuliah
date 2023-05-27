public class Average {
    public static void main(String[] args) {
        System.out.println("Hello World!");
        int avg = avg(3, 4, 5);
        System.out.println("3, 4, 5");
        System.out.println("Rata-rata : "+avg);
        System.out.println("Nilai tertinggi : "+tertinggi(3,4,5));
        
    }

    public static int avg(int ... nums){
        int sum = 0;
        for(int i = 0; i < nums.length; i++){
            sum += nums[i];
        }
        return sum/nums.length;
    }    

    public static int tertinggi(int ... nums){
        int max = 0;
        for(int i = 0; i < nums.length; i++){
            if(nums[i] > max){
                max = nums[i];
            }
        }
        return max;
    }
}

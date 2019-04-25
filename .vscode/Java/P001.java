public class P001 {
    /**
     * @param args
     */
    public static void main(String[] args) {
        int i = 1;
        int num = 0;
        while (i < 101) {
            num = num + i;
            i++;
        }
        System.out.println(num);
    }
}
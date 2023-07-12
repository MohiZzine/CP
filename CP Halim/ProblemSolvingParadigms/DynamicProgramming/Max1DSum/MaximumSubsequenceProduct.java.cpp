//
// Created by Student on 12/07/2023.
//

import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Scanner;

class Main {
public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> nums = new ArrayList<Integer>(); //creating a list
        while(sc.hasNext()) {//while End of File isn't encountered
            int cur = sc.nextInt();
            if(cur == -999999) {
                BigInteger max = BigInteger.valueOf(cur);
                //big min value -999999 value initially

                BigInteger prod = BigInteger.valueOf(1);
                //initial value

                for(int i = 0; i < nums.size(); i++) {
                    prod = BigInteger.valueOf(1);
                    for(int j = i; j < nums.size(); j++) {
                        prod = prod.multiply(BigInteger.valueOf(nums.get(j)));
                        if(prod.compareTo(max) == 1)
                            max = prod;
                    }
                }
                System.out.println(max.toString());
                nums.clear();
                continue;
            }
            nums.add(cur);
        }
    }
}
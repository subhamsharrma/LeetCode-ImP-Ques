class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> sdfdsfdsf = new PriorityQueue<>((a,b)->b-a);
        for(int index=0;index<stones.length;index++){
            sdfdsfdsf.add(stones[index]);
        }
        while(sdfdsfdsf.size()>1){

            int a = sdfdsfdsf.poll();
            int b = sdfdsfdsf.poll();

            int c = a-b;
            if(c!=0)
                sdfdsfdsf.add(c);
        } 
        if(sdfdsfdsf.size()!=0) 
            return sdfdsfdsf.poll();
        return 0;

    }
}
class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> adasdsd = new PriorityQueue<>((a,b)->b-a);
        for(int index=0;index<stones.length;index++){
            adasdsd.add(stones[index]);
        }
        while(adasdsd.size()>1){

            int a = adasdsd.poll();
            int b = adasdsd.poll();

            int c = a-b;
            if(c!=0)
                adasdsd.add(c);
        } 
        if(adasdsd.size()!=0) 
            return adasdsd.poll();
        return 0;

    }
}
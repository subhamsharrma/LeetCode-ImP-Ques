class Solution {
    public int lastStoneWeight(int[] stones) {
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>((a,b)->b-a);
        for(int index=0;index<stones.length;index++){
            maxHeap.add(stones[index]);
        }
        while(maxHeap.size()>1){

            int a = maxHeap.poll();
            int b = maxHeap.poll();

            int c = a-b;
            if(c!=0)
                maxHeap.add(c);
        } 
        if(maxHeap.size()!=0) 
            return maxHeap.poll();
        return 0;

    }
}
// this is just the activity selection problem
class Solution {
    public int findMinArrowShots(int[][] points) {
        int maxLen = 0, maxIdx = 0, arrowCount = 1;
        Arrays.sort(points, new Comparator<int[]>() {
         public int compare(int[] a, int[] b) {
             
             return Integer.compare(a[1], b[1]);
         }   
        });
        
        int k = 0;
        for (int i = 1; i < points.length; i++) {
           if (points[i][0] > points[k][1]) {
               arrowCount++;
               k = i;
           }
        }
        return arrowCount; 
    }
}

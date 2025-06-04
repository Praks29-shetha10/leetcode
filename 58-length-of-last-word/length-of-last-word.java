class Solution {
    public int lengthOfLastWord(String s) {
         s=s.trim();
        int index_of_space=s.lastIndexOf(' ');
        return s.length()-1-index_of_space;
 
    }
}
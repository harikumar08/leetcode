class Solution {
    public List<String> stringMatching(String[] words) {
        int n = words.length;
        List<String> ans = new ArrayList<>();
        for(int i = 0;i<words.length;i++){
            for(int j = 0;j<words.length;j++){
                if(i!=j){
                    if(words[i].length()>words[j].length()) continue;
                    if(words[j].contains(words[i])){
                        ans.add(words[i]);
                        break;
                    }
                }
            }
        }
        return ans;
    }
}
class Solution:
    def uncommonFromSentences(self, s1: str, s2: str) -> List[str]:
        return[w for w, f in Counter((s1+' '+s2).split()).items() if f<2]
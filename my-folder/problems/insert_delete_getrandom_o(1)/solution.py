import random as r
class RandomizedSet:

    def __init__(self):
        self.rset = {}

    def insert(self, val: int) -> bool:
        if not self.rset.get(val):
            self.rset[val] =True
            return True
        return False

    def remove(self, val: int) -> bool:
        if self.rset.get(val):
            del(self.rset[val])
            return True
        return False

    def getRandom(self) -> int:
        t = list(self.rset.keys())
        random_index = random.randint(0, len(t) - 1)
        return t[random_index]


# Your RandomizedSet object will be instantiated and called as such:
# obj = RandomizedSet()
# param_1 = obj.insert(val)
# param_2 = obj.remove(val)
# param_3 = obj.getRandom()
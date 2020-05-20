

# Write your code here
def cyclicShift(value, shift, side):
	# In value<<shift, last shift bits are 0. 
	# To put first shift bits of value at  
	# last, do bitwise or of value<<shift 
	# with value >>(16 - shift) 
    if side is "L":
        a = (value << shift) & 0xffff
        b = (value >> (16-shift)) & 0xffff
        # print("{0:b}".format(value))
        # print("{0:b}".format(a))
        # print("{0:b}".format(b))
        return  a | b 
    else:
        a = (value>>shift) & 0xffff
        b = (value<<(16-shift)) & 0xffff
        return a | b 



t = int(input())
for i in range(t):
    n,d,s = input().split() 
    print(cyclicShift(int(n),int(d),s))
    
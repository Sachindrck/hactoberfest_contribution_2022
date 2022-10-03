#1st
def gcd_hcf(n1,n2):
    if n2>n1:
        pass
    else:
        x=min(n1,n2)
        y=max(n1,n2)
        n1=x
        n2=y
    while (n2%n1) !=0: 
        x=n2%n1
        n2=n1
        n1=x
    print(n1)

gcd_hcf(30,25)

 #2nd 
def GCd(n1,n2):
    if n2==0:
        return n1
    else:
        return GCd(n2,n1%n2)  
print(GCd(4,6))

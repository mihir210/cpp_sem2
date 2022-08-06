#cook your dish here
for i in range(int(input())):
    N,M=map(int, input ().split())
    arr=list(map(int, input().split()))
    arr.sort()
    diffarr=[]
    res=-float("inf")
    for i in range(N):
         diffarr.append((arr[i]-arr[N-1])%M)
    for i in range(N):
         res=max(res,diffarr[i]+arr[i]+arr[N-1])
    print(res)
t=int(input())
for i in range(1,t+1):
    n,k=map(int,input().split())
    if(n==2):
        if(k==2):
            print("Case #",end="")
            print(i,end="")
            print(": ",end="")
            print("POSSIBLE")
            ans=[[1,2],[2,1]]
            for x in ans:
                print(*x)
        elif(k==3):
            print("Case #",end="")
            print(i,end="")
            print(": ",end="")
            print("IMPOSSIBLE")
        elif(k==4):
            print("Case #",end="")
            print(i,end="")
            print(": ",end="")
            print("POSSIBLE")
            ans=[[2,1],[1,2]]
            for x in ans:
                print(*x)
    elif(n==3):
        if(k==4 or k==5 or k==7 or k==8):
            print("Case #",end="")
            print(i,end="")
            print(": ",end="")
            print("IMPOSSIBLE")
        elif(k==3 or k==6 or k==9):
            a=1
            b=2
            c=3
            if(k==6):
                a=2
                b=1
                c=3
            if(k==9):
                a=3
                b=2
                c=1
            ans=[[a,b,c],[c,a,b],[b,c,a]]
            print("Case #",end="")
            print(i,end="")
            print(": ",end="")
            print("POSSIBLE")
            for x in ans:
                print(*x)
    elif(n==4):
        if(k==5 or k==15):
            print("Case #",end="")
            print(i,end="")
            print(": ",end="")
            print("IMPOSSIBLE")
        else:
            if(k==4 or k==8 or k==12 or k==16):
                a=1
                b=2
                c=3
                d=4
                if(k==8):
                    a=2
                    b=1
                    c=3
                    d=4
                if(k==12):
                    a=3
                    b=2
                    c=1
                    d=4
                if(k==16):
                    a=4
                    b=2
                    c=3
                    d=1
                ans=[[a,b,c,d],[d,a,b,c],[c,d,a,b],[b,c,d,a]]
                print("Case #",end="")
                print(i,end="")
                print(": ",end="")
                print("POSSIBLE")
                for x in ans:
                    print(*x)
            elif(k==6 or k==10 or k==14):
                if(k==6):
                    a=1
                    b=2
                    c=3
                    d=4
                if(k==10):
                    a=1
                    b=4
                    c=3
                    d=2
                if(k==14):
                    a=3
                    b=4
                    c=1
                    d=2
                ans=[[a,b,d,c],[b,a,c,d],[d,c,b,a],[c,d,a,b]]
                print("Case #",end="")
                print(i,end="")
                print(": ",end="")
                print("POSSIBLE")
                for x in ans:
                    print(*x)
            elif(k==7 or k==9 or k==11 or k==13):
                a=1
                b=2
                c=3
                d=4
                if(k==9):
                    a,c=c,a
                if(k==11):
                    a,d=d,a
                    c,d=d,c
                if(k==13):
                    a,d=d,a
                ans=[[a,b,c,d],[c,a,d,b],[d,c,b,a],[b,d,a,c]]
                print("Case #",end="")
                print(i,end="")
                print(": ",end="")
                print("POSSIBLE")
                for x in ans:
                    print(*x)
    else:
        if(k==5 or k==10 or k==15 or k==20 or k==25):
            a=1
            b=2
            c=3
            d=4
            e=5
            if(k==10):
                a,b=b,a
            elif(k==15):
                a,c=c,a
            elif(k==20):
                a,d=d,a
            elif(k==25):
                a,e=e,a
            ans=[[a,b,c,d,e],[e,a,b,c,d],[d,e,a,b,c],[c,d,e,a,b],[b,c,d,e,a]]
            print("Case #",end="")
            print(i,end="")
            print(": ",end="")
            print("POSSIBLE")
            for x in ans:
                print(*x)
        elif(k==6 or k==24):
                print("Case #",end="")
                print(i,end="")
                print(": ",end="")
                print("IMPOSSIBLE")
        else:
            a=1
            b=2
            c=3
            d=4
            e=5
            if(k==8):
                a,b=b,a
            elif(k==9):
                b,c=c,b
            elif(k==11):
                a,c=c,a
                b,c=c,b
            elif(k==12):
                a,b=b,a
                b,c=c,b
            elif(k==13):
                a,c=c,a
            elif(k==14):
                a,d=d,a
                b,d=d,b
            elif(k==16):
                a,d=d,a
            elif(k==17):
                a,c=c,a
                b,d=d,b
            elif(k==18):
                a,d=d,a
                b,c=c,b
            elif(k==19):
                a,e=e,a
            elif(k==21):
                a,e=e,a
                b,c=c,b
            elif(k==22):
                a,d=d,a
                b,e=e,b
            elif(k==23):
                a,e=e,a
                b,d=d,b
            ans=[[a,b,c,d,e],[e,a,b,c,d],[b,d,a,e,c],[d,c,e,b,a],[c,e,d,a,b]]
            print("Case #",end="")
            print(i,end="")
            print(": ",end="")
            print("POSSIBLE")
            for x in ans:
                print(*x)
    t-=1

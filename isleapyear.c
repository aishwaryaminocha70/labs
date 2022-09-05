def is_leap(year):
    leap = False
    # this line asks if it is divisible by 400, 4, and 100 at the same time
    if year%4==0 and (year%100==0) and year%400==0:
        leap=True
    # this line asks if its not divisible by 400, 4 and 100 at the same time
    elif not(year%4==0) and not(year%100==0) and not(year%400==0):
        leap=False
    
    # you never check the case when it is divisible by 4 and not 
    # divisible by 100, and 400.  Also skipped is if it is divisible by 
    # 4 and 100, but not 400
    else:
        leap=False
        
    return leap

year = int(input())

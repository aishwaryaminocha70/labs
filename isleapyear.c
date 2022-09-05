def is_leap(year):
    leap = False

    # The year can be evenly divided by 4, is a leap year
    if year%4 == 0:
        leap = True

    # Unless the year can be evenly divided by 100
    if year%4 == 0 and year%100 == 0:
        leap = False

    # Unless the year is also evenly divisible by 400
    if year%4 == 0 and year%100 == 0 and year%400 == 0:
        leap True

    return leap

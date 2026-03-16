import os
from datetime import datetime,timedelta

for i in range(1,365,1):

    today = datetime.now() + timedelta(days = i)

    curyear = today.year
    curmonth = today.month
    curday = today.day

    tomorrow = datetime.now() + timedelta(days= (i + 1))
    
    nextyear = tomorrow.year
    nextmonth = tomorrow.month
    nextday = tomorrow.day

    yesterday = datetime.now() + timedelta(days=(i-1))

    lastyear = yesterday.year
    lastmonth = yesterday.month
    lastday = yesterday.day
    
    today_filename = f"{curyear}-{curmonth}-{curday}.md"
    tomorrow_filename = f"{nextyear}-{nextmonth}-{nextday}"
    yesterday_filename = f"{lastyear}-{lastmonth}-{lastday}"

    file = open(today_filename, 'w') 
    file.write("#scriptmade \n")
    teststring = f"Yesterday:[[{yesterday_filename}]]\nTomorrow:[[{tomorrow_filename}]]"
    file.write(teststring)

    print(today_filename)

    today = today + timedelta(days=i)






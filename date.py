import datetime
usr=input("Enter date[year,month,day]")
usr=usr.split(",")
# print(type(usr))
# print(usr)
date=datetime.datetime(int(usr[0]),int(usr[1]),int(usr[2]))
# print(date)
# date+=datetime.timedelta(days=2)
# print(date)

def todays_slot(date):
    start=datetime.datetime(2021,4,28)
    target=0
    if(start==date):
        print("Today's slot is for A")
        return
    A=B=C=0
    if(start > date):
        print("Not found")
    while(start <= date):
        start+=datetime.timedelta(days=1)
        A+=1
        target=1
        if(A>6):
            B+=1
            target=2
            if(B>3):
                C+=1
                target=3
                if(C>3):
                    target=0
                    A=B=C=0
    if(target==1):
        print("Slot is for A")
    elif(target==2):
        print("Slot is for B")
    elif(target==3):
        print("Slot is for C")
    elif(target==0):
        print("Something Wrong....")
    

todays_slot(date) 
# if(date>datetime.datetime(2022,4,1)):
#     print("True") 

        
        
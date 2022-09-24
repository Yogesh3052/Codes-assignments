studentmarks=[]
def getNoStudent():
    print("enter the numberof students")
    nstud=int(input())
    for i in range(nstud):
        print("enter marks of student")
        marks=int(input())
        studentmarks.append(marks)
        print(marks)

def averege():
    sum=0
    num=0
    for i in range(len(studentmarks)):
        if studentmarks[i] !=-22:
            sum=sum+studentmarks[i]
            num+=1
        print("total marks",sum)
        average=sum/num
        print(average) 
        print("Highhest marks" ,max(studentmarks))
        print("minimum marks",min(student))
def absentStudent():
    absent=0
    for i in range(len(studentmarks)):
        if i==-22:
            absent=absent+1
getNoStudent()
averege()

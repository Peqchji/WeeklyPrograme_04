import os


def main():
    check = True
    os.remove("c:/temp/data.txt") #ลบก่อนสร้างใหม่ไว้รันทดสอบ
    os.rmdir("c:/temp")
    os.mkdir("c:/temp")
    file = open("c:/temp/data.txt", "a+")
    print("Input data string :")
    while(True):
        string = str(input())
        if('.' in string):
            check = False
        file.write(f"{string}\n")
        if(not check):
            break
    file.close()

main() #call function main
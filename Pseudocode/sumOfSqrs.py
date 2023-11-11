nums = [2,3,5,7,10]
sum = 0

for i in range(len(nums)):
    sqrt = nums[i] * nums[i]
    sum += sqrt
print(sum)


nums = []
sumOfSqrs = 0
n = int(input("Enter the number of elements in list: "))

for i in range(0,n):
    element = int(input("Enter element " + str(i+1) + ": "))
    nums.append(element)
print(nums)
sumOfSqrs += sum(nums[i] ** 2 for i in range(0,len(nums)))
print(sumOfSqrs)



def process_stack_operations(n, a, b, c, x0):
    stack = []
    min_stack = []
    result_sum = 0
    
    xi = x0
    for _ in range(n):
        xi = (a * xi * xi + b * xi + c) // 100 % 1000000
        
        if xi % 5 < 2:
            if stack:
                removed_value = stack.pop()
                if min_stack and min_stack[-1] == removed_value:
                    min_stack.pop()
        else:
            stack.append(xi)
            if not min_stack or xi <= min_stack[-1]:
                min_stack.append(xi)
        
        if min_stack:
            result_sum += min_stack[-1]
    
    return result_sum


data = input().split()
    
n = int(data[0])
a = int(data[1])
b = int(data[2])
c = int(data[3])
x0 = int(data[4])
    
result = process_stack_operations(n, a, b, c, x0)
print(result)
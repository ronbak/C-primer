### 练习5.1
- 空语句就是只有一个分号的语句。
- 语法上需要一条语句但是在逻辑上不需要

### 练习5.2
- 复合语句（块）：用花括号括起来（可能为空）语句和声明的序列
- 语法上需要一条语句，而逻辑上需要多条语句

### 练习5.3
```javascript?linenums
#include <iostream>

int main()
{
	int sum  = , val = 1;
    while (val <= 10)
    	sum += val, ++val;
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;   
}
```
- 不再是一个块，而且降低可读性。

### 练习5.4
- 修改1
```javascript?linenums
std::string::iterator iter = s.begin();
while (iter != s.end())
{
	;/* ... */
}
```
- 修改2
```javascript?linenums
while （bool status = find(word)）
{
	if(!status)
    {
    	;/* ... */
    }
}
```
### 练习5.5

### 练习5.6

### 练习5.7
- 修改1
``` javascript?linenums
if (ival1 != ival2)
{
	ival1 = ival2;
}
else
{
	ival1 = ival2 = 0;
}
```
- 修改2
``` javascript?linenums
if (ival < minval)
{
	minval = ival;
    occurs = 1;
}
```
- 修改3
``` javascript?linenums
if  (0 != (int ival = get_value())
{
	cout << "ival = " << ival << endl;
}
else
{
	cout << "ival = 0\n";
}
```
- 修改4
``` javascript?linenums
if(0 == ival)
{
	ival = get_value();
}
```

### 练习5.8
- 有很多if 与 else 嵌套在另一个 if 与 else 中
- 规定else与离他最近的尚未匹配的if匹配

### 练习5.9

### 练习5.10

### 练习5.11

### 练习5.12

### 练习5.13
- 修改1  
> switch语句中 case分支在结束时没有添加break，会造成程序结果的不正确。

- 修改2
> switch语句中 一个case分支定义了一个变量，而在另一个分支中使用该变量，这样做是非法的！
> 所以应该将变量的定义放到switch语句外面！

- 修改3
> switch 标签中case分支表达不对，应该将逗号运算符的部分用case语句重新写

- 修改4
> **case 标签必须是整型常量表达式！！**

### 练习5.14

### 练习5.15
- 修改1
```javascript?linenums
for (int ix  = 0; ix != sz; ++ix)
{
	
}
```

- 修改2
```javascript?linenums
int ix;
for (; ix != sz; ++ix)
{
	
}
```

- 修改3
```javascript?linenums
for (int ix = 0; ix != sz; ++ix)
{
	
}
```

### 练习5.16

### 练习5.17

### 练习5.18
- 修改1
```javascript?linenums
do
{
	int v1, v2;
    cout << "Please enter two numbers to sum: " ;
    if(cin >> v1 >>  v2)
    	cout << "Sum is: " << v1 + v2 << endl;
}while(cin);
```

- 修改2
```javascript?linenums
int ival;
do
{
}while(ival = get_response());
```

- 修改3
```javascript?linenums
int ival = get_response();
do
{
	ival = get_response();
}while(ival);
```

### 练习5.19

### 练习5.20

### 练习5.21

### 练习5.22

### 练习5.23

### 练习5.24

### 练习5.25
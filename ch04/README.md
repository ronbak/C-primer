---
title: C++primer 第四章课后练习
tags: C++ , 课后练习, 答案
grammar_cjkRuby: true
---

### 练习4.1
	答案：55，先乘除后加减
    
### 练习4.2
	(a).	*(vec.begin())
    (b).	(*(vec.begin())) + 1
    
### 练习4.3


### 练习4.4


### 练习4.5
	(a). 	-86
    (b).	-18
    (c).	0
    (d).	-2
    
 ### 练习4.6
``` javascript?linenums
int num  = 0;
std::cout << ((num % 2) == 0 ? "偶数" : "奇数") << std::endl;
```
### 练习4.7
-当变量现在的类型不能储存现在的值，而导致数据错误。

```javascript?linenums

```
### 练习4.8
逻辑与 &&  :	先求值左值，若左值为真则继续求右值；
逻辑或 ||     :   会对左右值都进行求算；
相等性 ==   :   会对左右值都进行求算。

### 练习4.9
```java?linenums
const char *cp = "Hello, World";
if(cp && *cp)
```
**判断过程：**
cp中存储的第一个字符的地址 与 *cp中第一个字符即 “H” 进行 逻辑与运算

*运算结果：真*


### 练习 4.10

```javascript?linenums
int num = 0;
while( (std::cin >> num) != 42 )
{

}
```
### 练习4.11
```javascript?linenums
std::cout << ( a > b && b > c && c > d ? "True" : "False") << std::endl;
```

### 练习4.12
由于 != 的优先级**小于** < 的优先级，所以j\<k的bool值与i进行不等于的比较计算

### 练习4.13

(a).	d = 3; i = 3;
(b).	d = 3.5; i = 3;

### 练习4.14

第一种不合法，将一个变量的值付给一个字面值（常量）
第二种赋值运算始终为真


### 练习4.15

**不合法原因：** 将指针p内存储的地址改为0，会造成不可想象的后果
**修改**
```javascript?linenums
*pi = ival = dval = 0;
```

### 练习4.16
(a).	!= 的优先级高于 =  			     
*修改* 
```javascript?linenums
if((p = getPtr()) != 0)
```
(b).	对i进行赋值运算所得到的bool值为真
*修改* 
```javascript?linenums
if(i == 1024)
```

### 练习4.17
前置递增运算符是 先对变量进行加一运算，再使用该变量；
后置递增运算符是 先使用该变量后对该变量进行加一。

### 练习4.18








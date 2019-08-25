---
layout: post
title:  "maximumNumber"
categories: [math, number-theory, greedy]
code: 29051
src: [cpp]
difficulty: medium
ads_more: 3
---

Nhắc lai phép `XOR` (thường được ký hiệu là `|`, hay ký hiệu `^` trong C++)

```js
0 | 1 = 1
1 | 0 = 1

0 | 0 = 0
1 | 1 = 0

x | x = 0
x | 0 = x
```

Chuyển `a` và `b` thành chuỗi nhị phân, từ đó tham lam trên từng bit để được giá trị lớn nhất có thể.

## Trường hợp chuỗi bit của `b` dài hơn `a`

Xét trường hợp `b` đủ lớn, lớn hơn `a`, tức số bit dạng nhị phân của `b` nhiều hơn của `a`, ví dụ:

```js
b = 11001 110111
a =       100010
```

Chọn số `a <= x <= y <= b`, khi đó tham lam để `x | y` max như sau:
+ `y` giữ nguyên tất cả các bit đầu của `b`, các bit còn lại thành `0` để đảm bảo `y <= b`:

```js
b = 11001 110111
y = 11001 000000
```

+ `x` chuyển thành tất cả bit `1` từ `a`, đảm bảo `x >= a` và phần này xor với phần 000.. của `y` được max:

```js
b = 11001 110111
y = 11001 000000
a =       100010
x =       111111
==============
y = 11001 000000
x =       111111
| = 11001 111111
```

Tuy nhiên nhận thấy bit `0` của `y` có thể được `x` đấp bằng `1`, do đó chọn `x` như sau:

```js
b = 11001 110111
y = 11001 000000
a =       100010
x =   110 111111
==============
y = 11001 000000
x =       111111
| = 11111 111111
```

Do đó nhận thấy luôn tồn tại cách chọn `x`, `y` để được kết quả toàn bit `1`. Với trường hợp này (số bit của `b` nhiều hơn `a`), kết quả là chuỗi bit dài `size( b )`.


## Trường hợp chuỗi bit của `b` dài bằng `a`

Ví dụ:

```js
a = 1111 000110
b = 1111 110011
```

Rõ ràng phần `1111` của `a` và `b` là vô dụng khi thực hiện `x | y` vì cả `x`, `y` đều **phải** chứa phần `1111`.

Phần còn lại của `a` và `b` như cách trên sẽ có cách đưa thành toàn bit `1`. Ví dụ như sau:

```js
a = 1111 000110
b = 1111 110011

x = 1111 001111
y = 1111 110000
```

Do đó kết quả là chuỗi bit `1` có chiều dài sau khi loại bỏ phần prefix `1` chung của 2 số `a` và `b`.

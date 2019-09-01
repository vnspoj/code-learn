---
layout: post
title:  "commonDivisor"
categories: [brute-force, string, number-theory]
code: 137576
src: [cpp]
difficulty: medium
contestId: 139256
taskId: 136853
order: B
noTrain: 1
---

Gọi 2 chuỗi đề cho là `a` và `b`. Không mất tổng quát, giả sử `len(a) > len(b)`.

Khi đó để tồn tại một đoạn chuỗi con chung `x(1..t)` để hình thành `a`, `b`, ta giả sử:

```js
a = xxxxxxxxxx
b = xxxx
```

Khi đó nếu có `x` như vậy thì `b` phải là prefix của `a`. Do đó skip phần prefix này, đưa `a`, `b` về:

```js
a = xxxxxxxxxx
b = xxxx
--------------
b = xxxx
a = xxxxxx  (bỏ phần prefix đi)
```

Lúc này tiếp tục check prefix như trên tiếp vì chiều dài 2 chuỗi vẫn chưa bằng nhau, thực hiện như vậy đến khi phần chung của 2 chuỗi cùng chiều dài.

```js
a = xxxxxxxxxx
b = xxxx
--------------
b = xxxx
a = xxxxxx  (bỏ phần prefix đi)
--------------
a = xx
b = xxxx
--------------
a = xx
b = xx
```

Khi 2 chuỗi có prefix như nhau và dài bằng nhau, đảm bảo rằng sẽ tồn tại chuỗi `x` để có ước chung như đề. Vấn đề là đếm số chuỗi con trong chuỗi `xx` tạo được, cụ thể ở đây là có 2 chuỗi `x` và `xx`.

Gỉả sử chuỗi sau cùng là `xxx...xx`, đếm xem có bao nhiêu chuỗi con lặp lại để được chuỗi này.

Khi đó xét các ước của chiều dài chuỗi này, vì điều kiện cần để có chuỗi con lặp lại một số lần để được `x` là số lần là ước số của chiều dài chuỗi. Xét các ước số và kiểm tra xem các chuỗi con chiều dài đó có giống nhau không. 

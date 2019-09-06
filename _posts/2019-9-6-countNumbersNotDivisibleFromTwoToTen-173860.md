---
layout: post
title:  "countNumbersNotDivisibleFromTwoToTen"
categories: [math, number-theory]
code: 173860
src: [cpp]
difficulty: easy
---

Bài này khá giống 1 bài mình đã ra :))

Ý tưởng khá đơn giản, trong các số từ 2 đến 10 thì chỉ có 4 số sau là quan trọng: `2 3 5 7`

4 số này đều là **số nguyên tố** và các số còn lại trong `2->10` đều được hình thành từ 4 số này:

```js
4 = 2^2
6 = 2*3
8 = 2^4
9 = 3^2
10 = 2*5
```

Do đó chỉ cần đếm các số chia hết cho 2 hoặc 3 hoặc 5 hoặc 7.

Dùng lý thuyết tập hợp cho 4 số, vì đều là số nguyên tố nên dễ dàng và không cần xét đến bội chung nhỏ nhất cho từng cặp.

+ A: Có `N/2` số chia hết cho `2`, `N/3` số chia hết cho `3`, ...
+ B: Có `N/(2*3)` số chia hết cho `2*3`, `N/(2*5)` số chia hết cho `2*5`, ...
+ C: Có `N/(2*3*5)` số chia hết cho `2*3*5`, ...
+ D: Có `N/(2*3*5*7)` số chia hết cho `2*3*5*7`

Số số chia hết cho hoặc 2, 3, 5, 7 là: `A-B+C-D`

Kết quả cần tìm là `N-(A-B+C-D)`

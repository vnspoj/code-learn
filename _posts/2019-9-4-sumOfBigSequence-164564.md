---
layout: post
title:  "sumOfBigSequence"
categories: [math, number-theory]
code: 164564
src: [cpp, py, java]
difficulty: hard
ads_more: 3
---

Bài này mình ra :))

Bài này phát triển từ bài [sumOfTheOddNumbers3](https://vnspoj.github.io/code-learn/?q=sumOfTheOddNumbers3). Các bạn nên tham khảo ý tưởng từ bài này trước.

Lấy ý tưởng từ bài `m = 2`. Nhận xét các số từ `1` đến `n^m` như sau:

```js
1           ->  m-1    |   m
m+1         ->  2m-1   |  2m
2m+1        ->  3m-1   |  3m
...
m^(n-1)+1   ->  m^n-1  |  m^n
```

Các số bên trái sẽ không bị thay đổi trong tổng sau cùng. Gọi tổng cần tìm là `f[n]` dễ thấy tổng bên phải sẽ bị lược bớt các ước `m`, nên thành:

```js
Phải = m * (1+2+...+m^(n-1)) ==> Hồi quy về f[n-1]
```

Do đó `f[n] = tổng trái + f[n-1]`

**Cách tính tổng trái**

Tổng trái bằng Tổng `m^n` số trừ đi phần bên phải. (các bạn viết ra giấy cho dễ nhìn, mình lười viết công thức toán quá)

```js
Trái = sum(1->m^n) - sum(m, 2m, ... m^n)
     = (m^n+1)*m^n/2 - m*sum(1->m^(n-1))
     = (m^n+1)*m^n/2 - m*[ m^(n-1) * (m^(n-1) + 1) /2 ]
     = (m^n+1)*m^n/2 - m^n * (m^(n-1) + 1) /2
     = (m^n) * (m^n - m^(n-1)) / 2
     = (m^(2n-1)) * (m-1) / 2
     = (m*(m-1)/2) * m^(2n-2)
     = (m*(m-1)/2) * (m^2)^(n-1)
```

Đến đây đã rút được phần chung ra và biểu diễn `n` dạng `p^(n-1)`

```js
f[n] = f[n-1] + (m*(m-1)/2) * (m^2)^(n-1)
     = f[n-2] + m*(m-1)/2 * [ (m^2)^(n-1) + (m^2)^(n-2) ]
     = f[n-3] + m*(m-1)/2 * [ (m^2)^(n-1) + (m^2)^(n-2) + (m^2)^(n-3) ]
     = ...
     = f[0]   + m*(m-1)/2 * [ (m^2)^(n-1) + (m^2)^(n-2) + (m^2)^(n-3) + ... + (m^2)^0 ]
     = 1      + m*(m-1)/2 * [ ((m^2)^n - 1) / (m^2 - 1) ]
```

Đặt `X = m*(m-1)/2`, `Y = m^2-1`

Thu gọn:

```js
f[n] = 1 + m*(m-1)/2 * [ ((m^2)^n - 1) / (m^2 - 1) ]
= 1 + X * ((Y+1)^n-1) / Y
= [X * ((Y+1)^n-1) + Y ] / Y
```

Đến đây đã có công thức cụ thể. Phần còn lại để các bạn xử lý, dùng thêm fermat như bài trước để tính mod khi thực hiện phép chia.

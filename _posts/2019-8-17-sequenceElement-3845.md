---
layout: post
title:  "sequenceElement"
categories: [dp, matrix]
code: 3845
src: [cpp]
difficulty: medium
---

Bài này mình không biết có ẩn ý hay cách giải khác nào đặc biệt không, tuy nhiên nó chỉ là bài quy hoạch động tương tự như bài Fibonacci khi `n` lớn (thay vì tính từ 2 phần tử trước và mod cho số nguyên tố nào đó, bài này là tính từ 5 số trước và mod cho `10`). Do đó hoàn toàn có thể áp dụng cách làm cho Fibonacci khi `n` lớn.

Cách làm chính là dùng nhân ma trận với cách tính luỹ thừa trong `O(logN)`

Biểu diễn ma trận như hình dưới đây:

```js
/  a[i-1]  \    / 1 , 1 , 1 , 1 , 1 \     /   a[i]   \
|  a[i-2]  |    | 1 , 0 , 0 , 0 , 0 |     |  a[i-1]  |
|  a[i-3]  |  * | 0 , 1 , 0 , 0 , 0 |  =  |  a[i-2]  |  = F(i)
|  a[i-4]  |    | 0 , 0 , 1 , 0 , 0 |     |  a[i-3]  |
\  a[i-5]  /    \ 0 , 0 , 0 , 1 , 0 /     \  a[i-4]  /
```

Ma trận `F[i]` duy trì `5` phần tử từ `a[i-4]` -> `a[i]`

Dễ thấy `F[i] = F[i-1] * P` với `P` là ma trận `5x5` như trên.

Khởi tạo có

```js
/  a[4]  \  
|  a[3]  |  
|  a[2]  |  = F(4)
|  a[1]  |  
\  a[0]  /  

==> F[5] = F[4] * P
    F[6] = F[5] * P = F[4] * P^2
	F[7] = F[6] * P = F[4] * P^3
	...
	F[n] = F[4] * P^(n-4)
```

Do đó `F[n] = F[4] * P^(n-4)` mà `P` là ma trận `5x5` nên có tính hoán vị, `PxPxP = Px(PxP) = (PxP)xP`, do đó tính `P^(n-4)` trong `log(N)`



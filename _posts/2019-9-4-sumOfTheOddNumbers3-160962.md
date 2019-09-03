---
layout: post
title:  "sumOfTheOddNumbers3"
categories: [math, number-theory, dp]
code: 160962
src: [cpp, py, java]
difficulty: hard
ads_more: 3
---

Bài này mình ra :))

Bài này yêu cầu sử dụng toán, có chút quy hoạch động phía trong để xử lý khi giới hạn N lớn.

### Xử lý N <= 10^6

Gọi `f[n]` là giá trị cần tìm cho `n`.

Các số cần xét:

```js
1 + 2 + 3 + ... + (2^n-1) + 2^n
= (1 + 3 + 5 + ... + (2^n-1)) + 2(1 + 2 + 3 + ... + 2^(n-1))
```

Các số lẻ bên trái có thể thu gọn thành `(1 + (2^n-1)) * (2^(n-1)) / 2` (công thức *số cuối + số đầu, nhân số số hạng, rồi chia 2* hồi cấp 1)

```js
Tổng các số lẻ 

= (1 + (2^n-1)) * (2^(n-1)) / 2
= (2^n) * (2^(n-1)) / 2
= 4^(n-1)
```

Các số chẵn bên tay phải của chuỗi số ở trên được rút 2 ra ngoài, vì các số này sẽ bị lược ước 2. do đó ta có `f[n]` được biểu diễn quy hồi như sau:

```js
f[n] = 4^(n-1) + f[n-1]
f[0] = 1
```

Đến đây hoàn toàn có thể giải được bài này bằng quy hoạch động với `N <= 10^6`

### Xử lý N <= 10^9

Tuy nhiên do giới hạn `N` lớn, do đó biến đổi thêm chút:

```js
f[n] = 4^(n-1) + f[n-1]
     = 4^(n-1) + 4^(n-2) + f[n-2]
	 = ...
	 = 4^(n-1) + 4^(n-2) + ... + 4^0 + f[0]
	 = (4^n-1)/(4-1) + f[0]
	 = (4^n-1)/3 + 1
	 = (4^n+2)/3
```

Đến đây do thực hiện phép mod trên phép chia, do đó sử dụng thêm định lý fermat nhỏ:

```js
a^(p-1) đồng dư với 1 khi mod p với p là số nguyên tố. Hay: a^(p-1) % p = 1
```

```js
M = 1e9 + 7 - số nguyên tố

f[n] = (4^n+2)/3 mod M
     = (4^n+2) * 3^(-1) mod M
	 = (4^n+2) * 3^(-1) * 3^(M-1) mod M
	 = (4^n+2) * 3^(M-2) mod M
```

Các phép lũy thừa có thể tính trong thời gian O(log) bằng chia để trị.

Độ phức tạp `O(log(10^9))`


### Bài tổng quát hơn

[sumOfBigSequence](https://vnspoj.github.io/code-learn/?q=sumOfBigSequence)

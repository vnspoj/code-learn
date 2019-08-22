---
layout: post
title:  "zigzagSequenceLength"
categories: [dp]
code: 10185
src: [cpp]
difficulty: medium
contestId: 114412
ads_more: 1
---

Bài quy hoạch động khá đơn giản, gọi `f[i][0]` là chiều dài dãy con zigzag dài nhất tận cùng là `i` và lên tại `i` (tức `a[i-2] > a[i-1] < a[i]`, hình thành chữ `V`). Tương tự `f[i][1]` là chiều dài dãy con zigzag dài nhất tận cùng là `i` và xuống tại `i` (hình thành dấu `^`).

Tại vị trí `i`:

```js
Nếu a[i] == a[i-1]:
	f[i][0] = f[i][1] = 1

Nếu a[i] > a[i-1]:
	f[i][0] = f[i-1][1] + 1

Nếu a[i] < a[i-1]:
	f[i][1] = f[i-1][0] + 1
```

Kết quả là `max(f[i][0], f[i][1])` với `1 <= i <= n`

Độ phức tạp `O(N)`

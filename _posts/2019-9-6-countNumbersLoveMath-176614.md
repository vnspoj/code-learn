---
layout: post
title:  "countNumbersLoveMath"
categories: [math]
code: 176614
src: [cpp]
difficulty: medium
---

Bài quá dễ, cứ như cho học sinh cấp 2, cấp 3 ấy.

```js
0 <= a <= m (1)
0 <= b <= n (2)
a + b = p   (3)

(2), (3) ==> 0 <= p-a <= n
         ==> p-n <= a <= p (4)

(1), (4) ==> max(0, p-n) <= a <= min(p, m)
```

Số các số cần tìm là `min(p, m) - max(0, p-n) + 1`.

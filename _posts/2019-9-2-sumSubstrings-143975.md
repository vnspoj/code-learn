---
layout: post
title:  "sumSubstrings"
categories: [dp, string]
code: 143975
src: [cpp]
difficulty: easy
contestId: 139256
taskId: 143975
order: J
noTrain: 1
---

Gọi `f[i]` là tổng kết quả với các chuỗi con tận cùng là `i`. Kết quả là `sum(f[i])`

Dễ thấy `f[i] = (f[i-1] * 10 + s[i] * i) + s[i]`, trong đó:

+ `f[i-1] * 10 + s[i] * i` là tổng trước đó có thêm vị trí `i`, vì `s[i]` xuất hiện `i` lần
+ `s[i]` một mình `s[i]`

Khởi tạo: `res = f[0] = s[0]`

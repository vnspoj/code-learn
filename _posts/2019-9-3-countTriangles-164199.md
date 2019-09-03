---
layout: post
title:  "countTriangles"
categories: [implementation, math, brute-force]
code: 164199
src: [cpp, py, java]
difficulty: easy
---

Bài này mình ra :))

Xét từng tổ hợp 3 điểm trên hệ tọa độ, kiểm tra xem 3 điểm có tạo thành tam giác không. Điều kiện để 3 điểm là tam giác là 3 điểm không thẳng hàng.

3 điểm `A` `B` `C` thẳng hàng khi `vecto(AB)` cùng hướng `vecto(AC)`

```js
`vecto(AB)` cùng hướng `vecto(AC)`

(xB-xA) / (yB-yA) == (xC-xA) / (yC-yA)

(xB-xA) * (yC-yA) == (xC-xA) * (yB-yA)
```

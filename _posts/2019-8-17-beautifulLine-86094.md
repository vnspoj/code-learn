---
layout: post
title:  "beautifulLine"
categories: [binary-index-tree]
code: 86094
src: [cpp]
difficulty: medium
---

Dạng bài kiểm tra xem có cách nào khôi phục trạng thái ban đầu từ một số cách biến đổi. Một cách hay xử lý là tìm ra 1 tính chất bất biến của chuỗi sau các phép biên đổi.

Trạng thái dãy tăng dần sau cùng sau một số phép biến đổi để đưa thành mảng input, thử một vài trường hợp để rút ra tính chất đặc biệt:

Trường hợp `n = 3`, từ `1,2,3` thành `3,1,2` hoặc `2,3,1`

Trường hợp `n = 4`, từ `1,2,3,4` thành:

+ `1,2,3,4` -> `3,1,2,4` -> `3,4,1,2` -> `4,1,3,2` -> `4,2,1,3` -> ...
+ `1,2,3,4` -> `1,4,2,3` -> `2,1,4,3` -> `1,4,2,3` -> ...

Nhận thấy là **số cặp nghịch thế** luôn là số chẵn, tức dù dịch lên hay dịch xuống thì số cặp nghịch thế tăng hoặc giảm bội của 2. (Cặp nghịch thế là 2 vị trí `i < j` mà `a[i] > a[j]`).

Do đó dù biến đổi sao thì chuỗi cuối cùng phải có số cặp nghịch thế chẵn.

Cách đếm số cặp nghịch thế thì có nhiều cách và cũng quen thuộc, mình thì thích cách dùng binary index tree cho đơn giản và dễ hiểu.

---
layout: post
title:  "obtainPalindromicArray"
categories: [string, brute-force, dfs, stack]
code: 3137
src: [cpp]
difficulty: hard
---

Nhận xét ta có thể check từ ngoài vào trong trên palindrome, tức xét lần lượt các cặp `(0,n-1)`, `(1,n-2)` với `n`là chiều dài mảng.

Tại mỗi vị trí cặp `(l,r)`, ta đảm bảo được rằng các cặp phía ngoài `(l,r)` đảm bảo tính palindrome. Mỗi vị trí `i` chỉ có thể :

+ Nếu là đầu `l`: nhận từ trái 1 ký tự, hoặc shift sang trái 1 ký tự.
+ Nếu là đầu `r`: nhận từ phải 1 ký tự, hoặc shift sang phải 1 ký tự.

Ngoài ra nếu như cặp `(l,r)` không thể hình thành palindrome thì ta có thể bỏ ngay tại trạng thái này.

Do đó ta có thể brute force cho bài này, duyệt theo chiều sâu tốt hơn là chiều rộng, vì khi đã hoàn tất thì có thể trả về ngay kết quả. Chiều dài mỗi chuỗi là nhỏ nên không đáng kể.

Khi duyệt, ta cần lưu lại trạng thái đã sử dụng trên mỗi chuỗi `l,r`, do đó lưu lại trạng thái nhận/dịch của mỗi chuỗi, từ đó hình thành lại 2 chuỗi này, sau đó duyệt đến các trạng thái tiếp theo.

Cần xử lý xâu cẩn thận để accept. Có thể khử đệ quy bằng stack.

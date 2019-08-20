---
layout: post
title:  "sequenceFixing"
categories: [greedy, stack, string]
code: 22912
src: [java, py, js, cs, cpp]
difficulty: easy
contestId: 114412
---

Duy trì 1 stack chứa các ngoặc mở hiện tại, khi duyệt đến ngoặc đóng thì pop ra khỏi stack, còn nếu không còn thì phải xóa. Đến khi tất cả đã được duyệt, lượng ngoặc mở còn tồn trên stack cần phải xóa hết.

Có thể sử dụng 1 biến lưu lại lượng ngoặc mở trên stack mà không dùng stack, do đó độ phức tạp là `O(N)`, không gian `O(1)`.

So sánh thời gian thực thi ở các ngôn ngữ khác nhau:

<img src="/code-learn/static/img/posts/execution-time.png" width="90%" />

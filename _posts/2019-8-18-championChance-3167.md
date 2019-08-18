---
layout: post
title:  "championChance"
categories: [greedy, brute-force]
code: 3167
src: [cpp]
difficulty: medium
---

Thử với mỗi team `i`, thực hiện tham lam xem sau cùng có thể cho `i` thắng không.

Tham lam: cho `i` thắng hết các trận còn lại. Lần lượt lấy các team có điểm cao nhất hiện tại mà còn trận chưa đấu, cho nó thua 1 trận nào đó, thực hiện việc này đến khi không còn trận nào nữa. Điểm sau cùng là tối ưu nhất để có thể `i` có cơ hội thắng. Có thể đảm bảo cách tham lam này work.

Có thể brute force hoàn toàn ở các bước tìm và cập nhật, tuy nhiên có thể dùng heap (`priority_queue` trong `C++`) để thực hiện (tư tưởng khá giống dijkstra/prim/...).

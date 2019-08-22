---
layout: post
title:  "minimumLayover"
categories: [greedy, matching, combinatorics, backtracking, sorting]
code: 18481
src: [cpp]
difficulty: hard
ads_more: 1
---


Trước hết mô hình bài này thành đồ thị 2 phía `A` và `B`, mỗi đỉnh đồ thị là 1 chuyến bay, mỗi đỉnh từ phía `A` liên kết đến mỗi đỉnh ở phía `B` 1 cạnh **có hướng có trọng số** là thời gian nghỉ giữa 2 chuyến `A-B`. Tương tự từ mỗi đỉnh ở phía `B` cũng có một cạnh có hướng đến từng đỉnh ở phía `A` với trọng số là thời gian nghỉ cho 2 chuyến `B-A`.

Nhận thấy số đỉnh là `n <= 10` ở mỗi phía, số cạnh của đồ thị là `n*(n-1) < 100`.

Từ yêu cầu bài toán, ta cần chọn ra `n/2` cặp đỉnh có hướng từ `A->B` và `n/2` cặp đỉnh có hướng từ `B->A` với các đỉnh không lặp lại trong các cạnh được chọn.

<p align="center">
<img src="/code-learn/static/img/posts/layover.jpg" width="60%"/>
</p>

Trước hết sinh tổ hợp `n/2` đỉnh được chọn trong đồ thị phía A, tất cả có `C(5,10) ~ 250` bộ (tổ hợp chập 5 của 10), nhân phân phối với `250` cách chọn của `n/2` đỉnh chọn ra từ phía B, ta được khoảng `65000` cách chọn `n/2` cạnh có hướng từ `A->B`.

Với mỗi cách chọn `n/2` cặp đỉnh như trên, các đỉnh còn lại sẽ sắp thành `n/2` cặp đỉnh có hướng từ `B->A`

Như trong hình minh hoạ, mỗi phía có `6` đỉnh, chọn ra `3` đỉnh màu vàng từ A và `3` đỉnh màu vàng ở B. Ghép các đỉnh vàng thành các cặp đi từ `A->B`. Các đỉnh còn lại có màu cam và được ghép thành `B->A`.

Vậy với mỗi tổ hợp như vậy, cần chọn ra các cạnh ghép trên từng đồ thị sao cho không có đỉnh nào trên 2 cạnh và có tổng trọng số nhỏ nhất. Do đó đưa bài toán về tìm cặp ghép cực tiểu trên 2 đồ thị 2 phía lần lượt là các đỉnh trên đồ thị từ `A->B` và các đỉnh trên đồ thị từ `B->A`.

Một **giải thuật tham lam** cho việc tìm ra các cạnh sao cho có tổng trọng số nhỏ nhất trên từng đồ thị ở trên là sắp xếp các cạnh có trọng số tăng dần, sau đó lần lượt chọn các cạnh để tạo thành cặp ghép. Cách này mình đã AC.

Trong hình minh hoạ, các cạnh nét liền là các canh tối ưu được chọn.

Độ phức tạp cho giải thuật này xấp xỉ `O(65000 * danh sách cạnh) ~ O(6.500.000)` đủ AC cho `1s`



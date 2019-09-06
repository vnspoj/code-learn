function nextDay(_s) {
  let s = String(_s)
  let nums = s.split('/');
  let d = nums[0];
  let m = nums[1];
  let y = nums[2];
  let date = new Date(y, m - 1, d);
  date.setDate(date.getDate() + 1);
  return date.getDate() + '/' + (date.getMonth() + 1) + '/' + date.getFullYear();
}

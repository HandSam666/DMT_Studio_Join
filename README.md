# 数字排序程序
## 作业说明
用 C++ 实现一组数字的升序排序。
## 实现思路
- 输入数字，输出结果
- 使用 std::vector<int> 存储数字
- 使用 std::sort 进行排序
## 代码解释
主函数**int**返还结果，**main**开始执行，**return 0**结束。
std::vector<int> v = 准备数字。
std::sort(v.begin(), v.end()); 升序排序。
for (int x : v) { 从准备数字中取出数字。
std::cout << x << " "; 数字间加空格。
## 如何运行
1. 用 Visual Studio 打开项目
2. 按 Ctrl + F5 运行
3. 输出结果
## 若想降序排序
将std::sort(v.begin(), v.end())改成std::sort(v.begin(), v.end(), std::greater<int>())。
## 作者
HandSam

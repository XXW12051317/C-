//#include <iostream>// 标准输入输出流头文件，用来做控制台输入输出

//#define LOG(x) std::cout << x << std::endl;
// 宏定义，LOG(x) 会被替换为输出语句，相当于写一个简易日志工具。
// 但宏的缺点是调试困难，一般推荐用函数或类来替代。

// 定义一个 Player 类，用来表示一个玩家
// 类（class）常常用来描述复杂、完整的实体（数据 + 行为）
//class Player
//{   
//public:// 公开访问权限，外部可以访问
//	int x, y;// 玩家位置坐标
//	int speed;// 玩家移动速度

//	void Move( int xa, int ya)
//	{
//		x += xa * speed;// 改变 x 坐标
//		y += ya * speed;// 改变 y 坐标
//	}
//};

// 定义一个 2D 向量结构体
// 结构体（struct）常常用来表示数据结构，功能相对简单
//{
//	float x, y;// 向量的分量


// 向量相加，把另一个向量的分量加到自身
//	void Add(const vector3D& other)// const 引用，避免复制
//	{
// 
//		x += other.x;
//		y += other.y;
//	}
//}; 

// 主函数入口
//int main()
//{
//	Player player; // 创建一个玩家对象
// player.speed = 2;// 初始化速度（不赋值会是未定义值）

// 玩家移动：向右下角移动 1 单位（实际移动 2，因为 speed=2）
//	player.Move( 1, -1); 
//	std::cout << player.x << "," << player.y;
//}
//class 默认访问权限是 private，而 struct 默认是 public。
//
//	类：用于表示“复杂对象”，包含数据 + 行为（比如 Player 有位置和 Move 方法）。
//
//	结构体：更多用于表示数据集合，可以带简单方法（比如 vector3D 的 Add）。
//
//	宏定义 #define LOG(x)：一种简易的日志工具，但实际项目中更推荐用函数或类来替代。
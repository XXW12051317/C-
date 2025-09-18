#include<iostream>

// 定义一个日志类 Log
// 用来控制不同级别的日志输出
class Log
{
public:
	// 定义枚举类型 Level 表示日志等级
	// enum Level : char 表示用 char 来存储（节省空间）
	enum Level :char
	{
		LevelError = 0, // 错误信息，最重要
		LevelWarning = 1,// 警告信息，中等重要
		LevelInfo = 2 // 普通信息，最不重要
	};
private:
	// 当前日志等级，默认是输出所有信息（LevelInfo）
	Level m_LogLevel = LevelInfo;


public:
	// 设置日志等级
	// 例如 SetLevel(LevelError) 就只会输出 Error 信息
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	// 输出警告信息
	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)// 如果当前等级允许
			std::cout << "[WARNING]:" << message << std::endl;
	}

	// 输出错误信息
	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]:" << message << std::endl;
	}

	// 输出普通信息
	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]:" << message << std::endl;
	}
};

// 主函数
int main()
{
	Log log;// 创建日志对象

	// 设置日志等级为 Error
	// 意味着只会输出 Error，Warning 和 Info 会被屏蔽
	log.SetLevel(Log::LevelError);

	log.Error("Error!");//  会输出
	log.Warn("Warning!"); //  不会输出（因为等级低于当前）
	log.Info("Info!"); // 不会输出

}
//学习要点总结：
//
//类（class）：既能存数据（成员变量），又能实现行为（成员函数）。
//
//结构体（struct）：更多是用来表示数据结构，但在 C++ 中和类几乎一样，只是默认访问权限不同（struct 默认 public，class 默认 private）。
//
//枚举（enum）：用来定义一组有意义的常量，比数字更易读。
//
//封装思想：通过 private 和 public 控制数据访问。
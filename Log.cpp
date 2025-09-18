#include<iostream>

// ����һ����־�� Log
// �������Ʋ�ͬ�������־���
class Log
{
public:
	// ����ö������ Level ��ʾ��־�ȼ�
	// enum Level : char ��ʾ�� char ���洢����ʡ�ռ䣩
	enum Level :char
	{
		LevelError = 0, // ������Ϣ������Ҫ
		LevelWarning = 1,// ������Ϣ���е���Ҫ
		LevelInfo = 2 // ��ͨ��Ϣ�����Ҫ
	};
private:
	// ��ǰ��־�ȼ���Ĭ�������������Ϣ��LevelInfo��
	Level m_LogLevel = LevelInfo;


public:
	// ������־�ȼ�
	// ���� SetLevel(LevelError) ��ֻ����� Error ��Ϣ
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	// ���������Ϣ
	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)// �����ǰ�ȼ�����
			std::cout << "[WARNING]:" << message << std::endl;
	}

	// ���������Ϣ
	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]:" << message << std::endl;
	}

	// �����ͨ��Ϣ
	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]:" << message << std::endl;
	}
};

// ������
int main()
{
	Log log;// ������־����

	// ������־�ȼ�Ϊ Error
	// ��ζ��ֻ����� Error��Warning �� Info �ᱻ����
	log.SetLevel(Log::LevelError);

	log.Error("Error!");//  �����
	log.Warn("Warning!"); //  �����������Ϊ�ȼ����ڵ�ǰ��
	log.Info("Info!"); // �������

}
//ѧϰҪ���ܽ᣺
//
//�ࣨclass�������ܴ����ݣ���Ա������������ʵ����Ϊ����Ա��������
//
//�ṹ�壨struct����������������ʾ���ݽṹ������ C++ �к��༸��һ����ֻ��Ĭ�Ϸ���Ȩ�޲�ͬ��struct Ĭ�� public��class Ĭ�� private����
//
//ö�٣�enum������������һ��������ĳ����������ָ��׶���
//
//��װ˼�룺ͨ�� private �� public �������ݷ��ʡ�
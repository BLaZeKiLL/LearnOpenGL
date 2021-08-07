class Logger
{
public:
	static const int LOG_LEVEL_ERROR = 0;
	static const int LOG_LEVEL_WARN = 1;
	static const int LOG_LEVEL_INFO = 2;
	static const int LOG_LEVEL_DEBUG = 3;

private:
	int m_LogLevel;

public:
	Logger();
	Logger(const int level);

	void SetLevel(const int level);

	void Error(const char *message);
	void Warn(const char *message);
	void Info(const char *message);
	void Debug(const char *message);
};

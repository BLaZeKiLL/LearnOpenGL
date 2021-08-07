class Logger
{
public:
	static const int LOG_LEVEL_ERROR = 0;
	static const int LOG_LEVEL_WARN = 0;
	static const int LOG_LEVEL_INFO = 0;
	static const int LOG_LEVEL_DEBUG = 0;

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

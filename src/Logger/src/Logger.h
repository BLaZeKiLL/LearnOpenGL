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
	explicit Logger(int level);

	void SetLevel(int level);

	void Error(const char *message) const;
	void Warn(const char *message) const;
	void Info(const char *message) const;
	void Debug(const char *message) const;
};

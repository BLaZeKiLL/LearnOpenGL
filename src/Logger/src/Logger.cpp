#include <iostream>

#include "Logger.h"

Logger::Logger()
{
	m_LogLevel = LOG_LEVEL_INFO;
}

Logger::Logger(const int level)
{
	m_LogLevel = level;
}

void Logger::SetLevel(const int level)
{
	m_LogLevel = level;
}

void Logger::Error(const char* message) const
{
	if (m_LogLevel < LOG_LEVEL_ERROR) return;
	std::cout << "\x1b[31m[ERROR]\x1b[0m : " << message << std::endl;
}

void Logger::Warn(const char* message) const
{
	if (m_LogLevel < LOG_LEVEL_WARN) return;
	std::cout << "\x1b[33m[WARN]\x1b[0m  : " << message << std::endl;
}

void Logger::Info(const char* message) const
{
	if (m_LogLevel < LOG_LEVEL_INFO) return;
	std::cout << "\x1b[32m[INFO]\x1b[0m  : " << message << std::endl;
}

void Logger::Debug(const char* message) const
{
	if (m_LogLevel < LOG_LEVEL_DEBUG) return;
	std::cout << "\x1b[37m[DEBUG]\x1b[0m : " << message << std::endl;
}

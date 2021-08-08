//
// Created by CodeBlaze on 08-08-2021.
//

#pragma once

#include <memory>
#include <spdlog/spdlog.h>

namespace LGL
{
	class Logger
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger> &GetLogger()
		{ return s_Logger; }

	private:
		static std::shared_ptr<spdlog::logger> s_Logger;
	};
}

#define LGL_LOG_ERROR(...) LGL::Logger::GetLogger()->error(__VA_ARGS__)
#define LGL_LOG_WARN(...) LGL::Logger::GetLogger()->warn(__VA_ARGS__)
#define LGL_LOG_INFO(...) LGL::Logger::GetLogger()->info(__VA_ARGS__)
#define LGL_LOG_DEBUG(...) LGL::Logger::GetLogger()->debug(__VA_ARGS__)
#define LGL_LOG_TRACE(...) LGL::Logger::GetLogger()->trace(__VA_ARGS__)

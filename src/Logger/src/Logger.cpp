//
// Created by CodeBlaze on 08-08-2021.
//

#include "Logger.h"

#include "spdlog/sinks/stdout_color_sinks.h"

namespace LGL
{
    std::shared_ptr<spdlog::logger> Logger::s_Logger;

    void Logger::Init()
    {
        spdlog::set_pattern("%^[%T][%l][%n]%$ : %v");
        s_Logger = spdlog::stdout_color_mt("LGL");
        s_Logger->set_level(spdlog::level::trace);
    }
}

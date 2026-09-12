#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/io/Logger.h"
#include "ll/api/utils/StringUtils.h"

namespace ll::inline utils::error_utils {

void printCurrentException(io::Logger& logger, io::LogLevel level, std::exception_ptr const& e) noexcept {
    try {
#if defined(LL_DEBUG)
        std::string res;
        auto        stacktrace = stacktraceFromCurrentException();
        if (stacktrace.empty()) {
            stacktrace = Stacktrace::current(1);
            if (!stacktrace.empty()) {
                res = "\ncurrent stacktrace:\n" + stacktrace_utils::toString(stacktrace);
            }
        } else {
            res = "\nexception stacktrace:\n" + stacktrace_utils::toString(stacktrace);
        }
        res = makeExceptionString(e) + res;
#else
        auto res = makeExceptionString(e);
#endif
        for (auto& sv : string_utils::splitByPattern(res, "\n")) {
            logger.log(level, sv);
        }
        return;
    } catch (...) {}
    logger.log(level, "unknown error");
}

} // namespace ll::inline utils::error_utils

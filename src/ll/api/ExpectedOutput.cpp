#include "ll/api/Expected.h"
#include "ll/api/io/Logger.h"
#include "ll/api/utils/StringUtils.h"

namespace ll {
Error const& Error::log(io::Logger& l, io::LogLevel level) const noexcept { return log(l, {}, level); }
Error const& Error::log(io::Logger& l, std::string_view locale, io::LogLevel level) const noexcept {
    return log([&](std::string_view msg) { l.log(level, msg); }, locale);
}
Error const& Error::log(brstd::function_ref<void(std::string_view msg)> out, std::string_view locale) const noexcept {
    for (std::string_view sv : string_utils::splitByPattern(message(locale), "\n")) {
        if (sv.ends_with('\r')) {
            sv.remove_suffix(1);
        }
        if (sv.starts_with('\r')) {
            sv.remove_prefix(1);
        }
        out(sv);
    }
    return *this;
}
} // namespace ll

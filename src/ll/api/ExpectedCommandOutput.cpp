#include "ll/api/Expected.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandOutputParameter.h"

namespace ll {
Error const& Error::log(CommandOutput& stream, CommandOutputMessageType type) const noexcept {
    return log(stream, {}, type);
}
Error const& Error::log(CommandOutput& stream, std::string_view locale, CommandOutputMessageType type) const noexcept {
    return log([&](std::string_view msg) { stream.addMessage(msg, {}, type); }, locale);
}
} // namespace ll

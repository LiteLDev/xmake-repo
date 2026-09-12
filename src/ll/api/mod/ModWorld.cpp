#include "ll/api/mod/Mod.h"

#include "ll/api/service/ServerInfo.h"
#include "ll/api/utils/StringUtils.h"

namespace ll::mod {

std::optional<std::filesystem::path> Mod::getWorldDataDir() const {
    auto dataRoot = ll::getWorldDataRoot();
    if (dataRoot) {
        return dataRoot.value() / string_utils::str2u8str(getName());
    }
    return std::nullopt;
}

std::optional<std::filesystem::path> Mod::getWorldConfigDir() const {
    auto configRoot = ll::getWorldConfigRoot();
    if (configRoot) {
        return configRoot.value() / string_utils::str2u8str(getName());
    }
    return std::nullopt;
}

} // namespace ll::mod

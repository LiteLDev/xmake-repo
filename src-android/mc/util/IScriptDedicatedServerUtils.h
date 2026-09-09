#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScriptDedicatedServerUtils {
public:
    // IScriptDedicatedServerUtils inner types declare
    // clang-format off
    struct AllowListEntryInfo;
    // clang-format on

    // IScriptDedicatedServerUtils inner types define
    struct AllowListEntryInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, std::optional<std::string>> name;
        ::ll::TypedStorage<8, 32, std::optional<std::string>> xuid;
        // NOLINTEND
    };
};

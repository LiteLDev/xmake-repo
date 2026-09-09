#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

struct ServerboundPackSettingChangePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID>                            mPackId;
    ::ll::TypedStorage<8, 24, std::string>                            mSettingName;
    ::ll::TypedStorage<8, 32, std::variant<float, bool, std::string>> mSettingValue;
    // NOLINTEND
};

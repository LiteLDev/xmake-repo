#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace cereal::internal {

struct EnumValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>                                                        mValue;
    ::ll::TypedStorage<8, 24, std::string>                                                mName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                 mDescription;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, cereal::DynamicValue>>> mCerealProperties;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                 mNonPublicFlag;
    // NOLINTEND

public:
    // prevent constructor by default
    EnumValue& operator=(EnumValue const&);
    EnumValue(EnumValue const&);
};

} // namespace cereal::internal

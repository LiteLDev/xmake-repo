#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"

namespace BiomesClientJsonData {

struct OldFogDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>>   mFogColor;
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>>   mWaterFogColor;
    ::ll::TypedStorage<4, 8, std::optional<float>>         mWaterFogDistance;
    ::ll::TypedStorage<8, 48, std::optional<HashedString>> mFogIdentifier;
    // NOLINTEND
};

} // namespace BiomesClientJsonData

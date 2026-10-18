#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/string/HashedString.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace BiomesClientJsonData {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct OldFogDefinition {};
#endif // @header-generator platform

} // namespace BiomesClientJsonData

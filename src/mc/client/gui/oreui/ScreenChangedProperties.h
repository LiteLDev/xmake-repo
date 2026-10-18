#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI::RouterLocationEventingUtils {

#if defined(LL_PLAT_A) // @header-generator platform
struct ScreenChangedProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                          mShouldFireEvent;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mEventProperties;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct ScreenChangedProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                mShouldFireEvent;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>> mEventProperties;
    // NOLINTEND
};
#else // @header-generator platform
struct ScreenChangedProperties {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI::RouterLocationEventingUtils

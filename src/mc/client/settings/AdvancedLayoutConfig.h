#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings::KeyboardAndMouseSettingsDetails {

#if defined(LL_PLAT_A) // @header-generator platform
struct AdvancedLayoutConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> titleKey;
    ::ll::TypedStorage<8, 16, std::string_view> descriptionKey;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct AdvancedLayoutConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::string_view> titleKey;
    ::ll::TypedStorage<8, 16, ::std::string_view> descriptionKey;
    // NOLINTEND
};
#else // @header-generator platform
struct AdvancedLayoutConfig {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings::KeyboardAndMouseSettingsDetails

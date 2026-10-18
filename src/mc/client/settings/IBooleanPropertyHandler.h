#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IPropertyHandler.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/IPropertyHandler.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
class IBooleanPropertyHandler : public ::Settings::IPropertyHandler<bool> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBooleanPropertyHandler() = default;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IBooleanPropertyHandler : public ::Settings::IPropertyHandler<bool> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBooleanPropertyHandler() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class IBooleanPropertyHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings

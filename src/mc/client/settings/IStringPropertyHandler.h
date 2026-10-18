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
class IStringPropertyHandler : public ::Settings::IPropertyHandler<std::string> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStringPropertyHandler() = default;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IStringPropertyHandler : public ::Settings::IPropertyHandler<::std::string> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStringPropertyHandler() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class IStringPropertyHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings

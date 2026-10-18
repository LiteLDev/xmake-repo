#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ResourcePackCopyUtils {

#if defined(LL_PLAT_A) // @header-generator platform
class IEntitlementCheck {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IEntitlementCheck {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IEntitlementCheck() = default;

    virtual bool isValid(::ContentIdentity const& identity) const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IEntitlementCheck {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ResourcePackCopyUtils

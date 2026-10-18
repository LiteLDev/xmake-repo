#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IContentKeyProvider.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
// clang-format on

class IContentAccessibilityProvider : public ::IContentKeyProvider {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IContentAccessibilityProvider() = default;
#else // @header-generator platform
    virtual ~IContentAccessibilityProvider() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canAccess(::ContentIdentity const&) const = 0;
#else // @header-generator platform
    virtual bool canAccess(::ContentIdentity const& contentIdentity) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

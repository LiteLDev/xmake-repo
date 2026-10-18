#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class ContentTierInfo;
// clang-format on

class IContentTierManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IContentTierManager() = default;
#else // @header-generator platform
    virtual ~IContentTierManager() /*override*/ = default;
#endif // @header-generator platform

    virtual ::ContentTierInfo getContentTierInfo() const = 0;

    virtual bool shouldDeviceAllowAnimation() const = 0;
    // NOLINTEND
};

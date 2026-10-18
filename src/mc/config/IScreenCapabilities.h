#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

class IScreenCapabilities {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~IScreenCapabilities();
#else // @header-generator platform
    virtual ~IScreenCapabilities() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isOfType(::Bedrock::typeid_t<IScreenCapabilities>) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual bool isOfType(::Bedrock::typeid_t<::IScreenCapabilities> type) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

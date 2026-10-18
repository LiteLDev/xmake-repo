#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/DataDrivenScreenRejectReason.h"
#include "mc/ui/DataDrivenScreenClosedReason.h"

struct DataDrivenScreenPromise {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<uint>> mFormId;
#else // @header-generator platform
    std::optional<unsigned int> mFormId;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void resolve(::DataDrivenScreenClosedReason) = 0;
#else // @header-generator platform
    virtual void resolve(::DataDrivenScreenClosedReason resolution) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reject(::DataDrivenScreenRejectReason) = 0;
#else // @header-generator platform
    virtual void reject(::DataDrivenScreenRejectReason rejection) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

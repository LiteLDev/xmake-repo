#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class IDlcValidationState {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDlcValidationState() = default;

    virtual void setProcessingPendingImports(bool) = 0;

    virtual bool isProcessingPendingImports() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IDlcValidationState {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDlcValidationState {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDlcValidationState() = default;

    virtual void setProcessingPendingImports(bool) = 0;

    virtual bool isProcessingPendingImports() const = 0;
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct IRuntimeMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mThreadId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRuntimeMetadata() = default;
    // NOLINTEND
};

} // namespace Scripting

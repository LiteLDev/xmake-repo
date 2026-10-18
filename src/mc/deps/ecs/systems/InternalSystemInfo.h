#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/SystemInfo.h"
#include "mc/deps/profiler/PredeclaredAnnotation.h"

struct InternalSystemInfo : public ::SystemInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::Profiler::details::PredeclaredAnnotation> mAnnotationForTick;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    InternalSystemInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~InternalSystemInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

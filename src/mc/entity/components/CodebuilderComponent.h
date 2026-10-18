#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/code_builder_execution_state/CodeStatus.h"

class CodebuilderComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CodeBuilderExecutionState::CodeStatus> mCodeStatus;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void resetCodeStatus();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

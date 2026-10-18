#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/code_builder_execution_state/CodeStatus.h"

struct CodeBuilderSelectorFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::CodeBuilderExecutionState::CodeStatus> mStatus;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                            mPropertyName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                          mPropertyName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    CodeBuilderSelectorFilter();
#else // @header-generator platform
#endif // @header-generator platform
};

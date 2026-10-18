#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/PipelineStateObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetPSODebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> PSO;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetPSODebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> mUnk8ef4e5;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPSODebugNameCmd& operator=(SetPSODebugNameCmd const&);
    SetPSODebugNameCmd(SetPSODebugNameCmd const&);
    SetPSODebugNameCmd();
};
#else // @header-generator platform
struct SetPSODebugNameCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir

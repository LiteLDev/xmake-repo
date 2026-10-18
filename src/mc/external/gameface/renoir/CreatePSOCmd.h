#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/PipelineState.h"
#include "mc/external/gameface/renoir/PipelineStateObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreatePSOCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 148> PSO;
    ::ll::UntypedStorage<1, 4>   Object;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CreatePSOCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 148> mUnkc8f9ea;
    ::ll::UntypedStorage<1, 4>   mUnk7b4074;
    // NOLINTEND

public:
    // prevent constructor by default
    CreatePSOCmd& operator=(CreatePSOCmd const&);
    CreatePSOCmd(CreatePSOCmd const&);
    CreatePSOCmd();
};
#else // @header-generator platform
struct CreatePSOCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir

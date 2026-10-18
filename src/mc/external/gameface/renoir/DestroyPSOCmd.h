#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/PipelineStateObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct DestroyPSOCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> Object;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DestroyPSOCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> mUnk92b5f4;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyPSOCmd& operator=(DestroyPSOCmd const&);
    DestroyPSOCmd(DestroyPSOCmd const&);
    DestroyPSOCmd();
};
#else // @header-generator platform
struct DestroyPSOCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir

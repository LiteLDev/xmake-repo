#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/PipelineStateObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetPipelineStateCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> Object;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetPipelineStateCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 8> mUnkdbfb60;
    // NOLINTEND

public:
    // prevent constructor by default
    SetPipelineStateCmd& operator=(SetPipelineStateCmd const&);
    SetPipelineStateCmd(SetPipelineStateCmd const&);
    SetPipelineStateCmd();
};
#else // @header-generator platform
struct SetPipelineStateCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir

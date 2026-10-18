#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/Sampler2DObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct SetSamplerDebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> SamplerObject;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct SetSamplerDebugNameCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk1ea739;
    // NOLINTEND

public:
    // prevent constructor by default
    SetSamplerDebugNameCmd& operator=(SetSamplerDebugNameCmd const&);
    SetSamplerDebugNameCmd(SetSamplerDebugNameCmd const&);
    SetSamplerDebugNameCmd();
};
#else // @header-generator platform
struct SetSamplerDebugNameCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir

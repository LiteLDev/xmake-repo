#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/Sampler2D.h"
#include "mc/external/gameface/renoir/Sampler2DObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct CreateSamplerCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::Sampler2DObject> Object;
    ::ll::TypedStorage<4, 12, ::renoir::Sampler2D>      SamplerDesc;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct CreateSamplerCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7d3d67;
    ::ll::UntypedStorage<4, 12> mUnk754a4e;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateSamplerCmd& operator=(CreateSamplerCmd const&);
    CreateSamplerCmd(CreateSamplerCmd const&);
    CreateSamplerCmd();
};
#else // @header-generator platform
struct CreateSamplerCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir

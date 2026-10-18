#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/SamplerAddressing.h"
#include "mc/external/gameface/renoir/SamplerFilter.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct Sampler2D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::renoir::SamplerFilter>     Filtering;
    ::ll::TypedStorage<4, 4, ::renoir::SamplerAddressing> UAddress;
    ::ll::TypedStorage<4, 4, ::renoir::SamplerAddressing> VAddress;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Sampler2D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk95b8ce;
    ::ll::UntypedStorage<4, 4> mUnk66373b;
    ::ll::UntypedStorage<4, 4> mUnk28b64e;
    // NOLINTEND

public:
    // prevent constructor by default
    Sampler2D& operator=(Sampler2D const&);
    Sampler2D(Sampler2D const&);
    Sampler2D();
};
#else // @header-generator platform
struct Sampler2D {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir

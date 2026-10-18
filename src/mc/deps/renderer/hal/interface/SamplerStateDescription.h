#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core_graphics/enums/ComparisonFunc.h"
#include "mc/deps/core_graphics/enums/TextureFiltering.h"
#include "mc/deps/renderer/hal/interface/TextureWrappingDescription.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct SamplerStateDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::TextureFiltering>           textureFilter;
    ::ll::TypedStorage<1, 3, ::mce::TextureWrappingDescription> textureWrappingDescription;
    ::ll::TypedStorage<4, 4, uint>                              shaderStagesBits;
    ::ll::TypedStorage<2, 2, short>                             samplerIndex;
    ::ll::TypedStorage<1, 1, ::mce::ComparisonFunc>             comparisonFunc;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SamplerStateDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
struct SamplerStateDescription {};
#endif // @header-generator platform

} // namespace mce

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/ShaderCodePlatform.h"
#include "mc/external/render_dragon/materials/definition/ShaderStage.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
struct PlatformShaderStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::dragon::materials::ShaderCodePlatform>      mPlatform;
    ::ll::TypedStorage<1, 1, ::dragon::materials::definition::ShaderStage> mStage;
    // NOLINTEND
};
#else // @header-generator platform
struct PlatformShaderStage {};
#endif // @header-generator platform

} // namespace dragon::materials

#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/external/render_dragon/frame_renderer/ShaderSDKParameters.h"

namespace dragon::materials {

struct MaterialInitializationOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                               mPathSuffix;
    ::ll::TypedStorage<8, 24, std::string>                                               mIndexFileName;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                                        mResourceLocation;
    ::ll::TypedStorage<8, 40, std::optional<dragon::framerenderer::ShaderSDKParameters>> mShaderSDKParameters;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialInitializationOptions& operator=(MaterialInitializationOptions const&);
    MaterialInitializationOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MaterialInitializationOptions(::dragon::materials::MaterialInitializationOptions const&);

    MCNAPI ~MaterialInitializationOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::dragon::materials::MaterialInitializationOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::materials
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

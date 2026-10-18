#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/renderer/GraphicsAdapterDescription.h"

// auto generated forward declare list
// clang-format off
namespace dragon::platform { struct GraphicsPlatform; }
// clang-format on

namespace mce {

struct GraphicsDeviceInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::mce::GraphicsAdapterDescription> mAdapterDescription;
    ::ll::TypedStorage<8, 24, std::string>                       mChipsetVendorName;
    ::ll::TypedStorage<8, 24, std::string>                       mGraphicsVersion;
    ::ll::TypedStorage<8, 24, std::string>                       mGraphicsExtensions;
    ::ll::TypedStorage<8, 24, std::string>                       mGraphicsPlatformExtensions;
    ::ll::TypedStorage<8, 24, std::string>                       mGraphicsShaderPlatform;
    ::ll::TypedStorage<1, 1, bool>                               mTearingSupport;
    ::ll::TypedStorage<1, 1, bool>                               mVertexShaderInstancingSupport;
    ::ll::TypedStorage<4, 4, int>                                mScreenWidth;
    ::ll::TypedStorage<4, 4, int>                                mScreenHeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GraphicsDeviceInformation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform

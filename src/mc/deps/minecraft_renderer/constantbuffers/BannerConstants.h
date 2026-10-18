#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferContainer; }
namespace mce { class ShaderConstantFloat4; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferContainer; }
namespace mce { class ShaderConstantFloat4; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class BannerConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>                          BANNER_COLORS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>                          BANNER_UV_OFFSETS_AND_SCALES;
    ::ll::TypedStorage<8, 8, ::mce::ConstantBufferContainer*>                       constantBuffer;
    ::ll::TypedStorage<4, 64, std::array<glm::vec<4, float, (glm::qualifier)0>, 4>> mBasePBRTextureData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BannerConstants();

    MCNAPI void init();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class BannerConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    BANNER_COLORS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    BANNER_UV_OFFSETS_AND_SCALES;
    ::ll::TypedStorage<8, 8, ::mce::ConstantBufferContainer*> constantBuffer;
    ::ll::TypedStorage<4, 64, ::std::array<::glm::vec4, 4>>   mBasePBRTextureData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void init();
    // NOLINTEND
};
#else // @header-generator platform
class BannerConstants {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/CSSGameplayFlags.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct CustomSurfaceShaderMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                  mHash;
    ::ll::TypedStorage<4, 4, ::mce::framebuilder::CSSGameplayFlags> mGameplayFlags;
    // NOLINTEND
};
#else // @header-generator platform
struct CustomSurfaceShaderMetadata {};
#endif // @header-generator platform

} // namespace mce::framebuilder

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/ProbeRegenParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/IBLParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/ScreenSpaceReflectionsParameters.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder {

#if defined(LL_PLAT_A) // @header-generator platform
struct ReflectionParameters {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 12, ::dragon::framerenderer::modules::IBLParameters> mIBLParameters;
    ::ll::TypedStorage<4, 44, ::mce::framebuilder::ProbeRegenParameters> mRegenParameters;
    ::ll::TypedStorage<4, 84, ::dragon::framerenderer::modules::ScreenSpaceReflectionsParameters> mScreenSpaceReflectionsParameters;
    ::ll::TypedStorage<1, 1, bool> mScreenSpaceReflectionsEnabled;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct ReflectionParameters {};
#endif // @header-generator platform

} // namespace mce::framebuilder

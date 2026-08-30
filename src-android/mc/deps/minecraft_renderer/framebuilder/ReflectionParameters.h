#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/ProbeRegenParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/IBLParameters.h"
#include "mc/external/render_dragon/frame_renderer/modules/ScreenSpaceReflectionsParameters.h"

namespace mce::framebuilder {

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

} // namespace mce::framebuilder

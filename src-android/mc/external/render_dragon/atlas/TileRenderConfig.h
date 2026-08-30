#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/external/render_dragon/frame_renderer/SortMode.h"
#include "mc/external/render_dragon/rendering/BufferClear.h"

namespace dragon::atlas {

struct TileRenderConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>  mViewMatrix;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>  mProjectionMatrix;
    ::ll::TypedStorage<4, 16, ::dragon::rendering::BufferClear>            mBufferClear;
    ::ll::TypedStorage<8, 40, ::HashedString>                              mPassName;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::drawutils::SortMode> mSortMode;
    // NOLINTEND
};

} // namespace dragon::atlas

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/external/render_dragon/frame_renderer/SortMode.h"
#include "mc/external/render_dragon/rendering/BufferClear.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
struct TileRenderConfig {};
#endif // @header-generator platform

} // namespace dragon::atlas

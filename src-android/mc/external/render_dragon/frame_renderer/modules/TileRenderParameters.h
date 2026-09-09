#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core_graphics/math/Rect.h"
#include "mc/external/render_dragon/frame_renderer/SortMode.h"
#include "mc/external/render_dragon/rendering/BufferClear.h"

namespace dragon::framerenderer::modules::atlas {

struct TileRenderParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 8>                                             mViewport;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>  mViewMatrix;
    ::ll::TypedStorage<4, 64, ::glm::mat<4, 4, float, (glm::qualifier)0>>  mProjectionMatrix;
    ::ll::TypedStorage<4, 16, ::dragon::rendering::BufferClear>            mBufferClear;
    ::ll::TypedStorage<8, 24, std::string>                                 mPhaseName;
    ::ll::TypedStorage<8, 40, ::HashedString>                              mPassName;
    ::ll::TypedStorage<4, 4, ::dragon::framerenderer::drawutils::SortMode> mSortMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TileRenderParameters();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::framerenderer::modules::atlas

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/BoxFaceSchematic.h"
#include "mc/deps/core/math/Matrix.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/BoxFaceSchematic.h"
#include "mc/deps/core/math/Matrix.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ClientBlockPipeline {

#if defined(LL_PLAT_A) // @header-generator platform
struct BoxSchematic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix>                                              mLocalToModelTransform;
    ::ll::TypedStorage<4, 264, std::array<ClientBlockPipeline::BoxFaceSchematic, 6>> mFaces;
    ::ll::TypedStorage<1, 1, bool>                                                   mUsesFaceUVs;
    ::ll::TypedStorage<1, 1, bool>                                                   mFacesHaveCull;
    // NOLINTEND

public:
    // prevent constructor by default
    BoxSchematic& operator=(BoxSchematic const&);
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BoxSchematic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, ::Matrix>                                                  mLocalToModelTransform;
    ::ll::TypedStorage<4, 264, ::std::array<::ClientBlockPipeline::BoxFaceSchematic, 6>> mFaces;
    ::ll::TypedStorage<1, 1, bool>                                                       mUsesFaceUVs;
    ::ll::TypedStorage<1, 1, bool>                                                       mFacesHaveCull;
    // NOLINTEND
};
#else // @header-generator platform
struct BoxSchematic {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ClientBlockPipeline

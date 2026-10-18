#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/external/render_dragon/atlas/AtlasConfiguration.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/atlas/AttachmentConfig.h"
#include "mc/external/render_dragon/atlas/ShelfPacker.h"
#include "mc/external/render_dragon/atlas/TileState.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"

// auto generated forward declare list
// clang-format off
namespace dragon::atlas { class IAtlasHandle; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::atlas {

#if defined(LL_PLAT_A) // @header-generator platform
struct AtlasState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::dragon::atlas::AtlasConfiguration>          mConfig;
    ::ll::TypedStorage<8, 24, std::vector<dragon::atlas::AttachmentConfig>> mAttachments;
    ::ll::UntypedStorage<8, 24>                                             mTextures;
    ::ll::TypedStorage<8, 16, std::weak_ptr<dragon::atlas::IAtlasHandle>>   mHandle;
    ::ll::TypedStorage<8, 24, std::vector<dragon::atlas::TileState>>        mTiles;
    ::ll::TypedStorage<8, 144, std::optional<dragon::atlas::ShelfPacker>>   mPacker;
    ::ll::TypedStorage<8, 48, std::deque<uint>>                             mDirtyQueue;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                            mFrameEligibleTiles;
    ::ll::TypedStorage<8, 24, std::vector<dragon::atlas::AtlasTileHandle>>  mFrameEligibleHandles;
    ::ll::TypedStorage<8, 24, std::vector<uint>>                            mRenderedThisFrame;
    ::ll::TypedStorage<8, 8, ulong>                                         mAtlasId;
    ::ll::TypedStorage<8, 8, ulong>                                         mRenderSequence;
    ::ll::TypedStorage<4, 4, uint>                                          mVersion;
    ::ll::TypedStorage<1, 1, bool>                                          mNeedsReallocation;
    // NOLINTEND
};
#else // @header-generator platform
struct AtlasState {};
#endif // @header-generator platform

} // namespace dragon::atlas

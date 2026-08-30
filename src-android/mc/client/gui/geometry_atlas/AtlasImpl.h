#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/CommandDispatcherArgs.h"
#include "mc/client/gui/geometry_atlas/IGeometryAtlas.h"
#include "mc/client/gui/geometry_atlas/ItemData.h"
#include "mc/client/gui/geometry_atlas/PaperDollData.h"
#include "mc/client/gui/geometry_atlas/RenderableUpdateCommand.h"
#include "mc/deps/core/threading/BasicLockbox.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/external/render_dragon/atlas/AtlasTileDescription.h"
#include "mc/external/render_dragon/atlas/AtlasTileHandle.h"
#include "mc/external/render_dragon/atlas/IAtlasHandle.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IRenderContext; }
namespace GeometryAtlas { struct TileHandleSharedState; }
// clang-format on

namespace GeometryAtlas {

class AtlasImpl : public ::GeometryAtlas::IGeometryAtlas {
public:
    // AtlasImpl inner types declare
    // clang-format off
    class TileEntry;
    struct Data;
    struct TileDirtyUpdate;
    struct CommandArgs;
    // clang-format on

    // AtlasImpl inner types define
    enum class TileDirtyStatus : uchar {
        NewUserData           = 0,
        SubmittedForRendering = 1,
        UpToDate              = 2,
    };

    class TileEntry {
    public:
        // TileEntry inner types define
        enum class Status : uchar {
            Uninitialized        = 0,
            Initialized          = 1,
            FailedInitialization = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::variant<GeometryAtlas::ItemData, GeometryAtlas::PaperDollData>> mData;
        ::ll::TypedStorage<1, 1, bool>                                                                 mIsAnimated;
        ::ll::TypedStorage<4, 8, ::dragon::atlas::AtlasTileDescription const>                          mTileDescription;
        ::ll::TypedStorage<1, 1, ::GeometryAtlas::AtlasImpl::TileEntry::Status>                        mStatus;
        ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryAtlas::TileHandleSharedState>>               mShared;
        ::ll::TypedStorage<8, 32, ::dragon::atlas::AtlasTileHandle>                                    mBackendID;
        // NOLINTEND
    };

    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<dragon::atlas::IAtlasHandle>>>     mAtlases;
        ::ll::TypedStorage<8, 40, std::unordered_map<uint, GeometryAtlas::AtlasImpl::TileEntry>> mTiles;
        ::ll::UntypedStorage<8, 88>                                                              mCommands;
        ::ll::TypedStorage<8, 24, std::vector<GeometryAtlas::RenderableUpdateCommand>>           mFutureCommands;
        ::ll::UntypedStorage<8, 48>                                                              mDirtyTiles;
        ::ll::TypedStorage<8, 24, std::vector<uint>>                                             mTileNotifications;
        // NOLINTEND
    };

    struct TileDirtyUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::GeometryAtlas::AtlasImpl::TileDirtyStatus> mNewStatus;
        ::ll::TypedStorage<1, 1, bool>                                        mSubmitTileRender;
        ::ll::TypedStorage<1, 1, bool>                                        mNotifyTileUpdated;
        // NOLINTEND
    };

    struct CommandArgs {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::GeometryAtlas::IRenderContext&>       mContext;
        ::ll::UntypedStorage<8, 8>                                       mIt;
        ::ll::TypedStorage<8, 8, ::GeometryAtlas::AtlasImpl::TileEntry*> mEntry;
        ::ll::TypedStorage<4, 4, uint>                                   mTileID;
        // NOLINTEND

    public:
        // prevent constructor by default
        CommandArgs& operator=(CommandArgs const&);
        CommandArgs(CommandArgs const&);
        CommandArgs();
    };

    using CommandBuffer = std::deque<GeometryAtlas::RenderableUpdateCommand>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryAtlas::AtlasImpl::Data>> mData;
    ::ll::UntypedStorage<8, 16>                                                mDispatcher;
    ::ll::UntypedStorage<8, 88>                                                mTileChangePublisher;
    // NOLINTEND
};

} // namespace GeometryAtlas

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IGeometryAtlasCaptureService.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core_graphics/ImageBuffer.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/future.h"
#include "mc/platform/brstd/once_flag.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class GeometryAtlasCapture; }
namespace GeometryAtlas { class IAtlasTile; }
namespace dragon::atlas { class IAtlasHandle; }
// clang-format on

namespace GeometryAtlas {

class CaptureImpl : public ::GeometryAtlas::IGeometryAtlasCaptureService {
public:
    // CaptureImpl inner types declare
    // clang-format off
    struct PendingAtlas;
    struct PendingTile;
    struct PendingRequest;
    // clang-format on

    // CaptureImpl inner types define
    struct PendingAtlas {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<dragon::atlas::IAtlasHandle>>> mAtlas;
        ::ll::UntypedStorage<8, 8>                                                               mFuture;
        ::ll::TypedStorage<8, 56, std::optional<cg::ImageBuffer>>                                mBuffer;
        // NOLINTEND
    };

    struct PendingTile {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<GeometryAtlas::IAtlasTile>>> mTile;
        ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryAtlas::CaptureImpl::PendingAtlas>>   mAtlas;
        // NOLINTEND
    };

    struct PendingRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40>                                                     mPromise;
        ::ll::TypedStorage<8, 24, std::vector<GeometryAtlas::CaptureImpl::PendingTile>> mTiles;
        ::ll::UntypedStorage<8, 48>                                                     mAtlases;
        ::ll::UntypedStorage<8, 8>                                                      mDragonFuture;
        ::ll::TypedStorage<4, 4, ::brstd::once_flag>                                    mAssignAtlases;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<GeometryAtlas::CaptureImpl::PendingRequest>>> mRequests;
    // NOLINTEND
};

} // namespace GeometryAtlas

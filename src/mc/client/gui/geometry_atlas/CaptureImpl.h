#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IGeometryAtlasCaptureService.h"
#include "mc/deps/core/threading/Async.h"
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
namespace dragon::atlas { class IAtlasRenderOperations; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class CaptureImpl : public ::GeometryAtlas::IGeometryAtlasCaptureService {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class CaptureImpl : public ::GeometryAtlas::IGeometryAtlasCaptureService {
#else // @header-generator platform
class CaptureImpl {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // CaptureImpl inner types declare
    // clang-format off
    struct PendingAtlas;
    struct PendingTile;
    struct PendingRequest;
    // clang-format on

    // CaptureImpl inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PendingAtlas {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<dragon::atlas::IAtlasHandle>>> mAtlas;
        ::ll::UntypedStorage<8, 8>                                                               mFuture;
        ::ll::TypedStorage<8, 56, std::optional<cg::ImageBuffer>>                                mBuffer;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PendingAtlas {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::dragon::atlas::IAtlasHandle>>> mAtlas;
        ::ll::TypedStorage<8, 16, ::brstd::future<::cg::ImageBuffer>>                                mFuture;
        ::ll::TypedStorage<8, 56, ::std::optional<::cg::ImageBuffer>>                                mBuffer;
        // NOLINTEND
    };
#else // @header-generator platform
    struct PendingAtlas {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct PendingTile {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<GeometryAtlas::IAtlasTile>>> mTile;
        ::ll::TypedStorage<8, 16, std::shared_ptr<GeometryAtlas::CaptureImpl::PendingAtlas>>   mAtlas;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PendingTile {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>> mTile;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryAtlas::CaptureImpl::PendingAtlas>>   mAtlas;
        // NOLINTEND
    };
#else // @header-generator platform
    struct PendingTile {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PendingRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::Bedrock::Threading::AsyncPromise<::GeometryAtlas::GeometryAtlasCapture>> mPromise;
        ::ll::TypedStorage<8, 24, ::std::vector<::GeometryAtlas::CaptureImpl::PendingTile>>                  mTiles;
        ::ll::TypedStorage<
            8,
            48,
            ::brstd::flat_map<
                uint64,
                ::std::shared_ptr<::GeometryAtlas::CaptureImpl::PendingAtlas>,
                ::std::less<uint64>,
                ::std::vector<uint64>,
                ::std::vector<::std::shared_ptr<::GeometryAtlas::CaptureImpl::PendingAtlas>>>>
                                                                      mAtlases;
        ::ll::TypedStorage<8, 16, ::brstd::future<::cg::ImageBuffer>> mDragonFuture;
        ::ll::TypedStorage<4, 4, ::brstd::once_flag>                  mAssignAtlases;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::GeometryAtlas::CaptureImpl::PendingRequest>>> mRequests;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void processCaptureRequests(::dragon::atlas::IAtlasRenderOperations& renderOps) /*override*/;

    virtual ::Bedrock::Threading::Async<::GeometryAtlas::GeometryAtlasCapture>
    requestCapture(::std::vector<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>&& tiles) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $processCaptureRequests(::dragon::atlas::IAtlasRenderOperations& renderOps);

    MCAPI ::Bedrock::Threading::Async<::GeometryAtlas::GeometryAtlasCapture>
    $requestCapture(::std::vector<::std::shared_ptr<::GeometryAtlas::IAtlasTile>>&& tiles);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct PendingRequest {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace GeometryAtlas

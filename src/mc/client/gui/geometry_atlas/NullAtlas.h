#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IGeometryAtlas.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/IGeometryAtlas.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace GeometryAtlas { class IItemTile; }
namespace GeometryAtlas { class IPaperDollTile; }
namespace GeometryAtlas { class IRenderContext; }
namespace GeometryAtlas { struct TileDefinition; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace GeometryAtlas {

#if defined(LL_PLAT_A) // @header-generator platform
class NullAtlas : public ::GeometryAtlas::IGeometryAtlas {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mPublisher;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class NullAtlas : public ::GeometryAtlas::IGeometryAtlas {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::std::vector<uint> const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Bedrock::PubSub::Connector<void(::std::vector<uint> const&)>& getTileChangeConnector() /*override*/;

    virtual ::std::shared_ptr<::GeometryAtlas::IItemTile>
    createItem(::GeometryAtlas::TileDefinition const&) /*override*/;

    virtual ::std::shared_ptr<::GeometryAtlas::IPaperDollTile>
    createDoll(::GeometryAtlas::TileDefinition const&) /*override*/;

    virtual void trySubmitUpdates(::GeometryAtlas::IRenderContext&) /*override*/;

    virtual bool hasAnyUpdates() const /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class NullAtlas {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
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
class IGeometryAtlas {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IGeometryAtlas {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGeometryAtlas() = default;

    virtual ::Bedrock::PubSub::Connector<void(::std::vector<uint> const&)>& getTileChangeConnector() = 0;

    virtual ::std::shared_ptr<::GeometryAtlas::IItemTile>
    createItem(::GeometryAtlas::TileDefinition const& definition) = 0;

    virtual ::std::shared_ptr<::GeometryAtlas::IPaperDollTile>
    createDoll(::GeometryAtlas::TileDefinition const& definition) = 0;

    virtual void trySubmitUpdates(::GeometryAtlas::IRenderContext& context) = 0;

    virtual bool hasAnyUpdates() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IGeometryAtlas {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace GeometryAtlas

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/PieceType.h"
#include "mc/world/actor/player/persona/Rarity.h"

// auto generated forward declare list
// clang-format off
class IStoreCatalogItem;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace persona {

struct PersonaOfflineCatalogItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                      mPieceId;
    ::ll::TypedStorage<8, 24, std::string>                      mProductId;
    ::ll::TypedStorage<8, 24, std::string>                      mCreatorName;
    ::ll::TypedStorage<1, 1, ::persona::Rarity>                 mPieceRarity;
    ::ll::TypedStorage<4, 4, ::SharedTypes::persona::PieceType> mPieceType;
    ::ll::TypedStorage<8, 24, std::string>                      mIconUrl;
    ::ll::TypedStorage<8, 24, std::string>                      mPieceName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersonaOfflineCatalogItem();

    MCNAPI explicit PersonaOfflineCatalogItem(::IStoreCatalogItem const&);

    MCNAPI PersonaOfflineCatalogItem(::persona::PersonaOfflineCatalogItem const&);

    MCNAPI std::string const& getProductId() const;

    MCNAPI ::Json::Value getSerializedItemForStoreCatalog() const;

    MCNAPI bool operator!=(::persona::PersonaOfflineCatalogItem const&) const;

    MCNAPI bool operator==(::persona::PersonaOfflineCatalogItem const&) const;

    MCNAPI ~PersonaOfflineCatalogItem();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::persona::PersonaOfflineCatalogItem const& INVALID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::IStoreCatalogItem const&);

    MCNAPI void* $ctor(::persona::PersonaOfflineCatalogItem const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace persona

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/realms/RealmsListError.h"
#include "mc/client/realms/RealmsListState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct RealmsWorldInfo;
namespace Realms { class RealmsList; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/realms/RealmsListError.h"
#include "mc/client/realms/RealmsListState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct RealmsWorldInfo;
namespace Realms { class RealmsList; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsList>> mRealmsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mRealmsListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mRealmsOnlinePlayersSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsListFacet(std::shared_ptr<Realms::RealmsList>);

    MCNAPI void forceFetchRealmsList();

    MCNAPI ::Realms::RealmsListError getError() const;

    MCNAPI ::RealmsAPI::Compatibility getRealmsCompatibility() const;

    MCNAPI ::Realms::RealmsListState getState() const;

    MCNAPI std::vector<RealmsWorldInfo> const& getWorldList() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[24]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsList>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RealmsListFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsList>> mRealmsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mRealmsListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mRealmsOnlinePlayersSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsListFacet(::std::shared_ptr<::Realms::RealmsList> realmsList);

    MCAPI void forceFetchRealmsList();

    MCAPI ::Realms::RealmsListError getError() const;

    MCAPI ::RealmsAPI::Compatibility getRealmsCompatibility() const;

    MCAPI ::Realms::RealmsListState getState() const;

    MCAPI ::std::vector<::RealmsWorldInfo> const& getWorldList() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsList> realmsList);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class RealmsListFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

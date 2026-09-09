#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/realms/RealmsListState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct RealmsWorldInfo;
namespace Realms { class RealmsList; }
// clang-format on

namespace OreUI {

class UnpairedRealmsListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::UnpairedRealmsListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsList>> mRealmsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mRealmsListSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    UnpairedRealmsListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UnpairedRealmsListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UnpairedRealmsListFacet(std::shared_ptr<Realms::RealmsList>);

    MCNAPI void forceFetchUnpairedRealmsList();

    MCNAPI std::optional<RealmsAPI::Compatibility> getRealmsCompatibility() const;

    MCNAPI ::Realms::RealmsListState getState() const;

    MCNAPI std::vector<RealmsWorldInfo> const& getWorldList() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[32]> NAME();
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

} // namespace OreUI

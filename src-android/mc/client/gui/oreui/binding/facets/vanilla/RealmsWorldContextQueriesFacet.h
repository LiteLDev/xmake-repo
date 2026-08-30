#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/RealmsWorldContextState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsWorldContext; }
// clang-format on

namespace OreUI {

class RealmsWorldContextQueriesFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmsWorldContextQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldContext>> mRealmsWorldContext;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mStateChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                         mIsDirty;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldContextState>            mState;
    ::ll::TypedStorage<8, 24, std::string>                                 mRealmName;
    ::ll::TypedStorage<8, 24, std::string>                                 mRealmId;
    ::ll::TypedStorage<8, 24, std::string>                                 mRealmOwnerId;
    ::ll::TypedStorage<4, 4, int>                                          mActiveSlotIndex;
    ::ll::TypedStorage<4, 4, int>                                          mMaxPlayers;
    ::ll::TypedStorage<1, 1, bool>                                         mClosed;
    ::ll::TypedStorage<1, 1, bool>                                         mExpired;
    ::ll::TypedStorage<1, 1, bool>                                         mFull;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldContextQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsWorldContextQueriesFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsWorldContextQueriesFacet(std::shared_ptr<Realms::RealmsWorldContext>);

    MCNAPI void _setFacetState(::Realms::RealmsWorldContextState);

    MCNAPI int getActiveSlotIndex() const;

    MCNAPI bool getIsClosed() const;

    MCNAPI bool getIsExpired() const;

    MCNAPI bool getIsFull() const;

    MCNAPI int getMaxPlayers() const;

    MCNAPI std::string const& getRealmId() const;

    MCNAPI std::string const& getRealmName() const;

    MCNAPI std::string const& getRealmOwnerId() const;

    MCNAPI ::Realms::RealmsWorldContextState getState() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[34]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsWorldContext>);
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

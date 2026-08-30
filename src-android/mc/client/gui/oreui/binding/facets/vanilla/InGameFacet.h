#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ClientLevel;
namespace Social { class MultiplayerServiceManager; }
// clang-format on

namespace OreUI {

class InGameFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::InGameFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsInGame;
    ::ll::TypedStorage<1, 1, bool> mIsHosting;
    ::ll::TypedStorage<1, 1, bool> mIsInMultiplayerSession;
    ::ll::UntypedStorage<8, 32>    mCurrentLevelId;
    ::ll::UntypedStorage<8, 48>    mGetCurrentLevel;
    ::ll::UntypedStorage<8, 32>    mMultiplayerServiceManager;
    // NOLINTEND

public:
    // prevent constructor by default
    InGameFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InGameFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InGameFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>> const,
        std::function<ClientLevel*()>
    );

    MCNAPI std::string const& getCurrentLevelId() const;

    MCNAPI bool getIsHosting() const;

    MCNAPI bool getIsInGame() const;

    MCNAPI bool getIsInMultiplayerSession() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[15]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<Social::MultiplayerServiceManager>> const,
        std::function<ClientLevel*()>
    );
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

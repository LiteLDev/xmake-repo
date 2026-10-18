#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ClientLevel;
namespace Social { class MultiplayerServiceManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ClientLevel;
namespace Social { class MultiplayerServiceManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class InGameFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::InGameFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                               mIsInGame;
    ::ll::TypedStorage<1, 1, bool>                               mIsHosting;
    ::ll::TypedStorage<1, 1, bool>                               mIsInMultiplayerSession;
    ::ll::TypedStorage<8, 32, ::std::string>                     mCurrentLevelId;
    ::ll::TypedStorage<8, 64, ::std::function<::ClientLevel*()>> mGetCurrentLevel;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>>
        mMultiplayerServiceManager;
    // NOLINTEND

public:
    // prevent constructor by default
    InGameFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InGameFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InGameFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::std::function<::ClientLevel*()>                                  getCurrentLevel
    );

    MCFOLD ::std::string const& getCurrentLevelId() const;

    MCFOLD bool getIsHosting() const;

    MCFOLD bool getIsInGame() const;

    MCFOLD bool getIsInMultiplayerSession() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager> multiplayerServiceManager,
        ::std::function<::ClientLevel*()>                                  getCurrentLevel
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class InGameFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

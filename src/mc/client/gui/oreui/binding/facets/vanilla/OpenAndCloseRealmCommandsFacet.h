#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/realms/OpenAndCloseRealmManager.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class OpenAndCloseRealmManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/OpenAndCloseRealmManager.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class OpenAndCloseRealmManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class OpenAndCloseRealmCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::OpenAndCloseRealmCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::OpenAndCloseRealmManager>> mOpenAndCloseRealmManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mRealmOpenCloseStateSubscriber;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenAndCloseRealmCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenAndCloseRealmCommandsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OpenAndCloseRealmCommandsFacet(std::shared_ptr<Realms::OpenAndCloseRealmManager>);

    MCNAPI void closeRealm(long);

    MCNAPI ::Realms::OpenAndCloseRealmManager::RequestQueueStatus getStatus() const;

    MCNAPI void openRealm(long);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[39]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::OpenAndCloseRealmManager>);
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
class OpenAndCloseRealmCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::OpenAndCloseRealmCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::OpenAndCloseRealmManager>> mOpenAndCloseRealmManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mRealmOpenCloseStateSubscriber;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenAndCloseRealmCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OpenAndCloseRealmCommandsFacet(
        ::std::shared_ptr<::Realms::OpenAndCloseRealmManager> openAndCloseRealmManager
    );

    MCAPI void closeRealm(int64 realmId);

    MCAPI ::Realms::OpenAndCloseRealmManager::RequestQueueStatus getStatus() const;

    MCAPI void openRealm(int64 realmId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::OpenAndCloseRealmManager> openAndCloseRealmManager);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};
#else // @header-generator platform
class OpenAndCloseRealmCommandsFacet {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

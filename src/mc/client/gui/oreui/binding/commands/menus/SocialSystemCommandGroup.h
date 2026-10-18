#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
namespace Social { class ReceivedFriendRequestsList; }
namespace Social { class SocialDrawerManager; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Social { class ReceivedFriendRequestsList; }
namespace Social { class SocialDrawerManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class SocialSystemCommandGroup : public ::OreUI::CommandGroupBase<OreUI::SocialSystemCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::SocialDrawerManager>>        mSocialDrawerManager;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::ReceivedFriendRequestsList>> mReceivedFriendRequestsList;
    ::ll::UntypedStorage<8, 144>                                                   mReportIsDrawerVisible;
    ::ll::UntypedStorage<8, 144>                                                   mSetPollingForReceivedRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialSystemCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SocialSystemCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SocialSystemCommandGroup(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SocialSystemCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::SocialSystemCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::SocialDrawerManager>>        mSocialDrawerManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::ReceivedFriendRequestsList>> mReceivedFriendRequestsList;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, bool>>              mReportIsDrawerVisible;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, bool>>              mSetPollingForReceivedRequests;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialSystemCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SocialSystemCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class SocialSystemCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/network/realms/RealmsServerMode.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
namespace Realms { class RealmsServerSettingsManager; }
namespace Realms { struct RealmId; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/network/realms/RealmsServerMode.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsServerSettingsManager; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RealmsServerSettingsCommandGroup : public ::OreUI::CommandGroupBase<OreUI::RealmsServerSettingsCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mRealmsServerSettingsManager;
    ::ll::UntypedStorage<8, 248> mTaskGroup;
    ::ll::UntypedStorage<8, 144> mFetchRealmsServerMode;
    ::ll::UntypedStorage<8, 144> mSetRealmsServerMode;
    ::ll::UntypedStorage<8, 144> mSetRealmsServerMaxPlayerCount;
    ::ll::UntypedStorage<8, 144> mSetRealmsServerRenderDist;
    ::ll::UntypedStorage<8, 144> mSetRealmsServerSimDist;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServerSettingsCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsServerSettingsCommandGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsServerSettingsCommandGroup(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[33]> NAME();
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
class RealmsServerSettingsCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RealmsServerSettingsCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServerSettingsManager>>
                                                                           mRealmsServerSettingsManager;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                mTaskGroup;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64>> mFetchRealmsServerMode;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64, ::Realms::RealmsServerMode>>
                                                                                mSetRealmsServerMode;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64, int>> mSetRealmsServerMaxPlayerCount;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64, int>> mSetRealmsServerRenderDist;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int64, int>> mSetRealmsServerSimDist;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServerSettingsCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsServerSettingsCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsServerSettingsCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class RealmsServerSettingsCommandGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI

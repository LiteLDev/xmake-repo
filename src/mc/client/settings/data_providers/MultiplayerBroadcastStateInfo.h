#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Settings::RegistryBuilder { class IBuilderContext; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
struct MultiplayerBroadcastStateInfo {
public:
    // MultiplayerBroadcastStateInfo inner types define
    using GetBroadcastStateFn = std::function<int(Settings::RegistryBuilder::IBuilderContext&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                 mTabPrefix;
    ::ll::UntypedStorage<8, 48>                 mGetBroadcastStateFn;
    ::ll::TypedStorage<1, 1, bool>              mShouldUseDescriptions;
    ::ll::TypedStorage<8, 24, std::vector<int>> mIgnoredInvitations;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerBroadcastStateInfo& operator=(MultiplayerBroadcastStateInfo const&);
    MultiplayerBroadcastStateInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MultiplayerBroadcastStateInfo(::Settings::MultiplayerBroadcastStateInfo const&);

    MCNAPI ~MultiplayerBroadcastStateInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Settings::MultiplayerBroadcastStateInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct MultiplayerBroadcastStateInfo {
public:
    // MultiplayerBroadcastStateInfo inner types define
    using GetBroadcastStateFn = ::std::function<int(::Settings::RegistryBuilder::IBuilderContext&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                       mTabPrefix;
    ::ll::TypedStorage<8, 64, ::std::function<int(::Settings::RegistryBuilder::IBuilderContext&)>> mGetBroadcastStateFn;
    ::ll::TypedStorage<1, 1, bool>                mShouldUseDescriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mIgnoredInvitations;
    // NOLINTEND

public:
    // prevent constructor by default
    MultiplayerBroadcastStateInfo& operator=(MultiplayerBroadcastStateInfo const&);
    MultiplayerBroadcastStateInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MultiplayerBroadcastStateInfo(::Settings::MultiplayerBroadcastStateInfo const&);

    MCAPI ~MultiplayerBroadcastStateInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Settings::MultiplayerBroadcastStateInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct MultiplayerBroadcastStateInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings

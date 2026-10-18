#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/SetTitlePacketPayload.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on
#endif // @header-generator platform

struct PlayerTitleCommandEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                mSender;
    ::ll::UntypedStorage<8, 24>                           mTargets;
    ::ll::TypedStorage<8, 24, std::string>                mTitle;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mFilteredTitle;
    ::ll::UntypedStorage<4, 4>                            mTitleType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                             mSender;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakRef<::EntityContext>>> mTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                             mTitle;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>            mFilteredTitle;
    ::ll::TypedStorage<4, 4, ::SetTitlePacketPayload::TitleType>         mTitleType;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PlayerTitleCommandEvent& operator=(PlayerTitleCommandEvent const&);
    PlayerTitleCommandEvent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerTitleCommandEvent(::PlayerTitleCommandEvent const&);

    MCNAPI ~PlayerTitleCommandEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerTitleCommandEvent const&);
#else // @header-generator platform
    MCAPI ~PlayerTitleCommandEvent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

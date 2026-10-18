#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/json/Value.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

struct PlayerFormResponseEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>    mPlayer;
    ::ll::TypedStorage<4, 4, uint> mFormId;
    ::ll::UntypedStorage<8, 16>    mFormResponse;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerFormResponseEvent& operator=(PlayerFormResponseEvent const&);
    PlayerFormResponseEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PlayerFormResponseEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>> mPlayer;
    ::ll::TypedStorage<4, 4, uint>                        mFormId;
    ::ll::TypedStorage<8, 16, ::Json::Value>              mFormResponse;
#endif // @header-generator platform
    // NOLINTEND
};

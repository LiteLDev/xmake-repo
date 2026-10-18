#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/ecs/WeakEntityRef.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityContext;
#if defined(LL_PLAT_A) // @header-generator platform
struct SuspendPlayerSave;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PlayerSuspendLevelStorageSaveToken {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 24, ::WeakEntityRef>                    mWeakEntity;
    ::ll::TypedStorage<8, 16, std::shared_ptr<SuspendPlayerSave>> mSharedSuspendToken;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkf58512;
    ::ll::UntypedStorage<8, 16> mUnk1626c0;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    PlayerSuspendLevelStorageSaveToken& operator=(PlayerSuspendLevelStorageSaveToken const&);
    PlayerSuspendLevelStorageSaveToken(PlayerSuspendLevelStorageSaveToken const&);
    PlayerSuspendLevelStorageSaveToken();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit PlayerSuspendLevelStorageSaveToken(::EntityContext&);

    MCNAPI PlayerSuspendLevelStorageSaveToken(::PlayerSuspendLevelStorageSaveToken&&);
#else // @header-generator platform
    MCNAPI explicit PlayerSuspendLevelStorageSaveToken(::EntityContext& entity);
#endif // @header-generator platform

    MCNAPI ~PlayerSuspendLevelStorageSaveToken();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::EntityContext&);

    MCNAPI void* $ctor(::PlayerSuspendLevelStorageSaveToken&&);
#else // @header-generator platform
    MCNAPI void* $ctor(::EntityContext& entity);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DimensionManager;
class GameplayUserManager;
class IPlayerTickProxy;
struct Tick;
// clang-format on

class PlayerTickManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                  mDimensionManager;
    ::ll::UntypedStorage<8, 24>                                                  mGameplayUserManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPlayerTickProxy>>> mPlayerTickProxy;
    ::ll::TypedStorage<1, 1, bool const>                                         mIsClientSide;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DimensionManager> const>    mDimensionManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> const> mGameplayUserManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerTickProxy>>>      mPlayerTickProxy;
    ::ll::TypedStorage<1, 1, bool const>                                                  mIsClientSide;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTickManager();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PlayerTickManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        std::unique_ptr<IPlayerTickProxy>,
        bool
#else // @header-generator platform
    MCAPI PlayerTickManager(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IPlayerTickProxy>                playerTickProxy,
        bool                                                 isClientSide
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void processPlayerNetworking(::Tick const&);
#else // @header-generator platform
    MCAPI void processPlayerNetworking(::Tick const& currentTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tick(::Tick const&);
#else // @header-generator platform
    MCAPI void tick(::Tick const& currentTick);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~PlayerTickManager();
#else // @header-generator platform
    MCAPI ~PlayerTickManager();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        std::unique_ptr<IPlayerTickProxy>,
        bool
#else // @header-generator platform
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::DimensionManager>    dimensionManager,
        ::Bedrock::NotNullNonOwnerPtr<::GameplayUserManager> gameplayUserManager,
        ::std::unique_ptr<::IPlayerTickProxy>                playerTickProxy,
        bool                                                 isClientSide
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

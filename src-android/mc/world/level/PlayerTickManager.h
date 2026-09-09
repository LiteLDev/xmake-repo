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
    ::ll::UntypedStorage<8, 24>                                                  mDimensionManager;
    ::ll::UntypedStorage<8, 24>                                                  mGameplayUserManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IPlayerTickProxy>>> mPlayerTickProxy;
    ::ll::TypedStorage<1, 1, bool const>                                         mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTickManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayerTickManager(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        std::unique_ptr<IPlayerTickProxy>,
        bool
    );

    MCNAPI void processPlayerNetworking(::Tick const&);

    MCNAPI void tick(::Tick const&);

    MCNAPI ~PlayerTickManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<DimensionManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<GameplayUserManager>>,
        std::unique_ptr<IPlayerTickProxy>,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationControllerPlayer;
class ActorAnimationControllerState;
class ApplyAnimationContext;
class RenderParams;
namespace Json { class Value; }
// clang-format on

class ActorAnimationController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>                                              mName;
    ::ll::UntypedStorage<8, 24>                                                            mVersion;
    ::ll::TypedStorage<8, 8, ulong>                                                        mInitialStateIndex;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ActorAnimationControllerState>>> mStates;
    ::ll::TypedStorage<8, 24, std::string>                                                 mSourceFilePathWithExtension;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAnimationController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorAnimationController(::HashedString const&, ::SemVersion const&, std::string const&);

    MCNAPI std::shared_ptr<ActorAnimationControllerState>& addState(::HashedString const&);

    MCNAPI void resolveTransitionStateIndices();

    MCNAPI ~ActorAnimationController();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const&, ::SemVersion const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

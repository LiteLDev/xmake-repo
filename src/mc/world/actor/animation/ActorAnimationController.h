#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ActorAnimationControllerPlayer;
#else // @header-generator platform
#endif // @header-generator platform
class ActorAnimationControllerState;
#if defined(LL_PLAT_A) // @header-generator platform
class ApplyAnimationContext;
class RenderParams;
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ActorAnimationController {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                                              mName;
    ::ll::UntypedStorage<8, 24>                                                            mVersion;
    ::ll::TypedStorage<8, 8, ulong>                                                        mInitialStateIndex;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ActorAnimationControllerState>>> mStates;
    ::ll::TypedStorage<8, 24, std::string>                                                 mSourceFilePathWithExtension;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString>                                                    mName;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                                      mVersion;
    ::ll::TypedStorage<8, 8, uint64>                                                             mInitialStateIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ActorAnimationControllerState>>> mStates;
    ::ll::TypedStorage<8, 32, ::std::string> mSourceFilePathWithExtension;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    ActorAnimationController();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActorAnimationController();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorAnimationController(::HashedString const&, ::SemVersion const&, std::string const&);

    MCNAPI std::shared_ptr<ActorAnimationControllerState>& addState(::HashedString const&);

    MCNAPI void resolveTransitionStateIndices();

    MCNAPI ~ActorAnimationController();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ActorAnimationController(
        ::HashedString const& name,
        ::SemVersion const&   version,
        ::std::string const&  sourceFilePathWithExtension
    );

    MCAPI ::std::shared_ptr<::ActorAnimationControllerState>& addState(::HashedString const& name);

    MCAPI void resolveTransitionStateIndices();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::HashedString const&, ::SemVersion const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void*
    $ctor(::HashedString const& name, ::SemVersion const& version, ::std::string const& sourceFilePathWithExtension);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

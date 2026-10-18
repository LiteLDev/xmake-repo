#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFetcher;
class RenderParams;
struct ActorDefinitionIdentifier;
// clang-format on

class ActorSoundIdentifier {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorDefinitionIdentifier const&> mIdentifier;
    ::ll::UntypedStorage<8, 24>                                  mActorFetcher;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                    mActorId;
    ::ll::TypedStorage<1, 1, bool>                               mIsBaby;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ActorDefinitionIdentifier const&>                mIdentifier;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ActorFetcher const>> mActorFetcher;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                   mActorId;
    ::ll::TypedStorage<1, 1, bool>                                              mIsBaby;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSoundIdentifier& operator=(ActorSoundIdentifier const&);
    ActorSoundIdentifier(ActorSoundIdentifier const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ActorSoundIdentifier();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorSoundIdentifier();
#else // @header-generator platform
    MCAPI explicit ActorSoundIdentifier(::Actor const& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorSoundIdentifier(::Actor const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::optional<::RenderParams> tryCreateRenderParamsForVariants() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID getActorId() const;

    MCNAPI ::ActorDefinitionIdentifier const& getIdentifier() const;

    MCNAPI bool isBaby() const;

    MCNAPI bool isValid() const;

    MCNAPI std::optional<RenderParams> tryCreateRenderParamsForVariants() const;
#else // @header-generator platform
    MCAPI ~ActorSoundIdentifier();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::Actor const& actor);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Actor const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

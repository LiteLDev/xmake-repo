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
    ::ll::TypedStorage<8, 8, ::ActorDefinitionIdentifier const&> mIdentifier;
    ::ll::UntypedStorage<8, 24>                                  mActorFetcher;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                    mActorId;
    ::ll::TypedStorage<1, 1, bool>                               mIsBaby;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSoundIdentifier& operator=(ActorSoundIdentifier const&);
    ActorSoundIdentifier(ActorSoundIdentifier const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSoundIdentifier();

    MCNAPI explicit ActorSoundIdentifier(::Actor const&);

    MCNAPI ::ActorUniqueID getActorId() const;

    MCNAPI ::ActorDefinitionIdentifier const& getIdentifier() const;

    MCNAPI bool isBaby() const;

    MCNAPI bool isValid() const;

    MCNAPI std::optional<RenderParams> tryCreateRenderParamsForVariants() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Actor const&);
    // NOLINTEND
};

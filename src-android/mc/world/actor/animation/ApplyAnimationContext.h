#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/ApplyAnimationCache.h"

// auto generated forward declare list
// clang-format off
class ActorSkeletalAnimation;
class BaseActorRenderContext;
class HashedString;
class RenderParams;
// clang-format on

class ApplyAnimationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 8, ::ApplyAnimationCache const> mCache;
    // NOLINTEND

public:
    // prevent constructor by default
    ApplyAnimationContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ApplyAnimationContext();

    virtual void fireParticleEvents(::ActorSkeletalAnimation const&, std::unordered_map<HashedString, HashedString> const&, ::BaseActorRenderContext&, float, float, ::RenderParams&) const;

    virtual bool shouldAnimateBones(::RenderParams const&) const;

    virtual bool shouldActorRenderUpdateEffects(::BaseActorRenderContext const&) const;

    virtual bool hasParticleSystemEngine(::RenderParams const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ApplyAnimationContext(::ApplyAnimationCache const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ApplyAnimationCache const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $fireParticleEvents(
        ::ActorSkeletalAnimation const&,
        std::unordered_map<HashedString, HashedString> const&,
        ::BaseActorRenderContext&,
        float,
        float,
        ::RenderParams&
    ) const;

    MCNAPI bool $shouldAnimateBones(::RenderParams const&) const;

    MCNAPI bool $shouldActorRenderUpdateEffects(::BaseActorRenderContext const&) const;

    MCNAPI bool $hasParticleSystemEngine(::RenderParams const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

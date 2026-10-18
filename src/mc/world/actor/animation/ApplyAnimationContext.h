#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/animation/ApplyAnimationCache.h"

// auto generated forward declare list
// clang-format off
class ActorSkeletalAnimation;
#if defined(LL_PLAT_A) // @header-generator platform
class BaseActorRenderContext;
#else // @header-generator platform
#endif // @header-generator platform
class HashedString;
class RenderParams;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class BaseActorRenderContext;
#endif // @header-generator platform
// clang-format on

class ApplyAnimationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 8, ::ApplyAnimationCache const> mCache;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ApplyAnimationContext();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ApplyAnimationContext();
#else // @header-generator platform
    virtual ~ApplyAnimationContext() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireParticleEvents(::ActorSkeletalAnimation const&, std::unordered_map<HashedString, HashedString> const&, ::BaseActorRenderContext&, float, float, ::RenderParams&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void fireParticleEvents(
        ::ActorSkeletalAnimation const&,
        ::std::unordered_map<::HashedString, ::HashedString> const&,
        ::BaseActorRenderContext&,
        float,
        float,
        ::RenderParams&
    ) const;
#else // LL_PLAT_C
    virtual void fireParticleEvents(
        ::ActorSkeletalAnimation const&                             animationData,
        ::std::unordered_map<::HashedString, ::HashedString> const& effectsRef,
        ::BaseActorRenderContext&                                   baseActorRenderContext,
        float                                                       animTime,
        float                                                       lastAnimTime,
        ::RenderParams&                                             renderParams
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldAnimateBones(::RenderParams const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual bool shouldAnimateBones(::RenderParams const&) const;
#else // LL_PLAT_C
    virtual bool shouldAnimateBones(::RenderParams const& renderParams) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool shouldActorRenderUpdateEffects(::BaseActorRenderContext const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual bool shouldActorRenderUpdateEffects(::BaseActorRenderContext const&) const;
#else // LL_PLAT_C
    virtual bool shouldActorRenderUpdateEffects(::BaseActorRenderContext const& context) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasParticleSystemEngine(::RenderParams const&) const;
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual bool hasParticleSystemEngine(::RenderParams const&) const;
#else // LL_PLAT_C
    virtual bool hasParticleSystemEngine(::RenderParams const& renderParams) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $fireParticleEvents(
        ::ActorSkeletalAnimation const&,
        std::unordered_map<HashedString, HashedString> const&,
        ::BaseActorRenderContext&,
        float,
        float,
        ::RenderParams&
    ) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $fireParticleEvents(
        ::ActorSkeletalAnimation const&,
        ::std::unordered_map<::HashedString, ::HashedString> const&,
        ::BaseActorRenderContext&,
        float,
        float,
        ::RenderParams&
    ) const;
#else // LL_PLAT_C
    MCFOLD void $fireParticleEvents(
        ::ActorSkeletalAnimation const&                             animationData,
        ::std::unordered_map<::HashedString, ::HashedString> const& effectsRef,
        ::BaseActorRenderContext&                                   baseActorRenderContext,
        float                                                       animTime,
        float                                                       lastAnimTime,
        ::RenderParams&                                             renderParams
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldAnimateBones(::RenderParams const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD bool $shouldAnimateBones(::RenderParams const&) const;
#else // LL_PLAT_C
    MCFOLD bool $shouldAnimateBones(::RenderParams const& renderParams) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $shouldActorRenderUpdateEffects(::BaseActorRenderContext const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD bool $shouldActorRenderUpdateEffects(::BaseActorRenderContext const&) const;
#else // LL_PLAT_C
    MCFOLD bool $shouldActorRenderUpdateEffects(::BaseActorRenderContext const& context) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasParticleSystemEngine(::RenderParams const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD bool $hasParticleSystemEngine(::RenderParams const&) const;
#else // LL_PLAT_C
    MCFOLD bool $hasParticleSystemEngine(::RenderParams const& renderParams) const;
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

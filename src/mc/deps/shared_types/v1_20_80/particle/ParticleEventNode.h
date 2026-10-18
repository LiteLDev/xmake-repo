#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleSoundEffectEvent.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleVisualEffectEvent.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_20_80 { struct ParticleEventRandomNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEventNode {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mSequenceNodes;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_20_80::ParticleEventRandomNode>>> mRandomNodes;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>                          mEventExpression;
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_20_80::ParticleVisualEffectEvent>             mVisualEffect;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_20_80::ParticleSoundEffectEvent>> mSoundEffect;
    ::ll::TypedStorage<8, 24, std::string>                                                    mLogMessage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v1_20_80::ParticleEventNode>>>
        mSequenceNodes;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::SharedTypes::v1_20_80::ParticleEventRandomNode>>>
                                                                                                  mRandomNodes;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ExpressionNode>                              mEventExpression;
    ::ll::TypedStorage<8, 104, ::SharedTypes::v1_20_80::ParticleVisualEffectEvent>                mVisualEffect;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::v1_20_80::ParticleSoundEffectEvent>> mSoundEffect;
    ::ll::TypedStorage<8, 32, ::std::string>                                                      mLogMessage;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ParticleEventNode& operator=(ParticleEventNode const&);
    ParticleEventNode();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode&&);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_20_80::ParticleEventNode& operator=(::SharedTypes::v1_20_80::ParticleEventNode const&);
#else // @header-generator platform
    MCAPI ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleEventNode const&) const;
#else // @header-generator platform
    MCAPI bool operator==(::SharedTypes::v1_20_80::ParticleEventNode const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ParticleEventNode();
#else // @header-generator platform
    MCAPI ~ParticleEventNode();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode&&);
#endif

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode const&);
#endif // @header-generator platform
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

} // namespace SharedTypes::v1_20_80

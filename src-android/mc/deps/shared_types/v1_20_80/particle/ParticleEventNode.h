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
    ::ll::UntypedStorage<8, 32> mSequenceNodes;
    ::ll::TypedStorage<8, 32, std::optional<std::vector<SharedTypes::v1_20_80::ParticleEventRandomNode>>> mRandomNodes;
    ::ll::TypedStorage<8, 40, ::SharedTypes::Legacy::ExpressionNode>                          mEventExpression;
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_20_80::ParticleVisualEffectEvent>             mVisualEffect;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::v1_20_80::ParticleSoundEffectEvent>> mSoundEffect;
    ::ll::TypedStorage<8, 24, std::string>                                                    mLogMessage;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEventNode& operator=(::SharedTypes::v1_20_80::ParticleEventNode const&);

    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleEventNode const&) const;

    MCNAPI ~ParticleEventNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/events/ParticleSoundEffectEvent.h"
#include "mc/client/particlesystem/particle/events/ParticleVisualEffectEvent.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
// clang-format on

namespace ParticleSystem {

class ParticleEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ParticleSystem::ParticleVisualEffectEvent> mVisualEffect;
    ::ll::TypedStorage<4, 4, ::ParticleSystem::ParticleSoundEffectEvent>   mSoundEffect;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                            mEventExpression;
    ::ll::TypedStorage<8, 24, std::string>                                 mLogMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEvent& operator=(ParticleEvent const&);
    ParticleEvent(ParticleEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParticleEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem

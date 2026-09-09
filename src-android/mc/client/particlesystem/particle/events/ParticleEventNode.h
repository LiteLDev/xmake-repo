#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ParticleEvent; }
namespace SharedTypes::v1_20_80 { struct ParticleEventNode; }
// clang-format on

namespace ParticleSystem {

class ParticleEventNode {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ParticleSystem::ParticleEventNode>>> mSequenceNodes;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<float, std::unique_ptr<ParticleSystem::ParticleEventNode>>>> mRandomNodes;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ParticleSystem::ParticleEvent>> mEvent;
    ::ll::TypedStorage<4, 4, float> mRandomNodesWeightSum;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventNode& operator=(ParticleEventNode const&);
    ParticleEventNode(ParticleEventNode const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ParticleEventNode(::ConstDeserializeDataParams const&);

    MCNAPI ::ParticleSystem::ParticleEvent const* getEvent() const;

    MCNAPI ::ParticleSystem::ParticleEventNode const* getRandomNode(::Random&) const;

    MCNAPI void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEventNode&);

    MCNAPI ~ParticleEventNode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ConstDeserializeDataParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem

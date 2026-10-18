#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Random;
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ParticleEvent; }
namespace SharedTypes::v1_20_80 { struct ParticleEventNode; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ConstDeserializeDataParams;
namespace ParticleSystem { class ParticleEvent; }
namespace SharedTypes::v1_20_80 { struct ParticleEventNode; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ParticleEventNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ParticleSystem::ParticleEventNode>>> mSequenceNodes;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<float, ::std::unique_ptr<::ParticleSystem::ParticleEventNode>>>>
                                                                                 mRandomNodes;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ParticleSystem::ParticleEvent>> mEvent;
    ::ll::TypedStorage<4, 4, float>                                              mRandomNodesWeightSum;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventNode();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ParticleEventNode(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI explicit ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode const& nodeData);

    MCAPI void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEventNode& data);

    MCAPI ~ParticleEventNode();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode const& nodeData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class ParticleEventNode {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem

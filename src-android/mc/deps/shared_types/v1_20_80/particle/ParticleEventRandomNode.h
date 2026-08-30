#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEventNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEventRandomNode : public ::SharedTypes::v1_20_80::ParticleEventNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mWeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleEventRandomNode(::SharedTypes::v1_20_80::ParticleEventRandomNode const&);

    MCNAPI ParticleEventRandomNode(float, ::SharedTypes::v1_20_80::ParticleEventNode&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEventRandomNode&
    operator=(::SharedTypes::v1_20_80::ParticleEventRandomNode const&);

    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleEventRandomNode const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventRandomNode const&);

    MCNAPI void* $ctor(float, ::SharedTypes::v1_20_80::ParticleEventNode&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80

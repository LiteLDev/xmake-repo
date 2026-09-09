#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleBasicRenderParameters.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                            mIdentifier;
    ::ll::TypedStorage<8, 64, ::SharedTypes::v1_20_80::ParticleBasicRenderParameters> mBasicRenderParams;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_20_80::ParticleEffectDescription const&) const;

    MCNAPI ~ParticleEffectDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80

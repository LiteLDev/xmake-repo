#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_20_80/particle/ParticleCurve.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectComponents.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEffectDescription.h"
#include "mc/deps/shared_types/v1_20_80/particle/ParticleEventNode.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_20_80::ParticleEffectDescription>                         mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_20_80::ParticleEffectComponents>                          mComponents;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, SharedTypes::v1_20_80::ParticleCurve>>> mCurves;
    ::ll::TypedStorage<8, 32, std::optional<std::map<std::string, SharedTypes::v1_20_80::ParticleEventNode>>> mEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleEffectData(::SharedTypes::v1_20_80::ParticleEffectData const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectData& operator=(::SharedTypes::v1_20_80::ParticleEffectData&&);

    MCNAPI ~ParticleEffectData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEffectData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80

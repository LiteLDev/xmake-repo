#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveType.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class RenderParams;
struct ConstDeserializeDataParams;
namespace SharedTypes::v1_20_80 { struct ParticleCurveBase; }
// clang-format on

namespace ParticleSystem {

class ParticleCurveBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString> mMolangVariableName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleCurveBase();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase&, ::HashedString const&) = 0;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase&) = 0;

    virtual void parseJson(::ConstDeserializeDataParams const&, ::HashedString const&) = 0;

    virtual void evaluateCurve(::RenderParams&) = 0;

    virtual ::ParticleSystem::ParticleCurveType getCurveType() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ParticleSystem::ParticleCurveType $getCurveType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem

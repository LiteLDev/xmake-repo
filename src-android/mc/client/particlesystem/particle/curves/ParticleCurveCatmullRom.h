#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveSimpleBase.h"
#include "mc/client/particlesystem/particle/curves/ParticleCurveType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
namespace SharedTypes::v1_20_80 { struct ParticleCurveBase; }
// clang-format on

namespace ParticleSystem {

class ParticleCurveCatmullRom : public ::ParticleSystem::ParticleCurveSimpleBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleCurveCatmullRom();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase&, ::HashedString const&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase&);

    virtual ::ParticleSystem::ParticleCurveType getCurveType() const;

    virtual ulong _getMinCurveNodesAllowed();

    virtual ulong _getMaxCurveNodesAllowed();

    virtual float _evaluateCurve(float, ::RenderParams&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase&, ::HashedString const&);

    MCNAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase&);

    MCNAPI ::ParticleSystem::ParticleCurveType $getCurveType() const;

    MCNAPI ulong $_getMinCurveNodesAllowed();

    MCNAPI ulong $_getMaxCurveNodesAllowed();

    MCNAPI float $_evaluateCurve(float, ::RenderParams&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem

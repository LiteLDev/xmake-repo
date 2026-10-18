#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveSimpleBase.h"
#include "mc/client/particlesystem/particle/curves/ParticleCurveType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
namespace SharedTypes::v1_20_80 { struct ParticleCurveBase; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/curves/ParticleCurveSimpleBase.h"
#include "mc/client/particlesystem/particle/curves/ParticleCurveType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class RenderParams;
namespace SharedTypes::v1_20_80 { struct ParticleCurveBase; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ParticleCurveCatmullRom : public ::ParticleSystem::ParticleCurveSimpleBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase& data, ::HashedString const& curveName) /*override*/;

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase& data) /*override*/;

    virtual uint64 _getMinCurveNodesAllowed() /*override*/;

    virtual uint64 _getMaxCurveNodesAllowed() /*override*/;

    virtual float _evaluateCurve(float t, ::RenderParams& renderParams) /*override*/;

    virtual ::ParticleSystem::ParticleCurveType getCurveType() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initializeFromData(::SharedTypes::v1_20_80::ParticleCurveBase& data, ::HashedString const& curveName);

    MCAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleCurveBase& data);

    MCFOLD uint64 $_getMinCurveNodesAllowed();

    MCFOLD uint64 $_getMaxCurveNodesAllowed();

    MCAPI float $_evaluateCurve(float t, ::RenderParams& renderParams);

    MCFOLD ::ParticleSystem::ParticleCurveType $getCurveType() const;
    // NOLINTEND
};
#else // @header-generator platform
class ParticleCurveCatmullRom {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace ParticleSystem

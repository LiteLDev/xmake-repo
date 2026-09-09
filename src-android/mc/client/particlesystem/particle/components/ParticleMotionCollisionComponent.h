#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/ComponentAccessParticleEmitter.h"
#include "mc/client/particlesystem/particle/components/ParticleMotionComponentBase.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class AABB;
class RenderParams;
struct ConstDeserializeDataParams;
namespace Json { class Value; }
namespace ParticleSystem { class ComponentAccessParticleEmitter; }
namespace ParticleSystem { struct CommonParticle; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectComponent; }
// clang-format on

namespace ParticleSystem {

class ParticleMotionCollisionComponent : public ::ParticleSystem::ParticleMotionComponentBase {
public:
    // ParticleMotionCollisionComponent inner types declare
    // clang-format off
    struct SweepResult;
    // clang-format on

    // ParticleMotionCollisionComponent inner types define
    struct SweepResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mFrom;
        ::ll::TypedStorage<4, 12, ::Vec3> mTo;
        ::ll::TypedStorage<4, 12, ::Vec3> mVelocity;
        ::ll::TypedStorage<4, 12, ::Vec3> mIntersectionNorm;
        ::ll::TypedStorage<1, 1, bool>    mHit;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                            mCollisionEnabledExpr;
    ::ll::TypedStorage<4, 4, float>                                        mCollisionDrag;
    ::ll::TypedStorage<4, 4, float>                                        mCoefficientOfRestitution;
    ::ll::TypedStorage<4, 12, ::Vec3>                                      mCollisionRadius;
    ::ll::TypedStorage<1, 1, bool>                                         mExpireOnContact;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<float, HashedString>>> mCollisionEvents;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ParticleMotionCollisionComponent();

    virtual void initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    virtual void parseJson(::ConstDeserializeDataParams const&);

    virtual int getSortOrderNumber() const;

    virtual void updateParticleMotion(::ParticleSystem::ComponentAccessParticleEmitter&, ::ParticleSystem::CommonParticle&, ::RenderParams&, std::chrono::duration<long long, std::ratio<1, 1000000000>> const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _extractEvent(::Json::Value const&);

    MCNAPI ::ParticleSystem::ParticleMotionCollisionComponent::SweepResult _sweep(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::ParticleSystem::ParticleMotionCollisionComponent::SweepResult const&,
        ::Vec3 const&,
        uint
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFromData(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    MCNAPI void $upgradeToSharedTypes(::SharedTypes::v1_20_80::ParticleEffectComponent&);

    MCNAPI void $parseJson(::ConstDeserializeDataParams const&);

    MCNAPI int $getSortOrderNumber() const;

    MCNAPI void $updateParticleMotion(
        ::ParticleSystem::ComponentAccessParticleEmitter&,
        ::ParticleSystem::CommonParticle&,
        ::RenderParams&,
        std::chrono::duration<long long, std::ratio<1, 1000000000>> const&
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ParticleSystem

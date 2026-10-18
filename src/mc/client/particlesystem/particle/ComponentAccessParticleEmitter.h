#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/ParticleEmitter.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class Matrix;
class Vec3;
struct BrightnessPair;
namespace ParticleSystem { struct CommonParticle; }
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particlesystem/particle/ParticleEmitter.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class Matrix;
class Vec3;
struct BrightnessPair;
namespace ParticleSystem { struct CommonParticle; }
namespace mce { class Color; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace ParticleSystem {

#if defined(LL_PLAT_A) // @header-generator platform
class ComponentAccessParticleEmitter : public ::ParticleSystem::ParticleEmitter {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ComponentAccessParticleEmitter : public ::ParticleSystem::ParticleEmitter {
#else // @header-generator platform
class ComponentAccessParticleEmitter {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // ComponentAccessParticleEmitter inner types declare
    // clang-format off
    struct CollisionHelper;
    // clang-format on

    // ComponentAccessParticleEmitter inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct CollisionHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 24, ::AABB> mHitShape;
        ::ll::TypedStorage<4, 4, float>   mHitAlpha;
        ::ll::TypedStorage<1, 1, uchar>   mHitAxis;
        // NOLINTEND

    public:
        // prevent constructor by default
        CollisionHelper();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI CollisionHelper(float const, uchar const, ::AABB const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(float const, uchar const, ::AABB const&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mEmissionAccumulator;
    ::ll::TypedStorage<4, 4, float> mCurrentEmitRate;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ::Vec3 const& getPosition() const = 0;

    virtual ::Matrix const& getTransform() const = 0;

    virtual ::Vec3 const& getWorldPosition() const = 0;

    virtual ::Vec3 const& getWorldVelocity() const = 0;

    virtual void setMaxNumParticles(ulong) = 0;

    virtual ulong getMaxNumParticles() const = 0;

    virtual ulong getNumParticles() const = 0;

    virtual ulong getNumParticlesEmitted() const = 0;

    virtual void setActorFrameOfReference(bool, bool, bool) = 0;

    virtual void setEmitRate(float);

    virtual float getEmitRate() const;

    virtual void setEmissionDuration(float) = 0;

    virtual float& getEmissionAccumulator();

    virtual void setSleepDuration(float) = 0;

    virtual void setFacing(::HashedString const&) = 0;

    virtual bool blockListInitialized() = 0;

    virtual void initializeBlockList(::buffer_span<std::string>) = 0;

    virtual bool blockAtPositionIsInList(::BlockPos const&) = 0;

    virtual ::BrightnessPair getBrightnessPairAtBlock(::BlockPos const&) const = 0;

    virtual std::pair<BrightnessPair, BlockPos> getBrightestNeighbor(::BlockPos const&, ::ParticleSystem::CommonParticle const&) const = 0;

    virtual bool getVisibilityAtBlock(::BlockPos const&) const = 0;

    virtual ::mce::Color getGameplayLightForParticle(::ParticleSystem::CommonParticle const&) const = 0;

    virtual ::BrightnessPair getBrightnessPairForParticle(::ParticleSystem::CommonParticle const&) const = 0;

    virtual std::vector<AABB> const& getCollisionShapesForBlockPosition(::BlockPos const&) = 0;

    virtual std::vector<AABB>& getCollisionAabbList() = 0;

    virtual std::vector<ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>& getCollisionSweepList() = 0;

    virtual void fireEvent(::HashedString const&, ::Matrix const&, ::Vec3 const&) = 0;

    virtual void fireEvent(::HashedString const&, ::Vec3 const&, ::Vec3 const&) = 0;

    virtual bool getUseActorPosition() const = 0;

    virtual bool getUseActorRotation() const = 0;

    virtual void getParticleWorldPositionAndVelocity(::ParticleSystem::CommonParticle&, ::Vec3&, ::Vec3&) = 0;

    virtual bool getAreParticlesFromActorButWorldRelative() const = 0;
    // clang-format on
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setEmitRate(float);

    MCNAPI float $getEmitRate() const;

    MCNAPI float& $getEmissionAccumulator();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct CollisionHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 24, ::AABB> mHitShape;
        ::ll::TypedStorage<4, 4, float>   mHitAlpha;
        ::ll::TypedStorage<1, 1, uchar>   mHitAxis;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mEmissionAccumulator;
    ::ll::TypedStorage<4, 4, float> mCurrentEmitRate;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Vec3 const& getPosition() const = 0;

    virtual ::Matrix const& getTransform() const = 0;

    virtual ::Vec3 const& getWorldPosition() const = 0;

    virtual ::Vec3 const& getWorldVelocity() const = 0;

    virtual void setMaxNumParticles(uint64 num) = 0;

    virtual uint64 getMaxNumParticles() const = 0;

    virtual uint64 getNumParticles() const = 0;

    virtual uint64 getNumParticlesEmitted() const = 0;

    virtual void setActorFrameOfReference(bool useActorPosition, bool useActorRotation, bool useEmitterVelocity) = 0;

    virtual void setEmitRate(float emitRate);

    virtual float getEmitRate() const;

    virtual void setEmissionDuration(float activeTime) = 0;

    virtual float& getEmissionAccumulator();

    virtual void setSleepDuration(float sleepTime) = 0;

    virtual void setFacing(::HashedString const& facing) = 0;

    virtual bool blockListInitialized() = 0;

    virtual void initializeBlockList(::buffer_span<::std::string> blockList) = 0;

    virtual bool blockAtPositionIsInList(::BlockPos const& blockPos) = 0;

    virtual ::BrightnessPair getBrightnessPairAtBlock(::BlockPos const& blockPosition) const = 0;

    virtual ::std::pair<::BrightnessPair, ::BlockPos>
    getBrightestNeighbor(::BlockPos const& blockPosition, ::ParticleSystem::CommonParticle const& particle) const = 0;

    virtual bool getVisibilityAtBlock(::BlockPos const& blockPosition) const = 0;

    virtual ::mce::Color getGameplayLightForParticle(::ParticleSystem::CommonParticle const& particle) const = 0;

    virtual ::BrightnessPair getBrightnessPairForParticle(::ParticleSystem::CommonParticle const& particle) const = 0;

    virtual ::std::vector<::AABB> const& getCollisionShapesForBlockPosition(::BlockPos const& blockPosition) = 0;

    virtual ::std::vector<::AABB>& getCollisionAabbList() = 0;

    virtual ::std::vector<::ParticleSystem::ComponentAccessParticleEmitter::CollisionHelper>&
    getCollisionSweepList() = 0;

    virtual void fireEvent(::HashedString const& eventName, ::Vec3 const& position, ::Vec3 const& velocity) = 0;

    virtual void fireEvent(::HashedString const& eventName, ::Matrix const& transform, ::Vec3 const& velocity) = 0;

    virtual bool getUseActorPosition() const = 0;

    virtual bool getUseActorRotation() const = 0;

    virtual void getParticleWorldPositionAndVelocity(
        ::ParticleSystem::CommonParticle& particle,
        ::Vec3&                           particleWorldPosition,
        ::Vec3&                           particleWorldVelocity
    ) = 0;

    virtual bool getAreParticlesFromActorButWorldRelative() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setEmitRate(float emitRate);

    MCFOLD float $getEmitRate() const;

    MCFOLD float& $getEmissionAccumulator();
    // NOLINTEND
#else // @header-generator platform
    struct CollisionHelper {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace ParticleSystem

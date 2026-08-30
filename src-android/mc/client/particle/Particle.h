#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particle/ParticleLayer.h"
#include "mc/client/renderer/texture/TextureUVCoordinateSet.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/block/BrightnessPair.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class CompoundTag;
class LightTexture;
class ParticleEngine;
class Vec2;
struct ParticleRenderContext;
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
// clang-format on

class Particle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mCameraOffset;
    ::ll::TypedStorage<4, 4, int>                       mLifetime;
    ::ll::TypedStorage<8, 88, ::TextureUVCoordinateSet> mTex;
    ::ll::TypedStorage<4, 4, float>                     mU0;
    ::ll::TypedStorage<4, 4, float>                     mV0;
    ::ll::TypedStorage<4, 4, int>                       mAge;
    ::ll::TypedStorage<4, 4, int>                       mTicksSinceLastUpdate;
    ::ll::TypedStorage<4, 4, float>                     mSize;
    ::ll::TypedStorage<4, 4, float>                     mGravity;
    ::ll::TypedStorage<4, 16, ::mce::Color>             mColor;
    ::ll::TypedStorage<4, 16, ::mce::Color>             mVanillaLightColor;
    ::ll::TypedStorage<1, 2, ::BrightnessPair>          mAmbientLight;
    ::ll::TypedStorage<4, 4, ::ParticleType>            mType;
    ::ll::TypedStorage<4, 4, ::ParticleLayer>           mLayer;
    ::ll::TypedStorage<1, 1, bool>                      mUnlit;
    ::ll::TypedStorage<4, 4, float>                     mRoll;
    ::ll::TypedStorage<4, 4, float>                     mORoll;
    ::ll::TypedStorage<4, 4, float>                     mXa;
    ::ll::TypedStorage<4, 4, float>                     mZa;
    ::ll::TypedStorage<4, 4, float>                     mXa2;
    ::ll::TypedStorage<4, 4, float>                     mZa2;
    ::ll::TypedStorage<4, 4, float>                     mYa;
    ::ll::TypedStorage<8, 8, ::BlockSource*>            mRegion;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mPosDelta;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                   mPosOld;
    ::ll::TypedStorage<1, 1, bool>                      mNoPhysics;
    ::ll::TypedStorage<1, 1, bool>                      mOnGround;
    ::ll::TypedStorage<1, 1, bool>                      mVertexDataInitialized;
    ::ll::TypedStorage<4, 24, ::AABB>                   mBB;
    // NOLINTEND

public:
    // prevent constructor by default
    Particle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Particle();

    virtual void init(::Vec3 const&, ::Vec3 const&, int, ::ParticleEngine&) = 0;

    virtual void addTagData(::CompoundTag const&);

    virtual void normalTick();

    virtual void tessellate(::ParticleRenderContext const&);

    virtual ::mce::TexturePtr const& getParticleTexture() const;

    virtual void setEmittingEntity(::Actor&);

    virtual bool _shouldUpdateVertexData(float);

    virtual void _calculateAmbientLight(float);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void move(::Vec3 const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void initStaticResources(std::shared_ptr<mce::TextureGroup>);

    MCNAPI static ::Vec2 packLighting(::BrightnessPair const&, ::mce::Color const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::TexturePtr& FLAME_ATLAS();

    MCNAPI static ::mce::TexturePtr& FORCEFIELD_ATLAS();

    MCNAPI static ::mce::TexturePtr& ITEMS_ATLAS();

    MCNAPI static ::mce::TexturePtr& PARTICLE_ATLAS();

    MCNAPI static ::mce::TexturePtr& TERRAIN_ATLAS();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addTagData(::CompoundTag const&);

    MCNAPI void $normalTick();

    MCNAPI void $tessellate(::ParticleRenderContext const&);

    MCNAPI ::mce::TexturePtr const& $getParticleTexture() const;

    MCNAPI void $setEmittingEntity(::Actor&);

    MCNAPI bool $_shouldUpdateVertexData(float);

    MCNAPI void $_calculateAmbientLight(float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

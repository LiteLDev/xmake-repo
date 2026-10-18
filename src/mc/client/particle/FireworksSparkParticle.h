#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particle/Particle.h"
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Color.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Level;
class ParticleEngine;
class Vec3;
struct ParticleRenderContext;
namespace mce { class TexturePtr; }
// clang-format on

class FireworksSparkParticle : public ::Particle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mTrail;
    ::ll::TypedStorage<1, 1, bool>          mFlicker;
    ::ll::TypedStorage<1, 1, bool>          mHasFade;
    ::ll::TypedStorage<4, 4, int>           mBaseTex;
    ::ll::TypedStorage<4, 4, int>           mSpriteCount;
    ::ll::TypedStorage<8, 8, ::Level&>      mLevel;
    ::ll::TypedStorage<4, 16, ::mce::Color> mFade;
    // NOLINTEND

public:
    // prevent constructor by default
    FireworksSparkParticle& operator=(FireworksSparkParticle const&);
    FireworksSparkParticle(FireworksSparkParticle const&);
    FireworksSparkParticle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FireworksSparkParticle();

    virtual void init(::Vec3 const&, ::Vec3 const&, int, ::ParticleEngine&);

    virtual void normalTick();

    virtual void tessellate(::ParticleRenderContext const&);

    virtual ::mce::TexturePtr const& getParticleTexture() const;

    virtual void _calculateAmbientLight(float);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::Vec3 const&, ::Vec3 const&, int, ::ParticleEngine&);

    MCNAPI void $normalTick();

    MCNAPI void $tessellate(::ParticleRenderContext const&);

    MCNAPI ::mce::TexturePtr const& $getParticleTexture() const;

    MCNAPI void $_calculateAmbientLight(float);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class FireworksSparkParticle {};
#endif // @header-generator platform

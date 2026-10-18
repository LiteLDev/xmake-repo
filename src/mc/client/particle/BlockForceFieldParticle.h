#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/particle/Particle.h"
#include "mc/comprehensive/ParticleType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ParticleEngine;
class Tessellator;
class Vec3;
struct ParticleRenderContext;
namespace mce { class TexturePtr; }
// clang-format on

class BlockForceFieldParticle : public ::Particle {
#else // @header-generator platform
class BlockForceFieldParticle {
#endif // @header-generator platform
public:
    // BlockForceFieldParticle inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ParticleDataMask : int {
        ALPHA_MASK    = 255,
        FADEOUT_MASK  = 256,
        LIFETIME_MASK = 130560,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCanFadeout;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockForceFieldParticle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockForceFieldParticle();

    virtual void init(::Vec3 const&, ::Vec3 const&, int, ::ParticleEngine&);

    virtual void normalTick();

    virtual void tessellate(::ParticleRenderContext const&);

    virtual ::mce::TexturePtr const& getParticleTexture() const;

    virtual void _calculateAmbientLight(float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static int generateParticleData(float, bool, int);
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
#else // @header-generator platform
    enum class ParticleDataMask : int {};
#endif // @header-generator platform
};

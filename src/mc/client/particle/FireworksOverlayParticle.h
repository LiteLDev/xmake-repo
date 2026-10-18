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
class Vec3;
struct ParticleRenderContext;
namespace mce { class TexturePtr; }
// clang-format on

class FireworksOverlayParticle : public ::Particle {
public:
    // prevent constructor by default
    FireworksOverlayParticle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FireworksOverlayParticle();

    virtual void init(::Vec3 const&, ::Vec3 const&, int, ::ParticleEngine&);

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
class FireworksOverlayParticle {};
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particle/Particle.h"
#include "mc/comprehensive/ParticleType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class Level;
class ListTag;
class ParticleEngine;
class Vec2;
class Vec3;
struct ParticleRenderContext;
namespace mce { class TexturePtr; }
// clang-format on

class FireworksStarter : public ::Particle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ParticleEngine*>            mEngine;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mTag;
    ::ll::TypedStorage<8, 8, ::ListTag const*>             mExplosions;
    ::ll::TypedStorage<1, 1, bool>                         mTwinkleDelay;
    ::ll::TypedStorage<8, 8, ::Level&>                     mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    FireworksStarter& operator=(FireworksStarter const&);
    FireworksStarter(FireworksStarter const&);
    FireworksStarter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FireworksStarter();

    virtual void init(::Vec3 const&, ::Vec3 const&, int, ::ParticleEngine&);

    virtual void addTagData(::CompoundTag const&);

    virtual void normalTick();

    virtual void tessellate(::ParticleRenderContext const&);

    virtual ::mce::TexturePtr const& getParticleTexture() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    createParticle(::Vec3 const&, ::Vec3 const&, std::vector<uchar> const&, std::vector<uchar> const&, bool, bool);

    MCNAPI void createParticleBurst(std::vector<uchar> const&, std::vector<uchar> const&, bool, bool);

    MCNAPI void createParticleShape(
        float,
        std::vector<Vec2> const&,
        std::vector<uchar> const&,
        std::vector<uchar> const&,
        bool,
        bool,
        bool
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
    MCNAPI void $init(::Vec3 const&, ::Vec3 const&, int, ::ParticleEngine&);

    MCNAPI void $addTagData(::CompoundTag const&);

    MCNAPI void $normalTick();

    MCNAPI void $tessellate(::ParticleRenderContext const&);

    MCNAPI ::mce::TexturePtr const& $getParticleTexture() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

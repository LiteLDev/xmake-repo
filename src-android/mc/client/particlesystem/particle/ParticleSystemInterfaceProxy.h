#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/ParticleSystemInterface.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
class LevelRendererPlayer;
class MolangVariableMap;
class OptionRegistry;
class Particle;
class ParticleEngine;
class ParticleSystemEngine;
class Vec3;
// clang-format on

class ParticleSystemInterfaceProxy : public ::ParticleSystemInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                     mLevelRendererPlayer;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ParticleEngine>>       mParticleEngine;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ParticleSystemEngine>> mParticleSystemEngine;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mViewDistanceSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>      mParticleViewDistanceSubscription;
    ::ll::TypedStorage<4, 4, int>                                   mViewDistance;
    ::ll::TypedStorage<4, 4, float>                                 mParticleViewDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleSystemInterfaceProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleSystemInterfaceProxy();

    virtual float getDistanceToCameraSqr(::Vec3 const&) const;

    virtual int getViewDistanceChunks() const;

    virtual float getParticleViewDistance() const;

    virtual ::Particle* instance(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*);

    virtual void addParticleEffect(::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleSystemInterfaceProxy(
        ::LevelRendererPlayer const&,
        ::OptionRegistry&,
        std::unique_ptr<ParticleEngine>,
        std::unique_ptr<ParticleSystemEngine>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::LevelRendererPlayer const&,
        ::OptionRegistry&,
        std::unique_ptr<ParticleEngine>,
        std::unique_ptr<ParticleSystemEngine>
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
    MCNAPI float $getDistanceToCameraSqr(::Vec3 const&) const;

    MCNAPI int $getViewDistanceChunks() const;

    MCNAPI float $getParticleViewDistance() const;

    MCNAPI ::Particle* $instance(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*);

    MCNAPI void $addParticleEffect(::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

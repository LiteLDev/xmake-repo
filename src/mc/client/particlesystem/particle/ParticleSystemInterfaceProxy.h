#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LevelRendererPlayer const>> mLevelRendererPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ParticleEngine>>                      mParticleEngine;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ParticleSystemEngine>>                mParticleSystemEngine;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mViewDistanceSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mParticleViewDistanceSubscription;
    ::ll::TypedStorage<4, 4, int>                              mViewDistance;
    ::ll::TypedStorage<4, 4, float>                            mParticleViewDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleSystemInterfaceProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleSystemInterfaceProxy() /*override*/ = default;

    virtual float getDistanceToCameraSqr(::Vec3 const& pos) const /*override*/;

    virtual int getViewDistanceChunks() const /*override*/;

    virtual float getParticleViewDistance() const /*override*/;

    virtual ::Particle* instance(
        ::ParticleType       type,
        ::Vec3 const&        pos,
        ::Vec3 const&        dir,
        int                  data,
        ::CompoundTag const* tag
    ) /*override*/;

    virtual void addParticleEffect(
        ::HashedString const&      effect,
        ::Vec3 const&              emitterPosition,
        ::MolangVariableMap const& molangVariables
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleSystemInterfaceProxy(
        ::LevelRendererPlayer const&              levelRendererPlayer,
        ::OptionRegistry&                         options,
        ::std::unique_ptr<::ParticleEngine>       particleEngine,
        ::std::unique_ptr<::ParticleSystemEngine> particleSystemEngine
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::LevelRendererPlayer const&              levelRendererPlayer,
        ::OptionRegistry&                         options,
        ::std::unique_ptr<::ParticleEngine>       particleEngine,
        ::std::unique_ptr<::ParticleSystemEngine> particleSystemEngine
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getDistanceToCameraSqr(::Vec3 const& pos) const;

    MCFOLD int $getViewDistanceChunks() const;

    MCAPI float $getParticleViewDistance() const;

    MCAPI ::Particle*
    $instance(::ParticleType type, ::Vec3 const& pos, ::Vec3 const& dir, int data, ::CompoundTag const* tag);

    MCAPI void $addParticleEffect(
        ::HashedString const&      effect,
        ::Vec3 const&              emitterPosition,
        ::MolangVariableMap const& molangVariables
    );
    // NOLINTEND
};
#else // @header-generator platform
class ParticleSystemInterfaceProxy {};
#endif // @header-generator platform
#endif // @header-generator platform

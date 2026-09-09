#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/particlesystem/particle/ParticleRenderer.h"
#include "mc/deps/core/container/dense_slot_map.h"
#include "mc/deps/core/container/slot_map_handle.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class ClientFrameUpdateContext;
class LightTexture;
class Matrix;
class MolangVariableMap;
class ParticleEffectGroup;
class ParticleEffectInfo;
class ParticleRenderData;
class ScreenContext;
class WeakEntityRef;
namespace LightPropagation { class LightVolumeManager; }
namespace ParticleSystem { class ParticleEmitter; }
// clang-format on

class ParticleSystemEngine : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ParticleSystemEngine inner types define
    using ParticleSlotMap = ::Bedrock::dense_slot_map<
        std::unique_ptr<ParticleSystem::ParticleEmitter>,
        64,
        32,
        std::allocator<std::unique_ptr<ParticleSystem::ParticleEmitter>>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 72> mEmitterMap;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<ParticleSystem::ParticleEmitter*>>> mEmitterTickQueue;
    ::ll::TypedStorage<8, 40, ::ParticleRenderer> mParticleRenderer;
    ::ll::TypedStorage<1, 1, bool> mLastTickTimeValid;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastTickTime;
    ::ll::TypedStorage<8, 8, ::ParticleEffectGroup&> mParticleEffectGroup;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<BlockSource>> mBlockSource;
    ::ll::TypedStorage<8, 16, std::weak_ptr<LightPropagation::LightVolumeManager>> mLightVolumeManager;
    ::ll::TypedStorage<8, 8, ::LightTexture&> mLightTexture;
    ::ll::TypedStorage<4, 4096, std::array<std::array<mce::Color, 16>, 16>> mLightTextureData;
    ::ll::TypedStorage<4, 4, int> mFramesToInterpolate;
    ::ll::TypedStorage<1, 1, bool> mBeingDestroyed;
    ::ll::TypedStorage<8, 8, ulong> mTotalParticleCount;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ulong>> mEffectEmitterCounts;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, ulong>> mEffectParticleCounts;
    ::ll::TypedStorage<4, 12, ::Vec3> mLastCameraPosition;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleSystemEngine& operator=(ParticleSystemEngine const&);
    ParticleSystemEngine(ParticleSystemEngine const&);
    ParticleSystemEngine();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleSystemEngine();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleSystemEngine(
        ::ParticleEffectGroup&,
        ::BlockSource&,
        std::weak_ptr<LightPropagation::LightVolumeManager>,
        ::LightTexture&
    );

    MCNAPI void clear();

    MCNAPI ::Bedrock::slot_map_handle<std::unique_ptr<ParticleSystem::ParticleEmitter>, 64, 32>
    createParticleEmitter(::HashedString const&, ::Vec3 const&, ::MolangVariableMap);

    MCNAPI ::Bedrock::slot_map_handle<std::unique_ptr<ParticleSystem::ParticleEmitter>, 64, 32>
    createParticleEmitter(::HashedString const&, ::Matrix const&, ::MolangVariableMap);

    MCNAPI ::Bedrock::slot_map_handle<std::unique_ptr<ParticleSystem::ParticleEmitter>, 64, 32>
    createParticleEmitter(std::shared_ptr<ParticleEffectInfo> const&, ::Matrix const&, ::MolangVariableMap);

    MCNAPI ::Bedrock::slot_map_handle<std::unique_ptr<ParticleSystem::ParticleEmitter>, 64, 32> createParticleEmitter(
        ::HashedString const&,
        ::Actor const&,
        ::HashedString const&,
        ::Vec3 const&,
        ::MolangVariableMap
    );

    MCNAPI void emitParticleManually(
        ::Bedrock::slot_map_handle<std::unique_ptr<ParticleSystem::ParticleEmitter>, 64, 32>,
        ::Vec3 const&,
        ::Vec3 const&,
        float const
    );

    MCNAPI void extractForRendering(::ParticleRenderData&, float);

    MCNAPI void frameUpdate(::ClientFrameUpdateContext&);

    MCNAPI ulong getEffectEmitterCount(::HashedString const&) const;

    MCNAPI ulong getEffectParticleCount(::HashedString const&) const;

    MCNAPI ::Bedrock::dense_slot_map<
        std::unique_ptr<ParticleSystem::ParticleEmitter>,
        64,
        32,
        std::allocator<std::unique_ptr<ParticleSystem::ParticleEmitter>>> const&
    getEmitters();

    MCNAPI ::ParticleEffectGroup& getParticleEffectGroup() const;

    MCNAPI ::ParticleSystem::ParticleEmitter*
        getParticleEmitter(::Bedrock::slot_map_handle<std::unique_ptr<ParticleSystem::ParticleEmitter>, 64, 32>);

    MCNAPI void onBlockPositionChanged(::BlockPos const&);

    MCNAPI void onDimensionChanged(::BlockSource&);

    MCNAPI void render(::ScreenContext&, ::Vec3 const&, ::Vec3 const&, ::ParticleRenderData const&);

    MCNAPI void setEmitterIsManuallyEmitted(
        ::Bedrock::slot_map_handle<std::unique_ptr<ParticleSystem::ParticleEmitter>, 64, 32>
    );

    MCNAPI void tick(float const, bool const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::ParticleEffectGroup&, ::BlockSource&, std::weak_ptr<LightPropagation::LightVolumeManager>, ::LightTexture&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

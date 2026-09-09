#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class CompoundTag;
class HashedString;
class IConstBlockSource;
class IRandom;
class MolangVariableMap;
class Particle;
class ParticleSystemInterface;
class Vec3;
struct BreakingItemParticleData;
struct ResolvedItemIconInfo;
// clang-format on

class ParticleProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<ParticleSystemInterface>> mParticleSystemInterface;
    ::ll::UntypedStorage<8, 88>                                        mSendServerLegacyParticlePublisher;
    ::ll::UntypedStorage<8, 88>                                        mAddTerrainParticleEffectPublisher;
    ::ll::UntypedStorage<8, 88>                                        mAddTerrainSlideEffectPublisher;
    ::ll::UntypedStorage<8, 88>                                        mAddBreakingItemParticleEffectPublisher;
    ::ll::UntypedStorage<8, 88>                                        mAddBiomeTintedParticleEffectPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ParticleProvider();

    virtual void addSprintParticleEffect(::Actor const&, ::IConstBlockSource const&, ::IRandom&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    addBiomeTintedParticleEffect(::HashedString const&, ::BlockPos const&, ::Block const&, std::optional<mce::Color>);

    MCNAPI void
    addBreakingItemParticleEffect(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    MCNAPI ::Particle* addParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*, bool);

    MCNAPI void addParticleEffect(::HashedString const&, ::Vec3 const&, ::MolangVariableMap const&);

    MCNAPI void addTerrainParticleEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI void addTerrainSlideEffect(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    MCNAPI ::Bedrock::PubSub::Connector<
        void(const HashedString&, const BlockPos&, const Block&, std::optional<mce::Color>)>&
    getAddBiomeTintedParticleEffectConnector();

    MCNAPI ::Bedrock::PubSub::Connector<
        void(const Vec3&, const BreakingItemParticleData&, const ResolvedItemIconInfo&)>&
    getAddBreakingItemParticleEffectConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(const BlockPos&, const Block&, const Vec3&, float, float, float)>&
    getAddTerrainParticleEffectConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(const BlockPos&, const Block&, const Vec3&, float, float, float)>&
    getAddTerrainSlideEffectConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(ParticleType, const Vec3&, const Vec3&, int)>&
    getSendServerLegacyParticleConnector();

    MCNAPI std::function<void()> initializeParticleSystemInterfaceProxy(std::unique_ptr<ParticleSystemInterface>);

    MCNAPI void sendServerLegacyParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addSprintParticleEffect(::Actor const&, ::IConstBlockSource const&, ::IRandom&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

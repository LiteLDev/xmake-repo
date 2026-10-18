#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class HashedString;
class IConstBlockSource;
class IRandom;
#if defined(LL_PLAT_A) // @header-generator platform
class MolangVariableMap;
class Particle;
class ParticleSystemInterface;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
struct BreakingItemParticleData;
struct ResolvedItemIconInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace mce { class Color; }
class ParticleSystemInterface;
#endif // @header-generator platform
// clang-format on

class ParticleProvider {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ParticleProvider inner types define
    using AddBiomeTintedParticleFunction =
        void(::HashedString const&, ::BlockPos const&, ::Block const&, ::std::optional<::mce::Color>);

    using AddBreakingItemParticleFunction =
        void(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&);

    using AddTerrainParticleFunction = void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    using AddTerrainSlideFunction = void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float);

    using SendLegacyParticleFunction = void(::ParticleType, ::Vec3 const&, ::Vec3 const&, int);

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<ParticleSystemInterface>> mParticleSystemInterface;
    ::ll::UntypedStorage<8, 88>                                        mSendServerLegacyParticlePublisher;
    ::ll::UntypedStorage<8, 88>                                        mAddTerrainParticleEffectPublisher;
    ::ll::UntypedStorage<8, 88>                                        mAddTerrainSlideEffectPublisher;
    ::ll::UntypedStorage<8, 88>                                        mAddBreakingItemParticleEffectPublisher;
    ::ll::UntypedStorage<8, 88>                                        mAddBiomeTintedParticleEffectPublisher;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ParticleSystemInterface>> mParticleSystemInterface;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::ParticleType, ::Vec3 const&, ::Vec3 const&, int),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mSendServerLegacyParticlePublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mAddTerrainParticleEffectPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::BlockPos const&, ::Block const&, ::Vec3 const&, float, float, float),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mAddTerrainSlideEffectPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::Vec3 const&, ::BreakingItemParticleData const&, ::ResolvedItemIconInfo const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mAddBreakingItemParticleEffectPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::HashedString const&, ::BlockPos const&, ::Block const&, ::std::optional<::mce::Color>),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mAddBiomeTintedParticleEffectPublisher;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ParticleProvider();
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual ~ParticleProvider() = default;
#else // LL_PLAT_C
    virtual ~ParticleProvider();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addSprintParticleEffect(::Actor const&, ::IConstBlockSource const&, ::IRandom&);
    // NOLINTEND
#else // @header-generator platform
#ifdef LL_PLAT_S
    virtual void addSprintParticleEffect(::Actor const&, ::IConstBlockSource const&, ::IRandom&);
#else // LL_PLAT_C
    virtual void addSprintParticleEffect(::Actor const& mob, ::IConstBlockSource const& region, ::IRandom& random);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addSprintParticleEffect(::Actor const&, ::IConstBlockSource const&, ::IRandom&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCFOLD void $addSprintParticleEffect(::Actor const&, ::IConstBlockSource const&, ::IRandom&);
#else // LL_PLAT_C
    MCFOLD void $addSprintParticleEffect(::Actor const& mob, ::IConstBlockSource const& region, ::IRandom& random);
#endif


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LinkedAssetValidator;
class MinEngineVersion;
class PackStats;
class ParticleEffectInfo;
class ResourceLoadManager;
class ResourcePackManager;
namespace ParticleSystem { class ParticleEffect; }
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace SharedTypes::v1_20_80 { struct ParticleEffectData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ParticleEffectGroup {
public:
    // ParticleEffectGroup inner types define
    using PuvLoader = ::Bedrock::Resources::CategoryLoader<ParticleSystem::ParticleEffectLoaderTraits>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::shared_ptr<ParticleEffectInfo>>> mParticleEffectInfos;
    ::ll::TypedStorage<4, 40, std::mutex> mParticleEffectInfoLock;
    ::ll::UntypedStorage<8, 256> mLoader;
    ::ll::UntypedStorage<8, 16> mEventing;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectGroup& operator=(ParticleEffectGroup const&);
    ParticleEffectGroup(ParticleEffectGroup const&);
    ParticleEffectGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleEffectGroup(::cereal::ReflectionCtx&, ::IMinecraftEventing&);

    MCNAPI std::shared_ptr<ParticleEffectInfo> getParticleEffectInfo(::HashedString const&);

    MCNAPI void loadParticleEffects(
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::ParticleSystem::ParticleEffectComponentRegistry const&,
        ::LinkedAssetValidator&
    );

    MCNAPI void unloadParticleEffects();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx&, ::IMinecraftEventing&);
    // NOLINTEND
};

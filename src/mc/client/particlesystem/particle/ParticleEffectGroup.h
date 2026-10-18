#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/resource_processing/category/CategoryLoader.h"
#include "mc/platform/threading/Mutex.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LinkedAssetValidator;
class ParticleEffectInfo;
class ResourceLoadManager;
class ResourcePackManager;
namespace ParticleSystem { class ParticleEffectComponentRegistry; }
namespace ParticleSystem { struct ParticleEffectLoaderTraits; }
// clang-format on

class ParticleEffectGroup {
public:
    // ParticleEffectGroup inner types define
    using PuvLoader = ::Bedrock::Resources::CategoryLoader<::ParticleSystem::ParticleEffectLoaderTraits>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::ParticleEffectInfo>>>
                                                           mParticleEffectInfos;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex> mParticleEffectInfoLock;
    ::ll::TypedStorage<8, 264, ::Bedrock::Resources::CategoryLoader<::ParticleSystem::ParticleEffectLoaderTraits>>
                                                    mLoader;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectGroup& operator=(ParticleEffectGroup const&);
    ParticleEffectGroup(ParticleEffectGroup const&);
    ParticleEffectGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ParticleEffectInfo> getParticleEffectInfo(::HashedString const& name);

    MCAPI void loadParticleEffects(
        ::ResourcePackManager&                                   resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>     resourceLoadManager,
        ::ParticleSystem::ParticleEffectComponentRegistry const& particleComponentRegistry,
        ::LinkedAssetValidator&                                  validator
    );

    MCAPI void unloadParticleEffects();
    // NOLINTEND
};
#else // @header-generator platform
class ParticleEffectGroup {};
#endif // @header-generator platform
#endif // @header-generator platform

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/ServiceReference.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/puv/LoadResult.h"
#include "mc/world/level/BiomeFilterGroup.h"
#include "mc/world/level/biome/components/BiomeDecorationFeature.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AppPlatform;
#else // @header-generator platform
#endif // @header-generator platform
class BedrockLoadContext;
#if defined(LL_PLAT_A) // @header-generator platform
class FeatureRegistry;
#else // @header-generator platform
#endif // @header-generator platform
class HashedString;
class IMinecraftEventing;
class IWorldRegistriesProvider;
class MinEngineVersion;
class ResourcePackManager;
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_20 { struct AutomaticFeatureRulesData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class AutomaticFeatureRules {
public:
    // AutomaticFeatureRules inner types declare
    // clang-format off
    struct AutomaticFeatureRule;
    // clang-format on

    // AutomaticFeatureRules inner types define
    struct AutomaticFeatureRule {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 312, ::BiomeDecorationFeature> mAutoFeature;
#else // @header-generator platform
        ::ll::TypedStorage<8, 328, ::BiomeDecorationFeature> mAutoFeature;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 64, ::BiomeFilterGroup>        mBiomeFilter;
#if defined(LL_PLAT_A) // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        AutomaticFeatureRule& operator=(AutomaticFeatureRule const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI AutomaticFeatureRule(::AutomaticFeatureRules::AutomaticFeatureRule const&);

        MCNAPI ~AutomaticFeatureRule();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::AutomaticFeatureRules::AutomaticFeatureRule const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using AutomaticFeaturePriorityList =
        std::unordered_map<std::string, std::unordered_map<HashedString, AutomaticFeatureRules::AutomaticFeatureRule>>;
#else // @header-generator platform
    using AutomaticFeaturePriorityList = ::std::unordered_map<
        ::std::string,
        ::std::unordered_map<::HashedString, ::AutomaticFeatureRules::AutomaticFeatureRule>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 240> mLoader;
    ::ll::UntypedStorage<8, 16>  mEventing;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_20::AutomaticFeatureRulesData,
            ::BedrockLoadContext,
            nullptr_t,
            ::SharedTypes::v1_21_20::AutomaticFeatureRulesData>>
                                                    mLoader;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    AutomaticFeatureRules& operator=(AutomaticFeatureRules const&);
    AutomaticFeatureRules(AutomaticFeatureRules const&);
    AutomaticFeatureRules();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AutomaticFeatureRules(::cereal::ReflectionCtx const&, ::IMinecraftEventing&);
#else // @header-generator platform
    MCAPI AutomaticFeatureRules(::cereal::ReflectionCtx const& ctx, ::IMinecraftEventing& eventing);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Puv::LoadResult<SharedTypes::v1_21_20::AutomaticFeatureRulesData> _parseAndInsertUnsorted(
        std::string const&,
        std::string&&,
        ::MinEngineVersion const&,
        ::IWorldRegistriesProvider&,
        std::unordered_map<std::string, std::unordered_map<HashedString, AutomaticFeatureRules::AutomaticFeatureRule>>&,
        bool
#else // @header-generator platform
    MCAPI ::Puv::LoadResult<::SharedTypes::v1_21_20::AutomaticFeatureRulesData> _parseAndInsertUnsorted(
        ::std::string const&        filename,
        ::std::string&&             data,
        ::MinEngineVersion const&   minEngineVersion,
        ::IWorldRegistriesProvider& worldRegistries,
        ::std::unordered_map<
            ::std::string,
            ::std::unordered_map<::HashedString, ::AutomaticFeatureRules::AutomaticFeatureRule>>& bucketedFeatures,
        bool                                                                                      isBasePack
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void attachAutomaticFeatures(
        ::ResourcePackManager&,
        ::IWorldRegistriesProvider&,
        std::unordered_map<HashedString, BiomeDecorationFeature>&
#else // @header-generator platform
    MCAPI void attachAutomaticFeatures(
        ::ResourcePackManager&                                          resourcePackManager,
        ::IWorldRegistriesProvider&                                     worldRegistries,
        ::std::unordered_map<::HashedString, ::BiomeDecorationFeature>& biomeDecorationFeatureMap
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& SCHEMA_VERSION_1();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& SCHEMA_VERSION_1();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::IMinecraftEventing&);
#else // @header-generator platform
    MCAPI void* $ctor(::cereal::ReflectionCtx const& ctx, ::IMinecraftEventing& eventing);
#endif // @header-generator platform
    // NOLINTEND
};

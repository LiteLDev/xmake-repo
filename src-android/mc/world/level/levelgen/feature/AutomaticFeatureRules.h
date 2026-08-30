#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/ServiceReference.h"
#include "mc/deps/puv/LoadResult.h"
#include "mc/world/level/BiomeFilterGroup.h"
#include "mc/world/level/biome/components/BiomeDecorationFeature.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class BedrockLoadContext;
class FeatureRegistry;
class HashedString;
class IMinecraftEventing;
class IWorldRegistriesProvider;
class MinEngineVersion;
class ResourcePackManager;
class SemVersionConstant;
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
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
        ::ll::TypedStorage<8, 312, ::BiomeDecorationFeature> mAutoFeature;
        ::ll::TypedStorage<8, 64, ::BiomeFilterGroup>        mBiomeFilter;
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
        // NOLINTEND
    };

    using AutomaticFeaturePriorityList =
        std::unordered_map<std::string, std::unordered_map<HashedString, AutomaticFeatureRules::AutomaticFeatureRule>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 240> mLoader;
    ::ll::UntypedStorage<8, 16>  mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomaticFeatureRules& operator=(AutomaticFeatureRules const&);
    AutomaticFeatureRules(AutomaticFeatureRules const&);
    AutomaticFeatureRules();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AutomaticFeatureRules(::cereal::ReflectionCtx const&, ::IMinecraftEventing&);

    MCNAPI ::Puv::LoadResult<SharedTypes::v1_21_20::AutomaticFeatureRulesData> _parseAndInsertUnsorted(
        std::string const&,
        std::string&&,
        ::MinEngineVersion const&,
        ::IWorldRegistriesProvider&,
        std::unordered_map<std::string, std::unordered_map<HashedString, AutomaticFeatureRules::AutomaticFeatureRule>>&,
        bool
    ) const;

    MCNAPI void attachAutomaticFeatures(
        ::ResourcePackManager&,
        ::IWorldRegistriesProvider&,
        std::unordered_map<HashedString, BiomeDecorationFeature>&
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& SCHEMA_VERSION_1();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::IMinecraftEventing&);
    // NOLINTEND
};

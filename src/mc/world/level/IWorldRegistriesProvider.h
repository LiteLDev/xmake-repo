#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/OwnerPtrFactory.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BiomeComponentFactory;
class BiomeRegistry;
class BlockPalette;
class Dimension;
class FeatureRegistry;
class FeatureTypeFactory;
class JigsawStructureRegistry;
class StructureManager;
class StructureSpawnRegistry;
class SurfaceBuilderRegistry;
struct DerivedDimensionArguments;
// clang-format on

class IWorldRegistriesProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IWorldRegistriesProvider() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeRegistry& getBiomeRegistry() = 0;

#else // @header-generator platform
#endif // @header-generator platform
    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPalette& getBlockPalette() = 0;
#else // @header-generator platform
    virtual ::BiomeRegistry& getBiomeRegistry() = 0;
#endif // @header-generator platform

    virtual ::BlockPalette const& getBlockPalette() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::FeatureRegistry& getFeatureRegistry() = 0;
#else // @header-generator platform
    virtual ::BlockPalette& getBlockPalette() = 0;
#endif // @header-generator platform

    virtual ::FeatureRegistry const& getFeatureRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::FeatureTypeFactory& getFeatureTypeFactory() = 0;
#else // @header-generator platform
    virtual ::FeatureRegistry& getFeatureRegistry() = 0;
#endif // @header-generator platform

    virtual ::FeatureTypeFactory const& getFeatureTypeFactory() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() = 0;
#else // @header-generator platform
    virtual ::FeatureTypeFactory& getFeatureTypeFactory() = 0;
#endif // @header-generator platform

    virtual ::JigsawStructureRegistry const& getJigsawStructureRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() = 0;
#else // @header-generator platform
    virtual ::JigsawStructureRegistry& getJigsawStructureRegistry() = 0;
#endif // @header-generator platform

    virtual ::StructureSpawnRegistry const& getStructureSpawnRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> getStructureManager() = 0;
#else // @header-generator platform
    virtual ::StructureSpawnRegistry& getStructureSpawnRegistry() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<Bedrock::NonOwnerPointer<StructureManager>> const getStructureManager() const = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> const getStructureManager() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BiomeComponentFactory& getBiomeComponentFactory() = 0;
#else // @header-generator platform
    virtual ::Bedrock::NotNullNonOwnerPtr<::StructureManager> getStructureManager() = 0;
#endif // @header-generator platform

    virtual ::BiomeComponentFactory const& getBiomeComponentFactory() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() = 0;
#else // @header-generator platform
    virtual ::BiomeComponentFactory& getBiomeComponentFactory() = 0;
#endif // @header-generator platform

    virtual ::SurfaceBuilderRegistry const& getSurfaceBuilderRegistry() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&>& getDimensionFactory() = 0;
#else // @header-generator platform
    virtual ::SurfaceBuilderRegistry& getSurfaceBuilderRegistry() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::OwnerPtrFactory<Dimension, DerivedDimensionArguments&&> const& getDimensionFactory() const = 0;
#else // @header-generator platform
    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&> const& getDimensionFactory() const = 0;

    virtual ::OwnerPtrFactory<::Dimension, ::DerivedDimensionArguments&&>& getDimensionFactory() = 0;
#endif // @header-generator platform

    virtual ::ActorDefinitionGroup* getEntityDefinitions() const = 0;
    // NOLINTEND
};

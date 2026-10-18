#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/puv/LoadResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/UUID.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class DimensionDataLoader;
#else // @header-generator platform
#endif // @header-generator platform
class IMinecraftEventing;
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_60::DimensionDefinition { struct DimensionDocument; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DimensionDefinitionGroup {
public:
    // DimensionDefinitionGroup inner types declare
    // clang-format off
    struct DimensionDefinition;
    // clang-format on

    // DimensionDefinitionGroup inner types define
    struct DimensionDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>             mHeightMinimum;
        ::ll::TypedStorage<4, 4, int>             mHeightMaximum;
        ::ll::TypedStorage<4, 4, ::GeneratorType> mGeneratorType;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
        ::ll::TypedStorage<8, 16, ::mce::UUID>    mPackId;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<std::string, DimensionDefinitionGroup::DimensionDefinition>> mDimensionDefinitions;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::DimensionDefinitionGroup::DimensionDefinition>>
        mDimensionDefinitions;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    DimensionDefinitionGroup();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    DimensionDefinitionGroup(::cereal::ReflectionCtx const&, ::ResourcePackManager* const, ::IMinecraftEventing&);
#else // @header-generator platform
    MCAPI DimensionDefinitionGroup(
        ::cereal::ReflectionCtx const& ctx,
        ::ResourcePackManager* const   rpm,
        ::IMinecraftEventing&          eventing
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEachDimensionDefinition(
        std::function<void(const std::string&, const DimensionDefinitionGroup::DimensionDefinition&)>
#else // @header-generator platform
    MCAPI void forEachDimensionDefinition(
        ::std::function<void(::std::string const&, ::DimensionDefinitionGroup::DimensionDefinition const&)> callback
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<DimensionDefinitionGroup::DimensionDefinition>
           getDimensionDefinition(std::string const&) const;

    MCNAPI bool hasDimensionDefinition(std::string const&) const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool tryAddDimensionDefinition(std::string const&, ::DimensionDefinitionGroup::DimensionDefinition const&);
#else // @header-generator platform
    MCAPI ~DimensionDefinitionGroup();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::ResourcePackManager* const, ::IMinecraftEventing&);
#else // @header-generator platform
    MCAPI void*
    $ctor(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager* const rpm, ::IMinecraftEventing& eventing);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

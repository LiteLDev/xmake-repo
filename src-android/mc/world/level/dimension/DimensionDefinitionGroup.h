#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LoadResult.h"
#include "mc/platform/UUID.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class DimensionDataLoader;
class IMinecraftEventing;
class ResourcePackManager;
namespace SharedTypes::v1_21_60::DimensionDefinition { struct DimensionDocument; }
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
    // clang-format off
    ::ll::TypedStorage<8, 24, std::map<std::string, DimensionDefinitionGroup::DimensionDefinition>> mDimensionDefinitions;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    DimensionDefinitionGroup(::cereal::ReflectionCtx const&, ::ResourcePackManager* const, ::IMinecraftEventing&);

    MCNAPI void forEachDimensionDefinition(
        std::function<void(const std::string&, const DimensionDefinitionGroup::DimensionDefinition&)>
    ) const;

    MCNAPI std::optional<DimensionDefinitionGroup::DimensionDefinition>
           getDimensionDefinition(std::string const&) const;

    MCNAPI bool hasDimensionDefinition(std::string const&) const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool tryAddDimensionDefinition(std::string const&, ::DimensionDefinitionGroup::DimensionDefinition const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx const&, ::ResourcePackManager* const, ::IMinecraftEventing&);
    // NOLINTEND
};

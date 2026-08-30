#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/registry/JigsawStructureActorRulesRegistry.h"
#include "mc/world/level/levelgen/structure/registry/JigsawStructureBlockRulesRegistry.h"
#include "mc/world/level/levelgen/structure/registry/JigsawStructureBlockTagRulesRegistry.h"
#include "mc/world/level/levelgen/structure/registry/JigsawStructureElementRegistry.h"
#include "mc/world/level/levelgen/structure/registry/StructureRegistry.h"
#include "mc/world/level/levelgen/structure/registry/StructureSetRegistry.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class IWorldRegistriesProvider;
class StructureSpawnRegistry;
class StructureTemplatePool;
namespace SharedTypes::v1_21_20 { struct JigsawStructureData; }
// clang-format on

class JigsawStructureRegistry {
public:
    // JigsawStructureRegistry inner types define
    using JigsawPoolLookupMap = std::unordered_map<std::string, std::unique_ptr<StructureTemplatePool>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<StructureTemplatePool>>> mJigsawPoolLookupMap;
    ::ll::TypedStorage<8, 104, ::JigsawStructureBlockRulesRegistry> mJigsawBlockRulesRegistry;
    ::ll::TypedStorage<8, 64, ::JigsawStructureBlockTagRulesRegistry> mJigsawBlockTagRulesRegistry;
    ::ll::TypedStorage<8, 64, ::JigsawStructureActorRulesRegistry> mJigsawActorRulesRegistry;
    ::ll::TypedStorage<8, 40, ::JigsawStructureElementRegistry> mJigsawElementRegistry;
    ::ll::TypedStorage<8, 56, ::br::worldgen::StructureRegistry> mStructureRegistry;
    ::ll::TypedStorage<8, 56, ::br::worldgen::StructureSetRegistry> mStructureSetRegistry;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawStructureRegistry();

    MCNAPI ::JigsawStructureActorRulesRegistry& getJigsawStructureActorRulesRegistry();

    MCNAPI ::JigsawStructureBlockRulesRegistry& getJigsawStructureBlockRulesRegistry();

    MCNAPI ::JigsawStructureBlockTagRulesRegistry& getJigsawStructureBlockTagRulesRegistry();

    MCNAPI ::SharedTypes::v1_21_20::JigsawStructureData const* getJigsawStructureData() const;

    MCNAPI ::JigsawStructureElementRegistry const& getJigsawStructureElementRegistry() const;

    MCNAPI ::JigsawStructureElementRegistry& getJigsawStructureElementRegistry();

    MCNAPI void initialize(::StructureSpawnRegistry&, ::BaseGameVersion const&, ::IWorldRegistriesProvider&);

    MCNAPI ::StructureTemplatePool const* lookupByName(std::string const&) const;

    MCNAPI void registerPool(std::unique_ptr<StructureTemplatePool>&&);

    MCNAPI void setJigsawStructureData(std::unique_ptr<SharedTypes::v1_21_20::JigsawStructureData>&&);

    MCNAPI ::br::worldgen::StructureRegistry const& structureRegistry() const;

    MCNAPI ::br::worldgen::StructureRegistry& structureRegistry();

    MCNAPI ::br::worldgen::StructureSetRegistry& structureSetRegistry();

    MCNAPI ~JigsawStructureRegistry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

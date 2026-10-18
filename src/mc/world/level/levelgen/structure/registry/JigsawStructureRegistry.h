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
#if defined(LL_PLAT_A) // @header-generator platform
    using JigsawPoolLookupMap = std::unordered_map<std::string, std::unique_ptr<StructureTemplatePool>>;
#else // @header-generator platform
    using JigsawPoolLookupMap = ::std::unordered_map<::std::string, ::std::unique_ptr<::StructureTemplatePool>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::StructureTemplatePool>>>
                                                                      mJigsawPoolLookupMap;
    ::ll::TypedStorage<8, 152, ::JigsawStructureBlockRulesRegistry>   mJigsawBlockRulesRegistry;
    ::ll::TypedStorage<8, 88, ::JigsawStructureBlockTagRulesRegistry> mJigsawBlockTagRulesRegistry;
    ::ll::TypedStorage<8, 88, ::JigsawStructureActorRulesRegistry>    mJigsawActorRulesRegistry;
    ::ll::TypedStorage<8, 64, ::JigsawStructureElementRegistry>       mJigsawElementRegistry;
    ::ll::TypedStorage<8, 72, ::br::worldgen::StructureRegistry>      mStructureRegistry;
    ::ll::TypedStorage<8, 72, ::br::worldgen::StructureSetRegistry>   mStructureSetRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_20::JigsawStructureData>> mJigsawStructureData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI JigsawStructureRegistry();
#else // @header-generator platform
    MCAPI JigsawStructureRegistry();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::JigsawStructureActorRulesRegistry& getJigsawStructureActorRulesRegistry();
#else // @header-generator platform
    MCAPI void initialize(
        ::StructureSpawnRegistry&   structureSpawnRegistry,
        ::BaseGameVersion const&    baseGameVersion,
        ::IWorldRegistriesProvider& registries
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::JigsawStructureBlockRulesRegistry& getJigsawStructureBlockRulesRegistry();
#else // @header-generator platform
    MCAPI void registerPool(::std::unique_ptr<::StructureTemplatePool>&& pool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~JigsawStructureRegistry();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

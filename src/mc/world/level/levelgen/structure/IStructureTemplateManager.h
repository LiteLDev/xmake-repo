#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class LegacyStructureTemplate;
class StructurePoolElement;
class StructureTemplate;
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
// clang-format on

class IStructureTemplateManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IStructureTemplateManager() = default;
#else // @header-generator platform
    virtual ~IStructureTemplateManager() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<SharedTypes::v1_21_80::JigsawStructureMetadata> getOrCreateJigsawStructureMetadata(::StructurePoolElement const&) = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>
    getOrCreateJigsawStructureMetadata(::StructurePoolElement const& structurePoolElement) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructureTemplate& getOrCreate(std::string const&) = 0;
#else // @header-generator platform
    virtual ::StructureTemplate& getOrCreate(::std::string const& structureName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::StructureTemplate* getStructure(std::string const&) const = 0;
#else // @header-generator platform
    virtual ::StructureTemplate* getStructure(::std::string const& structureName) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::LegacyStructureTemplate& getOrCreateLegacy(std::string const&) = 0;
#else // @header-generator platform
    virtual ::LegacyStructureTemplate& getOrCreateLegacy(::std::string const& structureName) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool readStructure(::StructureTemplate&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual bool readStructure(::StructureTemplate& structureTemplate) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

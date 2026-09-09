#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IStructureTemplateManager;
class StructurePoolElement;
namespace JigsawStructureUtils { class StructureElementId; }
// clang-format on

class JigsawStructureElementRegistry {
public:
    // JigsawStructureElementRegistry inner types define
    using StructureElementLookupMap = std::unordered_map<std::string, std::unique_ptr<StructurePoolElement>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<StructurePoolElement>>> mElementLookupMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::StructurePoolElement const* lookupByName(std::string) const;

    MCNAPI ::StructurePoolElement const* lookupEmptyElement() const;

    MCNAPI ::StructurePoolElement const& registerElement(std::string, std::unique_ptr<StructurePoolElement>&&);

    MCNAPI ::StructurePoolElement const&
        registerEmptyElement(::gsl::not_null<Bedrock::NonOwnerPointer<IStructureTemplateManager>>);

    MCNAPI ~JigsawStructureElementRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

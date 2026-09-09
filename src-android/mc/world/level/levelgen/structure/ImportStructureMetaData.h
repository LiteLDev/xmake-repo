#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class StructureTemplate;
// clang-format on

struct ImportStructureMetaData : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                       mIsDirty;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, bool>>                     mNewStructuresDirty;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, const StructureTemplate*>> mNewStructureTemplates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ImportStructureMetaData();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::StructureTemplate const* getStructure(std::string const&);

    MCNAPI void insertStructure(std::string const&, ::StructureTemplate const&);

    MCNAPI bool const isSpecificStructureDirty(std::string const&);

    MCNAPI void setSpecificStructureDirty(std::string const&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

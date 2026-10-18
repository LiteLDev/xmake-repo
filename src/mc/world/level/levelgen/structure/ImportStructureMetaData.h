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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
// member variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
    ::ll::TypedStorage<1, 1, bool>                                                             mIsDirty;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, bool>>                       mNewStructuresDirty;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::StructureTemplate const*>> mNewStructureTemplates;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StructureTemplate const* getStructure(std::string const&);
#else // @header-generator platform
    MCAPI ::StructureTemplate const* getStructure(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI bool const isSpecificStructureDirty(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND
};

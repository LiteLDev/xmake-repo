#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/StructurePlacement.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

struct StructureSet {
public:
    // StructureSet inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // StructureSet inner types define
    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<const br::worldgen::Structure>> mStructure;
        ::ll::TypedStorage<4, 4, int>                                             mWeight;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::br::worldgen::Structure const>> mStructure;
        ::ll::TypedStorage<4, 4, int>                                                 mWeight;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI Entry(::br::worldgen::StructureSet::Entry const&);

        MCNAPI ~Entry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::br::worldgen::StructureSet::Entry const&);
#else // @header-generator platform
        MCAPI ~Entry();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCFOLD void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<br::worldgen::StructureSet::Entry>> mItems;
    ::ll::TypedStorage<8, 32, ::br::worldgen::StructurePlacement>             mPlacement;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::StructureSet::Entry>> mItems;
    ::ll::TypedStorage<8, 32, ::br::worldgen::StructurePlacement>                 mPlacement;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StructureSet();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI StructureSet(std::vector<br::worldgen::StructureSet::Entry>, ::br::worldgen::StructurePlacement);
#else // @header-generator platform
    MCAPI StructureSet(
        ::std::vector<::br::worldgen::StructureSet::Entry> entries,
        ::br::worldgen::StructurePlacement                 placement
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool contains(::HashedString) const;
#else // @header-generator platform
    MCAPI bool contains(::HashedString type) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<br::worldgen::StructureSet>
        create(std::shared_ptr<const br::worldgen::Structure>, ::br::worldgen::StructurePlacement);
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::br::worldgen::StructureSet>
    create(::std::shared_ptr<::br::worldgen::Structure const> structure, ::br::worldgen::StructurePlacement placement);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<br::worldgen::StructureSet::Entry>, ::br::worldgen::StructurePlacement);
#else // @header-generator platform
    MCAPI void*
    $ctor(::std::vector<::br::worldgen::StructureSet::Entry> entries, ::br::worldgen::StructurePlacement placement);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen

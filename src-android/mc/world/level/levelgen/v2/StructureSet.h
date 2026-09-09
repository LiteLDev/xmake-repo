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
        ::ll::TypedStorage<8, 16, std::shared_ptr<const br::worldgen::Structure>> mStructure;
        ::ll::TypedStorage<4, 4, int>                                             mWeight;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Entry(::br::worldgen::StructureSet::Entry const&);

        MCNAPI ~Entry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::br::worldgen::StructureSet::Entry const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<br::worldgen::StructureSet::Entry>> mItems;
    ::ll::TypedStorage<8, 32, ::br::worldgen::StructurePlacement>             mPlacement;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureSet();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureSet(std::vector<br::worldgen::StructureSet::Entry>, ::br::worldgen::StructurePlacement);

    MCNAPI bool contains(::HashedString) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<br::worldgen::StructureSet>
        create(std::shared_ptr<const br::worldgen::Structure>, ::br::worldgen::StructurePlacement);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<br::worldgen::StructureSet::Entry>, ::br::worldgen::StructurePlacement);
    // NOLINTEND
};

} // namespace br::worldgen

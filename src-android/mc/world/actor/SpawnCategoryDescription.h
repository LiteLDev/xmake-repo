#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefintionDescription.h"
#include "mc/world/actor/spawn_category/Type.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct SpawnCategoryDescription : public ::DefintionDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SpawnCategory::Type> mSpawnCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnCategoryDescription(SpawnCategoryDescription const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SpawnCategoryDescription();

    virtual char const* getJsonName() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI char const* $getJsonName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

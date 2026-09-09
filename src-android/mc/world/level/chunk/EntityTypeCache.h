#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/EntityType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Level;
// clang-format on

namespace br::spawn {

class EntityTypeCache {
public:
    // EntityTypeCache inner types define
    enum Token : ushort {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<br::spawn::EntityType>> mEntityTypes;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<br::spawn::EntityTypeCache> from(::Level&);
    // NOLINTEND
};

} // namespace br::spawn

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

class EntityOverrides {
public:
    // EntityOverrides inner types declare
    // clang-format off
    struct PropertiesContainer;
    // clang-format on

    // EntityOverrides inner types define
    struct PropertiesContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<uint, std::variant<int, float>>> mProperties;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, EntityOverrides::PropertiesContainer>> mOverrides;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntityOverrides();

    MCNAPI void clear(::ActorUniqueID);

    MCNAPI void remove(::ActorUniqueID, uint);

    MCNAPI void set(::ActorUniqueID, uint, std::variant<std::monostate, int, float>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

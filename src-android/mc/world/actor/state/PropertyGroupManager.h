#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class PropertyGroup;
// clang-format on

class PropertyGroupManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::shared_ptr<const PropertyGroup>>> mPropertyGroups;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PropertyGroupManager();

    MCNAPI ::CompoundTag getActorPropertyDataTag(::HashedString const&) const;

    MCNAPI void ingestActorPropertyDataTag(::CompoundTag const&);

    MCNAPI void registerGroup(::HashedString const&, std::shared_ptr<const PropertyGroup>);

    MCNAPI void tryInitPropertiesOnActor(::Actor&) const;

    MCNAPI ~PropertyGroupManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::shared_ptr<const PropertyGroup>>> mPropertyGroups;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::PropertyGroup const>>>
        mPropertyGroups;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PropertyGroupManager();
#else // @header-generator platform
    MCAPI ::CompoundTag getActorPropertyDataTag(::HashedString const& actorCanonicalName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag getActorPropertyDataTag(::HashedString const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void ingestActorPropertyDataTag(::CompoundTag const& propertyData);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void ingestActorPropertyDataTag(::CompoundTag const&);
#else // @header-generator platform
    MCAPI void registerGroup(::HashedString const& id, ::std::shared_ptr<::PropertyGroup const> group);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerGroup(::HashedString const&, std::shared_ptr<const PropertyGroup>);
#else // @header-generator platform
    MCAPI void tryInitPropertiesOnActor(::Actor& actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void tryInitPropertiesOnActor(::Actor&) const;

    MCNAPI ~PropertyGroupManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI ~PropertyGroupManager();
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

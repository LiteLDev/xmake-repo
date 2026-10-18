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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, std::unordered_map<uint, std::variant<int, float>>> mProperties;
#else // @header-generator platform
        ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::variant<int, float>>> mProperties;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ActorUniqueID, EntityOverrides::PropertiesContainer>> mOverrides;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::EntityOverrides::PropertiesContainer>> mOverrides;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EntityOverrides();

    MCNAPI void clear(::ActorUniqueID);

    MCNAPI void remove(::ActorUniqueID, uint);

    MCNAPI void set(::ActorUniqueID, uint, std::variant<std::monostate, int, float>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void clear(::ActorUniqueID entity);

    MCAPI void remove(::ActorUniqueID entity, uint propertyIndex);

    MCAPI void set(::ActorUniqueID entity, uint propertyIndex, ::std::variant<::std::monostate, int, float> value);
#endif
#endif // @header-generator platform
    // NOLINTEND
};

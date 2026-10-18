#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class EntityStorageKeySystem {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string generateStorageKey(long);
#else // @header-generator platform
    MCAPI static ::std::string generateStorageKey(int64 actorId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool getIsDirtySinceSerialization(::EntityContext&, std::string const&);
#else // @header-generator platform
    MCAPI static bool
    getIsDirtySinceSerialization(::EntityContext& entity, ::std::string const& currentSerializedState);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setDirtyFromNonSerializedState(::EntityContext&);
#else // @header-generator platform
    MCAPI static void setDirtyFromNonSerializedState(::EntityContext& entity);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setLastSerializedState(::EntityContext&, std::string const&);
#else // @header-generator platform
    MCAPI static void setLastSerializedState(::EntityContext& entity, ::std::string const& currentSerializedState);
#endif // @header-generator platform
    // NOLINTEND
};

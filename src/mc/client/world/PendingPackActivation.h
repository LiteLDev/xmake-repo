#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/WorldID.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/WorldID.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct PendingPackActivation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>             worldID;
    ::ll::TypedStorage<8, 8, ::ContentType> contentType;
    ::ll::TypedStorage<8, 24, std::string>  packId;
    ::ll::TypedStorage<1, 1, bool>          isEduMode;
    ::ll::TypedStorage<1, 1, bool>          force;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingPackActivation& operator=(PendingPackActivation const&);
    PendingPackActivation(PendingPackActivation const&);
    PendingPackActivation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PendingPackActivation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PendingPackActivation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::World::WorldID> worldID;
    ::ll::TypedStorage<8, 8, ::ContentType>     contentType;
    ::ll::TypedStorage<8, 32, ::std::string>    packId;
    ::ll::TypedStorage<1, 1, bool>              isEduMode;
    ::ll::TypedStorage<1, 1, bool>              force;
    // NOLINTEND
};
#else // @header-generator platform
struct PendingPackActivation {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World

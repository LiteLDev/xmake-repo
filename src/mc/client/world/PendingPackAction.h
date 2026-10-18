#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/PackAction.h"
#include "mc/client/world/PackActionError.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/PackAction.h"
#include "mc/client/world/PackActionError.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct PendingPackAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            mPackIdVersion;
    ::ll::TypedStorage<8, 24, std::string>                            mPackName;
    ::ll::TypedStorage<8, 8, ::ContentType>                           mPackType;
    ::ll::TypedStorage<1, 1, ::World::PackAction>                     mPackActionType;
    ::ll::TypedStorage<1, 2, std::optional<::World::PackActionError>> mPackActionError;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingPackAction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PendingPackAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PendingPackAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mPackIdVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                            mPackName;
    ::ll::TypedStorage<8, 8, ::ContentType>                             mPackType;
    ::ll::TypedStorage<1, 1, ::World::PackAction>                       mPackActionType;
    ::ll::TypedStorage<1, 2, ::std::optional<::World::PackActionError>> mPackActionError;
    // NOLINTEND
};
#else // @header-generator platform
struct PendingPackAction {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World

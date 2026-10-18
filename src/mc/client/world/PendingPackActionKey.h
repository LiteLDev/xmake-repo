#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/PackAction.h"
#include "mc/client/world/WorldID.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/PackAction.h"
#include "mc/client/world/WorldID.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct PendingPackActionKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                   mWorldID;
    ::ll::TypedStorage<1, 1, ::World::PackAction> mPackAction;
    // NOLINTEND

public:
    // prevent constructor by default
    PendingPackActionKey& operator=(PendingPackActionKey const&);
    PendingPackActionKey(PendingPackActionKey const&);
    PendingPackActionKey();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PendingPackActionKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::World::WorldID>   mWorldID;
    ::ll::TypedStorage<1, 1, ::World::PackAction> mPackAction;
    // NOLINTEND
};
#else // @header-generator platform
struct PendingPackActionKey {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World

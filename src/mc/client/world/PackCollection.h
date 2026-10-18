#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/PackDetails.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"

// auto generated forward declare list
// clang-format off
namespace World { struct PackDetails; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace World {

#if defined(LL_PLAT_A) // @header-generator platform
struct PackCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContentType>                    mContentType;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>> mActive;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>> mGlobal;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>> mAvailable;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>> mRealms;
    ::ll::TypedStorage<8, 24, std::vector<World::PackDetails>> mUnowned;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCollection(PackCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::World::PackCollection& operator=(::World::PackCollection const&);

    MCNAPI ::World::PackCollection& operator=(::World::PackCollection&&);

    MCNAPI ~PackCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct PackCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContentType>                        mContentType;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>> mActive;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>> mGlobal;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>> mAvailable;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>> mRealms;
    ::ll::TypedStorage<8, 24, ::std::vector<::World::PackDetails>> mUnowned;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PackCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct PackCollection {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace World

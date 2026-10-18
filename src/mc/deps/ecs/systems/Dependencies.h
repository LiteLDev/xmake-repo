#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct Dependencies {
public:
    // Dependencies inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum AccessType : uint {
#else // @header-generator platform
    enum class AccessType : int {
#endif // @header-generator platform
        Filter      = 0,
        Read        = 1,
        Write       = 2,
        AddRemove   = 3,
        GlobalRead  = 4,
        GlobalWrite = 5,
        Count       = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                               mBlocking;
    ::ll::TypedStorage<1, 1, bool>                               mUsesEntityFactory;
    ::ll::TypedStorage<8, 144, std::array<std::vector<uint>, 6>> mAccessGroups;
    // NOLINTEND

public:
    // prevent constructor by default
    Dependencies& operator=(Dependencies const&);
    Dependencies(Dependencies const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Dependencies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    bool                                 mBlocking;
    bool                                 mUsesEntityFactory;
    ::std::array<::std::vector<uint>, 6> mAccessGroups;
#endif // @header-generator platform
    // NOLINTEND
};

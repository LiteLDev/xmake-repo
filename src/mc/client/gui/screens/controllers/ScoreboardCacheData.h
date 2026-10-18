#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/scores/IdentityDefinition.h"

struct ScoreboardCacheData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 8, long>         mId;
    ::ll::TypedStorage<8, 24, std::string> mScore;
    ::ll::UntypedStorage<1, 1>             mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScoreboardCacheData& operator=(ScoreboardCacheData const&);
    ScoreboardCacheData(ScoreboardCacheData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScoreboardCacheData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/scores/IdentityDefinition.h"

struct ScoreboardCacheData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>             mName;
    ::ll::TypedStorage<8, 8, int64>                      mId;
    ::ll::TypedStorage<8, 32, ::std::string>             mScore;
    ::ll::TypedStorage<1, 1, ::IdentityDefinition::Type> mType;
    // NOLINTEND
};
#else // @header-generator platform
struct ScoreboardCacheData {};
#endif // @header-generator platform
#endif // @header-generator platform

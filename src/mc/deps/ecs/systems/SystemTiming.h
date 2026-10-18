#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
struct SystemCategory;
// clang-format on

#endif // @header-generator platform
struct SystemTiming {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                                mSystemName;
    ::ll::TypedStorage<8, 8, ulong>                                                       mEntityCount;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mTime;
    ::ll::UntypedStorage<2, 2>                                                            mCategory;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                        mSystemName;
    ::ll::TypedStorage<8, 8, uint64>                                mEntityCount;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>            mTime;
    ::ll::TypedStorage<2, 2, ::Bedrock::typeid_t<::SystemCategory>> mCategory;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    SystemTiming& operator=(SystemTiming const&);
#else // @header-generator platform
#endif // @header-generator platform
};

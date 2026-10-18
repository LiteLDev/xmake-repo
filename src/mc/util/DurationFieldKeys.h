#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DurationFieldKeys {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> days;
    ::ll::TypedStorage<8, 24, std::string> hours;
    ::ll::TypedStorage<8, 24, std::string> minutes;
    ::ll::TypedStorage<8, 24, std::string> seconds;
    ::ll::TypedStorage<8, 24, std::string> day;
    ::ll::TypedStorage<8, 24, std::string> hour;
    ::ll::TypedStorage<8, 24, std::string> minute;
    ::ll::TypedStorage<8, 24, std::string> second;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf68457;
    ::ll::UntypedStorage<8, 32> mUnkbcb79a;
    ::ll::UntypedStorage<8, 32> mUnkd5cc90;
    ::ll::UntypedStorage<8, 32> mUnk25b82e;
    ::ll::UntypedStorage<8, 32> mUnk507db7;
    ::ll::UntypedStorage<8, 32> mUnk62919f;
    ::ll::UntypedStorage<8, 32> mUnk39e877;
    ::ll::UntypedStorage<8, 32> mUnk7c5a2d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    DurationFieldKeys& operator=(DurationFieldKeys const&);
    DurationFieldKeys(DurationFieldKeys const&);
#endif // @header-generator platform
    DurationFieldKeys();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DurationFieldKeys(std::string, std::string, std::string, std::string);
#else // @header-generator platform
    MCNAPI DurationFieldKeys(::std::string days, ::std::string hours, ::std::string minutes, ::std::string seconds);
#endif // @header-generator platform

    MCNAPI DurationFieldKeys(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string,
        std::string,
        std::string,
        std::string,
        std::string,
        std::string,
        std::string,
        std::string
#else // @header-generator platform
        ::std::string days,
        ::std::string hours,
        ::std::string minutes,
        ::std::string seconds,
        ::std::string day,
        ::std::string hour,
        ::std::string minute,
        ::std::string second
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform

    MCNAPI ~DurationFieldKeys();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::string, std::string, std::string);
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string days, ::std::string hours, ::std::string minutes, ::std::string seconds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
        $ctor(std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::string days,
        ::std::string hours,
        ::std::string minutes,
        ::std::string seconds,
        ::std::string day,
        ::std::string hour,
        ::std::string minute,
        ::std::string second
    );
#endif // @header-generator platform
    // NOLINTEND
};

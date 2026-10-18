#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ListTag;
// clang-format on

class GameVersion {
public:
    // GameVersion inner types define
    enum class Octet : uint {
#if defined(LL_PLAT_A) // @header-generator platform
        MAJOR      = 0,
        MINOR      = 1,
        PATCH      = 2,
        REVISION   = 3,
        BETA       = 4,
        NUM_OCTETS = 5,
        INVALID    = 5,
#else // @header-generator platform
        Major     = 0,
        Minor     = 1,
        Patch     = 2,
        Revision  = 3,
        Beta      = 4,
        NumOctets = 5,
        Invalid   = 5,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 20, uint[5]>     mDigit;
    ::ll::TypedStorage<8, 24, std::string> mString;
#else // @header-generator platform
    ::ll::TypedStorage<4, 20, uint[5]>       mDigit;
    ::ll::TypedStorage<8, 32, ::std::string> mString;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    GameVersion();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit GameVersion(::ListTag const&);
#else // @header-generator platform
    MCAPI explicit GameVersion(::ListTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameVersion(::GameVersion const&);
#else // @header-generator platform
    MCAPI GameVersion(uint major, uint minor, uint patch, uint revision, uint isBeta);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameVersion(uint, uint, uint, uint, uint);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool operator!=(::GameVersion const& other) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& asString() const;
#else // @header-generator platform
    MCAPI bool operator<(::GameVersion const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint octet(::GameVersion::Octet const) const;
#else // @header-generator platform
    MCAPI bool operator>=(::GameVersion const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator!=(::GameVersion const&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::ListTag> serialize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator<(::GameVersion const&) const;

    MCNAPI bool operator<=(::GameVersion const&) const;

    MCNAPI bool operator>(::GameVersion const&) const;

    MCNAPI bool operator>=(::GameVersion const&) const;

    MCNAPI std::unique_ptr<ListTag> serialize() const;

    MCNAPI ~GameVersion();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::GameVersion current();
#else // @header-generator platform
    MCAPI ~GameVersion();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::GameVersion const& Zero();
#else // @header-generator platform
    MCAPI static ::GameVersion const& Zero();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ListTag const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ListTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::GameVersion const&);

    MCNAPI void* $ctor(uint, uint, uint, uint, uint);
#else // @header-generator platform
    MCAPI void* $ctor(uint major, uint minor, uint patch, uint revision, uint isBeta);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

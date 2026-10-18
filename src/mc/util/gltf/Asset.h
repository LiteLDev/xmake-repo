#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace glTF {

struct Asset {
public:
    // Asset inner types declare
    // clang-format off
    struct Profile;
    // clang-format on

    // Asset inner types define
    struct Profile {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string> api;
        ::ll::TypedStorage<8, 24, std::string> version;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 32> mUnk14e3e0;
        ::ll::UntypedStorage<8, 32> mUnk991769;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Profile& operator=(Profile const&);
#endif // @header-generator platform
        Profile(Profile const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        Profile();
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>            copyright;
    ::ll::TypedStorage<8, 24, std::string>            generator;
    ::ll::TypedStorage<8, 48, ::glTF::Asset::Profile> profile;
    ::ll::TypedStorage<8, 24, std::string>            version;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnka9b901;
    ::ll::UntypedStorage<8, 32> mUnkf64d1e;
    ::ll::UntypedStorage<8, 64> mUnk6ecbd8;
    ::ll::UntypedStorage<8, 32> mUnk61b709;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    Asset(Asset const&);

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Asset& operator=(Asset const&);
    Asset(Asset const&);
    Asset();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Asset(Asset const&);
    Asset();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Asset();

    MCNAPI ~Asset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::glTF::Asset& operator=(::glTF::Asset const&);

    MCNAPI ~Asset();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace glTF

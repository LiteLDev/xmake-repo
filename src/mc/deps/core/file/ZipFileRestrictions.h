#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathView; }
// clang-format on

namespace Core::ZipUtils {

class ZipFileRestrictions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::set<std::string>> mForbiddenExtensions;
    ::ll::TypedStorage<8, 24, std::set<std::string>> mRestrictedExtensions;
    ::ll::TypedStorage<8, 24, std::set<std::string>> mForbiddenFilenames;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>> mForbiddenExtensions;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>> mRestrictedExtensions;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>> mForbiddenFilenames;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ZipFileRestrictions& operator=(ZipFileRestrictions const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ZipFileRestrictions(::Core::ZipUtils::ZipFileRestrictions const&);
#else // @header-generator platform
    MCAPI ZipFileRestrictions();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addRestrictedExtensions(std::vector<std::string> const&);
#else // @header-generator platform
    MCAPI void addRestrictedExtensions(::std::vector<::std::string> const& extensions);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool allowFile(::Core::PathView) const;
#else // @header-generator platform
    MCAPI bool allowFile(::Core::PathView file) const;

#ifdef LL_PLAT_C
    MCAPI ~ZipFileRestrictions();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Core::ZipUtils::ZipFileRestrictions const&);
#else // @header-generator platform
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Core::ZipUtils

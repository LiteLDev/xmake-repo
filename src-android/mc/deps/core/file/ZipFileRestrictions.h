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
    ::ll::TypedStorage<8, 24, std::set<std::string>> mForbiddenExtensions;
    ::ll::TypedStorage<8, 24, std::set<std::string>> mRestrictedExtensions;
    ::ll::TypedStorage<8, 24, std::set<std::string>> mForbiddenFilenames;
    // NOLINTEND

public:
    // prevent constructor by default
    ZipFileRestrictions& operator=(ZipFileRestrictions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ZipFileRestrictions(::Core::ZipUtils::ZipFileRestrictions const&);

    MCNAPI void addRestrictedExtensions(std::vector<std::string> const&);

    MCNAPI bool allowFile(::Core::PathView) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::ZipUtils::ZipFileRestrictions const&);
    // NOLINTEND
};

} // namespace Core::ZipUtils

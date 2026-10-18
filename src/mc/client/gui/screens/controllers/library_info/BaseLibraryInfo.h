#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LibraryInfo {

#if defined(LL_PLAT_A) // @header-generator platform
struct BaseLibraryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mSectionHeader;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BaseLibraryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mSectionHeader;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseLibraryInfo() = default;

    virtual ::std::string_view getType() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
struct BaseLibraryInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace LibraryInfo

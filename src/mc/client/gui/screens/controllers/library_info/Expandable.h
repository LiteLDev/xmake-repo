#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/library_info/BaseLibraryInfo.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/library_info/BaseLibraryInfo.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace LibraryInfo {

#if defined(LL_PLAT_A) // @header-generator platform
struct Expandable : public ::LibraryInfo::BaseLibraryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mBodyText;
    ::ll::TypedStorage<1, 1, bool>         mCanExpand;
    ::ll::TypedStorage<1, 1, bool>         mExpanded;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Expandable : public ::LibraryInfo::BaseLibraryInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mBodyText;
    ::ll::TypedStorage<1, 1, bool>           mCanExpand;
    ::ll::TypedStorage<1, 1, bool>           mExpanded;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string_view getType() const /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& EXPANDABLE_KEY();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getType() const;
    // NOLINTEND
};
#else // @header-generator platform
struct Expandable {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace LibraryInfo

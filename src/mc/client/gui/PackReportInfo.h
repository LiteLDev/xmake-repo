#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class PackReport;
// clang-format on

struct PackReportInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackReport&>      packReport;
    ::ll::TypedStorage<8, 8, std::string const&> fileName;
    ::ll::TypedStorage<8, 8, std::string const&> controlName;
    // NOLINTEND

public:
    // prevent constructor by default
    PackReportInfo& operator=(PackReportInfo const&);
    PackReportInfo(PackReportInfo const&);
    PackReportInfo();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class PackReport;
// clang-format on

struct PackReportInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackReport&>        packReport;
    ::ll::TypedStorage<8, 8, ::std::string const&> fileName;
    ::ll::TypedStorage<8, 8, ::std::string const&> controlName;
    // NOLINTEND

public:
    // prevent constructor by default
    PackReportInfo& operator=(PackReportInfo const&);
    PackReportInfo(PackReportInfo const&);
    PackReportInfo();
};
#else // @header-generator platform
struct PackReportInfo {};
#endif // @header-generator platform
#endif // @header-generator platform

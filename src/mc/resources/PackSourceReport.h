#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/resources/PackReport.h"
#else // @header-generator platform
#endif // @header-generator platform

class PackSourceReport {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<PackIdVersion, PackReport>> mReports;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkae94ca;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceReport& operator=(PackSourceReport const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PackSourceReport(PackSourceReport const&);
    PackSourceReport();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addReport(::PackIdVersion const&, ::PackReport&&);

    MCNAPI ::PackReport const* getReport(::PackIdVersion const&) const;

    MCNAPI bool hasErrors() const;

    MCNAPI void merge(::PackSourceReport&&);

    MCNAPI ~PackSourceReport();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI void merge(::PackSourceReport&& other);
#endif // @header-generator platform
    // NOLINTEND
};

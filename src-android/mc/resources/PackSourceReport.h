#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/resources/PackReport.h"

class PackSourceReport {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<PackIdVersion, PackReport>> mReports;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSourceReport& operator=(PackSourceReport const&);

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND
};

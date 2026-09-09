#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct DREDData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                      m_enableDRED;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> m_breadCrumbStrings;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> m_pageFaultFreedDataStrings;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> m_pageFaultExistingDataStrings;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DREDData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace bgfx

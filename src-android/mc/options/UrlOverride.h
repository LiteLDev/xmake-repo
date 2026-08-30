#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UrlOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> feedbackURLOverride;
    ::ll::TypedStorage<8, 24, std::string> eligibilityURLOverride;
    ::ll::TypedStorage<8, 24, std::string> clientDownloadURLOverride;
    // NOLINTEND

public:
    // prevent constructor by default
    UrlOverride& operator=(UrlOverride const&);
    UrlOverride();
};

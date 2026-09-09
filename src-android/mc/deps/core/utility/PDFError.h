#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PDFError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> reason;
    // NOLINTEND

public:
    // prevent constructor by default
    PDFError& operator=(PDFError const&);
    PDFError();
};

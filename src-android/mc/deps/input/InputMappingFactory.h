#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct InputMapping;
// clang-format on

class InputMappingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputMappingFactory() = default;

    virtual ::InputMapping const* getMapping(std::string const&) = 0;
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IScreenChangedEventing {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IScreenChangedEventing() = default;

    virtual void fireEventScreenChanged(uint const&, std::string const&, std::unordered_map<std::string, std::string> const&) = 0;

    virtual void fireEventImGuiScreenChanged(std::string const&, std::unordered_map<std::string, std::string> const&) = 0;
    // clang-format on
    // NOLINTEND
};

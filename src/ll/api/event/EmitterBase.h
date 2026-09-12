#pragma once

#include "ll/api/base/Macro.h"

namespace ll::event {
class LL_TYPE_API EmitterBase {
public:
    EmitterBase()          = default;
    virtual ~EmitterBase() = default;

    EmitterBase(EmitterBase&&)                 = delete;
    EmitterBase(EmitterBase const&)            = delete;
    EmitterBase& operator=(EmitterBase&&)      = delete;
    EmitterBase& operator=(EmitterBase const&) = delete;
};
} // namespace ll::event

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/AssertHandlerContext.h"

class DebugAssertException : public ::std::exception {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::AssertHandlerContext> mContext;
    ::ll::TypedStorage<8, 24, std::string>             mWhat;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugAssertException();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* what() const noexcept;
    // NOLINTEND
};

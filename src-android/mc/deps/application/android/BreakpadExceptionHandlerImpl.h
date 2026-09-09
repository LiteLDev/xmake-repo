#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/BreakpadExceptionHandler.h"

// auto generated forward declare list
// clang-format off
namespace google_breakpad { class ExceptionHandler; }
namespace google_breakpad { class MinidumpDescriptor; }
// clang-format on

namespace Bedrock {

class BreakpadExceptionHandlerImpl : public ::Bedrock::BreakpadExceptionHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<google_breakpad::ExceptionHandler>> mHandler;
    ::ll::TypedStorage<8, 8, bool (*)(bool)>                                     mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    BreakpadExceptionHandlerImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BreakpadExceptionHandlerImpl();

    virtual ::google_breakpad::ExceptionHandler* getHandler() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BreakpadExceptionHandlerImpl(std::string const&, std::string const&, bool (*)(bool));
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _dumpCallback(::google_breakpad::MinidumpDescriptor const&, void*, bool);

    MCNAPI static bool _filterCallback(void*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::string const&, bool (*)(bool));
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::google_breakpad::ExceptionHandler* $getHandler() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock

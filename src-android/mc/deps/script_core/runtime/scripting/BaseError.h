#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/CallStackEntry.h"

namespace Scripting {

struct BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                            name;
    ::ll::TypedStorage<8, 24, std::string>                            message;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>             sourceMapDebugId;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>             mPackName;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::CallStackEntry>> mCallStack;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>             mCallStackStr;
    ::ll::TypedStorage<1, 1, bool>                                    throwAsString;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseError(::Scripting::BaseError const&);

    MCNAPI BaseError(std::string const&, std::string const&);

    MCNAPI std::vector<Scripting::CallStackEntry> const& getCallStack() const;

    MCNAPI std::optional<std::string> const& getCallStackStr() const;

    MCNAPI std::optional<std::string_view> const getPackName() const;

    MCNAPI ::Scripting::BaseError& operator=(::Scripting::BaseError&&);

    MCNAPI ::Scripting::BaseError& operator=(::Scripting::BaseError const&);

    MCNAPI void setCallStack(std::string);

    MCNAPI void setPackName(std::string const&);

    MCNAPI std::string toString() const;

    MCNAPI ~BaseError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::BaseError const&);

    MCNAPI void* $ctor(std::string const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting

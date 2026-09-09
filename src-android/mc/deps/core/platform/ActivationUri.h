#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActivationUri {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                  mVerb;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>> mArguments;
    // NOLINTEND

public:
    // prevent constructor by default
    ActivationUri& operator=(ActivationUri const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ActivationUri const&) const;

    MCNAPI ~ActivationUri();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<std::string, std::string>
        extractArgumentsFromFilename(std::string_view, std::optional<std::string>);

    MCNAPI static std::unordered_map<std::string, std::string> extractArgumentsFromUri(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

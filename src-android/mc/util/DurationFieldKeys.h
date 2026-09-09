#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DurationFieldKeys {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> days;
    ::ll::TypedStorage<8, 24, std::string> hours;
    ::ll::TypedStorage<8, 24, std::string> minutes;
    ::ll::TypedStorage<8, 24, std::string> seconds;
    ::ll::TypedStorage<8, 24, std::string> day;
    ::ll::TypedStorage<8, 24, std::string> hour;
    ::ll::TypedStorage<8, 24, std::string> minute;
    ::ll::TypedStorage<8, 24, std::string> second;
    // NOLINTEND

public:
    // prevent constructor by default
    DurationFieldKeys();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DurationFieldKeys(std::string, std::string, std::string, std::string);

    MCNAPI DurationFieldKeys(
        std::string,
        std::string,
        std::string,
        std::string,
        std::string,
        std::string,
        std::string,
        std::string
    );

    MCNAPI ~DurationFieldKeys();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string, std::string, std::string, std::string);

    MCNAPI void*
        $ctor(std::string, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

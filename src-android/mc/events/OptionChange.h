#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class OptionChange {
public:
    // OptionChange inner types define
    using OptionValue = std::variant<bool, int, float, std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                          mNumberOfChanges;
    ::ll::TypedStorage<8, 32, std::variant<bool, int, float, std::string>> mInitialValue;
    ::ll::TypedStorage<8, 32, std::variant<bool, int, float, std::string>> mCurrentValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OptionChange(std::variant<bool, int, float, std::string>, std::variant<bool, int, float, std::string>);

    MCNAPI void changeOption(std::variant<bool, int, float, std::string>);

    MCNAPI bool checkIfOptionChanged() const;

    MCNAPI int getNumberOfChanges() const;

    MCNAPI ::Social::Events::OptionChange& operator=(::Social::Events::OptionChange&&);

    MCNAPI ~OptionChange();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::variant<bool, int, float, std::string>, std::variant<bool, int, float, std::string>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events

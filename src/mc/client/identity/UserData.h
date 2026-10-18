#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class UserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>   mIsValid;
    ::ll::TypedStorage<8, 24, std::string> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getBool() const;

    MCNAPI int getInt() const;

    MCNAPI std::string const& getString() const;

    MCNAPI bool isValid() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Social::UserData const boolValue(bool);

    MCNAPI static ::Social::UserData const intValue(int);

    MCNAPI static ::Social::UserData const invalidValue();

    MCNAPI static ::Social::UserData const stringValue(std::string const&);
    // NOLINTEND
};
#else // @header-generator platform
class UserData {};
#endif // @header-generator platform

} // namespace Social

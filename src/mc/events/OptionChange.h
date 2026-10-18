#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class OptionChange {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // OptionChange inner types define
    using OptionValue = std::variant<bool, int, float, std::string>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                          mNumberOfChanges;
    ::ll::TypedStorage<8, 32, std::variant<bool, int, float, std::string>> mInitialValue;
    ::ll::TypedStorage<8, 32, std::variant<bool, int, float, std::string>> mCurrentValue;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk9ee2e3;
    ::ll::UntypedStorage<8, 40> mUnkcb95d9;
    ::ll::UntypedStorage<8, 40> mUnkef2dc2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    OptionChange& operator=(OptionChange const&);
    OptionChange(OptionChange const&);
    OptionChange();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI OptionChange(std::variant<bool, int, float, std::string>, std::variant<bool, int, float, std::string>);

    MCNAPI void changeOption(std::variant<bool, int, float, std::string>);

    MCNAPI bool checkIfOptionChanged() const;

    MCNAPI int getNumberOfChanges() const;

    MCNAPI ::Social::Events::OptionChange& operator=(::Social::Events::OptionChange&&);

    MCNAPI ~OptionChange();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI OptionChange(
        ::std::variant<bool, int, float, ::std::string> initialValue,
        ::std::variant<bool, int, float, ::std::string> currentValue
    );

    MCNAPI void changeOption(::std::variant<bool, int, float, ::std::string> currentValue);

    MCNAPI ~OptionChange();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::variant<bool, int, float, std::string>, std::variant<bool, int, float, std::string>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::variant<bool, int, float, ::std::string> initialValue,
        ::std::variant<bool, int, float, ::std::string> currentValue
    );
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Social::Events

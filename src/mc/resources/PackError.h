#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackErrorType.h"

// auto generated forward declare list
// clang-format off
class I18n;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PackError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mErrorParameters;
    ::ll::TypedStorage<4, 4, int>                       mErrorValue;
    ::ll::TypedStorage<4, 4, ::PackErrorType>           mPackErrorType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mErrorParameters;
    ::ll::TypedStorage<4, 4, int>                           mErrorValue;
    ::ll::TypedStorage<4, 4, ::PackErrorType>               mPackErrorType;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PackError();
#else // @header-generator platform
    virtual ~PackError() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLocErrorMessage(::I18n&) const;
#else // @header-generator platform
    virtual ::std::string getLocErrorMessage(::I18n& loc) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const = 0;
#else // @header-generator platform
    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const = 0;
#else // @header-generator platform
    virtual ::std::unordered_map<int, ::std::string> const& getEventErrorMessageMap() const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PackError(::PackErrorType, std::vector<std::string> const&);

    MCNAPI std::vector<std::string> const& getErrorParameters() const;

    MCNAPI int getErrorValue() const;

    MCNAPI std::string getEventErrorMessage() const;

    MCNAPI ::PackErrorType getPackErrorType() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackErrorType, std::vector<std::string> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI ::std::string getEventErrorMessage() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getLocErrorMessage(::I18n&) const;
#else // @header-generator platform
    MCNAPI ::std::string $getLocErrorMessage(::I18n& loc) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

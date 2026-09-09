#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackErrorType.h"

// auto generated forward declare list
// clang-format off
class I18n;
namespace Json { class Value; }
// clang-format on

class PackError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mErrorParameters;
    ::ll::TypedStorage<4, 4, int>                       mErrorValue;
    ::ll::TypedStorage<4, 4, ::PackErrorType>           mPackErrorType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackError();

    virtual std::string getLocErrorMessage(::I18n&) const;

    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const = 0;

    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getLocErrorMessage(::I18n&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

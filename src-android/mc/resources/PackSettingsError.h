#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

// auto generated forward declare list
// clang-format off
class I18n;
// clang-format on

class PackSettingsError : public ::PackError {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackSettingsError();

    virtual std::string getLocErrorMessage(::I18n&) const;

    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PackSettingsError(std::vector<std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<std::string> const&);
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

    MCNAPI std::unordered_map<int, std::string> const& $getLocErrorMessageMap() const;

    MCNAPI std::unordered_map<int, std::string> const& $getEventErrorMessageMap() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PackSettingsError();
#else // @header-generator platform
    virtual ::std::string getLocErrorMessage(::I18n& loc) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLocErrorMessage(::I18n&) const;
#else // @header-generator platform
    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::std::unordered_map<int, ::std::string> const& getEventErrorMessageMap() const /*override*/;
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<int, std::string> const& $getLocErrorMessageMap() const;
#else // @header-generator platform
    MCNAPI ::std::unordered_map<int, ::std::string> const& $getLocErrorMessageMap() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<int, std::string> const& $getEventErrorMessageMap() const;
#else // @header-generator platform
    MCNAPI ::std::unordered_map<int, ::std::string> const& $getEventErrorMessageMap() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

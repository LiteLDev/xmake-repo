#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/resources/PackParseErrorType.h"
#else // @header-generator platform
#endif // @header-generator platform

class EducationMetadataError : public ::PackError {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    EducationMetadataError& operator=(EducationMetadataError const&);

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~EducationMetadataError();
#else // @header-generator platform
    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;
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
    MCNAPI std::unordered_map<int, std::string> const& $getLocErrorMessageMap() const;
#else // @header-generator platform
    MCNAPI ::std::unordered_map<int, ::std::string> const& $getLocErrorMessageMap() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<int, std::string> const& $getEventErrorMessageMap() const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI ::std::unordered_map<int, ::std::string> const& $getEventErrorMessageMap() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

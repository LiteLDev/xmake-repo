#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"
#include "mc/resources/PackParseErrorType.h"

class EducationMetadataError : public ::PackError {
public:
    // prevent constructor by default
    EducationMetadataError& operator=(EducationMetadataError const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EducationMetadataError();

    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unordered_map<int, std::string> const& $getLocErrorMessageMap() const;

    MCNAPI std::unordered_map<int, std::string> const& $getEventErrorMessageMap() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

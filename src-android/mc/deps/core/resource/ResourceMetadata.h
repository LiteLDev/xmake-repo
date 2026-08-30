#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

class ResourceMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mAuthors;
    ::ll::TypedStorage<8, 24, std::string>                                    mUrl;
    ::ll::TypedStorage<8, 24, std::string>                                    mLicense;
    ::ll::TypedStorage<8, 24, std::string>                                    mProductType;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::vector<SemVersion>>> mGeneratedWith;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourceMetadata(::ResourceMetadata const&);

    MCNAPI ::ResourceMetadata& operator=(::ResourceMetadata const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& PRODUCT_TYPE_ADD_ON();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceMetadata const&);
    // NOLINTEND
};

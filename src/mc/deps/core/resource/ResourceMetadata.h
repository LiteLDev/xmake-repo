#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#else // @header-generator platform
#endif // @header-generator platform

class ResourceMetadata {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                       mAuthors;
    ::ll::TypedStorage<8, 24, std::string>                                    mUrl;
    ::ll::TypedStorage<8, 24, std::string>                                    mLicense;
    ::ll::TypedStorage<8, 24, std::string>                                    mProductType;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::vector<SemVersion>>> mGeneratedWith;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk4b614e;
    ::ll::UntypedStorage<8, 32> mUnk29efd1;
    ::ll::UntypedStorage<8, 32> mUnk482403;
    ::ll::UntypedStorage<8, 32> mUnk94406c;
    ::ll::UntypedStorage<8, 16> mUnk7f5f40;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ResourceMetadata(ResourceMetadata const&);
    ResourceMetadata();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ResourceMetadata(::ResourceMetadata const&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::ResourceMetadata& operator=(::ResourceMetadata const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ~ResourceMetadata();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // static variables
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& PRODUCT_TYPE_ADD_ON();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ResourceMetadata const&);
#else // @header-generator platform
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/sem_ver/SemVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/json_schema/JSONSchemaArea.h"
#include "mc/json_schema/JSONSchemaPath.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersion;
// clang-format on
#endif // @header-generator platform

struct JSONSchemaProperty {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>     mName;
    ::ll::TypedStorage<1, 1, ::JSONSchemaArea> mArea;
    ::ll::UntypedStorage<1, 1>                 mPath;
    ::ll::UntypedStorage<8, 24>                mVersion;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk110567;
    ::ll::UntypedStorage<1, 1>  mUnk4e5112;
    ::ll::UntypedStorage<1, 1>  mUnk8eba3a;
    ::ll::UntypedStorage<8, 24> mUnkfb161b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    JSONSchemaProperty& operator=(JSONSchemaProperty const&);
#endif // @header-generator platform
    JSONSchemaProperty();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JSONSchemaProperty(::JSONSchemaProperty const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI JSONSchemaProperty(
        ::std::string    filename,
        ::JSONSchemaArea areaType,
        ::JSONSchemaPath pathType,
        ::SemVersion     optionalVersion
    );

    MCNAPI ::JSONSchemaProperty& operator=(::JSONSchemaProperty&&);
#endif // @header-generator platform

    MCNAPI ~JSONSchemaProperty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JSONSchemaProperty const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI void*
    $ctor(::std::string filename, ::JSONSchemaArea areaType, ::JSONSchemaPath pathType, ::SemVersion optionalVersion);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

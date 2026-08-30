#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/json_schema/JSONSchemaArea.h"
#include "mc/json_schema/JSONSchemaPath.h"

struct JSONSchemaProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>     mName;
    ::ll::TypedStorage<1, 1, ::JSONSchemaArea> mArea;
    ::ll::UntypedStorage<1, 1>                 mPath;
    ::ll::UntypedStorage<8, 24>                mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaProperty();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JSONSchemaProperty(::JSONSchemaProperty const&);

    MCNAPI ~JSONSchemaProperty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JSONSchemaProperty const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"

namespace JsonUtil {

class JsonSchemaNodeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>               mSchemaName;
    ::ll::UntypedStorage<8, 24>                             mSchemaVersion;
    ::ll::TypedStorage<1, 1, bool>                          mNoValidationOrDocumentation;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::string>> mPrettyName;
    ::ll::TypedStorage<1, 1, bool>                          mForceNameRegExCaseInsensitive;
    ::ll::TypedStorage<8, 40, ::HashedString>               mJsonSchemaTypeName;
    ::ll::TypedStorage<8, 8, ulong>                         mMinChildren;
    ::ll::TypedStorage<8, 8, ulong>                         mMaxChildren;
    ::ll::TypedStorage<8, 24, std::string>                  mValidValuesDocumentation;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JsonSchemaNodeBase();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace JsonUtil

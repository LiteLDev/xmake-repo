#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace JsonUtil {

class JsonSchemaNodeBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>               mSchemaName;
    ::ll::UntypedStorage<8, 24>                             mSchemaVersion;
    ::ll::TypedStorage<1, 1, bool>                          mNoValidationOrDocumentation;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::string>> mPrettyName;
    ::ll::TypedStorage<1, 1, bool>                          mForceNameRegExCaseInsensitive;
    ::ll::TypedStorage<8, 40, ::HashedString>               mJsonSchemaTypeName;
    ::ll::TypedStorage<8, 8, ulong>                         mMinChildren;
    ::ll::TypedStorage<8, 8, ulong>                         mMaxChildren;
    ::ll::TypedStorage<8, 24, std::string>                  mValidValuesDocumentation;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 48> mUnk689ef1;
    ::ll::UntypedStorage<8, 24> mUnk26697d;
    ::ll::UntypedStorage<1, 1>  mUnk2cf354;
    ::ll::UntypedStorage<8, 16> mUnk7537b9;
    ::ll::UntypedStorage<1, 1>  mUnk53cc41;
    ::ll::UntypedStorage<8, 48> mUnkc96539;
    ::ll::UntypedStorage<8, 8>  mUnk972890;
    ::ll::UntypedStorage<8, 8>  mUnk58f69a;
    ::ll::UntypedStorage<8, 32> mUnk12ba7c;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    JsonSchemaNodeBase& operator=(JsonSchemaNodeBase const&);
    JsonSchemaNodeBase(JsonSchemaNodeBase const&);
    JsonSchemaNodeBase();
#endif // @header-generator platform

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

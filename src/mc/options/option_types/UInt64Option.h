#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"
#else // @header-generator platform
#endif // @header-generator platform

class UInt64Option : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ulong const>         VALUE_MAX;
    ::ll::TypedStorage<8, 8, ulong const>         VALUE_MIN;
    ::ll::TypedStorage<8, 8, ulong>               mValue;
    ::ll::TypedStorage<8, 8, ulong>               mDefaultValue;
    ::ll::TypedStorage<1, 1, bool>                mClampToRange;
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mPossibleValues;
    ::ll::UntypedStorage<8, 48>                   mCoerceSaveValueCallback;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64 const>               VALUE_MAX;
    ::ll::TypedStorage<8, 8, uint64 const>               VALUE_MIN;
    ::ll::TypedStorage<8, 8, uint64>                     mValue;
    ::ll::TypedStorage<8, 8, uint64>                     mDefaultValue;
    ::ll::TypedStorage<1, 1, bool>                       mClampToRange;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>     mPossibleValues;
    ::ll::TypedStorage<8, 64, ::std::function<int(int)>> mCoerceSaveValueCallback;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    UInt64Option();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~UInt64Option() = default;
#else // @header-generator platform
    virtual ~UInt64Option() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void save(std::vector<std::pair<std::string, std::string>>&);
#else // @header-generator platform
    virtual void save(::std::vector<::std::pair<::std::string, ::std::string>>&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void load(std::string const&);
#else // @header-generator platform
    virtual void load(::std::string const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

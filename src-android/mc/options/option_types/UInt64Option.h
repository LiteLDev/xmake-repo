#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionOwnerType.h"
#include "mc/options/option_types/OptionResetFlags.h"

class UInt64Option : public ::Option {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ulong const>         VALUE_MAX;
    ::ll::TypedStorage<8, 8, ulong const>         VALUE_MIN;
    ::ll::TypedStorage<8, 8, ulong>               mValue;
    ::ll::TypedStorage<8, 8, ulong>               mDefaultValue;
    ::ll::TypedStorage<1, 1, bool>                mClampToRange;
    ::ll::TypedStorage<8, 24, std::vector<ulong>> mPossibleValues;
    ::ll::UntypedStorage<8, 48>                   mCoerceSaveValueCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    UInt64Option();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UInt64Option() = default;

    virtual void save(std::vector<std::pair<std::string, std::string>>&);

    virtual void load(std::string const&);
    // NOLINTEND
};

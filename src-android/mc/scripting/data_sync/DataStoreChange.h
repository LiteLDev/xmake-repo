#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"

namespace Bedrock::DDUI {

struct DataStoreChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>            mDataStoreName;
    ::ll::TypedStorage<8, 24, std::string>            mProperty;
    ::ll::TypedStorage<4, 4, uint>                    mUpdateCount;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mNewData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataStoreChange(::Bedrock::DDUI::DataStoreChange const&);

    MCNAPI bool operator==(::Bedrock::DDUI::DataStoreChange const&) const;

    MCNAPI ~DataStoreChange();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::DDUI::DataStoreChange const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
